void __fastcall EventRankingListViewObject___ctor(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8EB0 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EB0 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventRankingListViewObject__Awake(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  char *dispObject; // x0
  struct EventRankingListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E8EA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42E8EA2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = (char *)this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct EventRankingListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)dispObject,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewItemDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.itemDraw,
          (System_Int32_array **)Component_srcLineSprite,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (dispObject = (char *)this->fields.itemDraw) == 0LL) )
  {
    sub_B5D69C(dispObject, v5);
  }
  *((_QWORD *)dispObject + 16) = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)(dispObject + 128),
    (System_Int32_array **)this,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventExitMove(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *dragObject; // x20
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *parent; // x20
  int v15; // s0
  UnityEngine_GameObject_o *v18; // x20
  ListViewObject_c *v19; // x0
  float v20; // s8
  float v21; // s10
  float v22; // s9
  UnityEngine_GameObject_o *v23; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E8EAC & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6239/*"EventExitMove2"*/, v8, v9, v10);
    byte_42E8EAC = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    EventRankingListViewObject__EventMoveEnd(this, v12);
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
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
    if ( !parent )
      goto LABEL_17;
    v38 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v15, 0LL);
    v18 = this->fields.dragObject;
    v19 = ListViewObject_TypeInfo;
    v20 = v38.fields.x + 1000.0;
    v21 = v38.fields.y + 0.0;
    v22 = v38.fields.z + 0.0;
    if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ListViewObject_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
      v19 = ListViewObject_TypeInfo;
    }
    v39.fields.x = v20;
    v39.fields.y = v21;
    v39.fields.z = v22;
    transform = (UnityEngine_GameObject_o *)TweenPosition__Begin(v18, v19->static_fields->BASE_MOVE_TIME, v39, 0LL);
    if ( !transform )
LABEL_17:
      sub_B5D69C(transform, v12);
    v23 = transform;
    LODWORD(transform[1].klass) = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23[3].klass = (UnityEngine_GameObject_c *)gameObject;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3], gameObject, v25, v26, v27, v28, v29, v30);
    v31 = (System_Int32_array **)StringLiteral_6239/*"EventExitMove2"*/;
    v23[3].monitor = (void *)StringLiteral_6239/*"EventExitMove2"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v23[3].monitor, v31, v32, v33, v34, v35, v36, v37);
  }
}


void __fastcall EventRankingListViewObject__EventExitMove2(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42E8EAD & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EAD = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v6, v7, v8, v9, v10, v11);
  EventRankingListViewObject__EventMoveEnd(this, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventExitStart(
        EventRankingListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct UnityEngine_GameObject_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8EAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_6238/*"EventExitMove"*/, v10, v11, v12);
    byte_42E8EAB = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v13 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      dragObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)dragObject & 1) != 0 )
  {
    EventRankingListViewObject__EventMoveEnd(this, v20);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_11:
    sub_B5D69C(dragObject, v20);
  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(
    (EventRankingListViewObject_o *)Component_srcLineSprite,
    2,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v23);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6238/*"EventExitMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventIntoMove(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v10; // s0
  UnityEngine_GameObject_o *v13; // x20
  float x; // s8
  float y; // s9
  ListViewObject_c *v16; // x0
  float z; // s10
  UnityEngine_GameObject_o *v18; // x20
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42E8EA9 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6249/*"EventIntoMove2"*/, v5, v6, v7);
    byte_42E8EA9 = 1;
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
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)dragObject, 0LL);
  if ( !parent )
    goto LABEL_12;
  v33 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v10, 0LL);
  v13 = this->fields.dragObject;
  x = v33.fields.x;
  y = v33.fields.y;
  v16 = ListViewObject_TypeInfo;
  z = v33.fields.z;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
    v16 = ListViewObject_TypeInfo;
  }
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(v13, v16->static_fields->BASE_MOVE_TIME, v34, 0LL);
  if ( !dragObject )
