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
  UILabel_o *title; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *subTitle; // x20
  System_String_o *v10; // x0

  if ( (byte_4352743 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12456/*"SPECIAL_ASCENSION_DIALOG_TXT"*/);
    sub_B70694(&StringLiteral_3411/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/);
    sub_B70694(&StringLiteral_27/*"\n\n"*/);
    byte_4352743 = 1;
  }
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3411/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !title
    || (UILabel__set_text(title, v7, 0LL),
        subTitle = this->fields.subTitle,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12456/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, 0LL),
        v7 = System_String__Concat_44760452(v10, (System_String_o *)StringLiteral_27/*"\n\n"*/, text, 0LL),
        !subTitle) )
  {
    sub_B7076C(v7, v8);
  }
  UILabel__set_text(subTitle, v7, 0LL);
}