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
  GrandQuestFolderBoardItem_o *p_onFinishAnimation; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  p_onFinishAnimation = (GrandQuestFolderBoardItem_o *)&this->fields.onFinishAnimation;
  ActionExtensions__Call(this->fields.onFinishAnimation, 0);
  p_onFinishAnimation->klass = 0;
  sub_1C71354(p_onFinishAnimation, 0, v3, v4, v5, v6, v7, v8);
}


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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CC6055 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_9908/*"OnFinishAnimation"*/);
    byte_4CC6055 = 1;
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
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&tweener->fields.eventReceiver,
          (int32_t)gameObject,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v19 = StringLiteral_9908/*"OnFinishAnimation"*/;
        tweener->fields.callWhenFinished = (struct System_String_o *)StringLiteral_9908/*"OnFinishAnimation"*/;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&tweener->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
        this->fields.onFinishAnimation = onFinish;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.onFinishAnimation,
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
    sub_1C71608(v9, v10);
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

  if ( (byte_4CC6054 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6054 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  else
    return this->fields.target;
}