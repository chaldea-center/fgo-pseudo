void GrandQuestSvtController___ctor(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_UIStandFigureR__c *v3; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v5; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59331A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIStandFigureR__TypeInfo);
    byte_59331A0 = 1;
  }
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v3 = System_Collections_Generic_List_UIStandFigureR__TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.RootCenterPosition.fields.x = xmmword_E93470;
  *(_QWORD *)&this->fields.StandBasePosition.fields.x = v5;
  this->fields.StandBasePosition.fields.z = z;
  *(_QWORD *)&this->fields.RootLeftPosition.fields.y = 1133510656;
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
  this->fields.listFigureR = (struct System_Collections_Generic_List_UIStandFigureR__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listFigureR, (int32_t)v7, v8, v9, v10, v11, v12, v13);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_5933198 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass23_0__ChangeServant_b__0__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass23_0_TypeInfo);
    byte_5933198 = 1;
  }
  v7 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v7,
      Method_GrandQuestSvtController___c__DisplayClass23_0__ChangeServant_b__0__,
      0);
    GrandQuestSvtController__SetServant(this, warId, v22, v23);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x20
  struct System_Collections_Generic_List_UIStandFigureR__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_593319E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593319E = 1;
  }
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  memset(&v16, 0, sizeof(v16));
  if ( !listFigureR )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    listFigureR,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_21FFECC(v4, v5);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16.fields._current, 0);
    if ( !gameObject )
      sub_21FFECC(0, v8);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83246496(v11, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  v12 = this->fields.listFigureR;
  if ( !v12 )
LABEL_17:
    sub_21FFECC(listFigureR, method);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0);
}


GrandQuestSvtController_FigureEasing_o *GrandQuestSvtController__CreateDefaultFigureEasing(
        GrandQuestSvtController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  struct GrandQuestSvtController_o *svtController; // x0
  __int64 v5; // x1
  struct GrandQuestSvtController_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int m_CancellationTokenSource; // w9
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int v28; // w9
  GrandQuestSvtController_FigureEasing_o *result; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593319C & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestSvtController_FigureEasing_TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    byte_593319C = 1;
  }
  v3 = sub_21FFEBC(GrandQuestSvtController_FigureEasing_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  svtController = (struct GrandQuestSvtController_o *)sub_21FFD10(UnityEngine_Vector3___TypeInfo, 2);
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
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtController, 0);
  v31 = GameObjectExtensions__GetLocalPosition(v8, 0);
  if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  *(UnityEngine_Vector3_o *)((char *)&v6->fields.svtFigureRoot + 4) = v31;
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  svtController = (struct GrandQuestSvtController_o *)sub_21FFD10(float___TypeInfo, 2);
  if ( !svtController )
    goto LABEL_16;
  m_CancellationTokenSource = (int)svtController->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource
    || (LODWORD(svtController->fields.svtController) = 1065353216, m_CancellationTokenSource == 1) )
  {
LABEL_17:
    sub_21FFED4(svtController);
  }
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v3 + 24) = svtController;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)svtController, v15, v16, v17, v18, v19, v20);
  svtController = (struct GrandQuestSvtController_o *)sub_21FFD10(float___TypeInfo, 2);
  if ( !svtController )
