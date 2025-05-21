void __fastcall GrandQuestLevelSelectController___ctor(
        GrandQuestLevelSelectController_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


SchedulerTaskBase_o *__fastcall GrandQuestLevelSelectController__GetTaskOfRelease(
        GrandQuestLevelSelectController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_bool__o *v11; // x21
  SchedulerTaskWaitWhile_o *v12; // x19
  SchedulerTaskBase_TaskCallback_o *v13; // x21

  if ( (byte_4B3F813 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, method);
    sub_1BDB878(&SchedulerTaskWaitWhile_TypeInfo, v3);
    sub_1BDB878(&SchedulerTaskBase_TaskCallback_TypeInfo, v4);
    sub_1BDB878(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__, v5);
    sub_1BDB878(&Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__, v6);
    sub_1BDB878(&GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo, v7);
    byte_4B3F813 = 1;
  }
  v8 = sub_1BDBAC4(GrandQuestLevelSelectController___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_6;
  *(_QWORD *)(v8 + 24) = this;
  sub_1BDB81C(v8 + 24);
  *(_BYTE *)(v8 + 16) = 1;
  v11 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__0__,
    0LL);
  v12 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v12, v11, 0LL);
  v13 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v13,
    (Il2CppObject *)v8,
    Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__1__,
    0LL);
  if ( !v12 )
LABEL_6:
    sub_1BDBAD4(v9, v10);
  v12->fields.StartCallback = v13;
  sub_1BDB81C(&v12->fields.StartCallback);
  return (SchedulerTaskBase_o *)v12;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall GrandQuestLevelSelectController__GetTaskOfSetupQuestList(
        GrandQuestLevelSelectController_o *this,
        int32_t warId,
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

  if ( (byte_4B3F811 & 1) == 0 )
  {
    sub_1BDB878(&System_Func_bool__TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&SchedulerTaskWaitWhile_TypeInfo, v5);
    sub_1BDB878(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BDB878(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__, v7);
    sub_1BDB878(&Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__, v8);
    sub_1BDB878(&GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo, v9);
    byte_4B3F811 = 1;
  }
  v10 = sub_1BDBAC4(GrandQuestLevelSelectController___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 24) = this;
  sub_1BDB81C(v10 + 24);
  *(_DWORD *)(v10 + 32) = warId;
  *(_BYTE *)(v10 + 16) = 1;
  v13 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__0__,
    0LL);
  v14 = (SchedulerTaskWaitWhile_o *)sub_1BDBAC4(SchedulerTaskWaitWhile_TypeInfo);
  SchedulerTaskWaitWhile___ctor(v14, v13, 0LL);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1BDBAC4(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v10,
    Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__1__,
    0LL);
  if ( !v14 )
LABEL_6:
    sub_1BDBAD4(v11, v12);
  v14->fields.StartCallback = v15;
  sub_1BDB81C(&v14->fields.StartCallback);
  return (SchedulerTaskBase_o *)v14;
}


void __fastcall GrandQuestLevelSelectController__Init(
        GrandQuestLevelSelectController_o *this,
        GrandQuestRootComponent_o *releaseQuestRoot,
        const MethodInfo *method)
{
  this->fields.rootComponent = releaseQuestRoot;
  sub_1BDB81C(&this->fields.rootComponent);
}


void __fastcall GrandQuestLevelSelectController__Quit(
        GrandQuestLevelSelectController_o *this,
        const MethodInfo *method)
{
  this->fields.currentState = 0;
}


void __fastcall GrandQuestLevelSelectController__Release(
        GrandQuestLevelSelectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x19
  System_Action_o *v12; // x20

  if ( (byte_4B3F814 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__, v5);
    sub_1BDB878(&GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo, v6);
    byte_4B3F814 = 1;
  }
  v7 = (Il2CppObject *)sub_1BDBAC4(GrandQuestLevelSelectController___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_7;
  v7[1].klass = (Il2CppClass *)callback;
  sub_1BDB81C(&v7[1]);
  v7[1].monitor = this;
  v8 = sub_1BDB81C(&v7[1].monitor);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v12, v7, Method_GrandQuestLevelSelectController___c__DisplayClass11_0__Release_b__0__, 0LL),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1BDBAD4(v8, v9);
  }
  ScrTerminalListTop__ReleaseQuestListView(mTerminalListTop, v12, 0LL);
}


