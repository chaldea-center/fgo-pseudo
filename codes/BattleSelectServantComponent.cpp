void BattleSelectServantComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BattleSelectServantComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCAB00 & 1) == 0 )
  {
    sub_1C713B0(&BattleSelectServantComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_21378/*"listframes3_bg"*/);
    sub_1C713B0(&StringLiteral_20472/*"img_frames_grand_mask11"*/);
    byte_4CCAB00 = 1;
  }
  BattleSelectServantComponent_TypeInfo->static_fields->MaskSpriteName = (struct System_String_o *)StringLiteral_21378/*"listframes3_bg"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleSelectServantComponent_TypeInfo->static_fields,
    StringLiteral_21378/*"listframes3_bg"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20472/*"img_frames_grand_mask11"*/;
  static_fields = BattleSelectServantComponent_TypeInfo->static_fields;
  static_fields->GrandMaskSpriteName = (struct System_String_o *)StringLiteral_20472/*"img_frames_grand_mask11"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->GrandMaskSpriteName, v7, v9, v10, v11, v12, v13, v14);
}


void BattleSelectServantComponent___ctor(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  this->fields.canSelectFlag = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleSelectServantComponent__ClearFaceAtlas(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantIcon; // x0

  servantIcon = this->fields.servantIcon;
  if ( !servantIcon )
    sub_1C71608(0, method);
  ServantFaceIconComponent__ClearFaceAtlas(servantIcon, 0);
}


void BattleSelectServantComponent__OnServantClick(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSelectServantComponent_CallBack_o *selectCallBack; // x8

  if ( (byte_4CCAAFF & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleSelectServantComponent_OnServantClick__);
    byte_4CCAAFF = 1;
  }
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    v3 = Method_BattleSelectServantComponent_OnServantClick__;
    if ( (*((_BYTE *)Method_BattleSelectServantComponent_OnServantClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_BattleSelectServantComponent_OnServantClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    selectCallBack = this->fields.selectCallBack;
    if ( selectCallBack )
      ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))selectCallBack->fields.invoke_impl)(
        selectCallBack->fields.method_code,
        (unsigned int)this->fields.position,
        (unsigned int)this->fields.uniqueId,
        selectCallBack->fields.method);
  }
}


void BattleSelectServantComponent__setData(
        BattleSelectServantComponent_o *this,
        BattleServantData_o *svtData,
        int32_t position,
        int32_t index,
        BattleSelectServantComponent_CallBack_o *call,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v12; // x1
  UnityEngine_GameObject_o *imageSvtId; // x0
  IconLabelInfo_o *v14; // x22
  ServantFaceIconComponent_o *servantIcon; // x23
  int32_t SvtId; // w24
  int32_t LimitCount; // w25
  int32_t IconImageLimitCount; // w0
  __int64 v19; // x27
  __int64 v20; // x28
  int32_t v21; // w26
  int32_t v22; // w0
  int32_t lv; // w28
  int32_t v24; // w27
  ServantFaceIconComponent_o *v25; // x23
  int32_t frameType_k__BackingField; // w22
  UnityEngine_GameObject_o *servantSelectMask; // x0
  Il2CppObject *Component_object; // x22
  BattleSelectServantComponent_c *v29; // x0
  System_String_o *GrandMaskSpriteName; // x23
  int32_t MaxHp; // w0
  struct BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x8
  int32_t v33; // w22
  int32_t AddMaxHp_k__BackingField; // w26
  int32_t NowHp; // w0
  struct BattleServantData_PreEntryStatus_o *v36; // x8
  int32_t v37; // w23
  int32_t GainNp_k__BackingField; // w25
  int32_t np; // w29
  int32_t MaxNp; // w24
  int32_t v41; // w24
  UILabel_o *hpLabel; // x25
  Il2CppObject *v43; // x0
  UILabel_o *nameLabel; // x25
  struct BattleNpGaugeSystemComponent_o *npGauge; // x22
  BattleNpGaugeSystemComponent_o *v46; // x22
  int32_t uniqueId; // w8
  int32_t v48; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4CCAAFC & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BattleSelectServantComponent_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&IconLabelInfo_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&StringLiteral_25231/*"{0}"*/);
    byte_4CCAAFC = 1;
  }
  this->fields.selectCallBack = call;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.selectCallBack,
    (int32_t)call,
    position,
    index,
    (System_String_o *)call,
    (int32_t)method,
    v6,
    v7);
  imageSvtId = this->fields.root;
  if ( !imageSvtId )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(imageSvtId, 1, 0);
  v14 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v14, 0);
  if ( !svtData )
    goto LABEL_48;
  imageSvtId = (UnityEngine_GameObject_o *)Follower__IsNpc(svtData->fields.followerType, 0);
  if ( !v14 )
    goto LABEL_48;
  IconLabelInfo__Set_41192248(
    v14,
    2,
    svtData->fields.level,
    svtData->fields.maxleve,
    0,
    0,
    (unsigned __int8)imageSvtId & 1,
    0,
    0,
    0);
  servantIcon = this->fields.servantIcon;
  SvtId = BattleServantData__getSvtId(svtData, 0);
  LimitCount = BattleServantData__getLimitCount(svtData, 0);
  IconImageLimitCount = BattleServantData__GetIconImageLimitCount(svtData, 0);
  v20 = *(_QWORD *)&svtData->fields.exceedCount.fields.currentCryptoKey;
  v19 = *(_QWORD *)&svtData->fields.exceedCount.fields.fakeValue;
  v21 = IconImageLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v20;
  *(_QWORD *)&v49.fields.fakeValue = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v49, 0);
  lv = svtData->fields.level;
  v24 = v22;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__GetIconImageSvtId(svtData, 0);
  if ( !servantIcon )
    goto LABEL_48;
  ServantFaceIconComponent__Set_41283156(
    servantIcon,
    SvtId,
    LimitCount,
    v21,
    v24,
    v14,
    0,
    2,
    0,
    0,
    0,
    0,
    lv,
    (int32_t)imageSvtId,
    0,
    0,
    svtData->fields._IsGrand_k__BackingField,
    0);
  v25 = this->fields.servantIcon;
  frameType_k__BackingField = svtData->fields._frameType_k__BackingField;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getClassId(svtData, 1, 0);
  if ( !v25 )
    goto LABEL_48;
  ServantFaceIconComponent__ChangeClassIcon(v25, frameType_k__BackingField, (int32_t)imageSvtId, 0);
  servantSelectMask = this->fields.servantSelectMask;
  if ( servantSelectMask )
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         servantSelectMask,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  else
    Component_object = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( svtData->fields._IsGrand_k__BackingField )
    {
      v29 = BattleSelectServantComponent_TypeInfo;
      if ( !BattleSelectServantComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSelectServantComponent_TypeInfo);
        v29 = BattleSelectServantComponent_TypeInfo;
      }
      GrandMaskSpriteName = v29->static_fields->GrandMaskSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      imageSvtId = (UnityEngine_GameObject_o *)AtlasManager__SetDownloadCommonSprite(
                                                 (UISprite_o *)Component_object,
                                                 GrandMaskSpriteName,
                                                 0);
      if ( ((unsigned __int8)imageSvtId & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_48;
        goto LABEL_30;
      }
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon((UISprite_o *)Component_object, 0);
    imageSvtId = (UnityEngine_GameObject_o *)BattleSelectServantComponent_TypeInfo;
    if ( !BattleSelectServantComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleSelectServantComponent_TypeInfo);
    if ( Component_object )
    {
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        BattleSelectServantComponent_TypeInfo->static_fields->MaskSpriteName,
        0);
LABEL_30:
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[33].methodPtr)(
        Component_object,
        Component_object->klass->vtable[33].method);
      goto LABEL_31;
    }
