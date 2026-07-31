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

  if ( (byte_5935DEB & 1) == 0 )
  {
    sub_21FFC50(&SelectTakeOverTypeComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_21568/*"img_txt_account"*/);
    sub_21FFC50(&StringLiteral_21569/*"img_txt_account_overwrite"*/);
    byte_5935DEB = 1;
  }
  titleImg = this->fields.titleImg;
  if ( SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride )
  {
    if ( !titleImg )
      goto LABEL_10;
    v4 = &StringLiteral_21569/*"img_txt_account_overwrite"*/;
  }
  else
  {
    if ( !titleImg )
      goto LABEL_10;
    v4 = &StringLiteral_21568/*"img_txt_account"*/;
  }
  UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0);
  titleImg = this->fields.titleImg;
  if ( !titleImg )
LABEL_10:
    sub_21FFECC(titleImg, method);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))titleImg->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleImg,
    titleImg->klass->vtable._33_MakePixelPerfect.method);
}