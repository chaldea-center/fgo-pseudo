void __fastcall PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11F78 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v1, v2);
    byte_4B11F78 = 1;
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4B11F5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, method, v2);
    byte_4B11F5F = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1BCA784(&this->fields.itemDraw, Component_object);
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isBusy; // w21
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  PartyOrganizationListViewItemDraw_o *v8; // x0

  if ( (byte_4B11F63 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11F63 = 1;
  }
  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1BCA784(&this->fields.linkItem, 0LL);
    this->fields.callbackFunc = 0LL;
    sub_1BCA784(&this->fields.callbackFunc, 0LL);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v8 = this->fields.itemDraw;
      if ( !v8 )
        sub_1BCAA3C(0LL, v7);
      PartyOrganizationListViewItemDraw__ClearItem(v8, 0LL);
    }
  }
  return !isBusy;
}


UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x2
  PartyOrganizationListViewDropObject_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4B11F68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, method, v2);
    byte_4B11F68 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v6 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0LL) )
  {
    sub_1BCAA3C(DragObject, v5);
  }
  v8 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_32599672((PartyOrganizationListViewDropObject_o *)DragObject, 2, v7);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v8, 1, v9);
  return v6;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject_32599888(
        PartyOrganizationListViewDropObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  PartyOrganizationListViewDropObject_o *v10; // x21
  UnityEngine_Object_o *monitor; // x22
  const MethodInfo *v12; // x2

  if ( (byte_4B11F69 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___,
      *(_QWORD *)&addDepth,
      method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B11F69 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_11;
  v9 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
  if ( !DragObject )
    goto LABEL_11;
  v10 = (PartyOrganizationListViewDropObject_o *)DragObject;
  monitor = (UnityEngine_Object_o *)DragObject[6].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
  {
    DragObject = (UnityEngine_GameObject_o *)v10->fields.itemDraw;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(DragObject, v8);
  }
LABEL_10:
  PartyOrganizationListViewDropObject__Init_32599672(v10, 2, v12);
  return v9;
}


void __fastcall PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4B11F70 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11F70 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(v10, 0LL);
    *p_dragObject = 0LL;
    sub_1BCA784(p_dragObject, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  UnityEngine_Object_o *dragObject; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  struct UnityEngine_GameObject_o *DragObject_32599888; // x0
  void *Component_object; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x21
  UnityEngine_GameObject_o *v28; // x8
  float v29; // s11
  float v30; // s4
  float v31; // s5
  float v32; // s3
  _QWORD *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_4B11F6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEquipSwap, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&PartyOrganizationListViewDropObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_9272/*"MoveEnd"*/, v15, v16);
    byte_4B11F6F = 1;
  }
  p_dragObject = &this->fields.dragObject;
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  this->fields.isBusy = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEquipSwap);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    if ( isEquipSwap )
    {
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v19);
      DragObject_32599888 = PartyOrganizationListViewDropObject__CreateDragObject_32599888(this, -100, v20);
      this->fields.dragObject = DragObject_32599888;
      sub_1BCA784(&this->fields.dragObject, DragObject_32599888);
      Component_object = this->fields.dragObject;
      if ( !Component_object )
        goto LABEL_20;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Component_object,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_object )
        goto LABEL_20;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        1,
        v23);
    }
    else
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_object )
        goto LABEL_20;
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)Component_object + 440LL))(
        Component_object,
        *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v24);
      v26 = PartyOrganizationListViewDropObject__CreateDragObject_32599888(this, -100, v25);
      this->fields.dragObject = v26;
      sub_1BCA784(&this->fields.dragObject, v26);
    }
  }
  v27 = *p_dragObject;
  Component_object = PartyOrganizationListViewDropObject_TypeInfo;
  if ( PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    v28 = *p_dragObject;
    if ( !v27 )
      goto LABEL_20;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo, v19);
    Component_object = PartyOrganizationListViewDropObject_TypeInfo;
    v28 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_20;
  }
  v29 = **((float **)Component_object + 23);
  Component_object = UnityEngine_GameObject__get_transform(v28, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v37 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v36, 0LL);
  v30 = v37.fields.y;
  v31 = v37.fields.z;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v30;
  v32 = v31;
  Component_object = TweenPosition__Begin(v27, v29, *(UnityEngine_Vector3_o *)&v37.fields.y, 0LL);
  if ( !Component_object )
