void __fastcall PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B32F02 & 1) == 0 )
  {
    sub_1BD3458(&PartyOrganizationListViewDropObject_TypeInfo, v1);
    byte_4B32F02 = 1;
  }
  LODWORD(PartyOrganizationListViewDropObject_TypeInfo->static_fields->ACTION_TIME) = (struct PartyOrganizationListViewDropObject_StaticFields)1045220557;
}


void __fastcall PartyOrganizationListViewDropObject___ctor(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  ListViewDropObject___ctor((ListViewDropObject_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewDropObject__Awake(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4B32EE9 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, method);
    byte_4B32EE9 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BD36B4(0LL, method);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          dispObject,
                                                                          (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  sub_1BD33FC(&this->fields.itemDraw);
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  _BOOL4 isBusy; // w21
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  PartyOrganizationListViewItemDraw_o *v6; // x0

  if ( (byte_4B32EED & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B32EED = 1;
  }
  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1BD33FC(&this->fields.linkItem);
    this->fields.callbackFunc = 0LL;
    sub_1BD33FC(&this->fields.callbackFunc);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v6 = this->fields.itemDraw;
      if ( !v6 )
        sub_1BD36B4(0LL, v5);
      PartyOrganizationListViewItemDraw__ClearItem(v6, 0LL);
    }
  }
  return !isBusy;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x2
  PartyOrganizationListViewDropObject_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4B32EF2 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, method);
    byte_4B32EF2 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0LL) )
  {
    sub_1BD36B4(DragObject, v4);
  }
  v7 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_32642940((PartyOrganizationListViewDropObject_o *)DragObject, 2, v6);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v7, 1, v8);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject_32643156(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  PartyOrganizationListViewDropObject_o *v9; // x21
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v11; // x2

  if ( (byte_4B32EF3 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___,
      *(_QWORD *)&addDepth);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B32EF3 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_11;
  v8 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_11;
  v9 = (PartyOrganizationListViewDropObject_o *)DragObject;
  monitor = (UnityEngine_Object_o *)DragObject[6].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    DragObject = (UnityEngine_GameObject_o *)v9->fields.itemDraw;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1BD36B4(DragObject, v7);
  }
LABEL_10:
  PartyOrganizationListViewDropObject__Init_32642940(v9, 2, v11);
  return v8;
}


void __fastcall PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4B32EFA & 1) == 0 )
  {
    sub_1BD3458(&NGUITools_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B32EFA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1BD33FC(p_dragObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__DragMoveStart(
        PartyOrganizationListViewDropObject_o *this,
        UnityEngine_Vector3_o position,
        bool isEquipSwap,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  void *Component_object; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x8
  float v23; // s11
  float v24; // s4
  float v25; // s5
  float v26; // s3
  _QWORD *v27; // x20
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4B32EF9 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEquipSwap);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    sub_1BD3458(&PartyOrganizationListViewDropObject_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_9286/*"MoveEnd"*/, v12);
    byte_4B32EF9 = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    if ( isEquipSwap )
    {
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v15);
      this->fields.dragObject = PartyOrganizationListViewDropObject__CreateDragObject_32643156(this, -100, v16);
      sub_1BD33FC(&this->fields.dragObject);
      Component_object = this->fields.dragObject;
      if ( !Component_object )
        goto LABEL_20;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Component_object,
                           (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_object )
        goto LABEL_20;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        1,
        v18);
    }
    else
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_object )
        goto LABEL_20;
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)Component_object + 440LL))(
        Component_object,
        *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v19);
      this->fields.dragObject = PartyOrganizationListViewDropObject__CreateDragObject_32643156(this, -100, v20);
      sub_1BD33FC(&this->fields.dragObject);
    }
  }
  v21 = *p_dragObject;
  Component_object = PartyOrganizationListViewDropObject_TypeInfo;
  if ( PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    v22 = *p_dragObject;
    if ( !v21 )
      goto LABEL_20;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    Component_object = PartyOrganizationListViewDropObject_TypeInfo;
    v22 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_20;
  }
  v23 = **((float **)Component_object + 23);
  Component_object = UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v29 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v28, 0LL);
  v24 = v29.fields.y;
  v25 = v29.fields.z;
  v29.fields.y = v29.fields.x;
  v29.fields.z = v24;
  v26 = v25;
  Component_object = TweenPosition__Begin(v21, v23, *(UnityEngine_Vector3_o *)&v29.fields.y, 0LL);
  if ( !Component_object )
