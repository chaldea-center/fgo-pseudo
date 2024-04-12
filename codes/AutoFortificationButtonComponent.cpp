void __fastcall AutoFortificationButtonComponent___ctor(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoFortificationButtonComponent__Awake(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AutoFortificationButtonComponent__Init(
        AutoFortificationButtonComponent_o *this,
        int32_t eventId,
        System_Action_o *onClickAction,
        const MethodInfo *method)
{
  UISprite_o *ButtonBg; // x22
  UILabel_o *ButtonLb; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B1D6C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1774/*"AUTO_ORGANIZATION_BTN_LABEL"*/);
    sub_B52984(&StringLiteral_17087/*"btn_bg_auto_organization"*/);
    byte_42B1D6C = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(eventId, ButtonBg, (System_String_o *)StringLiteral_17087/*"btn_bg_auto_organization"*/, method);
  ButtonLb = this->fields.ButtonLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1774/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0LL);
  if ( !ButtonLb )
    sub_B52A5C(v9, v10);
  UILabel__set_text(ButtonLb, v9, 0LL);
  this->fields.onClickAction = onClickAction;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClickAction,
    (System_Int32_array **)onClickAction,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall AutoFortificationButtonComponent__OnClickOrganizationBtn(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0LL);
}