LABEL_48:
    sub_1C71608(imageSvtId, v12);
  }
LABEL_31:
  MaxHp = BattleServantData__getMaxHp(svtData, 0);
  PreEntryStatusInfo_k__BackingField = svtData->fields._PreEntryStatusInfo_k__BackingField;
  v33 = MaxHp;
  if ( PreEntryStatusInfo_k__BackingField )
    AddMaxHp_k__BackingField = PreEntryStatusInfo_k__BackingField->fields._AddMaxHp_k__BackingField;
  else
    AddMaxHp_k__BackingField = 0;
  NowHp = BattleServantData__getNowHp(svtData, 0);
  v36 = svtData->fields._PreEntryStatusInfo_k__BackingField;
  v37 = NowHp;
  if ( v36 )
  {
    GainNp_k__BackingField = v36->fields._GainNp_k__BackingField;
    v37 = v36->fields._AddMaxHp_k__BackingField + NowHp;
  }
  else
  {
    GainNp_k__BackingField = 0;
  }
  np = svtData->fields.np;
  MaxNp = BattleServantData__getMaxNp(svtData, 0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v41 = System_Math__Min_65553872(np + GainNp_k__BackingField, MaxNp, 0);
  hpLabel = this->fields.hpLabel;
  v48 = v37;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  imageSvtId = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25231/*"{0}"*/, v43, 0);
  if ( !hpLabel )
    goto LABEL_48;
  UILabel__set_text(hpLabel, (System_String_o *)imageSvtId, 0);
  nameLabel = this->fields.nameLabel;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getServantShortName(svtData, 0);
  if ( !nameLabel )
    goto LABEL_48;
  UILabel__set_text(nameLabel, (System_String_o *)imageSvtId, 0);
  imageSvtId = (UnityEngine_GameObject_o *)this->fields.hpGauge;
  if ( !imageSvtId )
    goto LABEL_48;
  BattleHpGaugeBarComponent__setInitValue(
    (BattleHpGaugeBarComponent_o *)imageSvtId,
    v37,
    AddMaxHp_k__BackingField + v33,
    0);
  npGauge = this->fields.npGauge;
  if ( !npGauge )
    goto LABEL_48;
  npGauge->fields.lineCount = 3;
  npGauge->fields.maxparam = BattleServantData__getCountMaxNp(svtData, 0);
  imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge;
  if ( !imageSvtId )
    goto LABEL_48;
  BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)imageSvtId, 0);
  imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge;
  if ( !imageSvtId )
    goto LABEL_48;
  BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)imageSvtId, v41, 0);
  v46 = this->fields.npGauge;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__isAddNpGauge(svtData, 0);
  if ( !v46 )
    goto LABEL_48;
  BattleNpGaugeSystemComponent__setUseNp(v46, (unsigned __int8)imageSvtId & 1, 0);
  imageSvtId = this->fields.targetObject;
  if ( !imageSvtId )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(imageSvtId, 0, 0);
  uniqueId = svtData->fields.uniqueId;
  this->fields.isUse = 1;
  this->fields.uniqueId = uniqueId;
  this->fields.position = position;
}