LABEL_20:
    sub_1BD36B4(Component_object, v15);
  v27 = Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  *((_QWORD *)Component_object + 10) = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1BD33FC(v27 + 10);
  v27[11] = StringLiteral_9286/*"MoveEnd"*/;
  sub_1BD33FC(v27 + 11);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B32EEB & 1) == 0 )
  {
    sub_1BD3458(&PartyOrganizationListViewItem_TypeInfo, method);
    byte_4B32EEB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init(
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
  __int64 methodPtr_low; // x10
  int32_t v17; // w24
  int32_t dispMode; // w23
  int32_t state; // w25
  UnityEngine_Transform_o *transform; // x0
  __int64 v21; // x1
  struct System_Action_o **p_callbackFunc; // x22
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int32_t v25; // w8
  int32_t v26; // w8
  int32_t v27; // w9
  struct System_Action_o *v28; // x19
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4B32EF4 & 1) == 0 )
  {
    sub_1BD3458(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4B32EF4 = 1;
  }
  if ( initMode == 10 )
  {
    PartyOrganizationListViewDropObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
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
    ((void (__fastcall *)(PartyOrganizationListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      (v17 == 4) | (unsigned int)(v17 == 8),
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_1BD36B4(transform, v21);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1BD33FC(&this->fields.callbackFunc);
    v25 = 1;
    switch ( v17 )
    {
      case 0:
      case 1:
      case 2:
        goto LABEL_16;
      case 3:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewDropObject__IntoStart(this, delay, v23);
        return;
      case 4:
        v25 = 3;
        v17 = 2;
LABEL_16:
        this->fields.dispMode = v17;
        this->fields.state = v25;
        goto LABEL_17;
      case 5:
        v26 = 4;
        v27 = 2;
        goto LABEL_25;
      case 6:
        this->fields.state = 2;
        v29.fields.y = y;
        v29.fields.z = z;
        v29.fields.x = x;
        PartyOrganizationListViewDropObject__DragMoveStart(this, v29, isEquipSwap, v24);
        return;
      case 7:
        PartyOrganizationListViewDropObject__DragDelete(this, v23);
        return;
      case 8:
        v26 = 2;
        v27 = 3;
        goto LABEL_25;
      case 9:
        v26 = 2;
        v27 = 1;
LABEL_25:
        this->fields.dispMode = v26;
        this->fields.state = v27;
        goto LABEL_26;
      default:
LABEL_17:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewDropObject__SetupDisp(this, v23);
LABEL_27:
        v28 = *p_callbackFunc;
        if ( *p_callbackFunc )
        {
          *p_callbackFunc = 0LL;
          sub_1BD33FC(p_callbackFunc);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v28->fields.m_target)(
            v28->fields.original_method_info,
            *(_QWORD *)&v28->fields.extra_arg);
        }
        break;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_32642940(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B31941 = 1;
  }
  PartyOrganizationListViewDropObject__Init(
    this,
    initMode,
    0LL,
    0.0,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_32645332(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B31941 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_32645460(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4B31941 = 1;
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
void __fastcall PartyOrganizationListViewDropObject__IntoMove(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  float y; // s4
  float z; // s5
  float v10; // s3
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4B32EF7 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7824/*"IntoMove2"*/, method);
    byte_4B32EF7 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent
    || (v12 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        y = v12.fields.y,
        z = v12.fields.z,
        v12.fields.y = v12.fields.x,
        v12.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v12.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BD36B4(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  dragObject[3].monitor = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  sub_1BD33FC(&v11[3].monitor);
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_7824/*"IntoMove2"*/;
  sub_1BD33FC(&v11[3].fields);
}


void __fastcall PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v6; // x1

  if ( (byte_4B32EF8 & 1) == 0 )
  {
    sub_1BD3458(&NGUITools_TypeInfo, method);
    byte_4B32EF8 = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BD33FC(&this->fields.dragObject);
  PartyOrganizationListViewDropObject__MoveEnd(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0

  if ( (byte_4B32EF6 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_7823/*"IntoMove"*/, method);
    byte_4B32EF6 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_1BD33FC(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__TransformPoint_70302860(
                                           (UnityEngine_Transform_o *)dragObject,
                                           -3000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1BD36B4(dragObject, v7);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7823/*"IntoMove"*/,
    delay,
    0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x11
  PartyOrganizationListViewItem_o *v7; // x20
  __int64 v8; // x10

  if ( (byte_4B32EF1 & 1) == 0 )
  {
    sub_1BD3458(&PartyOrganizationListViewItem_TypeInfo, method);
    sub_1BD3458(&PartyOrganizationListViewManager_TypeInfo, v3);
    byte_4B32EF1 = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
      v7 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v7 = 0LL;
    if ( !manager )
LABEL_22:
      sub_1BD36B4(manager, method);
  }
  else
  {
    v7 = 0LL;
    if ( !manager )
      goto LABEL_22;
  }
  v8 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != PartyOrganizationListViewManager_TypeInfo )
  {
    goto LABEL_22;
  }
  manager = (struct ListViewManager_o *)PartyOrganizationListViewManager__IsCanDrag(
                                          (PartyOrganizationListViewManager_o *)manager,
                                          0LL);
  if ( ((unsigned __int8)manager & 1) != 0 )
  {
    if ( this->fields.isEquipPress )
    {
      if ( !v7 )
        goto LABEL_22;
      return !v7->fields.isFollower;
    }
    if ( !v7 )
      goto LABEL_22;
    if ( PartyOrganizationListViewItem__IsEditablePos(v7, method) )
      return 1;
    if ( this->fields.isEquipPress )
      return !v7->fields.isFollower;
  }
  return 0;
}


bool __fastcall PartyOrganizationListViewDropObject__IsEquipPress(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  return this->fields.isEquipPress;
}


void __fastcall PartyOrganizationListViewDropObject__MoveEnd(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 32) = 0;
  *((_DWORD *)p_callbackFunc - 2) = 1;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BD33FC(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B32EFD & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9990/*"OnClickListDropEquip"*/, method);
    byte_4B32EFD = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BD36B4(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9990/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B32EFB & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9992/*"OnClickListDropServant"*/, method);
    byte_4B32EFB = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BD36B4(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9992/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4B32EEA & 1) == 0 )
  {
    sub_1BD3458(&NGUITools_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B32EEA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1BD33FC(p_dragObject);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B32EFC & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9993/*"OnClickListDropServantDetail"*/, method);
    byte_4B32EFC = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BD36B4(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9993/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B32EFE & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9991/*"OnClickListDropEquipDetail"*/, method);
    byte_4B32EFE = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BD36B4(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9991/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 3 )
  {
    if ( this->fields.linkItem )
      this->fields.isEquipPress = 0;
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  PartyOrganizationListViewDropObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  v2 = this;
  if ( (byte_4B32EFF & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_1BD3458(&PartyOrganizationListViewItem_TypeInfo, method);
    byte_4B32EFF = 1;
  }
  if ( v2->fields.state == 3 )
  {
    linkItem = v2->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_1BD36B4(this, method);
      }
      v2->fields.isEquipPress = !LOBYTE(linkItem[1].fields.viewObject)
                             && !BYTE2(linkItem[1].fields.viewObject)
                             && !LOBYTE(linkItem[1].fields.selectNum);
    }
  }
}


void __fastcall PartyOrganizationListViewDropObject__ReleaseItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  PartyOrganizationListViewItemDraw_o *v5; // x0

  if ( (byte_4B32EEC & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B32EEC = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1BD33FC(&this->fields.linkItem);
    this->fields.callbackFunc = 0LL;
    sub_1BD33FC(&this->fields.callbackFunc);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v5 = this->fields.itemDraw;
      if ( !v5 )
        sub_1BD36B4(0LL, v4);
      PartyOrganizationListViewItemDraw__ClearItem(v5, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetDispEquipOnly(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B32F01 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, flg);
    byte_4B32F01 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0LL )
  {
    sub_1BD36B4(dispObject, flg);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, 0LL);
  PartyOrganizationListViewDropObject__SetEquipDisp(this, 1, v6);
}


void __fastcall PartyOrganizationListViewDropObject__SetDispSwapGuide(
        PartyOrganizationListViewDropObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BD36B4(0LL, isDisp);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *equipUIDragDrop; // x21
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4B32F00 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UICommonButton___, flg);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B32F00 = 1;
  }
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
              Component_object,
              0LL,
              1LL,
              Component_object->klass[1]._1.interfaceOffsets),
            (Component_object = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0LL) )
      {
        sub_1BD36B4(Component_object, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, flg, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetInput(
        PartyOrganizationListViewDropObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v6; // x1
  UIDragDropListViewItem_o *v7; // x0

  if ( (byte_4B32EF0 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, isInput);
    byte_4B32EF0 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v7 = this->fields.equipUIDragDrop;
    if ( !v7 )
      sub_1BD36B4(0LL, v6);
    UIDragDropListViewItem__SetEnable(v7, isInput, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetItem(
        PartyOrganizationListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipUIDragDrop; // x22
  __int64 v8; // x1
  struct UIDragDropListViewItem_o *v9; // x0

  if ( (byte_4B32EEE & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, item);
    byte_4B32EEE = 1;
  }
  this->fields.state = 0;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v9 = this->fields.equipUIDragDrop;
    if ( !v9 )
      sub_1BD36B4(0LL, v8);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, Il2CppMethodPointer))v9->klass->vtable._5_SetBaseTransform.method)(
      v9,
      v9->klass->vtable._6_OnDragDropStart.methodPtr);
  }
  ListViewDropObject__SetItem_41546824((ListViewDropObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B32EEF & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, isVisible);
    byte_4B32EEF = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0LL);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
  {
    v7 = this->fields.equipDispBase;
    if ( !v7 )
      sub_1BD36B4(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v7; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  PartyOrganizationListViewItemDraw_o *v10; // x0

  if ( (byte_4B32EF5 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&PartyOrganizationListViewItem_TypeInfo, v4);
    byte_4B32EF5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  v7 = (this->fields.dispMode & 0xFFFFFFFB) != 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v7, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BD36B4(0LL, v9);
    PartyOrganizationListViewItemDraw__SetItem(
      v10,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}