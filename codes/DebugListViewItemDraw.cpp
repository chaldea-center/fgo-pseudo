void DebugListViewItemDraw___ctor(DebugListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugListViewItemDraw__SetItem(
        DebugListViewItemDraw_o *this,
        DebugListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *titleText; // x1
  UILabel_o *eventTextLabel; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2DE4C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DE4C = 1;
  }
  if ( item && mode )
  {
    titleText = item->fields.titleText;
    if ( titleText )
    {
      eventTextLabel = this->fields.eventTextLabel;
      if ( !eventTextLabel )
        goto LABEL_20;
      UILabel__set_text(eventTextLabel, titleText, 0);
    }
    eventTextLabel = (UILabel_o *)this->fields.baseImageTexture;
    if ( eventTextLabel )
    {
      eventTextLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventTextLabel, 0);
      if ( eventTextLabel )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)eventTextLabel,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        eventTextLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)eventTextLabel & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        }
        eventTextLabel = (UILabel_o *)this->fields.baseImageTexture;
        v10.fields.r = 1.0;
        if ( mode == 1 )
          v10.fields.r = 0.5;
        if ( eventTextLabel )
        {
          v10.fields.a = 1.0;
          v10.fields.g = v10.fields.r;
          v10.fields.b = v10.fields.r;
          UIWidget__set_color((UIWidget_o *)eventTextLabel, v10, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_1C93D2C(eventTextLabel, titleText);
  }
}