void PartyOrganizationEventPointListViewObject___ctor(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22D29 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C22D29 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void PartyOrganizationEventPointListViewObject__Awake(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C22D22 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewItemDraw___);
    byte_4C22D22 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationEventPointListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *PartyOrganizationEventPointListViewObject__CreateDragObject(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C22D26 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___);
    byte_4C22D26 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationEventPointListViewObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  PartyOrganizationEventPointListViewObject__Init_34006424(
    (PartyOrganizationEventPointListViewObject_o *)DragObject,
    2,
    v6);
  return v5;
}


void PartyOrganizationEventPointListViewObject__EventMoveEnd(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


PartyOrganizationEventPointListViewItem_o *PartyOrganizationEventPointListViewObject__GetItem(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C22D24 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4C22D24 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = PartyOrganizationEventPointListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (PartyOrganizationEventPointListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationEventPointListViewItem_TypeInfo )
    return (PartyOrganizationEventPointListViewItem_o *)this->fields.linkItem;
  return 0;
}


void PartyOrganizationEventPointListViewObject__Init(
        PartyOrganizationEventPointListViewObject_o *this,
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
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w9
  int32_t v23; // w8
  CGThumbnailListItem_c *klass; // x19

  if ( (byte_4C22D27 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4C22D27 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = PartyOrganizationEventPointListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationEventPointListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationEventPointListViewItem_TypeInfo )
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
  ((void (__fastcall *)(PartyOrganizationEventPointListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  v22 = 1;
  v23 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_17;
    case 1:
      v23 = v11;
      goto LABEL_14;
    case 3:
      v23 = 2;
LABEL_14:
      v22 = v11;
      goto LABEL_17;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    case 5:
      ListViewObject__SetInput((ListViewObject_o *)this, 1, 0);
      v22 = 4;
      v23 = 2;
LABEL_17:
      this->fields.dispMode = v23;
      this->fields.state = v22;
      break;
    default:
      break;
  }
  if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
    PartyOrganizationEventPointListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void PartyOrganizationEventPointListViewObject__InitItem(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewObject__Init_34006424(
        PartyOrganizationEventPointListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  PartyOrganizationEventPointListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewObject__Init_34007584(
        PartyOrganizationEventPointListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  PartyOrganizationEventPointListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    v4,
    *(UnityEngine_Vector3_o *)&v5,
    method);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationEventPointListViewObject__Init_34008192(
        PartyOrganizationEventPointListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  PartyOrganizationEventPointListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&v5,
    method);
}


void PartyOrganizationEventPointListViewObject__OnDestroy(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C22D23 & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22D23 = 1;
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


void PartyOrganizationEventPointListViewObject__SetInput(
        PartyOrganizationEventPointListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C22D25 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4C22D25 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( v6 && !this->fields.itemDraw )
    sub_1C2D6EC(v6, v7);
}


void PartyOrganizationEventPointListViewObject__SetItem(
        PartyOrganizationEventPointListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void PartyOrganizationEventPointListViewObject__SetItem_34009672(
        PartyOrganizationEventPointListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void PartyOrganizationEventPointListViewObject__SetupDisp(
        PartyOrganizationEventPointListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  PartyOrganizationEventPointListViewItemDraw_o *v9; // x0

  if ( (byte_4C22D28 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyOrganizationEventPointListViewItem_TypeInfo);
    byte_4C22D28 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = PartyOrganizationEventPointListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyOrganizationEventPointListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationEventPointListViewItem_TypeInfo )
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
    PartyOrganizationEventPointListViewItemDraw__SetItem(
      v9,
      (PartyOrganizationEventPointListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void PartyOrganizationEventPointListViewObject__add_callbackFunc(
        PartyOrganizationEventPointListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C22D20 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C22D20 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewObject_o *)sub_1C2D9AC(v8);
  PartyOrganizationEventPointListViewObject__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationEventPointListViewObject__remove_callbackFunc(
        PartyOrganizationEventPointListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C22D21 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C22D21 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointListViewObject_o *)sub_1C2D9AC(v8);
  PartyOrganizationEventPointListViewObject__Awake(v11, v12);
}