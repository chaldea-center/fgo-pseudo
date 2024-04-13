void __fastcall CombineCommandCardComponent___ctor(CombineCommandCardComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8D72 & 1) == 0 )
  {
    sub_B5D5C4(&BattleCommandComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8D72 = 1;
  }
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
  }
  BattleCommandComponent___ctor((BattleCommandComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42E8D6D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15172/*"Unlit/Transparent Colored"*/, (_DWORD)data, userCommandCodeId, *(_QWORD *)&commandCardParam);
    byte_42E8D6D = 1;
  }
  CombineCommandCardComponent__SetCommandCardEnable(this, 1, (const MethodInfo *)userCommandCodeId);
  CombineCommandCardComponent__SetSpriteActive(v13, this->fields.selectedSprite, 0, v14);
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, data, 0LL, 0, 1, 0, 0LL);
  BattleCommandComponent__setShader((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_15172/*"Unlit/Transparent Colored"*/, 0LL);
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
    sub_B5D69C(0LL, method);
  UISprite__set_spriteName(codeSprite, 0LL, 0LL);
}


void __fastcall CombineCommandCardComponent__HideUnlockInfo(
        CombineCommandCardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockInfoObj; // x0

  lockInfoObj = this->fields.lockInfoObj;
  if ( !lockInfoObj )
    sub_B5D69C(0LL, method);
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
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  facetex = (UIWidget_o *)this->fields.facetex;
  if ( !facetex )
    goto LABEL_6;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  UIWidget__set_color(facetex, color, 0LL);
  facetex = (UIWidget_o *)this->fields.bg;
  if ( !facetex )
    goto LABEL_6;
  v9.fields.r = r;
  v9.fields.g = g;
  v9.fields.b = b;
  v9.fields.a = a;
  UIWidget__set_color(facetex, v9, 0LL);
  facetex = (UIWidget_o *)this->fields.icon;
  if ( !facetex
    || (v10.fields.r = r,
        v10.fields.g = g,
        v10.fields.b = b,
        v10.fields.a = a,
        UIWidget__set_color(facetex, v10, 0LL),
        (facetex = (UIWidget_o *)this->fields.text) == 0LL) )
  {
LABEL_6:
    sub_B5D69C(facetex, method);
  }
  v11.fields.b = b;
  v11.fields.a = a;
  v11.fields.r = r;
  v11.fields.g = g;
  UIWidget__set_color(facetex, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCardComponent__SetCommandCardEnable(
        CombineCommandCardComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *objectRoot; // x0
  CombineCommandCardComponent_o *v6; // x0
  const MethodInfo *v7; // x3
  CombineCommandCardComponent_o *v8; // x0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3

  objectRoot = (UnityEngine_Component_o *)this->fields.objectRoot;
  if ( !objectRoot
    || (objectRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(objectRoot, 0LL)) == 0LL )
  {
    sub_B5D69C(objectRoot, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)objectRoot, isEnable, 0LL);
  CombineCommandCardComponent__SetObjectActive(v6, this->fields.lockInfoObj, isEnable, v7);
  CombineCommandCardComponent__SetSpriteActive(v8, this->fields.defaultSprite, !isEnable, v9);
  CombineCommandCardComponent__SetExceedableLabel(this, 0, 0, v10);
  CombineCommandCardComponent__SetPowerUpCardValue(this, 0, 0, v11);
}


void __fastcall CombineCommandCardComponent__SetExceedableLabel(
        CombineCommandCardComponent_o *this,
        int32_t commandCardParam,
        bool isShowExceedable,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *exceedableLabel; // x22
  UILabel_o *v17; // x22
  System_String_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x21

  if ( (byte_42E8D71 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, commandCardParam, isShowExceedable, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_8917/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, v13, v14, v15);
    byte_42E8D71 = 1;
  }
  exceedableLabel = (UnityEngine_Object_o *)this->fields.exceedableLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(exceedableLabel, 0LL, 0LL) )
  {
    v17 = this->fields.exceedableLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8917/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, 0LL);
    if ( !v17 )
      goto LABEL_17;
    UILabel__set_text(v17, gameObject, 0LL);
    gameObject = (System_String_o *)this->fields.exceedableLabel;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    v20 = (UnityEngine_GameObject_o *)gameObject;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v20 )
LABEL_17:
      sub_B5D69C(gameObject, v19);
    UnityEngine_GameObject__SetActive(
      v20,
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
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E8D6E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)target, isActive, method);
    byte_42E8D6E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !target )
      sub_B5D69C(v6, v7);
    UnityEngine_GameObject__SetActive(target, isActive, 0LL);
  }
}


void __fastcall CombineCommandCardComponent__SetPowerUpCardValue(
        CombineCommandCardComponent_o *this,
        int32_t commandCardParam,
        bool isShowValue,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *powerUpCardValue; // x22
  __int64 v17; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v19; // x20
  System_String_o *v20; // x21
  Il2CppObject *NumberFormat; // x19
  BalanceConfig_c *v22; // x8
  Il2CppObject *v23; // x0

  if ( (byte_42E8D70 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, commandCardParam, isShowValue, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_3286/*"COMMAND_CARD_EXCEED_STATUS_COMBINE"*/, v13, v14, v15);
    byte_42E8D70 = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    if ( isShowValue )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v19 = this->fields.powerUpCardValue;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3286/*"COMMAND_CARD_EXCEED_STATUS_COMBINE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(commandCardParam, 0LL);
      v22 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v22->static_fields->CommandCardParamUpMax, 0LL);
      gameObject = (UnityEngine_Component_o *)System_String__Format_44573324(v20, NumberFormat, v23, 0LL);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
        return;
      }
LABEL_19:
      sub_B5D69C(gameObject, v17);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
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
  __int64 v7; // x1

  if ( (byte_42E8D6F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)target, isActive, method);
    byte_42E8D6F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !target || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0LL)) == 0LL )
      sub_B5D69C(gameObject, v7);
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