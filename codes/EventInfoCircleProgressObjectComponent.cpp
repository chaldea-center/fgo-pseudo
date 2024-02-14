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
    sub_B0D97C(this);
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
  if ( (byte_4215575 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4215575 = 1;
  }
  if ( *(&v2->fields.isExtraCircle + 4) )
    return 1;
  reverseCondition = v2->fields.reverseCondition;
  if ( !reverseCondition )
    sub_B0D97C(this);
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
  if ( (byte_4215576 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&dispState);
    byte_4215576 = 1;
  }
  v5 = 56LL;
  if ( dispState == 1 )
    v5 = 64LL;
  v6 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&v4->klass + v5);
  if ( !v6 )
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  EasingObject_o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_o *v38; // x22

  if ( (byte_4215574 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAction);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_B0D8A4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__, v6);
    sub_B0D8A4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__, v7);
    sub_B0D8A4(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, v8);
    byte_4215574 = 1;
  }
  v9 = sub_B0D974(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, endAction, method);
  EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 40) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)endAction, v17, v18, v19, v20, v21, v22);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v9 + 16) = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  *(_DWORD *)(v9 + 20) = 0;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v24,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 24) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), Component_UIWidget, v26, v27, v28, v29, v30, v31);
  v32 = *(EasingObject_o **)(v9 + 24);
  v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v9,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0LL);
  v38 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v9,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0LL);
  if ( !v32 )
LABEL_6:
    sub_B0D97C(v10);
  EasingObject__Play(v32, 0.5, v35, v38, 0.0, 5, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  UnityEngine_GameObject_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x22
  UnityEngine_GameObject_o *v35; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  EasingObject_o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x21
  Il2CppObject *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x20
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215573 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAction);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_B0D8A4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__, v6);
    sub_B0D8A4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, v7);
    sub_B0D8A4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__, v8);
    sub_B0D8A4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v9);
    byte_4215573 = 1;
  }
  v10 = sub_B0D974(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, endAction, method);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 32) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)endAction, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v10 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v10 + 20) = 1151172608;
  v27 = sub_B0D974(EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v25, v26);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_9;
  *(_QWORD *)(v27 + 32) = v10;
  v34 = v27 + 32;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v10, v28, v29, v30, v31, v32, v33);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)(v27 + 32) )
    goto LABEL_9;
  v51.fields.x = *(float *)(*(_QWORD *)(v27 + 32) + 16LL);
  v51.fields.y = 0.0;
  v51.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v11, v51, 0LL);
  if ( !*(_QWORD *)v34 )
    goto LABEL_9;
  *(_DWORD *)(v27 + 24) = *(_DWORD *)(*(_QWORD *)v34 + 16LL);
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v35,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v27 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 16), Component_UIWidget, v37, v38, v39, v40, v41, v42);
  v43 = *(EasingObject_o **)(v27 + 16);
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v27,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0LL);
  v47 = *(Il2CppObject **)(v27 + 32);
  v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
  System_Action___ctor(
    v50,
    v47,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0LL);
  if ( !v43 )
LABEL_9:
    sub_B0D97C(v11);
  EasingObject__Play(v43, 0.5, v46, v50, 0.0, 0, 0LL);
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
    sub_B0D97C(this);
  EventInfoCircleProgressDrawComponent__PlayCompleteAnim(
    (EventInfoCircleProgressDrawComponent_o *)this,
    endAction,
    method);
}


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
    sub_B0D97C(frontDrawObject);
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
  const MethodInfo *v18; // x5
  int v19; // w8
  const MethodInfo *v20; // x5
  bool IsOldCompleted; // w4
  bool v22; // w3
  EventInfoCircleProgressControl_o *v23; // x1
  EventInfoCircleProgressControl_ProgressData_o *v24; // x2
  float v25; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.circleProgressCtrl = circleProgressCtrl;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.circleProgressCtrl,
    (System_Int32_array **)circleProgressCtrl,
    (System_String_array **)progressData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.progressData = progressData;
  sub_B0D840(
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
  v19 = *((unsigned __int8 *)&this->fields.isExtraCircle + 4);
  if ( progressData->fields.OldDispState )
  {
    if ( frontDrawObject )
    {
      EventInfoCircleProgressDrawComponent__Setup(frontDrawObject, circleProgressCtrl, progressData, v19 != 0, 1, v18);
      frontDrawObject = this->fields.backDrawObject;
      if ( frontDrawObject )
      {
        IsOldCompleted = progressData->fields.IsOldCompleted;
        v22 = *(&this->fields.isExtraCircle + 4);
        v23 = circleProgressCtrl;
        v24 = progressData;
        goto LABEL_9;
      }
    }
LABEL_13:
    sub_B0D97C(frontDrawObject);
  }
  if ( !frontDrawObject )
    goto LABEL_13;
  EventInfoCircleProgressDrawComponent__Setup(
    frontDrawObject,
    circleProgressCtrl,
    progressData,
    v19 != 0,
    progressData->fields.IsOldCompleted,
    v18);
  frontDrawObject = this->fields.backDrawObject;
  if ( !frontDrawObject )
    goto LABEL_13;
  v22 = *(&this->fields.isExtraCircle + 4);
  v23 = circleProgressCtrl;
  v24 = progressData;
  IsOldCompleted = 0;
LABEL_9:
  EventInfoCircleProgressDrawComponent__Setup(frontDrawObject, v23, v24, v22, IsOldCompleted, v20);
  if ( progressData->fields.OldDispState == 1 )
    v25 = 180.0;
  else
    v25 = 0.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27.fields.y = 0.0;
  v27.fields.z = 0.0;
  v27.fields.x = v25;
  GameObjectExtensions__SetLocalEulerAngle(gameObject, v27, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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