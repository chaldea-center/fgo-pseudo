void PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  if ( (byte_4C3EA05 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationListViewDropObject_TypeInfo);
    byte_4C3EA05 = 1;
  }
  LODWORD(PartyOrganizationListViewDropObject_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationListViewDropObject_StaticFields)1045220557;
}


void PartyOrganizationListViewDropObject___ctor(PartyOrganizationListViewDropObject_o *this, const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0);
}


void PartyOrganizationListViewDropObject__Awake(PartyOrganizationListViewDropObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E9EC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4C3E9EC = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  ListViewObject__Awake((ListViewObject_o *)this, 0);
}


bool PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  _BOOL4 isBusy; // w21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *itemDraw; // x20
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4C3E9F0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9F0 = 1;
  }
  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
    this->fields.callbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      v9 = this->fields.itemDraw;
      if ( !v9 )
        sub_1C372B4(0);
      PartyOrganizationListViewItemDraw__ClearItem(v9, 0);
    }
  }
  return !isBusy;
}


UnityEngine_GameObject_o *PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  const MethodInfo *v5; // x2
  PartyOrganizationListViewDropObject_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4C3E9F5 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    byte_4C3E9F5 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0) )
  {
    sub_1C372B4(DragObject);
  }
  v6 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_34224276((PartyOrganizationListViewDropObject_o *)DragObject, 2, v5);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v6, 1, v7);
  return v4;
}


UnityEngine_GameObject_o *PartyOrganizationListViewDropObject__CreateDragObject_34224492(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_Object_o *monitor; // x22

  if ( (byte_4C3E9F6 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9F6 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0);
  if ( !DragObject )
    goto LABEL_11;
  v6 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_11;
  v8 = DragObject;
  PartyOrganizationListViewDropObject__Init_34224276((PartyOrganizationListViewDropObject_o *)DragObject, 2, v7);
  monitor = (UnityEngine_Object_o *)v8[6].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0, 0) )
  {
    DragObject = (UnityEngine_GameObject_o *)v8[6].monitor;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0);
      return v6;
    }
LABEL_11:
    sub_1C372B4(DragObject);
  }
  return v6;
}


void PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3E9FD & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9FD = 1;
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
    sub_1C36FFC(p_dragObject, 0, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__DragMoveStart(
        PartyOrganizationListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct UnityEngine_GameObject_o *DragObject_34224492; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  char *Component_object; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  struct UnityEngine_GameObject_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_GameObject_o *v24; // x8
  float v25; // s11
  float v26; // s4
  float v27; // s5
  float v28; // s3
  char *v29; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4C3E9FC & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&PartyOrganizationListViewDropObject_TypeInfo);
    sub_1C37058(&StringLiteral_9172/*"MoveEnd"*/);
    byte_4C3E9FC = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    if ( isEquipSwap )
    {
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v11);
      DragObject_34224492 = PartyOrganizationListViewDropObject__CreateDragObject_34224492(this, -100, v12);
      this->fields.dragObject = DragObject_34224492;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)DragObject_34224492, v14, v15);
      Component_object = (char *)this->fields.dragObject;
      if ( !Component_object )
        goto LABEL_20;
      Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)Component_object,
                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_object )
        goto LABEL_20;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        1,
        v17);
    }
    else
    {
      Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_object )
        goto LABEL_20;
      (*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)Component_object + 440LL))(
        Component_object,
        *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v18);
      v20 = PartyOrganizationListViewDropObject__CreateDragObject_34224492(this, -100, v19);
      this->fields.dragObject = v20;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v20, v21, v22);
    }
  }
  v23 = *p_dragObject;
  Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
  if ( PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    v24 = *p_dragObject;
    if ( !v23 )
      goto LABEL_20;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
    v24 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_20;
  }
  v25 = **((float **)Component_object + 23);
  Component_object = (char *)UnityEngine_GameObject__get_transform(v24, 0);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_20;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v37 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v36, 0);
  v26 = v37.fields.y;
  v27 = v37.fields.z;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v26;
  v28 = v27;
  Component_object = (char *)TweenPosition__Begin(v23, v25, *(UnityEngine_Vector3_o *)&v37.fields.y, 0);
  if ( !Component_object )
