void GrandQuestSvtController___ctor(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v6; // x20

  if ( (byte_4C22058 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIStandFigureR__TypeInfo);
    byte_4C22058 = 1;
  }
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.RootCenterPosition.fields.x = xmmword_C09E80;
  *(_QWORD *)&this->fields.RootLeftPosition.fields.y = 1133510656;
  *(_QWORD *)&this->fields.StandBasePosition.fields.x = v4;
  this->fields.StandBasePosition.fields.z = z;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIStandFigureR__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
  this->fields.listFigureR = (struct System_Collections_Generic_List_UIStandFigureR__o *)v6;
  sub_1C2D434(&this->fields.listFigureR);
  this->fields.currentWarId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestSvtController__ChangeServant(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3

  if ( (byte_4C22050 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass23_0__ChangeServant_b__0__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass23_0_TypeInfo);
    byte_4C22050 = 1;
  }
  v7 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C2D434(v7 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v7,
      Method_GrandQuestSvtController___c__DisplayClass23_0__ChangeServant_b__0__,
      0);
    GrandQuestSvtController__SetServant(this, warId, v10, v11);
  }
}


void GrandQuestSvtController__ChangeViewType(
        GrandQuestSvtController_o *this,
        int32_t viewType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( this->fields.currentViewType == viewType )
    ActionExtensions__Call(callback, 0);
  else
    GrandQuestSvtController__SetServantPosition(this, 0, viewType, callback, v4);
}


void GrandQuestSvtController__ClearFigure(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listFigureR; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  struct System_Collections_Generic_List_UIStandFigureR__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C22056 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22056 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    listFigureR,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v4 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C2D6EC(v4, v5);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14.fields._current, 0);
    if ( !gameObject )
      sub_1C2D6EC(0, v8);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  v10 = this->fields.listFigureR;
  if ( !v10 )
LABEL_17:
    sub_1C2D6EC(listFigureR, method);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
}


