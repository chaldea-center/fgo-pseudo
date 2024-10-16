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
  int32_t Level; // w10
  int32_t DispState; // w11
  bool IsCompleted; // w12

  progressData = this->fields.progressData;
  if ( !progressData )
    sub_1BAB678(this, method);
  Level = progressData->fields.Level;
  DispState = progressData->fields.DispState;
  IsCompleted = progressData->fields.IsCompleted;
  progressData->fields.OldPoint = progressData->fields.Point;
  progressData->fields.OldLevel = Level;
  progressData->fields.OldDispState = DispState;
  progressData->fields.IsOldCompleted = IsCompleted;
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
  if ( (byte_4AB6562 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_1BAB41C(&CondType_TypeInfo, method);
    byte_4AB6562 = 1;
  }
  if ( v2->fields.isExtraCircle )
    return 1;
  reverseCondition = v2->fields.reverseCondition;
  if ( !reverseCondition )
    sub_1BAB678(this, method);
  CondKind = reverseCondition->fields.CondKind;
  CondId = reverseCondition->fields.CondId;
  CondValue = reverseCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondKind, CondId, CondValue, 0, 0LL, 0LL);
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
  if ( (byte_4AB6563 & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_1BAB41C(&CondType_TypeInfo, *(_QWORD *)&dispState);
    byte_4AB6563 = 1;
  }
  v5 = 64LL;
  if ( dispState == 1 )
    v5 = 72LL;
  v6 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&v4->klass + v5);
  if ( !v6 )
    sub_1BAB678(this, *(_QWORD *)&dispState);
  v8 = v6[4];
  v7 = v6[5];
  v9 = (int)v6[6];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(v8, v7, v9, 0, 0LL, 0LL);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  EasingObject_o *v21; // x20
  System_Action_o *v22; // x21
  System_Action_o *v23; // x22

  if ( (byte_4AB6561 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, endAction);
    sub_1BAB41C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1BAB41C(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__, v6);
    sub_1BAB41C(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__, v7);
    sub_1BAB41C(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, v8);
    byte_4AB6561 = 1;
  }
  v9 = sub_1BAB668(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = endAction;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)endAction, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v9 + 16) = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  *(_DWORD *)(v9 + 20) = 0;
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v17,
                       (const MethodInfo_2F15458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 24) = Component_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)Component_object, v19, v20);
  v21 = *(EasingObject_o **)(v9 + 24);
  v22 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0LL);
  v23 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0LL);
  if ( !v21 )
LABEL_6:
    sub_1BAB678(v10, v11);
  EasingObject__Play(v21, 0.5, v22, v23, 0.0, 5, 0LL);
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
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x22
  UnityEngine_GameObject_o *v22; // x0
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  EasingObject_o *v26; // x19
  System_Action_o *v27; // x21
  Il2CppObject *v28; // x22
  System_Action_o *v29; // x20
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB6560 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, endAction);
    sub_1BAB41C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1BAB41C(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__, v6);
    sub_1BAB41C(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, v7);
    sub_1BAB41C(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__, v8);
    sub_1BAB41C(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v9);
    byte_4AB6560 = 1;
  }
  v10 = sub_1BAB668(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 32) = endAction;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)endAction, v15, v16);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v10 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v10 + 20) = 1151172608;
  v18 = sub_1BAB668(EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 32) = v10;
  v21 = v18 + 32;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 32), v10, v19, v20);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)(v18 + 32) )
    goto LABEL_9;
  v30.fields.x = *(float *)(*(_QWORD *)(v18 + 32) + 16LL);
  v30.fields.y = 0.0;
  v30.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v11, v30, 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_9;
  *(_DWORD *)(v18 + 24) = *(_DWORD *)(*(_QWORD *)v21 + 16LL);
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v22,
                       (const MethodInfo_2F15458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v18 + 16) = Component_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)Component_object, v24, v25);
  v26 = *(EasingObject_o **)(v18 + 16);
  v27 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v18,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0LL);
  v28 = *(Il2CppObject **)(v18 + 32);
  v29 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    v28,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0LL);
  if ( !v26 )
LABEL_9:
    sub_1BAB678(v11, v12);
  EasingObject__Play(v26, 0.5, v27, v29, 0.0, 0, 0LL);
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
  v5 = 48LL;
  if ( !v4 )
    v5 = 40LL;
  this = *(EventInfoCircleProgressObjectComponent_o **)((char *)&this->klass + v5);
  if ( !this )
