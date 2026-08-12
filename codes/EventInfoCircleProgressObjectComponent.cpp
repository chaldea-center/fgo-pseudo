void EventInfoCircleProgressObjectComponent___ctor(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoCircleProgressObjectComponent__ApplyProgressData(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w9

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_2213CDC(this, method);
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  progressData->fields.OldPoint = progressData->fields.Point;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
}


void EventInfoCircleProgressObjectComponent__Awake(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  ;
}


bool EventInfoCircleProgressObjectComponent__IsBackDrawState(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *v2; // x19
  struct EventInfoCircleProgressObjectComponent_Condition_o *reverseCondition; // x8
  int64_t CondValue; // x21
  int32_t CondKind; // w19
  int32_t CondId; // w20

  v2 = this;
  if ( (byte_5970AB2 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_2213A60(&CondType_TypeInfo);
    byte_5970AB2 = 1;
  }
  if ( v2->fields.isExtraCircle )
    return 1;
  reverseCondition = v2->fields.reverseCondition;
  if ( !reverseCondition )
    sub_2213CDC(this, method);
  CondValue = reverseCondition->fields.CondValue;
  CondKind = reverseCondition->fields.CondKind;
  CondId = reverseCondition->fields.CondId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventInfoCircleProgressObjectComponent__IsCompletedState(
        EventInfoCircleProgressObjectComponent_o *this,
        int32_t dispState,
        const MethodInfo *method)
{
  EventInfoCircleProgressObjectComponent_o *v4; // x19
  __int64 v5; // x8
  _DWORD *v6; // x8
  int64_t v7; // x21
  int32_t v8; // w19
  int32_t v9; // w20

  v4 = this;
  if ( (byte_5970AB3 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_2213A60(&CondType_TypeInfo);
    byte_5970AB3 = 1;
  }
  v5 = 64;
  if ( dispState == 1 )
    v5 = 72;
  v6 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&v4->klass + v5);
  if ( !v6 )
    sub_2213CDC(this, *(_QWORD *)&dispState);
  v7 = (int)v6[6];
  v8 = v6[4];
  v9 = v6[5];
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&dispState);
  return CondType__IsOpen(v8, v9, v7, 0, 0, 0);
}


void EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x19
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
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  UnityEngine_GameObject_o *v22; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  EasingObject_o *v30; // x20
  System_Action_o *v31; // x21
  System_Action_o *v32; // x22

  if ( (byte_5970AB1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__);
    sub_2213A60(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__);
    sub_2213A60(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo);
    byte_5970AB1 = 1;
  }
  v5 = sub_2213CCC(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  *(_DWORD *)(v5 + 20) = 0;
  *(float *)(v5 + 16) = LocalPositionX;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v22,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v5 + 24) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Component_object, v24, v25, v26, v27, v28, v29);
  v30 = *(EasingObject_o **)(v5 + 24);
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0);
  v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0);
  if ( !v30 )
LABEL_6:
    sub_2213CDC(v6, v7);
  EasingObject__Play(v30, 0.5, v31, v32, 0.0, 5, 0);
}


void EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *v6; // x0
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
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalEulerAngleX; // s0
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_c *v22; // x0
  __int64 v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x22
  UnityEngine_GameObject_o *v31; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  EasingObject_o *v39; // x19
  System_Action_o *v40; // x21
  Il2CppObject *v41; // x22
  System_Action_o *v42; // x20
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5970AB0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__);
    sub_2213A60(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo);
    sub_2213A60(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__);
    sub_2213A60(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo);
    byte_5970AB0 = 1;
  }
  v5 = sub_2213CCC(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = endAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalEulerAngleX = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0);
  v22 = EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo;
  *(float *)(v5 + 16) = LocalEulerAngleX;
  *(_DWORD *)(v5 + 20) = 1151172608;
  v23 = sub_2213CCC(v22);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    goto LABEL_9;
  *(_QWORD *)(v23 + 32) = v5;
  v30 = v23 + 32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), v5, v24, v25, v26, v27, v28, v29);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(_QWORD *)(v23 + 32) )
    goto LABEL_9;
  v43.fields.y = 0.0;
  v43.fields.z = 0.0;
  v43.fields.x = *(float *)(*(_QWORD *)(v23 + 32) + 16LL);
  GameObjectExtensions__SetLocalEulerAngle(v6, v43, 0);
  if ( !*(_QWORD *)v30 )
    goto LABEL_9;
  *(_DWORD *)(v23 + 24) = *(_DWORD *)(*(_QWORD *)v30 + 16LL);
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v31,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v23 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 16), (int32_t)Component_object, v33, v34, v35, v36, v37, v38);
  v39 = *(EasingObject_o **)(v23 + 16);
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v23,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0);
  v41 = *(Il2CppObject **)(v23 + 32);
  v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    v41,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0);
  if ( !v39 )
LABEL_9:
    sub_2213CDC(v6, v7);
  EasingObject__Play(v39, 0.5, v40, v42, 0.0, 0, 0);
}


