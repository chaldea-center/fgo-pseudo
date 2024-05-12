void __fastcall PartyOrganizationListViewObject___ctor(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4388AE3 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    byte_4388AE3 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PartyOrganizationListViewObject__Awake(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4388AD1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4388AD1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B7769C(0LL, v3);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                          dispObject,
                                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewItemDraw___);
  sub_B77560(&this->fields.itemDraw);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewObject__CreateDragObject(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  PartyOrganizationListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4388AD5 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    byte_4388AD5 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___)) == 0LL) )
  {
    sub_B7769C(DragObject, v4);
  }
  v6 = (PartyOrganizationListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyOrganizationListViewObject__Init(v6, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall PartyOrganizationListViewObject__CreateDragObject_20658248(
        PartyOrganizationListViewObject_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x20
  PartyOrganizationListViewObject_o *v8; // x21
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v10; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4388AD6 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388AD6 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject )
    goto LABEL_12;
  v7 = DragObject;
  DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             DragObject,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
  if ( !DragObject )
    goto LABEL_12;
  v8 = (PartyOrganizationListViewObject_o *)DragObject;
  klass = (UnityEngine_Object_o *)DragObject[5].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    DragObject = (UnityEngine_GameObject_o *)v8->fields.itemDraw;
    if ( DragObject )
    {
      PartyOrganizationListViewItemDraw__AddDepth((PartyOrganizationListViewItemDraw_o *)DragObject, addDepth, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_B7769C(DragObject, v6);
  }
LABEL_11:
  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyOrganizationListViewObject__Init(v8, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v10);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventEnterMove(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  UnityEngine_GameObject_o *v8; // x20
  ListViewObject_c *v9; // x0
  float v10; // s10
  float v11; // s9
  float v12; // s8
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4388ADD & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    sub_B775C4(&StringLiteral_6306/*"EventEnterMove2"*/);
    byte_4388ADD = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v14 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL);
  v8 = this->fields.dragObject;
  v9 = ListViewObject_TypeInfo;
  v10 = v14.fields.x + 0.0;
  v11 = v14.fields.y + 950.0;
  v12 = v14.fields.z + 0.0;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v9 = ListViewObject_TypeInfo;
  }
  v15.fields.x = v10;
  v15.fields.y = v11;
  v15.fields.z = v12;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v9->static_fields->BASE_MOVE_TIME, v15, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B7769C(dragObject, method);
  v13 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  dragObject[3].klass = (UnityEngine_GameObject_c *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  sub_B77560(&v13[3]);
  v13[3].monitor = (void *)StringLiteral_6306/*"EventEnterMove2"*/;
  sub_B77560(&v13[3].monitor);
}


void __fastcall PartyOrganizationListViewObject__EventEnterMove2(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4388ADE & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_4388ADE = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560(&this->fields.dragObject);
  PartyOrganizationListViewObject__EventMoveEnd(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventEnterStart(
        PartyOrganizationListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  PartyOrganizationListViewObject_o *v7; // x20
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4388ADC & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_B775C4(&StringLiteral_6305/*"EventEnterMove"*/);
    byte_4388ADC = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_B77560(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   dragObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___)) == 0LL )
  {
    sub_B7769C(dragObject, v5);
  }
  v7 = (PartyOrganizationListViewObject_o *)dragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyOrganizationListViewObject__Init(v7, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v8);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6305/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventExitMove(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v7; // s0
  UnityEngine_GameObject_o *v10; // x20
  ListViewObject_c *v11; // x0
  float v12; // s8
  float v13; // s10
  float v14; // s9
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4388AE0 & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6308/*"EventExitMove2"*/);
    byte_4388AE0 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    PartyOrganizationListViewObject__EventMoveEnd(this, v4);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_17;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_17;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_17;
    *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_17;
    v16 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL);
    v10 = this->fields.dragObject;
    v11 = ListViewObject_TypeInfo;
    v12 = v16.fields.x + 950.0;
    v13 = v16.fields.y + 0.0;
    v14 = v16.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v11 = ListViewObject_TypeInfo;
    }
    v17.fields.x = v12;
    v17.fields.y = v13;
    v17.fields.z = v14;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v10, v11->static_fields->BASE_MOVE_TIME, v17, 0LL);
    if ( !transform )
