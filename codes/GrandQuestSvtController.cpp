void GrandQuestSvtController___ctor(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CE92B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UIStandFigureR__TypeInfo);
    byte_4CE92B2 = 1;
  }
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.RootCenterPosition.fields.x = xmmword_CF6120;
  *(_QWORD *)&this->fields.RootLeftPosition.fields.y = 1133510656;
  *(_QWORD *)&this->fields.StandBasePosition.fields.x = v4;
  this->fields.StandBasePosition.fields.z = z;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UIStandFigureR__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
  this->fields.listFigureR = (struct System_Collections_Generic_List_UIStandFigureR__o *)v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.listFigureR, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_4CE92AA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass23_0__ChangeServant_b__0__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass23_0_TypeInfo);
    byte_4CE92AA = 1;
  }
  v7 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  UnityEngine_Object_o *v9; // x20
  struct System_Collections_Generic_List_UIStandFigureR__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CE92B0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE92B0 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    listFigureR,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v4 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C7BD40(v4, v5);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14.fields._current, 0);
    if ( !gameObject )
      sub_1C7BD40(0, v8);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  v10 = this->fields.listFigureR;
  if ( !v10 )
LABEL_17:
    sub_1C7BD40(listFigureR, method);
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
  __int64 v5; // x1
  struct GrandQuestSvtController_o *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int m_CancellationTokenSource; // w8
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int v28; // w8
  GrandQuestSvtController_FigureEasing_o *result; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE92AE & 1) == 0 )
  {
    sub_1C7BAE8(&GrandQuestSvtController_FigureEasing_TypeInfo);
    sub_1C7BAE8(&float___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3___TypeInfo);
    byte_4CE92AE = 1;
  }
  v3 = sub_1C7BD34(GrandQuestSvtController_FigureEasing_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  svtController = (struct GrandQuestSvtController_o *)sub_1C7BB90(UnityEngine_Vector3___TypeInfo, 2);
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
  if ( LODWORD(v6->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_17;
  *(UnityEngine_Vector3_o *)((char *)&v6->fields.svtFigureRoot + 4) = v31;
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  svtController = (struct GrandQuestSvtController_o *)sub_1C7BB90(float___TypeInfo, 2);
  if ( !svtController )
    goto LABEL_16;
  m_CancellationTokenSource = (int)svtController->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource
    || (LODWORD(svtController->fields.svtController) = 1065353216, m_CancellationTokenSource == 1) )
  {
LABEL_17:
    sub_1C7BD48(svtController);
  }
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v3 + 24) = svtController;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)svtController, v15, v16, v17, v18, v19, v20);
  svtController = (struct GrandQuestSvtController_o *)sub_1C7BB90(float___TypeInfo, 2);
  if ( !svtController )
