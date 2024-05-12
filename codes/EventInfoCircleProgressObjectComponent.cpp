void __fastcall EventInfoCircleProgressObjectComponent___ctor(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__ApplyProgressData(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *v3; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *v4; // x8
  struct EventInfoCircleProgressControl_ProgressData_o *v5; // x8

  progressData = this->fields.progressData;
  if ( !progressData
    || (progressData->fields.OldPoint = progressData->fields.Point, (v3 = this->fields.progressData) == 0LL)
    || (v3->fields.OldLevel = v3->fields.Level, (v4 = this->fields.progressData) == 0LL)
    || (v4->fields.OldDispState = v4->fields.DispState, (v5 = this->fields.progressData) == 0LL) )
  {
    sub_B7769C(this, method);
  }
  v5->fields.IsOldCompleted = v5->fields.IsCompleted;
}


void __fastcall EventInfoCircleProgressObjectComponent__Awake(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall EventInfoCircleProgressObjectComponent__IsBackDrawState(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *v2; // x19
  struct EventInfoCircleProgressObjectComponent_Condition_o *reverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v2 = this;
  if ( (byte_438C1C7 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_B775C4(&CondType_TypeInfo);
    byte_438C1C7 = 1;
  }
  if ( *(&v2->fields.isExtraCircle + 4) )
    return 1;
  reverseCondition = v2->fields.reverseCondition;
  if ( !reverseCondition )
    sub_B7769C(this, method);
  CondKind = reverseCondition->fields.CondKind;
  CondId = reverseCondition->fields.CondId;
  CondValue = reverseCondition->fields.CondValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoCircleProgressObjectComponent__IsCompletedState(
        EventInfoCircleProgressObjectComponent_o *this,
        int32_t dispState,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *v4; // x19
  __int64 v5; // x8
  _DWORD *v6; // x8
  int32_t v7; // w19
  int32_t v8; // w21
  int64_t v9; // x20

  v4 = this;
  if ( (byte_438C1C8 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_B775C4(&CondType_TypeInfo);
    byte_438C1C8 = 1;
  }
  v5 = 56LL;
  if ( dispState == 1 )
    v5 = 64LL;
  v6 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&v4->klass + v5);
  if ( !v6 )
    sub_B7769C(this, *(_QWORD *)&dispState);
  v8 = v6[4];
  v7 = v6[5];
  v9 = (int)v6[6];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(v8, v7, v9, 0, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EasingObject_o *v29; // x20
  System_Action_o *v30; // x21
  System_Action_o *v31; // x22

  if ( (byte_438C1C6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__);
    sub_B775C4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__);
    sub_B775C4(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo);
    byte_438C1C6 = 1;
  }
  v5 = sub_B77694(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo);
  EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)endAction, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v5 + 16) = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  *(_DWORD *)(v5 + 20) = 0;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v21,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 24) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), Component_UIWidget, v23, v24, v25, v26, v27, v28);
  v29 = *(EasingObject_o **)(v5 + 24);
  v30 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0LL);
  if ( !v29 )
LABEL_6:
    sub_B7769C(v6, v7);
  EasingObject__Play(v29, 0.5, v30, v31, 0.0, 5, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x22
  UnityEngine_GameObject_o *v29; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EasingObject_o *v37; // x19
  System_Action_o *v38; // x21
  Il2CppObject *v39; // x22
  System_Action_o *v40; // x20
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C1C5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__);
    sub_B775C4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo);
    sub_B775C4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__);
    sub_B775C4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo);
    byte_438C1C5 = 1;
  }
  v5 = sub_B77694(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)endAction, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v5 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v5 + 20) = 1151172608;
  v21 = sub_B77694(EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_9;
  *(_QWORD *)(v21 + 32) = v5;
  v28 = v21 + 32;
  sub_B77560((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)v5, v22, v23, v24, v25, v26, v27);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)(v21 + 32) )
    goto LABEL_9;
  v41.fields.x = *(float *)(*(_QWORD *)(v21 + 32) + 16LL);
  v41.fields.y = 0.0;
  v41.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v6, v41, 0LL);
  if ( !*(_QWORD *)v28 )
    goto LABEL_9;
  *(_DWORD *)(v21 + 24) = *(_DWORD *)(*(_QWORD *)v28 + 16LL);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v29,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v21 + 16) = Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)(v21 + 16), Component_UIWidget, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v21 + 16);
  v38 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v21,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0LL);
  v39 = *(Il2CppObject **)(v21 + 32);
  v40 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    v39,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0LL);
  if ( !v37 )
