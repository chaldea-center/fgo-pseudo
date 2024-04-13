void __fastcall SupportDeckFixErrorListViewObject___ctor(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC962 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC962 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SupportDeckFixErrorListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC960 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC960 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct SupportDeckFixErrorListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              dispObject,
                                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SupportDeckFixErrorListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall SupportDeckFixErrorListViewObject__Init(
        SupportDeckFixErrorListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  SupportDeckFixErrorListViewItem_c *v10; // x10
  struct ListViewItem_o *v11; // x21
  UnityEngine_Object_o *itemDraw; // x20
  UILabel_o *messageLabel; // x0
  __int64 v14; // x1
  struct SupportDeckFixErrorListViewItemDraw_o *v15; // x8

  if ( (byte_42EC961 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SupportDeckFixErrorListViewItem_TypeInfo, v5, v6, v7);
    byte_42EC961 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&SupportDeckFixErrorListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (SupportDeckFixErrorListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1];
      v11 = v10 == SupportDeckFixErrorListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v10 == SupportDeckFixErrorListViewItem_TypeInfo )
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
          if ( !v11 || (v15 = this->fields.itemDraw) == 0LL || (messageLabel = v15->fields.messageLabel) == 0LL )
            sub_B5D69C(messageLabel, v14);
          UILabel__set_text(messageLabel, (System_String_o *)v11[1].klass, 0LL);
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