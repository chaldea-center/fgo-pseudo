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
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *ButtonBg; // x22
  UILabel_o *ButtonLb; // x21
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B6AB40 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_2176/*"AUTO_ORGANIZATION_BTN_LABEL"*/, v8);
    sub_1BE4ACC(&StringLiteral_17706/*"btn_bg_auto_organization"*/, v9);
    byte_4B6AB40 = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_38766888(eventId, ButtonBg, (System_String_o *)StringLiteral_17706/*"btn_bg_auto_organization"*/, 0LL);
  ButtonLb = this->fields.ButtonLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2176/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0LL);
  if ( !ButtonLb )
    sub_1BE4D28(v12, v13);
  UILabel__set_text(ButtonLb, v12, 0LL);
  this->fields.onClickAction = onClickAction;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.onClickAction,
    (int64_t)onClickAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall AutoFortificationButtonComponent__OnClickOrganizationBtn(
        AutoFortificationButtonComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0LL);
}