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
  System_String_o *v13; // x0

  if ( (byte_40F9D7E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, text);
    sub_B16FFC(&StringLiteral_12235, v6);
    sub_B16FFC(&StringLiteral_3327, v7);
    sub_B16FFC(&StringLiteral_27, v8);
    byte_40F9D7E = 1;
  }
  title = this->fields.title;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3327, 0LL);
  if ( !title
    || (UILabel__set_text(title, v10, 0LL),
        subTitle = this->fields.subTitle,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12235, 0LL),
        v13 = System_String__Concat_43746016(v12, (System_String_o *)StringLiteral_27, text, 0LL),
        !subTitle) )
  {
    sub_B170D4();
  }
  UILabel__set_text(subTitle, v13, 0LL);
}