void EventInfoCircleProgressObjectComponent__PlayCompleteAnim(
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
  v5 = 40;
  if ( v4 )
    v5 = 48;
  this = *(EventInfoCircleProgressObjectComponent_o **)((char *)&this->klass + v5);
  if ( !this )
LABEL_6:
    sub_2213CDC(this, endAction);
  EventInfoCircleProgressDrawComponent__PlayCompleteAnim(
    (EventInfoCircleProgressDrawComponent_o *)this,
    endAction,
    method);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressObjectComponent__SetActive(
        EventInfoCircleProgressObjectComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  const MethodInfo *v6; // x2

  frontDrawObject = this->fields.frontDrawObject;
  if ( !frontDrawObject
    || (EventInfoCircleProgressDrawComponent__SetActive(frontDrawObject, isActive, method),
        (frontDrawObject = this->fields.backDrawObject) == 0) )
  {
    sub_2213CDC(frontDrawObject, isActive);
  }
  EventInfoCircleProgressDrawComponent__SetActive(frontDrawObject, isActive, v6);
}


void EventInfoCircleProgressObjectComponent__Setup(
        EventInfoCircleProgressObjectComponent_o *this,
        EventInfoCircleProgressControl_o *circleProgressCtrl,
        EventInfoCircleProgressControl_ProgressData_o *progressData,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x5
  bool IsOldCompleted; // w4
  bool isExtraCircle; // w3
  EventInfoCircleProgressControl_o *v23; // x1
  EventInfoCircleProgressControl_ProgressData_o *v24; // x2
  float v25; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.circleProgressCtrl = circleProgressCtrl;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.circleProgressCtrl,
    (int32_t)circleProgressCtrl,
    (System_String_o *)progressData,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.progressData = progressData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.progressData,
    (int32_t)progressData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !progressData )
    goto LABEL_13;
  frontDrawObject = this->fields.frontDrawObject;
  if ( progressData->fields.OldDispState )
  {
    if ( frontDrawObject )
    {
      EventInfoCircleProgressDrawComponent__Setup(
        frontDrawObject,
        circleProgressCtrl,
        progressData,
        this->fields.isExtraCircle,
        1,
        v19);
      frontDrawObject = this->fields.backDrawObject;
      if ( frontDrawObject )
      {
        IsOldCompleted = progressData->fields.IsOldCompleted;
        isExtraCircle = this->fields.isExtraCircle;
        v23 = circleProgressCtrl;
        v24 = progressData;
        goto LABEL_9;
      }
    }
LABEL_13:
    sub_2213CDC(frontDrawObject, v18);
  }
  if ( !frontDrawObject )
    goto LABEL_13;
  EventInfoCircleProgressDrawComponent__Setup(
    frontDrawObject,
    circleProgressCtrl,
    progressData,
    this->fields.isExtraCircle,
    progressData->fields.IsOldCompleted,
    v19);
  frontDrawObject = this->fields.backDrawObject;
  if ( !frontDrawObject )
    goto LABEL_13;
  isExtraCircle = this->fields.isExtraCircle;
  v23 = circleProgressCtrl;
  v24 = progressData;
  IsOldCompleted = 0;
LABEL_9:
  EventInfoCircleProgressDrawComponent__Setup(frontDrawObject, v23, v24, isExtraCircle, IsOldCompleted, v20);
  if ( progressData->fields.OldDispState == 1 )
    v25 = 180.0;
  else
    v25 = 0.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v27.fields.y = 0.0;
  v27.fields.z = 0.0;
  v27.fields.x = v25;
  GameObjectExtensions__SetLocalEulerAngle(gameObject, v27, 0);
}


EventInfoCircleProgressDrawComponent_o *EventInfoCircleProgressObjectComponent__get_BackDrawObject(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.backDrawObject;
}


int32_t EventInfoCircleProgressObjectComponent__get_CircleId(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.circleId;
}


EventInfoCircleProgressDrawComponent_o *EventInfoCircleProgressObjectComponent__get_FrontDrawObject(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.frontDrawObject;
}


EventInfoCircleProgressControl_ProgressData_o *EventInfoCircleProgressObjectComponent__get_ProgressData(
        EventInfoCircleProgressObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressData;
}


void EventInfoCircleProgressObjectComponent_Condition___ctor(
        EventInfoCircleProgressObjectComponent_Condition_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___ctor(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressObjectComponent___c__DisplayClass22_0___PlayAnimToBackDraw_b__1(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0);
}


void EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___ctor(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressObjectComponent___c__DisplayClass22_1___PlayAnimToBackDraw_b__0(
        EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_o *CS___8__locals1; // x8
  struct EasingObject_o *easingObj; // x9
  EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *v4; // x19
  float v5; // s0
  float mNow; // s1
  float v7; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj, v4 = this, !easingObj)
    || (this = (EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
  }
  v5 = 1.0;
  mNow = easingObj->fields.mNow;
  if ( mNow <= 1.0 )
    v5 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v5 = 0.0;
  v7 = CS___8__locals1->fields.fromAngle
     + (float)((float)(CS___8__locals1->fields.toAngle - CS___8__locals1->fields.fromAngle) * v5);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__AddLocalEulerAngleX(gameObject, v7 - v4->fields.oldAngle, 0);
  v4->fields.oldAngle = v7;
}


void EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___ctor(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___PlayAnimSlideIn_b__0(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *v3; // x8
  float v4; // s0
  float mNow; // s1
  float v6; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v3 = this, (this = (EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  v4 = 1.0;
  mNow = easingObj->fields.mNow;
  if ( mNow <= 1.0 )
    v4 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v4 = 0.0;
  v6 = v3->fields.from + (float)((float)(v3->fields.to - v3->fields.from) * v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, v6, 0);
}


void EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___PlayAnimSlideIn_b__1(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0);
}