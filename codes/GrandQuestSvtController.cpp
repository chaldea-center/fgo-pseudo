void __fastcall GrandQuestSvtController___ctor(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v5; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4B17351 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureR___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_UIStandFigureR__TypeInfo, v3);
    byte_4B17351 = 1;
  }
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16191 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.RootCenterPosition.fields.x = xmmword_BE27C0;
  *(_QWORD *)&this->fields.RootLeftPosition.fields.y = 1133510656LL;
  *(_QWORD *)&this->fields.StandBasePosition.fields.x = v5;
  this->fields.StandBasePosition.fields.z = z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIStandFigureR__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
  this->fields.listFigureR = (struct System_Collections_Generic_List_UIStandFigureR__o *)v7;
  sub_1BCAF9C(&this->fields.listFigureR);
  this->fields.currentWarId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__ChangeServant(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  GrandQuestSvtController___c__DisplayClass23_0_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_4B1734A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass23_0__ChangeServant_b__0__, v7);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass23_0_TypeInfo, v8);
    byte_4B1734A = 1;
  }
  v9 = (GrandQuestSvtController___c__DisplayClass23_0_o *)sub_1BCB244(GrandQuestSvtController___c__DisplayClass23_0_TypeInfo);
  GrandQuestSvtController___c__DisplayClass23_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  v9->fields.__4__this = this;
  sub_1BCAF9C(&v9->fields);
  v9->fields.callback = callback;
  sub_1BCAF9C(&v9->fields.callback);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(v9->fields.callback, 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestSvtController___c__DisplayClass23_0__ChangeServant_b__0__,
      0LL);
    GrandQuestSvtController__SetServant(this, warId, v12, v13);
  }
}


void __fastcall GrandQuestSvtController__ChangeViewType(
        GrandQuestSvtController_o *this,
        int32_t viewType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( this->fields.currentViewType == viewType )
    ActionExtensions__Call(callback, 0LL);
  else
    GrandQuestSvtController__SetServantPosition(this, 0, viewType, callback, v4);
}


void __fastcall GrandQuestSvtController__ClearFigure(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listFigureR; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  struct System_Collections_Generic_List_UIStandFigureR__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1734F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureR__Clear__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1734F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    listFigureR,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v9 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1BCB254(v9, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCB254(0LL, v13);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v14, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  v15 = this->fields.listFigureR;
  if ( !v15 )
LABEL_17:
    sub_1BCB254(listFigureR, method);
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
GrandQuestSvtController_FigureEasing_o *__fastcall GrandQuestSvtController__CreateDefaultFigureEasing(
        GrandQuestSvtController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  struct GrandQuestSvtController_o *svtController; // x0
  struct GrandQuestSvtController_o *v7; // x1
  struct GrandQuestSvtController_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x2
  int v11; // s0
  int v12; // s1
  int v13; // s2
  UnityEngine_GameObject_o *v14; // x0
  int v15; // s0
  int v16; // s1
  int v17; // s2
  int m_CancellationTokenSource; // w8
  int v19; // w8
  GrandQuestSvtController_FigureEasing_o *result; // x0

  if ( (byte_4B1734D & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestSvtController_FigureEasing_TypeInfo, method);
    sub_1BCAFF8(&float___TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Vector3___TypeInfo, v4);
    byte_4B1734D = 1;
  }
  v5 = sub_1BCB244(GrandQuestSvtController_FigureEasing_TypeInfo);
  GrandQuestSvtController_FigureEasing___ctor((GrandQuestSvtController_FigureEasing_o *)v5, 0LL);
  svtController = (struct GrandQuestSvtController_o *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !this->fields.svtController )
    goto LABEL_16;
  v8 = svtController;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtController, 0LL);
  *(UnityEngine_Vector3_o *)&v11 = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  if ( !v8 )
    goto LABEL_16;
  if ( !LODWORD(v8->fields.m_CancellationTokenSource) )
    goto LABEL_17;
  LODWORD(v8->fields.svtController) = v11;
  HIDWORD(v8->fields.svtController) = v12;
  LODWORD(v8->fields.svtFigureRoot) = v13;
  svtController = this->fields.svtController;
  if ( !svtController )
    goto LABEL_16;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtController, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = GameObjectExtensions__GetLocalPosition(v14, 0LL);
  if ( LODWORD(v8->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_17;
  HIDWORD(v8->fields.svtFigureRoot) = v15;
  LODWORD(v8->fields.svtFigureScaleRoot) = v16;
  HIDWORD(v8->fields.svtFigureScaleRoot) = v17;
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = v8;
  sub_1BCAF9C(v5 + 16);
  svtController = (struct GrandQuestSvtController_o *)sub_1BCB0A0(float___TypeInfo, 2LL);
  if ( !svtController )
    goto LABEL_16;
  m_CancellationTokenSource = (int)svtController->fields.m_CancellationTokenSource;
  v7 = svtController;
  if ( !m_CancellationTokenSource
    || (LODWORD(svtController->fields.svtController) = 1065353216, m_CancellationTokenSource == 1) )
  {
LABEL_17:
    sub_1BCB25C(svtController, v7, v10);
  }
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v5 + 24) = svtController;
  sub_1BCAF9C(v5 + 24);
  svtController = (struct GrandQuestSvtController_o *)sub_1BCB0A0(float___TypeInfo, 2LL);
  if ( !svtController )
LABEL_16:
    sub_1BCB254(svtController, v7);
  v19 = (int)svtController->fields.m_CancellationTokenSource;
  v7 = svtController;
  if ( !v19 )
    goto LABEL_17;
  LODWORD(svtController->fields.svtController) = 1065353216;
  if ( v19 == 1 )
    goto LABEL_17;
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v5 + 32) = svtController;
  sub_1BCAF9C(v5 + 32);
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_DWORD *)(v5 + 56) = 0;
  result = (GrandQuestSvtController_FigureEasing_o *)v5;
  *(_QWORD *)(v5 + 40) = 1056964608LL;
  return result;
}


