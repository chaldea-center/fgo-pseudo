void __fastcall GrandQuestSvtController___ctor(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v5; // d1
  float z; // s2
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4B3F839 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_UIStandFigureR___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_UIStandFigureR__TypeInfo, v3);
    byte_4B3F839 = 1;
  }
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B3E911 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *(_OWORD *)&this->fields.RootCenterPosition.fields.x = xmmword_BEB360;
  *(_QWORD *)&this->fields.RootLeftPosition.fields.y = 1133510656LL;
  *(_QWORD *)&this->fields.StandBasePosition.fields.x = v5;
  this->fields.StandBasePosition.fields.z = z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIStandFigureR__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIStandFigureR___ctor__);
  this->fields.listFigureR = (struct System_Collections_Generic_List_UIStandFigureR__o *)v7;
  sub_1BDB81C(&this->fields.listFigureR);
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
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4B3F831 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass20_0__ChangeServant_b__0__, v7);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass20_0_TypeInfo, v8);
    byte_4B3F831 = 1;
  }
  v9 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C(v9 + 16);
  *(_QWORD *)(v9 + 32) = callback;
  *(_DWORD *)(v9 + 24) = warId;
  sub_1BDB81C(v9 + 32);
  if ( this->fields.currentWarId == *(_DWORD *)(v9 + 24) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 32), 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestSvtController___c__DisplayClass20_0__ChangeServant_b__0__,
      0LL);
    GrandQuestSvtController__FadeOut(this, v12, v13);
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

  if ( (byte_4B3F837 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIStandFigureR__Clear__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B3F837 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    listFigureR,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v9 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1BDBAD4(v9, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19.fields._current, 0LL);
    if ( !gameObject )
      sub_1BDBAD4(0LL, v13);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v14, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  v15 = this->fields.listFigureR;
  if ( !v15 )
LABEL_17:
    sub_1BDBAD4(listFigureR, method);
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
  float v16; // s1
  float v17; // s2
  int m_CancellationTokenSource; // w8
  int v19; // w8
  GrandQuestSvtController_FigureEasing_o *result; // x0

  if ( (byte_4B3F835 & 1) == 0 )
  {
    sub_1BDB878(&GrandQuestSvtController_FigureEasing_TypeInfo, method);
    sub_1BDB878(&float___TypeInfo, v3);
    sub_1BDB878(&UnityEngine_Vector3___TypeInfo, v4);
    byte_4B3F835 = 1;
  }
  v5 = sub_1BDBAC4(GrandQuestSvtController_FigureEasing_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  svtController = (struct GrandQuestSvtController_o *)sub_1BDB920(UnityEngine_Vector3___TypeInfo, 2LL);
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
  LODWORD(v8->fields.rootComponent) = v13;
  svtController = this->fields.svtController;
  if ( !svtController )
    goto LABEL_16;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtController, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = GameObjectExtensions__GetLocalPosition(v14, 0LL);
  if ( LODWORD(v8->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_17;
  HIDWORD(v8->fields.rootComponent) = v15;
  v8->fields.StandBasePosition.fields.x = v16;
  v8->fields.StandBasePosition.fields.y = v17;
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = v8;
  sub_1BDB81C(v5 + 16);
  svtController = (struct GrandQuestSvtController_o *)sub_1BDB920(float___TypeInfo, 2LL);
  if ( !svtController )
    goto LABEL_16;
  m_CancellationTokenSource = (int)svtController->fields.m_CancellationTokenSource;
  v7 = svtController;
  if ( !m_CancellationTokenSource
    || (LODWORD(svtController->fields.svtController) = 1065353216, m_CancellationTokenSource == 1) )
  {
LABEL_17:
    sub_1BDBADC(svtController, v7, v10);
  }
  HIDWORD(svtController->fields.svtController) = 1065353216;
  *(_QWORD *)(v5 + 24) = svtController;
  sub_1BDB81C(v5 + 24);
  svtController = (struct GrandQuestSvtController_o *)sub_1BDB920(float___TypeInfo, 2LL);
  if ( !svtController )
LABEL_16:
    sub_1BDBAD4(svtController, v7);
  v19 = (int)svtController->fields.m_CancellationTokenSource;
  v7 = svtController;
  if ( !v19 )
    goto LABEL_17;
  LODWORD(svtController->fields.svtController) = 1063675494;
  if ( v19 == 1 )
    goto LABEL_17;
  HIDWORD(svtController->fields.svtController) = 1063675494;
  *(_QWORD *)(v5 + 32) = svtController;
  sub_1BDB81C(v5 + 32);
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

  if ( (byte_4B3F836 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, figureEasing);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass25_0__ExecFigureEasing_b__0__, v8);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass25_0__ExecFigureEasing_b__1__, v9);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass25_0_TypeInfo, v10);
    byte_4B3F836 = 1;
  }
  v11 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = figureEasing;
  sub_1BDB81C(v11 + 24);
  *(_QWORD *)(v11 + 32) = this;
  sub_1BDB81C(v11 + 32);
  *(_QWORD *)(v11 + 48) = callback;
  sub_1BDB81C(v11 + 48);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(_QWORD *)(v11 + 16) = GameObjectExtensions__SafeGetComponent_object_(
                            gameObject,
                            (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v12 = sub_1BDB81C(v11 + 16);
  *(_DWORD *)(v11 + 40) = 1136623616;
  v15 = *(_QWORD *)(v11 + 24);
  if ( !v15
    || (v16 = *(EasingObject_o **)(v11 + 16),
        v17 = *(float *)(v15 + 40),
        v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_GrandQuestSvtController___c__DisplayClass25_0__ExecFigureEasing_b__0__,
          0LL),
        v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v11,
          Method_GrandQuestSvtController___c__DisplayClass25_0__ExecFigureEasing_b__1__,
          0LL),
        (v20 = *(_QWORD *)(v11 + 24)) == 0)
    || !v16 )
  {
LABEL_8:
    sub_1BDBAD4(v12, v13);
  }
  EasingObject__Play_48351504(v16, 0.0, 1.0, v17, v18, v19, *(float *)(v20 + 44), 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController__FadeIn(
        GrandQuestSvtController_o *this,
        bool immediately,
        System_Action_o *callback,
        const MethodInfo *method)
{
  GrandQuestSvtController_FigureEasing_o *DefaultFigureEasing; // x22
  struct System_Single_array *v8; // x0
  struct System_Single_array *v9; // x1
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8
  const MethodInfo *v12; // x3
  float v13; // s0
  float v14; // s1

  if ( (byte_4B3F833 & 1) == 0 )
  {
    sub_1BDB878(&float___TypeInfo, immediately);
    byte_4B3F833 = 1;
  }
  DefaultFigureEasing = GrandQuestSvtController__CreateDefaultFigureEasing(this, (const MethodInfo *)immediately);
  v8 = (struct System_Single_array *)sub_1BDB920(float___TypeInfo, 2LL);
  if ( !v8 )
    goto LABEL_14;
  v9 = v8;
  if ( v8->max_length <= 1 )
    goto LABEL_15;
  v8->m_Items[2] = 1.0;
  if ( !DefaultFigureEasing
    || (DefaultFigureEasing->fields.alpha = v8,
        sub_1BDB81C(&DefaultFigureEasing->fields.alpha),
        (v8 = (struct System_Single_array *)sub_1BDB920(float___TypeInfo, 2LL)) == 0LL) )
  {
LABEL_14:
    sub_1BDBAD4(v8, v9);
  }
  max_length = v8->max_length;
  v9 = v8;
  if ( !max_length || (v8->m_Items[1] = 1.26, max_length == 1) )
LABEL_15:
    sub_1BDBADC(v8, v9, v10);
  v8->m_Items[2] = 0.9;
  DefaultFigureEasing->fields.scale = v8;
  sub_1BDB81C(&DefaultFigureEasing->fields.scale);
  v13 = 0.3;
  v14 = 1.2;
  if ( immediately )
    v13 = 0.0;
  if ( immediately )
    v14 = 0.0;
  DefaultFigureEasing->fields.easingTime = v14;
  DefaultFigureEasing->fields.delay = v13;
  *(_QWORD *)&DefaultFigureEasing->fields.easingTypeAlpha = 0xB0000000BLL;
  GrandQuestSvtController__ExecFigureEasing(this, DefaultFigureEasing, callback, v12);
}


void __fastcall GrandQuestSvtController__FadeOut(
        GrandQuestSvtController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  GrandQuestSvtController_FigureEasing_o *DefaultFigureEasing; // x21
  struct System_Single_array *v8; // x0
  struct System_Single_array *v9; // x1
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8
  const MethodInfo *v12; // x3

  if ( (byte_4B3F834 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_UIStandFigureR___, callback);
    sub_1BDB878(&float___TypeInfo, v5);
    byte_4B3F834 = 1;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.listFigureR,
         (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_UIStandFigureR___) )
  {
    DefaultFigureEasing = GrandQuestSvtController__CreateDefaultFigureEasing(this, v6);
    v8 = (struct System_Single_array *)sub_1BDB920(float___TypeInfo, 2LL);
    if ( v8 )
    {
      v9 = v8;
      if ( !v8->max_length )
        goto LABEL_13;
      v8->m_Items[1] = 1.0;
      if ( DefaultFigureEasing )
      {
        DefaultFigureEasing->fields.alpha = v8;
        sub_1BDB81C(&DefaultFigureEasing->fields.alpha);
        v8 = (struct System_Single_array *)sub_1BDB920(float___TypeInfo, 2LL);
        if ( v8 )
        {
          max_length = v8->max_length;
          v9 = v8;
          if ( max_length )
          {
            v8->m_Items[1] = 0.9;
            if ( max_length != 1 )
            {
              v8->m_Items[2] = 1.26;
              DefaultFigureEasing->fields.scale = v8;
              sub_1BDB81C(&DefaultFigureEasing->fields.scale);
              *(_QWORD *)&DefaultFigureEasing->fields.easingTime = 1058642330LL;
              *(_QWORD *)&DefaultFigureEasing->fields.easingTypeAlpha = 0x140000000BLL;
              GrandQuestSvtController__ExecFigureEasing(this, DefaultFigureEasing, callback, v12);
              return;
            }
          }
LABEL_13:
          sub_1BDBADC(v8, v9, v10);
        }
      }
    }
    sub_1BDBAD4(v8, v9);
  }
  ActionExtensions__Call(callback, 0LL);
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
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x20
  System_Func_bool__o *v18; // x21
  SchedulerTaskWaitWhile_o *v19; // x19
  SchedulerTaskBase_TaskCallback_o *v20; // x0
  __int64 *v21; // x8
  System_Func_bool__o *v22; // x21
  struct SchedulerTaskBase_TaskCallback_o *v23; // x21

  if ( (byte_4B3F830 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BDB878(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass19_0_TypeInfo, v7);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass19_1__GetTaskOfChangeServant_b__0__, v8);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass19_1__GetTaskOfChangeServant_b__1__, v9);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass19_1_TypeInfo, v10);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass19_2__GetTaskOfChangeServant_b__3__, v11);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass19_2__GetTaskOfChangeServant_b__4__, v12);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass19_2_TypeInfo, v13);
    byte_4B3F830 = 1;
  }
  v14 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_11;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BDB81C(v14 + 16);
  *(_DWORD *)(v14 + 24) = warId;
  if ( this->fields.currentWarId == warId )
  {
    v17 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass19_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_11;
    *(_QWORD *)(v17 + 24) = v14;
    sub_1BDB81C(v17 + 24);
    *(_BYTE *)(v17 + 16) = 1;
    v18 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v18,
      (Il2CppObject *)v17,
      Method_GrandQuestSvtController___c__DisplayClass19_1__GetTaskOfChangeServant_b__0__,
      0LL);
    v19 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v19, v18, 0LL);
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
    v21 = &Method_GrandQuestSvtController___c__DisplayClass19_1__GetTaskOfChangeServant_b__1__;
  }
  else
  {
    v17 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass19_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0LL);
    if ( !v17 )
      goto LABEL_11;
    *(_QWORD *)(v17 + 24) = v14;
    sub_1BDB81C(v17 + 24);
    *(_BYTE *)(v17 + 16) = 1;
    v22 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v22,
      (Il2CppObject *)v17,
      Method_GrandQuestSvtController___c__DisplayClass19_2__GetTaskOfChangeServant_b__3__,
      0LL);
    v19 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
    SchedulerTaskWaitWhile___ctor(v19, v22, 0LL);
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
    v21 = &Method_GrandQuestSvtController___c__DisplayClass19_2__GetTaskOfChangeServant_b__4__;
  }
  v23 = v20;
  SchedulerTaskBase_TaskCallback___ctor(v20, (Il2CppObject *)v17, *v21, 0LL);
  if ( !v19 )
