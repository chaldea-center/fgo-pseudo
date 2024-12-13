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
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *titleImg; // x0
  __int64 *v6; // x8

  if ( (byte_4B34AD3 & 1) == 0 )
  {
    sub_1BD3458(&SelectTakeOverTypeComponent_TypeInfo, method);
    sub_1BD3458(&StringLiteral_20746/*"img_txt_account"*/, v3);
    sub_1BD3458(&StringLiteral_20747/*"img_txt_account_overwrite"*/, v4);
    byte_4B34AD3 = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v6 = &StringLiteral_20746/*"img_txt_account"*/)
      : (v6 = &StringLiteral_20747/*"img_txt_account_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v6, 0LL),
        (titleImg = this->fields.titleImg) == 0LL) )
  {
    sub_1BD36B4(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))titleImg->klass->vtable._33_MakePixelPerfect.method)(
    titleImg,
    titleImg->klass->vtable._34_get_minWidth.methodPtr);
}