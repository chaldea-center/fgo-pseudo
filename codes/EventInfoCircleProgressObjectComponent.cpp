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
    sub_1C1AE30(this, method);
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
  if ( (byte_4BC82BB & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_1C1ABD4(&CondType_TypeInfo, method);
    byte_4BC82BB = 1;
  }
  if ( v2->fields.isExtraCircle )
    return 1;
  reverseCondition = v2->fields.reverseCondition;
  if ( !reverseCondition )
    sub_1C1AE30(this, method);
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
  if ( (byte_4BC82BC & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_1C1ABD4(&CondType_TypeInfo, *(_QWORD *)&dispState);
    byte_4BC82BC = 1;
  }
  v5 = 64LL;
  if ( dispState == 1 )
    v5 = 72LL;
  v6 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&v4->klass + v5);
  if ( !v6 )
    sub_1C1AE30(this, *(_QWORD *)&dispState);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0
  Il2CppObject *Component_object; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  EasingObject_o *v33; // x20
  System_Action_o *v34; // x21
  System_Action_o *v35; // x22

  if ( (byte_4BC82BA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, endAction);
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1C1ABD4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__, v6);
    sub_1C1ABD4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__, v7);
    sub_1C1ABD4(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, v8);
    byte_4BC82BA = 1;
  }
  v9 = sub_1C1AE20(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = endAction;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)endAction, v18, v19, v20, v21, v22, v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v9 + 16) = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  *(_DWORD *)(v9 + 20) = 0;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v25,
                       (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 24) = Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)Component_object, v27, v28, v29, v30, v31, v32);
  v33 = *(EasingObject_o **)(v9 + 24);
  v34 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0LL);
  v35 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v9,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0LL);
  if ( !v33 )
LABEL_6:
    sub_1C1AE30(v10, v11);
  EasingObject__Play(v33, 0.5, v34, v35, 0.0, 5, 0LL);
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
  int64_t v10; // x21
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x22
  UnityEngine_GameObject_o *v34; // x0
  Il2CppObject *Component_object; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  EasingObject_o *v42; // x19
  System_Action_o *v43; // x21
  Il2CppObject *v44; // x22
  System_Action_o *v45; // x20
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC82B9 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, endAction);
    sub_1C1ABD4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5);
    sub_1C1ABD4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__, v6);
    sub_1C1ABD4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, v7);
    sub_1C1ABD4(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__, v8);
    sub_1C1ABD4(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v9);
    byte_4BC82B9 = 1;
  }
  v10 = sub_1C1AE20(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 32) = endAction;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)endAction, v19, v20, v21, v22, v23, v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v10 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v10 + 20) = 1151172608;
  v26 = sub_1C1AE20(EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_9;
  *(_QWORD *)(v26 + 32) = v10;
  v33 = v26 + 32;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 32), v10, v27, v28, v29, v30, v31, v32);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)(v26 + 32) )
    goto LABEL_9;
  v46.fields.x = *(float *)(*(_QWORD *)(v26 + 32) + 16LL);
  v46.fields.y = 0.0;
  v46.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v11, v46, 0LL);
  if ( !*(_QWORD *)v33 )
    goto LABEL_9;
  *(_DWORD *)(v26 + 24) = *(_DWORD *)(*(_QWORD *)v33 + 16LL);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v34,
                       (const MethodInfo_2FF16A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v26 + 16) = Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)Component_object, v36, v37, v38, v39, v40, v41);
  v42 = *(EasingObject_o **)(v26 + 16);
  v43 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v26,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0LL);
  v44 = *(Il2CppObject **)(v26 + 32);
  v45 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    v44,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0LL);
  if ( !v42 )
LABEL_9:
    sub_1C1AE30(v11, v12);
  EasingObject__Play(v42, 0.5, v43, v45, 0.0, 0, 0LL);
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
    sub_1C1AE30(this, endAction);
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
    sub_1C1AE30(frontDrawObject, isActive);
  }
  EventInfoCircleProgressDrawComponent__SetActive(frontDrawObject, v5, v6);
}


void __fastcall EventInfoCircleProgressObjectComponent__Setup(
        EventInfoCircleProgressObjectComponent_o *this,
        EventInfoCircleProgressControl_o *circleProgressCtrl,
        EventInfoCircleProgressControl_ProgressData_o *progressData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  EventInfoCircleProgressDrawComponent_o *frontDrawObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x5
  _BOOL4 isExtraCircle; // w8
  const MethodInfo *v21; // x5
  bool IsOldCompleted; // w4
  bool v23; // w3
  EventInfoCircleProgressControl_o *v24; // x1
  EventInfoCircleProgressControl_ProgressData_o *v25; // x2
  float v26; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.circleProgressCtrl = circleProgressCtrl;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.circleProgressCtrl,
    (int64_t)circleProgressCtrl,
    (int64_t)progressData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.progressData = progressData;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.progressData,
    (int64_t)progressData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
        v19);
      frontDrawObject = this->fields.backDrawObject;
      if ( frontDrawObject )
      {
        IsOldCompleted = progressData->fields.IsOldCompleted;
        v23 = this->fields.isExtraCircle;
        v24 = circleProgressCtrl;
        v25 = progressData;
        goto LABEL_9;
      }
    }
LABEL_13:
    sub_1C1AE30(frontDrawObject, v18);
  }
  if ( !frontDrawObject )
    goto LABEL_13;
  EventInfoCircleProgressDrawComponent__Setup(
    frontDrawObject,
    circleProgressCtrl,
    progressData,
    isExtraCircle,
    progressData->fields.IsOldCompleted,
    v19);
  frontDrawObject = this->fields.backDrawObject;
  if ( !frontDrawObject )
    goto LABEL_13;
  v23 = this->fields.isExtraCircle;
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, method);
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