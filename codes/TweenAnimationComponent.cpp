void __fastcall TweenAnimationComponent___ctor(TweenAnimationComponent_o *this, const MethodInfo *method)
{
  this->fields.animationTime = 0.1;
  *(_QWORD *)&this->fields.openEaseType = 0x600000006LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall TweenAnimationComponent__GetEaseType(
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


void __fastcall TweenAnimationComponent__OnFinishAnimation(TweenAnimationComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_onFinishAnimation; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  p_onFinishAnimation = (CGThumbnailListItem_o *)&this->fields.onFinishAnimation;
  ActionExtensions__Call(this->fields.onFinishAnimation, 0LL);
  p_onFinishAnimation->klass = 0LL;
  sub_1BC2FAC(p_onFinishAnimation, 0, v3, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TweenAnimationComponent__Setup(
        TweenAnimationComponent_o *this,
        int32_t animationType,
        UITweener_o *tweener,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t *p_closeEaseType; // x8
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B00CF4 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&animationType);
    sub_1BC3008(&StringLiteral_9819/*"OnFinishAnimation"*/, v9);
    byte_4B00CF4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tweener, 0LL, 0LL);
  if ( !v10 )
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        tweener->fields.eventReceiver = gameObject;
        sub_1BC2FAC((CGThumbnailListItem_o *)&tweener->fields.eventReceiver, (int32_t)gameObject, v14, v15);
        v16 = StringLiteral_9819/*"OnFinishAnimation"*/;
        tweener->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9819/*"OnFinishAnimation"*/;
        sub_1BC2FAC((CGThumbnailListItem_o *)&tweener->fields.callWhenFinished, v16, v17, v18);
        this->fields.onFinishAnimation = onFinish;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onFinishAnimation, (int32_t)onFinish, v19, v20);
        return;
      }
    }
    sub_1BC3264(v10, v11);
  }
}


float __fastcall TweenAnimationComponent__get_AnimationTime(TweenAnimationComponent_o *this, const MethodInfo *method)
{
  return this->fields.animationTime;
}


UnityEngine_GameObject_o *__fastcall TweenAnimationComponent__get_Target(
        TweenAnimationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20

  if ( (byte_4B00CF3 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B00CF3 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  else
    return this->fields.target;
}