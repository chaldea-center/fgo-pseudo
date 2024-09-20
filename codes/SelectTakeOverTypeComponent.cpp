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

  if ( (byte_4A58BE1 & 1) == 0 )
  {
    sub_1B885B0(&SelectTakeOverTypeComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_20497/*"img_txt_account"*/);
    sub_1B885B0(&StringLiteral_20498/*"img_txt_account_overwrite"*/);
    byte_4A58BE1 = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v4 = &StringLiteral_20497/*"img_txt_account"*/)
      : (v4 = &StringLiteral_20498/*"img_txt_account_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0LL),
        (titleImg = this->fields.titleImg) == 0LL) )
  {
    sub_1B8880C(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))titleImg->klass->vtable._33_MakePixelPerfect.method)(
    titleImg,
    titleImg->klass->vtable._34_get_minWidth.methodPtr);
}