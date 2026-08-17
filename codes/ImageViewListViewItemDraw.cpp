void ImageViewListViewItemDraw___ctor(ImageViewListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ImageViewListViewItemDraw__SetItem(
        ImageViewListViewItemDraw_o *this,
        ImageViewListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UILabel_o *titleTextLabel; // x22
  System_String_o *TitleText; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Component_object; // x21
  float v13; // s0 OVERLAPPED
  float v14; // s3
  float v15; // s1
  float v16; // s2

  if ( (byte_596DC63 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DC63 = 1;
  }
  if ( item && mode )
  {
    if ( ImageViewListViewItem__get_TitleText(item, (const MethodInfo *)item) )
    {
      titleTextLabel = this->fields.titleTextLabel;
      TitleText = ImageViewListViewItem__get_TitleText(item, v7);
      if ( !titleTextLabel )
        goto LABEL_20;
      UILabel__set_text(titleTextLabel, TitleText, 0);
    }
    TitleText = (System_String_o *)this->fields.baseImageTexture;
    if ( TitleText )
    {
      TitleText = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TitleText, 0);
      if ( TitleText )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)TitleText,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
        TitleText = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)TitleText & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        }
        TitleText = (System_String_o *)this->fields.baseImageTexture;
        if ( TitleText )
        {
          v13 = 1.0;
          v14 = 1.0;
          if ( mode == 1 )
            v13 = 0.5;
          v15 = v13;
          v16 = v13;
          UIWidget__set_color((UIWidget_o *)TitleText, *(UnityEngine_Color_o *)&v13, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_2213CDC(TitleText, v7);
  }
}