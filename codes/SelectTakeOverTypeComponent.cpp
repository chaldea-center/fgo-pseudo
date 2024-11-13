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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *titleImg; // x0
  __int64 *v9; // x8

  if ( (byte_4B13B3E & 1) == 0 )
  {
    sub_1BCA7E0(&SelectTakeOverTypeComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20716/*"img_txt_account"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_20717/*"img_txt_account_overwrite"*/, v6, v7);
    byte_4B13B3E = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v9 = &StringLiteral_20716/*"img_txt_account"*/)
      : (v9 = &StringLiteral_20717/*"img_txt_account_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v9, 0LL),
        (titleImg = this->fields.titleImg) == 0LL) )
  {
    sub_1BCAA3C(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))titleImg->klass->vtable._33_MakePixelPerfect.method)(
    titleImg,
    titleImg->klass->vtable._34_get_minWidth.methodPtr);
}