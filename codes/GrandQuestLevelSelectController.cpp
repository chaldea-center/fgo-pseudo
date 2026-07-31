void GrandQuestLevelSelectController___ctor(GrandQuestLevelSelectController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


SchedulerTaskBase_o *GrandQuestLevelSelectController__GetTaskOfRelease(
        GrandQuestLevelSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Func_bool__c *v12; // x0
  System_Func_bool__o *v13; // x21
  __int64 v14; // x20
  SchedulerTaskBase_TaskCallback_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_593317A & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__);
    sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__);
    sub_21FFC50(&GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
    byte_593317A = 1;
  }
  v3 = sub_21FFEBC(GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v3 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_21FFEBC(v12);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__,
    0);
  v14 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v14, v13, 0);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__,
    0);
  if ( !v14 )
LABEL_6:
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v14 + 24) = v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 24), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  return (SchedulerTaskBase_o *)v14;
}


SchedulerTaskBase_o *GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
        GrandQuestLevelSelectController_o *this,
        int32_t warId,
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

  if ( (byte_5933178 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&SchedulerTaskWaitWhile_TypeInfo);
    sub_21FFC50(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__);
    sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__);
    sub_21FFC50(&GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
    byte_5933178 = 1;
  }
  v5 = sub_21FFEBC(GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Func_bool__TypeInfo;
  *(_DWORD *)(v5 + 32) = warId;
  *(_BYTE *)(v5 + 16) = 1;
  v15 = (System_Func_bool__o *)sub_21FFEBC(v14);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__,
    0);
  v16 = sub_21FFEBC(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor((SchedulerTaskWaitWhile_o *)v16, v15, 0);
  v17 = (SchedulerTaskBase_TaskCallback_o *)sub_21FFEBC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__,
    0);
  if ( !v16 )
LABEL_6:
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v16 + 24) = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  return (SchedulerTaskBase_o *)v16;
}


void GrandQuestLevelSelectController__Init(
        GrandQuestLevelSelectController_o *this,
        GrandQuestRootComponent_o *releaseQuestRoot,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.rootComponent = releaseQuestRoot;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rootComponent,
    (int32_t)releaseQuestRoot,
    (System_String_o *)method,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x19
  System_Action_o *v22; // x20

  if ( (byte_593317B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__);
    sub_21FFC50(&GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
    byte_593317B = 1;
  }
  v5 = sub_21FFEBC(GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__,
          0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_21FFECC(v6, v7);
  }
  ScrTerminalListTop__ReleaseQuestListView(mTerminalListTop, v22, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, *(_QWORD *)&warId);
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
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x20
  System_Action_o *v24; // x21

  if ( (byte_5933179 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__);
    sub_21FFC50(&GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
    byte_5933179 = 1;
  }
  v7 = sub_21FFEBC(GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)v7,
          Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__,
          0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_21FFECC(v8, v9);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = this;
  if ( (byte_593317C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__);
    byte_593317C = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
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
    sub_21FFECC(v3, v4);
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
  System_Action_o *_9__2; // x23
  GrandQuestLevelSelectController_o *_4__this; // x20
  int32_t warId; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_593317D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_21FFC50(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__);
    byte_593317D = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  warId = v3->fields.warId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
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
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  callback = this->fields.callback;
  _4__this->fields.currentState = 2;
  ActionExtensions__Call(callback, 0);
}