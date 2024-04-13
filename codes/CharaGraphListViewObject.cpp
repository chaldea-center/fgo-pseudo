void __fastcall CharaGraphListViewObject___ctor(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96B4 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96B4 = 1;
  }
  this->fields.isUpdateDisplay = 1;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CharaGraphListViewObject__Awake(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct CharaGraphListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E96AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42E96AD = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct CharaGraphListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     dispObject,
                                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___);
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


CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewObject__GetItem(
        CharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E96AF & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewItemBase_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96AF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&CharaGraphListViewItemBase_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (CharaGraphListViewItemBase_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == CharaGraphListViewItemBase_TypeInfo )
    return (CharaGraphListViewItemBase_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewObject__Init(
        CharaGraphListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  bool v5; // w1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  v5 = CharaGraphListViewObject__GetItem(this, *(const MethodInfo **)&initMode) != 0LL;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  ((void (__fastcall *)(CharaGraphListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    initMode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.isUpdateDisplay |= initMode == 3;
  CharaGraphListViewObject__SetupDisplay(this, v8);
}


void __fastcall CharaGraphListViewObject__OnClickSelect(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42E96B2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10076/*"OnClickSelectListView"*/, (_DWORD)method, v2, v3);
    byte_42E96B2 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10076/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall CharaGraphListViewObject__OnDestroy(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E96AE & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E96AE = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall CharaGraphListViewObject__OnLongPush(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *manager; // x0

  if ( (byte_42E96B3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10129/*"OnLongPushListView"*/, (_DWORD)method, v2, v3);
    byte_42E96B3 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_B5D69C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10129/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall CharaGraphListViewObject__SetInput(
        CharaGraphListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x1
  struct CharaGraphListViewItemDraw_o *v8; // x21
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v10; // x1

  if ( (byte_42E96B0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    byte_42E96B0 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    Item = CharaGraphListViewObject__GetItem(this, v7);
    if ( !v8 )
      sub_B5D69C(Item, v10);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, bool, void *))v8->klass->vtable._5_SetInput.method)(
      v8,
      Item,
      isInput,
      v8->klass[1]._1.image);
  }
}


void __fastcall CharaGraphListViewObject__SetItem(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall CharaGraphListViewObject__SetItem_26709192(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewObject__SetupDisplay(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x1
  struct CharaGraphListViewItemDraw_o *v7; // x20
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v9; // x1

  if ( (byte_42E96B1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96B1 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) && this->fields.isUpdateDisplay )
  {
    v7 = this->fields.itemDraw;
    this->fields.isUpdateDisplay = 0;
    Item = CharaGraphListViewObject__GetItem(this, v6);
    if ( !v7 )
      sub_B5D69C(Item, v9);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))v7->klass->vtable._4_SetItem.method)(
      v7,
      Item,
      v7->klass->vtable._5_SetInput.methodPtr);
  }
}