LABEL_16:
    sub_21FFECC(svtController, v5);
  v28 = (int)svtController->fields.m_CancellationTokenSource;
  if ( !v28 )
    goto LABEL_17;
  LODWORD(svtController->fields.svtController) = 1065353216;
  if ( v28 == 1 )
    goto LABEL_17;
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v3 + 32) = svtController;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)svtController, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v3 + 52) = 0;
  result = (GrandQuestSvtController_FigureEasing_o *)v3;
  *(_DWORD *)(v3 + 40) = 1056964608;
  *(_QWORD *)(v3 + 44) = 0;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  float GrandBaseScale; // s0
  __int64 v37; // x8
  EasingObject_o *v38; // x20
  float v39; // s8
  System_Action_o *v40; // x21
  System_Action_o *v41; // x22
  __int64 v42; // x8

  if ( (byte_593319D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__0__);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__1__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass28_0_TypeInfo);
    byte_593319D = 1;
  }
  v7 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 24) = figureEasing;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)figureEasing, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)Component_object, v30, v31, v32, v33, v34, v35);
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  *(_DWORD *)(v7 + 44) = 1136623616;
  if ( !blankEarthSpotEntity )
    goto LABEL_9;
  GrandBaseScale = BlankEarthSpotEntity__GetGrandBaseScale(blankEarthSpotEntity, 0.9, 0);
  v37 = *(_QWORD *)(v7 + 24);
  *(float *)(v7 + 40) = GrandBaseScale;
  if ( !v37
    || (v38 = *(EasingObject_o **)(v7 + 16),
        v39 = *(float *)(v37 + 40),
        v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v7,
          Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__0__,
          0),
        v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v41,
          (Il2CppObject *)v7,
          Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__1__,
          0),
        (v42 = *(_QWORD *)(v7 + 24)) == 0)
    || !v38 )
  {
LABEL_9:
    sub_21FFECC(blankEarthSpotEntity, v9);
  }
  EasingObject__Play_55916512(v38, 0.0, 1.0, v39, v40, v41, *(float *)(v42 + 44), 0, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int max_length; // w8
  const MethodInfo *v25; // x3
  float v26; // s0
  float v27; // s1
  float v28; // s2

  if ( (byte_593319B & 1) == 0 )
  {
    sub_21FFC50(&float___TypeInfo);
    byte_593319B = 1;
  }
  DefaultFigureEasing = GrandQuestSvtController__CreateDefaultFigureEasing(this, (const MethodInfo *)isStartUp);
  v10 = (struct System_Single_array *)sub_21FFD10(float___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_14;
  v11 = v10;
  if ( (v10->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_15;
  v10->m_Items[1] = 1.0;
  if ( !DefaultFigureEasing
    || (DefaultFigureEasing->fields.alpha = v10,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&DefaultFigureEasing->fields.alpha,
          (int32_t)v10,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v10 = (struct System_Single_array *)sub_21FFD10(float___TypeInfo, 2)) == 0) )
  {
LABEL_14:
    sub_21FFECC(v10, v11);
  }
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[0] = 1.4, max_length == 1) )
LABEL_15:
    sub_21FFED4(v10);
  v10->m_Items[1] = 1.0;
  DefaultFigureEasing->fields.scale = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&DefaultFigureEasing->fields.scale,
    (int32_t)v10,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = 0.0;
  v27 = 0.3;
  v28 = 1.2;
  if ( immediately )
  {
    v27 = 0.0;
    v28 = 0.0;
  }
  if ( isStartUp )
    v26 = v27;
  DefaultFigureEasing->fields.easingTime = v28;
  DefaultFigureEasing->fields.delay = v26;
  *(_QWORD *)&DefaultFigureEasing->fields.easingTypeAlpha = 0xB0000000BLL;
  GrandQuestSvtController__ExecFigureEasing(this, DefaultFigureEasing, callback, v25);
}


SchedulerTaskBase_o *GrandQuestSvtController__GetTaskOfChangeServant(
        GrandQuestSvtController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t currentWarId; // w8
  __int64 v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Func_bool__o *v22; // x21
  __int64 v23; // x19
  SchedulerTaskBase_TaskCallback_o *v24; // x0
  intptr_t *v25; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Func_bool__o *v32; // x21
  SchedulerTaskBase_TaskCallback_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5933197 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass22_0_TypeInfo);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass22_1_TypeInfo);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass22_2_TypeInfo);
    byte_5933197 = 1;
  }
  v5 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  currentWarId = this->fields.currentWarId;
  *(_DWORD *)(v5 + 24) = warId;
  if ( currentWarId == warId )
  {
    v15 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass22_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    if ( !v15 )
      goto LABEL_11;
    *(_QWORD *)(v15 + 24) = v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 24), v5, v16, v17, v18, v19, v20, v21);
    *(_BYTE *)(v15 + 16) = 1;
    v22 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v22,
      (Il2CppObject *)v15,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__,
      0);
    v23 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v23, v22, 0);
    v24 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
    v25 = &Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__;
  }
  else
  {
    v15 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0);
    if ( !v15 )
      goto LABEL_11;
    *(_QWORD *)(v15 + 24) = v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 24), v5, v26, v27, v28, v29, v30, v31);
    *(_BYTE *)(v15 + 16) = 1;
    v32 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v32,
      (Il2CppObject *)v15,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__,
      0);
    v23 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v23, v32, 0);
    v24 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
    v25 = &Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__;
  }
  v33 = v24;
  SchedulerTaskBase_TaskCallback___ctor(v24, (Il2CppObject *)v15, *v25, 0);
  if ( !v23 )
