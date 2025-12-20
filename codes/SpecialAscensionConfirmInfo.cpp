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
  __int64 v8; // x1
  UILabel_o *subTitle; // x20
  System_String_o *v10; // x0

  if ( (byte_4D26738 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12317/*"SPECIAL_ASCENSION_DIALOG_TXT"*/);
    sub_1C94098(&StringLiteral_3778/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/);
    sub_1C94098(&StringLiteral_44/*"\n\n"*/);
    byte_4D26738 = 1;
  }
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3778/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, 0);
  if ( !title
    || (UILabel__set_text(title, v7, 0),
        subTitle = this->fields.subTitle,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12317/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, 0),
        v7 = System_String__Concat_64456008(v10, (System_String_o *)StringLiteral_44/*"\n\n"*/, text, 0),
        !subTitle) )
  {
    sub_1C942F0(v7, v8);
  }
  UILabel__set_text(subTitle, v7, 0);
}