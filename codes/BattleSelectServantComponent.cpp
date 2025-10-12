void BattleSelectServantComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BattleSelectServantComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3AFD7 & 1) == 0 )
  {
    sub_1C32C20(&BattleSelectServantComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_21278/*"listframes3_bg"*/);
    sub_1C32C20(&StringLiteral_20391/*"img_frames_grand_mask11"*/);
    byte_4C3AFD7 = 1;
  }
  BattleSelectServantComponent_TypeInfo->static_fields->MaskSpriteName = (struct System_String_o *)StringLiteral_21278/*"listframes3_bg"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)BattleSelectServantComponent_TypeInfo->static_fields,
    StringLiteral_21278/*"listframes3_bg"*/,
    v1,
    v2);
  v3 = StringLiteral_20391/*"img_frames_grand_mask11"*/;
  static_fields = BattleSelectServantComponent_TypeInfo->static_fields;
  static_fields->GrandMaskSpriteName = (struct System_String_o *)StringLiteral_20391/*"img_frames_grand_mask11"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->GrandMaskSpriteName, v3, v5, v6);
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
    sub_1C32E7C(0);
  ServantFaceIconComponent__ClearFaceAtlas(servantIcon, 0);
}


void BattleSelectServantComponent__OnServantClick(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSelectServantComponent_CallBack_o *selectCallBack; // x8

  if ( (byte_4C3AFD6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSelectServantComponent_OnServantClick__);
    byte_4C3AFD6 = 1;
  }
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    v3 = Method_BattleSelectServantComponent_OnServantClick__;
    if ( (*((_BYTE *)Method_BattleSelectServantComponent_OnServantClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_BattleSelectServantComponent_OnServantClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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


// local variable allocation has failed, the output may be wrong!
void BattleSelectServantComponent__setData(
        BattleSelectServantComponent_o *this,
        BattleServantData_o *svtData,
        int32_t position,
        int32_t index,
        BattleSelectServantComponent_CallBack_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *imageSvtId; // x0
  IconLabelInfo_o *v11; // x22
  ServantFaceIconComponent_o *servantIcon; // x23
  int32_t SvtId; // w24
  int32_t LimitCount; // w25
  int32_t IconImageLimitCount; // w0
  __int64 v16; // x27
  __int64 v17; // x28
  int32_t v18; // w26
  int32_t v19; // w0
  int32_t lv; // w28
  int32_t v21; // w27
  ServantFaceIconComponent_o *v22; // x23
  int32_t frameType_k__BackingField; // w22
  UnityEngine_GameObject_o *servantSelectMask; // x0
  Il2CppObject *Component_object; // x22
  BattleSelectServantComponent_c *v26; // x0
  System_String_o *GrandMaskSpriteName; // x23
  int32_t MaxHp; // w0
  struct BattleServantData_PreEntryStatus_o *PreEntryStatusInfo_k__BackingField; // x8
  int32_t v30; // w22
  int32_t AddMaxHp_k__BackingField; // w26
  int32_t NowHp; // w0
  struct BattleServantData_PreEntryStatus_o *v33; // x8
  int32_t v34; // w23
  int32_t GainNp_k__BackingField; // w25
  int32_t np; // w29
  int32_t MaxNp; // w24
  int32_t v38; // w24
  UILabel_o *hpLabel; // x25
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x0
  UILabel_o *nameLabel; // x25
  struct BattleNpGaugeSystemComponent_o *npGauge; // x22
  BattleNpGaugeSystemComponent_o *v49; // x22
  int32_t uniqueId; // w8
  int32_t v51; // [xsp+5Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C3AFD3 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BattleSelectServantComponent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C3AFD3 = 1;
  }
  this->fields.selectCallBack = call;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.selectCallBack,
    (int32_t)call,
    position,
    *(const MethodInfo **)&index);
  imageSvtId = this->fields.root;
  if ( !imageSvtId )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive(imageSvtId, 1, 0);
  v11 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v11, 0);
  if ( !svtData )
    goto LABEL_48;
  imageSvtId = (UnityEngine_GameObject_o *)Follower__IsNpc(svtData->fields.followerType, 0);
  if ( !v11 )
    goto LABEL_48;
  IconLabelInfo__Set_40818388(
    v11,
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
  v17 = *(_QWORD *)&svtData->fields.exceedCount.fields.currentCryptoKey;
  v16 = *(_QWORD *)&svtData->fields.exceedCount.fields.fakeValue;
  v18 = IconImageLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v17;
  *(_QWORD *)&v52.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v52, 0);
  lv = svtData->fields.level;
  v21 = v19;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__GetIconImageSvtId(svtData, 0);
  if ( !servantIcon )
    goto LABEL_48;
  ServantFaceIconComponent__Set_40907144(
    servantIcon,
    SvtId,
    LimitCount,
    v18,
    v21,
    v11,
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
  v22 = this->fields.servantIcon;
  frameType_k__BackingField = svtData->fields._frameType_k__BackingField;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getClassId(svtData, 1, 0);
  if ( !v22 )
    goto LABEL_48;
  ServantFaceIconComponent__ChangeClassIcon(v22, frameType_k__BackingField, (int32_t)imageSvtId, 0);
  servantSelectMask = this->fields.servantSelectMask;
  if ( servantSelectMask )
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         servantSelectMask,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  else
    Component_object = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( svtData->fields._IsGrand_k__BackingField )
    {
      v26 = BattleSelectServantComponent_TypeInfo;
      if ( !BattleSelectServantComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSelectServantComponent_TypeInfo);
        v26 = BattleSelectServantComponent_TypeInfo;
      }
      GrandMaskSpriteName = v26->static_fields->GrandMaskSpriteName;
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
    sub_1C32E7C(imageSvtId);
  }
LABEL_31:
  MaxHp = BattleServantData__getMaxHp(svtData, 0);
  PreEntryStatusInfo_k__BackingField = svtData->fields._PreEntryStatusInfo_k__BackingField;
  v30 = MaxHp;
  if ( PreEntryStatusInfo_k__BackingField )
    AddMaxHp_k__BackingField = PreEntryStatusInfo_k__BackingField->fields._AddMaxHp_k__BackingField;
  else
    AddMaxHp_k__BackingField = 0;
  NowHp = BattleServantData__getNowHp(svtData, 0);
  v33 = svtData->fields._PreEntryStatusInfo_k__BackingField;
  v34 = NowHp;
  if ( v33 )
  {
    GainNp_k__BackingField = v33->fields._GainNp_k__BackingField;
    v34 = v33->fields._AddMaxHp_k__BackingField + NowHp;
  }
  else
  {
    GainNp_k__BackingField = 0;
  }
  np = svtData->fields.np;
  MaxNp = BattleServantData__getMaxNp(svtData, 0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v38 = System_Math__Min_65042304(np + GainNp_k__BackingField, MaxNp, 0);
  hpLabel = this->fields.hpLabel;
  v51 = v34;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v40, v41, v42, v43, v44, v45);
  imageSvtId = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, v46, 0);
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
    v34,
    AddMaxHp_k__BackingField + v30,
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
  BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)imageSvtId, v38, 0);
  v49 = this->fields.npGauge;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__isAddNpGauge(svtData, 0);
  if ( !v49 )
    goto LABEL_48;
  BattleNpGaugeSystemComponent__setUseNp(v49, (unsigned __int8)imageSvtId & 1, 0);
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

  if ( (byte_4C3AFD4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AFD4 = 1;
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
    sub_1C32E7C(root);
  }
  UnityEngine_GameObject__SetActive(root, 0, 0);
}


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
  if ( (byte_4C3AFD5 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2739/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AFD5 = 1;
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
      servantSelectMask = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2739/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/, 0);
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
    sub_1C32E7C(servantSelectMask);
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
      sub_1C32E7C(this);
    UnityEngine_GameObject__SetActive(this->fields.targetObject, this->fields.uniqueId == selectUniqueId, 0);
  }
}


void BattleSelectServantComponent_CallBack___ctor(
        BattleSelectServantComponent_CallBack_o *this,
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7AEF8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7AEA0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BattleSelectServantComponent_CallBack__BeginInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = uniqueId;
  v20 = position;
  if ( (byte_4C3AFD8 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&BattleSelectMainSubServantWindow_POSITION_TypeInfo);
    byte_4C3AFD8 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             BattleSelectMainSubServantWindow_POSITION_TypeInfo,
             &v20,
             *(_QWORD *)&uniqueId,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v18, callback, object);
}


void BattleSelectServantComponent_CallBack__EndInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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