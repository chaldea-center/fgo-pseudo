void __fastcall ServantNpInfoIconComponent___ctor(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantNpInfoIconComponent__SetCommandCardComponent(
        ServantNpInfoIconComponent_o *this,
        SvtUseNpData_o *npData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleCommandComponent_o *commandCard; // x0
  struct BattleCommandComponent_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t npCardId; // w22
  int32_t svtId; // w23
  int32_t limitCount; // w24
  BattleCommandData_o *v19; // x21

  if ( (byte_4B6A921 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommandData_TypeInfo, npData);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BE4ACC(&StringLiteral_15333/*"Unlit/Transparent Colored"*/, v7);
    byte_4B6A921 = 1;
  }
  commandCard = this->fields.commandCard;
  if ( !commandCard )
    goto LABEL_14;
  BattleCommandComponent__setDepth(commandCard, 110, 0LL);
  v9 = this->fields.commandCard;
  commandCard = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v9 )
    goto LABEL_14;
  v9->fields.target = (struct UnityEngine_GameObject_o *)commandCard;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.target, (int64_t)commandCard, v10, v11, v12, v13, v14, v15);
  if ( !npData )
    goto LABEL_14;
  npCardId = npData->fields.npCardId;
  svtId = npData->fields.svtId;
  limitCount = npData->fields.limitCount;
  v19 = (BattleCommandData_o *)sub_1BE4D18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_44329868(v19, npCardId, svtId, limitCount, 0, -1, 0LL);
  if ( !v19 )
    goto LABEL_14;
  v19->fields.treasureDvc = npData->fields.svtDispNpId;
  commandCard = (BattleCommandComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commandCard )
    goto LABEL_14;
  commandCard = (BattleCommandComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)commandCard,
                                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !commandCard )
    goto LABEL_14;
  v19->fields._loadsvtLimit = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                (ServantLimitImageMaster_o *)commandCard,
                                npData->fields.svtId,
                                npData->fields.dispLimitCount,
                                0LL);
  commandCard = this->fields.commandCard;
  if ( !commandCard
    || (BattleCommandComponent__setData(commandCard, v19, 0LL, 0, 1, 0, 1, 0LL),
        (commandCard = this->fields.commandCard) == 0LL)
    || (BattleCommandComponent__setShader(commandCard, (System_String_o *)StringLiteral_15333/*"Unlit/Transparent Colored"*/, 0LL),
        (commandCard = this->fields.commandCard) == 0LL)
    || (BattleCommandComponent__updateView(commandCard, 1, 0, 1, 0, npData->fields.isCardHide, 0LL),
        (commandCard = this->fields.commandCard) == 0LL) )
  {
LABEL_14:
    sub_1BE4D28(commandCard, npData);
  }
  BattleCommandComponent__setTouchFlg(commandCard, 0, 0LL);
}


void __fastcall ServantNpInfoIconComponent__SetNpInfo(
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
    || (backSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSprite, 0, 0LL),
        this->fields._infoIndex_k__BackingField = idx,
        !npData)
    || (backSprite = (UnityEngine_Component_o *)this->fields.tdNameRubyLabel) == 0LL
    || (UILabel__set_text((UILabel_o *)backSprite, npData->fields.npRuby, 0LL),
        (backSprite = (UnityEngine_Component_o *)this->fields.tdNameLabel) == 0LL) )
  {
    sub_1BE4D28(backSprite, baseData);
  }
  UILabel__set_text((UILabel_o *)backSprite, npData->fields.svtNpName, 0LL);
  GameObjectExtensions__AddLocalPositionY(this->fields.commandCardBase, npBasePosY, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel_45998248(
    npData->fields.svtId,
    npData->fields.dispLimitCount,
    this->fields.tdNameLabel,
    this->fields.tdNameRubyLabel,
    0LL);
  WrapControlText__textBBCodeAdjust(this->fields.tdDetailLabel, npData->fields.svtNpdetail, 20, 0, 0LL);
  ServantNpInfoIconComponent__setNpLv(this, npData->fields.svtNpLv, v13);
  ServantNpInfoIconComponent__setNpIconImg(this, v14, npData, npIconPosY, v15);
}


