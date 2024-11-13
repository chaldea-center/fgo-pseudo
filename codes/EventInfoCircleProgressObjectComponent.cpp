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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  EventInfoCircleProgressObjectComponent_o *v3; // x19
  struct EventInfoCircleProgressObjectComponent_Condition_o *reverseCondition; // x8
  int32_t CondId; // w19
  int32_t CondKind; // w21
  int64_t CondValue; // x20

  v3 = this;
  if ( (byte_4B16A0A & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B16A0A = 1;
  }
  if ( v3->fields.isExtraCircle )
    return 1;
  reverseCondition = v3->fields.reverseCondition;
  if ( !reverseCondition )
    sub_1BCAA3C(this, method);
  CondKind = reverseCondition->fields.CondKind;
  CondId = reverseCondition->fields.CondId;
  CondValue = reverseCondition->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
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
  if ( (byte_4B16A0B & 1) == 0 )
  {
    this = (EventInfoCircleProgressObjectComponent_o *)sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&dispState, method);
    byte_4B16A0B = 1;
  }
  v5 = 64LL;
  if ( dispState == 1 )
    v5 = 72LL;
  v6 = *(EventInfoCircleProgressObjectComponent_c **)((char *)&v4->klass + v5);
  if ( !v6 )
    sub_1BCAA3C(this, *(_QWORD *)&dispState);
  v8 = v6[4];
  v7 = v6[5];
  v9 = (int)v6[6];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&dispState);
  return CondType__IsOpen(v8, v7, v9, 0, 0LL, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimSlideIn(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  Il2CppObject *Component_object; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  EasingObject_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x22

  if ( (byte_4B16A09 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7);
    sub_1BCA7E0(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__, v8, v9);
    sub_1BCA7E0(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__, v10, v11);
    sub_1BCA7E0(&EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, v12, v13);
    byte_4B16A09 = 1;
  }
  v14 = sub_1BCAA2C(EventInfoCircleProgressObjectComponent___c__DisplayClass23_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_6;
  *(_QWORD *)(v14 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 40) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 40), (int64_t)endAction, v23, v24, v25, v26, v27, v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v14 + 16) = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  *(_DWORD *)(v14 + 20) = 0;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v30,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v14 + 24) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)Component_object, v32, v33, v34, v35, v36, v37);
  v38 = *(EasingObject_o **)(v14 + 24);
  v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v40, v41);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v14,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass23_0__PlayAnimSlideIn_b__1__,
    0LL);
  if ( !v38 )
LABEL_6:
    sub_1BCAA3C(v15, v16);
  EasingObject__Play(v38, 0.5, v42, v46, 0.0, 5, 0LL);
}


void __fastcall EventInfoCircleProgressObjectComponent__PlayAnimToBackDraw(
        EventInfoCircleProgressObjectComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x21
  UnityEngine_GameObject_o *v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x22
  UnityEngine_GameObject_o *v43; // x0
  Il2CppObject *Component_object; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  EasingObject_o *v51; // x19
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x21
  Il2CppObject *v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_o *v60; // x20
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B16A08 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6, v7);
    sub_1BCA7E0(&Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__, v8, v9);
    sub_1BCA7E0(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
      v12,
      v13);
    sub_1BCA7E0(&EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v14, v15);
    byte_4B16A08 = 1;
  }
  v16 = sub_1BCAA2C(EventInfoCircleProgressObjectComponent___c__DisplayClass22_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_9;
  *(_QWORD *)(v16 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)endAction, v25, v26, v27, v28, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(float *)(v16 + 16) = GameObjectExtensions__GetLocalEulerAngleX(gameObject, 0LL);
  *(_DWORD *)(v16 + 20) = 1151172608;
  v35 = sub_1BCAA2C(EventInfoCircleProgressObjectComponent___c__DisplayClass22_1_TypeInfo, v32, v33, v34);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_9;
  *(_QWORD *)(v35 + 32) = v16;
  v42 = v35 + 32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), v16, v36, v37, v38, v39, v40, v41);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !*(_QWORD *)(v35 + 32) )
    goto LABEL_9;
  v61.fields.x = *(float *)(*(_QWORD *)(v35 + 32) + 16LL);
  v61.fields.y = 0.0;
  v61.fields.z = 0.0;
  GameObjectExtensions__SetLocalEulerAngle(v17, v61, 0LL);
  if ( !*(_QWORD *)v42 )
    goto LABEL_9;
  *(_DWORD *)(v35 + 24) = *(_DWORD *)(*(_QWORD *)v42 + 16LL);
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       v43,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v35 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)Component_object, v45, v46, v47, v48, v49, v50);
  v51 = *(EasingObject_o **)(v35 + 16);
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v35,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_1__PlayAnimToBackDraw_b__0__,
    0LL);
  v56 = *(Il2CppObject **)(v35 + 32);
  v60 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v57, v58, v59);
  System_Action___ctor(
    v60,
    v56,
    Method_EventInfoCircleProgressObjectComponent___c__DisplayClass22_0__PlayAnimToBackDraw_b__1__,
    0LL);
  if ( !v51 )
LABEL_9:
    sub_1BCAA3C(v17, v18);
  EasingObject__Play(v51, 0.5, v55, v60, 0.0, 0, 0LL);
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
    sub_1BCAA3C(this, endAction);
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
    sub_1BCAA3C(frontDrawObject, isActive);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.circleProgressCtrl,
    (int64_t)circleProgressCtrl,
    (int64_t)progressData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.progressData = progressData;
  sub_1BCA784(
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
    sub_1BCAA3C(frontDrawObject, v18);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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