LABEL_16:
    sub_1C7BD40(svtController, v5);
  v28 = (int)svtController->fields.m_CancellationTokenSource;
  if ( !v28 )
    goto LABEL_17;
  LODWORD(svtController->fields.svtController) = 1065353216;
  if ( v28 == 1 )
    goto LABEL_17;
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v3 + 32) = svtController;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)svtController, v22, v23, v24, v25, v26, v27);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  float GrandBaseScale; // s0
  __int64 v37; // x8
  EasingObject_o *v38; // x20
  float v39; // s8
  System_Action_o *v40; // x21
  System_Action_o *v41; // x22
  __int64 v42; // x8

  if ( (byte_4CE92AF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__0__);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__1__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass28_0_TypeInfo);
    byte_4CE92AF = 1;
  }
  v7 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 24) = figureEasing;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)figureEasing, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31C8BB0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v7 + 16) = Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)Component_object, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v7 + 44) = 1136623616;
  blankEarthSpotEntity = this->fields.blankEarthSpotEntity;
  if ( !blankEarthSpotEntity )
    goto LABEL_9;
  GrandBaseScale = BlankEarthSpotEntity__GetGrandBaseScale(blankEarthSpotEntity, 0.9, 0);
  v37 = *(_QWORD *)(v7 + 24);
  *(float *)(v7 + 40) = GrandBaseScale;
  if ( !v37
    || (v38 = *(EasingObject_o **)(v7 + 16),
        v39 = *(float *)(v37 + 40),
        v40 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v40,
          (Il2CppObject *)v7,
          Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__0__,
          0),
        v41 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v41,
          (Il2CppObject *)v7,
          Method_GrandQuestSvtController___c__DisplayClass28_0__ExecFigureEasing_b__1__,
          0),
        (v42 = *(_QWORD *)(v7 + 24)) == 0)
    || !v38 )
  {
LABEL_9:
    sub_1C7BD40(blankEarthSpotEntity, v9);
  }
  EasingObject__Play_49574132(v38, 0.0, 1.0, v39, v40, v41, *(float *)(v42 + 44), 0, 0);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int max_length; // w8
  const MethodInfo *v25; // x3
  float v26; // s0
  float v27; // s1

  if ( (byte_4CE92AD & 1) == 0 )
  {
    sub_1C7BAE8(&float___TypeInfo);
    byte_4CE92AD = 1;
  }
  DefaultFigureEasing = GrandQuestSvtController__CreateDefaultFigureEasing(this, (const MethodInfo *)isStartUp);
  v10 = (struct System_Single_array *)sub_1C7BB90(float___TypeInfo, 2);
  if ( !v10 )
    goto LABEL_14;
  v11 = v10;
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_15;
  v10->m_Items[1] = 1.0;
  if ( !DefaultFigureEasing
    || (DefaultFigureEasing->fields.alpha = v10,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&DefaultFigureEasing->fields.alpha,
          (int32_t)v10,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v10 = (struct System_Single_array *)sub_1C7BB90(float___TypeInfo, 2)) == 0) )
  {
LABEL_14:
    sub_1C7BD40(v10, v11);
  }
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[0] = 1.4, max_length == 1) )
LABEL_15:
    sub_1C7BD48(v10);
  v10->m_Items[1] = 1.0;
  DefaultFigureEasing->fields.scale = v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&DefaultFigureEasing->fields.scale,
    (int32_t)v10,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = 0.3;
  v27 = 1.2;
  if ( immediately )
  {
    v26 = 0.0;
    v27 = 0.0;
  }
  if ( !isStartUp )
    v26 = 0.0;
  DefaultFigureEasing->fields.easingTime = v27;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Func_bool__o *v21; // x21
  __int64 v22; // x19
  SchedulerTaskBase_TaskCallback_o *v23; // x0
  intptr_t *v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Func_bool__o *v31; // x21
  SchedulerTaskBase_TaskCallback_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4CE92A9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C7BAE8(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass22_0_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass22_1_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass22_2_TypeInfo);
    byte_4CE92A9 = 1;
  }
  v5 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = warId;
  if ( this->fields.currentWarId == warId )
  {
    v14 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass22_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    if ( !v14 )
      goto LABEL_11;
    *(_QWORD *)(v14 + 24) = v5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 24), v5, v15, v16, v17, v18, v19, v20);
    *(_BYTE *)(v14 + 16) = 1;
    v21 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v21,
      (Il2CppObject *)v14,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__0__,
      0);
    v22 = sub_1C7BD34(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v22, v21, 0);
    v23 = (SchedulerTaskBase_TaskCallback_o *)sub_1C7BD34(SchedulerTaskBase_TaskCallback_TypeInfo);
    v24 = &Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__1__;
  }
  else
  {
    v14 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass22_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    if ( !v14 )
      goto LABEL_11;
    *(_QWORD *)(v14 + 24) = v5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 24), v5, v25, v26, v27, v28, v29, v30);
    *(_BYTE *)(v14 + 16) = 1;
    v31 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v31,
      (Il2CppObject *)v14,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__3__,
      0);
    v22 = sub_1C7BD34(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v22, v31, 0);
    v23 = (SchedulerTaskBase_TaskCallback_o *)sub_1C7BD34(SchedulerTaskBase_TaskCallback_TypeInfo);
    v24 = &Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__4__;
  }
  v32 = v23;
  SchedulerTaskBase_TaskCallback___ctor(v23, (Il2CppObject *)v14, *v24, 0);
  if ( !v22 )
