void ServantNpInfoIconComponent___ctor(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantNpInfoIconComponent__Awake(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  ;
}


void ServantNpInfoIconComponent__SetCommandCardComponent(
        ServantNpInfoIconComponent_o *this,
        SvtUseNpData_o *npData,
        const MethodInfo *method)
{
  BattleCommandComponent_o *commandCard; // x0
  struct BattleCommandComponent_o *v6; // x21
  int32_t npCardId; // w22
  int32_t svtId; // w23
  int32_t limitCount; // w24
  BattleCommandData_o *v10; // x21

  if ( (byte_4CB033D & 1) == 0 )
  {
    sub_1C6BA08(&BattleCommandData_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_15130/*"Unlit/Transparent Colored"*/);
    byte_4CB033D = 1;
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
  commandCard = (BattleCommandComponent_o *)sub_1C6B9AC(&v6->fields.target, commandCard);
  if ( !npData )
    goto LABEL_14;
  npCardId = npData->fields.npCardId;
  svtId = npData->fields.svtId;
  limitCount = npData->fields.limitCount;
  v10 = (BattleCommandData_o *)sub_1C6BC54(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46872936(v10, npCardId, svtId, limitCount, 0, -1, 0);
  if ( !v10 )
    goto LABEL_14;
  v10->fields.treasureDvc = npData->fields.svtDispNpId;
  commandCard = (BattleCommandComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commandCard )
    goto LABEL_14;
  commandCard = (BattleCommandComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)commandCard,
                                              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !commandCard )
    goto LABEL_14;
  v10->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                (ServantLimitImageMaster_o *)commandCard,
                                npData->fields.svtId,
                                npData->fields.dispLimitCount,
                                0);
  commandCard = this->fields.commandCard;
  if ( !commandCard
    || (BattleCommandComponent__setData(commandCard, v10, 0, 0, 1, 0, 1, 0),
        (commandCard = this->fields.commandCard) == 0)
    || (BattleCommandComponent__setShader(commandCard, (System_String_o *)StringLiteral_15130/*"Unlit/Transparent Colored"*/, 0),
        (commandCard = this->fields.commandCard) == 0)
    || (BattleCommandComponent__updateView(commandCard, 1, 0, 1, 0, npData->fields.isCardHide, 0),
        (commandCard = this->fields.commandCard) == 0) )
  {
LABEL_14:
    sub_1C6BC60(commandCard, npData);
  }
  BattleCommandComponent__setTouchFlg(commandCard, 0, 0);
}


void ServantNpInfoIconComponent__SetNpInfo(
        ServantNpInfoIconComponent_o *this,
        UserServantEntity_o *baseData,
        int32_t idx,
        SvtUseNpData_o *npData,
        bool isTransformServant,
        float npBasePosY,
        float npIconPosY,
        const MethodInfo *method)
{
  UnityEngine_Component_o *backSprite; // x0
  UnityEngine_GameObject_o *detailRootTransformServant; // x0
  __int64 v16; // x22
  int v17; // w24
  __int64 v18; // x23
  int32_t v19; // w22
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  const MethodInfo *v24; // x2
  __int64 v25; // x8
  __int64 v26; // x8
  UserServantEntity_o *v27; // x1
  const MethodInfo *v28; // x3

  backSprite = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !backSprite )
    goto LABEL_32;
  backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0);
  if ( !backSprite )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0);
  this->fields._infoIndex_k__BackingField = idx;
  if ( !npData )
    goto LABEL_32;
  backSprite = (UnityEngine_Component_o *)this->fields.tdNameRubyLabel;
  if ( !backSprite )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)backSprite, npData->fields.npRuby, 0);
  backSprite = (UnityEngine_Component_o *)this->fields.tdNameLabel;
  if ( !backSprite )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)backSprite, npData->fields.svtNpName, 0);
  GameObjectExtensions__AddLocalPositionY(this->fields.commandCardBase, npBasePosY, 0);
  detailRootTransformServant = this->fields.detailRootTransformServant;
  this->fields.isTransformServantLayout = isTransformServant;
  GameObjectExtensions__SetLocalScale_36358148(detailRootTransformServant, 1.0, 0);
  backSprite = (UnityEngine_Component_o *)this->fields.detailRoot;
  if ( !backSprite )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, !isTransformServant, 0);
  backSprite = (UnityEngine_Component_o *)this->fields.detailRootTransformServant;
  if ( !backSprite )
    goto LABEL_32;
  v16 = isTransformServant ? 96LL : 88LL;
  v17 = isTransformServant ? 3 : 4;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, isTransformServant, 0);
  v18 = *(__int64 *)((char *)&this->klass + v16);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel_48853552(
    npData->fields.svtId,
    npData->fields.dispLimitCount,
    this->fields.tdNameLabel,
    this->fields.tdNameRubyLabel,
    0);
  if ( !v18 )
    goto LABEL_32;
  UIWidget__set_height((UIWidget_o *)v18, *(_DWORD *)(v18 + 424) * v17, 0);
  v19 = WrapControlText__textBBCodeAdjust(
          (UILabel_o *)v18,
          npData->fields.svtNpdetail,
          *(_DWORD *)(v18 + 424),
          *(_DWORD *)(v18 + 424),
          0);
  UIWidget__ResizeCollider((UIWidget_o *)v18, 0);
  v20 = 136;
  if ( this->fields.isTransformServantLayout )
    v20 = 152;
  backSprite = *(UnityEngine_Component_o **)((char *)&this->klass + v20);
  if ( !backSprite )
    goto LABEL_32;
  UIScrollView__ResetPosition((UIScrollView_o *)backSprite, 0);
  v21 = 128;
  if ( this->fields.isTransformServantLayout )
    v21 = 144;
  backSprite = *(UnityEngine_Component_o **)((char *)&this->klass + v21);
  if ( !backSprite )
    goto LABEL_32;
  UIProgressBar__set_value((UIProgressBar_o *)backSprite, npData->fields.scrollValue, 0);
  v22 = 136;
  if ( this->fields.isTransformServantLayout )
    v22 = 152;
  backSprite = *(UnityEngine_Component_o **)((char *)&this->klass + v22);
  if ( !backSprite )
    goto LABEL_32;
  UIScrollView__OnScrollBar((UIScrollView_o *)backSprite, 0);
  v23 = 128;
  if ( this->fields.isTransformServantLayout )
    v23 = 144;
  backSprite = *(UnityEngine_Component_o **)((char *)&this->klass + v23);
  if ( !backSprite )
    goto LABEL_32;
  backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0);
  if ( !backSprite )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, v19 > v17, 0);
  v25 = 176;
  if ( isTransformServant )
    v25 = 184;
  v26 = *(__int64 *)((char *)&this->klass + v25);
  if ( !v26 )
