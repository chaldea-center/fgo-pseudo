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

  if ( (byte_4C351ED & 1) == 0 )
  {
    sub_1C32C20(&SelectTakeOverTypeComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_20612/*"img_txt_account"*/);
    sub_1C32C20(&StringLiteral_20613/*"img_txt_account_overwrite"*/);
    byte_4C351ED = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v4 = &StringLiteral_20612/*"img_txt_account"*/)
      : (v4 = &StringLiteral_20613/*"img_txt_account_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0),
        (titleImg = this->fields.titleImg) == 0) )
  {
    sub_1C32E7C(titleImg);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))titleImg->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleImg,
    titleImg->klass->vtable._33_MakePixelPerfect.method);
}