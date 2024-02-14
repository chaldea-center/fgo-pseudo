void __fastcall SpecialAscensionConfirmInfo___ctor(SpecialAscensionConfirmInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
        SpecialAscensionConfirmInfo_o *this,
        System_String_o *text,
        int32_t fontSize,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *title; // x21
  System_String_o *v10; // x0
  UILabel_o *subTitle; // x20
  System_String_o *v12; // x0

  if ( (byte_42152BB & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, text);
    sub_B0D8A4(&StringLiteral_12326/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, v6);
    sub_B0D8A4(&StringLiteral_3349/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, v7);
    sub_B0D8A4(&StringLiteral_27/*"\n\n"*/, v8);
    byte_42152BB = 1;
  }
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3349/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !title
    || (UILabel__set_text(title, v10, 0LL),
        subTitle = this->fields.subTitle,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, 0LL),
        v10 = System_String__Concat_43852188(v12, (System_String_o *)StringLiteral_27/*"\n\n"*/, text, 0LL),
        !subTitle) )
  {
    sub_B0D97C(v10);
  }
  UILabel__set_text(subTitle, v10, 0LL);
}