LABEL_32:
    sub_1C6BC60(backSprite, baseData);
  *(_BYTE *)(v26 + 50) = v19 <= v17;
  ServantNpInfoIconComponent__setNpLv(this, npData->fields.svtNpLv, v24);
  ServantNpInfoIconComponent__setNpIconImg(this, v27, npData, npIconPosY, v28);
}


void ServantNpInfoIconComponent__getNpInfo(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  ;
}


UIScrollBar_o *ServantNpInfoIconComponent__get_TextScrollBar(
        ServantNpInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 128;
  if ( this->fields.isTransformServantLayout )
    v2 = 144;
  return *(UIScrollBar_o **)((char *)&this->klass + v2);
}


UIScrollView_o *ServantNpInfoIconComponent__get_TextScrollView(
        ServantNpInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 136;
  if ( this->fields.isTransformServantLayout )
    v2 = 152;
  return *(UIScrollView_o **)((char *)&this->klass + v2);
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
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_4CB033C & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (ServantNpInfoIconComponent_o *)sub_1C6BA08(&StringLiteral_4572/*"CommandCard"*/);
    byte_4CB033C = 1;
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
                                             (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_4572/*"CommandCard"*/, 0);
        this = (ServantNpInfoIconComponent_o *)v7->fields.commandCardBase;
        if ( this )
        {
          this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
            v18.fields.x = 0.0;
            v18.fields.z = 0.0;
            v18.fields.y = npIconPosY;
            UnityEngine_Transform__set_localPosition(transform, v18, 0);
            if ( !byte_4CAFC0F )
            {
              sub_1C6BA08(&UnityEngine_Quaternion_TypeInfo);
              byte_4CAFC0F = 1;
            }
            UnityEngine_Transform__set_localRotation(
              transform,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0);
            v19.fields.x = x;
            v19.fields.y = y;
            v19.fields.z = z;
            UnityEngine_Transform__set_localScale(transform, v19, 0);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v11,
                                 (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            v7->fields.commandCard = (struct BattleCommandComponent_o *)Component_object;
            sub_1C6B9AC(&v7->fields.commandCard, Component_object);
LABEL_17:
            ServantNpInfoIconComponent__SetCommandCardComponent(v7, npData, v9);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1C6BC60(this, baseUsrSvtData);
  }
}


void ServantNpInfoIconComponent__setNpLv(ServantNpInfoIconComponent_o *this, int32_t lv, const MethodInfo *method)
{
  UILabel_o *levelLabel; // x21
  System_String_o *v6; // x22
  Il2CppObject *v7; // x0
  System_String_o *gameObject; // x0
  __int64 v9; // x1
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB033E & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8260/*"LEVEL_INFO"*/);
    byte_4CB033E = 1;
  }
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8260/*"LEVEL_INFO"*/, 0);
  v10 = lv;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  gameObject = System_String__Format(v6, v7, 0);
  if ( !levelLabel
    || (UILabel__set_text(levelLabel, gameObject, 0), (gameObject = (System_String_o *)this->fields.levelLabel) == 0)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C6BC60(gameObject, v9);
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
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A98920;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A988D8;
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
  if ( (byte_4CB033F & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB033F = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ServantNpInfoIconComponent_ClickDelegate__EndInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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