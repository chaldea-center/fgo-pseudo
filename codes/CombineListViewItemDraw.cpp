void CombineListViewItemDraw___ctor(CombineListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineListViewItemDraw__SetItem(
        CombineListViewItemDraw_o *this,
        CombineListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *Component_object; // x0
  __int64 v9; // x1
  struct CombineListItemInfo_o *info; // x8
  UnityEngine_Object_o *baseButton; // x20
  char v12; // w20

  if ( (byte_4CBA1A9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA1A9 = 1;
  }
  if ( item && mode )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UISprite_o *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_23;
      Component_object = this->fields.baseSprite;
      if ( !Component_object )
        goto LABEL_23;
      UISprite__set_spriteName(Component_object, info->fields.spriteName, 0);
    }
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UISprite_o *)this->fields.baseButton;
      if ( Component_object )
      {
        Component_object = (UISprite_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)Component_object,
                                           (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( Component_object )
        {
          Component_object = (UISprite_o *)UnityEngine_Collider__get_enabled(
                                             (UnityEngine_Collider_o *)Component_object,
                                             0);
          if ( this->fields.baseButton )
          {
            v12 = (char)Component_object;
            Component_object = (UISprite_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this->fields.baseButton,
                                               (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( Component_object )
            {
              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0);
              Component_object = (UISprite_o *)this->fields.baseButton;
              if ( Component_object )
              {
                ((void (__fastcall *)(UISprite_o *, _QWORD, __int64, const MethodInfo *))Component_object->klass->vtable._14_OnEnable.methodPtr)(
                  Component_object,
                  0,
                  1,
                  Component_object->klass->vtable._14_OnEnable.method);
                Component_object = (UISprite_o *)this->fields.baseButton;
                if ( Component_object )
                {
                  Component_object = (UISprite_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)Component_object,
                                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
                  if ( Component_object )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v12 & 1, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C6BC60(Component_object, v9);
    }
  }
}