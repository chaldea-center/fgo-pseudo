void GrandQuestLevelSelectController___ctor(GrandQuestLevelSelectController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


SchedulerTaskBase_o *GrandQuestLevelSelectController__GetTaskOfRelease(
        GrandQuestLevelSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Func_bool__o *v12; // x21
  __int64 v13; // x19
  SchedulerTaskBase_TaskCallback_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D2B55C & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__);
    sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__);
    sub_1C93AD4(&GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
    byte_4D2B55C = 1;
  }
  v3 = sub_1C93D20(GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_BYTE *)(v3 + 16) = 1;
  v12 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__,
    0);
  v13 = sub_1C93D20(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v13, v12, 0);
  v14 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__,
    0);
  if ( !v13 )
LABEL_6:
    sub_1C93D2C(v4, v5);
  *(_QWORD *)(v13 + 24) = v14;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + 24), (int32_t)v14, v15, v16, v17, v18, v19, v20);
  return (SchedulerTaskBase_o *)v13;
}


SchedulerTaskBase_o *GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
        GrandQuestLevelSelectController_o *this,
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
  System_Func_bool__o *v14; // x20
  __int64 v15; // x19
  SchedulerTaskBase_TaskCallback_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2B55A & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__);
    sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__);
    sub_1C93AD4(&GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
    byte_4D2B55A = 1;
  }
  v5 = sub_1C93D20(GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 32) = warId;
  *(_BYTE *)(v5 + 16) = 1;
  v14 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__,
    0);
  v15 = sub_1C93D20(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v15, v14, 0);
  v16 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__,
    0);
  if ( !v15 )
LABEL_6:
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v15 + 24) = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  return (SchedulerTaskBase_o *)v15;
}


void GrandQuestLevelSelectController__Init(
        GrandQuestLevelSelectController_o *this,
        GrandQuestRootComponent_o *releaseQuestRoot,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.rootComponent = releaseQuestRoot;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.rootComponent,
    (int32_t)releaseQuestRoot,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandQuestLevelSelectController__Quit(GrandQuestLevelSelectController_o *this, const MethodInfo *method)
{
  this->fields.currentState = 0;
}


void GrandQuestLevelSelectController__Release(
        GrandQuestLevelSelectController_o *this,
        System_Action_o *callback,
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x19
  System_Action_o *v22; // x20

  if ( (byte_4D2B55D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__);
    sub_1C93AD4(&GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
    byte_4D2B55D = 1;
  }
  v5 = sub_1C93D20(GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v22 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__,
          0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1C93D2C(v6, v7);
  }
  ScrTerminalListTop__ReleaseQuestListView(mTerminalListTop, v22, 0);
}


void GrandQuestLevelSelectController__ResumeQuestList(
        GrandQuestLevelSelectController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  this->fields.currentState = 2;
  if ( !rootComponent || (this = (GrandQuestLevelSelectController_o *)rootComponent->fields.mTerminalListTop) == 0 )
    sub_1C93D2C(this, warId);
  ScrTerminalListTop__SetupListViewByWarId((ScrTerminalListTop_o *)this, warId, callback, 0);
}


void GrandQuestLevelSelectController__Setup(
        GrandQuestLevelSelectController_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  ;
}


void GrandQuestLevelSelectController__SetupQuestList(
        GrandQuestLevelSelectController_o *this,
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
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x20
  System_Action_o *v24; // x21

  if ( (byte_4D2B55B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__);
    sub_1C93AD4(&GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
    byte_4D2B55B = 1;
  }
  v7 = sub_1C93D20(GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v7,
          Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__,
          0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1C93D2C(v8, v9);
  }
  ScrTerminalListTop__SetupListViewByWarId(mTerminalListTop, warId, v24, 0);
}


int32_t GrandQuestLevelSelectController__get_CurrentState(
        GrandQuestLevelSelectController_o *this,
        const MethodInfo *method)
{
  return this->fields.currentState;
}


void GrandQuestLevelSelectController___c__DisplayClass10_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestLevelSelectController___c__DisplayClass10_0___GetTaskOfRelease_b__0(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotReleased;
}


void GrandQuestLevelSelectController___c__DisplayClass10_0___GetTaskOfRelease_b__1(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  GrandQuestLevelSelectController___c__DisplayClass10_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  GrandQuestLevelSelectController_o *_4__this; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  v3 = this;
  if ( (byte_4D2B55E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__);
    byte_4D2B55E = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  GrandQuestLevelSelectController__Release(_4__this, _9__2, v2);
}


void GrandQuestLevelSelectController___c__DisplayClass10_0___GetTaskOfRelease_b__2(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNotReleased = 0;
}


void GrandQuestLevelSelectController___c__DisplayClass11_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestLevelSelectController___c__DisplayClass11_0___Release_b__0(
        GrandQuestLevelSelectController___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct GrandQuestLevelSelectController_o *_4__this; // x8

  ActionExtensions__Call(this->fields.callback, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(v3, v4);
  _4__this->fields.currentState = 1;
}


void GrandQuestLevelSelectController___c__DisplayClass7_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandQuestLevelSelectController___c__DisplayClass7_0___GetTaskOfSetupQuestList_b__0(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSetupEnd;
}


void GrandQuestLevelSelectController___c__DisplayClass7_0___GetTaskOfSetupQuestList_b__1(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestLevelSelectController___c__DisplayClass7_0_o *v3; // x19
  System_Action_o *_9__2; // x22
  GrandQuestLevelSelectController_o *_4__this; // x20
  int32_t warId; // w21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4D2B55F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_1C93AD4(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__);
    byte_4D2B55F = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  warId = v3->fields.warId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  GrandQuestLevelSelectController__SetupQuestList(_4__this, warId, _9__2, v2);
}


void GrandQuestLevelSelectController___c__DisplayClass7_0___GetTaskOfSetupQuestList_b__2(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNotSetupEnd = 0;
}


void GrandQuestLevelSelectController___c__DisplayClass8_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandQuestLevelSelectController___c__DisplayClass8_0___SetupQuestList_b__0(
        GrandQuestLevelSelectController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestLevelSelectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(this, method);
  _4__this->fields.currentState = 2;
  ActionExtensions__Call(this->fields.callback, 0);
}