LABEL_11:
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v23 + 24) = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 24), (int32_t)v33, v34, v35, v36, v37, v38, v39);
  return (SchedulerTaskBase_o *)v23;
}


SchedulerTaskBase_o *GrandQuestSvtController__GetTaskOfMoveServant(
        GrandQuestSvtController_o *this,
        int32_t viewType,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Func_bool__c *v14; // x0
  System_Func_bool__o *v15; // x21
  __int64 v16; // x19
  SchedulerTaskBase_TaskCallback_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5933195 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
    byte_5933195 = 1;
  }
  v5 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Func_bool__TypeInfo;
  *(_DWORD *)(v5 + 32) = viewType;
  *(_BYTE *)(v5 + 16) = 1;
  v15 = (System_Func_bool__o *)sub_21FFEBC(v14);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__,
    0);
  v16 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v16, v15, 0);
  v17 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__,
    0);
  if ( !v16 )
LABEL_6:
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v16 + 24) = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  return (SchedulerTaskBase_o *)v16;
}


void GrandQuestSvtController__Init(
        GrandQuestSvtController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  GrandQuestSvtController_o *v9; // x19
  const MethodInfo *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( !this->fields.initialized )
  {
    v9 = this;
    this->fields.currentViewType = 0;
    this->fields.currentWarId = -1;
    this->fields.blankEarthSpotEntity = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.blankEarthSpotEntity,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    GrandQuestSvtController__ClearFigure(v9, v10);
    v9->fields.rootComponent = grandQuestRoot;
    v9 = (GrandQuestSvtController_o *)((char *)v9 + 56);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v9, (int32_t)grandQuestRoot, v11, v12, v13, v14, v15, v16);
    LOBYTE(v9->fields.RootCenterPosition.fields.x) = 1;
  }
}


