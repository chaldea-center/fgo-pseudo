void __fastcall SupportDeckFixErrorListViewObject___ctor(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AE5C & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418AE5C = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorListViewObject__Awake(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SupportDeckFixErrorListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418AE5A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___, method);
    byte_418AE5A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct SupportDeckFixErrorListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              dispObject,
                                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall SupportDeckFixErrorListViewObject__Init(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  SupportDeckFixErrorListViewItem_c *v6; // x10
  struct ListViewItem_o *v7; // x21
  UnityEngine_Object_o *itemDraw; // x20
  UILabel_o *messageLabel; // x0
  __int64 v10; // x1
  struct SupportDeckFixErrorListViewItemDraw_o *v11; // x8

  if ( (byte_418AE5B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SupportDeckFixErrorListViewItem_TypeInfo, v3);
    byte_418AE5B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&SupportDeckFixErrorListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (SupportDeckFixErrorListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == SupportDeckFixErrorListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v6 == SupportDeckFixErrorListViewItem_TypeInfo )
      {
        itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        messageLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
        if ( ((unsigned __int8)messageLabel & 1) != 0 )
        {
          if ( !v7 || (v11 = this->fields.itemDraw) == 0LL || (messageLabel = v11->fields.messageLabel) == 0LL )
            sub_B2C434(messageLabel, v10);
          UILabel__set_text(messageLabel, (System_String_o *)v7[1].klass, 0LL);
        }
      }
    }
  }
}


void __fastcall SupportDeckFixErrorListViewObject__SetMode(
        SupportDeckFixErrorListViewObject_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  ((void (__fastcall *)(SupportDeckFixErrorListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    mode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
}