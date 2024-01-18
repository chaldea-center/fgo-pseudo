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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4189910 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1754/*"AUTO_ORGANIZATION_BTN_LABEL"*/, v8);
    sub_B2C35C(&StringLiteral_16969/*"btn_bg_auto_organization"*/, v9);
    byte_4189910 = 1;
  }
  ButtonBg = this->fields.ButtonBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, ButtonBg, (System_String_o *)StringLiteral_16969/*"btn_bg_auto_organization"*/, method);
  ButtonLb = this->fields.ButtonLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1754/*"AUTO_ORGANIZATION_BTN_LABEL"*/, 0LL);
  if ( !ButtonLb )
    sub_B2C434(v12, v13);
  UILabel__set_text(ButtonLb, v12, 0LL);
  this->fields.onClickAction = onClickAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClickAction,
    (System_Int32_array **)onClickAction,
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