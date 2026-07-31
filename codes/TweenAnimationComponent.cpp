void TweenAnimationComponent___ctor(TweenAnimationComponent_o *this, const MethodInfo *method)
{
  this->fields.animationTime = 0.1;
  *(_QWORD *)&this->fields.openEaseType = 0x600000006LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t TweenAnimationComponent__GetEaseType(
        TweenAnimationComponent_o *this,
        int32_t animationType,
        const MethodInfo *method)
{
  int32_t *p_openEaseType; // x8

  p_openEaseType = &this->fields.openEaseType;
  if ( animationType == 1 )
    p_openEaseType = &this->fields.closeEaseType;
  return *p_openEaseType;
}


void TweenAnimationComponent__OnFinishAnimation(TweenAnimationComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_onFinishAnimation; // x19
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  p_onFinishAnimation = (MissionNaviTransitionBoardItem_o *)&this->fields.onFinishAnimation;
  ActionExtensions__Call(this->fields.onFinishAnimation, 0);
  p_onFinishAnimation->klass = 0;
  sub_21FFBF4(p_onFinishAnimation, 0, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void TweenAnimationComponent__Setup(
        TweenAnimationComponent_o *this,
        int32_t animationType,
        UITweener_o *tweener,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int32_t *p_closeEaseType; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59372CE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10296/*"OnFinishAnimation"*/);
    byte_59372CE = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&animationType, tweener);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tweener, 0, 0);
  if ( !v9 )
  {
    if ( animationType == 1 )
    {
      p_closeEaseType = &this->fields.closeEaseType;
      if ( tweener )
        goto LABEL_8;
    }
    else
    {
      p_closeEaseType = &this->fields.openEaseType;
      if ( tweener )
      {
LABEL_8:
        tweener->fields.method = *p_closeEaseType;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        tweener->fields.eventReceiver = gameObject;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&tweener->fields.eventReceiver,
          (int32_t)gameObject,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v19 = StringLiteral_10296/*"OnFinishAnimation"*/;
        tweener->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10296/*"OnFinishAnimation"*/;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&tweener->fields.callWhenFinished,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        this->fields.onFinishAnimation = onFinish;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.onFinishAnimation,
          (int32_t)onFinish,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        return;
      }
    }
    sub_21FFECC(v9, v10);
  }
}


float TweenAnimationComponent__get_AnimationTime(TweenAnimationComponent_o *this, const MethodInfo *method)
{
  return this->fields.animationTime;
}


UnityEngine_GameObject_o *TweenAnimationComponent__get_Target(
        TweenAnimationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *target; // x20

  if ( (byte_59372CD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59372CD = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  else
    return this->fields.target;
}