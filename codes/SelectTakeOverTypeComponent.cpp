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

  if ( (byte_596DEAD & 1) == 0 )
  {
    sub_2213A60(&SelectTakeOverTypeComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21609/*"img_txt_account"*/);
    sub_2213A60(&StringLiteral_21610/*"img_txt_account_overwrite"*/);
    byte_596DEAD = 1;
  }
  titleImg = this->fields.titleImg;
  if ( SelectTakeOverTypeComponent_TypeInfo->static_fields->isOverride )
  {
    if ( !titleImg )
      goto LABEL_10;
    v4 = &StringLiteral_21610/*"img_txt_account_overwrite"*/;
  }
  else
  {
    if ( !titleImg )
      goto LABEL_10;
    v4 = &StringLiteral_21609/*"img_txt_account"*/;
  }
  UISprite__set_spriteName(titleImg, (System_String_o *)*v4, 0);
  titleImg = this->fields.titleImg;
  if ( !titleImg )
LABEL_10:
    sub_2213CDC(titleImg, method);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))titleImg->klass->vtable._33_MakePixelPerfect.methodPtr)(
    titleImg,
    titleImg->klass->vtable._33_MakePixelPerfect.method);
}