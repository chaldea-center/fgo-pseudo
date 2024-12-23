void __fastcall RewardEffectComponent___ctor(RewardEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B63D35 & 1) == 0 )
  {
    sub_1BE4ACC(&CommonEffectComponent_TypeInfo, method);
    byte_4B63D35 = 1;
  }
  this->fields.screenTouchInfoPosY = -221;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RewardEffectComponent__DisplayWait(
        RewardEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B63D34 & 1) == 0 )
  {
    sub_1BE4ACC(&RewardEffectComponent__DisplayWait_d__9_TypeInfo, method);
    byte_4B63D34 = 1;
  }
  v3 = sub_1BE4D18(RewardEffectComponent__DisplayWait_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall RewardEffectComponent__NextPlayAnimation(
        RewardEffectComponent_o *this,
        int32_t next,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  int32_t status; // w8
  System_Collections_IEnumerator_o *v6; // x1

  CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)this, next, 0LL);
  status = this->fields.status;
  if ( status == 4 || status == 6 && !this->fields.isWaitTouch )
  {
    this->fields.status = 1;
    v6 = RewardEffectComponent__DisplayWait(this, v4);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall RewardEffectComponent__SetEndAction(
        RewardEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.endAction = action;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.endAction,
    (int64_t)action,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RewardEffectComponent__Start(RewardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B63D32 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B63D32 = 1;
  }
  CommonEffectComponent__Start((CommonEffectComponent_o *)this, 0LL);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance
      || (transform = (UnityEngine_Transform_o *)CommonUI__CreateScreeenTouchInfo(
                                                   (CommonUI_o *)Instance,
                                                   transform,
                                                   0,
                                                   0LL)) == 0LL )
    {
LABEL_13:
      sub_1BE4D28(transform, v7);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.screenTouchInfo,
      (int64_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  transform = (UnityEngine_Transform_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_13;
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (UnityEngine_Transform_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.screenTouchInfoPosY, 0LL);
}


void __fastcall RewardEffectComponent__Update(RewardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_4B63D33 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&CTouch_TypeInfo, v3);
    sub_1BE4ACC(&Method_RewardEffectComponent__Update_b__7_0__, v4);
    sub_1BE4ACC(&Method_RewardEffectComponent_Update__, v5);
    byte_4B63D33 = 1;
  }
  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  if ( this->fields.isWaitTouch )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    CTouch__process(0LL);
    if ( CTouch__isTouchPush(0LL) )
    {
      screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
      if ( !screenTouchInfo
        || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0LL)) == 0LL )
      {
        sub_1BE4D28(screenTouchInfo, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0LL);
      v8 = Method_RewardEffectComponent_Update__;
      if ( (*((_BYTE *)Method_RewardEffectComponent_Update__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BE4AE4(Method_RewardEffectComponent_Update__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_RewardEffectComponent__Update_b__7_0__, 0LL);
      ((void (__fastcall *)(RewardEffectComponent_o *, __int64, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._8_Stop.method)(
        this,
        1LL,
        v10,
        this->klass->vtable._9_ForceStop.methodPtr);
    }
  }
}


void __fastcall RewardEffectComponent___Update_b__7_0(RewardEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endAction; // x0
  PartyOrganizationUtility_o *p_endAction; // x19
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  p_endAction = (PartyOrganizationUtility_o *)&this->fields.endAction;
  endAction = this->fields.endAction;
  p_endAction[-1].fields._IsQuestStartMenuMode_k__BackingField = 0;
  ActionExtensions__Call(endAction, 0LL);
  p_endAction->klass = 0LL;
  sub_1BE4A70(p_endAction, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall RewardEffectComponent____n__0(RewardEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)this, next, 0LL);
}


void __fastcall RewardEffectComponent__DisplayWait_d__9___ctor(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall RewardEffectComponent__DisplayWait_d__9__MoveNext(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  RewardEffectComponent__DisplayWait_d__9_o *v2; // x19
  int32_t _1__state; // w8
  struct RewardEffectComponent_o *_4__this; // x20
  float displayTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4B63D36 & 1) == 0 )
  {
    this = (RewardEffectComponent__DisplayWait_d__9_o *)sub_1BE4ACC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4B63D36 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
    this = (RewardEffectComponent__DisplayWait_d__9_o *)_4__this->fields.screenTouchInfo;
    _4__this->fields.isWaitTouch = 1;
    if ( !this )
      goto LABEL_12;
    this = (RewardEffectComponent__DisplayWait_d__9_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)_4__this, 4, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      displayTouchWaitTime = _4__this->fields.displayTouchWaitTime;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1BE4D18(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, displayTouchWaitTime, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1BE4A70(p__2__current, (int64_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_12:
    sub_1BE4D28(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall RewardEffectComponent__DisplayWait_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RewardEffectComponent__DisplayWait_d__9__System_Collections_IEnumerator_Reset(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_RewardEffectComponent__DisplayWait_d__9_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall RewardEffectComponent__DisplayWait_d__9__System_Collections_IEnumerator_get_Current(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RewardEffectComponent__DisplayWait_d__9__System_IDisposable_Dispose(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  ;
}