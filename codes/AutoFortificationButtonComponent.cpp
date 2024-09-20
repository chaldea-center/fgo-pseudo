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
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5EEC3 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2151/*"AUTO_ORGANIZATION_BTN_LABEL"*/);
    sub_1B885B0(&StringLiteral_17486/*"btn_bg_auto_organization"*/);
    byte_4A5EEC3 = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, ButtonBg, (System_String_o *)StringLiteral_17486/*"btn_bg_auto_organization"*/, 0LL);
  ButtonLb = this->fields.ButtonLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2151/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0LL);
  if ( !ButtonLb )
    sub_1B8880C(v9, v10);
  UILabel__set_text(ButtonLb, v9, 0LL);
  this->fields.onClickAction = onClickAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickAction, (int32_t)onClickAction, v11, v12);
}


void __fastcall AutoFortificationButtonComponent__OnClickOrganizationBtn(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0LL);
}