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
  Il2CppObject *Component_object; // x21
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2DF01 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1751/*"?"*/);
    byte_4D2DF01 = 1;
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
      v10 = (System_String_o *)StringLiteral_1751/*"?"*/;
    }
    UILabel__set_text(titleTextLabel, v10, 0);
    timeTextLabel = this->fields.timeTextLabel;
    if ( (byte_4D2DF00 & 1) == 0 )
    {
      TitleText = sub_1C93AD4(&StringLiteral_1/*""*/);
      byte_4D2DF00 = 1;
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
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          TitleText = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
          if ( (TitleText & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_25;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          }
          TitleText = (__int64)this->fields.baseImageTexture;
          v13.fields.r = 1.0;
          if ( mode == 1 )
            v13.fields.r = 0.5;
          if ( TitleText )
          {
            v13.fields.a = 1.0;
            v13.fields.g = v13.fields.r;
            v13.fields.b = v13.fields.r;
            UIWidget__set_color((UIWidget_o *)TitleText, v13, 0);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1C93D2C(TitleText, v8);
  }
}