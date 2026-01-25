void DebugListViewItemDraw___ctor(DebugListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugListViewItemDraw__SetItem(
        DebugListViewItemDraw_o *this,
        DebugListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *titleText; // x1
  UILabel_o *eventTextLabel; // x0
  Il2CppObject *Component_object; // x21
  float v10; // s0 OVERLAPPED
  float v11; // s3
  float v12; // s1
  float v13; // s2

  if ( (byte_4CEBAC1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBAC1 = 1;
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
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
        v10 = 1.0;
        if ( mode == 1 )
          v10 = 0.5;
        if ( eventTextLabel )
        {
          v11 = 1.0;
          v12 = v10;
          v13 = v10;
          UIWidget__set_color((UIWidget_o *)eventTextLabel, *(UnityEngine_Color_o *)&v10, 0);
          return;
        }
      }
    }
LABEL_20:
    sub_1C7BD40(eventTextLabel, titleText);
  }
}