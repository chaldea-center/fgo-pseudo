void __fastcall CombineListViewItemDraw___ctor(CombineListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineListViewItemDraw__SetItem(
        CombineListViewItemDraw_o *this,
        CombineListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *Component_object; // x0
  __int64 v10; // x1
  struct CombineListItemInfo_o *info; // x8
  UnityEngine_Object_o *baseButton; // x20
  char v13; // w20

  if ( (byte_4BCB323 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BCB323 = 1;
  }
  if ( item && mode )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (UISprite_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
    if ( ((unsigned __int8)Component_object & 1) != 0 )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_23;
      Component_object = this->fields.baseSprite;
      if ( !Component_object )
        goto LABEL_23;
      UISprite__set_spriteName(Component_object, info->fields.spriteName, 0LL);
    }
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UISprite_o *)this->fields.baseButton;
      if ( Component_object )
      {
        Component_object = (UISprite_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)Component_object,
                                           (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( Component_object )
        {
          Component_object = (UISprite_o *)UnityEngine_Collider__get_enabled(
                                             (UnityEngine_Collider_o *)Component_object,
                                             0LL);
          if ( this->fields.baseButton )
          {
            v13 = (char)Component_object;
            Component_object = (UISprite_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this->fields.baseButton,
                                               (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( Component_object )
            {
              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 1, 0LL);
              Component_object = (UISprite_o *)this->fields.baseButton;
              if ( Component_object )
              {
                ((void (__fastcall *)(UISprite_o *, _QWORD, __int64, Il2CppMethodPointer))Component_object->klass->vtable._14_OnEnable.method)(
                  Component_object,
                  0LL,
                  1LL,
                  Component_object->klass->vtable._15_OnInit.methodPtr);
                Component_object = (UISprite_o *)this->fields.baseButton;
                if ( Component_object )
                {
                  Component_object = (UISprite_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)Component_object,
                                                     (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_Collider___);
                  if ( Component_object )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v13 & 1, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C1AE30(Component_object, v10);
    }
  }
}