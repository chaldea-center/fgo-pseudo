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

  if ( (byte_4C24A77 & 1) == 0 )
  {
    sub_1C2D490(&SelectTakeOverTypeComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_20600/*"img_txt_account"*/);
    sub_1C2D490(&StringLiteral_20601/*"img_txt_account_overwrite"*/);
    byte_4C24A77 = 1;
  }
  titleImg = this->fields.titleImg;
  if ( !titleImg
    || (!SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride
      ? (v4 = &StringLiteral_20600/*"img_txt_account"*/)
      : (v4 = &StringLiteral_20601/*"img_txt_account_overwrite"*/),
        UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0),
        (titleImg = this->fields.titleImg) == 0) )
  {
    sub_1C2D6EC(titleImg, method);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))titleImg->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleImg,
    titleImg->klass->vtable._33_MakePixelPerfect.method);
}