void GrandQuestSvtController__Quit(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.currentWarId = -1;
  this->fields.currentViewType = 0;
  this->fields.blankEarthSpotEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.blankEarthSpotEntity, 0, v2, v3, v4, v5, v6, v7);
  GrandQuestSvtController__ClearFigure(this, v9);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_5933194 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__0__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass18_0_TypeInfo);
    byte_5933194 = 1;
  }
  v7 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v7,
      Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__0__,
      0);
    GrandQuestSvtController__SetServant(this, warId, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestSvtController__SetDispServant(GrandQuestSvtController_o *this, bool disp, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listFigureR; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593319F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_593319F = 1;
  }
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  memset(&v9, 0, sizeof(v9));
  if ( !listFigureR )
    sub_21FFECC(0, disp);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    listFigureR,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_21FFECC(0, v6);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9.fields._current, 0);
    if ( !gameObject )
      sub_21FFECC(0, v8);
    UnityEngine_GameObject__SetActive(gameObject, disp, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


void GrandQuestSvtController__SetFigureBaseSetting(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  BlankEarthSpotEntity_o *blankEarthSpotEntity; // x0
  float GrandBaseScale; // s0
  float v5; // s8
  int v6; // w20
  float v7; // s10
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x22
  Il2CppClass *klass; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593319A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_593319A = 1;
  }
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  memset(&v20, 0, sizeof(v20));
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
    sub_21FFECC(blankEarthSpotEntity, method);
  }
  v7 = (float)(int)blankEarthSpotEntity;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)this->fields.listFigureR,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v20 = v19;
  v19.fields._list = 0;
  *(_QWORD *)&v19.fields._index = &v20;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v8 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_21FFECC(v8, v9);
    klass = v20.fields._current[2].klass;
    if ( !klass )
      sub_21FFECC(0, v9);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
    v14 = (UnityEngine_Component_o *)current[2].klass;
    if ( !v14 )
      sub_21FFECC(0, v12);
    v15 = UnityEngine_Component__get_gameObject(v14, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(v15, 0);
    LocalPosition.fields.x = LocalPosition.fields.x + (float)v6;
    LocalPosition.fields.y = LocalPosition.fields.y + v7;
    LocalPosition.fields.z = LocalPosition.fields.z + 0.0;
    GameObjectExtensions__SetLocalPosition(gameObject, LocalPosition, 0);
    v17 = (UnityEngine_Component_o *)current[2].klass;
    if ( !v17 )
      sub_21FFECC(0, v16);
    v18 = UnityEngine_Component__get_gameObject(v17, 0);
    v22.fields.x = v5;
    v22.fields.y = v5;
    v22.fields.z = 1.0;
    GameObjectExtensions__SetLocalScale(v18, v22, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  BlankEarthSpotEntity_array *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct BlankEarthSpotEntity_o *v26; // x1
  BlankEarthSpotEntity_o **p_blankEarthSpotEntity; // x22
  const MethodInfo *v28; // x4
  int32_t v29; // w19
  int32_t v30; // w24
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t GrandFaceId; // w22
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v35; // x24
  const MethodInfo_4450604 *v36; // x1
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x25
  int klass_high; // w8
  UnityEngine_Component_o *svtFigureRoot; // x0
  int32_t v42; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v44; // x28
  int32_t klass; // w27
  UnityEngine_GameObject_o *v46; // x26
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v54; // x1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  UnityEngine_Component_o *v61; // x24
  UnityEngine_Transform_o *transform; // x0
  __int64 v63; // x1
  __int64 v64; // x1
  void *monitor; // x0
  __int64 v66; // x1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_Collections_Generic_List_object__o *listFigureR; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x8
  UnityEngine_GameObject_o *v78; // x24
  int32_t v79; // w23
  System_Action_o *v80; // x25
  Il2CppObject *v81; // x21
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v91; // x8
  System_Action_o *action; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+40h] [xbp-80h] BYREF
  int32_t imageLimitCount; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_5933199 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_21FFC50(&Method_GrandQuestSvtController_SetFigureBaseSetting__);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass24_0__SetServant_b__0__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass24_0_TypeInfo);
    byte_5933199 = 1;
  }
  imageLimitCount = 0;
  memset(&v94, 0, sizeof(v94));
  v7 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_59;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(callback, 0);
    return;
  }
  GrandQuestSvtController__ClearFigure(this, v16);
  this->fields.currentWarId = warId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_59;
  v19 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                              (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !v19 )
    goto LABEL_59;
  if ( !LODWORD(v19->max_length) )
    sub_21FFED4(Master_object);
  v26 = v19->m_Items[0];
  this->fields.blankEarthSpotEntity = v26;
  p_blankEarthSpotEntity = &this->fields.blankEarthSpotEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.blankEarthSpotEntity,
    (int32_t)v26,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  GrandQuestSvtController__SetServantPosition(this, 1, 1, 0, v28);
  Master_object = (BlankEarthSpotMaster_o *)this->fields.blankEarthSpotEntity;
  if ( !Master_object )
    goto LABEL_59;
  Master_object = (BlankEarthSpotMaster_o *)BlankEarthSpotEntity__GetGrandImageId(
                                              (BlankEarthSpotEntity_o *)Master_object,
                                              -1,
                                              0);
  if ( !*p_blankEarthSpotEntity )
    goto LABEL_59;
  v29 = (int)Master_object;
  Master_object = (BlankEarthSpotMaster_o *)BlankEarthSpotEntity__GetGrandLimitCount(*p_blankEarthSpotEntity, 0, 0);
  if ( !*p_blankEarthSpotEntity )
    goto LABEL_59;
  v30 = (int)Master_object;
  GrandFaceId = BlankEarthSpotEntity__GetGrandFaceId(*p_blankEarthSpotEntity, 0, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v31, v32);
  if ( !ImageLimitCount__TryGetGrandImageLimitCount(v29, v30, &imageLimitCount, 0) )
    imageLimitCount = v30;
  Master_object = (BlankEarthSpotMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_59;
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Master_object,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
  if ( !Master_object )
    goto LABEL_59;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        (SvtMultiPortraitMaster_o *)Master_object,
                        v29,
                        imageLimitCount,
                        2,
                        0);
  if ( EntityListOrderBy )
  {
    v35 = (System_Collections_Generic_List_object__o *)EntityListOrderBy;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    {
      action = callback;
      v36 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__;
      *(_DWORD *)(v7 + 24) = v35->fields._size;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v93,
        v35,
        v36);
      v94 = v93;
      v93.fields._list = 0;
      *(_QWORD *)&v93.fields._index = &v94;
      while ( 1 )
      {
        v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v94,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
        if ( !v37 )
          break;
        current = v94.fields._current;
        if ( !v94.fields._current )
          sub_21FFECC(v37, v38);
        klass_high = HIDWORD(v94.fields._current[2].klass);
        svtFigureRoot = (UnityEngine_Component_o *)this->fields.svtFigureRoot;
        if ( klass_high >= 1 )
          v42 = klass_high + 1;
        else
          v42 = 1;
        if ( !svtFigureRoot )
          sub_21FFECC(0, v38);
        gameObject = UnityEngine_Component__get_gameObject(svtFigureRoot, 0);
        v44 = *(System_Action_o **)(v7 + 32);
        klass = (int32_t)current[2].klass;
        v46 = gameObject;
        if ( !v44 )
        {
          v44 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v7,
            Method_GrandQuestSvtController___c__DisplayClass24_0__SetServant_b__0__,
            0);
          *(_QWORD *)(v7 + 32) = v44;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v44, v47, v48, v49, v50, v51, v52);
        }
        PrefabForImageId = StandFigureManager__CreatePrefabForImageId(v46, klass, 1, GrandFaceId, v42, v44, 0, -1, 0, 0);
        v61 = (UnityEngine_Component_o *)PrefabForImageId;
        if ( !PrefabForImageId )
          sub_21FFECC(0, v54);
        PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
          (int32_t)current,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
        transform = UnityEngine_Component__get_transform(v61, 0);
        if ( !transform )
          sub_21FFECC(0, v63);
        UnityEngine_Transform__set_localPosition(transform, this->fields.StandBasePosition, 0);
        monitor = v61[1].monitor;
        if ( !monitor )
          sub_21FFECC(0, v64);
        (*(void (__fastcall **)(void *, _QWORD, double))(*(_QWORD *)monitor + 440LL))(
          monitor,
          *(_QWORD *)(*(_QWORD *)monitor + 448LL),
          0.0);
        listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
        if ( !listFigureR
          || (items = listFigureR->fields._items,
              v75 = Method_System_Collections_Generic_List_UIStandFigureR__Add__,
              ++listFigureR->fields._version,
              !items) )
        {
          sub_21FFECC(listFigureR, v66);
        }
        size = listFigureR->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            listFigureR,
            (Il2CppObject *)v61,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &items->obj.klass + size;
          listFigureR->fields._size = size + 1;
          v77[4] = (Il2CppClass *)v61;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v77 + 4), (int32_t)v61, v67, v68, v69, v70, v71, v72);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v94,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      callback = action;
      goto LABEL_57;
    }
  }
  Master_object = (BlankEarthSpotMaster_o *)this->fields.svtFigureRoot;
  if ( !Master_object )
    goto LABEL_59;
  v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  v79 = imageLimitCount;
  v80 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v80, (Il2CppObject *)this, Method_GrandQuestSvtController_SetFigureBaseSetting__, 0);
  Master_object = (BlankEarthSpotMaster_o *)StandFigureManager__CreateRenderPrefab_47607168(
                                              v78,
                                              v29,
                                              v79,
                                              1,
                                              GrandFaceId,
                                              1,
                                              v80,
                                              0,
                                              -1,
                                              0,
                                              0);
  if ( !Master_object )
    goto LABEL_59;
  v81 = (Il2CppObject *)Master_object;
  Master_object = (BlankEarthSpotMaster_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
  if ( !Master_object
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)Master_object,
          this->fields.StandBasePosition,
          0),
        (Master_object = (BlankEarthSpotMaster_o *)v81[2].klass) == 0)
    || (((void (__fastcall *)(BlankEarthSpotMaster_o *, const MethodInfo *, double))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
          Master_object,
          Master_object->klass->vtable._8_ReplacedForThread.method,
          0.0),
        (Master_object = (BlankEarthSpotMaster_o *)this->fields.listFigureR) == 0)
    || (v88 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v89 = Method_System_Collections_Generic_List_UIStandFigureR__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v88) )
  {
LABEL_59:
    sub_21FFECC(Master_object, v9);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v88 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      v81,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = v88 + 8 * MasterName_k__BackingField_low;
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_QWORD *)(v91 + 32) = v81;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v91 + 32), (int32_t)v81, v82, v83, v84, v85, v86, v87);
  }
