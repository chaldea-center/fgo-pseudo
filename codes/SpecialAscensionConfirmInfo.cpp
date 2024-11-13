void __fastcall SpecialAscensionConfirmInfo___ctor(SpecialAscensionConfirmInfo_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
        SpecialAscensionConfirmInfo_o *this,
        System_String_o *text,
        int32_t fontSize,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *title; // x21
  System_String_o *v13; // x0
  __int64 v14; // x1
  UILabel_o *subTitle; // x20
  System_String_o *v16; // x0

  if ( (byte_4B19E5C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, text, *(_QWORD *)&fontSize);
    sub_1BCA7E0(&StringLiteral_12341/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3866/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_44/*"\n\n"*/, v10, v11);
    byte_4B19E5C = 1;
  }
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, text);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !title
    || (UILabel__set_text(title, v13, 0LL),
        subTitle = this->fields.subTitle,
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12341/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, 0LL),
        v13 = System_String__Concat_62412480(v16, (System_String_o *)StringLiteral_44/*"\n\n"*/, text, 0LL),
        !subTitle) )
  {
    sub_1BCAA3C(v13, v14);
  }
  UILabel__set_text(subTitle, v13, 0LL);
}