LABEL_6:
    sub_1BAB678(this, endAction);
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
    sub_1BAB678(frontDrawObject, isActive);
  }
  EventInfoCircleProgressDrawComponent__SetActive(frontDrawObject, v5, v6);
}


void __fastcall EventInfoCircleProgressObjectComponent__Setup(
        EventInfoCircleProgressObjectComponent_o *this,
        EventInfoCircleProgressControl_o *circleProgressCtrl,
        EventInfoCircleProgressControl_ProgressData_o *progressData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5
  _BOOL4 isExtraCircle; // w8
  const MethodInfo *v13; // x5
  bool IsOldCompleted; // w4
  bool v15; // w3
  EventInfoCircleProgressControl_o *v16; // x1
  EventInfoCircleProgressControl_ProgressData_o *v17; // x2
  float v18; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.circleProgressCtrl = circleProgressCtrl;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.circleProgressCtrl,
    (int32_t)circleProgressCtrl,
    (int32_t)progressData,
    (int32_t)method);
  this->fields.progressData = progressData;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.progressData, (int32_t)progressData, v7, v8);
  if ( !progressData )
    goto LABEL_13;
  frontDrawObject = this->fields.frontDrawObject;
  isExtraCircle = this->fields.isExtraCircle;
  if ( progressData->fields.OldDispState )
  {
    if ( frontDrawObject )
    {
      EventInfoCircleProgressDrawComponent__Setup(
        frontDrawObject,
        circleProgressCtrl,
        progressData,
        isExtraCircle,
        1,
        v11);
      frontDrawObject = this->fields.backDrawObject;
      if ( frontDrawObject )
      {
        IsOldCompleted = progressData->fields.IsOldCompleted;
        v15 = this->fields.isExtraCircle;
        v16 = circleProgressCtrl;
        v17 = progressData;
        goto LABEL_9;
      }
    }
LABEL_13:
    sub_1BAB678(frontDrawObject, v10);
  }
  if ( !frontDrawObject )
    goto LABEL_13;
  EventInfoCircleProgressDrawComponent__Setup(
    frontDrawObject,
    circleProgressCtrl,
    progressData,
    isExtraCircle,
    progressData->fields.IsOldCompleted,
    v11);
  frontDrawObject = this->fields.backDrawObject;
  if ( !frontDrawObject )
    goto LABEL_13;
  v15 = this->fields.isExtraCircle;
  v16 = circleProgressCtrl;
  v17 = progressData;
  IsOldCompleted = 0;
LABEL_9:
  EventInfoCircleProgressDrawComponent__Setup(frontDrawObject, v16, v17, v15, IsOldCompleted, v13);
  if ( progressData->fields.OldDispState == 1 )
    v18 = 180.0;
  else
    v18 = 0.0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20.fields.y = 0.0;
  v20.fields.z = 0.0;
  v20.fields.x = v18;
  GameObjectExtensions__SetLocalEulerAngle(gameObject, v20, 0LL);
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
  return this->fields.circleId;
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
  float mNow; // s0
  float v6; // s1
  bool v7; // nf
  float v8; // s0
  float v9; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_7;
  easingObj = this->fields.easingObj;
  v4 = this;
  if ( !easingObj )
    goto LABEL_7;
  mNow = easingObj->fields.mNow;
  this = (EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_o *)CS___8__locals1->fields.__4__this;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !this )
LABEL_7:
    sub_1BAB678(this, method);
  v9 = CS___8__locals1->fields.fromAngle
     + (float)((float)(CS___8__locals1->fields.toAngle - CS___8__locals1->fields.fromAngle) * v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__AddLocalEulerAngleX(gameObject, v9 - v4->fields.oldAngle, 0LL);
  v4->fields.oldAngle = v9;
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
  struct EasingObject_o *easingObj; // x9
  EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *v3; // x8
  float mNow; // s2
  float v5; // s3
  bool v6; // nf
  float v7; // s2
  float v8; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v3 = this,
        (this = (EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BAB678(this, method);
  }
  mNow = easingObj->fields.mNow;
  v5 = fminf(mNow, 1.0);
  v6 = mNow < 0.0;
  v7 = 0.0;
  if ( !v6 )
    v7 = v5;
  v8 = v3->fields.from + (float)(v7 * (float)(v3->fields.to - v3->fields.from));
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, v8, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent___c__DisplayClass23_0___PlayAnimSlideIn_b__1(
        EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}