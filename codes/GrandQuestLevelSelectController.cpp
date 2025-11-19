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
  System_Func_bool__o *v6; // x21
  SchedulerTaskWaitWhile_o *v7; // x19
  SchedulerTaskBase_TaskCallback_o *v8; // x21

  if ( (byte_4CB0FB2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__);
    sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__);
    sub_1C6BA08(&GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
    byte_4CB0FB2 = 1;
  }
  v3 = sub_1C6BC54(GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C6B9AC(v3 + 24, this);
  *(_BYTE *)(v3 + 16) = 1;
  v6 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v6,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__,
    0);
  v7 = (SchedulerTaskWaitWhile_o *)sub_1C6BC54(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v7, v6, 0);
  v8 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v8,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__,
    0);
  if ( !v7 )
LABEL_6:
    sub_1C6BC60(v4, v5);
  v7->fields.StartCallback = v8;
  sub_1C6B9AC(&v7->fields.StartCallback, v8);
  return (SchedulerTaskBase_o *)v7;
}


SchedulerTaskBase_o *GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
        GrandQuestLevelSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Func_bool__o *v8; // x20
  SchedulerTaskWaitWhile_o *v9; // x19
  SchedulerTaskBase_TaskCallback_o *v10; // x20

  if ( (byte_4CB0FB0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C6BA08(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__);
    sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__);
    sub_1C6BA08(&GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
    byte_4CB0FB0 = 1;
  }
  v5 = sub_1C6BC54(GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC(v5 + 24, this);
  *(_DWORD *)(v5 + 32) = warId;
  *(_BYTE *)(v5 + 16) = 1;
  v8 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__,
    0);
  v9 = (SchedulerTaskWaitWhile_o *)sub_1C6BC54(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v9, v8, 0);
  v10 = (SchedulerTaskBase_TaskCallback_o *)sub_1C6BC54(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v10,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__,
    0);
  if ( !v9 )
LABEL_6:
    sub_1C6BC60(v6, v7);
  v9->fields.StartCallback = v10;
  sub_1C6B9AC(&v9->fields.StartCallback, v10);
  return (SchedulerTaskBase_o *)v9;
}


void GrandQuestLevelSelectController__Init(
        GrandQuestLevelSelectController_o *this,
        GrandQuestRootComponent_o *releaseQuestRoot,
        const MethodInfo *method)
{
  this->fields.rootComponent = releaseQuestRoot;
  sub_1C6B9AC(&this->fields.rootComponent, releaseQuestRoot);
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
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x19
  System_Action_o *v10; // x20

  if ( (byte_4CB0FB3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__);
    sub_1C6BA08(&GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
    byte_4CB0FB3 = 1;
  }
  v5 = (Il2CppObject *)sub_1C6BC54(GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_7;
  v5[1].klass = (Il2CppClass *)callback;
  sub_1C6B9AC(&v5[1], callback);
  v5[1].monitor = this;
  v6 = sub_1C6B9AC(&v5[1].monitor, this);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v10, v5, Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__, 0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1C6BC60(v6, v7);
  }
  ScrTerminalListTop__ReleaseQuestListView(mTerminalListTop, v10, 0);
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
    sub_1C6BC60(this, warId);
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
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x20
  System_Action_o *v12; // x21

  if ( (byte_4CB0FB1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__);
    sub_1C6BA08(&GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
    byte_4CB0FB1 = 1;
  }
  v7 = (Il2CppObject *)sub_1C6BC54(GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_7;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C6B9AC(&v7[1], this);
  v7[1].monitor = callback;
  v8 = sub_1C6B9AC(&v7[1].monitor, callback);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          v7,
          Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__,
          0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1C6BC60(v8, v9);
  }
  ScrTerminalListTop__SetupListViewByWarId(mTerminalListTop, warId, v12, 0);
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
  Il2CppObject *v3; // x19
  System_Action_o *klass; // x22
  GrandQuestLevelSelectController_o *monitor; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4CB0FB4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__);
    byte_4CB0FB4 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  monitor = (GrandQuestLevelSelectController_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__,
      0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_1C6B9AC(&v3[2], klass);
  }
  if ( !monitor )
    sub_1C6BC60(this, method);
  GrandQuestLevelSelectController__Release(monitor, klass, v2);
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
    sub_1C6BC60(v3, v4);
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

  v3 = this;
  if ( (byte_4CB0FB5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_1C6BA08(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__);
    byte_4CB0FB5 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  warId = v3->fields.warId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_1C6B9AC(&v3->fields.__9__2, _9__2);
  }
  if ( !_4__this )
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(this, method);
  _4__this->fields.currentState = 2;
  ActionExtensions__Call(this->fields.callback, 0);
}