LABEL_20:
    sub_1C372B4(Component_object);
  v29 = Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *((_QWORD *)v29 + 10) = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 80), (int32_t)gameObject, v31, v32);
  v33 = StringLiteral_9172/*"MoveEnd"*/;
  *((_QWORD *)v29 + 11) = StringLiteral_9172/*"MoveEnd"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 88), v33, v34, v35);
}


PartyOrganizationListViewItem_o *PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3E9EE & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    byte_4C3E9EE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__Init(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v17; // w24
  int32_t dispMode; // w23
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  int32_t v27; // w8
  int32_t v28; // w8
  int32_t v29; // w9
  CGThumbnailListItem_c *klass; // x19
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4C3E9F7 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    byte_4C3E9F7 = 1;
  }
  if ( initMode == 10 )
  {
    PartyOrganizationListViewDropObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
        v17 = initMode;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    PartyOrganizationListViewDropObject__SetVisible(this, v17 != 0 && v17 != 5, (const MethodInfo *)callbackFunc);
    ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      (v17 == 4) | (unsigned int)(v17 == 8),
      this->klass->vtable._9_SetInput.method);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
    {
      sub_1C372B4(transform);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v22, v23);
    v27 = 1;
    switch ( v17 )
    {
      case 0:
      case 1:
      case 2:
        goto LABEL_16;
      case 3:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewDropObject__IntoStart(this, delay, v24);
        return;
      case 4:
        v27 = 3;
        v17 = 2;
LABEL_16:
        this->fields.dispMode = v17;
        this->fields.state = v27;
        goto LABEL_17;
      case 5:
        v28 = 4;
        v29 = 2;
        goto LABEL_25;
      case 6:
        this->fields.state = 2;
        v31.fields.y = y;
        v31.fields.z = z;
        v31.fields.x = x;
        PartyOrganizationListViewDropObject__DragMoveStart(this, v31, isEquipSwap, v25);
        return;
      case 7:
        PartyOrganizationListViewDropObject__DragDelete(this, v24);
        return;
      case 8:
        v28 = 2;
        v29 = 3;
        goto LABEL_25;
      case 9:
        v28 = 2;
        v29 = 1;
LABEL_25:
        this->fields.dispMode = v28;
        this->fields.state = v29;
        goto LABEL_26;
      default:
LABEL_17:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewDropObject__SetupDisp(this, v24);
LABEL_27:
        klass = p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0;
          sub_1C36FFC(p_callbackFunc, 0, (int32_t)v25, v26);
          ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
            klass->_1.element_class,
            *(_QWORD *)&klass->_1.byval_arg.bits);
        }
        break;
    }
  }
}


void PartyOrganizationListViewDropObject__Init_34224276(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    0,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v3);
}


void PartyOrganizationListViewDropObject__Init_34226668(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v5);
}


void PartyOrganizationListViewDropObject__Init_34226796(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    callbackFunc,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationListViewDropObject__IntoMove(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  float y; // s4
  float z; // s5
  float v7; // s3
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C3E9FA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7743/*"IntoMove2"*/);
    byte_4C3E9FA = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !dragObject )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0);
  if ( !parent
    || (v16 = UnityEngine_Transform__InverseTransformPoint(parent, position, 0),
        y = v16.fields.y,
        z = v16.fields.z,
        v16.fields.y = v16.fields.x,
        v16.fields.z = y,
        v7 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v16.fields.y,
                                                    0)) == 0) )
  {
LABEL_9:
    sub_1C372B4(dragObject);
  }
  v8 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v8[3].monitor = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8[3].monitor, (int32_t)gameObject, v10, v11);
  v12 = StringLiteral_7743/*"IntoMove2"*/;
  v8[3].fields.m_CachedPtr = StringLiteral_7743/*"IntoMove2"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8[3].fields, v12, v13, v14);
}


void PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4C3E9FB & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C3E9FB = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0);
  this->fields.dragObject = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dragObject, 0, v6, v7);
  PartyOrganizationListViewDropObject__MoveEnd(this, v8);
}


void PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E9F9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7742/*"IntoMove"*/);
    byte_4C3E9F9 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, const MethodInfo *))this->klass->vtable._8_CreateDragObject.methodPtr)(
                                            this,
                                            this->klass->vtable._8_CreateDragObject.method);
  this->fields.dragObject = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0)) == 0)
    || (v12 = UnityEngine_Transform__TransformPoint_71293352(
                (UnityEngine_Transform_o *)dragObject,
                -3000.0,
                0.0,
                0.0,
                0),
        !transform) )
  {
    sub_1C372B4(dragObject);
  }
  UnityEngine_Transform__set_position(transform, v12, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7742/*"IntoMove"*/,
    delay,
    0);
}


bool PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 naturalAligment; // x11
  PartyOrganizationListViewItem_o *v6; // x20
  __int64 v7; // x10
  const MethodInfo *v8; // x1

  if ( (byte_4C3E9F4 & 1) == 0 )
  {
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C37058(&PartyOrganizationListViewManager_TypeInfo);
    byte_4C3E9F4 = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyOrganizationListViewItem_TypeInfo )
      v6 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v6 = 0;
    if ( !manager )
LABEL_22:
      sub_1C372B4(manager);
  }
  else
  {
    v6 = 0;
    if ( !manager )
      goto LABEL_22;
  }
  v7 = PartyOrganizationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v7
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_22;
  }
  manager = (struct ListViewManager_o *)PartyOrganizationListViewManager__IsCanDrag(
                                          (PartyOrganizationListViewManager_o *)manager,
                                          0);
  if ( ((unsigned __int8)manager & 1) != 0 )
  {
    if ( this->fields.isEquipPress )
    {
      if ( !v6 )
        goto LABEL_22;
      return !v6->fields.isFollower;
    }
    if ( !v6 )
      goto LABEL_22;
    if ( PartyOrganizationListViewItem__IsEditablePos(v6, v8) )
      return 1;
    if ( this->fields.isEquipPress )
      return !v6->fields.isFollower;
  }
  return 0;
}