LABEL_57:
  ActionExtensions__Call(callback, 0);
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
  float v10; // s8
  __int64 v11; // x2
  int32_t GrandOffsetX; // w8
  GrandQuestClassSelectController_c *v13; // x0
  float v14; // s9
  float x; // s8
  int *p_EXIT_TIME; // x8
  int v17; // s9
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  GrandQuestClassSelectController_c *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v7 = immediately;
  if ( (byte_5933196 & 1) == 0 )
  {
    sub_21FFC50(&GrandQuestClassSelectController_TypeInfo);
    byte_5933196 = 1;
  }
  this->fields.currentViewType = viewType;
  if ( viewType != 2 )
  {
    v20 = GrandQuestClassSelectController_TypeInfo;
    x = this->fields.RootCenterPosition.fields.x;
    v = *(_QWORD *)&this->fields.RootCenterPosition.fields.y;
    if ( !*(&GrandQuestClassSelectController_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo, immediately, *(_QWORD *)&viewType);
      v20 = GrandQuestClassSelectController_TypeInfo;
    }
    p_EXIT_TIME = (int *)&v20->static_fields->EXIT_TIME;
    if ( !v7 )
      goto LABEL_8;
LABEL_15:
    svtController = (UnityEngine_Component_o *)this->fields.svtController;
    if ( svtController )
    {
      gameObject = UnityEngine_Component__get_gameObject(svtController, 0);
      LODWORD(v23.fields.y) = v;
      v23.fields.x = x;
      v23.fields.z = *((float *)&v + 1);
      GameObjectExtensions__SetLocalPosition(gameObject, v23, 0);
      ActionExtensions__Call(callback, 0);
      return;
    }
LABEL_17:
    sub_21FFECC(svtController, immediately);
  }
  svtController = (UnityEngine_Component_o *)this->fields.blankEarthSpotEntity;
  if ( !svtController )
    goto LABEL_17;
  v10 = this->fields.RootLeftPosition.fields.x;
  v = *(_QWORD *)&this->fields.RootLeftPosition.fields.y;
  GrandOffsetX = BlankEarthSpotEntity__GetGrandOffsetX((BlankEarthSpotEntity_o *)svtController, 0, 0);
  v13 = GrandQuestClassSelectController_TypeInfo;
  v14 = (float)GrandOffsetX;
  if ( !*(&GrandQuestClassSelectController_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo, immediately, v11);
    v13 = GrandQuestClassSelectController_TypeInfo;
  }
  x = v10 + v14;
  p_EXIT_TIME = (int *)&v13->static_fields->INTO_TIME;
  if ( v7 )
    goto LABEL_15;
