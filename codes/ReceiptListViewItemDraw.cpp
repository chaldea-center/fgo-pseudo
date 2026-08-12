void ReceiptListViewItemDraw___ctor(ReceiptListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ReceiptListViewItemDraw__SetItem(
        ReceiptListViewItemDraw_o *this,
        ReceiptListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 TitleText; // x0
  const MethodInfo *v8; // x1
  UILabel_o *titleTextLabel; // x22
  System_String_o *v10; // x1
  UILabel_o *timeTextLabel; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x21
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596DC81 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1838/*"?"*/);
    byte_596DC81 = 1;
  }
  if ( item && mode )
  {
    TitleText = (__int64)ReceiptListViewItem__get_TitleText(item, (const MethodInfo *)item);
    titleTextLabel = this->fields.titleTextLabel;
    if ( TitleText )
    {
      TitleText = (__int64)ReceiptListViewItem__get_TitleText(item, v8);
      if ( !titleTextLabel )
        goto LABEL_25;
      v10 = (System_String_o *)TitleText;
    }
    else
    {
      if ( !titleTextLabel )
        goto LABEL_25;
      v10 = (System_String_o *)StringLiteral_1838/*"?"*/;
    }
    UILabel__set_text(titleTextLabel, v10, 0);
    timeTextLabel = this->fields.timeTextLabel;
    if ( (byte_596DC80 & 1) == 0 )
    {
      TitleText = sub_2213A60(&StringLiteral_1/*""*/);
      byte_596DC80 = 1;
    }
    if ( timeTextLabel )
    {
      UILabel__set_text(timeTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      TitleText = (__int64)this->fields.baseImageTexture;
      if ( TitleText )
      {
        TitleText = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TitleText, 0);
        if ( TitleText )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)TitleText,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
          TitleText = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
          if ( (TitleText & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_25;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          }
          TitleText = (__int64)this->fields.baseImageTexture;
          if ( TitleText )
          {
            v16.fields.r = 1.0;
            v16.fields.a = 1.0;
            if ( mode == 1 )
              v16.fields.r = 0.5;
            v16.fields.g = v16.fields.r;
            v16.fields.b = v16.fields.r;
            UIWidget__set_color((UIWidget_o *)TitleText, v16, 0);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_2213CDC(TitleText, v8);
  }
}