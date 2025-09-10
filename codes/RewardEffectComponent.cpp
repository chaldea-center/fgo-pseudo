void RewardEffectComponent___ctor(RewardEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C240FB & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectComponent_TypeInfo);
    byte_4C240FB = 1;
  }
  this->fields.screenTouchInfoPosY = -221;
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


System_Collections_IEnumerator_o *RewardEffectComponent__DisplayWait(
        RewardEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C240FA & 1) == 0 )
  {
    sub_1C2D490(&RewardEffectComponent__DisplayWait_d__9_TypeInfo);
    byte_4C240FA = 1;
  }
  v3 = sub_1C2D6DC(RewardEffectComponent__DisplayWait_d__9_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void RewardEffectComponent__NextPlayAnimation(RewardEffectComponent_o *this, int32_t next, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  int32_t status; // w8
  System_Collections_IEnumerator_o *v6; // x1

  CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)this, next, 0);
  status = this->fields.status;
  if ( status == 4 || status == 6 && !this->fields.isWaitTouch )
  {
    this->fields.status = 1;
    v6 = RewardEffectComponent__DisplayWait(this, v4);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


void RewardEffectComponent__SetEndAction(
        RewardEffectComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.endAction = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endAction, (int32_t)action, (int32_t)method, v3);
}


void RewardEffectComponent__Start(RewardEffectComponent_o *this, const MethodInfo *method)
{
  struct ScreenTouchInformationComponent_o **p_screenTouchInfo; // x20
  UnityEngine_Object_o *screenTouchInfo; // x21
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C240F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C240F8 = 1;
  }
  CommonEffectComponent__Start((CommonEffectComponent_o *)this, 0);
  p_screenTouchInfo = &this->fields.screenTouchInfo;
  screenTouchInfo = (UnityEngine_Object_o *)this->fields.screenTouchInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(screenTouchInfo, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance
      || (transform = (UnityEngine_Transform_o *)CommonUI__CreateScreeenTouchInfo(
                                                   (CommonUI_o *)Instance,
                                                   transform,
                                                   0,
                                                   0)) == 0 )
    {
LABEL_13:
      sub_1C2D6EC(transform, v5);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    *p_screenTouchInfo = (struct ScreenTouchInformationComponent_o *)Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.screenTouchInfo, (int32_t)Component_object, v9, v10);
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
  UnityEngine_Component_o *screenTouchInfo; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C240F9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_RewardEffectComponent__Update_b__7_0__);
    sub_1C2D490(&Method_RewardEffectComponent_Update__);
    byte_4C240F9 = 1;
  }
  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
  if ( this->fields.isWaitTouch )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
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
        v5 = Method_RewardEffectComponent_Update__;
        if ( (*((_BYTE *)Method_RewardEffectComponent_Update__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C2D4A8(Method_RewardEffectComponent_Update__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
        v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v7, (Il2CppObject *)this, Method_RewardEffectComponent__Update_b__7_0__, 0);
        ((void (__fastcall *)(RewardEffectComponent_o *, __int64, System_Action_o *, const MethodInfo *))this->klass->vtable._8_Stop.methodPtr)(
          this,
          1,
          v7,
          this->klass->vtable._8_Stop.method);
      }
      screenTouchInfo = (UnityEngine_Component_o *)this->fields.screenTouchInfo;
      if ( !screenTouchInfo
        || (screenTouchInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(screenTouchInfo, 0)) == 0 )
      {
LABEL_17:
        sub_1C2D6EC(screenTouchInfo, v3);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)screenTouchInfo, 0, 0);
    }
  }
}


void RewardEffectComponent___Update_b__7_0(RewardEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endAction; // x0
  CGThumbnailListItem_o *p_endAction; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  p_endAction = (CGThumbnailListItem_o *)&this->fields.endAction;
  endAction = this->fields.endAction;
  LOBYTE(p_endAction[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  ActionExtensions__Call(endAction, 0);
  p_endAction->klass = 0;
  sub_1C2D434(p_endAction, 0, v4, v5);
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
  int32_t _1__state; // w8
  struct RewardEffectComponent_o *_4__this; // x20
  float displayTouchWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0

  v2 = this;
  if ( (byte_4C240FC & 1) == 0 )
  {
    this = (RewardEffectComponent__DisplayWait_d__9_o *)sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C240FC = 1;
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
                                                          0);
    if ( !this )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    CommonEffectComponent__NextPlayAnimation((CommonEffectComponent_o *)_4__this, 4, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      displayTouchWaitTime = _4__this->fields.displayTouchWaitTime;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, displayTouchWaitTime, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_12:
    sub_1C2D6EC(this, method);
  }
  return 0;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_RewardEffectComponent__DisplayWait_d__9_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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