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


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoFortificationButtonComponent__Init(
        AutoFortificationButtonComponent_o *this,
        int32_t eventId,
        System_Action_o *onClickAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UISprite_o *ButtonBg; // x22
  __int64 v14; // x1
  UILabel_o *ButtonLb; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B1A0B2 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, onClickAction);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2171/*"AUTO_ORGANIZATION_BTN_LABEL"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17659/*"btn_bg_auto_organization"*/, v11, v12);
    byte_4B1A0B2 = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId);
  AtlasManager__SetEventUI_38574572(eventId, ButtonBg, (System_String_o *)StringLiteral_17659/*"btn_bg_auto_organization"*/, 0LL);
  ButtonLb = this->fields.ButtonLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2171/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0LL);
  if ( !ButtonLb )
    sub_1BCAA3C(v16, v17);
  UILabel__set_text(ButtonLb, v16, 0LL);
  this->fields.onClickAction = onClickAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClickAction,
    (int64_t)onClickAction,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall AutoFortificationButtonComponent__OnClickOrganizationBtn(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0LL);
}