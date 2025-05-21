void __fastcall StaffSelectListViewObject___ctor(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B4015D & 1) == 0 )
  {
    sub_1BDB878(&ListViewObject_TypeInfo, method);
    byte_4B4015D = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall StaffSelectListViewObject__Awake(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B40155 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewItemDraw___, method);
    byte_4B40155 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BDBAD4(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewItemDraw___);
  this->fields.itemDraw = (struct StaffSelectListViewItemDraw_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall StaffSelectListViewObject__CreateDragObject(
        StaffSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4B40159 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___, method);
    byte_4B40159 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___)) == 0LL) )
  {
    sub_1BDBAD4(DragObject, v4);
  }
  StaffSelectListViewObject__Init((StaffSelectListViewObject_o *)DragObject, 2, 0LL, v6);
  return v5;
}


StaffSelectListViewItem_o *__fastcall StaffSelectListViewObject__GetItem(
        StaffSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B40157 & 1) == 0 )
  {
    sub_1BDB878(&StaffSelectListViewItem_TypeInfo, method);
    byte_4B40157 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(StaffSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffSelectListViewItem_TypeInfo )
    return (StaffSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffSelectListViewObject__Init(
        StaffSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  unsigned int v9; // w22
  int32_t dispMode; // w21
  int32_t state; // w23
  int32_t v12; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B4015A & 1) == 0 )
  {
    sub_1BDB878(&StaffSelectListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B4015A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(StaffSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffSelectListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  ((void (__fastcall *)(StaffSelectListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v9 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePosition, 0LL);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale(v14, this->fields.baseScale, 0LL);
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
  ActionExtensions__Call(callbackFunc, 0LL);
}


void __fastcall StaffSelectListViewObject__Init_32910236(
        StaffSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  StaffSelectListViewObject__Init(this, initMode, 0LL, v3);
}


void __fastcall StaffSelectListViewObject__OnClickSelect(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B4015C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9867/*"OnClickSelectListView"*/, method);
    byte_4B4015C = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BDBAD4(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9867/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall StaffSelectListViewObject__OnDestroy(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B40156 & 1) == 0 )
  {
    sub_1BDB878(&NGUITools_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B40156 = 1;
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
    sub_1BDB81C(p_dragObject, 0, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StaffSelectListViewObject__SetInput(
        StaffSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v10; // x1
  StaffSelectListViewItemDraw_o *v11; // x0

  if ( (byte_4B40158 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, isInput);
    sub_1BDB878(&StaffSelectListViewItem_TypeInfo, v5);
    byte_4B40158 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(StaffSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == StaffSelectListViewItem_TypeInfo )
        v10 = this->fields.linkItem;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_1BDBAD4(0LL, v10);
    StaffSelectListViewItemDraw__SetInput(v11, (StaffSelectListViewItem_o *)v10, isInput, v7);
  }
}


void __fastcall StaffSelectListViewObject__SetItem(
        StaffSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42764972((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall StaffSelectListViewObject__SetItem_32912344(
        StaffSelectListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall StaffSelectListViewObject__SetupDisp(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  StaffSelectListViewItemDraw_o *v10; // x0

  if ( (byte_4B4015B & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&StaffSelectListViewItem_TypeInfo, v3);
    byte_4B4015B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(StaffSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != StaffSelectListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BDBAD4(0LL, v8);
    if ( linkItem )
    {
      if ( this->fields.dispMode )
        StaffSelectListViewItemDraw__SetDisp(v10, (StaffSelectListViewItem_o *)linkItem, v9);
    }
  }
}