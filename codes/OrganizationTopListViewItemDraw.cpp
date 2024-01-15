void __fastcall OrganizationTopListViewItemDraw___ctor(
        OrganizationTopListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OrganizationTopListViewItemDraw__SetItem(
        OrganizationTopListViewItemDraw_o *this,
        OrganizationTopListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct OrganizationTopItemInfo_o *info; // x8
  System_String_o *imageName; // x20
  const MethodInfo *v11; // x1
  struct UILabel_o *infoTextLabel; // x22
  System_String_o *InfoText; // x0
  System_String_o *v14; // x1
  UILabel_o *v15; // x0
  UnityEngine_Object_o *baseButton; // x21
  UIButton_o *v17; // x0
  UISprite_o *baseImageSprite; // x0
  UnityEngine_Object_o *v19; // x20
  struct UIButton_o *v20; // x0

  if ( (byte_40F7FB6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&StringLiteral_19532/*"img_shop_0"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40F7FB6 = 1;
  }
  if ( item && mode )
  {
    info = item->fields.info;
    if ( !info )
      goto LABEL_25;
    imageName = info->fields.imageName;
    if ( System_String__IsNullOrEmpty(imageName, 0LL) )
    {
      infoTextLabel = this->fields.infoTextLabel;
      imageName = (System_String_o *)StringLiteral_19532/*"img_shop_0"*/;
      InfoText = OrganizationTopListViewItem__get_InfoText(item, v11);
      if ( !infoTextLabel )
        goto LABEL_25;
      v14 = InfoText;
      v15 = infoTextLabel;
    }
    else
    {
      v15 = this->fields.infoTextLabel;
      if ( !v15 )
        goto LABEL_25;
      v14 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(v15, v14, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v17 = this->fields.baseButton;
      if ( !v17 )
        goto LABEL_25;
      UIButton__set_normalSprite(v17, imageName, 0LL);
    }
    baseImageSprite = this->fields.baseImageSprite;
    if ( !baseImageSprite )
LABEL_25:
      sub_B170D4();
    UISprite__set_spriteName(baseImageSprite, imageName, 0LL);
    v19 = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
      v20 = this->fields.baseButton;
      if ( v20 )
      {
        ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v20->klass->vtable._14_SetState.method)(
          v20,
          0LL,
          1LL,
          v20->klass->vtable._15_OnClick.methodPtr);
        return;
      }
      goto LABEL_25;
    }
  }
}