void __fastcall ServantNpInfoIconComponent__getNpInfo(ServantNpInfoIconComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantNpInfoIconComponent__get_infoIndex(
        ServantNpInfoIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._infoIndex_k__BackingField;
}


void __fastcall ServantNpInfoIconComponent__setDispSelectMskImg(
        ServantNpInfoIconComponent_o *this,
        bool isShow,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantNpInfoIconComponent__setNpIconImg(
        ServantNpInfoIconComponent_o *this,
        UserServantEntity_o *baseUsrSvtData,
        SvtUseNpData_o *npData,
        float npIconPosY,
        const MethodInfo *method)
{
  ServantNpInfoIconComponent_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *commandCard; // x22
  const MethodInfo *v12; // x2
  Il2CppObject *commandCardPrefab; // x22
  ServantNpInfoIconComponent_o *v14; // x22
  UnityEngine_Transform_o *transform; // x23
  float x; // s9
  float y; // s10
  float z; // s11
  __int64 v19; // x1
  Il2CppObject *Component_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_4B6A920 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, baseUsrSvtData);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    this = (ServantNpInfoIconComponent_o *)sub_1BE4ACC(&StringLiteral_4690/*"CommandCard"*/, v10);
    byte_4B6A920 = 1;
  }
  if ( !npData )
    goto LABEL_19;
  if ( npData->fields.svtUseNpId >= 1 )
  {
    commandCard = (UnityEngine_Object_o *)v7->fields.commandCard;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
      goto LABEL_17;
    commandCardPrefab = (Il2CppObject *)v7->fields.commandCardPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantNpInfoIconComponent_o *)UnityEngine_Object__Instantiate_object_(
                                             commandCardPrefab,
                                             (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( this )
    {
      v14 = this;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v14, 0LL);
      if ( this )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
        x = localScale.fields.x;
        y = localScale.fields.y;
        z = localScale.fields.z;
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, (System_String_o *)StringLiteral_4690/*"CommandCard"*/, 0LL);
        this = (ServantNpInfoIconComponent_o *)v7->fields.commandCardBase;
        if ( this )
        {
          this = (ServantNpInfoIconComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
            v28.fields.x = 0.0;
            v28.fields.z = 0.0;
            v28.fields.y = npIconPosY;
            UnityEngine_Transform__set_localPosition(transform, v28, 0LL);
            if ( !byte_4B612E7 )
            {
              sub_1BE4ACC(&UnityEngine_Quaternion_TypeInfo, v19);
              byte_4B612E7 = 1;
            }
            UnityEngine_Transform__set_localRotation(
              transform,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            v29.fields.x = x;
            v29.fields.y = y;
            v29.fields.z = z;
            UnityEngine_Transform__set_localScale(transform, v29, 0LL);
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v14,
                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
            v7->fields.commandCard = (struct BattleCommandComponent_o *)Component_object;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&v7->fields.commandCard,
              (int64_t)Component_object,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
LABEL_17:
            ServantNpInfoIconComponent__SetCommandCardComponent(v7, npData, v12);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1BE4D28(this, baseUsrSvtData);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantNpInfoIconComponent__setNpLv(
        ServantNpInfoIconComponent_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *levelLabel; // x21
  System_String_o *v8; // x22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *gameObject; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B6A922 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&lv);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&StringLiteral_8382/*"LEVEL_INFO"*/, v6);
    byte_4B6A922 = 1;
  }
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8382/*"LEVEL_INFO"*/, 0LL);
  v15 = lv;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
  gameObject = System_String__Format(v8, v12, 0LL);
  if ( !levelLabel
    || (UILabel__set_text(levelLabel, gameObject, 0LL), (gameObject = (System_String_o *)this->fields.levelLabel) == 0LL)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL)) == 0LL )
  {
    sub_1BE4D28(gameObject, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
}


void __fastcall ServantNpInfoIconComponent__set_infoIndex(
        ServantNpInfoIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._infoIndex_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantNpInfoIconComponent_ClickDelegate___ctor(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2B82C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2B7E4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantNpInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B6A923 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isDecide);
    byte_4B6A923 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ServantNpInfoIconComponent_ClickDelegate__EndInvoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall ServantNpInfoIconComponent_ClickDelegate__Invoke(
        ServantNpInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}