LABEL_20:
    sub_1BCAA3C(Component_object, v19);
  v33 = Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33[10] = gameObject;
  sub_1BCA784(v33 + 10, gameObject);
  v35 = StringLiteral_9272/*"MoveEnd"*/;
  v33[11] = StringLiteral_9272/*"MoveEnd"*/;
  sub_1BCA784(v33 + 11, v35);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B11F61 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, method, v2);
    byte_4B11F61 = 1;
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
  if ( (byte_4B11F6A & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B11F6A = 1;
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
      sub_1BCAA3C(transform, v21);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_1BCA784(&this->fields.callbackFunc, callbackFunc);
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
          sub_1BCA784(p_callbackFunc, 0LL);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v28->fields.m_target)(
            v28->fields.original_method_info,
            *(_QWORD *)&v28->fields.extra_arg);
        }
        break;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_32599672(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B109C1 = 1;
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
void __fastcall PartyOrganizationListViewDropObject__Init_32602064(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
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
void __fastcall PartyOrganizationListViewDropObject__Init_32602192(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v6; // s0
  float y; // s4
  float z; // s5
  float v11; // s3
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4B11F6D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7811/*"IntoMove2"*/, method, v2);
    byte_4B11F6D = 1;
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
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent
    || (v15 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v6, 0LL),
        y = v15.fields.y,
        z = v15.fields.z,
        v15.fields.y = v15.fields.x,
        v15.fields.z = y,
        v11 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v15.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(dragObject, method);
  }
  v12 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12[3].monitor = gameObject;
  sub_1BCA784(&v12[3].monitor, gameObject);
  v14 = StringLiteral_7811/*"IntoMove2"*/;
  *(_QWORD *)&v12[3].fields.m_CachedPtr = StringLiteral_7811/*"IntoMove2"*/;
  sub_1BCA784(&v12[3].fields, v14);
}


void __fastcall PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4B11F6E & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    byte_4B11F6E = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1BCA784(&this->fields.dragObject, 0LL);
  PartyOrganizationListViewDropObject__MoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__IntoStart(
        PartyOrganizationListViewDropObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0

  if ( (byte_4B11F6C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7810/*"IntoMove"*/, method, v3);
    byte_4B11F6C = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1BCA784(&this->fields.dragObject, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__TransformPoint_70178832(
                                           (UnityEngine_Transform_o *)dragObject,
                                           -3000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1BCAA3C(dragObject, v8);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7810/*"IntoMove"*/,
    delay,
    0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__IsCanDrag(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x8
  struct ListViewManager_o *manager; // x0
  __int64 methodPtr_low; // x11
  PartyOrganizationListViewItem_o *v9; // x20
  __int64 v10; // x10

  if ( (byte_4B11F67 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewManager_TypeInfo, v4, v5);
    byte_4B11F67 = 1;
  }
  linkItem = this->fields.linkItem;
  manager = this->fields.manager;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyOrganizationListViewItem_TypeInfo )
      v9 = (PartyOrganizationListViewItem_o *)this->fields.linkItem;
    else
      v9 = 0LL;
    if ( !manager )
LABEL_22:
      sub_1BCAA3C(manager, method);
  }
  else
  {
    v9 = 0LL;
    if ( !manager )
      goto LABEL_22;
  }
  v10 = LOBYTE(PartyOrganizationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v10
    || (PartyOrganizationListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] != PartyOrganizationListViewManager_TypeInfo )
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
      if ( !v9 )
        goto LABEL_22;
      return !v9->fields.isFollower;
    }
    if ( !v9 )
      goto LABEL_22;
    if ( PartyOrganizationListViewItem__IsEditablePos(v9, method) )
      return 1;
    if ( this->fields.isEquipPress )
      return !v9->fields.isFollower;
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
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B11F73 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9976/*"OnClickListDropEquip"*/, method, v2);
    byte_4B11F73 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCAA3C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9976/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B11F71 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9978/*"OnClickListDropServant"*/, method, v2);
    byte_4B11F71 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCAA3C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9978/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4B11F60 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11F60 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(v10, 0LL);
    *p_dragObject = 0LL;
    sub_1BCA784(p_dragObject, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B11F72 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9979/*"OnClickListDropServantDetail"*/, method, v2);
    byte_4B11F72 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCAA3C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9979/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B11F74 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9977/*"OnClickListDropEquipDetail"*/, method, v2);
    byte_4B11F74 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCAA3C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9977/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0LL);
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
  __int64 v2; // x2
  PartyOrganizationListViewDropObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  v3 = this;
  if ( (byte_4B11F75 & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, method, v2);
    byte_4B11F75 = 1;
  }
  if ( v3->fields.state == 3 )
  {
    linkItem = v3->fields.linkItem;
    if ( linkItem )
    {
      methodPtr_low = LOBYTE(PartyOrganizationListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PartyOrganizationListViewItem_TypeInfo )
      {
        sub_1BCAA3C(this, method);
      }
      v3->fields.isEquipPress = !LOBYTE(linkItem[1].fields.viewObject)
                             && !BYTE2(linkItem[1].fields.viewObject)
                             && !LOBYTE(linkItem[1].fields.selectNum);
    }
  }
}