LABEL_11:
    sub_1BDBAD4(v15, v16);
  v19->fields.StartCallback = v23;
  sub_1BDB81C(&v19->fields.StartCallback);
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
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_bool__o *v13; // x20
  SchedulerTaskWaitWhile_o *v14; // x19
  SchedulerTaskBase_TaskCallback_o *v15; // x20

  if ( (byte_4B3F82E & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, *(_QWORD *)&viewType);
    sub_1BDB878(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BDB878(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass16_0__GetTaskOfMoveServant_b__0__, v7);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass16_0__GetTaskOfMoveServant_b__1__, v8);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass16_0_TypeInfo, v9);
    byte_4B3F82E = 1;
  }
  v10 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 24) = this;
  sub_1BDB81C(v10 + 24);
  *(_DWORD *)(v10 + 32) = viewType;
  *(_BYTE *)(v10 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_GrandQuestSvtController___c__DisplayClass16_0__GetTaskOfMoveServant_b__0__,
    0LL);
  v14 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v14, v13, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_GrandQuestSvtController___c__DisplayClass16_0__GetTaskOfMoveServant_b__1__,
    0LL);
  if ( !v14 )
LABEL_6:
    sub_1BDBAD4(v11, v12);
  v14->fields.StartCallback = v15;
  sub_1BDB81C(&v14->fields.StartCallback);
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
    sub_1BDB81C(&this->fields.blankEarthSpotEntity);
    GrandQuestSvtController__ClearFigure(v3, v5);
    v3->fields.rootComponent = grandQuestRoot;
    v3 = (GrandQuestSvtController_o *)((char *)v3 + 40);
    sub_1BDB81C(v3);
    LOBYTE(v3->fields.RootLeftPosition.fields.y) = 1;
  }
}


