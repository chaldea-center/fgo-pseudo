void __fastcall CombineCommandCardComponent___ctor(CombineCommandCardComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40F9AB0 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_TypeInfo, method);
    byte_40F9AB0 = 1;
  }
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
  }
  BattleCommandComponent___ctor((BattleCommandComponent_o *)this, 0LL);
}


void __fastcall CombineCommandCardComponent__DispCommandCard(
        CombineCommandCardComponent_o *this,
        BattleCommandData_o *data,
        int64_t userCommandCodeId,
        int32_t commandCardParam,
        bool isShowValue,
        bool isShowExceedable,
        const MethodInfo *method)
{
  CombineCommandCardComponent_o *v13; // x0
  const MethodInfo *v14; // x3
  CombineCommandCardComponent_o *v15; // x0
  const MethodInfo *v16; // x3
  int32_t v17; // w8
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_40F9AAB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_14954/*"Unlit/Transparent Colored"*/, data);
    byte_40F9AAB = 1;
  }
  CombineCommandCardComponent__SetCommandCardEnable(this, 1, (const MethodInfo *)userCommandCodeId);
  CombineCommandCardComponent__SetSpriteActive(v13, this->fields.selectedSprite, 0, v14);
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, data, 0LL, 0, 1, 0, 0LL);
  BattleCommandComponent__setShader((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_14954/*"Unlit/Transparent Colored"*/, 0LL);
  BattleCommandComponent__updateView((BattleCommandComponent_o *)this, 1, 0, 1, 0, 0, 0LL);
  if ( (userCommandCodeId & 0x8000000000000000LL) != 0 )
  {
    this->fields._NowKind_k__BackingField = 0;
  }
  else
  {
    if ( userCommandCodeId )
      v17 = 2;
    else
      v17 = 1;
    this->fields._NowKind_k__BackingField = v17;
  }
  CombineCommandCardComponent__SetObjectActive(v15, this->fields.lockInfoObj, userCommandCodeId < 0, v16);
  CombineCommandCardComponent__SetPowerUpCardValue(this, commandCardParam, isShowValue, v18);
  CombineCommandCardComponent__SetExceedableLabel(this, commandCardParam, isShowExceedable, v19);
}


void __fastcall CombineCommandCardComponent__HideCommandCodeSprite(
        CombineCommandCardComponent_o *this,
        const MethodInfo *method)
{
  UISprite_o *codeSprite; // x0

  codeSprite = this->fields.codeSprite;
  if ( !codeSprite )
    sub_B170D4();
  UISprite__set_spriteName(codeSprite, 0LL, 0LL);
}


void __fastcall CombineCommandCardComponent__HideUnlockInfo(
        CombineCommandCardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockInfoObj; // x0

  lockInfoObj = this->fields.lockInfoObj;
  if ( !lockInfoObj )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(lockInfoObj, 0, 0LL);
}


