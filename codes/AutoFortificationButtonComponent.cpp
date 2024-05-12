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

  if ( (byte_4388BF6 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_1830/*"AUTO_ORGANIZATION_BTN_LABEL"*/);
    sub_B775C4(&StringLiteral_17308/*"btn_bg_auto_organization"*/);
    byte_4388BF6 = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_24479740(eventId, ButtonBg, (System_String_o *)StringLiteral_17308/*"btn_bg_auto_organization"*/, 0LL);
  ButtonLb = this->fields.ButtonLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1830/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0LL);
  if ( !ButtonLb )
    sub_B7769C(v9, v10);
  UILabel__set_text(ButtonLb, v9, 0LL);
  this->fields.onClickAction = onClickAction;
  sub_B77560(&this->fields.onClickAction);
}


void __fastcall AutoFortificationButtonComponent__OnClickOrganizationBtn(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0LL);
}