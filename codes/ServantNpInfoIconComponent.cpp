void ServantNpInfoIconComponent___ctor(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantNpInfoIconComponent__SetCommandCardComponent(
        ServantNpInfoIconComponent_o *this,
        SvtUseNpData_o *npData,
        const MethodInfo *method)
{
  BattleCommandComponent_o *commandCard; // x0
  struct BattleCommandComponent_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t npCardId; // w22
  int32_t svtId; // w23
  int32_t limitCount; // w24
  BattleCommandData_o *v12; // x21

  if ( (byte_4C2B54D & 1) == 0 )
  {
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_15128/*"Unlit/Transparent Colored"*/);
    byte_4C2B54D = 1;
  }
  commandCard = this->fields.commandCard;
  if ( !commandCard )
    goto LABEL_14;
  BattleCommandComponent__setDepth(commandCard, 110, 0);
  v6 = this->fields.commandCard;
  commandCard = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v6 )
    goto LABEL_14;
  v6->fields.target = (struct UnityEngine_GameObject_o *)commandCard;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.target, (int32_t)commandCard, v7, v8);
  if ( !npData )
    goto LABEL_14;
  npCardId = npData->fields.npCardId;
  svtId = npData->fields.svtId;
  limitCount = npData->fields.limitCount;
  v12 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46333400(v12, npCardId, svtId, limitCount, 0, -1, 0);
  if ( !v12 )
    goto LABEL_14;
  v12->fields.treasureDvc = npData->fields.svtDispNpId;
  commandCard = (BattleCommandComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commandCard )
    goto LABEL_14;
  commandCard = (BattleCommandComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)commandCard,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !commandCard )
    goto LABEL_14;
  v12->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                (ServantLimitImageMaster_o *)commandCard,
                                npData->fields.svtId,
                                npData->fields.dispLimitCount,
                                0);
  commandCard = this->fields.commandCard;
  if ( !commandCard
    || (BattleCommandComponent__setData(commandCard, v12, 0, 0, 1, 0, 1, 0),
        (commandCard = this->fields.commandCard) == 0)
    || (BattleCommandComponent__setShader(commandCard, (System_String_o *)StringLiteral_15128/*"Unlit/Transparent Colored"*/, 0),
        (commandCard = this->fields.commandCard) == 0)
    || (BattleCommandComponent__updateView(commandCard, 1, 0, 1, 0, npData->fields.isCardHide, 0),
        (commandCard = this->fields.commandCard) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(commandCard, npData);
  }
  BattleCommandComponent__setTouchFlg(commandCard, 0, 0);
}


void ServantNpInfoIconComponent__SetNpInfo(
        ServantNpInfoIconComponent_o *this,
        UserServantEntity_o *baseData,
        int32_t idx,
        SvtUseNpData_o *npData,
        float npBasePosY,
        float npIconPosY,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backSprite; // x0
  const MethodInfo *v13; // x2
  UserServantEntity_o *v14; // x1
  const MethodInfo *v15; // x3

  backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !backSprite
    || (backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0),
        this->fields._infoIndex_k__BackingField = idx,
        !npData)
    || (backSprite = (UnityEngine_Component_o *)this->fields.tdNameRubyLabel) == 0
    || (UILabel__set_text((UILabel_o *)backSprite, npData->fields.npRuby, 0),
        (backSprite = (UnityEngine_Component_o *)this->fields.tdNameLabel) == 0) )
  {
    sub_1C2D6EC(backSprite, baseData);
  }
  UILabel__set_text((UILabel_o *)backSprite, npData->fields.svtNpName, 0);
  GameObjectExtensions__AddLocalPositionY(this->fields.commandCardBase, npBasePosY, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel_48283612(
    npData->fields.svtId,
    npData->fields.dispLimitCount,
    this->fields.tdNameLabel,
    this->fields.tdNameRubyLabel,
    0);
  WrapControlText__textBBCodeAdjust(this->fields.tdDetailLabel, npData->fields.svtNpdetail, 20, 0, 0);
  ServantNpInfoIconComponent__setNpLv(this, npData->fields.svtNpLv, v13);
  ServantNpInfoIconComponent__setNpIconImg(this, v14, npData, npIconPosY, v15);
}


