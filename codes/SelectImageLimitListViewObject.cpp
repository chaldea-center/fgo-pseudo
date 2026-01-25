void SelectImageLimitListViewObject___ctor(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CE9908 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CE9908 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SelectImageLimitListViewObject__Awake(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4CE9900 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewItemDraw___);
    byte_4CE9900 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C7BD40(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewItemDraw___);
  this->fields.itemDraw = (struct SelectImageLimitListViewItemDraw_o *)Component_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


UnityEngine_GameObject_o *SelectImageLimitListViewObject__CreateDragObject(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4CE9904 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___);
    byte_4CE9904 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SelectImageLimitListViewObject___)) == 0) )
  {
    sub_1C7BD40(DragObject, v4);
  }
  SelectImageLimitListViewObject__Init_33895596((SelectImageLimitListViewObject_o *)DragObject, 2, v6);
  return v5;
}


SelectImageLimitListViewItem_o *SelectImageLimitListViewObject__GetItem(
        SelectImageLimitListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CE9902 & 1) == 0 )
  {
    sub_1C7BAE8(&SelectImageLimitListViewItem_TypeInfo);
    byte_4CE9902 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = SelectImageLimitListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SelectImageLimitListViewItem_TypeInfo )
    return (SelectImageLimitListViewItem_o *)this->fields.linkItem;
  return 0;
}


void SelectImageLimitListViewObject__Init(
        SelectImageLimitListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w9
  int32_t v31; // w8
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4CE9905 & 1) == 0 )
  {
    sub_1C7BAE8(&SelectImageLimitListViewItem_TypeInfo);
    byte_4CE9905 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = SelectImageLimitListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SelectImageLimitListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(SelectImageLimitListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v30 = 1;
  v31 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v31 = v11;
      goto LABEL_14;
    case 3:
      v31 = 2;
LABEL_14:
      v30 = v11;
LABEL_15:
      this->fields.dispMode = v31;
      this->fields.state = v30;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        SelectImageLimitListViewObject__SetupDisp(this, v23);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C7BA8C(p_callbackFunc, 0, v24, v25, v26, v27, v28, v29);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void SelectImageLimitListViewObject__InitItem(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitListViewObject__Init_33895596(
        SelectImageLimitListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  SelectImageLimitListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitListViewObject__Init_33896904(
        SelectImageLimitListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  SelectImageLimitListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void SelectImageLimitListViewObject__Init_33896988(
        SelectImageLimitListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  SelectImageLimitListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void SelectImageLimitListViewObject__OnClickSelect(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CE9907 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9893/*"OnClickSelectListView"*/);
    byte_4CE9907 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C7BD40(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9893/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void SelectImageLimitListViewObject__OnDestroy(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4CE9901 & 1) == 0 )
  {
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9901 = 1;
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
    sub_1C7BA8C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void SelectImageLimitListViewObject__SetInput(
        SelectImageLimitListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  SelectImageLimitListViewItemDraw_o *v10; // x0

  if ( (byte_4CE9903 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SelectImageLimitListViewItem_TypeInfo);
    byte_4CE9903 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = SelectImageLimitListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == SelectImageLimitListViewItem_TypeInfo )
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
      sub_1C7BD40(0, v9);
    SelectImageLimitListViewItemDraw__SetInput(v10, (SelectImageLimitListViewItem_o *)v9, isInput, v6);
  }
}


void SelectImageLimitListViewObject__SetItem(
        SelectImageLimitListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44356304((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void SelectImageLimitListViewObject__SetItem_33898244(
        SelectImageLimitListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void SelectImageLimitListViewObject__SetupDisp(SelectImageLimitListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  SelectImageLimitListViewItemDraw_o *v9; // x0

  if ( (byte_4CE9906 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SelectImageLimitListViewItem_TypeInfo);
    byte_4CE9906 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = SelectImageLimitListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SelectImageLimitListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SelectImageLimitListViewItem_TypeInfo )
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
      sub_1C7BD40(0, v7);
    SelectImageLimitListViewItemDraw__SetItem(v9, (SelectImageLimitListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void SelectImageLimitListViewObject__add_callbackFunc(
        SelectImageLimitListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE98FE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE98FE = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectImageLimitListViewObject_o *)sub_1C7C0DC(v8);
  SelectImageLimitListViewObject__remove_callbackFunc(v11, v12, v13);
}


void SelectImageLimitListViewObject__remove_callbackFunc(
        SelectImageLimitListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectImageLimitListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE98FF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE98FF = 1;
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
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectImageLimitListViewObject_o *)sub_1C7C0DC(v8);
  SelectImageLimitListViewObject__Awake(v11, v12);
}