void __fastcall GrandQuestLevelSelectController__ResumeQuestList(
        GrandQuestLevelSelectController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct GrandQuestRootComponent_o *rootComponent; // x8

  rootComponent = this->fields.rootComponent;
  this->fields.currentState = 2;
  if ( !rootComponent || (this = (GrandQuestLevelSelectController_o *)rootComponent->fields.mTerminalListTop) == 0LL )
    sub_1BDBAD4(this, warId);
  ScrTerminalListTop__SetupListViewByWarId((ScrTerminalListTop_o *)this, warId, callback, 0LL);
}


void __fastcall GrandQuestLevelSelectController__Setup(
        GrandQuestLevelSelectController_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandQuestLevelSelectController__SetupQuestList(
        GrandQuestLevelSelectController_o *this,
        int32_t warId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  struct GrandQuestRootComponent_o *rootComponent; // x8
  ScrTerminalListTop_o *mTerminalListTop; // x20
  System_Action_o *v14; // x21

  if ( (byte_4B3F812 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__, v7);
    sub_1BDB878(&GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo, v8);
    byte_4B3F812 = 1;
  }
  v9 = (Il2CppObject *)sub_1BDBAC4(GrandQuestLevelSelectController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  v9[1].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v9[1]);
  v9[1].monitor = callback;
  v10 = sub_1BDB81C(&v9[1].monitor);
  rootComponent = this->fields.rootComponent;
  if ( !rootComponent
    || (mTerminalListTop = rootComponent->fields.mTerminalListTop,
        v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          v9,
          Method_GrandQuestLevelSelectController___c__DisplayClass8_0__SetupQuestList_b__0__,
          0LL),
        !mTerminalListTop) )
  {
LABEL_7:
    sub_1BDBAD4(v10, v11);
  }
  ScrTerminalListTop__SetupListViewByWarId(mTerminalListTop, warId, v14, 0LL);
}


int32_t __fastcall GrandQuestLevelSelectController__get_CurrentState(
        GrandQuestLevelSelectController_o *this,
        const MethodInfo *method)
{
  return this->fields.currentState;
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass10_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestLevelSelectController___c__DisplayClass10_0___GetTaskOfRelease_b__0(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotReleased;
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass10_0___GetTaskOfRelease_b__1(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  GrandQuestLevelSelectController_o *monitor; // x20

  v3 = (Il2CppObject *)this;
  if ( (byte_4B3F815 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_1BDB878(
                                                                        &Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__,
                                                                        v4);
    byte_4B3F815 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  monitor = (GrandQuestLevelSelectController_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass10_0__GetTaskOfRelease_b__2__,
      0LL);
    v3[2].klass = (Il2CppClass *)klass;
    this = (GrandQuestLevelSelectController___c__DisplayClass10_0_o *)sub_1BDB81C(&v3[2]);
  }
  if ( !monitor )
    sub_1BDBAD4(this, method);
  GrandQuestLevelSelectController__Release(monitor, klass, v2);
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass10_0___GetTaskOfRelease_b__2(
        GrandQuestLevelSelectController___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNotReleased = 0;
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass11_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass11_0___Release_b__0(
        GrandQuestLevelSelectController___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct GrandQuestLevelSelectController_o *_4__this; // x8

  ActionExtensions__Call(this->fields.callback, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(v3, v4);
  _4__this->fields.currentState = 1;
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass7_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandQuestLevelSelectController___c__DisplayClass7_0___GetTaskOfSetupQuestList_b__0(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSetupEnd;
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass7_0___GetTaskOfSetupQuestList_b__1(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  GrandQuestLevelSelectController___c__DisplayClass7_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__2; // x22
  GrandQuestLevelSelectController_o *_4__this; // x20
  int32_t warId; // w21

  v3 = this;
  if ( (byte_4B3F816 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_1BDB878(
                                                                       &Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__,
                                                                       v4);
    byte_4B3F816 = 1;
  }
  _9__2 = v3->fields.__9__2;
  _4__this = v3->fields.__4__this;
  warId = v3->fields.warId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_GrandQuestLevelSelectController___c__DisplayClass7_0__GetTaskOfSetupQuestList_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    this = (GrandQuestLevelSelectController___c__DisplayClass7_0_o *)sub_1BDB81C(&v3->fields.__9__2);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  GrandQuestLevelSelectController__SetupQuestList(_4__this, warId, _9__2, v2);
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass7_0___GetTaskOfSetupQuestList_b__2(
        GrandQuestLevelSelectController___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNotSetupEnd = 0;
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass8_0___ctor(
        GrandQuestLevelSelectController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandQuestLevelSelectController___c__DisplayClass8_0___SetupQuestList_b__0(
        GrandQuestLevelSelectController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  struct GrandQuestLevelSelectController_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  _4__this->fields.currentState = 2;
  ActionExtensions__Call(this->fields.callback, 0LL);
}