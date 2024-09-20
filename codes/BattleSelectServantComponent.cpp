void __fastcall BattleSelectServantComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E13D & 1) == 0 )
  {
    sub_1B885B0(&BattleSelectServantComponent_TypeInfo);
    byte_4A5E13D = 1;
  }
  BattleSelectServantComponent_TypeInfo->static_fields->SERVANT_NAME_FONT_SIZE = 15;
}


void __fastcall BattleSelectServantComponent___ctor(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  this->fields.canSelectFlag = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleSelectServantComponent__ClearFaceAtlas(
        BattleSelectServantComponent_o *this,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *servantIcon; // x0

  servantIcon = this->fields.servantIcon;
  if ( !servantIcon )
    sub_1B8880C(0LL, method);
  ServantFaceIconComponent__ClearFaceAtlas(servantIcon, 0LL);
}


void __fastcall BattleSelectServantComponent__OnServantClick(
        BattleSelectServantComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleSelectServantComponent_CallBack_o *selectCallBack; // x8

  if ( (byte_4A5E13C & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSelectServantComponent_OnServantClick__);
    byte_4A5E13C = 1;
  }
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    v3 = Method_BattleSelectServantComponent_OnServantClick__;
    if ( (*((_BYTE *)Method_BattleSelectServantComponent_OnServantClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_BattleSelectServantComponent_OnServantClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    selectCallBack = this->fields.selectCallBack;
    if ( !selectCallBack )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))selectCallBack->fields.m_target)(
      selectCallBack->fields.original_method_info,
      (unsigned int)this->fields.position,
      (unsigned int)this->fields.uniqueId,
      *(_QWORD *)&selectCallBack->fields.extra_arg);
  }
}


void __fastcall BattleSelectServantComponent__setData(
        BattleSelectServantComponent_o *this,
        BattleServantData_o *svtData,
        int32_t position,
        int32_t index,
        BattleSelectServantComponent_CallBack_o *call,
        const MethodInfo *method)
{
  __int64 v10; // x1
  UnityEngine_GameObject_o *imageSvtId; // x0
  IconLabelInfo_o *v12; // x22
  ServantFaceIconComponent_o *servantIcon; // x23
  int32_t SvtId; // w24
  int32_t LimitCount; // w25
  int32_t IconImageLimitCount; // w0
  __int64 v17; // x27
  __int64 v18; // x28
  int32_t v19; // w26
  int32_t v20; // w0
  int32_t lv; // w28
  int32_t v22; // w27
  ServantFaceIconComponent_o *v23; // x23
  int32_t frameType_k__BackingField; // w22
  UILabel_o *nameLabel; // x22
  System_String_o *ServantShortName; // x0
  BattleSelectServantComponent_c *v27; // x8
  System_String_o *v28; // x23
  UILabel_o *hpLabel; // x22
  System_String_o *v30; // x1
  BattleHpGaugeBarComponent_o *hpGauge; // x22
  int32_t v32; // w23
  struct BattleNpGaugeSystemComponent_o *npGauge; // x22
  BattleNpGaugeSystemComponent_o *v34; // x22
  int32_t uniqueId; // w8
  int32_t NowHp; // [xsp+4Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4A5E139 & 1) == 0 )
  {
    sub_1B885B0(&BattleSelectServantComponent_TypeInfo);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E139 = 1;
  }
  NowHp = 0;
  this->fields.selectCallBack = call;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectCallBack, (int32_t)call, position, index);
  imageSvtId = this->fields.root;
  if ( !imageSvtId )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(imageSvtId, 1, 0LL);
  v12 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  if ( !svtData )
    goto LABEL_23;
  imageSvtId = (UnityEngine_GameObject_o *)Follower__IsNpc(svtData->fields.followerType, 0LL);
  if ( !v12 )
    goto LABEL_23;
  IconLabelInfo__Set_38140136(
    v12,
    2,
    svtData->fields.level,
    svtData->fields.maxleve,
    0,
    0,
    (unsigned __int8)imageSvtId & 1,
    0,
    0LL);
  servantIcon = this->fields.servantIcon;
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  LimitCount = BattleServantData__getLimitCount(svtData, 0LL);
  IconImageLimitCount = BattleServantData__GetIconImageLimitCount(svtData, 0LL);
  v18 = *(_QWORD *)&svtData->fields.exceedCount.fields.currentCryptoKey;
  v17 = *(_QWORD *)&svtData->fields.exceedCount.fields.fakeValue;
  v19 = IconImageLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v18;
  *(_QWORD *)&v37.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  lv = svtData->fields.level;
  v22 = v20;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__GetIconImageSvtId(svtData, 0LL);
  if ( !servantIcon )
    goto LABEL_23;
  ServantFaceIconComponent__Set_38217436(
    servantIcon,
    SvtId,
    LimitCount,
    v19,
    v22,
    v12,
    0LL,
    2,
    0,
    0,
    0LL,
    0,
    lv,
    (int32_t)imageSvtId,
    0,
    0LL);
  v23 = this->fields.servantIcon;
  frameType_k__BackingField = svtData->fields._frameType_k__BackingField;
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getClassId(svtData, 0LL);
  if ( !v23 )
    goto LABEL_23;
  ServantFaceIconComponent__ChangeClassIcon(v23, frameType_k__BackingField, (int32_t)imageSvtId, 0LL);
  nameLabel = this->fields.nameLabel;
  ServantShortName = BattleServantData__getServantShortName(svtData, 0LL);
  v27 = BattleSelectServantComponent_TypeInfo;
  v28 = ServantShortName;
  if ( !BattleSelectServantComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSelectServantComponent_TypeInfo);
    v27 = BattleSelectServantComponent_TypeInfo;
  }
  WrapControlText__fontSizeAdjust(nameLabel, v28, v27->static_fields->SERVANT_NAME_FONT_SIZE, 0LL);
  hpLabel = this->fields.hpLabel;
  NowHp = BattleServantData__getNowHp(svtData, 0LL);
  imageSvtId = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&NowHp, 0LL);
  if ( !hpLabel )
    goto LABEL_23;
  v30 = imageSvtId ? (System_String_o *)imageSvtId : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(hpLabel, v30, 0LL);
  hpGauge = this->fields.hpGauge;
  v32 = BattleServantData__getNowHp(svtData, 0LL);
  imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__getMaxHp(svtData, 0LL);
  if ( !hpGauge )
    goto LABEL_23;
  BattleHpGaugeBarComponent__setInitValue(hpGauge, v32, (int32_t)imageSvtId, 0LL);
  npGauge = this->fields.npGauge;
  if ( !npGauge )
    goto LABEL_23;
  npGauge->fields.lineCount = 3;
  npGauge->fields.maxparam = BattleServantData__getCountMaxNp(svtData, 0LL);
  imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge;
  if ( !imageSvtId
    || (BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)imageSvtId, 0LL),
        (imageSvtId = (UnityEngine_GameObject_o *)this->fields.npGauge) == 0LL)
    || (BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)imageSvtId, svtData->fields.np, 0LL),
        v34 = this->fields.npGauge,
        imageSvtId = (UnityEngine_GameObject_o *)BattleServantData__isAddNpGauge(svtData, 0LL),
        !v34)
    || (BattleNpGaugeSystemComponent__setUseNp(v34, (unsigned __int8)imageSvtId & 1, 0LL),
        (imageSvtId = this->fields.targetObject) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(imageSvtId, v10);
  }
  UnityEngine_GameObject__SetActive(imageSvtId, 0, 0LL);
  uniqueId = svtData->fields.uniqueId;
  this->fields.isUse = 1;
  this->fields.uniqueId = uniqueId;
  this->fields.position = position;
}


