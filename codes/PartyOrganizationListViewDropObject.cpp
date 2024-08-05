void __fastcall PartyOrganizationListViewDropObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FA4C4 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationListViewDropObject_TypeInfo, v1);
    byte_49FA4C4 = 1;
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
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FA4AB & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, method);
    byte_49FA4AB = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64ACC(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
}


bool __fastcall PartyOrganizationListViewDropObject__ClearItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  _BOOL4 isBusy; // w21
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v9; // x1
  PartyOrganizationListViewItemDraw_o *v10; // x0

  if ( (byte_49FA4AF & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FA4AF = 1;
  }
  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
    this->fields.callbackFunc = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v6, v7);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v10 = this->fields.itemDraw;
      if ( !v10 )
        sub_1B64ACC(0LL, v9);
      PartyOrganizationListViewItemDraw__ClearItem(v10, 0LL);
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

  if ( (byte_49FA4B4 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, method);
    byte_49FA4B4 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___)) == 0LL) )
  {
    sub_1B64ACC(DragObject, v4);
  }
  v7 = (PartyOrganizationListViewDropObject_o *)DragObject;
  PartyOrganizationListViewDropObject__Init_31793072((PartyOrganizationListViewDropObject_o *)DragObject, 2, v6);
  if ( this->fields.isEquipPress )
    PartyOrganizationListViewDropObject__SetDispEquipOnly(v7, 1, v8);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewDropObject__CreateDragObject_31793288(
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

  if ( (byte_49FA4B5 & 1) == 0 )
  {
    sub_1B64870(
      &Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___,
      *(_QWORD *)&addDepth);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FA4B5 = 1;
  }
  DragObject = ListViewDropObject__CreateDragObject((ListViewDropObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_11;
  v8 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             DragObject,
                                             (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
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
    sub_1B64ACC(DragObject, v7);
  }
LABEL_10:
  PartyOrganizationListViewDropObject__Init_31793072(v9, 2, v11);
  return v8;
}


void __fastcall PartyOrganizationListViewDropObject__DragDelete(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FA4BC & 1) == 0 )
  {
    sub_1B64870(&NGUITools_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FA4BC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B64814(p_dragObject, 0, v8, v9);
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
  struct UnityEngine_GameObject_o *DragObject_31793288; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  char *Component_object; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  struct UnityEngine_GameObject_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_GameObject_o *v27; // x21
  UnityEngine_GameObject_o *v28; // x8
  float v29; // s11
  float v30; // s4
  float v31; // s5
  float v32; // s3
  char *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_49FA4BB & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEquipSwap);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&PartyOrganizationListViewDropObject_TypeInfo, v11);
    sub_1B64870(&StringLiteral_9102/*"MoveEnd"*/, v12);
    byte_49FA4BB = 1;
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
      DragObject_31793288 = PartyOrganizationListViewDropObject__CreateDragObject_31793288(this, -100, v16);
      this->fields.dragObject = DragObject_31793288;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)DragObject_31793288, v18, v19);
      Component_object = (char *)this->fields.dragObject;
      if ( !Component_object )
        goto LABEL_20;
      Component_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)Component_object,
                                   (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewDropObject___);
      if ( !Component_object )
        goto LABEL_20;
      PartyOrganizationListViewDropObject__SetDispEquipOnly(
        (PartyOrganizationListViewDropObject_o *)Component_object,
        1,
        v21);
    }
    else
    {
      Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !Component_object )
        goto LABEL_20;
      (*(void (__fastcall **)(char *, _QWORD, float))(*(_QWORD *)Component_object + 440LL))(
        Component_object,
        *(_QWORD *)(*(_QWORD *)Component_object + 448LL),
        0.0);
      this->fields.dispMode = 2;
      PartyOrganizationListViewDropObject__SetupDisp(this, v22);
      v24 = PartyOrganizationListViewDropObject__CreateDragObject_31793288(this, -100, v23);
      this->fields.dragObject = v24;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v24, v25, v26);
    }
  }
  v27 = *p_dragObject;
  Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
  if ( PartyOrganizationListViewDropObject_TypeInfo->_2.cctor_finished )
  {
    v28 = *p_dragObject;
    if ( !v27 )
      goto LABEL_20;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationListViewDropObject_TypeInfo);
    Component_object = (char *)PartyOrganizationListViewDropObject_TypeInfo;
    v28 = *p_dragObject;
    if ( !*p_dragObject )
      goto LABEL_20;
  }
  v29 = **((float **)Component_object + 23);
  Component_object = (char *)UnityEngine_GameObject__get_transform(v28, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  Component_object = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Component_object, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v41 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)Component_object, v40, 0LL);
  v30 = v41.fields.y;
  v31 = v41.fields.z;
  v41.fields.y = v41.fields.x;
  v41.fields.z = v30;
  v32 = v31;
  Component_object = (char *)TweenPosition__Begin(v27, v29, *(UnityEngine_Vector3_o *)&v41.fields.y, 0LL);
  if ( !Component_object )