void __fastcall GrandQuestSvtController__Quit(GrandQuestSvtController_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.currentViewType = 0;
  this->fields.currentWarId = -1;
  this->fields.blankEarthSpotEntity = 0LL;
  sub_1BDB81C(&this->fields.blankEarthSpotEntity);
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
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_4B3F82D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass15_0__Resume_b__0__, v7);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass15_0_TypeInfo, v8);
    byte_4B3F82D = 1;
  }
  v9 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C(v9 + 16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BDB81C(v9 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestSvtController___c__DisplayClass15_0__Resume_b__0__,
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

  if ( (byte_4B3F838 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, disp);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__, v7);
    byte_4B3F838 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
  if ( !listFigureR )
    sub_1BDBAD4(0LL, disp);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    listFigureR,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v9 = disp;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BDBAD4(0LL, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13.fields._current, 0LL);
    if ( !gameObject )
      sub_1BDBAD4(0LL, v12);
    UnityEngine_GameObject__SetActive(gameObject, v9, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
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
  UnityEngine_Component_o *svtController; // x0
  int32_t v34; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureR_o *PrefabForImageId; // x0
  __int64 v37; // x1
  UnityEngine_Component_o *v38; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  void *monitor; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_object__o *listFigureR; // x0
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  UnityEngine_GameObject_o *v49; // x0
  Il2CppObject *v50; // x21
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v54; // x8
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+30h] [xbp-70h] BYREF
  int32_t imageLimitCount; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4B3F832 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SvtMultiPortraitMaster___, *(_QWORD *)&warId);
    sub_1BDB878(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v13);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIStandFigureR__Add__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v16);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B3F832 = 1;
  }
  imageLimitCount = 0;
  memset(&v56, 0, sizeof(v56));
  if ( this->fields.currentWarId == warId )
    goto LABEL_4;
  GrandQuestSvtController__ClearFigure(this, *(const MethodInfo **)&warId);
  this->fields.currentWarId = warId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v20 = BlankEarthSpotMaster__GetByWarId(Master_object, this->fields.currentWarId, 0LL);
  Master_object = (BlankEarthSpotMaster_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                              (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_BlankEarthSpotEntity___);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( v20 )
    {
      if ( !v20->max_length )
        sub_1BDBADC(Master_object, v19, v21);
      this->fields.blankEarthSpotEntity = v20->m_Items[0];
      p_blankEarthSpotEntity = &this->fields.blankEarthSpotEntity;
      sub_1BDB81C(&this->fields.blankEarthSpotEntity);
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
            Master_object = (BlankEarthSpotMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( Master_object )
            {
              Master_object = (BlankEarthSpotMaster_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Master_object,
                                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SvtMultiPortraitMaster___);
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
                         (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
                  {
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v55,
                      v28,
                      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
                    v56 = v55;
                    while ( 1 )
                    {
                      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                              &v56,
                              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
                      if ( !v29 )
                        break;
                      current = v56.fields._current;
                      if ( !v56.fields._current )
                        sub_1BDBAD4(v29, v30);
                      klass_high = HIDWORD(v56.fields._current[2].klass);
                      svtController = (UnityEngine_Component_o *)this->fields.svtController;
                      if ( klass_high >= 1 )
                        v34 = klass_high + 1;
                      else
                        v34 = 1;
                      if ( !svtController )
                        sub_1BDBAD4(0LL, v30);
                      gameObject = UnityEngine_Component__get_gameObject(svtController, 0LL);
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
                        sub_1BDBAD4(0LL, v37);
                      PrefabForImageId->fields.svtMultiPortraitEntity = (struct SvtMultiPortraitEntity_o *)current;
                      sub_1BDB81C(&PrefabForImageId->fields.svtMultiPortraitEntity);
                      transform = UnityEngine_Component__get_transform(v38, 0LL);
                      if ( !transform )
                        sub_1BDBAD4(0LL, v40);
                      UnityEngine_Transform__set_localPosition(transform, this->fields.StandBasePosition, 0LL);
                      monitor = v38[1].monitor;
                      if ( !monitor )
                        sub_1BDBAD4(0LL, v41);
                      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)monitor + 440LL))(
                        monitor,
                        *(_QWORD *)(*(_QWORD *)monitor + 448LL),
                        0.0);
                      listFigureR = (System_Collections_Generic_List_object__o *)this->fields.listFigureR;
                      if ( !listFigureR )
                        sub_1BDBAD4(0LL, v43);
                      items = listFigureR->fields._items;
                      v46 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                      ++listFigureR->fields._version;
                      if ( !items )
                        sub_1BDBAD4(listFigureR, v43);
                      size = listFigureR->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          listFigureR,
                          (Il2CppObject *)v38,
                          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v48 = &items->obj.klass + size;
                        listFigureR->fields._size = size + 1;
                        v48[4] = (Il2CppClass *)v38;
                        sub_1BDB81C(v48 + 4);
                      }
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v56,
                      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
                    goto LABEL_4;
                  }
                }
                Master_object = (BlankEarthSpotMaster_o *)this->fields.svtController;
                if ( Master_object )
                {
                  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                  Master_object = (BlankEarthSpotMaster_o *)StandFigureManager__CreateRenderPrefab_39764192(
                                                              v49,
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
                    v50 = (Il2CppObject *)Master_object;
                    Master_object = (BlankEarthSpotMaster_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Master_object,
                                                                0LL);
                    if ( Master_object )
                    {
                      UnityEngine_Transform__set_localPosition(
                        (UnityEngine_Transform_o *)Master_object,
                        this->fields.StandBasePosition,
                        0LL);
                      Master_object = (BlankEarthSpotMaster_o *)v50[2].klass;
                      if ( Master_object )
                      {
                        ((void (__fastcall *)(BlankEarthSpotMaster_o *, Il2CppMethodPointer, float))Master_object->klass->vtable._8_ReplacedForThread.method)(
                          Master_object,
                          Master_object->klass->vtable._9_Updated.methodPtr,
                          0.0);
                        Master_object = (BlankEarthSpotMaster_o *)this->fields.listFigureR;
                        if ( Master_object )
                        {
                          v51 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
                          v52 = Method_System_Collections_Generic_List_UIStandFigureR__Add__;
                          ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
                          if ( v51 )
                          {
                            MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
                            if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v51 + 24) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                (System_Collections_Generic_List_object__o *)Master_object,
                                v50,
                                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v54 = v51 + 8 * MasterName_k__BackingField_low;
                              LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low
                                                                                         + 1;
                              *(_QWORD *)(v54 + 32) = v50;
                              sub_1BDB81C(v54 + 32);
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
LABEL_56:
    sub_1BDBAD4(Master_object, v19);
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
  GrandQuestClassSelectController_c *v9; // x0
  float y; // s8
  float x; // s9
  float z; // s10
  struct GrandQuestClassSelectController_StaticFields *static_fields; // x8
  float INTO_TIME; // s11
  UnityEngine_Component_o *svtController; // x0
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  float *v18; // x8
  GrandQuestClassSelectController_c *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v7 = immediately;
  if ( (byte_4B3F82F & 1) == 0 )
  {
    sub_1BDB878(&GrandQuestClassSelectController_TypeInfo, immediately);
    byte_4B3F82F = 1;
  }
  this->fields.currentViewType = viewType;
  if ( viewType == 2 )
  {
    v9 = GrandQuestClassSelectController_TypeInfo;
    x = this->fields.RootLeftPosition.fields.x;
    y = this->fields.RootLeftPosition.fields.y;
    z = this->fields.RootLeftPosition.fields.z;
    if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
      v9 = GrandQuestClassSelectController_TypeInfo;
    }
    static_fields = v9->static_fields;
    if ( !v7 )
      goto LABEL_7;
LABEL_14:
    svtController = (UnityEngine_Component_o *)this->fields.svtController;
    if ( svtController )
    {
      gameObject = UnityEngine_Component__get_gameObject(svtController, 0LL);
      v21.fields.x = x;
      v21.fields.y = y;
      v21.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v21, 0LL);
      ActionExtensions__Call(callback, 0LL);
      return;
    }
LABEL_16:
    sub_1BDBAD4(svtController, immediately);
  }
  v19 = GrandQuestClassSelectController_TypeInfo;
  x = this->fields.RootCenterPosition.fields.x;
  y = this->fields.RootCenterPosition.fields.y;
  z = this->fields.RootCenterPosition.fields.z;
  if ( !GrandQuestClassSelectController_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestClassSelectController_TypeInfo);
    v19 = GrandQuestClassSelectController_TypeInfo;
  }
  static_fields = (struct GrandQuestClassSelectController_StaticFields *)&v19->static_fields->EXIT_TIME;
  if ( v7 )
    goto LABEL_14;
LABEL_7:
  INTO_TIME = static_fields->INTO_TIME;
  svtController = (UnityEngine_Component_o *)GrandQuestSvtController__CreateDefaultFigureEasing(
                                               this,
                                               (const MethodInfo *)immediately);
  if ( !svtController )
    goto LABEL_16;
  v18 = *(float **)&svtController->fields.m_CachedPtr;
  *(_QWORD *)&immediately = svtController;
  if ( !v18 )
    goto LABEL_16;
  if ( *((_DWORD *)v18 + 6) <= 1u )
    sub_1BDBADC(svtController, svtController, v16);
  v18[11] = x;
  v18[12] = y;
  v18[13] = z;
  *(float *)&svtController[1].fields.m_CachedPtr = INTO_TIME;
  LODWORD(svtController[2].klass) = 17;
  GrandQuestSvtController__ExecFigureEasing(
    this,
    (GrandQuestSvtController_FigureEasing_o *)svtController,
    callback,
    v17);
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
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_4B3F82C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&Method_GrandQuestSvtController___c__DisplayClass14_0__StartUp_b__0__, v7);
    sub_1BDB878(&GrandQuestSvtController___c__DisplayClass14_0_TypeInfo, v8);
    byte_4B3F82C = 1;
  }
  v9 = sub_1BDBAC4(GrandQuestSvtController___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C(v9 + 16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BDB81C(v9 + 24);
  if ( this->fields.currentWarId == warId )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 24), 0LL);
  }
  else
  {
    v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v9,
      Method_GrandQuestSvtController___c__DisplayClass14_0__StartUp_b__0__,
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


void __fastcall GrandQuestSvtController___c__DisplayClass14_0___ctor(
        GrandQuestSvtController___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass14_0___StartUp_b__0(
        GrandQuestSvtController___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x21
  GrandQuestSvtController_o *v6; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F83A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass14_0_o *)sub_1BDB878(
                                                                &Method_GrandQuestSvtController___c__DisplayClass14_0__StartUp_b__1__,
                                                                v4);
    byte_4B3F83A = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v6 = (GrandQuestSvtController_o *)v3[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(klass, v3, Method_GrandQuestSvtController___c__DisplayClass14_0__StartUp_b__1__, 0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass14_0_o *)sub_1BDB81C(&v3[2]);
  }
  if ( !v6 )
    sub_1BDBAD4(this, method);
  GrandQuestSvtController__SetServantPosition(v6, 1, 1, klass, v2);
}


void __fastcall GrandQuestSvtController___c__DisplayClass14_0___StartUp_b__1(
        GrandQuestSvtController___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  GrandQuestSvtController__FadeIn(_4__this, 0, 0LL, v2);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass15_0___ctor(
        GrandQuestSvtController___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass15_0___Resume_b__0(
        GrandQuestSvtController___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x21
  GrandQuestSvtController_o *v6; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F83B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass15_0_o *)sub_1BDB878(
                                                                &Method_GrandQuestSvtController___c__DisplayClass15_0__Resume_b__1__,
                                                                v4);
    byte_4B3F83B = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v6 = (GrandQuestSvtController_o *)v3[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(klass, v3, Method_GrandQuestSvtController___c__DisplayClass15_0__Resume_b__1__, 0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass15_0_o *)sub_1BDB81C(&v3[2]);
  }
  if ( !v6 )
    sub_1BDBAD4(this, method);
  GrandQuestSvtController__SetServantPosition(v6, 1, 2, klass, v2);
}


void __fastcall GrandQuestSvtController___c__DisplayClass15_0___Resume_b__1(
        GrandQuestSvtController___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  GrandQuestSvtController__FadeIn(_4__this, 1, 0LL, v2);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass16_0___ctor(
        GrandQuestSvtController___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestSvtController___c__DisplayClass16_0___GetTaskOfMoveServant_b__0(
        GrandQuestSvtController___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void __fastcall GrandQuestSvtController___c__DisplayClass16_0___GetTaskOfMoveServant_b__1(
        GrandQuestSvtController___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestSvtController___c__DisplayClass16_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  GrandQuestSvtController_o *_4__this; // x20
  int32_t viewType; // w21

  v3 = this;
  if ( (byte_4B3F83C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass16_0_o *)sub_1BDB878(
                                                                &Method_GrandQuestSvtController___c__DisplayClass16_0__GetTaskOfMoveServant_b__2__,
                                                                v4);
    byte_4B3F83C = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  viewType = v3->fields.viewType;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass16_0__GetTaskOfMoveServant_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    this = (GrandQuestSvtController___c__DisplayClass16_0_o *)sub_1BDB81C(&v3->fields.__9__2);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  GrandQuestSvtController__ChangeViewType(_4__this, viewType, _9__2, v2);
}


void __fastcall GrandQuestSvtController___c__DisplayClass16_0___GetTaskOfMoveServant_b__2(
        GrandQuestSvtController___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_0___ctor(
        GrandQuestSvtController___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_1___ctor(
        GrandQuestSvtController___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestSvtController___c__DisplayClass19_1___GetTaskOfChangeServant_b__0(
        GrandQuestSvtController___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  return this->fields.isMoving;
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_1___GetTaskOfChangeServant_b__1(
        GrandQuestSvtController___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  GrandQuestSvtController_o *v6; // x20
  System_Action_o *klass; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F83D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass19_1_o *)sub_1BDB878(
                                                                &Method_GrandQuestSvtController___c__DisplayClass19_1__GetTaskOfChangeServant_b__2__,
                                                                v4);
    byte_4B3F83D = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v6 = (GrandQuestSvtController_o *)*((_QWORD *)monitor + 2);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestSvtController___c__DisplayClass19_1__GetTaskOfChangeServant_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass19_1_o *)sub_1BDB81C(&v3[2]);
  }
  if ( !v6 )
LABEL_8:
    sub_1BDBAD4(this, method);
  GrandQuestSvtController__ChangeViewType(v6, 1, klass, v2);
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_1___GetTaskOfChangeServant_b__2(
        GrandQuestSvtController___c__DisplayClass19_1_o *this,
        const MethodInfo *method)
{
  this->fields.isMoving = 0;
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_2___ctor(
        GrandQuestSvtController___c__DisplayClass19_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestSvtController___c__DisplayClass19_2___GetTaskOfChangeServant_b__3(
        GrandQuestSvtController___c__DisplayClass19_2_o *this,
        const MethodInfo *method)
{
  return this->fields.isSvtChange;
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_2___GetTaskOfChangeServant_b__4(
        GrandQuestSvtController___c__DisplayClass19_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  GrandQuestSvtController_o *v6; // x20
  int32_t v7; // w21
  System_Action_o *klass; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F83E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass19_2_o *)sub_1BDB878(
                                                                &Method_GrandQuestSvtController___c__DisplayClass19_2__GetTaskOfChangeServant_b__5__,
                                                                v4);
    byte_4B3F83E = 1;
  }
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v6 = (GrandQuestSvtController_o *)*((_QWORD *)monitor + 2);
  v7 = *((_DWORD *)monitor + 6);
  klass = (System_Action_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestSvtController___c__DisplayClass19_2__GetTaskOfChangeServant_b__5__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestSvtController___c__DisplayClass19_2_o *)sub_1BDB81C(&v3[2]);
  }
  if ( !v6 )
LABEL_8:
    sub_1BDBAD4(this, method);
  GrandQuestSvtController__ChangeServant(v6, v7, klass, v2);
}


void __fastcall GrandQuestSvtController___c__DisplayClass19_2___GetTaskOfChangeServant_b__5(
        GrandQuestSvtController___c__DisplayClass19_2_o *this,
        const MethodInfo *method)
{
  this->fields.isSvtChange = 0;
}


void __fastcall GrandQuestSvtController___c__DisplayClass20_0___ctor(
        GrandQuestSvtController___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestSvtController___c__DisplayClass20_0___ChangeServant_b__0(
        GrandQuestSvtController___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestSvtController___c__DisplayClass20_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  GrandQuestSvtController_o *_4__this; // x20
  int32_t warId; // w21

  v3 = this;
  if ( (byte_4B3F83F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestSvtController___c__DisplayClass20_0_o *)sub_1BDB878(
                                                                &Method_GrandQuestSvtController___c__DisplayClass20_0__ChangeServant_b__1__,
                                                                v4);
    byte_4B3F83F = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  warId = v3->fields.warId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_GrandQuestSvtController___c__DisplayClass20_0__ChangeServant_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    this = (GrandQuestSvtController___c__DisplayClass20_0_o *)sub_1BDB81C(&v3->fields.__9__1);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  GrandQuestSvtController__SetServant(_4__this, warId, _9__1, v2);
}


void __fastcall GrandQuestSvtController___c__DisplayClass20_0___ChangeServant_b__1(
        GrandQuestSvtController___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestSvtController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  GrandQuestSvtController__FadeIn(_4__this, 0, this->fields.callback, v2);
}


void __fastcall GrandQuestSvtController___c__DisplayClass25_0___ctor(
        GrandQuestSvtController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestSvtController___c__DisplayClass25_0___ExecFigureEasing_b__0(
        GrandQuestSvtController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  GrandQuestSvtController___c__DisplayClass25_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EasingObject_o *easing; // x9
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x10
  float mNow; // s9
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
  float v22; // s8
  long double v23; // q0
  struct GrandQuestSvtController_o *_4__this; // x8
  long double v25; // q9
  UnityEngine_GameObject_o *gameObject; // x0
  struct GrandQuestSvtController_o *v27; // x8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x20
  float bodySizeY; // s11
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  Il2CppClass *v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B3F840 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v5);
    this = (GrandQuestSvtController___c__DisplayClass25_0_o *)sub_1BDB878(
                                                                &Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__,
                                                                v6);
    byte_4B3F840 = 1;
  }
  memset(&v39, 0, sizeof(v39));
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
  v19 = Easing__Func_48350328(scale->m_Items[1], scale->m_Items[2], mNow, v14->fields.easingTypeScale, 0LL);
  v20 = v3->fields.figureEasing;
  if ( !v20 || (alpha = v20->fields.alpha) == 0LL )
LABEL_27:
    sub_1BDBAD4(this, method);
  if ( alpha->max_length < 2 )
LABEL_28:
    sub_1BDBADC(this, method, v2);
  v22 = v19;
  *(float *)&v23 = Easing__Func_48350328(alpha->m_Items[1], alpha->m_Items[2], mNow, v20->fields.easingTypeAlpha, 0LL);
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass25_0_o *)_4__this->fields.svtController;
  if ( !this )
    goto LABEL_27;
  v25 = v23;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v40.fields.x = v16;
  v40.fields.y = v17;
  v40.fields.z = v18;
  GameObjectExtensions__SetLocalPosition(gameObject, v40, 0LL);
  v27 = v3->fields.__4__this;
  if ( !v27 )
    goto LABEL_27;
  this = (GrandQuestSvtController___c__DisplayClass25_0_o *)v27->fields.listFigureR;
  if ( !this )
    goto LABEL_27;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v28 )
      break;
    current = v39.fields._current;
    if ( !v39.fields._current )
      sub_1BDBAD4(v28, v29);
    bodySizeY = v3->fields.bodySizeY;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v39.fields._current, 0LL);
    GameObjectExtensions__SetLocalPosition_35211208(v32, 0.0, (float)(v22 + -1.0) * bodySizeY, 0.0, 0LL);
    klass = (UnityEngine_Component_o *)current[2].klass;
    if ( !klass )
      sub_1BDBAD4(0LL, v33);
    v35 = UnityEngine_Component__get_gameObject(klass, 0LL);
    v41.fields.z = 1.0;
    v41.fields.x = v22;
    v41.fields.y = v22;
    GameObjectExtensions__SetLocalScale(v35, v41, 0LL);
    v37 = current[2].klass;
    if ( !v37 )
      sub_1BDBAD4(0LL, v36);
    (*((void (__fastcall **)(Il2CppClass *, _QWORD, long double))v37->_1.image + 55))(
      v37,
      *((_QWORD *)v37->_1.image + 56),
      v25);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
}


void __fastcall GrandQuestSvtController___c__DisplayClass25_0___ExecFigureEasing_b__1(
        GrandQuestSvtController___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  GrandQuestSvtController___c__DisplayClass25_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct GrandQuestSvtController_o *_4__this; // x8
  __int64 v7; // x2
  struct GrandQuestSvtController_FigureEasing_o *figureEasing; // x8
  struct UnityEngine_Vector3_array *position; // x8
  struct GrandQuestSvtController_FigureEasing_o *v10; // x8
  struct System_Single_array *scale; // x8
  struct GrandQuestSvtController_o *v12; // x9
  float v13; // s8
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct GrandQuestSvtController_FigureEasing_o *v23; // x8
  struct System_Single_array *v24; // x8
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  struct GrandQuestSvtController_FigureEasing_o *v28; // x8
  struct System_Single_array *alpha; // x8
  Il2CppClass *v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B3F841 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__get_Current__, v4);
    this = (GrandQuestSvtController___c__DisplayClass25_0_o *)sub_1BDB878(
                                                                &Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__,
                                                                v5);
    byte_4B3F841 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_35;
  this = (GrandQuestSvtController___c__DisplayClass25_0_o *)_4__this->fields.svtController;
  if ( !this )
    goto LABEL_35;
  this = (GrandQuestSvtController___c__DisplayClass25_0_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
  figureEasing = v2->fields.figureEasing;
  if ( !figureEasing )
    goto LABEL_35;
  position = figureEasing->fields.position;
  if ( !position )
    goto LABEL_35;
  if ( position->max_length <= 1 )
    goto LABEL_36;
  GameObjectExtensions__SetLocalPosition(
    (UnityEngine_GameObject_o *)this,
    *(UnityEngine_Vector3_o *)&position->m_Items[1].fields.y,
    0LL);
  v10 = v2->fields.figureEasing;
  if ( !v10 || (scale = v10->fields.scale) == 0LL )
LABEL_35:
    sub_1BDBAD4(this, method);
  if ( scale->max_length <= 1 )
LABEL_36:
    sub_1BDBADC(this, method, v7);
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_35;
  this = (GrandQuestSvtController___c__DisplayClass25_0_o *)v12->fields.listFigureR;
  if ( !this )
    goto LABEL_35;
  v13 = (float)(scale->m_Items[2] + -1.0) * v2->fields.bodySizeY;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIStandFigureR__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__MoveNext__);
    if ( !v14 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_1BDBAD4(v14, v15);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v32.fields._current, 0LL);
    GameObjectExtensions__SetLocalPosition_35211208(gameObject, 0.0, v13, 0.0, 0LL);
    klass = (UnityEngine_Component_o *)current[2].klass;
    if ( !klass )
      sub_1BDBAD4(0LL, v18);
    v20 = UnityEngine_Component__get_gameObject(klass, 0LL);
    v23 = v2->fields.figureEasing;
    if ( !v23 )
      sub_1BDBAD4(v20, v21);
    v24 = v23->fields.scale;
    if ( !v24 )
      sub_1BDBAD4(v20, v21);
    if ( v24->max_length <= 1 )
      sub_1BDBADC(v20, v21, v22);
    v33.fields.x = v24->m_Items[2];
    v33.fields.z = 1.0;
    v33.fields.y = v33.fields.x;
    GameObjectExtensions__SetLocalScale(v20, v33, 0LL);
    v28 = v2->fields.figureEasing;
    if ( !v28 )
      sub_1BDBAD4(v25, v26);
    alpha = v28->fields.alpha;
    if ( !alpha )
      sub_1BDBAD4(v25, v26);
    if ( alpha->max_length <= 1 )
      sub_1BDBADC(v25, v26, v27);
    v30 = current[2].klass;
    if ( !v30 )
      sub_1BDBAD4(0LL, v26);
    (*((void (__fastcall **)(Il2CppClass *, _QWORD, float))v30->_1.image + 55))(
      v30,
      *((_QWORD *)v30->_1.image + 56),
      alpha->m_Items[2]);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureR__Dispose__);
  ActionExtensions__Call(v2->fields.callback, 0LL);
}