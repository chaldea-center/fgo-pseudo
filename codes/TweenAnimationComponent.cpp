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
  sub_1BD33FC(p_onFinishAnimation, 0LL, v3, v4, v5, v6, v7, v8);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B35E3A & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, *(_QWORD *)&animationType);
    sub_1BD3458(&StringLiteral_10048/*"OnFinishAnimation"*/, v9);
    byte_4B35E3A = 1;
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
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&tweener->fields.eventReceiver,
          (int64_t)gameObject,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        v20 = StringLiteral_10048/*"OnFinishAnimation"*/;
        tweener->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10048/*"OnFinishAnimation"*/;
        sub_1BD33FC((PartyOrganizationUtility_o *)&tweener->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
        this->fields.onFinishAnimation = onFinish;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&this->fields.onFinishAnimation,
          (int64_t)onFinish,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        return;
      }
    }
    sub_1BD36B4(v10, v11);
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

  if ( (byte_4B35E39 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B35E39 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0LL, 0LL) )
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  else
    return this->fields.target;
}