LABEL_8:
  v17 = *p_EXIT_TIME;
  svtController = (UnityEngine_Component_o *)GrandQuestSvtController__CreateDefaultFigureEasing(
                                               this,
                                               (const MethodInfo *)immediately);
  if ( !svtController )
    goto LABEL_17;
  m_CachedPtr = svtController->fields.m_CachedPtr;
  *(_QWORD *)&immediately = svtController;
  if ( !m_CachedPtr )
    goto LABEL_17;
  if ( (*(_DWORD *)(m_CachedPtr + 24) & 0xFFFFFFFE) == 0 )
    sub_21FFED4(svtController);
  *(float *)(m_CachedPtr + 44) = x;
  *(_QWORD *)(m_CachedPtr + 48) = v;
  LODWORD(svtController[1].fields.m_CachedPtr) = v17;
  LODWORD(svtController[2].klass) = 17;
  GrandQuestSvtController__ExecFigureEasing(
    this,
    (GrandQuestSvtController_FigureEasing_o *)svtController,
    callback,
    v18);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_5933193 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__0__);
    sub_21FFC50(&GrandQuestSvtController___c__DisplayClass17_0_TypeInfo);
    byte_5933193 = 1;
  }
  v7 = sub_21FFEBC(GrandQuestSvtController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v7,
      Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__0__,
      0);
    GrandQuestSvtController__SetServant(this, warId, v22, v23);
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
  GrandQuestSvtController___c__DisplayClass17_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  GrandQuestSvtController_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_59331A1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass17_0_o *)sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__);
    byte_59331A1 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
  GrandQuestSvtController__SetServantPosition(_4__this, 1, 1, _9__1, v2);
}


