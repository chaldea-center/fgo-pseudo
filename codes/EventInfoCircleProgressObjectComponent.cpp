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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  EventInfoCircleProgressObjectComponent_o *v4; // x19
  struct EventInfoCircleProgressObjectComponent_Condition_o *reverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v4 = this;
  if ( (byte_42E9491 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9491 = 1;
  }
  if ( *(&v4->fields.isExtraCircle + 4) )
    return 1;
  reverseCondition = v4->fields.reverseCondition;
  if ( !reverseCondition )
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  EventInfoCircleProgressObjectComponent_o *v5; // x19
  __int64 v6; // x8
  _DWORD *v7; // x8
  int32_t v8; // w19
  int32_t v9; // w21
  int64_t v10; // x20

  v5 = this;
  if ( (byte_42E9492 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_B5D5C4(&CondType_TypeInfo, dispState, (_DWORD)method, v3);
    byte_42E9492 = 1;
  }
  v6 = 56LL;
  if ( dispState == 1 )
    v6 = 64LL;
  v7 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&v5->klass + v6);
  if ( !v7 )
    sub_B5D69C(this, *(_QWORD *)&dispState);
  v9 = v7[4];
  v8 = v7[5];
  v10 = (int)v7[6];
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(v9, v8, v10, 0, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  EasingObject_o *v42; // x20
  System_Action_o *v43; // x21
  System_Action_o *v44; // x22

  if ( (byte_42E9490 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7, v8);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, v15, v16, v17);
    byte_42E9490 = 1;
  }
  v18 = sub_B5D694(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo);
  EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_6;
  *(_QWORD *)(v18 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 40) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)endAction, v27, v28, v29, v30, v31, v32);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v18 + 16) = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  *(_DWORD *)(v18 + 20) = 0;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v34,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v18 + 24) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), Component_UIWidget, v36, v37, v38, v39, v40, v41);
  v42 = *(EasingObject_o **)(v18 + 24);
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v18,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0LL);
  v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v18,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0LL);
  if ( !v42 )
LABEL_6:
    sub_B5D69C(v19, v20);
  EasingObject__Play(v42, 0.5, v43, v44, 0.0, 5, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x22
  UnityEngine_GameObject_o *v45; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  EasingObject_o *v53; // x19
  System_Action_o *v54; // x21
  Il2CppObject *v55; // x22
  System_Action_o *v56; // x20
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E948F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7, v8);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v18, v19, v20);
    byte_42E948F = 1;
  }
  v21 = sub_B5D694(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_9;
  *(_QWORD *)(v21 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)endAction, v30, v31, v32, v33, v34, v35);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v21 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v21 + 20) = 1151172608;
  v37 = sub_B5D694(EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo);
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___ctor(
    (EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *)v37,
    0LL);
  if ( !v37 )
    goto LABEL_9;
  *(_QWORD *)(v37 + 32) = v21;
  v44 = v37 + 32;
  sub_B5D560((BattleServantConfConponent_o *)(v37 + 32), (System_Int32_array **)v21, v38, v39, v40, v41, v42, v43);
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)(v37 + 32) )
    goto LABEL_9;
  v57.fields.x = *(float *)(*(_QWORD *)(v37 + 32) + 16LL);
  v57.fields.y = 0.0;
  v57.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v22, v57, 0LL);
  if ( !*(_QWORD *)v44 )
    goto LABEL_9;
  *(_DWORD *)(v37 + 24) = *(_DWORD *)(*(_QWORD *)v44 + 16LL);
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                v45,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v37 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v37 + 16), Component_UIWidget, v47, v48, v49, v50, v51, v52);
  v53 = *(EasingObject_o **)(v37 + 16);
  v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v37,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0LL);
  v55 = *(Il2CppObject **)(v37 + 32);
  v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    v55,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0LL);
  if ( !v53 )
LABEL_9:
    sub_B5D69C(v22, v23);
  EasingObject__Play(v53, 0.5, v54, v56, 0.0, 0, 0LL);
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
    sub_B5D69C(this, endAction);
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
    sub_B5D69C(frontDrawObject, isActive);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.circleProgressCtrl,
    (System_Int32_array **)circleProgressCtrl,
    (System_String_array **)progressData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.progressData = progressData;
  sub_B5D560(
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
    sub_B5D69C(frontDrawObject, v18);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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