GrandQuestSvtController_FigureEasing_o *GrandQuestSvtController__CreateDefaultFigureEasing(
        GrandQuestSvtController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  struct GrandQuestSvtController_o *svtController; // x0
  struct GrandQuestSvtController_o *v5; // x1
  struct GrandQuestSvtController_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x2
  UnityEngine_GameObject_o *v9; // x0
  int m_CancellationTokenSource; // w8
  int v11; // w8
  GrandQuestSvtController_FigureEasing_o *result; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C22054 & 1) == 0 )
  {
    sub_1C2D490(&GrandQuestSvtController_FigureEasing_TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3___TypeInfo);
    byte_4C22054 = 1;
  }
  v3 = sub_1C2D6DC(GrandQuestSvtController_FigureEasing_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  svtController = (struct GrandQuestSvtController_o *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
  if ( !this->fields.svtController )
    goto LABEL_16;
  v6 = svtController;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtController, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  if ( !v6 )
    goto LABEL_16;
  if ( !LODWORD(v6->fields.m_CancellationTokenSource) )
    goto LABEL_17;
  *(UnityEngine_Vector3_o *)&v6->fields.svtController = LocalPosition;
  svtController = this->fields.svtController;
  if ( !svtController )
    goto LABEL_16;
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtController, 0);
  v14 = GameObjectExtensions__GetLocalPosition(v9, 0);
  if ( LODWORD(v6->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_17;
  *(UnityEngine_Vector3_o *)((char *)&v6->fields.svtFigureRoot + 4) = v14;
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = v6;
  sub_1C2D434(v3 + 16);
  svtController = (struct GrandQuestSvtController_o *)sub_1C2D538(float___TypeInfo, 2);
  if ( !svtController )
    goto LABEL_16;
  m_CancellationTokenSource = (int)svtController->fields.m_CancellationTokenSource;
  v5 = svtController;
  if ( !m_CancellationTokenSource
    || (LODWORD(svtController->fields.svtController) = 1065353216, m_CancellationTokenSource == 1) )
  {
LABEL_17:
    sub_1C2D6F4(svtController, v5, v8);
  }
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v3 + 24) = svtController;
  sub_1C2D434(v3 + 24);
  svtController = (struct GrandQuestSvtController_o *)sub_1C2D538(float___TypeInfo, 2);
  if ( !svtController )
LABEL_16:
    sub_1C2D6EC(svtController, v5);
  v11 = (int)svtController->fields.m_CancellationTokenSource;
  v5 = svtController;
  if ( !v11 )
    goto LABEL_17;
  LODWORD(svtController->fields.svtController) = 1065353216;
  if ( v11 == 1 )
    goto LABEL_17;
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v3 + 32) = svtController;
  sub_1C2D434(v3 + 32);
  *(_QWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  result = (GrandQuestSvtController_FigureEasing_o *)v3;
  *(_QWORD *)(v3 + 40) = 1056964608;
  return result;
}


void GrandQuestSvtController__ExecFigureEasing(
        GrandQuestSvtController_o *this,
        GrandQuestSvtController_FigureEasing_o *figureEasing,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  BlankEarthSpotEntity_o *blankEarthSpotEntity; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  float GrandBaseScale; // s0
  __int64 v12; // x8
  EasingObject_o *v13; // x20
  float v14; // s8
  System_Action_o *v15; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x8

  if ( (byte_4C22055 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__0__);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__1__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass28_0_TypeInfo);
    byte_4C22055 = 1;
  }
  v7 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 24) = figureEasing;
  sub_1C2D434(v7 + 24);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434(v7 + 32);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C2D434(v7 + 48);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  *(_QWORD *)(v7 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                           gameObject,
                           (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_1C2D434(v7 + 16);
  *(_DWORD *)(v7 + 44) = 1136623616;
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  if ( !blankEarthSpotEntity )
    goto LABEL_9;
  GrandBaseScale = BlankEarthSpotEntity__GetGrandBaseScale(blankEarthSpotEntity, 0.9, 0);
  v12 = *(_QWORD *)(v7 + 24);
  *(float *)(v7 + 40) = GrandBaseScale;
  if ( !v12
    || (v13 = *(EasingObject_o **)(v7 + 16),
        v14 = *(float *)(v12 + 40),
        v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v7,
          Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__0__,
          0),
        v16 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v7,
          Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__1__,
          0),
        (v17 = *(_QWORD *)(v7 + 24)) == 0)
    || !v13 )
  {
LABEL_9:
    sub_1C2D6EC(blankEarthSpotEntity, v9);
  }
  EasingObject__Play_48952224(v13, 0.0, 1.0, v14, v15, v16, *(float *)(v17 + 44), 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestSvtController__FadeIn(
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
  int max_length; // w8
  const MethodInfo *v14; // x3
  float v15; // s0
  float v16; // s1

  if ( (byte_4C22053 & 1) == 0 )
  {
    sub_1C2D490(&float___TypeInfo);
    byte_4C22053 = 1;
  }
  DefaultFigureEasing = GrandQuestSvtController__CreateDefaultFigureEasing(this, (const MethodInfo *)isStartUp);
  v10 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_14;
  v11 = v10;
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_15;
  v10->m_Items[1] = 1.0;
  if ( !DefaultFigureEasing
    || (DefaultFigureEasing->fields.alpha = v10,
        sub_1C2D434(&DefaultFigureEasing->fields.alpha),
        (v10 = (struct System_Single_array *)sub_1C2D538(float___TypeInfo, 2)) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(v10, v11);
  }
  max_length = v10->max_length;
  v11 = v10;
  if ( !max_length || (v10->m_Items[0] = 1.4, max_length == 1) )
LABEL_15:
    sub_1C2D6F4(v10, v11, v12);
  v10->m_Items[1] = 1.0;
  DefaultFigureEasing->fields.scale = v10;
  sub_1C2D434(&DefaultFigureEasing->fields.scale);
  v15 = 0.3;
  v16 = 1.2;
  if ( immediately )
  {
    v15 = 0.0;
    v16 = 0.0;
  }
  if ( !isStartUp )
    v15 = 0.0;
  DefaultFigureEasing->fields.easingTime = v16;
  DefaultFigureEasing->fields.delay = v15;
  *(_QWORD *)&DefaultFigureEasing->fields.easingTypeAlpha = 0xB0000000BLL;
  GrandQuestSvtController__ExecFigureEasing(this, DefaultFigureEasing, callback, v14);
}


SchedulerTaskBase_o *GrandQuestSvtController__GetTaskOfChangeServant(
        GrandQuestSvtController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  System_Func_bool__o *v9; // x21
  SchedulerTaskWaitWhile_o *v10; // x19
  SchedulerTaskBase_TaskCallback_o *v11; // x0
  intptr_t *v12; // x8
  System_Func_bool__o *v13; // x21
  struct SchedulerTaskBase_TaskCallback_o *v14; // x21

  if ( (byte_4C2204F & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass22_0_TypeInfo);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass22_1_TypeInfo);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass22_2_TypeInfo);
    byte_4C2204F = 1;
  }
  v5 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434(v5 + 16);
  *(_DWORD *)(v5 + 24) = warId;
  if ( this->fields.currentWarId == warId )
  {
    v8 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass22_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( !v8 )
      goto LABEL_11;
    *(_QWORD *)(v8 + 24) = v5;
    sub_1C2D434(v8 + 24);
    *(_BYTE *)(v8 + 16) = 1;
    v9 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      (Il2CppObject *)v8,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__,
      0);
    v10 = (SchedulerTaskWaitWhile_o *)sub_1C2D6DC(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v10, v9, 0);
    v11 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
    v12 = &Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__;
  }
  else
  {
    v8 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( !v8 )
      goto LABEL_11;
    *(_QWORD *)(v8 + 24) = v5;
    sub_1C2D434(v8 + 24);
    *(_BYTE *)(v8 + 16) = 1;
    v13 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v13,
      (Il2CppObject *)v8,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__,
      0);
    v10 = (SchedulerTaskWaitWhile_o *)sub_1C2D6DC(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v10, v13, 0);
    v11 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
    v12 = &Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__;
  }
  v14 = v11;
  SchedulerTaskBase_TaskCallback___ctor(v11, (Il2CppObject *)v8, *v12, 0);
  if ( !v10 )
