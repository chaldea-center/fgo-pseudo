void CharaGraphListViewObject___ctor(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewObject_c *v4; // x0

  if ( (byte_593796A & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_593796A = 1;
  }
  v4 = ListViewObject_TypeInfo;
  this->fields.isUpdateDisplay = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void CharaGraphListViewObject__Awake(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5937963 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___);
    byte_5937963 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewItemDraw___);
  this->fields.itemDraw = (struct CharaGraphListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
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

  if ( (byte_5937965 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewItemBase_TypeInfo);
    byte_5937965 = 1;
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
  bool v10; // w8

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
    sub_21FFECC(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  v10 = initMode == 3 || this->fields.isUpdateDisplay;
  this->fields.isUpdateDisplay = v10;
  CharaGraphListViewObject__SetupDisplay(this, v8);
}


void CharaGraphListViewObject__OnClickSelect(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_5937968 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10254/*"OnClickSelectListView"*/);
    byte_5937968 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_21FFECC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10254/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void CharaGraphListViewObject__OnDestroy(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5937964 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937964 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void CharaGraphListViewObject__OnLongPush(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_5937969 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10317/*"OnLongPushListView"*/);
    byte_5937969 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_21FFECC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10317/*"OnLongPushListView"*/, (Il2CppObject *)this, 0);
  }
}


void CharaGraphListViewObject__SetInput(CharaGraphListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x1
  struct CharaGraphListViewItemDraw_o *v9; // x21
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v11; // x1

  if ( (byte_5937966 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937966 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    Item = CharaGraphListViewObject__GetItem(this, v8);
    if ( !v9 )
      sub_21FFECC(Item, v11);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, bool, const MethodInfo *))v9->klass->vtable._5_SetInput.methodPtr)(
      v9,
      Item,
      isInput,
      v9->klass->vtable._5_SetInput.method);
  }
}


void CharaGraphListViewObject__SetItem(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
}


void CharaGraphListViewObject__SetItem_47750096(
        CharaGraphListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
}


void CharaGraphListViewObject__SetupDisplay(CharaGraphListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v5; // x1
  struct CharaGraphListViewItemDraw_o *v6; // x20
  CharaGraphListViewItemBase_o *Item; // x0
  __int64 v8; // x1

  if ( (byte_5937967 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937967 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) && this->fields.isUpdateDisplay )
  {
    v6 = this->fields.itemDraw;
    this->fields.isUpdateDisplay = 0;
    Item = CharaGraphListViewObject__GetItem(this, v5);
    if ( !v6 )
      sub_21FFECC(Item, v8);
    ((void (__fastcall *)(struct CharaGraphListViewItemDraw_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))v6->klass->vtable._4_SetItem.methodPtr)(
      v6,
      Item,
      v6->klass->vtable._4_SetItem.method);
  }
}