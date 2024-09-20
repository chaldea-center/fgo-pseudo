void __fastcall StonePurchaseListViewObject___ctor(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A586C6 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A586C6 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall StonePurchaseListViewObject__Awake(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A586B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___);
    byte_4A586B4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B8880C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewItemDraw___);
  this->fields.itemDraw = (struct StonePurchaseListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


UnityEngine_GameObject_o *__fastcall StonePurchaseListViewObject__CreateDragObject(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A586B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    byte_4A586B8 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0LL) )
  {
    sub_1B8880C(DragObject, v4);
  }
  StonePurchaseListViewObject__Init_34686052((StonePurchaseListViewObject_o *)DragObject, 2, v6);
  return v5;
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

  if ( (byte_4A586C0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6175/*"EventEnterMove2"*/);
    byte_4A586C0 = 1;
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
    sub_1B8880C(dragObject, method);
  }
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[3].monitor = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10[3].monitor, (int32_t)gameObject, v12, v13);
  v14 = StringLiteral_6175/*"EventEnterMove2"*/;
  *(_QWORD *)&v10[3].fields.m_CachedPtr = StringLiteral_6175/*"EventEnterMove2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10[3].fields, v14, v15, v16);
}


void __fastcall StonePurchaseListViewObject__EventEnterMove2(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_4A586C1 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A586C1 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v4, v5);
  StonePurchaseListViewObject__EventMoveEnd(this, v6);
}


void __fastcall StonePurchaseListViewObject__EventEnterStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4A586BF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_1B885B0(&StringLiteral_6174/*"EventEnterMove"*/);
    byte_4A586BF = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0LL )
  {
    sub_1B8880C(dragObject, v8);
  }
  StonePurchaseListViewObject__Init_34686052((StonePurchaseListViewObject_o *)dragObject, 2, v10);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6174/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__EventExitMove(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v7; // s0
  float v10; // s4
  float v11; // s3
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4A586C3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6177/*"EventExitMove2"*/);
    byte_4A586C3 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v4);
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
      || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL),
          !parent)
      || (v19 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v7, 0LL),
          v10 = v19.fields.y + 0.0,
          v11 = v19.fields.z + 0.0,
          v19.fields.y = v19.fields.x + 1000.0,
          v19.fields.z = v10,
          (transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                     this->fields.dragObject,
                                                     1.0,
                                                     *(UnityEngine_Vector3_o *)&v19.fields.y,
                                                     0LL)) == 0LL) )
    {
LABEL_13:
      sub_1B8880C(transform, v4);
    }
    v12 = transform;
    LODWORD(transform[1].monitor) = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12[3].monitor = gameObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v12[3].monitor, (int32_t)gameObject, v14, v15);
    v16 = StringLiteral_6177/*"EventExitMove2"*/;
    *(_QWORD *)&v12[3].fields.m_CachedPtr = StringLiteral_6177/*"EventExitMove2"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v12[3].fields, v16, v17, v18);
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

  if ( (byte_4A586C4 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A586C4 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v4, v5);
  StonePurchaseListViewObject__EventMoveEnd(this, v6);
}


void __fastcall StonePurchaseListViewObject__EventExitStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  Il2CppObject *Component_object; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4A586C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6176/*"EventExitMove"*/);
    byte_4A586C2 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v5, v6, v7);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dragObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    StonePurchaseListViewObject__EventMoveEnd(this, v8);
    return;
  }
  if ( !Component_object )
