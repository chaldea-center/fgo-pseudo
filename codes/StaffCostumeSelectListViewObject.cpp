void StaffCostumeSelectListViewObject___ctor(StaffCostumeSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2BF00 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2BF00 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void StaffCostumeSelectListViewObject__Awake(StaffCostumeSelectListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4D2BEF8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewItemDraw___);
    byte_4D2BEF8 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewItemDraw___);
  this->fields.itemDraw = (struct StaffCostumeSelectListViewItemDraw_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *StaffCostumeSelectListViewObject__CreateDragObject(
        StaffCostumeSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_4D2BEFC & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___);
    byte_4D2BEFC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_StaffCostumeSelectListViewObject___)) == 0) )
  {
    sub_1C93D2C(DragObject, v4);
  }
  StaffCostumeSelectListViewObject__Init((StaffCostumeSelectListViewObject_o *)DragObject, 2, 0, v6);
  return v5;
}


StaffCostumeSelectListViewItem_o *StaffCostumeSelectListViewObject__GetItem(
        StaffCostumeSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2BEFA & 1) == 0 )
  {
    sub_1C93AD4(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4D2BEFA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (StaffCostumeSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewItem_TypeInfo )
    return (StaffCostumeSelectListViewItem_o *)this->fields.linkItem;
  return 0;
}


void StaffCostumeSelectListViewObject__Init(
        StaffCostumeSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  unsigned int v9; // w22
  int32_t dispMode; // w21
  int32_t state; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w8

  if ( (byte_4D2BEFD & 1) == 0 )
  {
    sub_1C93AD4(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4D2BEFD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (StaffCostumeSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v9 != 0, 0);
  ((void (__fastcall *)(StaffCostumeSelectListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v9 == 3,
    this->klass->vtable._9_SetInput.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePosition, 0);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale(v13, this->fields.baseScale, 0);
  if ( v9 < 3 )
  {
    v15 = 1;
LABEL_14:
    this->fields.dispMode = v9;
    this->fields.state = v15;
    goto LABEL_15;
  }
  if ( v9 == 4 )
  {
    this->fields.dispMode = 2;
    this->fields.state = 1;
LABEL_19:
    StaffCostumeSelectListViewObject__SetupDisp(this, v14);
    goto LABEL_20;
  }
  if ( v9 == 3 )
  {
    v9 = 2;
    v15 = 2;
    goto LABEL_14;
  }
LABEL_15:
  if ( !state || dispMode != this->fields.dispMode )
    goto LABEL_19;
LABEL_20:
  ActionExtensions__Call(callbackFunc, 0);
}


void StaffCostumeSelectListViewObject__Init_34384808(
        StaffCostumeSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  StaffCostumeSelectListViewObject__Init(this, initMode, 0, v3);
}


void StaffCostumeSelectListViewObject__OnClickSelect(
        StaffCostumeSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4D2BEFF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9923/*"OnClickSelectListView"*/);
    byte_4D2BEFF = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C93D2C(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9923/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void StaffCostumeSelectListViewObject__OnDestroy(StaffCostumeSelectListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4D2BEF9 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2BEF9 = 1;
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
    sub_1C93A78(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void StaffCostumeSelectListViewObject__SetInput(
        StaffCostumeSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v8; // x1
  StaffCostumeSelectListViewItemDraw_o *v9; // x0

  if ( (byte_4D2BEFB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4D2BEFB = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (StaffCostumeSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StaffCostumeSelectListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C93D2C(0, v8);
    StaffCostumeSelectListViewItemDraw__SetInput(v9, (StaffCostumeSelectListViewItem_o *)v8, isInput, 0);
  }
}


void StaffCostumeSelectListViewObject__SetItem(
        StaffCostumeSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void StaffCostumeSelectListViewObject__SetItem_34384416(
        StaffCostumeSelectListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void StaffCostumeSelectListViewObject__SetupDisp(StaffCostumeSelectListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  StaffCostumeSelectListViewItemDraw_o *v8; // x0

  if ( (byte_4D2BEFE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StaffCostumeSelectListViewItem_TypeInfo);
    byte_4D2BEFE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = StaffCostumeSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (StaffCostumeSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != StaffCostumeSelectListViewItem_TypeInfo )
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
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C93D2C(0, v7);
    StaffCostumeSelectListViewItemDraw__SetItem(
      v8,
      (StaffCostumeSelectListViewItem_o *)linkItem,
      this->fields.dispMode,
      0);
  }
}