LABEL_11:
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v22 + 24) = v32;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 24), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  return (SchedulerTaskBase_o *)v22;
}


SchedulerTaskBase_o *GrandQuestSvtController__GetTaskOfMoveServant(
        GrandQuestSvtController_o *this,
        int32_t viewType,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Func_bool__o *v14; // x20
  __int64 v15; // x19
  SchedulerTaskBase_TaskCallback_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CE92A7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Func_bool__TypeInfo);
    sub_1C7BAE8(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C7BAE8(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
    byte_4CE92A7 = 1;
  }
  v5 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 32) = viewType;
  *(_BYTE *)(v5 + 16) = 1;
  v14 = (System_Func_bool__o *)sub_1C7BD34(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__0__,
    0);
  v15 = sub_1C7BD34(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v15, v14, 0);
  v16 = (SchedulerTaskBase_TaskCallback_o *)sub_1C7BD34(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__1__,
    0);
  if ( !v15 )
LABEL_6:
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v15 + 24) = v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  return (SchedulerTaskBase_o *)v15;
}


void GrandQuestSvtController__Init(
        GrandQuestSvtController_o *this,
        GrandQuestRootComponent_o *grandQuestRoot,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestSvtController_o *v8; // x19
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( !this->fields.initialized )
  {
    v8 = this;
    this->fields.currentViewType = 0;
    this->fields.currentWarId = -1;
    this->fields.blankEarthSpotEntity = 0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.blankEarthSpotEntity,
      0,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    GrandQuestSvtController__ClearFigure(v8, v10);
    v8->fields.rootComponent = grandQuestRoot;
    v8 = (GrandQuestSvtController_o *)((char *)v8 + 56);
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v8, (int32_t)grandQuestRoot, v11, v12, v13, v14, v15, v16);
    LOBYTE(v8->fields.RootCenterPosition.fields.x) = 1;
  }
}


