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
  UISprite_o *Component_WebViewObject; // x0
  __int64 v10; // x1
  struct CombineListItemInfo_o *info; // x8
  UnityEngine_Object_o *baseButton; // x20
  char v13; // w20

  if ( (byte_41861EB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_41861EB = 1;
  }
  if ( item && mode )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_WebViewObject = (UISprite_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
    if ( ((unsigned __int8)Component_WebViewObject & 1) != 0 )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_25;
      Component_WebViewObject = this->fields.baseSprite;
      if ( !Component_WebViewObject )
        goto LABEL_25;
      UISprite__set_spriteName(Component_WebViewObject, info->fields.spriteName, 0LL);
    }
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_WebViewObject = (UISprite_o *)this->fields.baseButton;
      if ( Component_WebViewObject )
      {
        Component_WebViewObject = (UISprite_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)Component_WebViewObject,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( Component_WebViewObject )
        {
          Component_WebViewObject = (UISprite_o *)UnityEngine_Collider__get_enabled(
                                                    (UnityEngine_Collider_o *)Component_WebViewObject,
                                                    0LL);
          if ( this->fields.baseButton )
          {
            v13 = (char)Component_WebViewObject;
            Component_WebViewObject = (UISprite_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this->fields.baseButton,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( Component_WebViewObject )
            {
              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, 1, 0LL);
              Component_WebViewObject = (UISprite_o *)this->fields.baseButton;
              if ( Component_WebViewObject )
              {
                ((void (__fastcall *)(UISprite_o *, _QWORD, __int64, Il2CppMethodPointer))Component_WebViewObject->klass->vtable._14_OnEnable.method)(
                  Component_WebViewObject,
                  0LL,
                  1LL,
                  Component_WebViewObject->klass->vtable._15_OnInit.methodPtr);
                Component_WebViewObject = (UISprite_o *)this->fields.baseButton;
                if ( Component_WebViewObject )
                {
                  Component_WebViewObject = (UISprite_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)Component_WebViewObject,
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
                  if ( Component_WebViewObject )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, v13 & 1, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_25:
      sub_B2C434(Component_WebViewObject, v10);
    }
  }
}