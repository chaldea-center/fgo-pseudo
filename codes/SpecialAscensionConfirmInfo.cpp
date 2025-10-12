void SpecialAscensionConfirmInfo___ctor(SpecialAscensionConfirmInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
        SpecialAscensionConfirmInfo_o *this,
        System_String_o *text,
        int32_t fontSize,
        const MethodInfo *method)
{
  UILabel_o *title; // x21
  System_String_o *v7; // x0
  UILabel_o *subTitle; // x20
  System_String_o *v9; // x0

  if ( (byte_4C3BC30 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_12264/*"SPECIAL_ASCENSION_DIALOG_TXT"*/);
    sub_1C32C20(&StringLiteral_3773/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/);
    sub_1C32C20(&StringLiteral_44/*"\n\n"*/);
    byte_4C3BC30 = 1;
  }
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, 0);
  if ( !title
    || (UILabel__set_text(title, v7, 0),
        subTitle = this->fields.subTitle,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, 0),
        v7 = System_String__Concat_63556792(v9, (System_String_o *)StringLiteral_44/*"\n\n"*/, text, 0),
        !subTitle) )
  {
    sub_1C32E7C(v7);
  }
  UILabel__set_text(subTitle, v7, 0);
}