void __fastcall GrandQuestSvtController__ExecFigureEasing(
        GrandQuestSvtController_o *this,
        GrandQuestSvtController_FigureEasing_o *figureEasing,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x8
  EasingObject_o *v16; // x20
  float v17; // s8
  System_Action_o *v18; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x8

  if ( (byte_4B1734E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, figureEasing);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass27_0__ExecFigureEasing_b__0__, v8);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass27_0__ExecFigureEasing_b__1__, v9);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass27_0_TypeInfo, v10);
    byte_4B1734E = 1;
  }
  v11 = sub_1BCB244(GrandQuestSvtController___c__DisplayClass27_0_TypeInfo);
  GrandQuestSvtController___c__DisplayClass27_0___ctor((GrandQuestSvtController___c__DisplayClass27_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = figureEasing;
  sub_1BCAF9C(v11 + 24);
  *(_QWORD *)(v11 + 32) = this;
  sub_1BCAF9C(v11 + 32);
  *(_QWORD *)(v11 + 48) = callback;
  sub_1BCAF9C(v11 + 48);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v11 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                            gameObject,
                            (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v12 = sub_1BCAF9C(v11 + 16);
  *(_DWORD *)(v11 + 40) = 1136623616;
  v15 = *(_QWORD *)(v11 + 24);
  if ( !v15
    || (v16 = *(EasingObject_o **)(v11 + 16),
        v17 = *(float *)(v15 + 40),
        v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_GrandQuestSvtController___c__DisplayClass27_0__ExecFigureEasing_b__0__,
          0LL),
        v19 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v11,
          Method_GrandQuestSvtController___c__DisplayClass27_0__ExecFigureEasing_b__1__,
          0LL),
        (v20 = *(_QWORD *)(v11 + 24)) == 0)
    || !v16 )
  {
LABEL_8:
    sub_1BCB254(v12, v13);
  }
  EasingObject__Play_48249532(v16, 0.0, 1.0, v17, v18, v19, *(float *)(v20 + 44), 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__FadeIn(
        GrandQuestSvtController_o *this,
        bool isStartUp,
        bool immediately,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestSvtController_FigureEasing_o *DefaultFigureEasing; // x23
  struct System_Single_array *v10; // x0
  struct System_Single_array *v11; // x1
  __int64 v12; // x2
  il2cpp_array_size_t max_length; // w8
  const MethodInfo *v14; // x3
  float v15; // s0
  float v16; // s1

  if ( (byte_4B1734C & 1) == 0 )
  {
    sub_1BCAFF8(&float___TypeInfo, isStartUp);
    byte_4B1734C = 1;
  }
  DefaultFigureEasing = GrandQuestSvtController__CreateDefaultFigureEasing(this, (const MethodInfo *)isStartUp);
  v10 = (struct System_Single_array *)sub_1BCB0A0(float___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_16;
  v11 = v10;
  if ( v10->max_length <= 1 )
    goto LABEL_17;
  v10->m_Items[2] = 1.0;
  if ( !DefaultFigureEasing
    || (DefaultFigureEasing->fields.alpha = v10,
        sub_1BCAF9C(&DefaultFigureEasing->fields.alpha),
        (v10 = (struct System_Single_array *)sub_1BCB0A0(float___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_16:
    sub_1BCB254(v10, v11);
  }
  max_length = v10->max_length;
  v11 = v10;
  if ( !max_length || (v10->m_Items[1] = 1.4, max_length == 1) )
LABEL_17:
    sub_1BCB25C(v10, v11, v12);
  v10->m_Items[2] = 1.0;
  DefaultFigureEasing->fields.scale = v10;
  sub_1BCAF9C(&DefaultFigureEasing->fields.scale);
  v15 = 0.3;
  v16 = 1.2;
  if ( immediately )
    v15 = 0.0;
  if ( immediately )
    v16 = 0.0;
  if ( !isStartUp )
    v15 = 0.0;
  DefaultFigureEasing->fields.easingTime = v16;
  DefaultFigureEasing->fields.delay = v15;
  *(_QWORD *)&DefaultFigureEasing->fields.easingTypeAlpha = 0xB0000000BLL;
  GrandQuestSvtController__ExecFigureEasing(this, DefaultFigureEasing, callback, v14);
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall GrandQuestSvtController__GetTaskOfChangeServant(
        GrandQuestSvtController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  GrandQuestSvtController___c__DisplayClass22_0_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  GrandQuestSvtController___c__DisplayClass22_1_o *v17; // x20
  System_Func_bool__o *v18; // x21
  SchedulerTaskWaitWhile_o *v19; // x19
  SchedulerTaskBase_TaskCallback_o *v20; // x0
  __int64 *v21; // x8
  System_Func_bool__o *v22; // x21
  struct SchedulerTaskBase_TaskCallback_o *v23; // x21

  if ( (byte_4B17349 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass22_0_TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__, v8);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__, v9);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass22_1_TypeInfo, v10);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__, v11);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__, v12);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass22_2_TypeInfo, v13);
    byte_4B17349 = 1;
  }
  v14 = (GrandQuestSvtController___c__DisplayClass22_0_o *)sub_1BCB244(GrandQuestSvtController___c__DisplayClass22_0_TypeInfo);
  GrandQuestSvtController___c__DisplayClass22_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  v14->fields.__4__this = this;
  sub_1BCAF9C(&v14->fields);
  v14->fields.warId = warId;
  if ( this->fields.currentWarId == warId )
  {
    v17 = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_1BCB244(GrandQuestSvtController___c__DisplayClass22_1_TypeInfo);
    GrandQuestSvtController___c__DisplayClass22_1___ctor(v17, 0LL);
    if ( !v17 )
      goto LABEL_11;
    v17->fields.CS___8__locals1 = v14;
    sub_1BCAF9C(&v17->fields.CS___8__locals1);
    v17->fields.isMoving = 1;
    v18 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v18,
      (Il2CppObject *)v17,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__,
      0LL);
    v19 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v19, v18, 0LL);
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
    v21 = &Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__;
  }
  else
  {
    v17 = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_1BCB244(GrandQuestSvtController___c__DisplayClass22_2_TypeInfo);
    GrandQuestSvtController___c__DisplayClass22_2___ctor((GrandQuestSvtController___c__DisplayClass22_2_o *)v17, 0LL);
    if ( !v17 )
      goto LABEL_11;
    v17->fields.CS___8__locals1 = v14;
    sub_1BCAF9C(&v17->fields.CS___8__locals1);
    v17->fields.isMoving = 1;
    v22 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v22,
      (Il2CppObject *)v17,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__,
      0LL);
    v19 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v19, v22, 0LL);
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
    v21 = &Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__;
  }
  v23 = v20;
  SchedulerTaskBase_TaskCallback___ctor(v20, (Il2CppObject *)v17, *v21, 0LL);
  if ( !v19 )