LABEL_10:
    sub_1B8880C(dragObject, v8);
  StonePurchaseListViewObject__Init_34686052((StonePurchaseListViewObject_o *)Component_object, 2, v11);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6176/*"EventExitMove"*/,
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

  if ( (byte_4A586BD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6187/*"EventIntoMove2"*/);
    byte_4A586BD = 1;
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
    sub_1B8880C(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].monitor = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[3].monitor, (int32_t)gameObject, v13, v14);
  v15 = StringLiteral_6187/*"EventIntoMove2"*/;
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_6187/*"EventIntoMove2"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11[3].fields, v15, v16, v17);
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

  if ( (byte_4A586BE & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    byte_4A586BE = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  StonePurchaseListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, 0, v5, v6);
  StonePurchaseListViewObject__EventMoveEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__EventIntoStart(
        StonePurchaseListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *v5; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0

  if ( (byte_4A586BC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___);
    sub_1B885B0(&StringLiteral_6186/*"EventIntoMove"*/);
    byte_4A586BC = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  StonePurchaseListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v5 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(StonePurchaseListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v5;
  p_dragObject = &this->fields.dragObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dragObject, (int32_t)v5, v7, v8);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_StonePurchaseListViewObject___)) == 0LL
    || (StonePurchaseListViewObject__Init_34686052((StonePurchaseListViewObject_o *)dragObject, 2, v11),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__TransformPoint_69483968(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1B8880C(dragObject, v9);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6186/*"EventIntoMove"*/,
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
    sub_1B88554(p_callbackFunc, 0, v2, v3);
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

  if ( (byte_4A586B6 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewItem_TypeInfo);
    byte_4A586B6 = 1;
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
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4A586B9 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewItem_TypeInfo);
    byte_4A586B9 = 1;
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
    sub_1B8880C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  if ( (unsigned int)v11 <= 3 )
  {
    v22 = dword_BB3DA0[v11];
    this->fields.dispMode = *((_DWORD *)&xmmword_BB49C0 + v11);
    this->fields.state = v22;
  }
  if ( !state || dispMode != this->fields.dispMode )
    StonePurchaseListViewObject__SetupDisp(this, v19);
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v20, v21);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__Init_34686052(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__Init_34687348(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StonePurchaseListViewObject__Init_34687432(
        StonePurchaseListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  StonePurchaseListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall StonePurchaseListViewObject__OnClickDetailBtn(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  StonePurchaseListViewItem_c *v7; // x10
  struct ListViewItem_o *v8; // x20
  void *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x19
  BankShopEntity_o *klass; // x20
  System_Action_o *v13; // x21
  Il2CppObject *v14; // x22
  struct StonePurchaseListViewObject___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A586BB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StonePurchaseListViewItem_TypeInfo);
    sub_1B885B0(&Method_StonePurchaseListViewObject_OnClickDetailBtn__);
    sub_1B885B0(&Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__);
    sub_1B885B0(&StonePurchaseListViewObject___c_TypeInfo);
    byte_4A586BB = 1;
  }
  v3 = Method_StonePurchaseListViewObject_OnClickDetailBtn__;
  if ( (*((_BYTE *)Method_StonePurchaseListViewObject_OnClickDetailBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_StonePurchaseListViewObject_OnClickDetailBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(StonePurchaseListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      v7 = (StonePurchaseListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1];
      v8 = v7 == StonePurchaseListViewItem_TypeInfo ? this->fields.linkItem : 0LL;
      if ( v7 == StonePurchaseListViewItem_TypeInfo )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v8 )
          goto LABEL_21;
        v11 = (CommonUI_o *)Instance;
        klass = (BankShopEntity_o *)v8[1].klass;
        Instance = StonePurchaseListViewObject___c_TypeInfo;
        if ( !StonePurchaseListViewObject___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(StonePurchaseListViewObject___c_TypeInfo);
          Instance = StonePurchaseListViewObject___c_TypeInfo;
        }
        v13 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
        if ( !v13 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = StonePurchaseListViewObject___c_TypeInfo;
          }
          v14 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(v13, v14, Method_StonePurchaseListViewObject___c__OnClickDetailBtn_b__20_0__, 0LL);
          static_fields = StonePurchaseListViewObject___c_TypeInfo->static_fields;
          static_fields->__9__20_0 = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)v13, v16, v17);
        }
        if ( !v11 )
LABEL_21:
          sub_1B8880C(Instance, v10);
        CommonUI__OpenStoneShopDetailDialog(v11, klass, v13, 0LL);
      }
    }
  }
}


void __fastcall StonePurchaseListViewObject__OnDestroy(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A586B5 & 1) == 0 )
  {
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A586B5 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1B88554(p_dragObject, 0, v7, v8);
  }
}


void __fastcall StonePurchaseListViewObject__SetInput(
        StonePurchaseListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  StonePurchaseListViewItem_o *v6; // x1
  const MethodInfo *v7; // x3
  StonePurchaseListViewItemDraw_o *v8; // x0

  if ( (byte_4A586B7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StonePurchaseListViewItem_TypeInfo);
    byte_4A586B7 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_1B8880C(0LL, v6);
    StonePurchaseListViewItemDraw__SetInput(v8, v6, isInput, v7);
  }
}


void __fastcall StonePurchaseListViewObject__SetItem(
        StonePurchaseListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall StonePurchaseListViewObject__SetupDisp(StonePurchaseListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  StonePurchaseListViewItemDraw_o *v9; // x0

  if ( (byte_4A586BA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StonePurchaseListViewItem_TypeInfo);
    byte_4A586BA = 1;
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
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v7);
    StonePurchaseListViewItemDraw__SetItem(v9, (StonePurchaseListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


System_String_o *__fastcall StonePurchaseListViewObject__ToString(
        StonePurchaseListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4A586C5 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewItemDraw_DispMode_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    byte_4A586C5 = 1;
  }
  v11 = 0.0;
  v10 = 0LL;
  v8.klass = (System_Enum_c *)StonePurchaseListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0LL);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1DC2B8C(&v10, 0LL, 0LL, 0LL);
  return System_String__Concat_61718292(v5, (System_String_o *)StringLiteral_117/*" "*/, v6, 0LL);
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

  if ( (byte_4A586B2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A586B2 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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

  if ( (byte_4A586B3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A586B3 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  StonePurchaseListViewObject__Awake(v11, v12);
}


void __fastcall StonePurchaseListViewObject___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A586C7 & 1) == 0 )
  {
    sub_1B885B0(&StonePurchaseListViewObject___c_TypeInfo);
    byte_4A586C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(StonePurchaseListViewObject___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  StonePurchaseListViewObject___c_TypeInfo->static_fields->__9 = (struct StonePurchaseListViewObject___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)StonePurchaseListViewObject___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  __int64 v3; // x1

  if ( (byte_4A586C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A586C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseStoneShopDetailDialog((CommonUI_o *)Instance, 0LL, 0LL);
}