LABEL_9:
    sub_B7769C(v6, v7);
  EasingObject__Play(v37, 0.5, v38, v40, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayCompleteAnim(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  bool v4; // zf
  __int64 v5; // x8

  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_6;
  v4 = progressData->fields.OldDispState == 1;
  v5 = 40LL;
  if ( !v4 )
    v5 = 32LL;
  this = *(EventInfoCircleProgressObjectComponent_o **)((char *)&this->klass + v5);
  if ( !this )
LABEL_6:
    sub_B7769C(this, endAction);
  EventInfoCircleProgressDrawComponent__PlayCompleteAnim(
    (EventInfoCircleProgressDrawComponent_o *)this,
    endAction,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressObjectComponent__SetActive(
        EventInfoCircleProgressObjectComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2

  frontDrawObject = this->fields.frontDrawObject;
  if ( !frontDrawObject
    || (v5 = isActive,
        EventInfoCircleProgressDrawComponent__SetActive(frontDrawObject, isActive, method),
        (frontDrawObject = this->fields.backDrawObject) == 0LL) )
  {
    sub_B7769C(frontDrawObject, isActive);
  }
  EventInfoCircleProgressDrawComponent__SetActive(frontDrawObject, v5, v6);
}


void __fastcall EventInfoCircleProgressObjectComponent__Setup(
        EventInfoCircleProgressObjectComponent_o *this,
        EventInfoCircleProgressControl_o *circleProgressCtrl,
        EventInfoCircleProgressControl_ProgressData_o *progressData,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x5
  int v20; // w8
  const MethodInfo *v21; // x5
  bool IsOldCompleted; // w4
  bool v23; // w3
  EventInfoCircleProgressControl_o *v24; // x1
  EventInfoCircleProgressControl_ProgressData_o *v25; // x2
  float v26; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.circleProgressCtrl = circleProgressCtrl;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.circleProgressCtrl,
    (System_Int32_array **)circleProgressCtrl,
    (System_String_array **)progressData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.progressData = progressData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)progressData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !progressData )
    goto LABEL_13;
  frontDrawObject = this->fields.frontDrawObject;
  v20 = *((unsigned __int8 *)&this->fields.isExtraCircle + 4);
  if ( progressData->fields.OldDispState )
  {
    if ( frontDrawObject )
    {
      EventInfoCircleProgressDrawComponent__Setup(frontDrawObject, circleProgressCtrl, progressData, v20 != 0, 1, v19);
      frontDrawObject = this->fields.backDrawObject;
      if ( frontDrawObject )
      {
        IsOldCompleted = progressData->fields.IsOldCompleted;
        v23 = *(&this->fields.isExtraCircle + 4);
        v24 = circleProgressCtrl;
        v25 = progressData;
        goto LABEL_9;
      }
    }
LABEL_13:
    sub_B7769C(frontDrawObject, v18);
  }
  if ( !frontDrawObject )
    goto LABEL_13;
  EventInfoCircleProgressDrawComponent__Setup(
    frontDrawObject,
    circleProgressCtrl,
    progressData,
    v20 != 0,
    progressData->fields.IsOldCompleted,
    v19);
  frontDrawObject = this->fields.backDrawObject;
  if ( !frontDrawObject )
    goto LABEL_13;
  v23 = *(&this->fields.isExtraCircle + 4);
  v24 = circleProgressCtrl;
  v25 = progressData;
  IsOldCompleted = 0;
LABEL_9:
  EventInfoCircleProgressDrawComponent__Setup(frontDrawObject, v24, v25, v23, IsOldCompleted, v21);
  if ( progressData->fields.OldDispState == 1 )
    v26 = 180.0;
  else
    v26 = 0.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28.fields.y = 0.0;
  v28.fields.z = 0.0;
  v28.fields.x = v26;
  GameObjectExtensions__SetLocalEulerAngle(gameObject, v28, 0LL);
}


EventInfoCircleProgressDrawComponent_o *__fastcall EventInfoCircleProgressObjectComponent__get_BackDrawObject(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.backDrawObject;
}


int32_t __fastcall EventInfoCircleProgressObjectComponent__get_CircleId(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return *(_DWORD *)&this->fields.isExtraCircle;
}


EventInfoCircleProgressDrawComponent_o *__fastcall EventInfoCircleProgressObjectComponent__get_FrontDrawObject(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.frontDrawObject;
}


EventInfoCircleProgressControl_ProgressData_o *__fastcall EventInfoCircleProgressObjectComponent__get_ProgressData(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressData;
}


void __fastcall EventInfoCircleProgressObjectComponent_Condition___ctor(
        EventInfoCircleProgressObjectComponent_Condition_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___ctor(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___PlayAnimToBackDraw_b__1(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___ctor(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___PlayAnimToBackDraw_b__0(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *CS___8__locals1; // x8
  struct EasingObject_o *easingObj; // x9
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *v4; // x19
  float v5; // s0
  struct EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *v6; // x8
  float v7; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj, v4 = this, !easingObj)
    || (v5 = UnityEngine_Mathf__Lerp(
               CS___8__locals1->fields.fromAngle,
               CS___8__locals1->fields.toAngle,
               easingObj->fields.mStartTime,
               0LL),
        (v6 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *)v6->fields.__4__this) == 0LL )
  {
    sub_B7769C(this, method);
  }
  v7 = v5;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__AddLocalEulerAngleX(gameObject, v7 - v4->fields.oldAngle, 0LL);
  v4->fields.oldAngle = v7;
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___ctor(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___PlayAnimSlideIn_b__0(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x8
  EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *v3; // x19
  float v4; // s0
  float v5; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v3 = this,
        v4 = UnityEngine_Mathf__Lerp(this->fields.from, this->fields.to, easingObj->fields.mStartTime, 0LL),
        (this = (EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_B7769C(this, method);
  }
  v5 = v4;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, v5, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___PlayAnimSlideIn_b__1(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}