void GrandQuestSvtController__Quit(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.currentViewType = 0;
  this->fields.currentWarId = -1;
  this->fields.blankEarthSpotEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.blankEarthSpotEntity, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_4CE92A6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__0__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass18_0_TypeInfo);
    byte_4CE92A6 = 1;
  }
  v7 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  bool v6; // w19
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CE92B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4CE92B1 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    sub_1C7BD40(0, disp);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    listFigureR,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v6 = disp;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1C7BD40(0, v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10.fields._current, 0);
    if ( !gameObject )
      sub_1C7BD40(0, v9);
    UnityEngine_GameObject__SetActive(gameObject, v6, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
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

  if ( (byte_4CE92AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4CE92AC = 1;
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
    sub_1C7BD40(blankEarthSpotEntity, method);
  }
  v7 = (float)(int)blankEarthSpotEntity;
  v8 = (float)v6;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this->fields.listFigureR,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v9 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C7BD40(v9, v10);
    klass = v21.fields._current[2].klass;
    if ( !klass )
      sub_1C7BD40(0, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
    v15 = (UnityEngine_Component_o *)current[2].klass;
    if ( !v15 )
      sub_1C7BD40(0, v13);
    v16 = UnityEngine_Component__get_gameObject(v15, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(v16, 0);
    LocalPosition.fields.x = LocalPosition.fields.x + v8;
    LocalPosition.fields.y = LocalPosition.fields.y + v7;
    LocalPosition.fields.z = LocalPosition.fields.z + 0.0;
    GameObjectExtensions__SetLocalPosition(gameObject, LocalPosition, 0);
    v18 = (UnityEngine_Component_o *)current[2].klass;
    if ( !v18 )
      sub_1C7BD40(0, v17);
    v19 = UnityEngine_Component__get_gameObject(v18, 0);
    v23.fields.z = 1.0;
    v23.fields.x = v5;
    v23.fields.y = v5;
    GameObjectExtensions__SetLocalScale(v19, v23, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x0
  BlankEarthSpotEntity_array *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BlankEarthSpotEntity_o *v25; // x1
  BlankEarthSpotEntity_o **p_blankEarthSpotEntity; // x22
  const MethodInfo *v27; // x4
  int32_t v28; // w19
  int32_t v29; // w24
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x0
  System_Collections_Generic_List_object__o *v31; // x24
  System_Action_o **v32; // x24
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x26
  int klass_high; // w8
  UnityEngine_Component_o *svtFigureRoot; // x0
  int32_t v38; // w25
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v40; // x29
  int32_t klass; // w28
  UnityEngine_GameObject_o *v42; // x27
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  UnityEngine_Component_o *v57; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v59; // x1
  __int64 v60; // x1
  void *monitor; // x0
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_Collections_Generic_List_object__o *listFigureR; // x0
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x8
  System_Action_o *v74; // x19
  UnityEngine_GameObject_o *v75; // x0
  int32_t v76; // w23
  UnityEngine_GameObject_o *v77; // x24
  System_Action_o *v78; // x25
  Il2CppObject *v79; // x21
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v89; // x8
  System_Action_o *action; // [xsp+28h] [xbp-A8h]
  int32_t faceType; // [xsp+34h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+50h] [xbp-80h] BYREF
  int32_t imageLimitCount; // [xsp+6Ch] [xbp-64h] BYREF

  if ( (byte_4CE92AB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C7BAE8(&Method_GrandQuestSvtController_SetFigureBaseSetting__);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass24_0__SetServant_b__0__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass24_0_TypeInfo);
    byte_4CE92AB = 1;
  }
  imageLimitCount = 0;
  memset(&v93, 0, sizeof(v93));
  v7 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_61;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.currentWarId != warId )
  {
    GrandQuestSvtController__ClearFigure(this, v16);
    this->fields.currentWarId = warId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    if ( Master_object )
    {
      v18 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0);
      Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                  (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
        return;
      if ( v18 )
      {
        if ( !LODWORD(v18->max_length) )
          sub_1C7BD48(Master_object);
        v25 = v18->m_Items[0];
        this->fields.blankEarthSpotEntity = v25;
        p_blankEarthSpotEntity = &this->fields.blankEarthSpotEntity;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.blankEarthSpotEntity,
          (int32_t)v25,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        GrandQuestSvtController__SetServantPosition(this, 1, 1, 0, v27);
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
            v28 = (int)Master_object;
            Master_object = (BlankEarthSpotMaster_o *)BlankEarthSpotEntity__GetGrandLimitCount(
                                                        *p_blankEarthSpotEntity,
                                                        0,
                                                        0);
            if ( *p_blankEarthSpotEntity )
            {
              v29 = (int)Master_object;
              faceType = BlankEarthSpotEntity__GetGrandFaceId(*p_blankEarthSpotEntity, 0, 0);
              if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
              if ( !ImageLimitCount__TryGetGrandImageLimitCount(v28, v29, &imageLimitCount, 0) )
                imageLimitCount = v29;
              Master_object = (BlankEarthSpotMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Master_object )
              {
                Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)Master_object,
                                                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
                if ( Master_object )
                {
                  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                                        (SvtMultiPortraitMaster_o *)Master_object,
                                        v28,
                                        imageLimitCount,
                                        2,
                                        0);
                  if ( EntityListOrderBy )
                  {
                    v31 = (System_Collections_Generic_List_object__o *)EntityListOrderBy;
                    if ( System_Linq_Enumerable__Any_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)EntityListOrderBy,
                           (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
                    {
                      *(_DWORD *)(v7 + 24) = v31->fields._size;
                      System_Collections_Generic_List_object___GetEnumerator(
                        (System_Collections_Generic_List_Enumerator_T__o *)&v92,
                        v31,
                        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
                      v93 = v92;
                      v32 = (System_Action_o **)(v7 + 32);
                      while ( 1 )
                      {
                        v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                &v93,
                                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
                        if ( !v33 )
                          break;
                        current = v93.fields._current;
                        if ( !v93.fields._current )
                          sub_1C7BD40(v33, v34);
                        klass_high = HIDWORD(v93.fields._current[2].klass);
                        svtFigureRoot = (UnityEngine_Component_o *)this->fields.svtFigureRoot;
                        if ( klass_high >= 1 )
                          v38 = klass_high + 1;
                        else
                          v38 = 1;
                        if ( !svtFigureRoot )
                          sub_1C7BD40(0, v34);
                        gameObject = UnityEngine_Component__get_gameObject(svtFigureRoot, 0);
                        v40 = *v32;
                        klass = (int32_t)current[2].klass;
                        v42 = gameObject;
                        if ( !*v32 )
                        {
                          v40 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                          System_Action___ctor(
                            v40,
                            (Il2CppObject *)v7,
                            Method_GrandQuestSvtController___c__DisplayClass24_0__SetServant_b__0__,
                            0);
                          *v32 = v40;
                          sub_1C7BA8C(
                            (GrandQuestFolderBoardItem_o *)(v7 + 32),
                            (int32_t)v40,
                            v43,
                            v44,
                            v45,
                            v46,
                            v47,
                            v48);
                        }
                        PrefabForImageId = StandFigureManager__CreatePrefabForImageId(
                                             v42,
                                             klass,
                                             1,
                                             faceType,
                                             v38,
                                             v40,
                                             0,
                                             -1,
                                             0,
                                             0);
                        v57 = (UnityEngine_Component_o *)PrefabForImageId;
                        if ( !PrefabForImageId )
                          sub_1C7BD40(0, v50);
                        PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)&PrefabForImageId->fields.svtMultiPortraitEntity,
                          (int32_t)current,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56);
                        transform = UnityEngine_Component__get_transform(v57, 0);
                        if ( !transform )
                          sub_1C7BD40(0, v59);
                        UnityEngine_Transform__set_localPosition(transform, this->fields.StandBasePosition, 0);
                        monitor = v57[1].monitor;
                        if ( !monitor )
                          sub_1C7BD40(0, v60);
                        (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)monitor + 440LL))(
                          monitor,
                          *(_QWORD *)(*(_QWORD *)monitor + 448LL),
                          0.0);
                        listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
                        if ( !listFigureR )
                          sub_1C7BD40(0, v62);
                        items = listFigureR->fields._items;
                        v71 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                        ++listFigureR->fields._version;
                        if ( !items )
                          sub_1C7BD40(listFigureR, v62);
                        size = listFigureR->fields._size;
                        if ( (unsigned int)size >= LODWORD(items->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            listFigureR,
                            (Il2CppObject *)v57,
                            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v73 = &items->obj.klass + size;
                          listFigureR->fields._size = size + 1;
                          v73[4] = (Il2CppClass *)v57;
                          sub_1C7BA8C(
                            (GrandQuestFolderBoardItem_o *)(v73 + 4),
                            (int32_t)v57,
                            v63,
                            v64,
                            v65,
                            v66,
                            v67,
                            v68);
                        }
                      }
                      System_Collections_Generic_List_Enumerator_object___Dispose(
                        &v93,
                        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
                      v74 = action;
                      goto LABEL_58;
                    }
                  }
                  Master_object = (BlankEarthSpotMaster_o *)this->fields.svtFigureRoot;
                  if ( Master_object )
                  {
                    v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                    v76 = imageLimitCount;
                    v77 = v75;
                    v78 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                    System_Action___ctor(
                      v78,
                      (Il2CppObject *)this,
                      Method_GrandQuestSvtController_SetFigureBaseSetting__,
                      0);
                    Master_object = (BlankEarthSpotMaster_o *)StandFigureManager__CreateRenderPrefab_41240676(
                                                                v77,
                                                                v28,
                                                                v76,
                                                                1,
                                                                faceType,
                                                                1,
                                                                v78,
                                                                0,
                                                                -1,
                                                                0,
                                                                0);
                    if ( Master_object )
                    {
                      v79 = (Il2CppObject *)Master_object;
                      Master_object = (BlankEarthSpotMaster_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)Master_object,
                                                                  0);
                      v74 = action;
                      if ( Master_object )
                      {
                        UnityEngine_Transform__set_localPosition(
                          (UnityEngine_Transform_o *)Master_object,
                          this->fields.StandBasePosition,
                          0);
                        Master_object = (BlankEarthSpotMaster_o *)v79[2].klass;
                        if ( Master_object )
                        {
                          ((void (__fastcall *)(BlankEarthSpotMaster_o *, const MethodInfo *, float))Master_object->klass->vtable._8_ReplacedForThread.methodPtr)(
                            Master_object,
                            Master_object->klass->vtable._8_ReplacedForThread.method,
                            0.0);
                          Master_object = (BlankEarthSpotMaster_o *)this->fields.listFigureR;
                          if ( Master_object )
                          {
                            v86 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
                            v87 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                            ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
                            if ( v86 )
                            {
                              MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                              if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v86 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)Master_object,
                                  v79,
                                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v89 = v86 + 8 * MasterName_k__BackingField_low;
                                LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low
                                                                                           + 1;
                                *(_QWORD *)(v89 + 32) = v79;
                                sub_1C7BA8C(
                                  (GrandQuestFolderBoardItem_o *)(v89 + 32),
                                  (int32_t)v79,
                                  v80,
                                  v81,
                                  v82,
                                  v83,
                                  v84,
                                  v85);
                              }
LABEL_58:
                              v17 = v74;
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
    sub_1C7BD40(Master_object, v9);
  }
  v17 = callback;
LABEL_59:
  ActionExtensions__Call(v17, 0);
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
  const MethodInfo *v18; // x3
  intptr_t m_CachedPtr; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v7 = immediately;
  if ( (byte_4CE92A8 & 1) == 0 )
  {
    sub_1C7BAE8(&GrandQuestClassSelectController_TypeInfo);
    byte_4CE92A8 = 1;
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
      v21.fields.x = x;
      v21.fields.y = y;
      v21.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v21, 0);
      ActionExtensions__Call(callback, 0);
      return;
    }
LABEL_17:
    sub_1C7BD40(svtController, immediately);
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
    sub_1C7BD48(svtController);
  *(float *)(m_CachedPtr + 44) = x;
  *(float *)(m_CachedPtr + 48) = y;
  *(float *)(m_CachedPtr + 52) = z;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_4CE92A5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__0__);
    sub_1C7BAE8(&GrandQuestSvtController___c__DisplayClass17_0_TypeInfo);
    byte_4CE92A5 = 1;
  }
  v7 = sub_1C7BD34(GrandQuestSvtController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
  }
  else
  {
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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
  System_Action_o *_9__1; // x21
  GrandQuestSvtController_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4CE92B3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass17_0_o *)sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__);
    byte_4CE92B3 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass17_0__StartUp_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(0, method);
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
  System_Action_o *_9__1; // x21
  GrandQuestSvtController_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4CE92B4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass18_0_o *)sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__);
    byte_4CE92B4 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass18_0__Resume_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(0, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CE92B5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass19_0_o *)sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__);
    byte_4CE92B5 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  viewType = v3->fields.viewType;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass19_0__GetTaskOfMoveServant_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C7BD40(this, method);
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
  System_Action_o *_9__2; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CE92B6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass22_1_o *)sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__);
    byte_4CE92B6 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_8;
  _4__this = CS___8__locals1->fields.__4__this;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass22_1__GetTaskOfChangeServant_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
LABEL_8:
    sub_1C7BD40(this, method);
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
  System_Action_o *_9__5; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v3 = this;
  if ( (byte_4CE92B7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    this = (GrandQuestSvtController___c__DisplayClass22_2_o *)sub_1C7BAE8(&Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__);
    byte_4CE92B7 = 1;
  }
  CS___8__locals2 = v3->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_8;
  _4__this = CS___8__locals2->fields.__4__this;
  warId = CS___8__locals2->fields.warId;
  _9__5 = v3->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass22_2__GetTaskOfChangeServant_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
LABEL_8:
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(0, method);
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
      sub_1C7BD40(0, method);
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
  float x; // s10
  float y; // s11
  float z; // s12
  float v12; // s0
  struct GrandQuestSvtController_FigureEasing_o *v13; // x8
  struct System_Single_array *alpha; // x9
  float v15; // s9
  long double v16; // q0
  struct GrandQuestSvtController_o *_4__this; // x8
  long double v18; // q8
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
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CE92B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    this = (GrandQuestSvtController___c__DisplayClass28_0_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4CE92B8 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  easing = v2->fields.easing;
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
  x = v30.fields.x;
  y = v30.fields.y;
  z = v30.fields.z;
  v12 = Easing__Func_49572956(scale->m_Items[0], scale->m_Items[1], mNow, v7->fields.easingTypeScale, 0);
  v13 = v2->fields.figureEasing;
  if ( !v13 || (alpha = v13->fields.alpha) == 0 )
LABEL_27:
    sub_1C7BD40(this, method);
  if ( LODWORD(alpha->max_length) < 2 )
LABEL_28:
    sub_1C7BD48(this);
  v15 = v12;
  *(float *)&v16 = Easing__Func_49572956(alpha->m_Items[0], alpha->m_Items[1], mNow, v13->fields.easingTypeAlpha, 0);
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
  v32.fields.z = 1.0;
  v32.fields.x = v15;
  v32.fields.y = v15;
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
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v23 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C7BD40(v23, v24);
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29.fields._current, 0);
    GameObjectExtensions__SetLocalPosition_36523428(v26, 0.0, v22, 0.0, 0);
    v28 = *(__int64 *)((char *)&qword_20 + (_QWORD)current);
    if ( !v28 )
      sub_1C7BD40(0, v27);
    (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v28 + 440LL))(
      v28,
      *(_QWORD *)(*(_QWORD *)v28 + 448LL),
      v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
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
  if ( (byte_4CE92B9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__);
    this = (GrandQuestSvtController___c__DisplayClass28_0_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
    byte_4CE92B9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_32;
  v7 = v2->fields.figureEasing;
  if ( !v7 )
    goto LABEL_32;
  scale = v7->fields.scale;
  if ( !scale )
    goto LABEL_32;
  if ( LODWORD(scale->max_length) <= 1 )
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
    sub_1C7BD40(this, method);
  }
  if ( LODWORD(v10->max_length) <= 1 )
LABEL_33:
    sub_1C7BD48(this);
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
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v13 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C7BD40(v13, v14);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23.fields._current, 0);
    GameObjectExtensions__SetLocalPosition_36523428(gameObject, 0.0, v12, 0.0, 0);
    v19 = v2->fields.figureEasing;
    if ( !v19 )
      sub_1C7BD40(v17, v18);
    alpha = v19->fields.alpha;
    if ( !alpha )
      sub_1C7BD40(v17, v18);
    if ( LODWORD(alpha->max_length) <= 1 )
      sub_1C7BD48(v17);
    klass = current[2].klass;
    if ( !klass )
      sub_1C7BD40(0, v18);
    (*((void (__fastcall **)(Il2CppClass *, _QWORD, float))klass->_1.image + 55))(
      klass,
      *((_QWORD *)klass->_1.image + 56),
      alpha->m_Items[1]);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  ActionExtensions__Call(v2->fields.callback, 0);
}