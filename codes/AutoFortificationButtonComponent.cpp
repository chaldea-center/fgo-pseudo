void AutoFortificationButtonComponent___ctor(AutoFortificationButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoFortificationButtonComponent__Awake(AutoFortificationButtonComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void AutoFortificationButtonComponent__Init(
        AutoFortificationButtonComponent_o *this,
        int32_t eventId,
        System_Action_o *onClickAction,
        const MethodInfo *method)
{
  UISprite_o *ButtonBg; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *ButtonLb; // x21
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593251A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2156/*"AUTO_ORGANIZATION_BTN_LABEL"*/);
    sub_21FFC50(&StringLiteral_18181/*"btn_bg_auto_organization"*/);
    byte_593251A = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, onClickAction);
  AtlasManager__SetEventUI_47538316(eventId, ButtonBg, (System_String_o *)StringLiteral_18181/*"btn_bg_auto_organization"*/, 0);
  ButtonLb = this->fields.ButtonLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2156/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0);
  if ( !ButtonLb )
    sub_21FFECC(v11, v12);
  UILabel__set_text(ButtonLb, v11, 0);
  this->fields.onClickAction = onClickAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickAction,
    (int32_t)onClickAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void AutoFortificationButtonComponent__OnClickOrganizationBtn(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0);
}