LABEL_17:
      sub_B7769C(transform, v4);
    v15 = transform;
    LODWORD(transform[1].klass) = 3;
    transform[3].klass = (UnityEngine_GameObject_c *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    sub_B77560(&v15[3]);
    v15[3].monitor = (void *)StringLiteral_6308/*"EventExitMove2"*/;
    sub_B77560(&v15[3].monitor);
  }
}


void __fastcall PartyOrganizationListViewObject__EventExitMove2(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v4; // x1

  if ( (byte_4388AE1 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_4388AE1 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560(&this->fields.dragObject);
  PartyOrganizationListViewObject__EventMoveEnd(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventExitStart(
        PartyOrganizationListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4388ADF & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_6307/*"EventExitMove"*/);
    byte_4388ADF = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_B77560(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    PartyOrganizationListViewObject__EventMoveEnd(this, v5);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B7769C(dragObject, v5);
  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyOrganizationListViewObject__Init(
    (PartyOrganizationListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6307/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventIntoMove(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  UnityEngine_GameObject_o *v8; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v11; // x0
  float z; // s10
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4388ADA & 1) == 0 )
  {
    sub_B775C4(&ListViewObject_TypeInfo);
    sub_B775C4(&StringLiteral_6318/*"EventIntoMove2"*/);
    byte_4388ADA = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_12;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject )
    goto LABEL_12;
  *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v14 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL);
  v8 = this->fields.dragObject;
  x = v14.fields.x;
  y = v14.fields.y;
  v11 = ListViewObject_TypeInfo;
  z = v14.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v11 = ListViewObject_TypeInfo;
  }
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v8, v11->static_fields->BASE_MOVE_TIME, v15, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B7769C(dragObject, method);
  v13 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  dragObject[3].klass = (UnityEngine_GameObject_c *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  sub_B77560(&v13[3]);
  v13[3].monitor = (void *)StringLiteral_6318/*"EventIntoMove2"*/;
  sub_B77560(&v13[3].monitor);
}


void __fastcall PartyOrganizationListViewObject__EventIntoMove2(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  const MethodInfo *v5; // x1

  if ( (byte_4388ADB & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    byte_4388ADB = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  PartyOrganizationListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B77560(&this->fields.dragObject);
  PartyOrganizationListViewObject__EventMoveEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__EventIntoStart(
        PartyOrganizationListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  PartyOrganizationListViewObject_o *v8; // x21
  const MethodInfo *v9; // x3
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4388AD9 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
    sub_B775C4(&StringLiteral_6317/*"EventIntoMove"*/);
    byte_4388AD9 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  PartyOrganizationListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(PartyOrganizationListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                                                 this,
                                                                 this->klass->vtable._9_SetInput.methodPtr);
  sub_B77560(&this->fields.dragObject);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PartyOrganizationListViewObject___);
  if ( !dragObject
    || (v8 = (PartyOrganizationListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        PartyOrganizationListViewObject__Init(v8, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v9),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__TransformPoint_36433912(
                                           (UnityEngine_Transform_o *)dragObject,
                                           950.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B7769C(dragObject, v6);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6317/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall PartyOrganizationListViewObject__EventMoveEnd(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 8) = 0;
  *((_DWORD *)p_callbackFunc - 1) = 1;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B77560(p_callbackFunc);
    System_Action__Invoke(v3, 0LL);
  }
}


PartyOrganizationListViewItem_o *__fastcall PartyOrganizationListViewObject__GetItem(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_4388AD3 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_4388AD3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewItem_TypeInfo )
    return (PartyOrganizationListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init(
        PartyOrganizationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v13; // x10
  int32_t v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v18; // x1
  int32_t v19; // w9
  int32_t v20; // w8
  int32_t v21; // w9
  System_Action_o *v22; // x19

  if ( (byte_4388AD7 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_4388AD7 = 1;
  }
  if ( initMode == 9 )
  {
    PartyOrganizationListViewObject__SetupDisp(this, *(const MethodInfo **)&initMode);
  }
  else
  {
    linkItem = this->fields.linkItem;
    dispMode = this->fields.dispMode;
    state = this->fields.state;
    if ( linkItem
      && (v13 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == PartyOrganizationListViewItem_TypeInfo )
        v14 = initMode;
      else
        v14 = 0;
    }
    else
    {
      v14 = 0;
    }
    ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
    ((void (__fastcall *)(PartyOrganizationListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      (v14 == 3) | (unsigned int)(v14 == 8),
      this->klass->vtable._10_Invalidation.methodPtr);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
          (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B7769C(transform, v16);
    }
    UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B77560(&this->fields.callbackFunc);
    v19 = 1;
    v20 = v14;
    switch ( v14 )
    {
      case 0:
      case 2:
        goto LABEL_18;
      case 1:
        v20 = v14;
        goto LABEL_17;
      case 3:
        v20 = 2;
LABEL_17:
        v19 = v14;
LABEL_18:
        this->fields.dispMode = v20;
        this->fields.state = v19;
        goto LABEL_19;
      case 4:
        this->fields.dispMode = 0;
        this->fields.state = 2;
        PartyOrganizationListViewObject__EventIntoStart(this, delay, v18);
        return;
      case 6:
        this->fields.dispMode = 2;
        this->fields.state = 2;
        PartyOrganizationListViewObject__EventExitStart(this, delay, v18);
        return;
      case 7:
        v21 = 1;
        goto LABEL_25;
      case 8:
        v21 = 3;
LABEL_25:
        this->fields.dispMode = 2;
        this->fields.state = v21;
        goto LABEL_26;
      default:
LABEL_19:
        if ( state && dispMode == this->fields.dispMode )
          goto LABEL_27;
LABEL_26:
        PartyOrganizationListViewObject__SetupDisp(this, v18);
LABEL_27:
        v22 = *p_callbackFunc;
        if ( *p_callbackFunc )
        {
          *p_callbackFunc = 0LL;
          sub_B77560(p_callbackFunc);
          System_Action__Invoke(v22, 0LL);
        }
        break;
    }
  }
}


void __fastcall PartyOrganizationListViewObject__InitItem(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init_20649648(
        PartyOrganizationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyOrganizationListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init_20651460(
        PartyOrganizationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyOrganizationListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    delay,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationListViewObject__Init_20651984(
        PartyOrganizationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  PartyOrganizationListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


void __fastcall PartyOrganizationListViewObject__OnDestroy(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4388AD2 & 1) == 0 )
  {
    sub_B775C4(&NGUITools_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388AD2 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0LL);
    *p_dragObject = 0LL;
    sub_B77560(p_dragObject);
  }
}


void __fastcall PartyOrganizationListViewObject__SetInput(
        PartyOrganizationListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 v7; // x11
  struct ListViewItem_o *v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4388AD4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_4388AD4 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (v7 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
    {
      if ( (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] == PartyOrganizationListViewItem_TypeInfo )
        v8 = this->fields.linkItem;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B7769C(0LL, v8);
    PartyOrganizationListViewItemDraw__SetInput(v9, (PartyOrganizationListViewItem_o *)v8, isInput, 0LL);
  }
}


void __fastcall PartyOrganizationListViewObject__SetItem(
        PartyOrganizationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34301308((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyOrganizationListViewObject__SetItem_20657808(
        PartyOrganizationListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall PartyOrganizationListViewObject__SetupDisp(
        PartyOrganizationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 v4; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  PartyOrganizationListViewItemDraw_o *v8; // x0

  if ( (byte_4388AD8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    byte_4388AD8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v4 = *(&PartyOrganizationListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4
      && (PartyOrganizationListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == PartyOrganizationListViewItem_TypeInfo )
    {
      v5 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v5 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_B7769C(0LL, v7);
    PartyOrganizationListViewItemDraw__SetItem(
      v8,
      (PartyOrganizationListViewItem_o *)linkItem,
      this->fields.dispMode,
      0LL);
  }
}


void __fastcall PartyOrganizationListViewObject__UpdateStartingMemberFriendshipUp(
        PartyOrganizationListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  PartyOrganizationListViewItemDraw_o *v7; // x0

  if ( (byte_4388AE2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388AE2 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    PartyOrganizationListViewItemDraw__SetItem(v7, item, 2, 0LL);
  }
}


void __fastcall PartyOrganizationListViewObject__add_callbackFunc(
        PartyOrganizationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4388ACF & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4388ACF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewObject_o *)sub_B77990(v8);
  PartyOrganizationListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationListViewObject__remove_callbackFunc(
        PartyOrganizationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4388AD0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_4388AD0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationListViewObject_o *)sub_B77990(v8);
  PartyOrganizationListViewObject__Awake(v11, v12);
}