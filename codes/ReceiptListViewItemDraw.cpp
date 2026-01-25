void ReceiptListViewItemDraw___ctor(ReceiptListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  float v13; // s0 OVERLAPPED
  float v14; // s3
  float v15; // s1
  float v16; // s2

  if ( (byte_4CEBB76 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1751/*"?"*/);
    byte_4CEBB76 = 1;
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
    if ( (byte_4CEBB75 & 1) == 0 )
    {
      TitleText = sub_1C7BAE8(&StringLiteral_1/*""*/);
      byte_4CEBB75 = 1;
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
                               (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
          v13 = 1.0;
          if ( mode == 1 )
            v13 = 0.5;
          if ( TitleText )
          {
            v14 = 1.0;
            v15 = v13;
            v16 = v13;
            UIWidget__set_color((UIWidget_o *)TitleText, *(UnityEngine_Color_o *)&v13, 0);
            return;
          }
        }
      }
    }
LABEL_25:
    sub_1C7BD40(TitleText, v8);
  }
}