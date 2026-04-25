void OrganizationTopListViewItemDraw___ctor(OrganizationTopListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OrganizationTopListViewItemDraw__SetItem(
        OrganizationTopListViewItemDraw_o *this,
        OrganizationTopListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *ImageName; // x20
  __int64 v8; // x1
  struct UILabel_o *infoTextLabel; // x22
  UILabel_o *InfoText; // x0
  System_String_o *v11; // x1
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *v13; // x20

  if ( (byte_4E00036 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_20854/*"img_shop_0"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E00036 = 1;
  }
  if ( item && mode )
  {
    ImageName = OrganizationTopListViewItem__get_ImageName(item, 0);
    if ( System_String__IsNullOrEmpty(ImageName, 0) )
    {
      infoTextLabel = this->fields.infoTextLabel;
      ImageName = (System_String_o *)StringLiteral_20854/*"img_shop_0"*/;
      InfoText = (UILabel_o *)OrganizationTopListViewItem__get_InfoText(item, 0);
      if ( !infoTextLabel )
        goto LABEL_22;
      v11 = (System_String_o *)InfoText;
      InfoText = infoTextLabel;
    }
    else
    {
      InfoText = this->fields.infoTextLabel;
      if ( !InfoText )
        goto LABEL_22;
      v11 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(InfoText, v11, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      InfoText = (UILabel_o *)this->fields.baseButton;
      if ( !InfoText )
        goto LABEL_22;
      UIButton__set_normalSprite((UIButton_o *)InfoText, ImageName, 0);
    }
    InfoText = (UILabel_o *)this->fields.baseImageSprite;
    if ( !InfoText )
LABEL_22:
      sub_1CE6958(InfoText, v8);
    UISprite__set_spriteName((UISprite_o *)InfoText, ImageName, 0);
    v13 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
    {
      InfoText = (UILabel_o *)this->fields.baseButton;
      if ( InfoText )
      {
        ((void (__fastcall *)(UILabel_o *, _QWORD, __int64, const MethodInfo *))InfoText->klass->vtable._14_OnEnable.methodPtr)(
          InfoText,
          0,
          1,
          InfoText->klass->vtable._14_OnEnable.method);
        return;
      }
      goto LABEL_22;
    }
  }
}