LABEL_11:
    sub_1C2D6EC(v6, v7);
  v10->fields.StartCallback = v14;
  sub_1C2D434(&v10->fields.StartCallback);
  return (SchedulerTaskBase_o *)v10;
}


SchedulerTaskBase_o *GrandQuestSvtController__GetTaskOfMoveServant(
        GrandQuestSvtController_o *this,
        int32_t viewType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_bool__o *v8; // x20
  SchedulerTaskWaitWhile_o *v9; // x19
  SchedulerTaskBase_TaskCallback_o *v10; // x20

  if ( (byte_4C2204D & 1) == 0 )
  {
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C2D490(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
    byte_4C2204D = 1;
  }
  v5 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434(v5 + 24);
  *(_DWORD *)(v5 + 32) = viewType;
  *(_BYTE *)(v5 + 16) = 1;
  v8 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__,
    0);
  v9 = (SchedulerTaskWaitWhile_o *)sub_1C2D6DC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v9, v8, 0);
  v10 = (SchedulerTaskBase_TaskCallback_o *)sub_1C2D6DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__,
    0);
  if ( !v9 )
LABEL_6:
    sub_1C2D6EC(v6, v7);
  v9->fields.StartCallback = v10;
  sub_1C2D434(&v9->fields.StartCallback);
  return (SchedulerTaskBase_o *)v9;
}


void GrandQuestSvtController__Init(
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
    this->fields.blankEarthSpotEntity = 0;
    sub_1C2D434(&this->fields.blankEarthSpotEntity);
    GrandQuestSvtController__ClearFigure(v3, v5);
    v3->fields.rootComponent = grandQuestRoot;
    v3 = (GrandQuestSvtController_o *)((char *)v3 + 56);
    sub_1C2D434(v3);
    LOBYTE(v3->fields.RootCenterPosition.fields.x) = 1;
  }
}


void GrandQuestSvtController__Quit(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.currentViewType = 0;
  this->fields.currentWarId = -1;
  this->fields.blankEarthSpotEntity = 0;
  sub_1C2D434(&this->fields.blankEarthSpotEntity);
  GrandQuestSvtController__ClearFigure(this, v3);
  this->fields.initialized = 0;
}