LABEL_20:
    sub_1B64ACC(Component_object, v15);
  v33 = Component_object;
  *((_DWORD *)Component_object + 8) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v33 + 10) = gameObject;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 80), (int32_t)gameObject, v35, v36);
  v37 = StringLiteral_9102/*"MoveEnd"*/;
  *((_QWORD *)v33 + 11) = StringLiteral_9102/*"MoveEnd"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 88), v37, v38, v39);
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewDropObject__GetItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49FA4AD & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationListViewItem_TypeInfo, method);
    byte_49FA4AD = 1;
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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  int32_t v28; // w8
  int32_t v29; // w8
  int32_t v30; // w9
  ServantStatusBattleListViewItem_c *klass; // x19
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  if ( (byte_49FA4B6 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_49FA4B6 = 1;
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
      sub_1B64ACC(transform, v21);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v23, v24);
    v28 = 1;
    switch ( v17 )
    {
      case 0:
      case 1:
      case 2:
        goto LABEL_16;
      case 3:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewDropObject__IntoStart(this, delay, v25);
        return;
      case 4:
        v28 = 3;
        v17 = 2;
LABEL_16:
        this->fields.dispMode = v17;
        this->fields.state = v28;
        goto LABEL_17;
      case 5:
        v29 = 4;
        v30 = 2;
        goto LABEL_25;
      case 6:
        this->fields.state = 2;
        v32.fields.y = y;
        v32.fields.z = z;
        v32.fields.x = x;
        PartyOrganizationListViewDropObject__DragMoveStart(this, v32, isEquipSwap, v26);
        return;
      case 7:
        PartyOrganizationListViewDropObject__DragDelete(this, v25);
        return;
      case 8:
        v29 = 2;
        v30 = 3;
        goto LABEL_25;
      case 9:
        v29 = 2;
        v30 = 1;
LABEL_25:
        this->fields.dispMode = v29;
        this->fields.state = v30;
        goto LABEL_26;
      default:
LABEL_17:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewDropObject__SetupDisp(this, v25);
LABEL_27:
        klass = p_callbackFunc->klass;
        if ( p_callbackFunc->klass )
        {
          p_callbackFunc->klass = 0LL;
          sub_1B64814(p_callbackFunc, 0, (int32_t)v26, v27);
          ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
            klass->_1.element_class,
            *(_QWORD *)&klass->_1.byval_arg.bits);
        }
        break;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewDropObject__Init_31793072(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9201 = 1;
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
void __fastcall PartyOrganizationListViewDropObject__Init_31795464(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9201 = 1;
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
void __fastcall PartyOrganizationListViewDropObject__Init_31795592(
        PartyOrganizationListViewDropObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9201 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_49FA4B9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_7652/*"IntoMove2"*/, method);
    byte_49FA4B9 = 1;
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
    || (v18 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        y = v18.fields.y,
        z = v18.fields.z,
        v18.fields.y = v18.fields.x,
        v18.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v18.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64ACC(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].monitor = gameObject;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_7652/*"IntoMove2"*/;
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_7652/*"IntoMove2"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v11[3].fields, v15, v16, v17);
}


void __fastcall PartyOrganizationListViewDropObject__IntoMove2(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_49FA4BA & 1) == 0 )
  {
    sub_1B64870(&NGUITools_TypeInfo, method);
    byte_49FA4BA = 1;
  }
  PartyOrganizationListViewDropObject__SetVisible(this, 1, v2);
  this->fields.dispMode = 2;
  PartyOrganizationListViewDropObject__SetupDisp(this, v4);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v6, v7);
  PartyOrganizationListViewDropObject__MoveEnd(this, v8);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0

  if ( (byte_49FA4B8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_7651/*"IntoMove"*/, method);
    byte_49FA4B8 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewDropObject__SetVisible(this, 0, v3);
  PartyOrganizationListViewDropObject__SetupDisp(this, v6);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewDropObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__TransformPoint_69160504(
                                           (UnityEngine_Transform_o *)dragObject,
                                           -3000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B64ACC(dragObject, v10);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_7651/*"IntoMove"*/,
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

  if ( (byte_49FA4B3 & 1) == 0 )
  {
    sub_1B64870(&PartyOrganizationListViewItem_TypeInfo, method);
    sub_1B64870(&PartyOrganizationListViewManager_TypeInfo, v3);
    byte_49FA4B3 = 1;
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
      sub_1B64ACC(manager, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.dispLimitCount.fields.fakeValue) = 0;
  *(_DWORD *)&p_callbackFunc[-1].fields.isMine = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B64814(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49FA4BF & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9799/*"OnClickListDropEquip"*/, method);
    byte_49FA4BF = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64ACC(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9799/*"OnClickListDropEquip"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnClickListDrop(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49FA4BD & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9801/*"OnClickListDropServant"*/, method);
    byte_49FA4BD = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64ACC(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9801/*"OnClickListDropServant"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnDestroy(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FA4AC & 1) == 0 )
  {
    sub_1B64870(&NGUITools_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FA4AC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
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
    sub_1B64814(p_dragObject, 0, v8, v9);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItem(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49FA4BE & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9802/*"OnClickListDropServantDetail"*/, method);
    byte_49FA4BE = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64ACC(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9802/*"OnClickListDropServantDetail"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PartyOrganizationListViewDropObject__OnLongPressItemEquip(
        PartyOrganizationListViewDropObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_49FA4C0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9800/*"OnClickListDropEquipDetail"*/, method);
    byte_49FA4C0 = 1;
  }
  if ( this->fields.state == 3 && this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1B64ACC(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9800/*"OnClickListDropEquipDetail"*/, (Il2CppObject *)this, 0LL);
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
  if ( (byte_49FA4C1 & 1) == 0 )
  {
    this = (PartyOrganizationListViewDropObject_o *)sub_1B64870(&PartyOrganizationListViewItem_TypeInfo, method);
    byte_49FA4C1 = 1;
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
        sub_1B64ACC(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_49FA4AE & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FA4AE = 1;
  }
  if ( this->fields.linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
    this->fields.callbackFunc = 0LL;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
    this->fields.state = 0;
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    {
      v9 = this->fields.itemDraw;
      if ( !v9 )
        sub_1B64ACC(0LL, v8);
      PartyOrganizationListViewItemDraw__ClearItem(v9, 0LL);
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

  if ( (byte_49FA4C3 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___, flg);
    byte_49FA4C3 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (dispObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dispObject,
                                                   (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___)) == 0LL )
  {
    sub_1B64ACC(dispObject, flg);
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
    sub_1B64ACC(0LL, isDisp);
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

  if ( (byte_49FA4C2 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UICommonButton___, flg);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_49FA4C2 = 1;
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
                                                            (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UICommonButton___)) == 0LL
        || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
              Component_object,
              0LL,
              1LL,
              Component_object->klass[1]._1.interfaceOffsets),
            (Component_object = (UnityEngine_Component_o *)this->fields.equipDispBase) == 0LL) )
      {
        sub_1B64ACC(Component_object, v8);
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

  if ( (byte_49FA4B2 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, isInput);
    byte_49FA4B2 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v7 = this->fields.equipUIDragDrop;
    if ( !v7 )
      sub_1B64ACC(0LL, v6);
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

  if ( (byte_49FA4B0 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, item);
    byte_49FA4B0 = 1;
  }
  this->fields.state = 0;
  equipUIDragDrop = (UnityEngine_Object_o *)this->fields.equipUIDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipUIDragDrop, 0LL, 0LL) )
  {
    v9 = this->fields.equipUIDragDrop;
    if ( !v9 )
      sub_1B64ACC(0LL, v8);
    ((void (__fastcall *)(struct UIDragDropListViewItem_o *, Il2CppMethodPointer))v9->klass->vtable._5_SetBaseTransform.method)(
      v9,
      v9->klass->vtable._6_OnDragDropStart.methodPtr);
  }
  ListViewDropObject__SetItem_40374384((ListViewDropObject_o *)this, item, seed, 0LL);
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

  if ( (byte_49FA4B1 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, isVisible);
    byte_49FA4B1 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, isVisible, 0LL);
  equipDispBase = (UnityEngine_Object_o *)this->fields.equipDispBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipDispBase, 0LL, 0LL) )
  {
    v7 = this->fields.equipDispBase;
    if ( !v7 )
      sub_1B64ACC(0LL, v6);
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

  if ( (byte_49FA4B7 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&PartyOrganizationListViewItem_TypeInfo, v4);
    byte_49FA4B7 = 1;
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
      sub_1B64ACC(0LL, v9);
    PartyOrganizationListViewItemDraw__SetItem(
      v10,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}