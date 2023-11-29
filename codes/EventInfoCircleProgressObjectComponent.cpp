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
    sub_B170D4();
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
  struct EventInfoCircleProgressObjectComponent_Condition_o *reverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  if ( (byte_40FA0E0 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FA0E0 = 1;
  }
  if ( *(&this->fields.isExtraCircle + 4) )
    return 1;
  reverseCondition = this->fields.reverseCondition;
  if ( !reverseCondition )
    sub_B170D4();
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
  __int64 v5; // x8
  _DWORD *v6; // x8
  int32_t v7; // w19
  int32_t v8; // w21
  int64_t v9; // x20

  if ( (byte_40FA0E1 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&dispState);
    byte_40FA0E1 = 1;
  }
  v5 = 56LL;
  if ( dispState == 1 )
    v5 = 64LL;
  v6 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&this->klass + v5);
  if ( !v6 )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
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
  UnityEngine_GameObject_o *v25; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  EasingObject_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Action_o *v43; // x22

  if ( (byte_40FA0DF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B16FFC(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__, v8);
    sub_B16FFC(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__, v9);
    sub_B16FFC(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, v10);
    byte_40FA0DF = 1;
  }
  v11 = sub_B170CC(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, endAction, method, v3, v4);
  EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 40) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 40), (System_Int32_array **)endAction, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v11 + 16) = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  *(_DWORD *)(v11 + 20) = 0;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v25,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v11 + 24) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), Component_UIWidget, v27, v28, v29, v30, v31, v32);
  v33 = *(EasingObject_o **)(v11 + 24);
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v11,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0LL);
  v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v11,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0LL);
  if ( !v33 )
LABEL_6:
    sub_B170D4();
  EasingObject__Play(v33, 0.5, v38, v43, 0.0, 5, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x22
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  EasingObject_o *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x21
  Il2CppObject *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Action_o *v58; // x20
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA0DE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B16FFC(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__, v8);
    sub_B16FFC(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__, v10);
    sub_B16FFC(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v11);
    byte_40FA0DE = 1;
  }
  v12 = sub_B170CC(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, endAction, method, v3, v4);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 32) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)endAction, v19, v20, v21, v22, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v12 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v12 + 20) = 1151172608;
  v30 = sub_B170CC(EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v26, v27, v28, v29);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_9;
  *(_QWORD *)(v30 + 32) = v12;
  v37 = v30 + 32;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 32), (System_Int32_array **)v12, v31, v32, v33, v34, v35, v36);
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)(v30 + 32) )
    goto LABEL_9;
  v59.fields.x = *(float *)(*(_QWORD *)(v30 + 32) + 16LL);
  v59.fields.y = 0.0;
  v59.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v38, v59, 0LL);
  if ( !*(_QWORD *)v37 )
    goto LABEL_9;
  *(_DWORD *)(v30 + 24) = *(_DWORD *)(*(_QWORD *)v37 + 16LL);
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v39,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v30 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 16), Component_UIWidget, v41, v42, v43, v44, v45, v46);
  v47 = *(EasingObject_o **)(v30 + 16);
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v30,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0LL);
  v53 = *(Il2CppObject **)(v30 + 32);
  v58 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v54, v55, v56, v57);
  System_Action___ctor(
    v58,
    v53,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0LL);
  if ( !v47 )
LABEL_9:
    sub_B170D4();
  EasingObject__Play(v47, 0.5, v52, v58, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayCompleteAnim(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  bool v4; // zf
  __int64 v5; // x8
  EventInfoCircleProgressDrawComponent_o *v6; // x0

  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_6;
  v4 = progressData->fields.OldDispState == 1;
  v5 = 40LL;
  if ( !v4 )
    v5 = 32LL;
  v6 = *(EventInfoCircleProgressDrawComponent_o **)((char *)&this->klass + v5);
  if ( !v6 )
LABEL_6:
    sub_B170D4();
  EventInfoCircleProgressDrawComponent__PlayCompleteAnim(v6, endAction, method);
}


void __fastcall EventInfoCircleProgressObjectComponent__SetActive(
        EventInfoCircleProgressObjectComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2
  EventInfoCircleProgressDrawComponent_o *backDrawObject; // x0

  frontDrawObject = this->fields.frontDrawObject;
  if ( !frontDrawObject
    || (v5 = isActive,
        EventInfoCircleProgressDrawComponent__SetActive(frontDrawObject, isActive, method),
        (backDrawObject = this->fields.backDrawObject) == 0LL) )
  {
    sub_B170D4();
  }
  EventInfoCircleProgressDrawComponent__SetActive(backDrawObject, v5, v6);
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
  const MethodInfo *v17; // x5
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  int v19; // w8
  const MethodInfo *v20; // x5
  EventInfoCircleProgressDrawComponent_o *backDrawObject; // x0
  bool IsOldCompleted; // w4
  bool v23; // w3
  EventInfoCircleProgressControl_o *v24; // x1
  EventInfoCircleProgressControl_ProgressData_o *v25; // x2
  float v26; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.circleProgressCtrl = circleProgressCtrl;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.circleProgressCtrl,
    (System_Int32_array **)circleProgressCtrl,
    (System_String_array **)progressData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.progressData = progressData;
  sub_B16F98(
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
      EventInfoCircleProgressDrawComponent__Setup(frontDrawObject, circleProgressCtrl, progressData, v19 != 0, 1, v17);
      backDrawObject = this->fields.backDrawObject;
      if ( backDrawObject )
      {
        IsOldCompleted = progressData->fields.IsOldCompleted;
        v23 = *(&this->fields.isExtraCircle + 4);
        v24 = circleProgressCtrl;
        v25 = progressData;
        goto LABEL_9;
      }
    }
LABEL_13:
    sub_B170D4();
  }
  if ( !frontDrawObject )
    goto LABEL_13;
  EventInfoCircleProgressDrawComponent__Setup(
    frontDrawObject,
    circleProgressCtrl,
    progressData,
    v19 != 0,
    progressData->fields.IsOldCompleted,
    v17);
  backDrawObject = this->fields.backDrawObject;
  if ( !backDrawObject )
    goto LABEL_13;
  v23 = *(&this->fields.isExtraCircle + 4);
  v24 = circleProgressCtrl;
  v25 = progressData;
  IsOldCompleted = 0;
LABEL_9:
  EventInfoCircleProgressDrawComponent__Setup(backDrawObject, v24, v25, v23, IsOldCompleted, v20);
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
  float v5; // s0
  struct EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *v6; // x8
  UnityEngine_Component_o *_4__this; // x0
  float v8; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj) == 0LL
    || (v5 = UnityEngine_Mathf__Lerp(
               CS___8__locals1->fields.fromAngle,
               CS___8__locals1->fields.toAngle,
               easingObj->fields.mStartTime,
               0LL),
        (v6 = this->fields.CS___8__locals1) == 0LL)
    || (_4__this = (UnityEngine_Component_o *)v6->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  v8 = v5;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  GameObjectExtensions__AddLocalEulerAngleX(gameObject, v8 - this->fields.oldAngle, 0LL);
  this->fields.oldAngle = v8;
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
  float v4; // s0
  UnityEngine_Component_o *_4__this; // x0
  float v6; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v4 = UnityEngine_Mathf__Lerp(this->fields.from, this->fields.to, easingObj->fields.mStartTime, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v6 = v4;
  gameObject = UnityEngine_Component__get_gameObject(_4__this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, v6, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___PlayAnimSlideIn_b__1(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}