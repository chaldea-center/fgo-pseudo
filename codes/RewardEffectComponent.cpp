void RewardEffectComponent___ctor(RewardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonEffectComponent_c *v4; // x0

  if ( (byte_59354F9 & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectComponent_TypeInfo);
    byte_59354F9 = 1;
  }
  v4 = CommonEffectComponent_TypeInfo;
  this->fields.screenTouchInfoPosY = -221;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


System_Collections_IEnumerator_o *RewardEffectComponent__DisplayWait(
        RewardEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59354F8 & 1) == 0 )
  {
    sub_21FFC50(&RewardEffectComponent__DisplayWait_d__9_TypeInfo);
    byte_59354F8 = 1;
  }
  v3 = sub_21FFEBC(RewardEffectComponent__DisplayWait_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void RewardEffectComponent__NextPlayAnimation(RewardEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  int32_t status; // w8
  System_Collections_IEnumerator_o *v6; // x1

  CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)this, next, 0);
  status = this->fields.status;
  if ( status == 4 || status == 7 && !this->fields.isWaitTouch )
  {
    this->fields.status = 1;
    v6 = RewardEffectComponent__DisplayWait(this, v4);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


void RewardEffectComponent__SetEndAction(
        RewardEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.endAction = action;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endAction,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RewardEffectComponent__Start(RewardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_59354F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59354F6 = 1;
  }
  CommonEffectComponent__Start((CommonEffectComponent_o *)this, 0);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance
      || (transform = (UnityEngine_Transform_o *)CommonUI__CreateScreeenTouchInfo(
                                                   (CommonUI_o *)Instance,
                                                   transform,
                                                   0,
                                                   0)) == 0 )
    {
LABEL_13:
      sub_21FFECC(transform, v7);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.screenTouchInfo,
      (int32_t)Component_object,
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
  transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (UnityEngine_Transform_o *)*p_screenTouchInfo;
  if ( !*p_screenTouchInfo )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, (float)this->fields.screenTouchInfoPosY, 0);
}


void RewardEffectComponent__Update(RewardEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_59354F7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_RewardEffectComponent__Update_b__7_0__);
    sub_21FFC50(&Method_RewardEffectComponent_Update__);
    byte_59354F7 = 1;
  }
  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
  if ( this->fields.isWaitTouch )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3, v4);
    CTouch__process(0);
    if ( CTouch__isTouchPush(0) )
    {
      screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
      if ( !screenTouchInfo )
        goto LABEL_17;
      screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0);
      if ( !screenTouchInfo )
        goto LABEL_17;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)screenTouchInfo, 0) )
      {
        v7 = Method_RewardEffectComponent_Update__;
        if ( (*((_BYTE *)Method_RewardEffectComponent_Update__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_21FFC68(Method_RewardEffectComponent_Update__);
        v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
        v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, Method_RewardEffectComponent__Update_b__7_0__, 0);
        ((void (__fastcall *)(RewardEffectComponent_o *, __int64, System_Action_o *, const MethodInfo *))this->klass->vtable._8_Stop.methodPtr)(
          this,
          1,
          v9,
          this->klass->vtable._8_Stop.method);
      }
      screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
      if ( !screenTouchInfo
        || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0)) == 0 )
      {
LABEL_17:
        sub_21FFECC(screenTouchInfo, v5);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0);
    }
  }
}


void RewardEffectComponent___Update_b__7_0(RewardEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endAction; // x0
  MissionNaviTransitionBoardItem_o *p_endAction; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  p_endAction = (MissionNaviTransitionBoardItem_o *)&this->fields.endAction;
  endAction = this->fields.endAction;
  LOBYTE(p_endAction[-1].fields._BoardType_k__BackingField) = 0;
  ActionExtensions__Call(endAction, 0);
  p_endAction->klass = 0;
  sub_21FFBF4(p_endAction, 0, v4, v5, v6, v7, v8, v9);
}


void RewardEffectComponent____n__0(RewardEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)this, next, 0);
}


void RewardEffectComponent__DisplayWait_d__9___ctor(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RewardEffectComponent__DisplayWait_d__9__MoveNext(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  RewardEffectComponent__DisplayWait_d__9_o *v2; // x19
  int32_t _1__state; // w21
  struct RewardEffectComponent_o *_4__this; // x20
  float displayTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_59354FA & 1) == 0 )
  {
    this = (RewardEffectComponent__DisplayWait_d__9_o *)sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_59354FA = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      displayTouchWaitTime = _4__this->fields.displayTouchWaitTime;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, displayTouchWaitTime, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return _1__state == 0;
    }
    goto LABEL_12;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (RewardEffectComponent__DisplayWait_d__9_o *)_4__this->fields.screenTouchInfo;
      _4__this->fields.isWaitTouch = 1;
      if ( this )
      {
        this = (RewardEffectComponent__DisplayWait_d__9_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)_4__this, 4, 0);
          return _1__state == 0;
        }
      }
    }
LABEL_12:
    sub_21FFECC(this, method);
  }
  return _1__state == 0;
}


Il2CppObject *RewardEffectComponent__DisplayWait_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RewardEffectComponent__DisplayWait_d__9__System_Collections_IEnumerator_Reset(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_RewardEffectComponent__DisplayWait_d__9_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *RewardEffectComponent__DisplayWait_d__9__System_Collections_IEnumerator_get_Current(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RewardEffectComponent__DisplayWait_d__9__System_IDisposable_Dispose(
        RewardEffectComponent__DisplayWait_d__9_o *this,
        const MethodInfo *method)
{
  ;
}