void __fastcall CombineCommandCardComponent__ModifyCommandCard(
        CombineCommandCardComponent_o *this,
        BattleCommandData_o *data,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  CombineCommandCardComponent_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t v8; // w8
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  BattleCommandComponent__setData((BattleCommandComponent_o *)this, data, 0LL, 0, 1, 0, 0LL);
  BattleCommandComponent__SetCommandCodeView((BattleCommandComponent_o *)this, userCommandCodeId, 0LL);
  if ( (userCommandCodeId & 0x8000000000000000LL) != 0 )
  {
    this->fields._NowKind_k__BackingField = 0;
  }
  else
  {
    if ( userCommandCodeId )
      v8 = 2;
    else
      v8 = 1;
    this->fields._NowKind_k__BackingField = v8;
  }
  CombineCommandCardComponent__SetObjectActive(v6, this->fields.lockInfoObj, userCommandCodeId < 0, v7);
  CombineCommandCardComponent__SetPowerUpCardValue(this, 0, 0, v9);
  CombineCommandCardComponent__SetExceedableLabel(this, 0, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCardComponent__SetColor(
        CombineCommandCardComponent_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UIWidget_o *facetex; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UIWidget_o *bg; // x0
  UIWidget_o *icon; // x0
  UIWidget_o *text; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  facetex = (UIWidget_o *)this->fields.facetex;
  if ( !facetex )
    goto LABEL_6;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  UIWidget__set_color(facetex, color, 0LL);
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_6;
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  UIWidget__set_color(bg, v12, 0LL);
  icon = (UIWidget_o *)this->fields.icon;
  if ( !icon
    || (v13.fields.r = r,
        v13.fields.g = g,
        v13.fields.b = b,
        v13.fields.a = a,
        UIWidget__set_color(icon, v13, 0LL),
        (text = (UIWidget_o *)this->fields.text) == 0LL) )
  {
LABEL_6:
    sub_B170D4();
  }
  v14.fields.b = b;
  v14.fields.a = a;
  v14.fields.r = r;
  v14.fields.g = g;
  UIWidget__set_color(text, v14, 0LL);
}


void __fastcall CombineCommandCardComponent__SetCommandCardEnable(
        CombineCommandCardComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *objectRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CombineCommandCardComponent_o *v7; // x0
  const MethodInfo *v8; // x3
  CombineCommandCardComponent_o *v9; // x0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  objectRoot = (UnityEngine_Component_o *)this->fields.objectRoot;
  if ( !objectRoot || (gameObject = UnityEngine_Component__get_gameObject(objectRoot, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isEnable, 0LL);
  CombineCommandCardComponent__SetObjectActive(v7, this->fields.lockInfoObj, isEnable, v8);
  CombineCommandCardComponent__SetSpriteActive(v9, this->fields.defaultSprite, !isEnable, v10);
  CombineCommandCardComponent__SetExceedableLabel(this, 0, 0, v11);
  CombineCommandCardComponent__SetPowerUpCardValue(this, 0, 0, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCardComponent__SetExceedableLabel(
        CombineCommandCardComponent_o *this,
        int32_t commandCardParam,
        bool isShowExceedable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *exceedableLabel; // x22
  UILabel_o *v11; // x22
  System_String_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x21

  if ( (byte_40F9AAF & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCardParam);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_8797/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, v9);
    byte_40F9AAF = 1;
  }
  exceedableLabel = (UnityEngine_Object_o *)this->fields.exceedableLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(exceedableLabel, 0LL, 0LL) )
  {
    v11 = this->fields.exceedableLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8797/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, 0LL);
    if ( !v11 )
      goto LABEL_17;
    UILabel__set_text(v11, v12, 0LL);
    v13 = (UnityEngine_Component_o *)this->fields.exceedableLabel;
    if ( !v13 )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !gameObject )
LABEL_17:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(
      gameObject,
      BalanceConfig_TypeInfo->static_fields->CommandCardParamUpMax > commandCardParam && isShowExceedable,
      0LL);
  }
}


void __fastcall CombineCommandCardComponent__SetKind(
        CombineCommandCardComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v4; // w8

  if ( (userCommandCodeId & 0x8000000000000000LL) != 0 )
  {
    this->fields._NowKind_k__BackingField = 0;
  }
  else
  {
    if ( userCommandCodeId )
      v4 = 2;
    else
      v4 = 1;
    this->fields._NowKind_k__BackingField = v4;
  }
  CombineCommandCardComponent__SetObjectActive(this, this->fields.lockInfoObj, userCommandCodeId < 0, v3);
}


void __fastcall CombineCommandCardComponent__SetObjectActive(
        CombineCommandCardComponent_o *this,
        UnityEngine_GameObject_o *target,
        bool isActive,
        const MethodInfo *method)
{
  if ( (byte_40F9AAC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, target);
    byte_40F9AAC = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)target, 0LL, 0LL) )
  {
    if ( !target )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(target, isActive, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCardComponent__SetPowerUpCardValue(
        CombineCommandCardComponent_o *this,
        int32_t commandCardParam,
        bool isShowValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *powerUpCardValue; // x22
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v13; // x20
  System_String_o *v14; // x21
  Il2CppObject *NumberFormat; // x19
  BalanceConfig_c *v16; // x8
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0

  if ( (byte_40F9AAE & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&commandCardParam);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_3212/*"COMMAND_CARD_EXCEED_STATUS_COMBINE"*/, v9);
    byte_40F9AAE = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !v11 )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    if ( isShowValue )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v13 = this->fields.powerUpCardValue;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3212/*"COMMAND_CARD_EXCEED_STATUS_COMBINE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(commandCardParam, 0LL);
      v16 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      v17 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v16->static_fields->CommandCardParamUpMax, 0LL);
      v18 = System_String__Format_43739268(v14, NumberFormat, v17, 0LL);
      if ( v13 )
      {
        UILabel__set_text(v13, v18, 0LL);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


void __fastcall CombineCommandCardComponent__SetSelectedSprite(
        CombineCommandCardComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CombineCommandCardComponent__SetSpriteActive(this, this->fields.selectedSprite, isActive, v3);
}


void __fastcall CombineCommandCardComponent__SetSpriteActive(
        CombineCommandCardComponent_o *this,
        UISprite_o *target,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9AAD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, target);
    byte_40F9AAD = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)target, 0LL, 0LL) )
  {
    if ( !target || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


int32_t __fastcall CombineCommandCardComponent__get_NowKind(
        CombineCommandCardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._NowKind_k__BackingField;
}


void __fastcall CombineCommandCardComponent__set_NowKind(
        CombineCommandCardComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NowKind_k__BackingField = value;
}