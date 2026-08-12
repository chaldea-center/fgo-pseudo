void StaffSelectListViewObject___ctor(StaffSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BC85 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596BC85 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void StaffSelectListViewObject__Awake(StaffSelectListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BC7D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewItemDraw___);
    byte_596BC7D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewItemDraw___);
  this->fields.itemDraw = (struct StaffSelectListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *StaffSelectListViewObject__CreateDragObject(
        StaffSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x3

  if ( (byte_596BC81 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___);
    byte_596BC81 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_StaffSelectListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
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

  if ( (byte_596BC7F & 1) == 0 )
  {
    sub_2213A60(&StaffSelectListViewItem_TypeInfo);
    byte_596BC7F = 1;
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  unsigned int v10; // w22
  int32_t dispMode; // w21
  int32_t state; // w23
  int32_t v13; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_596BC82 & 1) == 0 )
  {
    sub_2213A60(&StaffSelectListViewItem_TypeInfo);
    byte_596BC82 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (StaffSelectListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
      v10 = initMode;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  v13 = 1;
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  ((void (__fastcall *)(StaffSelectListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v10 == 3,
    this->klass->vtable._9_SetInput.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.basePosition, 0);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale(v15, this->fields.baseScale, 0);
  if ( v10 < 3 )
    goto LABEL_13;
  if ( v10 == 4 )
  {
    this->fields.dispMode = 2;
    this->fields.state = 1;
LABEL_18:
    StaffSelectListViewObject__SetupDisp(this, v16);
    goto LABEL_19;
  }
  if ( v10 == 3 )
  {
    v10 = 2;
    v13 = 2;
LABEL_13:
    this->fields.dispMode = v10;
    this->fields.state = v13;
  }
  if ( !state || dispMode != this->fields.dispMode )
    goto LABEL_18;
LABEL_19:
  ActionExtensions__Call(callbackFunc, 0);
}


void StaffSelectListViewObject__Init_40600256(
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

  if ( (byte_596BC84 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    byte_596BC84 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10267/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void StaffSelectListViewObject__OnDestroy(StaffSelectListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596BC7E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BC7E = 1;
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
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void StaffSelectListViewObject__SetInput(StaffSelectListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x1
  StaffSelectListViewItemDraw_o *v12; // x0

  if ( (byte_596BC80 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StaffSelectListViewItem_TypeInfo);
    byte_596BC80 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = StaffSelectListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (StaffSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == StaffSelectListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v11);
    StaffSelectListViewItemDraw__SetInput(v12, (StaffSelectListViewItem_o *)v11, isInput, v8);
  }
}


void StaffSelectListViewObject__SetItem(
        StaffSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void StaffSelectListViewObject__SetItem_40602348(
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
  char v6; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  StaffSelectListViewItemDraw_o *v12; // x0
  char v13; // w8

  if ( (byte_596BC83 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StaffSelectListViewItem_TypeInfo);
    byte_596BC83 = 1;
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
    v6 = 1;
    goto LABEL_8;
  }
  v6 = 0;
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v10);
    if ( this->fields.dispMode )
      v13 = v6;
    else
      v13 = 1;
    if ( (v13 & 1) == 0 )
      StaffSelectListViewItemDraw__SetDisp(v12, (StaffSelectListViewItem_o *)linkItem, v11);
  }
}