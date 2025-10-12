void RecommendSupportEquipSelectListViewObject___ctor(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C33889 & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C33889 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void RecommendSupportEquipSelectListViewObject__Awake(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C33880 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewItemDraw___);
    byte_4C33880 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewItemDraw___);
  this->fields.itemDraw = (struct RecommendSupportEquipSelectListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


UnityEngine_GameObject_o *RecommendSupportEquipSelectListViewObject__CreateDragObject(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  const MethodInfo *v5; // x3

  if ( (byte_4C33884 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___);
    byte_4C33884 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportEquipSelectListViewObject___)) == 0) )
  {
    sub_1C32E7C(DragObject);
  }
  RecommendSupportEquipSelectListViewObject__Init((RecommendSupportEquipSelectListViewObject_o *)DragObject, 2, 0, v5);
  return v4;
}


RecommendSupportEquipSelectListViewItem_o *RecommendSupportEquipSelectListViewObject__GetItem(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C33882 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4C33882 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
    return (RecommendSupportEquipSelectListViewItem_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportEquipSelectListViewObject__Init(
        RecommendSupportEquipSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  unsigned int v9; // w22
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4C33885 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4C33885 = 1;
  }
  if ( initMode == 4 )
  {
    RecommendSupportEquipSelectListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportEquipSelectListViewItem_TypeInfo )
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
    ((void (__fastcall *)(RecommendSupportEquipSelectListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      v9 == 3,
      this->klass->vtable._9_SetInput.method);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C32E7C(transform);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
    this->fields.callbackFunc = action;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)action, v14, v15);
    if ( v9 <= 3 )
    {
      v19 = dword_C0C0F0[v9];
      this->fields.dispMode = v9;
      this->fields.state = v19;
    }
    if ( !state || dispMode != this->fields.dispMode )
      RecommendSupportEquipSelectListViewObject__SetupDisp(this, v16);
    klass = p_callbackFunc->klass;
    if ( p_callbackFunc->klass )
    {
      p_callbackFunc->klass = 0;
      sub_1C32BC4(p_callbackFunc, 0, v17, v18);
      ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
        klass->_1.element_class,
        *(_QWORD *)&klass->_1.byval_arg.bits);
    }
  }
}


void RecommendSupportEquipSelectListViewObject__InitItem(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void RecommendSupportEquipSelectListViewObject__Init_34732568(
        RecommendSupportEquipSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  RecommendSupportEquipSelectListViewObject__Init(this, initMode, 0, v3);
}


void RecommendSupportEquipSelectListViewObject__OnClickSelect(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  if ( (byte_4C33887 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9867/*"OnClickSelectListView"*/);
    byte_4C33887 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( !manager || (ListViewManager__ClearScrollBarValue(manager, 1, 0), (manager = this->fields.manager) == 0) )
      sub_1C32E7C(manager);
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)manager,
      (System_String_o *)StringLiteral_9867/*"OnClickSelectListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void RecommendSupportEquipSelectListViewObject__OnDestroy(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C33881 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33881 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (CGThumbnailListItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C32BC4(p_dragObject, 0, v7, v8);
  }
}


void RecommendSupportEquipSelectListViewObject__OnLongPush(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C33888 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9927/*"OnLongPushListView"*/);
    byte_4C33888 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C32E7C(0);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9927/*"OnLongPushListView"*/, (Il2CppObject *)this, 0);
  }
}


void RecommendSupportEquipSelectListViewObject__SetInput(
        RecommendSupportEquipSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  RecommendSupportEquipSelectListViewItem_c *v8; // x10
  RecommendSupportEquipSelectListViewItem_o *v9; // x1
  RecommendSupportEquipSelectListViewItemDraw_o *v10; // x0

  if ( (byte_4C33883 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4C33883 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        v8 = (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1];
        v9 = v8 == RecommendSupportEquipSelectListViewItem_TypeInfo
           ? (RecommendSupportEquipSelectListViewItem_o *)this->fields.linkItem
           : 0LL;
        if ( v8 == RecommendSupportEquipSelectListViewItem_TypeInfo )
        {
          v10 = this->fields.itemDraw;
          if ( !v10 )
            sub_1C32E7C(0);
          RecommendSupportEquipSelectListViewItemDraw__SetInput(v10, v9, isInput, 0);
        }
      }
    }
  }
}


void RecommendSupportEquipSelectListViewObject__SetItem(
        RecommendSupportEquipSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  if ( item )
  {
    ListViewObject__SetItem_43729388((ListViewObject_o *)this, item, seed, 0);
    this->fields.state = 0;
  }
}


void RecommendSupportEquipSelectListViewObject__SetItem_34732176(
        RecommendSupportEquipSelectListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  if ( item )
  {
    ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
    this->fields.state = 0;
  }
}


void RecommendSupportEquipSelectListViewObject__SetupDisp(
        RecommendSupportEquipSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  RecommendSupportEquipSelectListViewItemDraw_o *v7; // x0

  if ( (byte_4C33886 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&RecommendSupportEquipSelectListViewItem_TypeInfo);
    byte_4C33886 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = RecommendSupportEquipSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (RecommendSupportEquipSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportEquipSelectListViewItem_TypeInfo )
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
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1C32E7C(0);
    RecommendSupportEquipSelectListViewItemDraw__SetItem(
      v7,
      (RecommendSupportEquipSelectListViewItem_o *)linkItem,
      this->fields.dispMode,
      0);
  }
}


void RecommendSupportEquipSelectListViewObject__add_callbackFunc(
        RecommendSupportEquipSelectListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3387E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C3387E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportEquipSelectListViewObject_o *)sub_1C3313C(v8);
  RecommendSupportEquipSelectListViewObject__remove_callbackFunc(v11, v12, v13);
}


void RecommendSupportEquipSelectListViewObject__remove_callbackFunc(
        RecommendSupportEquipSelectListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportEquipSelectListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3387F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C3387F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportEquipSelectListViewObject_o *)sub_1C3313C(v8);
  RecommendSupportEquipSelectListViewObject__Awake(v11, v12);
}