void SelectTakeOverTypeComponent___ctor(SelectTakeOverTypeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SelectTakeOverTypeComponent__Awake(SelectTakeOverTypeComponent_o *this, const MethodInfo *method)
{
  ;
}


void SelectTakeOverTypeComponent__SetupTitleImg(SelectTakeOverTypeComponent_o *this, const MethodInfo *method)
{
  UISprite_o *titleImg; // x0
  __int64 *v4; // x8

  if ( (byte_4D29F8D & 1) == 0 )
  {
    sub_1C94098(&SelectTakeOverTypeComponent_TypeInfo);
    sub_1C94098(&StringLiteral_20792/*"img_txt_account"*/);
    sub_1C94098(&StringLiteral_20793/*"img_txt_account_overwrite"*/);
    byte_4D29F8D = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v4 = &StringLiteral_20792/*"img_txt_account"*/)
      : (v4 = &StringLiteral_20793/*"img_txt_account_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0),
        (titleImg = this->fields.titleImg) == 0) )
  {
    sub_1C942F0(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))titleImg->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleImg,
    titleImg->klass->vtable._33_MakePixelPerfect.method);
}