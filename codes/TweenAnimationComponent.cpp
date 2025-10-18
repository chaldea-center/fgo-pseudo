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
  int32_t *p_closeEaseType; // x8

  if ( animationType == 1 )
    p_closeEaseType = &this->fields.closeEaseType;
  else
    p_closeEaseType = &this->fields.openEaseType;
  return *p_closeEaseType;
}


void TweenAnimationComponent__OnFinishAnimation(TweenAnimationComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_onFinishAnimation; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_onFinishAnimation = (CGThumbnailListItem_o *)&this->fields.onFinishAnimation;
  ActionExtensions__Call(this->fields.onFinishAnimation, 0);
  p_onFinishAnimation->klass = 0;
  sub_1C36FFC(p_onFinishAnimation, 0, v3, v4);
}


void TweenAnimationComponent__Setup(
        TweenAnimationComponent_o *this,
        int32_t animationType,
        UITweener_o *tweener,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  int32_t *p_closeEaseType; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C41C37 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_9907/*"OnFinishAnimation"*/);
    byte_4C41C37 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C36FFC((CGThumbnailListItem_o *)&tweener->fields.eventReceiver, (int32_t)gameObject, v12, v13);
        v14 = StringLiteral_9907/*"OnFinishAnimation"*/;
        tweener->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9907/*"OnFinishAnimation"*/;
        sub_1C36FFC((CGThumbnailListItem_o *)&tweener->fields.callWhenFinished, v14, v15, v16);
        this->fields.onFinishAnimation = onFinish;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onFinishAnimation, (int32_t)onFinish, v17, v18);
        return;
      }
    }
    sub_1C372B4(v9);
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
  UnityEngine_Object_o *target; // x20

  if ( (byte_4C41C36 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41C36 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  else
    return this->fields.target;
}