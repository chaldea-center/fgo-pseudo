void __fastcall CombineListViewObject___ctor(CombineListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BCB344 & 1) == 0 )
  {
    sub_1C1ABD4(&ListViewObject_TypeInfo, method);
    byte_4BCB344 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall CombineListViewObject__Awake(CombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BCB334 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CombineListViewItemDraw___, method);
    byte_4BCB334 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C1AE30(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewItemDraw___);
  this->fields.itemDraw = (struct CombineListViewItemDraw_o *)Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


UnityEngine_GameObject_o *__fastcall CombineListViewObject__CreateDragObject(
        CombineListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4BCB337 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    byte_4BCB337 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL) )
  {
    sub_1C1AE30(DragObject, v4);
  }
  CombineListViewObject__Init_46093400((CombineListViewObject_o *)DragObject, 2, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventEnterMove(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  float v8; // s4
  float v9; // s3
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4BCB33E & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_6332/*"EventEnterMove2"*/, method);
    byte_4BCB33E = 1;
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
    || (v25 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        v8 = v25.fields.y + 1000.0,
        v9 = v25.fields.z + 0.0,
        v25.fields.y = v25.fields.x + 0.0,
        v25.fields.z = v8,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.0,
                                                    *(UnityEngine_Vector3_o *)&v25.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C1AE30(dragObject, method);
  }
  v10 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v10[3].monitor = gameObject;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v10[3].monitor, (int64_t)gameObject, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_6332/*"EventEnterMove2"*/;
  *(_QWORD *)&v10[3].fields.m_CachedPtr = StringLiteral_6332/*"EventEnterMove2"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v10[3].fields, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall CombineListViewObject__EventEnterMove2(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObject; // x21
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4BCB33F & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BCB33F = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v4, v5, v6, v7, v8, v9);
  CombineListViewObject__EventMoveEnd(this, v10);
}


void __fastcall CombineListViewObject__EventEnterStart(
        CombineListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4BCB33D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    sub_1C1ABD4(&StringLiteral_6331/*"EventEnterMove"*/, v5);
    byte_4BCB33D = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CombineListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CombineListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL )
  {
    sub_1C1AE30(dragObject, v13);
  }
  CombineListViewObject__Init_46093400((CombineListViewObject_o *)dragObject, 2, v15);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6331/*"EventEnterMove"*/,
    delay,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventIntoMove(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  float y; // s4
  float z; // s5
  float v10; // s3
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4BCB33B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_6345/*"EventIntoMove2"*/, method);
    byte_4BCB33B = 1;
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
    || (v26 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        y = v26.fields.y,
        z = v26.fields.z,
        v26.fields.y = v26.fields.x,
        v26.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v26.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C1AE30(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].monitor = gameObject;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v11[3].monitor, (int64_t)gameObject, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_6345/*"EventIntoMove2"*/;
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_6345/*"EventIntoMove2"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v11[3].fields, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall CombineListViewObject__EventIntoMove2(CombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4BCB33C & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BCB33C = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  CombineListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  CombineListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventIntoStart(
        CombineListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0

  if ( (byte_4BCB33A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    sub_1C1ABD4(&StringLiteral_6344/*"EventIntoMove"*/, v5);
    byte_4BCB33A = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CombineListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CombineListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL
    || (CombineListViewObject__Init_46093400((CombineListViewObject_o *)dragObject, 2, v16),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__TransformPoint_70819160(
                                           (UnityEngine_Transform_o *)dragObject,
                                           1000.0,
                                           0.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1C1AE30(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6344/*"EventIntoMove"*/,
    delay,
    0LL);
}


void __fastcall CombineListViewObject__EventMoveEnd(CombineListViewObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields._IsQuestStartMenuMode_k__BackingField = 0;
  *(_DWORD *)(&p_callbackFunc[-1].fields._IsNormalFlowQuest_k__BackingField + 3) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C1AB78(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventRetryMove(CombineListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dragObject; // x0
  UnityEngine_Transform_o *parent; // x20
  int v5; // s0
  float y; // s4
  float z; // s5
  float v10; // s3
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4BCB341 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_6364/*"EventRetryMove2"*/, method);
    byte_4BCB341 = 1;
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
    || (v26 = UnityEngine_Transform__InverseTransformPoint(parent, *(UnityEngine_Vector3_o *)&v5, 0LL),
        y = v26.fields.y,
        z = v26.fields.z,
        v26.fields.y = v26.fields.x,
        v26.fields.z = y,
        v10 = z,
        (dragObject = (UnityEngine_GameObject_o *)TweenPosition__Begin(
                                                    this->fields.dragObject,
                                                    1.5,
                                                    *(UnityEngine_Vector3_o *)&v26.fields.y,
                                                    0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C1AE30(dragObject, method);
  }
  v11 = dragObject;
  LODWORD(dragObject[1].monitor) = 3;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11[3].monitor = gameObject;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v11[3].monitor, (int64_t)gameObject, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_6364/*"EventRetryMove2"*/;
  *(_QWORD *)&v11[3].fields.m_CachedPtr = StringLiteral_6364/*"EventRetryMove2"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v11[3].fields, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall CombineListViewObject__EventRetryMove2(CombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *dragObject; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  if ( (byte_4BCB342 & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    byte_4BCB342 = 1;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  this->fields.dispMode = 2;
  CombineListViewObject__SetupDisp(this, v3);
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(dragObject, 0LL);
  this->fields.dragObject = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dragObject, 0LL, v5, v6, v7, v8, v9, v10);
  CombineListViewObject__EventMoveEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__EventRetryStart(
        CombineListViewObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_GameObject_o **p_dragObject; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObject; // x0
  const MethodInfo *v16; // x2
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0

  if ( (byte_4BCB340 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, method);
    sub_1C1ABD4(&StringLiteral_6363/*"EventRetryMove"*/, v5);
    byte_4BCB340 = 1;
  }
  this->fields.isBusy = 1;
  this->fields.dispMode = 0;
  CombineListViewObject__SetupDisp(this, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  v6 = (struct UnityEngine_GameObject_o *)((__int64 (__fastcall *)(CombineListViewObject_o *, Il2CppMethodPointer))this->klass->vtable._8_CreateDragObject.method)(
                                            this,
                                            this->klass->vtable._9_SetInput.methodPtr);
  this->fields.dragObject = v6;
  p_dragObject = &this->fields.dragObject;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dragObject, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  dragObject = this->fields.dragObject;
  if ( !dragObject
    || (dragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   dragObject,
                                                   (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___)) == 0LL
    || (CombineListViewObject__Init_46093400((CombineListViewObject_o *)dragObject, 2, v16),
        (dragObject = *p_dragObject) == 0LL)
    || (transform = UnityEngine_GameObject__get_transform(dragObject, 0LL),
        (dragObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__TransformPoint_70819160(
                                           (UnityEngine_Transform_o *)dragObject,
                                           0.0,
                                           600.0,
                                           0.0,
                                           0LL),
        !transform) )
  {
    sub_1C1AE30(dragObject, v14);
  }
  UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6363/*"EventRetryMove"*/,
    delay,
    0LL);
}


CombineListViewItem_o *__fastcall CombineListViewObject__GetItem(
        CombineListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4BCB336 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineListViewItem_TypeInfo, method);
    byte_4BCB336 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (CombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineListViewItem_TypeInfo )
    return (CombineListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init(
        CombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
  int32_t v12; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  PartyOrganizationUtility_o *p_callbackFunc; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int32_t v31; // w8
  PartyOrganizationUtility_c *klass; // x19

  if ( (byte_4BCB338 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4BCB338 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (CombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0LL);
  ((void (__fastcall *)(CombineListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v12 == 4,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C1AE30(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v31 = 1;
  switch ( v12 )
  {
    case 0:
    case 1:
    case 2:
      goto LABEL_13;
    case 4:
      v31 = 3;
      v12 = 2;
LABEL_13:
      this->fields.dispMode = v12;
      this->fields.state = v31;
      goto LABEL_14;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      CombineListViewObject__EventIntoStart(this, delay, v24);
      return;
    case 6:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CombineListViewObject__EventEnterStart(this, delay, v24);
      return;
    case 8:
      this->fields.dispMode = 2;
      this->fields.state = 2;
      CombineListViewObject__EventRetryStart(this, delay, v24);
      return;
    default:
LABEL_14:
      if ( !state || dispMode != this->fields.dispMode )
        CombineListViewObject__SetupDisp(this, v24);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1C1AB78(p_callbackFunc, 0LL, v25, v26, v27, v28, v29, v30);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


void __fastcall CombineListViewObject__InitItem(CombineListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init_46093400(
        CombineListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v4; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  CombineListViewObject__Init(this, initMode, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init_46094700(
        CombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  CombineListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewObject__Init_46094800(
        CombineListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v4; // s1

  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4BC2141 = 1;
  }
  CombineListViewObject__Init(this, initMode, callbackFunc, 0.0, *(UnityEngine_Vector3_o *)&v4, method);
}


void __fastcall CombineListViewObject__OnDestroy(CombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BCB335 & 1) == 0 )
  {
    sub_1C1ABD4(&NGUITools_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCB335 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
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
    sub_1C1AB78(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall CombineListViewObject__SetItem(
        CombineListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41974544((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall CombineListViewObject__SetItem_46096792(
        CombineListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall CombineListViewObject__SetupDisp(CombineListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  CombineListViewItemDraw_o *v10; // x0

  if ( (byte_4BCB339 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineListViewItem_TypeInfo, method);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v3);
    byte_4BCB339 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewItem_TypeInfo )
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
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C1AE30(0LL, v8);
    CombineListViewItemDraw__SetItem(v10, (CombineListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall CombineListViewObject__Start(CombineListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    CombineListViewObject__Init_46093400(this, 2, v2);
}


System_String_o *__fastcall CombineListViewObject__ToString(CombineListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_4BCB343 & 1) == 0 )
  {
    sub_1C1ABD4(&CombineListViewItemDraw_DispMode_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_117/*" "*/, v3);
    byte_4BCB343 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)CombineListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1DD9840(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_63051628(v6, (System_String_o *)StringLiteral_117/*" "*/, v7, 0LL);
}


void __fastcall CombineListViewObject__add_callbackFunc(
        CombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BCB332 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCB332 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  CombineListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CombineListViewObject__remove_callbackFunc(
        CombineListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CombineListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BCB333 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, value);
    byte_4BCB333 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  CombineListViewObject__Awake(v11, v12);
}