void ServantNpInfoIconComponent__getNpInfo(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t ServantNpInfoIconComponent__get_infoIndex(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._infoIndex_k__BackingField;
}


void ServantNpInfoIconComponent__setDispSelectMskImg(
        ServantNpInfoIconComponent_o *this,
        bool isShow,
        const MethodInfo *method)
{
  ;
}


void ServantNpInfoIconComponent__setNpIconImg(
        ServantNpInfoIconComponent_o *this,
        UserServantEntity_o *baseUsrSvtData,
        SvtUseNpData_o *npData,
        float npIconPosY,
        const MethodInfo *method)
{
  ServantNpInfoIconComponent_o *v7; // x20
  UnityEngine_Object_o *commandCard; // x22
  const MethodInfo *v9; // x2
  Il2CppObject *commandCardPrefab; // x22
  ServantNpInfoIconComponent_o *v11; // x22
  UnityEngine_Transform_o *transform; // x23
  float x; // s9
  float y; // s10
  float z; // s11
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_4C2B54C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (ServantNpInfoIconComponent_o *)sub_1C2D490(&StringLiteral_4574/*"CommandCard"*/);
    byte_4C2B54C = 1;
  }
  if ( !npData )
    goto LABEL_19;
  if ( npData->fields.svtUseNpId >= 1 )
  {
    commandCard = (UnityEngine_Object_o *)v7->fields.commandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(commandCard, 0, 0) )
      goto LABEL_17;
    commandCardPrefab = (Il2CppObject *)v7->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantNpInfoIconComponent_o *)UnityEngine_Object__Instantiate_object_(
                                             commandCardPrefab,
                                             (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v11 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
      if ( this )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
        x = localScale.fields.x;
        y = localScale.fields.y;
        z = localScale.fields.z;
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_4574/*"CommandCard"*/, 0);
        this = (ServantNpInfoIconComponent_o *)v7->fields.commandCardBase;
        if ( this )
        {
          this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
            v20.fields.x = 0.0;
            v20.fields.z = 0.0;
            v20.fields.y = npIconPosY;
            UnityEngine_Transform__set_localPosition(transform, v20, 0);
            if ( !byte_4C20DA7 )
            {
              sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
              byte_4C20DA7 = 1;
            }
            UnityEngine_Transform__set_localRotation(
              transform,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0);
            v21.fields.x = x;
            v21.fields.y = y;
            v21.fields.z = z;
            UnityEngine_Transform__set_localScale(transform, v21, 0);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v11,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            v7->fields.commandCard = (struct BattleCommandComponent_o *)Component_object;
            sub_1C2D434((CGThumbnailListItem_o *)&v7->fields.commandCard, (int32_t)Component_object, v17, v18);
LABEL_17:
            ServantNpInfoIconComponent__SetCommandCardComponent(v7, npData, v9);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1C2D6EC(this, baseUsrSvtData);
  }
}


void ServantNpInfoIconComponent__setNpLv(ServantNpInfoIconComponent_o *this, int32_t lv, const MethodInfo *method)
{
  UILabel_o *levelLabel; // x21
  System_String_o *v6; // x22
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *gameObject; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2B54E & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8256/*"LEVEL_INFO"*/);
    byte_4C2B54E = 1;
  }
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8256/*"LEVEL_INFO"*/, 0);
  v13 = lv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v7, v8, v9);
  gameObject = System_String__Format(v6, v10, 0);
  if ( !levelLabel
    || (UILabel__set_text(levelLabel, gameObject, 0), (gameObject = (System_String_o *)this->fields.levelLabel) == 0)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C2D6EC(gameObject, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
}


void ServantNpInfoIconComponent__set_infoIndex(
        ServantNpInfoIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._infoIndex_k__BackingField = value;
}


void ServantNpInfoIconComponent_ClickDelegate___ctor(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76AA8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76A60;
}


System_IAsyncResult_o *ServantNpInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C2B54F & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2B54F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void ServantNpInfoIconComponent_ClickDelegate__EndInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantNpInfoIconComponent_ClickDelegate__Invoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}