void BattleSelectServantComponent__setNone(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0

  if ( (byte_4CCAAFD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAAFD = 1;
  }
  root = this->fields.root;
  this->fields.isUse = 0;
  if ( !root )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(root, 0, 0);
  root = this->fields.servantSelectMask;
  this->fields.canSelectFlag = 1;
  if ( !root
    || (UnityEngine_GameObject__SetActive(root, 0, 0),
        (root = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0)
    || (UILabel__set_text((UILabel_o *)root, (System_String_o *)StringLiteral_1/*""*/, 0),
        (root = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0)
    || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0)) == 0 )
  {
LABEL_9:
    sub_1C71608(root, method);
  }
  UnityEngine_GameObject__SetActive(root, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectServantComponent__setSelectMask(
        BattleSelectServantComponent_o *this,
        bool canSelect,
        System_String_o *overwriteDisableMessage,
        int32_t fontSize,
        bool isGradient,
        const MethodInfo *method)
{
  bool v11; // w24
  UnityEngine_GameObject_o *servantSelectMask; // x0
  UILabel_o *servantSelectMaskLabel; // x23

  v11 = canSelect;
  if ( (byte_4CCAAFE & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2733/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAAFE = 1;
  }
  servantSelectMask = this->fields.servantSelectMask;
  this->fields.canSelectFlag = v11;
  if ( !servantSelectMask )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(servantSelectMask, !canSelect, 0);
  servantSelectMaskLabel = this->fields.servantSelectMaskLabel;
  if ( this->fields.canSelectFlag )
  {
    overwriteDisableMessage = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    servantSelectMask = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(overwriteDisableMessage, 0);
    if ( ((unsigned __int8)servantSelectMask & 1) != 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantSelectMask = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2733/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/, 0);
      overwriteDisableMessage = (System_String_o *)servantSelectMask;
    }
  }
  if ( !servantSelectMaskLabel
    || (UILabel__set_text(servantSelectMaskLabel, overwriteDisableMessage, 0),
        (servantSelectMask = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0)
    || (UILabel__set_fontSize((UILabel_o *)servantSelectMask, fontSize, 0),
        (servantSelectMask = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0)
    || (UILabel__set_applyGradient((UILabel_o *)servantSelectMask, isGradient, 0),
        (servantSelectMask = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0)
    || (servantSelectMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantSelectMask, 0)) == 0 )
  {
LABEL_16:
    sub_1C71608(servantSelectMask, canSelect);
  }
  UnityEngine_GameObject__SetActive(servantSelectMask, !this->fields.canSelectFlag, 0);
}


void BattleSelectServantComponent__setTarget(
        BattleSelectServantComponent_o *this,
        int32_t selectUniqueId,
        const MethodInfo *method)
{
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    if ( !this->fields.targetObject )
      sub_1C71608(this, selectUniqueId);
    UnityEngine_GameObject__SetActive(this->fields.targetObject, this->fields.uniqueId == selectUniqueId, 0);
  }
}


void BattleSelectServantComponent_CallBack___ctor(
        BattleSelectServantComponent_CallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAADC8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAAD70;
}


System_IAsyncResult_o *BattleSelectServantComponent_CallBack__BeginInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = uniqueId;
  v12 = position;
  if ( (byte_4CCAB01 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&BattleSelectMainSubServantWindow_POSITION_TypeInfo);
    byte_4CCAB01 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(BattleSelectMainSubServantWindow_POSITION_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void BattleSelectServantComponent_CallBack__EndInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void BattleSelectServantComponent_CallBack__Invoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    position,
    uniqueId,
    this->fields.method);
}