void GrandQuestSvtController___c__DisplayClass17_0___StartUp_b__1(
        GrandQuestSvtController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
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
  GrandQuestSvtController___c__DisplayClass18_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  GrandQuestSvtController_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_59331A2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass18_0_o *)sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__);
    byte_59331A2 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
  GrandQuestSvtController__SetServantPosition(_4__this, 1, 2, _9__1, v2);
}


void GrandQuestSvtController___c__DisplayClass18_0___Resume_b__1(
        GrandQuestSvtController___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
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
  System_Action_o *_9__2; // x23
  GrandQuestSvtController_o *_4__this; // x20
  int32_t viewType; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_59331A3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass19_0_o *)sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__);
    byte_59331A3 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  viewType = v3->fields.viewType;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
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
  GrandQuestSvtController___c__DisplayClass22_1_o *v3; // x19
  struct GrandQuestSvtController___c__DisplayClass22_0_o *CS___8__locals1; // x8
  GrandQuestSvtController_o *_4__this; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_59331A4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__);
    byte_59331A4 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = CS___8__locals1->fields.__4__this;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
LABEL_8:
    sub_21FFECC(this, method);
  GrandQuestSvtController__ChangeViewType(_4__this, 1, _9__2, v2);
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
  GrandQuestSvtController___c__DisplayClass22_2_o *v3; // x19
  struct GrandQuestSvtController___c__DisplayClass22_0_o *CS___8__locals2; // x8
  GrandQuestSvtController_o *_4__this; // x20
  int32_t warId; // w21
  System_Action_o *_9__5; // x23
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v3 = this;
  if ( (byte_59331A5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass22_2_o *)sub_21FFC50(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__);
    byte_59331A5 = 1;
  }
  CS___8__locals2 = v3->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_8;
  _4__this = CS___8__locals2->fields.__4__this;
  warId = CS___8__locals2->fields.warId;
  _9__5 = v3->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
LABEL_8:
    sub_21FFECC(this, method);
  GrandQuestSvtController__ChangeServant(_4__this, warId, _9__5, v2);
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
    sub_21FFECC(0, method);
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
      sub_21FFECC(0, method);
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
  GrandQuestSvtController___c__DisplayClass28_0_o *v2; // x19
  struct EasingObject_o *easing; // x9
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x10
  float mNow; // s8
  struct GrandQuestSvtController_FigureEasing_o *v7; // x8
  struct System_Single_array *scale; // x9
  float z; // s12
  float x; // s10
  float y; // s11
  float v12; // s0
  struct GrandQuestSvtController_FigureEasing_o *v13; // x8
  struct System_Single_array *alpha; // x9
  float v15; // s9
  float v16; // s0
  struct GrandQuestSvtController_o *_4__this; // x8
  float v18; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct GrandQuestSvtController_o *v20; // x8
  struct GrandQuestSvtController_o *v21; // x8
  float v22; // s9
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x19
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_59331A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    this = (GrandQuestSvtController___c__DisplayClass28_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_59331A6 = 1;
  }
  easing = v2->fields.easing;
  memset(&v29, 0, sizeof(v29));
  if ( !easing )
    goto LABEL_27;
  figureEasing = v2->fields.figureEasing;
  if ( !figureEasing )
    goto LABEL_27;
  position = figureEasing->fields.position;
  if ( !position )
    goto LABEL_27;
  if ( LODWORD(position->max_length) < 2 )
    goto LABEL_28;
  mNow = easing->fields.mNow;
  v30 = Easing__Func(position->m_Items[0], position->m_Items[1], mNow, figureEasing->fields.easingTypePosition, 0);
  v7 = v2->fields.figureEasing;
  if ( !v7 )
    goto LABEL_27;
  scale = v7->fields.scale;
  if ( !scale )
    goto LABEL_27;
  if ( LODWORD(scale->max_length) < 2 )
    goto LABEL_28;
  z = v30.fields.z;
  x = v30.fields.x;
  y = v30.fields.y;
  v12 = Easing__Func_55915380(scale->m_Items[0], scale->m_Items[1], mNow, v7->fields.easingTypeScale, 0);
  v13 = v2->fields.figureEasing;
  if ( !v13 || (alpha = v13->fields.alpha) == 0 )
LABEL_27:
    sub_21FFECC(this, method);
  if ( LODWORD(alpha->max_length) < 2 )
