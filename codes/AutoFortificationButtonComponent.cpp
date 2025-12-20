void AutoFortificationButtonComponent___ctor(AutoFortificationButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoFortificationButtonComponent__Awake(AutoFortificationButtonComponent_o *this, const MethodInfo *method)
{
  ;
}


void AutoFortificationButtonComponent__Init(
        AutoFortificationButtonComponent_o *this,
        int32_t eventId,
        System_Action_o *onClickAction,
        const MethodInfo *method)
{
  UISprite_o *ButtonBg; // x22
  UILabel_o *ButtonLb; // x21
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4D269FB & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_2056/*"AUTO_ORGANIZATION_BTN_LABEL"*/);
    sub_1C94098(&StringLiteral_17541/*"btn_bg_auto_organization"*/);
    byte_4D269FB = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41357612(eventId, ButtonBg, (System_String_o *)StringLiteral_17541/*"btn_bg_auto_organization"*/, 0);
  ButtonLb = this->fields.ButtonLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2056/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0);
  if ( !ButtonLb )
    sub_1C942F0(v9, v10);
  UILabel__set_text(ButtonLb, v9, 0);
  this->fields.onClickAction = onClickAction;
  sub_1C9403C(&this->fields.onClickAction, onClickAction);
}


void AutoFortificationButtonComponent__OnClickOrganizationBtn(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0);
}