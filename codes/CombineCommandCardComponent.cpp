void __fastcall CombineCommandCardComponent___ctor(CombineCommandCardComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E889 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandComponent_TypeInfo);
    byte_4A5E889 = 1;
  }
  if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
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
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  if ( (byte_4A5E883 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15129/*"Unlit/Transparent Colored"*/);
    byte_4A5E883 = 1;
  }
  CombineCommandCardComponent__SetCommandCardEnable(this, 1, (const MethodInfo *)userCommandCodeId);
  CombineCommandCardComponent__SetSpriteActive(v13, this->fields.selectedSprite, 0, v14);
  BattleCommandComponent__setData((BattleCommandComponent_o *)this, data, 0LL, 0, 1, 0, 1, 0LL);
  BattleCommandComponent__setShader((BattleCommandComponent_o *)this, (System_String_o *)StringLiteral_15129/*"Unlit/Transparent Colored"*/, 0LL);
  BattleCommandComponent__updateView((BattleCommandComponent_o *)this, 1, 0, 1, 0, 0, 0LL);
  CombineCommandCardComponent__SetKind(this, userCommandCodeId, v15);
  CombineCommandCardComponent__SetPowerUpCardValue(this, commandCardParam, isShowValue, v16);
  CombineCommandCardComponent__SetExceedableLabel(this, commandCardParam, isShowExceedable, v17);
}


void __fastcall CombineCommandCardComponent__HideCommandCodeSprite(
        CombineCommandCardComponent_o *this,
        const MethodInfo *method)
{
  UISprite_o *codeSprite; // x0

  codeSprite = this->fields.codeSprite;
  if ( !codeSprite )
    sub_1B8880C(0LL, method);
  UISprite__set_spriteName(codeSprite, 0LL, 0LL);
}


void __fastcall CombineCommandCardComponent__HideUnlockInfo(
        CombineCommandCardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockInfoObj; // x0

  lockInfoObj = this->fields.lockInfoObj;
  if ( !lockInfoObj )
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(lockInfoObj, 0, 0LL);
}


void __fastcall CombineCommandCardComponent__ModifyCommandCard(
        CombineCommandCardComponent_o *this,
        BattleCommandData_o *data,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  BattleCommandComponent__setData((BattleCommandComponent_o *)this, data, 0LL, 0, 1, 0, 1, 0LL);
  BattleCommandComponent__SetCommandCodeView((BattleCommandComponent_o *)this, userCommandCodeId, 0LL);
  CombineCommandCardComponent__SetKind(this, userCommandCodeId, v6);
  CombineCommandCardComponent__SetPowerUpCardValue(this, 0, 0, v7);
  CombineCommandCardComponent__SetExceedableLabel(this, 0, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCardComponent__SetColor(
        CombineCommandCardComponent_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *lockInfoObj; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *icon; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A5E884 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E884 = 1;
  }
  v12.fields.r = r;
  v12.fields.g = g;
  v12.fields.b = b;
  v12.fields.a = a;
  BattleCommandComponent__SetCardColor((BattleCommandComponent_o *)this, v12, 0LL);
  lockInfoObj = (UnityEngine_Object_o *)this->fields.lockInfoObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(lockInfoObj, 0LL, 0LL) )
  {
    icon = this->fields.lockInfoObj;
    if ( icon )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           icon,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      icon = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
      if ( ((unsigned __int8)icon & 1) != 0 )
        return;
      if ( Component_object )
      {
        v13.fields.r = r;
        v13.fields.g = g;
        v13.fields.b = b;
        v13.fields.a = a;
        UIWidget__set_color((UIWidget_o *)Component_object, v13, 0LL);
        icon = (UnityEngine_GameObject_o *)this->fields.icon;
        if ( icon )
        {
          v14.fields.r = r;
          v14.fields.g = g;
          v14.fields.b = b;
          v14.fields.a = a;
          UIWidget__set_color((UIWidget_o *)icon, v14, 0LL);
          icon = (UnityEngine_GameObject_o *)this->fields.text;
          if ( icon )
          {
            v15.fields.r = r;
            v15.fields.g = g;
            v15.fields.b = b;
            v15.fields.a = a;
            UIWidget__set_color((UIWidget_o *)icon, v15, 0LL);
            icon = (UnityEngine_GameObject_o *)this->fields.iconChangeTypeByTransform;
            if ( icon )
            {
              v16.fields.b = b;
              v16.fields.a = a;
              v16.fields.r = r;
              v16.fields.g = g;
              UIWidget__set_color((UIWidget_o *)icon, v16, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1B8880C(icon, v9);
  }
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
    sub_1B8880C(objectRoot, isEnable);
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
  UnityEngine_Object_o *exceedableLabel; // x22
  UILabel_o *v8; // x22
  System_String_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x21

  if ( (byte_4A5E888 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8750/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/);
    byte_4A5E888 = 1;
  }
  exceedableLabel = (UnityEngine_Object_o *)this->fields.exceedableLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(exceedableLabel, 0LL, 0LL) )
  {
    v8 = this->fields.exceedableLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_8750/*"MSG_ABLED_COMMAND_CARD_EXCEED"*/, 0LL);
    if ( !v8 )
      goto LABEL_14;
    UILabel__set_text(v8, gameObject, 0LL);
    gameObject = (System_String_o *)this->fields.exceedableLabel;
    if ( !gameObject )
      goto LABEL_14;
    gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    v11 = (UnityEngine_GameObject_o *)gameObject;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v11 )
LABEL_14:
      sub_1B8880C(gameObject, v10);
    UnityEngine_GameObject__SetActive(
      v11,
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


void __fastcall CombineCommandCardComponent__SetLayout(
        CombineCommandCardComponent_o *this,
        float positionY,
        float scale,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, positionY, 0LL);
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_33726240(v8, scale, 0LL);
}


void __fastcall CombineCommandCardComponent__SetObjectActive(
        CombineCommandCardComponent_o *this,
        UnityEngine_GameObject_o *target,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5E885 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E885 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !target )
      sub_1B8880C(v6, v7);
    UnityEngine_GameObject__SetActive(target, isActive, 0LL);
  }
}


void __fastcall CombineCommandCardComponent__SetPowerUpCardValue(
        CombineCommandCardComponent_o *this,
        int32_t commandCardParam,
        bool isShowValue,
        const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardValue; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v10; // x20
  System_String_o *v11; // x21
  Il2CppObject *NumberFormat; // x19
  BalanceConfig_c *v13; // x8
  Il2CppObject *v14; // x0

  if ( (byte_4A5E887 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3714/*"COMMAND_CARD_EXCEED_STATUS_COMBINE"*/);
    byte_4A5E887 = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    if ( isShowValue )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v10 = this->fields.powerUpCardValue;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3714/*"COMMAND_CARD_EXCEED_STATUS_COMBINE"*/, 0LL);
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(commandCardParam, 0LL);
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      v14 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v13->static_fields->CommandCardParamUpMax, 0LL);
      gameObject = (UnityEngine_Component_o *)System_String__Format_61721404(v11, NumberFormat, v14, 0LL);
      if ( v10 )
      {
        UILabel__set_text(v10, (System_String_o *)gameObject, 0LL);
        return;
      }
LABEL_16:
      sub_1B8880C(gameObject, v8);
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

  if ( (byte_4A5E886 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E886 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !target || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0LL)) == 0LL )
      sub_1B8880C(gameObject, v7);
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