LABEL_28:
    sub_21FFED4(this);
  v15 = v12;
  v16 = Easing__Func_55915380(alpha->m_Items[0], alpha->m_Items[1], mNow, v13->fields.easingTypeAlpha, 0);
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)_4__this->fields.svtController;
  if ( !this )
    goto LABEL_27;
  v18 = v16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v31, 0);
  v20 = v2->fields.__4__this;
  if ( !v20 )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v20->fields.svtFigureScaleRoot;
  if ( !this )
    goto LABEL_27;
  v32.fields.x = v15;
  v32.fields.y = v15;
  v32.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v32, 0);
  v21 = v2->fields.__4__this;
  if ( !v21 )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v21->fields.listFigureR;
  if ( !this )
    goto LABEL_27;
  v22 = (float)(v2->fields.bodySizeY * (float)((float)(v15 * v2->fields.servantScale) + -1.0)) / v15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v23 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_21FFECC(v23, v24);
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29.fields._current, 0);
    GameObjectExtensions__SetLocalPosition_42876224(v26, 0.0, v22, 0.0, 0);
    v28 = *(__int64 *)((char *)&qword_20 + (_QWORD)current);
    if ( !v28 )
      sub_21FFECC(0, v27);
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)v28 + 440LL))(
      v28,
      *(_QWORD *)(*(_QWORD *)v28 + 448LL),
      v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


void GrandQuestSvtController___c__DisplayClass28_0___ExecFigureEasing_b__1(
        GrandQuestSvtController___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController___c__DisplayClass28_0_o *v2; // x19
  struct GrandQuestSvtController_o *_4__this; // x8
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x8
  struct GrandQuestSvtController_o *v6; // x8
  struct GrandQuestSvtController_FigureEasing_o *v7; // x9
  struct System_Single_array *scale; // x9
  struct GrandQuestSvtController_FigureEasing_o *v9; // x8
  struct System_Single_array *v10; // x8
  struct GrandQuestSvtController_o *v11; // x9
  float v12; // s8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  struct GrandQuestSvtController_FigureEasing_o *v19; // x8
  struct System_Single_array *alpha; // x8
  Il2CppClass *klass; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_59331A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    this = (GrandQuestSvtController___c__DisplayClass28_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_59331A7 = 1;
  }
  _4__this = v2->fields.__4__this;
  memset(&v23, 0, sizeof(v23));
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
  if ( (position->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_33;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)this, position->m_Items[1], 0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_32;
  v7 = v2->fields.figureEasing;
  if ( !v7 )
    goto LABEL_32;
  scale = v7->fields.scale;
  if ( !scale )
    goto LABEL_32;
  if ( (scale->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_33;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v6->fields.svtFigureScaleRoot;
  if ( !this
    || (v24.fields.x = scale->m_Items[1],
        v24.fields.z = 1.0,
        v24.fields.y = v24.fields.x,
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v24, 0),
        (v9 = v2->fields.figureEasing) == 0)
    || (v10 = v9->fields.scale) == 0 )
  {
LABEL_32:
    sub_21FFECC(this, method);
  }
  if ( (v10->max_length & 0xFFFFFFFE) == 0 )
LABEL_33:
    sub_21FFED4(this);
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_32;
  this = (GrandQuestSvtController___c__DisplayClass28_0_o *)v11->fields.listFigureR;
  if ( !this )
    goto LABEL_32;
  v12 = (float)(v2->fields.bodySizeY * (float)((float)(v2->fields.servantScale * v10->m_Items[1]) + -1.0))
      / v10->m_Items[1];
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v13 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_21FFECC(v13, v14);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23.fields._current, 0);
    GameObjectExtensions__SetLocalPosition_42876224(gameObject, 0.0, v12, 0.0, 0);
    v19 = v2->fields.figureEasing;
    if ( !v19 )
      sub_21FFECC(v17, v18);
    alpha = v19->fields.alpha;
    if ( !alpha )
      sub_21FFECC(v17, v18);
    if ( (alpha->max_length & 0xFFFFFFFE) == 0 )
      sub_21FFED4(v17);
    klass = current[2].klass;
    if ( !klass )
      sub_21FFECC(0, v18);
    (*((void (__fastcall **)(Il2CppClass *, _QWORD, float))klass->_1.image + 55))(
      klass,
      *((_QWORD *)klass->_1.image + 56),
      alpha->m_Items[1]);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  ActionExtensions__Call(v2->fields.callback, 0);
}