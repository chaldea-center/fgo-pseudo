void __fastcall SelectTakeOverTypeComponent___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall SelectTakeOverTypeComponent___ctor(SelectTakeOverTypeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SelectTakeOverTypeComponent__Awake(SelectTakeOverTypeComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SelectTakeOverTypeComponent__SetupTitleImg(
        SelectTakeOverTypeComponent_o *this,
        const MethodInfo *method)
{
  UISprite_o *titleImg; // x0
  __int64 *v4; // x8

  if ( (byte_438C462 & 1) == 0 )
  {
    sub_B775C4(&SelectTakeOverTypeComponent_TypeInfo);
    sub_B775C4(&StringLiteral_20058/*"img_txt_account"*/);
    sub_B775C4(&StringLiteral_20059/*"img_txt_account_overwrite"*/);
    byte_438C462 = 1;
  }
  if ( (BYTE3(SelectTakeOverTypeComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SelectTakeOverTypeComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectTakeOverTypeComponent_TypeInfo);
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v4 = &StringLiteral_20058/*"img_txt_account"*/)
      : (v4 = &StringLiteral_20059/*"img_txt_account_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0LL),
        (titleImg = this->fields.titleImg) == 0LL) )
  {
    sub_B7769C(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))titleImg->klass->vtable._33_MakePixelPerfect.method)(
    titleImg,
    titleImg->klass->vtable._34_get_minWidth.methodPtr);
}