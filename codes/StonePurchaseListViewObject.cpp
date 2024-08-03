void __fastcall StonePurchaseListViewObject___ctor(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_49F9CBC & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49F9CBC = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall StonePurchaseListViewObject__Awake(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F9CAA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___, method);
    byte_49F9CAA = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___);
  this->fields.itemDraw = (struct StonePurchaseListViewItemDraw_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


UnityEngine_GameObject_o *__fastcall StonePurchaseListViewObject__CreateDragObject(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19
  const MethodInfo *v5; // x2

  if ( (byte_49F9CAE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___, method);
    byte_49F9CAE = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v4 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0LL) )
  {
    sub_1B64324(DragObject);
  }
  StonePurchaseListViewObject__Init_34596252((StonePurchaseListViewObject_o *)DragObject, 2, v5);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__EventEnterMove(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  float v8; // s4
  float v9; // s3
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_49F9CB6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6148/*"EventEnterMove2"*/, method);
    byte_49F9CB6 = 1;
  }
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dragObject, 0LL);
  if ( !dragObject )
    goto LABEL_9;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)dragObject, 0LL);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !dragObject
    || (*(UnityEngine_Vector3_o *)&v5 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL),
        !parent)
    || (v17 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        v8 = v17.fields.y + 1000.0,
        v9 = v17.fields.z + 0.0,
        v17.fields.y = v17.fields.x + 0.0,
        v17.fields.z = v8,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.0,
                                                    *(UnityEngine_Vector3_o *)&v17.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(dragObject);
  }
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[3].monitor = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[3].monitor, (int32_t)gameObject, v12, v13);
  v14 = StringLiteral_6148/*"EventEnterMove2"*/;
  *(_QWORD *)&v10[3].fields.m_CachedPtr = StringLiteral_6148/*"EventEnterMove2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[3].fields, v14, v15, v16);
}


void __fastcall StonePurchaseListViewObject__EventEnterMove2(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_49F9CB7 & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    byte_49F9CB7 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v4, v5);
  StonePurchaseListViewObject__EventMoveEnd(this, v6);
}


void __fastcall StonePurchaseListViewObject__EventEnterStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v10; // x2

  if ( (byte_49F9CB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___, method);
    sub_1B640C8(&StringLiteral_6147/*"EventEnterMove"*/, v5);
    byte_49F9CB5 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v6, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0LL )
  {
    sub_1B64324(dragObject);
  }
  StonePurchaseListViewObject__Init_34596252((StonePurchaseListViewObject_o *)dragObject, 2, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6147/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__EventExitMove(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v8; // s0
  float v11; // s4
  float v12; // s3
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_49F9CB9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6150/*"EventExitMove2"*/, v3);
    byte_49F9CB9 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v5);
  }
  else
  {
    transform = this->fields.dragObject;
    if ( !transform )
      goto LABEL_13;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_13;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform
      || (*(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL),
          !parent)
      || (v20 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v8, 0LL),
          v11 = v20.fields.y + 0.0,
          v12 = v20.fields.z + 0.0,
          v20.fields.y = v20.fields.x + 1000.0,
          v20.fields.z = v11,
          (transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                     this->fields.dragObject,
                                                     1.0,
                                                     *(UnityEngine_Vector3_o *)&v20.fields.y,
                                                     0LL)) == 0LL) )
    {
LABEL_13:
      sub_1B64324(transform);
    }
    v13 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13[3].monitor = gameObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13[3].monitor, (int32_t)gameObject, v15, v16);
    v17 = StringLiteral_6150/*"EventExitMove2"*/;
    *(_QWORD *)&v13[3].fields.m_CachedPtr = StringLiteral_6150/*"EventExitMove2"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13[3].fields, v17, v18, v19);
  }
}


void __fastcall StonePurchaseListViewObject__EventExitMove2(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_49F9CBA & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    byte_49F9CBA = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v4, v5);
  StonePurchaseListViewObject__EventMoveEnd(this, v6);
}


void __fastcall StonePurchaseListViewObject__EventExitStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49F9CB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6149/*"EventExitMove"*/, v6);
    byte_49F9CB8 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v7 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v7, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v12);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B64324(dragObject);
  StonePurchaseListViewObject__Init_34596252((StonePurchaseListViewObject_o *)Component_object, 2, v13);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6149/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__EventIntoMove(
        StonePurchaseListViewObject_o *this,
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

  if ( (byte_49F9CB3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6160/*"EventIntoMove2"*/, method);
    byte_49F9CB3 = 1;
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
    sub_1B64324(dragObject);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].monitor = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_6160/*"EventIntoMove2"*/;
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_6160/*"EventIntoMove2"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11[3].fields, v15, v16, v17);
}


void __fastcall StonePurchaseListViewObject__EventIntoMove2(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_49F9CB4 & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    byte_49F9CB4 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  StonePurchaseListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v5, v6);
  StonePurchaseListViewObject__EventMoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__EventIntoStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0

  if ( (byte_49F9CB2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___, method);
    sub_1B640C8(&StringLiteral_6159/*"EventIntoMove"*/, v5);
    byte_49F9CB2 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v6, v8, v9);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0LL
    || (StonePurchaseListViewObject__Init_34596252((StonePurchaseListViewObject_o *)dragObject, 2, v11),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__TransformPoint_69152324(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B64324(dragObject);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6159/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall StonePurchaseListViewObject__EventMoveEnd(
        StonePurchaseListViewObject_o *this,
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
  p_callbackFunc[-1].fields.isMine = 0;
  *((_DWORD *)&p_callbackFunc[-1].fields.isMine + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


StonePurchaseListViewItem_o *__fastcall StonePurchaseListViewObject__GetItem(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49F9CAC & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewItem_TypeInfo, method);
    byte_49F9CAC = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(StonePurchaseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == StonePurchaseListViewItem_TypeInfo )
    return (StonePurchaseListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__Init(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_49F9CAF & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_49F9CAF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(StonePurchaseListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == StonePurchaseListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(StonePurchaseListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v16, v17);
  if ( (unsigned int)v11 <= 3 )
  {
    v21 = dword_BA25B0[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BA31D0 + v11);
    this->fields.state = v21;
  }
  if ( !state || dispMode != this->fields.dispMode )
    StonePurchaseListViewObject__SetupDisp(this, v18);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, v19, v20);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__Init_34596252(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__Init_34597548(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__Init_34597632(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_49F7111 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall StonePurchaseListViewObject__OnClickDetailBtn(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  StonePurchaseListViewItem_c *v12; // x10
  struct ListViewItem_o *v13; // x20
  void *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *v17; // x19
  BankShopEntity_o *klass; // x20
  System_Action_o *v19; // x21
  Il2CppObject *v20; // x22
  struct StonePurchaseListViewObject___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49F9CB1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&StonePurchaseListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_StonePurchaseListViewObject_OnClickDetailBtn__, v5);
    sub_1B640C8(&Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__, v6);
    sub_1B640C8(&StonePurchaseListViewObject___c_TypeInfo, v7);
    byte_49F9CB1 = 1;
  }
  v8 = Method_StonePurchaseListViewObject_OnClickDetailBtn__;
  if ( (*((_BYTE *)Method_StonePurchaseListViewObject_OnClickDetailBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0(Method_StonePurchaseListViewObject_OnClickDetailBtn__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(StonePurchaseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v12 = (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v13 = v12 == StonePurchaseListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v12 == StonePurchaseListViewItem_TypeInfo )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v13 )
          goto LABEL_21;
        v17 = (CommonUI_o *)Instance;
        klass = (BankShopEntity_o *)v13[1].klass;
        Instance = StonePurchaseListViewObject___c_TypeInfo;
        if ( !StonePurchaseListViewObject___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StonePurchaseListViewObject___c_TypeInfo);
          Instance = StonePurchaseListViewObject___c_TypeInfo;
        }
        v19 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
        if ( !v19 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = StonePurchaseListViewObject___c_TypeInfo;
          }
          v20 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
          System_Action___ctor(v19, v20, Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__, 0LL);
          static_fields = StonePurchaseListViewObject___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v19;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)v19, v22, v23);
        }
        if ( !v17 )
LABEL_21:
          sub_1B64324(Instance);
        CommonUI__OpenStoneShopDetailDialog(v17, klass, v19, 0LL);
      }
    }
  }
}


void __fastcall StonePurchaseListViewObject__OnDestroy(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F9CAB & 1) == 0 )
  {
    sub_1B640C8(&NGUITools_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F9CAB = 1;
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
    sub_1B6406C(p_dragObject, 0, v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__SetInput(
        StonePurchaseListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  StonePurchaseListViewItem_o *v7; // x1
  const MethodInfo *v8; // x3
  StonePurchaseListViewItemDraw_o *v9; // x0

  if ( (byte_49F9CAD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isInput);
    sub_1B640C8(&StonePurchaseListViewItem_TypeInfo, v5);
    byte_49F9CAD = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B64324(0LL);
    StonePurchaseListViewItemDraw__SetInput(v9, v7, isInput, v8);
  }
}


void __fastcall StonePurchaseListViewObject__SetItem(
        StonePurchaseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40419096((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall StonePurchaseListViewObject__SetupDisp(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  StonePurchaseListViewItemDraw_o *v9; // x0

  if ( (byte_49F9CB0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StonePurchaseListViewItem_TypeInfo, v3);
    byte_49F9CB0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(StonePurchaseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != StonePurchaseListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B64324(0LL);
    StonePurchaseListViewItemDraw__SetItem(v9, (StonePurchaseListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


System_String_o *__fastcall StonePurchaseListViewObject__ToString(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_49F9CBB & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewItemDraw_DispMode_TypeInfo, method);
    sub_1B640C8(&StringLiteral_117/*" "*/, v3);
    byte_49F9CBB = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)StonePurchaseListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D8DFEC(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_61386656(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
}


void __fastcall StonePurchaseListViewObject__add_callbackFunc(
        StonePurchaseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49F9CA8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F9CA8 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  StonePurchaseListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall StonePurchaseListViewObject__remove_callbackFunc(
        StonePurchaseListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StonePurchaseListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_49F9CA9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F9CA9 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
  StonePurchaseListViewObject__Awake(v11, v12);
}


void __fastcall StonePurchaseListViewObject___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F9CBD & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseListViewObject___c_TypeInfo, v1);
    byte_49F9CBD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(StonePurchaseListViewObject___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  StonePurchaseListViewObject___c_TypeInfo->static_fields->__9 = (struct StonePurchaseListViewObject___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)StonePurchaseListViewObject___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall StonePurchaseListViewObject___c___ctor(
        StonePurchaseListViewObject___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall StonePurchaseListViewObject___c___OnClickDetailBtn_b__20_0(
        StonePurchaseListViewObject___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F9CBE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F9CBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseStoneShopDetailDialog((CommonUI_o *)Instance, 0LL, 0LL);
}