LABEL_12:
    sub_B5D69C(dragObject, method);
  v18 = dragObject;
  LODWORD(dragObject[1].klass) = 3;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18[3].klass = (UnityEngine_GameObject_c *)gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3], gameObject, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_6249/*"EventIntoMove2"*/;
  v18[3].monitor = (void *)StringLiteral_6249/*"EventIntoMove2"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v18[3].monitor, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall EventRankingListViewObject__EventIntoMove2(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  UnityEngine_Object_o *dragObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_42E8EAA & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EAA = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  EventRankingListViewObject__SetupDisp(this, v5);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dragObject, 0LL, v7, v8, v9, v10, v11, v12);
  EventRankingListViewObject__EventMoveEnd(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__EventIntoStart(
        EventRankingListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  EventRankingListViewObject_o *v20; // x21
  const MethodInfo *v21; // x3
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8EA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&StringLiteral_6248/*"EventIntoMove"*/, v7, v8, v9);
    byte_42E8EA8 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  EventRankingListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v10 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventRankingListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                             this,
                                             this->klass->vtable._9_SetInput.methodPtr);
  p_dragObject = &this->fields.dragObject;
  this->fields.dragObject = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dragObject,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  dragObject = this->fields.dragObject;
  if ( !dragObject )
    goto LABEL_9;
  dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             dragObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRankingListViewObject___);
  if ( !dragObject
    || (v20 = (EventRankingListViewObject_o *)dragObject,
        zero = UnityEngine_Vector3__get_zero(0LL),
        EventRankingListViewObject__Init(v20, 2, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v21),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__TransformPoint_35744104(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
LABEL_9:
    sub_B5D69C(dragObject, v18);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6248/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall EventRankingListViewObject__EventMoveEnd(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.classBoardSkillObj) = 0;
  HIDWORD(p_callbackFunc[-1].fields.classBoardSkillObj) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


EventRankingListViewItem_o *__fastcall EventRankingListViewObject__GetItem(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E8EA4 & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EA4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventRankingListViewItem_TypeInfo )
    return (EventRankingListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventRankingListViewObject__Init(
        EventRankingListViewObject_o *this,
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
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w9
  int32_t v32; // w8
  System_Action_o *klass; // x19

  if ( (byte_42E8EA6 & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42E8EA6 = 1;
  }
  linkItem = this->fields.linkItem;
  state = this->fields.state;
  dispMode = this->fields.dispMode;
  if ( linkItem
    && (v13 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v13) )
  {
    if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v13 - 1] == EventRankingListViewItem_TypeInfo )
      v14 = initMode;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v14 != 0, 0LL);
  ((void (__fastcall *)(EventRankingListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v14 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v31 = 1;
  v32 = v14;
  switch ( v14 )
  {
    case 0:
    case 2:
      goto LABEL_16;
    case 1:
      v32 = v14;
      goto LABEL_15;
    case 3:
      v32 = 2;
LABEL_15:
      v31 = v14;
LABEL_16:
      this->fields.state = v31;
      this->fields.dispMode = v32;
      goto LABEL_17;
    case 4:
      *(_QWORD *)&this->fields.state = 2LL;
      EventRankingListViewObject__EventIntoStart(this, delay, v24);
      return;
    default:
LABEL_17:
      if ( !state || dispMode != this->fields.dispMode )
        EventRankingListViewObject__SetupDisp(this, v24);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B5D560(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


void __fastcall EventRankingListViewObject__InitItem(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_25808352(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_25809256(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingListViewObject__Init_25809788(
        EventRankingListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  EventRankingListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
}


void __fastcall EventRankingListViewObject__OnChangeAlphaAnim(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewManager_o *manager; // x8
  __int64 v9; // x11
  struct ListViewManager_o *v10; // x1
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42E8EAE & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&EventRankingListViewManager_TypeInfo, v5, v6, v7);
    byte_42E8EAE = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = this->fields.manager;
    if ( manager
      && (v9 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == EventRankingListViewManager_TypeInfo )
        v10 = this->fields.manager;
      else
        v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_B5D69C(0LL, v10);
    EventRankingListViewItemDraw__ChangeNextRewardIcon(itemDraw, (EventRankingListViewManager_o *)v10, v2);
  }
}


void __fastcall EventRankingListViewObject__SetInput(
        EventRankingListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E8EA5 & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, isInput, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8EA5 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( v10 && !this->fields.itemDraw )
    sub_B5D69C(v10, v11);
}


void __fastcall EventRankingListViewObject__SetItem(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall EventRankingListViewObject__SetItem_25812444(
        EventRankingListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall EventRankingListViewObject__SetupDisp(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v12; // x10
  bool v13; // w1
  UnityEngine_Object_o *itemDraw; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ListViewManager_o *manager; // x8
  __int64 v22; // x11
  struct ListViewManager_o *v23; // x1
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  EventRankingListViewItemDraw_o *v26; // x0

  if ( (byte_42E8EA7 & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventRankingListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E8EA7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v12 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == EventRankingListViewItem_TypeInfo )
    {
      v13 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v13 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v13, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    manager = this->fields.manager;
    if ( manager
      && (v22 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v22) )
    {
      if ( (EventRankingListViewManager_c *)manager->klass->_2.typeHierarchy[v22 - 1] == EventRankingListViewManager_TypeInfo )
        v23 = this->fields.manager;
      else
        v23 = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    this->fields.manager = v23;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.manager,
      (System_Int32_array **)v23,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v26 = this->fields.itemDraw;
    if ( !v26 )
      sub_B5D69C(0LL, v24);
    EventRankingListViewItemDraw__SetItem(v26, (EventRankingListViewItem_o *)linkItem, this->fields.dispMode, v25);
  }
}


System_String_o *__fastcall EventRankingListViewObject__ToString(
        EventRankingListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_o *v11; // x21
  int32_t *v12; // x0
  __int64 v13; // x9
  float z; // w10
  System_String_o *v15; // x0
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  float v18; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8EAF & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItemDraw_DispMode_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    byte_42E8EAF = 1;
  }
  v18 = 0.0;
  v17 = 0LL;
  v8 = j_il2cpp_value_box_0(EventRankingListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v10 = v8;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v12 = (int32_t *)j_il2cpp_object_unbox_0(v10);
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v12;
  v17 = v13;
  v18 = z;
  v15 = UnityEngine_Vector3__ToString(v19, (const MethodInfo *)&v17);
  return System_String__Concat_44580072(v11, (System_String_o *)StringLiteral_81/*" "*/, v15, 0LL);
}


void __fastcall EventRankingListViewObject__Update(EventRankingListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *manager; // x20
  const MethodInfo *v12; // x4
  struct ListViewItem_o *linkItem; // x8
  __int64 v14; // x11
  struct ListViewItem_o *v15; // x1
  struct ListViewManager_o *v16; // x8
  __int64 v17; // x11
  struct ListViewManager_o *v18; // x3
  EventRankingListViewItemDraw_o *itemDraw; // x0

  if ( (byte_42E8EA3 & 1) == 0 )
  {
    sub_B5D5C4(&EventRankingListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventRankingListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E8EA3 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Object_o *)this->fields.manager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) )
    {
      linkItem = this->fields.linkItem;
      if ( linkItem
        && (v14 = *(&EventRankingListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
      {
        if ( (EventRankingListViewItem_c *)linkItem->klass->_2.typeHierarchy[v14 - 1] == EventRankingListViewItem_TypeInfo )
          v15 = this->fields.linkItem;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      v16 = this->fields.manager;
      if ( v16
        && (v17 = *(&EventRankingListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
      {
        if ( (EventRankingListViewManager_c *)v16->klass->_2.typeHierarchy[v17 - 1] == EventRankingListViewManager_TypeInfo )
          v18 = this->fields.manager;
        else
          v18 = 0LL;
      }
      else
      {
        v18 = 0LL;
      }
      itemDraw = this->fields.itemDraw;
      if ( !itemDraw )
        sub_B5D69C(0LL, v15);
      EventRankingListViewItemDraw__UpdateItem(
        itemDraw,
        (EventRankingListViewItem_o *)v15,
        this->fields.dispMode,
        (EventRankingListViewManager_o *)v18,
        v12);
    }
  }
}


void __fastcall EventRankingListViewObject__add_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventRankingListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E8EA0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8EA0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventRankingListViewObject_o *)sub_B5D990(v9);
  EventRankingListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall EventRankingListViewObject__remove_callbackFunc(
        EventRankingListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EventRankingListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E8EA1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8EA1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (EventRankingListViewObject_o *)sub_B5D990(v9);
  EventRankingListViewObject__Awake(v12, v13);
}