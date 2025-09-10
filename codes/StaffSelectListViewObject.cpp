void StaffSelectListViewObject___ctor(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C229BA & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C229BA = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void StaffSelectListViewObject__Awake(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C229B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewItemDraw___);
    byte_4C229B2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewItemDraw___);
  this->fields.itemDraw = (struct StaffSelectListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *StaffSelectListViewObject__CreateDragObject(
        StaffSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4C229B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___);
    byte_4C229B6 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  StaffSelectListViewObject__Init((StaffSelectListViewObject_o *)DragObject, 2, 0, v6);
  return v5;
}


StaffSelectListViewItem_o *StaffSelectListViewObject__GetItem(
        StaffSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C229B4 & 1) == 0 )
  {
    sub_1C2D490(&StaffSelectListViewItem_TypeInfo);
    byte_4C229B4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
    return (StaffSelectListViewItem_o *)this->fields.linkItem;
  return 0;
}


void StaffSelectListViewObject__Init(
        StaffSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  unsigned int v9; // w22
  int32_t dispMode; // w21
  int32_t state; // w23
  int32_t v12; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4C229B7 & 1) == 0 )
  {
    sub_1C2D490(&StaffSelectListViewItem_TypeInfo);
    byte_4C229B7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
      v9 = initMode;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  v12 = 1;
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  ((void (__fastcall *)(StaffSelectListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v9 == 3,
    this->klass->vtable._9_SetInput.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePosition, 0);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale(v14, this->fields.baseScale, 0);
  if ( v9 < 3 )
    goto LABEL_13;
  if ( v9 == 4 )
  {
    this->fields.dispMode = 2;
    this->fields.state = 1;
LABEL_18:
    StaffSelectListViewObject__SetupDisp(this, v15);
    goto LABEL_19;
  }
  if ( v9 == 3 )
  {
    v9 = 2;
    v12 = 2;
LABEL_13:
    this->fields.dispMode = v9;
    this->fields.state = v12;
  }
  if ( !state || dispMode != this->fields.dispMode )
    goto LABEL_18;
LABEL_19:
  ActionExtensions__Call(callbackFunc, 0);
}


void StaffSelectListViewObject__Init_33651828(
        StaffSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  StaffSelectListViewObject__Init(this, initMode, 0, v3);
}


void StaffSelectListViewObject__OnClickSelect(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C229B9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9862/*"OnClickSelectListView"*/);
    byte_4C229B9 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C2D6EC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9862/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void StaffSelectListViewObject__OnDestroy(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C229B3 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C229B3 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
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
    sub_1C2D434(p_dragObject, 0, v7, v8);
  }
}


void StaffSelectListViewObject__SetInput(StaffSelectListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  StaffSelectListViewItemDraw_o *v10; // x0

  if ( (byte_4C229B5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StaffSelectListViewItem_TypeInfo);
    byte_4C229B5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C2D6EC(0, v9);
    StaffSelectListViewItemDraw__SetInput(v10, (StaffSelectListViewItem_o *)v9, isInput, v6);
  }
}


void StaffSelectListViewObject__SetItem(
        StaffSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void StaffSelectListViewObject__SetItem_33653936(
        StaffSelectListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void StaffSelectListViewObject__SetupDisp(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  StaffSelectListViewItemDraw_o *v9; // x0

  if ( (byte_4C229B8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StaffSelectListViewItem_TypeInfo);
    byte_4C229B8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != StaffSelectListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C2D6EC(0, v7);
    if ( linkItem )
    {
      if ( this->fields.dispMode )
        StaffSelectListViewItemDraw__SetDisp(v9, (StaffSelectListViewItem_o *)linkItem, v8);
    }
  }
}