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
  PartyOrganizationUtility_o *p_onFinishAnimation; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  p_onFinishAnimation = (PartyOrganizationUtility_o *)&this->fields.onFinishAnimation;
  ActionExtensions__Call(this->fields.onFinishAnimation, 0LL);
  p_onFinishAnimation->klass = 0LL;
  sub_1C21DDC(p_onFinishAnimation, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall TweenAnimationComponent__Setup(
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BDB2AB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_10098/*"OnFinishAnimation"*/);
    byte_4BDB2AB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tweener, 0LL, 0LL);
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        tweener->fields.eventReceiver = gameObject;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&tweener->fields.eventReceiver,
          (int64_t)gameObject,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v19 = StringLiteral_10098/*"OnFinishAnimation"*/;
        tweener->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10098/*"OnFinishAnimation"*/;
        sub_1C21DDC((PartyOrganizationUtility_o *)&tweener->fields.callWhenFinished, v19, v20, v21, v22, v23, v24, v25);
        this->fields.onFinishAnimation = onFinish;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.onFinishAnimation,
          (int64_t)onFinish,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        return;
      }
    }
    sub_1C22094(v9, v10);
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

  if ( (byte_4BDB2AA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB2AA = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  else
    return this->fields.target;
}