void GrandQuestSvtController__Resume(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3

  if ( (byte_4C2204C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__0__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass18_0_TypeInfo);
    byte_4C2204C = 1;
  }
  v7 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C2D434(v7 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v7,
      Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__0__,
      0);
    GrandQuestSvtController__SetServant(this, warId, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestSvtController__SetDispServant(GrandQuestSvtController_o *this, bool disp, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listFigureR; // x0
  bool v6; // w19
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C22057 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4C22057 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    sub_1C2D6EC(0, disp);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    listFigureR,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v6 = disp;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1C2D6EC(0, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10.fields._current, 0);
    if ( !gameObject )
      sub_1C2D6EC(0, v9);
    UnityEngine_GameObject__SetActive(gameObject, v6, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


void GrandQuestSvtController__SetFigureBaseSetting(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *blankEarthSpotEntity; // x0
  float GrandBaseScale; // s0
  float v5; // s8
  int v6; // w20
  float v7; // s10
  float v8; // s9
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C22052 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4C22052 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  if ( !blankEarthSpotEntity
    || (GrandBaseScale = BlankEarthSpotEntity__GetGrandBaseScale(blankEarthSpotEntity, 0.9, 0),
        (blankEarthSpotEntity = this->fields.blankEarthSpotEntity) == 0)
    || (v5 = GrandBaseScale,
        blankEarthSpotEntity = (BlankEarthSpotEntity_o *)BlankEarthSpotEntity__GetGrandBaseOffsetX(
                                                           blankEarthSpotEntity,
                                                           0,
                                                           0),
        !this->fields.blankEarthSpotEntity)
    || (v6 = (int)blankEarthSpotEntity,
        blankEarthSpotEntity = (BlankEarthSpotEntity_o *)BlankEarthSpotEntity__GetGrandBaseOffsetY(
                                                           this->fields.blankEarthSpotEntity,
                                                           0,
                                                           0),
        !this->fields.listFigureR) )
  {
    sub_1C2D6EC(blankEarthSpotEntity, method);
  }
  v7 = (float)(int)blankEarthSpotEntity;
  v8 = (float)v6;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this->fields.listFigureR,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v9 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C2D6EC(v9, v10);
    klass = v21.fields._current[2].klass;
    if ( !klass )
      sub_1C2D6EC(0, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
    v15 = (UnityEngine_Component_o *)current[2].klass;
    if ( !v15 )
      sub_1C2D6EC(0, v13);
    v16 = UnityEngine_Component__get_gameObject(v15, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(v16, 0);
    LocalPosition.fields.x = LocalPosition.fields.x + v8;
    LocalPosition.fields.y = LocalPosition.fields.y + v7;
    LocalPosition.fields.z = LocalPosition.fields.z + 0.0;
    GameObjectExtensions__SetLocalPosition(gameObject, LocalPosition, 0);
    v18 = (UnityEngine_Component_o *)current[2].klass;
    if ( !v18 )
      sub_1C2D6EC(0, v17);
    v19 = UnityEngine_Component__get_gameObject(v18, 0);
    v23.fields.z = 1.0;
    v23.fields.x = v5;
    v23.fields.y = v5;
    GameObjectExtensions__SetLocalScale(v19, v23, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


void GrandQuestSvtController__SetServant(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x23
  BlankEarthSpotMaster_o *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x0
  BlankEarthSpotEntity_array *v12; // x21
  __int64 v13; // x2
  BlankEarthSpotEntity_o **p_blankEarthSpotEntity; // x22
  const MethodInfo *v15; // x4
  int32_t v16; // w19
  int32_t v17; // w24
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v19; // x24
  System_Action_o **v20; // x24
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x26
  int klass_high; // w8
  UnityEngine_Component_o *svtFigureRoot; // x0
  int32_t v26; // w25
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v28; // x29
  int32_t klass; // w28
  UnityEngine_GameObject_o *v30; // x27
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v32; // x1
  UnityEngine_Component_o *v33; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  void *monitor; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_object__o *listFigureR; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  System_Action_o *v44; // x19
  UnityEngine_GameObject_o *v45; // x0
  int32_t v46; // w23
  UnityEngine_GameObject_o *v47; // x24
  System_Action_o *v48; // x25
  Il2CppObject *v49; // x21
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v53; // x8
  System_Action_o *action; // [xsp+28h] [xbp-A8h]
  int32_t faceType; // [xsp+34h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+50h] [xbp-80h] BYREF
  int32_t imageLimitCount; // [xsp+6Ch] [xbp-64h] BYREF

  if ( (byte_4C22051 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C2D490(&Method_GrandQuestSvtController_SetFigureBaseSetting__);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass24_0__SetServant_b__0__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass24_0_TypeInfo);
    byte_4C22051 = 1;
  }
  imageLimitCount = 0;
  memset(&v57, 0, sizeof(v57));
  v7 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_61;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  if ( this->fields.currentWarId != warId )
  {
    GrandQuestSvtController__ClearFigure(this, v10);
    this->fields.currentWarId = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    if ( Master_object )
    {
      v12 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0);
      Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                  (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
        return;
      if ( v12 )
      {
        if ( !LODWORD(v12->max_length) )
          sub_1C2D6F4(Master_object, v9, v13);
        this->fields.blankEarthSpotEntity = v12->m_Items[0];
        p_blankEarthSpotEntity = &this->fields.blankEarthSpotEntity;
        sub_1C2D434(&this->fields.blankEarthSpotEntity);
        GrandQuestSvtController__SetServantPosition(this, 1, 1, 0, v15);
        Master_object = (BlankEarthSpotMaster_o *)this->fields.blankEarthSpotEntity;
        if ( Master_object )
        {
          action = callback;
          Master_object = (BlankEarthSpotMaster_o *)BlankEarthSpotEntity__GetGrandImageId(
                                                      (BlankEarthSpotEntity_o *)Master_object,
                                                      -1,
                                                      0);
          if ( *p_blankEarthSpotEntity )
          {
            v16 = (int)Master_object;
            Master_object = (BlankEarthSpotMaster_o *)BlankEarthSpotEntity__GetGrandLimitCount(
                                                        *p_blankEarthSpotEntity,
                                                        0,
                                                        0);
            if ( *p_blankEarthSpotEntity )
            {
              v17 = (int)Master_object;
              faceType = BlankEarthSpotEntity__GetGrandFaceId(*p_blankEarthSpotEntity, 0, 0);
              if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
              if ( !ImageLimitCount__TryGetGrandImageLimitCount(v16, v17, &imageLimitCount, 0) )
                imageLimitCount = v17;
              Master_object = (BlankEarthSpotMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Master_object )
              {
                Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)Master_object,
                                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
                if ( Master_object )
                {
                  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                                        (SvtMultiPortraitMaster_o *)Master_object,
                                        v16,
                                        imageLimitCount,
                                        2,
                                        0);
                  if ( EntityListOrderBy )
                  {
                    v19 = (System_Collections_Generic_List_object__o *)EntityListOrderBy;
                    if ( System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
                           (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
                    {
                      *(_DWORD *)(v7 + 24) = v19->fields._size;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v56,
                        v19,
                        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
                      v57 = v56;
                      v20 = (System_Action_o **)(v7 + 32);
                      while ( 1 )
                      {
                        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v57,
                                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
                        if ( !v21 )
                          break;
                        current = v57.fields._current;
                        if ( !v57.fields._current )
                          sub_1C2D6EC(v21, v22);
                        klass_high = HIDWORD(v57.fields._current[2].klass);
                        svtFigureRoot = (UnityEngine_Component_o *)this->fields.svtFigureRoot;
                        if ( klass_high >= 1 )
                          v26 = klass_high + 1;
                        else
                          v26 = 1;
                        if ( !svtFigureRoot )
                          sub_1C2D6EC(0, v22);
                        gameObject = UnityEngine_Component__get_gameObject(svtFigureRoot, 0);
                        v28 = *v20;
                        klass = (int32_t)current[2].klass;
                        v30 = gameObject;
                        if ( !*v20 )
                        {
                          v28 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v28,
                            (Il2CppObject *)v7,
                            Method_GrandQuestSvtController___c__DisplayClass24_0__SetServant_b__0__,
                            0);
                          *v20 = v28;
                          sub_1C2D434(v7 + 32);
                        }
                        PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                                             v30,
                                             klass,
                                             1,
                                             faceType,
                                             v26,
                                             v28,
                                             0,
                                             -1,
                                             0,
                                             0);
                        v33 = (UnityEngine_Component_o *)PrefabForImageId;
                        if ( !PrefabForImageId )
                          sub_1C2D6EC(0, v32);
                        PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
                        sub_1C2D434(&PrefabForImageId->fields.svtMultiPortraitEntity);
                        transform = UnityEngine_Component__get_transform(v33, 0);
                        if ( !transform )
                          sub_1C2D6EC(0, v35);
                        UnityEngine_Transform__set_localPosition(transform, this->fields.StandBasePosition, 0);
                        monitor = v33[1].monitor;
                        if ( !monitor )
                          sub_1C2D6EC(0, v36);
                        (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)monitor + 440LL))(
                          monitor,
                          *(_QWORD *)(*(_QWORD *)monitor + 448LL),
                          0.0);
                        listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
                        if ( !listFigureR )
                          sub_1C2D6EC(0, v38);
                        items = listFigureR->fields._items;
                        v41 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                        ++listFigureR->fields._version;
                        if ( !items )
                          sub_1C2D6EC(listFigureR, v38);
                        size = listFigureR->fields._size;
                        if ( (unsigned int)size >= LODWORD(items->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            listFigureR,
                            (Il2CppObject *)v33,
                            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v43 = &items->obj.klass + size;
                          listFigureR->fields._size = size + 1;
                          v43[4] = (Il2CppClass *)v33;
                          sub_1C2D434(v43 + 4);
                        }
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v57,
                        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
                      v44 = action;
                      goto LABEL_58;
                    }
                  }
                  Master_object = (BlankEarthSpotMaster_o *)this->fields.svtFigureRoot;
                  if ( Master_object )
                  {
                    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                    v46 = imageLimitCount;
                    v47 = v45;
                    v48 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v48,
                      (Il2CppObject *)this,
                      Method_GrandQuestSvtController_SetFigureBaseSetting__,
                      0);
                    Master_object = (BlankEarthSpotMaster_o *)StandFigureManager__CreateRenderPrefab_40454792(
                                                                v47,
                                                                v16,
                                                                v46,
                                                                1,
                                                                faceType,
                                                                1,
                                                                v48,
                                                                0,
                                                                -1,
                                                                0,
                                                                0);
                    if ( Master_object )
                    {
                      v49 = (Il2CppObject *)Master_object;
                      Master_object = (BlankEarthSpotMaster_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
                      v44 = action;
                      if ( Master_object )
                      {
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)Master_object,
                          this->fields.StandBasePosition,
                          0);
                        Master_object = (BlankEarthSpotMaster_o *)v49[2].klass;
                        if ( Master_object )
                        {
                          ((void (__fastcall *)(BlankEarthSpotMaster_o *, const MethodInfo *, float))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
                            Master_object,
                            Master_object->klass->vtable._8_ReplacedForThread.method,
                            0.0);
                          Master_object = (BlankEarthSpotMaster_o *)this->fields.listFigureR;
                          if ( Master_object )
                          {
                            v50 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
                            v51 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                            ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
                            if ( v50 )
                            {
                              MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                              if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v50 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)Master_object,
                                  v49,
                                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v53 = v50 + 8 * MasterName_k__BackingField_low;
                                LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low
                                                                                           + 1;
                                *(_QWORD *)(v53 + 32) = v49;
                                sub_1C2D434(v53 + 32);
                              }
LABEL_58:
                              v11 = v44;
                              goto LABEL_59;
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
LABEL_61:
    sub_1C2D6EC(Master_object, v9);
  }
  v11 = callback;
LABEL_59:
  ActionExtensions__Call(v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestSvtController__SetServantPosition(
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
  int v17; // s11
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  intptr_t m_CachedPtr; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v7 = immediately;
  if ( (byte_4C2204E & 1) == 0 )
  {
    sub_1C2D490(&GrandQuestClassSelectController_TypeInfo);
    byte_4C2204E = 1;
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
    v16 = 8;
    if ( !v7 )
      goto LABEL_8;
LABEL_15:
    svtController = (UnityEngine_Component_o *)this->fields.svtController;
    if ( svtController )
    {
      gameObject = UnityEngine_Component__get_gameObject(svtController, 0);
      v22.fields.x = x;
      v22.fields.y = y;
      v22.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v22, 0);
      ActionExtensions__Call(callback, 0);
      return;
    }
LABEL_17:
    sub_1C2D6EC(svtController, immediately);
  }
  svtController = (UnityEngine_Component_o *)this->fields.blankEarthSpotEntity;
  if ( !svtController )
    goto LABEL_17;
  y = this->fields.RootLeftPosition.fields.y;
  z = this->fields.RootLeftPosition.fields.z;
  v12 = this->fields.RootLeftPosition.fields.x;
  GrandOffsetX = BlankEarthSpotEntity__GetGrandOffsetX((BlankEarthSpotEntity_o *)svtController, 0, 0);
  v14 = GrandQuestClassSelectController_TypeInfo;
  x = v12 + (float)GrandOffsetX;
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
    v14 = GrandQuestClassSelectController_TypeInfo;
  }
  v16 = 4;
  if ( v7 )
    goto LABEL_15;
LABEL_8:
  v17 = *(_DWORD *)((char *)&v14->static_fields->UpdateInfoTimeInterval + v16);
  svtController = (UnityEngine_Component_o *)GrandQuestSvtController__CreateDefaultFigureEasing(
                                               this,
                                               (const MethodInfo *)immediately);
  if ( !svtController )
    goto LABEL_17;
  m_CachedPtr = svtController->fields.m_CachedPtr;
  *(_QWORD *)&immediately = svtController;
  if ( !m_CachedPtr )
    goto LABEL_17;
  if ( *(_DWORD *)(m_CachedPtr + 24) <= 1u )
    sub_1C2D6F4(svtController, svtController, v18);
  *(float *)(m_CachedPtr + 44) = x;
  *(float *)(m_CachedPtr + 48) = y;
  *(float *)(m_CachedPtr + 52) = z;
  LODWORD(svtController[1].fields.m_CachedPtr) = v17;
  LODWORD(svtController[2].klass) = 17;
  GrandQuestSvtController__ExecFigureEasing(
    this,
    (GrandQuestSvtController_FigureEasing_o *)svtController,
    callback,
    v19);
}


void GrandQuestSvtController__StartUp(
        GrandQuestSvtController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3

  if ( (byte_4C2204B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__0__);
    sub_1C2D490(&GrandQuestSvtController___c__DisplayClass17_0_TypeInfo);
    byte_4C2204B = 1;
  }
  v7 = sub_1C2D6DC(GrandQuestSvtController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C2D434(v7 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v7,
      Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__0__,
      0);
    GrandQuestSvtController__SetServant(this, warId, v10, v11);
  }
}


void GrandQuestSvtController_FigureEasing___ctor(
        GrandQuestSvtController_FigureEasing_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestSvtController___c__DisplayClass17_0___ctor(
        GrandQuestSvtController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestSvtController___c__DisplayClass17_0___StartUp_b__0(
        GrandQuestSvtController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  Il2CppObject *v3; // x19
  System_Action_o *klass; // x21
  GrandQuestSvtController_o *v5; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4C22059 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass17_0_o *)sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__);
    byte_4C22059 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v5 = (GrandQuestSvtController_o *)v3[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(klass, v3, Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__, 0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass17_0_o *)sub_1C2D434(&v3[2]);
  }
  if ( !v5 )
    sub_1C2D6EC(this, method);
  GrandQuestSvtController__SetServantPosition(v5, 1, 1, klass, v2);
}


void GrandQuestSvtController___c__DisplayClass17_0___StartUp_b__1(
        GrandQuestSvtController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  GrandQuestSvtController__FadeIn(_4__this, 1, 0, 0, v2);
  ActionExtensions__Call(this->fields.callback, 0);
}


void GrandQuestSvtController___c__DisplayClass18_0___ctor(
        GrandQuestSvtController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestSvtController___c__DisplayClass18_0___Resume_b__0(
        GrandQuestSvtController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  Il2CppObject *v3; // x19
  System_Action_o *klass; // x21
  GrandQuestSvtController_o *v5; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4C2205A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass18_0_o *)sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__);
    byte_4C2205A = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v5 = (GrandQuestSvtController_o *)v3[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(klass, v3, Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__, 0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass18_0_o *)sub_1C2D434(&v3[2]);
  }
  if ( !v5 )
    sub_1C2D6EC(this, method);
  GrandQuestSvtController__SetServantPosition(v5, 1, 2, klass, v2);
}


void GrandQuestSvtController___c__DisplayClass18_0___Resume_b__1(
        GrandQuestSvtController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  GrandQuestSvtController__FadeIn(_4__this, 0, 1, 0, v2);
  ActionExtensions__Call(this->fields.callback, 0);
}


void GrandQuestSvtController___c__DisplayClass19_0___ctor(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestSvtController___c__DisplayClass19_0___GetTaskOfMoveServant_b__0(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void GrandQuestSvtController___c__DisplayClass19_0___GetTaskOfMoveServant_b__1(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestSvtController___c__DisplayClass19_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  GrandQuestSvtController_o *_4__this; // x20
  int32_t viewType; // w21

  v3 = this;
  if ( (byte_4C2205B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass19_0_o *)sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__);
    byte_4C2205B = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  viewType = v3->fields.viewType;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    this = (GrandQuestSvtController___c__DisplayClass19_0_o *)sub_1C2D434(&v3->fields.__9__2);
  }
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  GrandQuestSvtController__ChangeViewType(_4__this, viewType, _9__2, v2);
}


void GrandQuestSvtController___c__DisplayClass19_0___GetTaskOfMoveServant_b__2(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void GrandQuestSvtController___c__DisplayClass22_0___ctor(
        GrandQuestSvtController___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestSvtController___c__DisplayClass22_1___ctor(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestSvtController___c__DisplayClass22_1___GetTaskOfChangeServant_b__0(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void GrandQuestSvtController___c__DisplayClass22_1___GetTaskOfChangeServant_b__1(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  void *monitor; // x8
  GrandQuestSvtController_o *v5; // x20
  System_Action_o *klass; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4C2205C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__);
    byte_4C2205C = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (GrandQuestSvtController_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__,
      0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_1C2D434(&v3[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_1C2D6EC(this, method);
  GrandQuestSvtController__ChangeViewType(v5, 1, klass, v2);
}


void GrandQuestSvtController___c__DisplayClass22_1___GetTaskOfChangeServant_b__2(
        GrandQuestSvtController___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void GrandQuestSvtController___c__DisplayClass22_2___ctor(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestSvtController___c__DisplayClass22_2___GetTaskOfChangeServant_b__3(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  return this->fields.isSvtChange;
}


void GrandQuestSvtController___c__DisplayClass22_2___GetTaskOfChangeServant_b__4(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  void *monitor; // x8
  GrandQuestSvtController_o *v5; // x20
  int32_t v6; // w21
  System_Action_o *klass; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4C2205D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass22_2_o *)sub_1C2D490(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__);
    byte_4C2205D = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v5 = (GrandQuestSvtController_o *)*((_QWORD *)monitor + 2);
  v6 = *((_DWORD *)monitor + 6);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__,
      0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass22_2_o *)sub_1C2D434(&v3[2]);
  }
  if ( !v5 )
LABEL_8:
    sub_1C2D6EC(this, method);
  GrandQuestSvtController__ChangeServant(v5, v6, klass, v2);
}


void GrandQuestSvtController___c__DisplayClass22_2___GetTaskOfChangeServant_b__5(
        GrandQuestSvtController___c__DisplayClass22_2_o *this,
        const MethodInfo *method)
{
  this->fields.isSvtChange = 0;
}


void GrandQuestSvtController___c__DisplayClass23_0___ctor(
        GrandQuestSvtController___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestSvtController___c__DisplayClass23_0___ChangeServant_b__0(
        GrandQuestSvtController___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  GrandQuestSvtController__FadeIn(_4__this, 0, 0, this->fields.callback, v2);
}


void GrandQuestSvtController___c__DisplayClass24_0___ctor(
        GrandQuestSvtController___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestSvtController___c__DisplayClass24_0___SetServant_b__0(
        GrandQuestSvtController___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf
  GrandQuestSvtController_o *_4__this; // x0

  v2 = this->fields.renderRequest - 1;
  v3 = this->fields.renderRequest == 1;
  this->fields.renderRequest = v2;
  if ( v2 < 0 || v3 )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1C2D6EC(0, method);
    GrandQuestSvtController__SetFigureBaseSetting(_4__this, method);
  }
}


void GrandQuestSvtController___c__DisplayClass28_0___ctor(
        GrandQuestSvtController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestSvtController___c__DisplayClass28_0___ExecFigureEasing_b__0(
        GrandQuestSvtController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GrandQuestSvtController___c__DisplayClass28_0_o *v3; // x19
  struct EasingObject_o *easing; // x9
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x10
  float mNow; // s8
  struct GrandQuestSvtController_FigureEasing_o *v8; // x8
  struct System_Single_array *scale; // x9
  float x; // s10
  float y; // s11
  float z; // s12
  float v13; // s0
  struct GrandQuestSvtController_FigureEasing_o *v14; // x8
  struct System_Single_array *alpha; // x9
  float v16; // s9
  long double v17; // q0
  struct GrandQuestSvtController_o *_4__this; // x8
  long double v19; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  struct GrandQuestSvtController_o *v21; // x8
  struct GrandQuestSvtController_o *v22; // x8
  float v23; // s9
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x19
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4C2205E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    this = (GrandQuestSvtController___c__DisplayClass28_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4C2205E = 1;
  }
  memset(&v30, 0, sizeof(v30));
  easing = v3->fields.easing;
  if ( !easing )
    goto LABEL_27;
  figureEasing = v3->fields.figureEasing;
  if ( !figureEasing )
    goto LABEL_27;
  position = figureEasing->fields.position;
  if ( !position )
    goto LABEL_27;
  if ( LODWORD(position->max_length) < 2 )
    goto LABEL_28;
  mNow = easing->fields.mNow;
  v31 = Easing__Func(position->m_Items[0], position->m_Items[1], mNow, figureEasing->fields.easingTypePosition, 0);
  v8 = v3->fields.figureEasing;
  if ( !v8 )
    goto LABEL_27;
  scale = v8->fields.scale;
  if ( !scale )
    goto LABEL_27;
  if ( LODWORD(scale->max_length) < 2 )
    goto LABEL_28;
  x = v31.fields.x;
  y = v31.fields.y;
  z = v31.fields.z;
  v13 = Easing__Func_48951048(scale->m_Items[0], scale->m_Items[1], mNow, v8->fields.easingTypeScale, 0);
  v14 = v3->fields.figureEasing;
  if ( !v14 || (alpha = v14->fields.alpha) == 0 )
LABEL_27:
    sub_1C2D6EC(this, method);
  if ( LODWORD(alpha->max_length) < 2 )
LABEL_28:
    sub_1C2D6F4(this, method, v2);
  v16 = v13;
  *(float *)&v17 = Easing__Func_48951048(alpha->m_Items[0], alpha->m_Items[1], mNow, v14->fields.easingTypeAlpha, 0);
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)_4__this->fields.svtController;
  if ( !this )
    goto LABEL_27;
  v19 = v17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v32, 0);
  v21 = v3->fields.__4__this;
  if ( !v21 )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v21->fields.svtFigureScaleRoot;
  if ( !this )
    goto LABEL_27;
  v33.fields.z = 1.0;
  v33.fields.x = v16;
  v33.fields.y = v16;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v33, 0);
  v22 = v3->fields.__4__this;
  if ( !v22 )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v22->fields.listFigureR;
  if ( !this )
    goto LABEL_27;
  v23 = (float)(v3->fields.bodySizeY * (float)((float)(v16 * v3->fields.servantScale) + -1.0)) / v16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v24 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C2D6EC(v24, v25);
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30.fields._current, 0);
    GameObjectExtensions__SetLocalPosition_35918600(v27, 0.0, v23, 0.0, 0);
    v29 = *(__int64 *)((char *)&qword_20 + (_QWORD)current);
    if ( !v29 )
      sub_1C2D6EC(0, v28);
    (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v29 + 440LL))(
      v29,
      *(_QWORD *)(*(_QWORD *)v29 + 448LL),
      v19);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


void GrandQuestSvtController___c__DisplayClass28_0___ExecFigureEasing_b__1(
        GrandQuestSvtController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController___c__DisplayClass28_0_o *v2; // x19
  struct GrandQuestSvtController_o *_4__this; // x8
  __int64 v4; // x2
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x8
  struct GrandQuestSvtController_o *v7; // x8
  struct GrandQuestSvtController_FigureEasing_o *v8; // x9
  struct System_Single_array *scale; // x9
  struct GrandQuestSvtController_FigureEasing_o *v10; // x8
  struct System_Single_array *v11; // x8
  struct GrandQuestSvtController_o *v12; // x9
  float v13; // s8
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct GrandQuestSvtController_FigureEasing_o *v21; // x8
  struct System_Single_array *alpha; // x8
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C2205F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    this = (GrandQuestSvtController___c__DisplayClass28_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4C2205F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_32;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)_4__this->fields.svtController;
  if ( !this )
    goto LABEL_32;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
  figureEasing = v2->fields.figureEasing;
  if ( !figureEasing )
    goto LABEL_32;
  position = figureEasing->fields.position;
  if ( !position )
    goto LABEL_32;
  if ( LODWORD(position->max_length) <= 1 )
    goto LABEL_33;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)this, position->m_Items[1], 0);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_32;
  v8 = v2->fields.figureEasing;
  if ( !v8 )
    goto LABEL_32;
  scale = v8->fields.scale;
  if ( !scale )
    goto LABEL_32;
  if ( LODWORD(scale->max_length) <= 1 )
    goto LABEL_33;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v7->fields.svtFigureScaleRoot;
  if ( !this
    || (v26.fields.x = scale->m_Items[1],
        v26.fields.z = 1.0,
        v26.fields.y = v26.fields.x,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v26, 0),
        (v10 = v2->fields.figureEasing) == 0)
    || (v11 = v10->fields.scale) == 0 )
  {
LABEL_32:
    sub_1C2D6EC(this, method);
  }
  if ( LODWORD(v11->max_length) <= 1 )
LABEL_33:
    sub_1C2D6F4(this, method, v4);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_32;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v12->fields.listFigureR;
  if ( !this )
    goto LABEL_32;
  v13 = (float)(v2->fields.bodySizeY * (float)((float)(v2->fields.servantScale * v11->m_Items[1]) + -1.0))
      / v11->m_Items[1];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v14 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1C2D6EC(v14, v15);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25.fields._current, 0);
    GameObjectExtensions__SetLocalPosition_35918600(gameObject, 0.0, v13, 0.0, 0);
    v21 = v2->fields.figureEasing;
    if ( !v21 )
      sub_1C2D6EC(v18, v19);
    alpha = v21->fields.alpha;
    if ( !alpha )
      sub_1C2D6EC(v18, v19);
    if ( LODWORD(alpha->max_length) <= 1 )
      sub_1C2D6F4(v18, v19, v20);
    klass = current[2].klass;
    if ( !klass )
      sub_1C2D6EC(0, v19);
    (*((void (__fastcall **)(Il2CppClass *, _QWORD, float))klass->_1.image + 55))(
      klass,
      *((_QWORD *)klass->_1.image + 56),
      alpha->m_Items[1]);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  ActionExtensions__Call(v2->fields.callback, 0);
}