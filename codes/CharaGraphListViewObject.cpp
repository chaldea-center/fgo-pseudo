void __fastcall CharaGraphListViewObject___ctor(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_49BA20F & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    byte_49BA20F = 1;
  }
  this->fields.isUpdateDisplay = 1;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CharaGraphListViewObject__Awake(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BA208 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___, method);
    byte_49BA208 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B4D1EC(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct CharaGraphListViewItemDraw_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewObject__GetItem(
        CharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49BA20A & 1) == 0 )
  {
    sub_1B4CF90(&CharaGraphListViewItemBase_TypeInfo, method);
    byte_49BA20A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CharaGraphListViewItemBase_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CharaGraphListViewItemBase_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphListViewItemBase_TypeInfo )
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
    sub_1B4D1EC(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.isUpdateDisplay |= initMode == 3;
  CharaGraphListViewObject__SetupDisplay(this, v8);
}


void __fastcall CharaGraphListViewObject__OnClickSelect(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49BA20D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9664/*"OnClickSelectListView"*/, method);
    byte_49BA20D = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B4D1EC(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9664/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall CharaGraphListViewObject__OnDestroy(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BA209 & 1) == 0 )
  {
    sub_1B4CF90(&NGUITools_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49BA209 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B4CF34(p_dragObject, 0, v8, v9);
  }
}


void __fastcall CharaGraphListViewObject__OnLongPush(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49BA20E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_9723/*"OnLongPushListView"*/, method);
    byte_49BA20E = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B4D1EC(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9723/*"OnLongPushListView"*/, (Il2CppObject *)this, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewObject__SetInput(
        CharaGraphListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x1
  struct CharaGraphListViewItemDraw_o *v7; // x21
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v9; // x1

  if ( (byte_49BA20B & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isInput);
    byte_49BA20B = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    Item = CharaGraphListViewObject__GetItem(this, v6);
    if ( !v7 )
      sub_1B4D1EC(Item, v9);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, bool, void *))v7->klass->vtable._5_SetInput.method)(
      v7,
      Item,
      isInput,
      v7->klass[1]._1.image);
  }
}


void __fastcall CharaGraphListViewObject__SetItem(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem_41356616((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall CharaGraphListViewObject__SetItem_38582808(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewObject__SetupDisplay(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  struct CharaGraphListViewItemDraw_o *v5; // x20
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v7; // x1

  if ( (byte_49BA20C & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BA20C = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) && this->fields.isUpdateDisplay )
  {
    v5 = this->fields.itemDraw;
    this->fields.isUpdateDisplay = 0;
    Item = CharaGraphListViewObject__GetItem(this, v4);
    if ( !v5 )
      sub_1B4D1EC(Item, v7);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))v5->klass->vtable._4_SetItem.method)(
      v5,
      Item,
      v5->klass->vtable._5_SetInput.methodPtr);
  }
}