LABEL_11:
    sub_1BCB254(v15, v16);
  v19->fields.StartCallback = v23;
  sub_1BCAF9C(&v19->fields.StartCallback);
  return (SchedulerTaskBase_o *)v19;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall GrandQuestSvtController__GetTaskOfMoveServant(
        GrandQuestSvtController_o *this,
        int32_t viewType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  GrandQuestSvtController___c__DisplayClass19_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_bool__o *v13; // x20
  SchedulerTaskWaitWhile_o *v14; // x19
  SchedulerTaskBase_TaskCallback_o *v15; // x20

  if ( (byte_4B17347 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, *(_QWORD *)&viewType);
    sub_1BCAFF8(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__, v7);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__, v8);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass19_0_TypeInfo, v9);
    byte_4B17347 = 1;
  }
  v10 = (GrandQuestSvtController___c__DisplayClass19_0_o *)sub_1BCB244(GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
  GrandQuestSvtController___c__DisplayClass19_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  v10->fields.__4__this = this;
  sub_1BCAF9C(&v10->fields.__4__this);
  v10->fields.viewType = viewType;
  v10->fields.isMoving = 1;
  v13 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__,
    0LL);
  v14 = (SchedulerTaskWaitWhile_o *)sub_1BCB244(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v14, v13, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__,
    0LL);
  if ( !v14 )
LABEL_6:
    sub_1BCB254(v11, v12);
  v14->fields.StartCallback = v15;
  sub_1BCAF9C(&v14->fields.StartCallback);
  return (SchedulerTaskBase_o *)v14;
}


void __fastcall GrandQuestSvtController__Init(
        GrandQuestSvtController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        const MethodInfo *method)
{
  GrandQuestSvtController_o *v3; // x19
  const MethodInfo *v5; // x1

  if ( !this->fields.initialized )
  {
    v3 = this;
    this->fields.currentViewType = 0;
    this->fields.currentWarId = -1;
    this->fields.blankEarthSpotEntity = 0LL;
    sub_1BCAF9C(&this->fields.blankEarthSpotEntity);
    GrandQuestSvtController__ClearFigure(v3, v5);
    v3->fields.rootComponent = grandQuestRoot;
    v3 = (GrandQuestSvtController_o *)((char *)v3 + 56);
    sub_1BCAF9C(v3);
    LOBYTE(v3->fields.RootCenterPosition.fields.x) = 1;
  }
}