bool PartyOrganizationListViewDropObject__IsEquipPress(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipPress;
}


void PartyOrganizationListViewDropObject__MoveEnd(
        PartyOrganizationListViewDropObject_o *this,
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
  LOBYTE(p_callbackFunc[-1].fields.viewObject) = 0;
  LODWORD(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C3EA00 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9845/*"OnClickListDropEquip"*/);
    byte_4C3EA00 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C372B4(0);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9845/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C3E9FE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9847/*"OnClickListDropServant"*/);
    byte_4C3E9FE = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C372B4(0);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9847/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3E9ED & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9ED = 1;
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
    sub_1C36FFC(p_dragObject, 0, v7, v8);
  }
}


void PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C3E9FF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9848/*"OnClickListDropServantDetail"*/);
    byte_4C3E9FF = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C372B4(0);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9848/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C3EA01 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9846/*"OnClickListDropEquipDetail"*/);
    byte_4C3EA01 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C372B4(0);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9846/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0);
  }
}


void PartyOrganizationListViewDropObject__OnPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 3 )
  {
    if ( this->fields.linkItem )
      this->fields.isEquipPress = 0;
  }
}


void PartyOrganizationListViewDropObject__OnPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  v2 = this;
  if ( (byte_4C3EA02 & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    byte_4C3EA02 = 1;
  }
  if ( v2->fields.state == 3 )
  {
    linkItem = v2->fields.linkItem;
    if ( linkItem )
    {
      naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
      if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_1C372B4(this);
      }
      v2->fields.isEquipPress = !LOBYTE(linkItem[2].monitor)
                             && !BYTE2(linkItem[2].monitor)
                             && !LOBYTE(linkItem[1].fields.selectNum);
    }
  }
}


void PartyOrganizationListViewDropObject__ReleaseItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *itemDraw; // x20
  PartyOrganizationListViewItemDraw_o *v8; // x0

  if ( (byte_4C3E9EF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9EF = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
    this->fields.callbackFunc = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    {
      v8 = this->fields.itemDraw;
      if ( !v8 )
        sub_1C372B4(0);
      PartyOrganizationListViewItemDraw__ClearItem(v8, 0);
    }
  }
}


void PartyOrganizationListViewDropObject__SetActiveGrandEffect(
        PartyOrganizationListViewDropObject_o *this,
        bool isActive,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( itemDraw )
    PartyOrganizationListViewItemDraw__SetActiveGrandEffect(itemDraw, isActive, 0);
}


void PartyOrganizationListViewDropObject__SetDispEquipOnly(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3EA04 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4C3EA04 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0 )
  {
    sub_1C372B4(dispObject);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, 0);
  PartyOrganizationListViewDropObject__SetEquipDisp(this, 1, v6);
}


void PartyOrganizationListViewDropObject__SetDispSwapGuide(
        PartyOrganizationListViewDropObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1C372B4(0);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0);
}


void PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UnityEngine_Object_o *equipDispBase; // x21
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4C3EA03 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3EA03 = 1;
  }
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipDispBase, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
              Component_object,
              0,
              1,
              Component_object->klass[1]._1.implementedInterfaces),
            (Component_object = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0) )
      {
        sub_1C372B4(Component_object);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, flg, 0);
    }
  }
}


void PartyOrganizationListViewDropObject__SetInput(
        PartyOrganizationListViewDropObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UIDragDropListViewItem_o *v6; // x0

  if ( (byte_4C3E9F3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9F3 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    v6 = this->fields.equipUIDragDrop;
    if ( !v6 )
      sub_1C372B4(0);
    UIDragDropListViewItem__SetEnable(v6, isInput, 0);
  }
}


void PartyOrganizationListViewDropObject__SetItem(
        PartyOrganizationListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x22
  struct UIDragDropListViewItem_o *v8; // x0

  if ( (byte_4C3E9F1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9F1 = 1;
  }
  this->fields.state = 0;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0, 0) )
  {
    v8 = this->fields.equipUIDragDrop;
    if ( !v8 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, const MethodInfo *))v8->klass->vtable._5_SetBaseTransform.methodPtr)(
      v8,
      v8->klass->vtable._5_SetBaseTransform.method);
  }
  ListViewDropObject__SetItem_43803460((ListViewDropObject_o *)this, item, seed, 0);
}


void PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipDispBase; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3E9F2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E9F2 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0, 0) )
  {
    v6 = this->fields.equipDispBase;
    if ( !v6 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v6, isVisible, 0);
  }
}


void PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  PartyOrganizationListViewItemDraw_o *v8; // x0

  if ( (byte_4C3E9F8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&PartyOrganizationListViewItem_TypeInfo);
    byte_4C3E9F8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = PartyOrganizationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != PartyOrganizationListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = (this->fields.dispMode & 0xFFFFFFFB) != 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v6, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1C372B4(0);
    PartyOrganizationListViewItemDraw__SetItem(
      v8,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0,
      0);
  }
}