void CharaGraphListViewObject___ctor(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC66F7 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC66F7 = 1;
  }
  this->fields.isUpdateDisplay = 1;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CharaGraphListViewObject__Awake(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC66F0 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___);
    byte_4CC66F0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct CharaGraphListViewItemDraw_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


CharaGraphListViewItemBase_o *CharaGraphListViewObject__GetItem(
        CharaGraphListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC66F2 & 1) == 0 )
  {
    sub_1C713B0(&CharaGraphListViewItemBase_TypeInfo);
    byte_4CC66F2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = CharaGraphListViewItemBase_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (CharaGraphListViewItemBase_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphListViewItemBase_TypeInfo )
    return (CharaGraphListViewItemBase_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListViewObject__Init(CharaGraphListViewObject_o *this, int32_t initMode, const MethodInfo *method)
{
  bool v5; // w1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  v5 = CharaGraphListViewObject__GetItem(this, *(const MethodInfo **)&initMode) != 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  ((void (__fastcall *)(CharaGraphListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 2,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.isUpdateDisplay |= initMode == 3;
  CharaGraphListViewObject__SetupDisplay(this, v8);
}


void CharaGraphListViewObject__OnClickSelect(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CC66F5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9869/*"OnClickSelectListView"*/);
    byte_4CC66F5 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C71608(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9869/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void CharaGraphListViewObject__OnDestroy(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC66F1 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC66F1 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C71354(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void CharaGraphListViewObject__OnLongPush(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CC66F6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9929/*"OnLongPushListView"*/);
    byte_4CC66F6 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C71608(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9929/*"OnLongPushListView"*/, (Il2CppObject *)this, 0);
  }
}


void CharaGraphListViewObject__SetInput(CharaGraphListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x1
  struct CharaGraphListViewItemDraw_o *v7; // x21
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v9; // x1

  if ( (byte_4CC66F3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC66F3 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v7 = this->fields.itemDraw;
    Item = CharaGraphListViewObject__GetItem(this, v6);
    if ( !v7 )
      sub_1C71608(Item, v9);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, bool, const MethodInfo *))v7->klass->vtable._5_SetInput.methodPtr)(
      v7,
      Item,
      isInput,
      v7->klass->vtable._5_SetInput.method);
  }
}


void CharaGraphListViewObject__SetItem(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
}


void CharaGraphListViewObject__SetItem_41090528(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
}


void CharaGraphListViewObject__SetupDisplay(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  struct CharaGraphListViewItemDraw_o *v5; // x20
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v7; // x1

  if ( (byte_4CC66F4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC66F4 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) && this->fields.isUpdateDisplay )
  {
    v5 = this->fields.itemDraw;
    this->fields.isUpdateDisplay = 0;
    Item = CharaGraphListViewObject__GetItem(this, v4);
    if ( !v5 )
      sub_1C71608(Item, v7);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))v5->klass->vtable._4_SetItem.methodPtr)(
      v5,
      Item,
      v5->klass->vtable._4_SetItem.method);
  }
}