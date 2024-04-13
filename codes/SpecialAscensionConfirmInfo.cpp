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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *title; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *subTitle; // x20
  System_String_o *v19; // x0

  if ( (byte_42E920C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)text, fontSize, method);
    sub_B5D5C4(&StringLiteral_12435/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3402/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_27/*"\n\n"*/, v12, v13, v14);
    byte_42E920C = 1;
  }
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3402/*"CONFIRM_TITLE_SPECIAL_ASCENSION"*/, 0LL);
  if ( !title
    || (UILabel__set_text(title, v16, 0LL),
        subTitle = this->fields.subTitle,
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12435/*"SPECIAL_ASCENSION_DIALOG_TXT"*/, 0LL),
        v16 = System_String__Concat_44580072(v19, (System_String_o *)StringLiteral_27/*"\n\n"*/, text, 0LL),
        !subTitle) )
  {
    sub_B5D69C(v16, v17);
  }
  UILabel__set_text(subTitle, v16, 0LL);
}