void __fastcall GrandQuestSvtController__Quit(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.currentViewType = 0;
  this->fields.currentWarId = -1;
  this->fields.blankEarthSpotEntity = 0LL;
  sub_1BCAF9C(&this->fields.blankEarthSpotEntity);
  GrandQuestSvtController__ClearFigure(this, v3);
  this->fields.initialized = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__Resume(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  GrandQuestSvtController___c__DisplayClass18_0_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_4B17346 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__0__, v7);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass18_0_TypeInfo, v8);
    byte_4B17346 = 1;
  }
  v9 = (GrandQuestSvtController___c__DisplayClass18_0_o *)sub_1BCB244(GrandQuestSvtController___c__DisplayClass18_0_TypeInfo);
  GrandQuestSvtController___c__DisplayClass18_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  v9->fields.__4__this = this;
  sub_1BCAF9C(&v9->fields);
  v9->fields.callback = callback;
  sub_1BCAF9C(&v9->fields.callback);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(v9->fields.callback, 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__0__,
      0LL);
    GrandQuestSvtController__SetServant(this, warId, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__SetDispServant(
        GrandQuestSvtController_o *this,
        bool disp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listFigureR; // x0
  bool v9; // w19
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B17350 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, disp);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__, v7);
    byte_4B17350 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    sub_1BCB254(0LL, disp);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    listFigureR,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v9 = disp;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCB254(0LL, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCB254(0LL, v12);
    UnityEngine_GameObject__SetActive(gameObject, v9, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__SetServant(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BlankEarthSpotMaster_o *Master_object; // x0
  __int64 v19; // x1
  BlankEarthSpotEntity_array *v20; // x21
  __int64 v21; // x2
  BlankEarthSpotEntity_o **p_blankEarthSpotEntity; // x22
  const MethodInfo *v23; // x4
  int32_t v24; // w21
  int32_t v25; // w23
  int32_t GrandFaceId; // w22
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v28; // x23
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x24
  int klass_high; // w8
  UnityEngine_Component_o *svtFigureRoot; // x0
  int32_t v34; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v37; // x1
  UnityEngine_Component_o *v38; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  UnityEngine_Component_o *monitor; // x0
  UnityEngine_GameObject_o *v43; // x0
  __int64 v44; // x1
  void *v45; // x0
  __int64 v46; // x1
  System_Collections_Generic_List_object__o *listFigureR; // x0
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  UnityEngine_GameObject_o *v52; // x0
  Il2CppObject *v53; // x21
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v58; // x8
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+30h] [xbp-80h] BYREF
  int32_t imageLimitCount; // [xsp+4Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1734B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v7);
    sub_1BCAFF8(&DataManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v13);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureR__Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B1734B = 1;
  }
  imageLimitCount = 0;
  memset(&v60, 0, sizeof(v60));
  if ( this->fields.currentWarId == warId )
    goto LABEL_4;
  GrandQuestSvtController__ClearFigure(this, *(const MethodInfo **)&warId);
  this->fields.currentWarId = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_59;
  v20 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0LL);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                              (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( v20 )
    {
      if ( !v20->max_length )
        sub_1BCB25C(Master_object, v19, v21);
      this->fields.blankEarthSpotEntity = v20->m_Items[0];
      p_blankEarthSpotEntity = &this->fields.blankEarthSpotEntity;
      sub_1BCAF9C(&this->fields.blankEarthSpotEntity);
      GrandQuestSvtController__SetServantPosition(this, 1, 1, 0LL, v23);
      Master_object = (BlankEarthSpotMaster_o *)this->fields.blankEarthSpotEntity;
      if ( Master_object )
      {
        Master_object = (BlankEarthSpotMaster_o *)BlankEarthSpotEntity__GetGrandImageId(
                                                    (BlankEarthSpotEntity_o *)Master_object,
                                                    -1,
                                                    0LL);
        if ( *p_blankEarthSpotEntity )
        {
          v24 = (int)Master_object;
          Master_object = (BlankEarthSpotMaster_o *)BlankEarthSpotEntity__GetGrandLimitCount(
                                                      *p_blankEarthSpotEntity,
                                                      0,
                                                      0LL);
          if ( *p_blankEarthSpotEntity )
          {
            v25 = (int)Master_object;
            GrandFaceId = BlankEarthSpotEntity__GetGrandFaceId(*p_blankEarthSpotEntity, 0, 0LL);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            if ( !ImageLimitCount__TryGetGrandImageLimitCount(v24, v25, &imageLimitCount, 0LL) )
              imageLimitCount = v25;
            Master_object = (BlankEarthSpotMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Master_object )
            {
              Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Master_object,
                                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
              if ( Master_object )
              {
                EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                                      (SvtMultiPortraitMaster_o *)Master_object,
                                      v24,
                                      imageLimitCount,
                                      2,
                                      0LL);
                if ( EntityListOrderBy )
                {
                  v28 = (System_Collections_Generic_List_object__o *)EntityListOrderBy;
                  if ( System_Linq_Enumerable__Any_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
                         (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
                  {
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v59,
                      v28,
                      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
                    v60 = v59;
                    while ( 1 )
                    {
                      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v60,
                              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
                      if ( !v29 )
                        break;
                      current = v60.fields._current;
                      if ( !v60.fields._current )
                        sub_1BCB254(v29, v30);
                      klass_high = HIDWORD(v60.fields._current[2].klass);
                      svtFigureRoot = (UnityEngine_Component_o *)this->fields.svtFigureRoot;
                      if ( klass_high >= 1 )
                        v34 = klass_high + 1;
                      else
                        v34 = 1;
                      if ( !svtFigureRoot )
                        sub_1BCB254(0LL, v30);
                      gameObject = UnityEngine_Component__get_gameObject(svtFigureRoot, 0LL);
                      PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                                           gameObject,
                                           (int32_t)current[2].klass,
                                           1,
                                           GrandFaceId,
                                           v34,
                                           0LL,
                                           0,
                                           -1,
                                           0LL,
                                           0LL);
                      v38 = (UnityEngine_Component_o *)PrefabForImageId;
                      if ( !PrefabForImageId )
                        sub_1BCB254(0LL, v37);
                      PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
                      sub_1BCAF9C(&PrefabForImageId->fields.svtMultiPortraitEntity);
                      transform = UnityEngine_Component__get_transform(v38, 0LL);
                      if ( !transform )
                        sub_1BCB254(0LL, v40);
                      UnityEngine_Transform__set_localPosition(transform, this->fields.StandBasePosition, 0LL);
                      monitor = (UnityEngine_Component_o *)v38[1].monitor;
                      if ( !monitor )
                        sub_1BCB254(0LL, v41);
                      v43 = UnityEngine_Component__get_gameObject(monitor, 0LL);
                      v62.fields.z = 1.0;
                      v62.fields.x = 0.9;
                      v62.fields.y = 0.9;
                      GameObjectExtensions__SetLocalScale(v43, v62, 0LL);
                      v45 = v38[1].monitor;
                      if ( !v45 )
                        sub_1BCB254(0LL, v44);
                      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v45 + 440LL))(
                        v45,
                        *(_QWORD *)(*(_QWORD *)v45 + 448LL),
                        0.0);
                      listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
                      if ( !listFigureR )
                        sub_1BCB254(0LL, v46);
                      items = listFigureR->fields._items;
                      v49 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                      ++listFigureR->fields._version;
                      if ( !items )
                        sub_1BCB254(listFigureR, v46);
                      size = listFigureR->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          listFigureR,
                          (Il2CppObject *)v38,
                          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v51 = &items->obj.klass + size;
                        listFigureR->fields._size = size + 1;
                        v51[4] = (Il2CppClass *)v38;
                        sub_1BCAF9C(v51 + 4);
                      }
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v60,
                      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
                    goto LABEL_4;
                  }
                }
                Master_object = (BlankEarthSpotMaster_o *)this->fields.svtFigureRoot;
                if ( Master_object )
                {
                  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                  Master_object = (BlankEarthSpotMaster_o *)StandFigureManager__CreateRenderPrefab_39863448(
                                                              v52,
                                                              v24,
                                                              imageLimitCount,
                                                              1,
                                                              GrandFaceId,
                                                              1,
                                                              0LL,
                                                              0,
                                                              -1,
                                                              0LL,
                                                              0LL);
                  if ( Master_object )
                  {
                    v53 = (Il2CppObject *)Master_object;
                    Master_object = (BlankEarthSpotMaster_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Master_object,
                                                                0LL);
                    if ( Master_object )
                    {
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)Master_object,
                        this->fields.StandBasePosition,
                        0LL);
                      Master_object = (BlankEarthSpotMaster_o *)v53[2].klass;
                      if ( Master_object )
                      {
                        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                        v63.fields.x = 0.9;
                        v63.fields.z = 1.0;
                        v63.fields.y = 0.9;
                        GameObjectExtensions__SetLocalScale(v54, v63, 0LL);
                        Master_object = (BlankEarthSpotMaster_o *)v53[2].klass;
                        if ( Master_object )
                        {
                          ((void (__fastcall *)(BlankEarthSpotMaster_o *, Il2CppMethodPointer, float))Master_object->klass->vtable._8_ReplacedForThread.method)(
                            Master_object,
                            Master_object->klass->vtable._9_Updated.methodPtr,
                            0.0);
                          Master_object = (BlankEarthSpotMaster_o *)this->fields.listFigureR;
                          if ( Master_object )
                          {
                            v55 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
                            v56 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                            ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
                            if ( v55 )
                            {
                              MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                              if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v55 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)Master_object,
                                  v53,
                                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v58 = v55 + 8 * MasterName_k__BackingField_low;
                                LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low
                                                                                           + 1;
                                *(_QWORD *)(v58 + 32) = v53;
                                sub_1BCAF9C(v58 + 32);
                              }
LABEL_4:
                              ActionExtensions__Call(callback, 0LL);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_1BCB254(Master_object, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__SetServantPosition(
        GrandQuestSvtController_o *this,
        bool immediately,
        int32_t viewType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v7; // w21
  UnityEngine_Component_o *svtController; // x0
  float z; // s8
  float y; // s9
  float v12; // s10
  int32_t GrandOffsetX; // w0
  GrandQuestClassSelectController_c *v14; // x8
  float x; // s10
  __int64 v16; // x9
  intptr_t v17; // s11
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v7 = immediately;
  if ( (byte_4B17348 & 1) == 0 )
  {
    sub_1BCAFF8(&GrandQuestClassSelectController_TypeInfo, immediately);
    byte_4B17348 = 1;
  }
  this->fields.currentViewType = viewType;
  if ( viewType != 2 )
  {
    v14 = GrandQuestClassSelectController_TypeInfo;
    x = this->fields.RootCenterPosition.fields.x;
    y = this->fields.RootCenterPosition.fields.y;
    z = this->fields.RootCenterPosition.fields.z;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
      v14 = GrandQuestClassSelectController_TypeInfo;
    }
    v16 = 8LL;
    if ( !v7 )
      goto LABEL_8;
LABEL_15:
    svtController = (UnityEngine_Component_o *)this->fields.svtController;
    if ( svtController )
    {
      gameObject = UnityEngine_Component__get_gameObject(svtController, 0LL);
      v22.fields.x = x;
      v22.fields.y = y;
      v22.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v22, 0LL);
      ActionExtensions__Call(callback, 0LL);
      return;
    }
LABEL_17:
    sub_1BCB254(svtController, immediately);
  }
  svtController = (UnityEngine_Component_o *)this->fields.blankEarthSpotEntity;
  if ( !svtController )
    goto LABEL_17;
  y = this->fields.RootLeftPosition.fields.y;
  z = this->fields.RootLeftPosition.fields.z;
  v12 = this->fields.RootLeftPosition.fields.x;
  GrandOffsetX = BlankEarthSpotEntity__GetGrandOffsetX((BlankEarthSpotEntity_o *)svtController, 0, 0LL);
  v14 = GrandQuestClassSelectController_TypeInfo;
  x = v12 + (float)GrandOffsetX;
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
    v14 = GrandQuestClassSelectController_TypeInfo;
  }
  v16 = 4LL;
  if ( v7 )
    goto LABEL_15;
LABEL_8:
  v17 = *(_DWORD *)((char *)&v14->static_fields->UpdateInfoTimeInterval + v16);
  svtController = (UnityEngine_Component_o *)GrandQuestSvtController__CreateDefaultFigureEasing(
                                               this,
                                               (const MethodInfo *)immediately);
  if ( !svtController )
    goto LABEL_17;
  v20 = *(_QWORD *)&svtController->fields.m_CachedPtr;
  *(_QWORD *)&immediately = svtController;
  if ( !v20 )
    goto LABEL_17;
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    sub_1BCB25C(svtController, svtController, v18);
  *(float *)(v20 + 44) = x;
  *(float *)(v20 + 48) = y;
  *(float *)(v20 + 52) = z;
  svtController[1].fields.m_CachedPtr = v17;
  LODWORD(svtController[2].klass) = 17;
  GrandQuestSvtController__ExecFigureEasing(
    this,
    (GrandQuestSvtController_FigureEasing_o *)svtController,
    callback,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__StartUp(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  GrandQuestSvtController___c__DisplayClass17_0_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_4B17345 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BCAFF8(&Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__0__, v7);
    sub_1BCAFF8(&GrandQuestSvtController___c__DisplayClass17_0_TypeInfo, v8);
    byte_4B17345 = 1;
  }
  v9 = (GrandQuestSvtController___c__DisplayClass17_0_o *)sub_1BCB244(GrandQuestSvtController___c__DisplayClass17_0_TypeInfo);
  GrandQuestSvtController___c__DisplayClass17_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  v9->fields.__4__this = this;
  sub_1BCAF9C(&v9->fields);
  v9->fields.callback = callback;
  sub_1BCAF9C(&v9->fields.callback);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(v9->fields.callback, 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__0__,
      0LL);
    GrandQuestSvtController__SetServant(this, warId, v12, v13);
  }
}


void __fastcall GrandQuestSvtController_FigureEasing___ctor(
        GrandQuestSvtController_FigureEasing_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass17_0___ctor(
        GrandQuestSvtController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass17_0___StartUp_b__0(
        GrandQuestSvtController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  System_Action_o *klass; // x21
  GrandQuestSvtController_o *v5; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4B17353 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass17_0_o *)sub_1BCAFF8(
                                                                &Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__,
                                                                v3);
    byte_4B17353 = 1;
  }
  klass = (System_Action_o *)v2[2].klass;
  v5 = (GrandQuestSvtController_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(klass, v2, Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__, 0LL);
    v2[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass17_0_o *)sub_1BCAF9C(&v2[2]);
  }
  if ( !v5 )
    sub_1BCB254(this, method);
  GrandQuestSvtController__SetServantPosition(v5, 1, 1, klass, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass17_0___StartUp_b__1(
        GrandQuestSvtController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  GrandQuestSvtController__FadeIn(_4__this, 1, 0, 0LL, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass18_0___ctor(
        GrandQuestSvtController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass18_0___Resume_b__0(
        GrandQuestSvtController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  System_Action_o *klass; // x21
  GrandQuestSvtController_o *v5; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4B17354 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass18_0_o *)sub_1BCAFF8(
                                                                &Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__,
                                                                v3);
    byte_4B17354 = 1;
  }
  klass = (System_Action_o *)v2[2].klass;
  v5 = (GrandQuestSvtController_o *)v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(klass, v2, Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__, 0LL);
    v2[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass18_0_o *)sub_1BCAF9C(&v2[2]);
  }
  if ( !v5 )
    sub_1BCB254(this, method);
  GrandQuestSvtController__SetServantPosition(v5, 1, 2, klass, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass18_0___Resume_b__1(
        GrandQuestSvtController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  GrandQuestSvtController__FadeIn(_4__this, 0, 1, 0LL, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_0___ctor(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestSvtController___c__DisplayClass19_0___GetTaskOfMoveServant_b__0(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_0___GetTaskOfMoveServant_b__1(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController___c__DisplayClass19_0_o *v2; // x19
  __int64 v3; // x1
  System_Action_o *_9__2; // x22
  GrandQuestSvtController_o *_4__this; // x20
  int32_t viewType; // w21

  v2 = this;
  if ( (byte_4B17355 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass19_0_o *)sub_1BCAFF8(
                                                                &Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__,
                                                                v3);
    byte_4B17355 = 1;
  }
  _9__2 = v2->fields.__9__2;
  _4__this = v2->fields.__4__this;
  viewType = v2->fields.viewType;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    this = (GrandQuestSvtController___c__DisplayClass19_0_o *)sub_1BCAF9C(&v2->fields.__9__2);
  }
  if ( !_4__this )
    sub_1BCB254(this, method);
  GrandQuestSvtController__ChangeViewType(_4__this, viewType, _9__2, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_0___GetTaskOfMoveServant_b__2(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void __fastcall GrandQuestSvtController___c__DisplayClass22_0___ctor(
        GrandQuestSvtController___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass22_1___ctor(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestSvtController___c__DisplayClass22_1___GetTaskOfChangeServant_b__0(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void __fastcall GrandQuestSvtController___c__DisplayClass22_1___GetTaskOfChangeServant_b__1(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  GrandQuestSvtController_o *v5; // x20
  System_Action_o *klass; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4B17356 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_1BCAFF8(
                                                                &Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__,
                                                                v3);
    byte_4B17356 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (GrandQuestSvtController_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v2[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__,
      0LL);
    v2[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_1BCAF9C(&v2[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_1BCB254(this, method);
  GrandQuestSvtController__ChangeViewType(v5, 1, klass, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass22_1___GetTaskOfChangeServant_b__2(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void __fastcall GrandQuestSvtController___c__DisplayClass22_2___ctor(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestSvtController___c__DisplayClass22_2___GetTaskOfChangeServant_b__3(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  return this->fields.isSvtChange;
}


void __fastcall GrandQuestSvtController___c__DisplayClass22_2___GetTaskOfChangeServant_b__4(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  GrandQuestSvtController_o *v5; // x20
  int32_t v6; // w21
  System_Action_o *klass; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4B17357 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass22_2_o *)sub_1BCAFF8(
                                                                &Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__,
                                                                v3);
    byte_4B17357 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (GrandQuestSvtController_o *)*((_QWORD *)monitor + 2);
  v6 = *((_DWORD *)monitor + 6);
  klass = (System_Action_o *)v2[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__,
      0LL);
    v2[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass22_2_o *)sub_1BCAF9C(&v2[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_1BCB254(this, method);
  GrandQuestSvtController__ChangeServant(v5, v6, klass, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass22_2___GetTaskOfChangeServant_b__5(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  this->fields.isSvtChange = 0;
}


void __fastcall GrandQuestSvtController___c__DisplayClass23_0___ctor(
        GrandQuestSvtController___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass23_0___ChangeServant_b__0(
        GrandQuestSvtController___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  GrandQuestSvtController__FadeIn(_4__this, 0, 0, this->fields.callback, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass27_0___ctor(
        GrandQuestSvtController___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController___c__DisplayClass27_0___ExecFigureEasing_b__0(
        GrandQuestSvtController___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GrandQuestSvtController___c__DisplayClass27_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EasingObject_o *easing; // x9
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x10
  float mNow; // s8
  float v11; // s0
  float v12; // s1
  float v13; // s2
  struct GrandQuestSvtController_FigureEasing_o *v14; // x8
  struct System_Single_array *scale; // x9
  float v16; // s10
  float v17; // s11
  float v18; // s12
  float v19; // s0
  struct GrandQuestSvtController_FigureEasing_o *v20; // x8
  struct System_Single_array *alpha; // x9
  float v22; // s9
  long double v23; // q0
  struct GrandQuestSvtController_o *_4__this; // x8
  long double v25; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  struct GrandQuestSvtController_o *v27; // x8
  struct GrandQuestSvtController_o *v28; // x8
  float v29; // s9
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x19
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B17358 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v5);
    this = (GrandQuestSvtController___c__DisplayClass27_0_o *)sub_1BCAFF8(
                                                                &Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__,
                                                                v6);
    byte_4B17358 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  easing = v3->fields.easing;
  if ( !easing )
    goto LABEL_27;
  figureEasing = v3->fields.figureEasing;
  if ( !figureEasing )
    goto LABEL_27;
  position = figureEasing->fields.position;
  if ( !position )
    goto LABEL_27;
  if ( position->max_length < 2 )
    goto LABEL_28;
  mNow = easing->fields.mNow;
  *(UnityEngine_Vector3_o *)&v11 = Easing__Func(
                                     *(UnityEngine_Vector3_o *)&position->m_Items[0].fields.y,
                                     *(UnityEngine_Vector3_o *)&position->m_Items[1].fields.y,
                                     mNow,
                                     figureEasing->fields.easingTypePosition,
                                     0LL);
  v14 = v3->fields.figureEasing;
  if ( !v14 )
    goto LABEL_27;
  scale = v14->fields.scale;
  if ( !scale )
    goto LABEL_27;
  if ( scale->max_length < 2 )
    goto LABEL_28;
  v16 = v11;
  v17 = v12;
  v18 = v13;
  v19 = Easing__Func_48248356(scale->m_Items[1], scale->m_Items[2], mNow, v14->fields.easingTypeScale, 0LL);
  v20 = v3->fields.figureEasing;
  if ( !v20 || (alpha = v20->fields.alpha) == 0LL )
LABEL_27:
    sub_1BCB254(this, method);
  if ( alpha->max_length < 2 )
LABEL_28:
    sub_1BCB25C(this, method, v2);
  v22 = v19;
  *(float *)&v23 = Easing__Func_48248356(alpha->m_Items[1], alpha->m_Items[2], mNow, v20->fields.easingTypeAlpha, 0LL);
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass27_0_o *)_4__this->fields.svtController;
  if ( !this )
    goto LABEL_27;
  v25 = v23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37.fields.x = v16;
  v37.fields.y = v17;
  v37.fields.z = v18;
  GameObjectExtensions__SetLocalPosition(gameObject, v37, 0LL);
  v27 = v3->fields.__4__this;
  if ( !v27 )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass27_0_o *)v27->fields.svtFigureScaleRoot;
  if ( !this )
    goto LABEL_27;
  v38.fields.z = 1.0;
  v38.fields.x = v22;
  v38.fields.y = v22;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v38, 0LL);
  v28 = v3->fields.__4__this;
  if ( !v28 )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass27_0_o *)v28->fields.listFigureR;
  if ( !this )
    goto LABEL_27;
  v29 = (float)((float)((float)(v22 * 0.9) + -1.0) * v3->fields.bodySizeY) / v22;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v30 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1BCB254(v30, v31);
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36.fields._current, 0LL);
    GameObjectExtensions__SetLocalPosition_35356952(v33, 0.0, v29, 0.0, 0LL);
    klass = current[2].klass;
    if ( !klass )
      sub_1BCB254(0LL, v34);
    (*((void (__fastcall **)(Il2CppClass *, _QWORD, long double))klass->_1.image + 55))(
      klass,
      *((_QWORD *)klass->_1.image + 56),
      v25);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


void __fastcall GrandQuestSvtController___c__DisplayClass27_0___ExecFigureEasing_b__1(
        GrandQuestSvtController___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController___c__DisplayClass27_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct GrandQuestSvtController_o *_4__this; // x8
  __int64 v7; // x2
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x8
  struct GrandQuestSvtController_o *v10; // x8
  struct GrandQuestSvtController_FigureEasing_o *v11; // x9
  struct System_Single_array *scale; // x9
  struct GrandQuestSvtController_FigureEasing_o *v13; // x8
  struct System_Single_array *v14; // x8
  struct GrandQuestSvtController_o *v15; // x9
  float v16; // s8
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct GrandQuestSvtController_FigureEasing_o *v24; // x8
  struct System_Single_array *alpha; // x8
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B17359 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v4);
    this = (GrandQuestSvtController___c__DisplayClass27_0_o *)sub_1BCAFF8(
                                                                &Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__,
                                                                v5);
    byte_4B17359 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_32;
  this = (GrandQuestSvtController___c__DisplayClass27_0_o *)_4__this->fields.svtController;
  if ( !this )
    goto LABEL_32;
  this = (GrandQuestSvtController___c__DisplayClass27_0_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  figureEasing = v2->fields.figureEasing;
  if ( !figureEasing )
    goto LABEL_32;
  position = figureEasing->fields.position;
  if ( !position )
    goto LABEL_32;
  if ( position->max_length <= 1 )
    goto LABEL_33;
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)this,
    *(UnityEngine_Vector3_o *)&position->m_Items[1].fields.y,
    0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_32;
  v11 = v2->fields.figureEasing;
  if ( !v11 )
    goto LABEL_32;
  scale = v11->fields.scale;
  if ( !scale )
    goto LABEL_32;
  if ( scale->max_length <= 1 )
    goto LABEL_33;
  this = (GrandQuestSvtController___c__DisplayClass27_0_o *)v10->fields.svtFigureScaleRoot;
  if ( !this
    || (v29.fields.x = scale->m_Items[2],
        v29.fields.z = 1.0,
        v29.fields.y = v29.fields.x,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v29, 0LL),
        (v13 = v2->fields.figureEasing) == 0LL)
    || (v14 = v13->fields.scale) == 0LL )
  {
LABEL_32:
    sub_1BCB254(this, method);
  }
  if ( v14->max_length <= 1 )
LABEL_33:
    sub_1BCB25C(this, method, v7);
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_32;
  this = (GrandQuestSvtController___c__DisplayClass27_0_o *)v15->fields.listFigureR;
  if ( !this )
    goto LABEL_32;
  v16 = (float)(v2->fields.bodySizeY * (float)((float)(v14->m_Items[2] * 0.9) + -1.0)) / v14->m_Items[2];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v17 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1BCB254(v17, v18);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28.fields._current, 0LL);
    GameObjectExtensions__SetLocalPosition_35356952(gameObject, 0.0, v16, 0.0, 0LL);
    v24 = v2->fields.figureEasing;
    if ( !v24 )
      sub_1BCB254(v21, v22);
    alpha = v24->fields.alpha;
    if ( !alpha )
      sub_1BCB254(v21, v22);
    if ( alpha->max_length <= 1 )
      sub_1BCB25C(v21, v22, v23);
    klass = current[2].klass;
    if ( !klass )
      sub_1BCB254(0LL, v22);
    (*((void (__fastcall **)(Il2CppClass *, _QWORD, float))klass->_1.image + 55))(
      klass,
      *((_QWORD *)klass->_1.image + 56),
      alpha->m_Items[2]);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}