void __fastcall BattleSelectServantComponent__setNone(BattleSelectServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0

  if ( (byte_4A5E13A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E13A = 1;
  }
  root = this->fields.root;
  this->fields.isUse = 0;
  if ( !root )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.servantSelectMask;
  this->fields.canSelectFlag = 1;
  if ( !root
    || (UnityEngine_GameObject__SetActive(root, 0, 0LL),
        (root = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)root, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (root = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel) == 0LL)
    || (root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root, 0LL)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(root, method);
  }
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantComponent__setSelectMask(
        BattleSelectServantComponent_o *this,
        bool canSelect,
        const MethodInfo *method)
{
  bool v3; // w20
  bool v5; // w21
  UnityEngine_GameObject_o *servantSelectMask; // x0
  UILabel_o *servantSelectMaskLabel; // x20

  v3 = canSelect;
  v5 = canSelect;
  if ( (byte_4A5E13B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2856/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E13B = 1;
  }
  servantSelectMask = this->fields.servantSelectMask;
  this->fields.canSelectFlag = v5;
  if ( !servantSelectMask )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(servantSelectMask, !v3, 0LL);
  servantSelectMaskLabel = this->fields.servantSelectMaskLabel;
  if ( !this->fields.canSelectFlag )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantSelectMask = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_DIALOG_CAN_NOT_REPLACE"*/, 0LL);
    *(_QWORD *)&canSelect = servantSelectMask;
    if ( servantSelectMaskLabel )
      goto LABEL_10;
LABEL_13:
    sub_1B8880C(servantSelectMask, canSelect);
  }
  *(_QWORD *)&canSelect = StringLiteral_1/*""*/;
  if ( !servantSelectMaskLabel )
    goto LABEL_13;
LABEL_10:
  UILabel__set_text(servantSelectMaskLabel, (System_String_o *)canSelect, 0LL);
  servantSelectMask = (UnityEngine_GameObject_o *)this->fields.servantSelectMaskLabel;
  if ( !servantSelectMask )
    goto LABEL_13;
  servantSelectMask = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantSelectMask, 0LL);
  if ( !servantSelectMask )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(servantSelectMask, !this->fields.canSelectFlag, 0LL);
}


void __fastcall BattleSelectServantComponent__setTarget(
        BattleSelectServantComponent_o *this,
        int32_t selectUniqueId,
        const MethodInfo *method)
{
  if ( this->fields.isUse && this->fields.canSelectFlag )
  {
    if ( !this->fields.targetObject )
      sub_1B8880C(this, selectUniqueId);
    UnityEngine_GameObject__SetActive(this->fields.targetObject, this->fields.uniqueId == selectUniqueId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectServantComponent_CallBack___ctor(
        BattleSelectServantComponent_CallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D1F48;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1EF0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectServantComponent_CallBack__BeginInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = uniqueId;
  v15 = position;
  if ( (byte_4A5E13E & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&BattleSelectMainSubServantWindow_POSITION_TypeInfo);
    byte_4A5E13E = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             BattleSelectMainSubServantWindow_POSITION_TypeInfo,
             &v15,
             *(_QWORD *)&uniqueId,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall BattleSelectServantComponent_CallBack__EndInvoke(
        BattleSelectServantComponent_CallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall BattleSelectServantComponent_CallBack__Invoke(
        BattleSelectServantComponent_CallBack_o *this,
        int32_t position,
        int32_t uniqueId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    position,
    uniqueId,
    *(_QWORD *)&this->fields.extra_arg);
}