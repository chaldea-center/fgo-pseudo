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
  __int64 v11; // x1
  UILabel_o *subTitle; // x20
  System_String_o *v13; // x0

  if ( (byte_4BB83F2 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, text);
    sub_1C13D24(&StringLiteral_12401/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, v6);
    sub_1C13D24(&StringLiteral_3879/*"CONFIRM_TITLE_LIMITUP"*/, v7);
    sub_1C13D24(&StringLiteral_44/*"\n\n"*/, v8);
    byte_4BB83F2 = 1;
  }
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3879/*"CONFIRM_TITLE_LIMITUP"*/, 0LL);
  if ( !title
    || (UILabel__set_text(title, v10, 0LL),
        subTitle = this->fields.subTitle,
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12401/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL),
        v10 = System_String__Concat_62979204(v13, (System_String_o *)StringLiteral_44/*"\n\n"*/, text, 0LL),
        !subTitle) )
  {
    sub_1C13F80(v10, v11);
  }
  UILabel__set_text(subTitle, v10, 0LL);
}