void __fastcall PartyOrganizationListViewDropObject__ReleaseItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v6; // x1
  PartyOrganizationListViewItemDraw_o *v7; // x0

  if ( (byte_4B11F62 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11F62 = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1BCA784(&this->fields.linkItem, 0LL);
    this->fields.callbackFunc = 0LL;
    sub_1BCA784(&this->fields.callbackFunc, 0LL);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v7 = this->fields.itemDraw;
      if ( !v7 )
        sub_1BCAA3C(0LL, v6);
      PartyOrganizationListViewItemDraw__ClearItem(v7, 0LL);
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

  if ( (byte_4B11F77 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, flg, method);
    byte_4B11F77 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0LL )
  {
    sub_1BCAA3C(dispObject, flg);
  }
  PartyOrganizationListViewItemDraw__SetDispEquipOnly((PartyOrganizationListViewItemDraw_o *)dispObject, flg, 0LL);
  PartyOrganizationListViewDropObject__SetEquipDisp(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetDispSwapGuide(
        PartyOrganizationListViewDropObject_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  PartyOrganizationListViewItemDraw_o *itemDraw; // x0

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
    sub_1BCAA3C(0LL, isDisp);
  PartyOrganizationListViewItemDraw__SetDispSwapGuide(itemDraw, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetEquipDisp(
        PartyOrganizationListViewDropObject_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4B11F76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UICommonButton___, flg, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B11F76 = 1;
  }
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.equipUIDragDrop;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
              Component_object,
              0LL,
              1LL,
              Component_object->klass[1]._1.interfaceOffsets),
            (Component_object = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0LL) )
      {
        sub_1BCAA3C(Component_object, v10);
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
  __int64 v5; // x1
  UnityEngine_Object_o *equipUIDragDrop; // x21
  __int64 v7; // x1
  UIDragDropListViewItem_o *v8; // x0

  if ( (byte_4B11F66 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInput, method);
    byte_4B11F66 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v8 = this->fields.equipUIDragDrop;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    UIDragDropListViewItem__SetEnable(v8, isInput, 0LL);
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

  if ( (byte_4B11F64 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, seed);
    byte_4B11F64 = 1;
  }
  this->fields.state = 0;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v9 = this->fields.equipUIDragDrop;
    if ( !v9 )
      sub_1BCAA3C(0LL, v8);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, Il2CppMethodPointer))v9->klass->vtable._5_SetBaseTransform.method)(
      v9,
      v9->klass->vtable._6_OnDragDropStart.methodPtr);
  }
  ListViewDropObject__SetItem_41445956((ListViewDropObject_o *)this, item, seed, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__SetVisible(
        PartyOrganizationListViewDropObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *equipDispBase; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4B11F65 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isVisible, method);
    byte_4B11F65 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0LL);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
  {
    v8 = this->fields.equipDispBase;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__SetupDisp(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  PartyOrganizationListViewItemDraw_o *v12; // x0

  if ( (byte_4B11F6B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v4, v5);
    byte_4B11F6B = 1;
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
    v8 = 0;
    goto LABEL_8;
  }
  v8 = (this->fields.dispMode & 0xFFFFFFFB) != 0;
LABEL_8:
  PartyOrganizationListViewDropObject__SetVisible(this, v8, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_1BCAA3C(0LL, v11);
    PartyOrganizationListViewItemDraw__SetItem(
      v12,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}