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
  struct CombineListItemInfo_o *info; // x8
  UISprite_o *v10; // x0
  UnityEngine_Object_o *baseButton; // x20
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  bool enabled; // w0
  bool v15; // w20
  UnityEngine_Collider_o *v16; // x0
  struct UIButton_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Collider_o *v19; // x0

  if ( (byte_40F992A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F992A = 1;
  }
  if ( item && mode )
  {
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_25;
      v10 = this->fields.baseSprite;
      if ( !v10 )
        goto LABEL_25;
      UISprite__set_spriteName(v10, info->fields.spriteName, 0LL);
    }
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( v12 )
      {
        Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v12,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( Component_WebViewObject )
        {
          enabled = UnityEngine_Collider__get_enabled(Component_WebViewObject, 0LL);
          if ( this->fields.baseButton )
          {
            v15 = enabled;
            v16 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              (UnityEngine_Component_o *)this->fields.baseButton,
                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
            if ( v16 )
            {
              UnityEngine_Collider__set_enabled(v16, 1, 0LL);
              v17 = this->fields.baseButton;
              if ( v17 )
              {
                ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v17->klass->vtable._14_SetState.method)(
                  v17,
                  0LL,
                  1LL,
                  v17->klass->vtable._15_OnClick.methodPtr);
                v18 = (UnityEngine_Component_o *)this->fields.baseButton;
                if ( v18 )
                {
                  v19 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    v18,
                                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
                  if ( v19 )
                  {
                    UnityEngine_Collider__set_enabled(v19, v15, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_25:
      sub_B170D4();
    }
  }
}