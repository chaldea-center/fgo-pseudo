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
  System_Func_bool__o *v5; // x21
  SchedulerTaskWaitWhile_o *v6; // x19
  SchedulerTaskBase_TaskCallback_o *v7; // x21

  if ( (byte_4C32700 & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C32C20(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__);
    sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__);
    sub_1C32C20(&GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
    byte_4C32700 = 1;
  }
  v3 = sub_1C32E6C(GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_6;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4(v3 + 24, this);
  *(_BYTE *)(v3 + 16) = 1;
  v5 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v5,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__,
    0);
  v6 = (SchedulerTaskWaitWhile_o *)sub_1C32E6C(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v6, v5, 0);
  v7 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v7,
    (Il2CppObject *)v3,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__,
    0);
  if ( !v6 )
LABEL_6:
    sub_1C32E7C(v4);
  v6->fields.StartCallback = v7;
  sub_1C32BC4(&v6->fields.StartCallback, v7);
  return (SchedulerTaskBase_o *)v6;
}


SchedulerTaskBase_o *GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
        GrandQuestLevelSelectController_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Func_bool__o *v7; // x20
  SchedulerTaskWaitWhile_o *v8; // x19
  SchedulerTaskBase_TaskCallback_o *v9; // x20

  if ( (byte_4C326FE & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&SchedulerTaskWaitWhile_TypeInfo);
    sub_1C32C20(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__);
    sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__);
    sub_1C32C20(&GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
    byte_4C326FE = 1;
  }
  v5 = sub_1C32E6C(GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4(v5 + 24, this);
  *(_DWORD *)(v5 + 32) = warId;
  *(_BYTE *)(v5 + 16) = 1;
  v7 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v7,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__,
    0);
  v8 = (SchedulerTaskWaitWhile_o *)sub_1C32E6C(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v8, v7, 0);
  v9 = (SchedulerTaskBase_TaskCallback_o *)sub_1C32E6C(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__,
    0);
  if ( !v8 )
LABEL_6:
    sub_1C32E7C(v6);
  v8->fields.StartCallback = v9;
  sub_1C32BC4(&v8->fields.StartCallback, v9);
  return (SchedulerTaskBase_o *)v8;
}


void GrandQuestLevelSelectController__Init(
        GrandQuestLevelSelectController_o *this,
        GrandQuestRootComponent_o *releaseQuestRoot,
        const MethodInfo *method)
{
  this->fields.rootComponent = releaseQuestRoot;
  sub_1C32BC4(&this->fields.rootComponent, releaseQuestRoot);
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
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x19
  System_Action_o *v9; // x20

  if ( (byte_4C32701 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__);
    sub_1C32C20(&GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
    byte_4C32701 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_7;
  v5[1].klass = (Il2CppClass *)callback;
  sub_1C32BC4(&v5[1], callback);
  v5[1].monitor = this;
  v6 = sub_1C32BC4(&v5[1].monitor, this);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v9, v5, Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__, 0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1C32E7C(v6);
  }
  ScrTerminalListTop__ReleaseQuestListView(mTerminalListTop, v9, 0);
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
    sub_1C32E7C(this);
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
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x20
  System_Action_o *v11; // x21

  if ( (byte_4C326FF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__);
    sub_1C32C20(&GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
    byte_4C326FF = 1;
  }
  v7 = (Il2CppObject *)sub_1C32E6C(GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_7;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v7[1], this);
  v7[1].monitor = callback;
  v8 = sub_1C32BC4(&v7[1].monitor, callback);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          v7,
          Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__,
          0),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1C32E7C(v8);
  }
  ScrTerminalListTop__SetupListViewByWarId(mTerminalListTop, warId, v11, 0);
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
  if ( (byte_4C32702 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__);
    byte_4C32702 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  monitor = (GrandQuestLevelSelectController_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__,
      0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_1C32BC4(&v3[2], klass);
  }
  if ( !monitor )
    sub_1C32E7C(this);
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
  struct GrandQuestLevelSelectController_o *_4__this; // x8

  ActionExtensions__Call(this->fields.callback, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(v3);
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
  if ( (byte_4C32703 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_1C32C20(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__);
    byte_4C32703 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  warId = v3->fields.warId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_1C32BC4(&v3->fields.__9__2, _9__2);
  }
  if ( !_4__this )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  _4__this->fields.currentState = 2;
  ActionExtensions__Call(this->fields.callback, 0);
}