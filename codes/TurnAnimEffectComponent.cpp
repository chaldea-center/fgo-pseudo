void TurnAnimEffectComponent___ctor(TurnAnimEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1

  if ( (byte_5974568 & 1) == 0 )
  {
    sub_2213A60(&EffectComponent_TypeInfo);
    sub_2213A60(&StringLiteral_26594/*"{0}_start"*/);
    sub_2213A60(&StringLiteral_26593/*"{0}_loop"*/);
    byte_5974568 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_26594/*"{0}_start"*/;
  this->fields.leftTurnCount = -1;
  this->fields.CanShowBuff = 1;
  this->fields.startAnimName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.startAnimName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_26593/*"{0}_loop"*/;
  this->fields.loopAnimName = (struct System_String_o *)StringLiteral_26593/*"{0}_loop"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.loopAnimName, v10, v11, v12, v13, v14, v15, v16);
  if ( !*(&EffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EffectComponent_TypeInfo, v17);
  EffectComponent___ctor((EffectComponent_o *)this, 0);
}


void TurnAnimEffectComponent__Init(TurnAnimEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5974562 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_TryGetComponent_SimpleAnimation___);
    byte_5974562 = 1;
  }
  EffectComponent__Init((EffectComponent_o *)this, 0);
  if ( !UnityEngine_Component__TryGetComponent_object_(
          (UnityEngine_Component_o *)this,
          (Il2CppObject **)&this->fields.anim,
          (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_Animation___) )
    UnityEngine_Component__TryGetComponent_object_(
      (UnityEngine_Component_o *)this,
      (Il2CppObject **)&this->fields.simpleAnim,
      (const MethodInfo_3821BA4 *)Method_UnityEngine_Component_TryGetComponent_SimpleAnimation___);
  this->fields.isInitialized = 1;
}


bool TurnAnimEffectComponent__IsAnimationPlaying(
        TurnAnimEffectComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x21
  __int64 v6; // x1
  UnityEngine_Animation_o *v7; // x0
  UnityEngine_Object_o *simpleAnim; // x21

  if ( (byte_5974567 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974567 = 1;
  }
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animationName);
  if ( UnityEngine_Object__op_Inequality(anim, 0, 0) )
  {
    v7 = this->fields.anim;
    if ( v7 )
      return UnityEngine_Animation__IsPlaying(v7, animationName, 0);
LABEL_14:
    sub_2213CDC(v7, v6);
  }
  simpleAnim = (UnityEngine_Object_o *)this->fields.simpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( !UnityEngine_Object__op_Inequality(simpleAnim, 0, 0) )
    return 0;
  v7 = (UnityEngine_Animation_o *)this->fields.simpleAnim;
  if ( !v7 )
    goto LABEL_14;
  return SimpleAnimation__IsPlaying((SimpleAnimation_o *)v7, animationName, 0);
}


void TurnAnimEffectComponent__PlayAnimation(
        TurnAnimEffectComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *anim; // x21
  __int64 v6; // x1
  UnityEngine_Animation_o *v7; // x0
  UnityEngine_Object_o *simpleAnim; // x21

  if ( (byte_5974566 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974566 = 1;
  }
  if ( !this->fields.isInitialized )
    ((void (__fastcall *)(TurnAnimEffectComponent_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_Init.methodPtr)(
      this,
      this->klass->vtable._4_Init.method,
      method);
  anim = (UnityEngine_Object_o *)this->fields.anim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animationName);
  if ( UnityEngine_Object__op_Inequality(anim, 0, 0) )
  {
    v7 = this->fields.anim;
    if ( v7 )
    {
      UnityEngine_Animation__Play_83078544(v7, animationName, 0);
      return;
    }
LABEL_16:
    sub_2213CDC(v7, v6);
  }
  simpleAnim = (UnityEngine_Object_o *)this->fields.simpleAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(simpleAnim, 0, 0) )
  {
    v7 = (UnityEngine_Animation_o *)this->fields.simpleAnim;
    if ( !v7 )
      goto LABEL_16;
    SimpleAnimation__Play_78552168((SimpleAnimation_o *)v7, animationName, 0);
  }
}


void TurnAnimEffectComponent__PlayLoopAnimation(TurnAnimEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *loopAnimName; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x2
  int32_t leftTurnCount; // [xsp+Ch] [xbp-14h] BYREF

  loopAnimName = this->fields.loopAnimName;
  leftTurnCount = this->fields.leftTurnCount;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &leftTurnCount);
  v5 = System_String__Format(loopAnimName, v4, 0);
  TurnAnimEffectComponent__PlayAnimation(this, v5, v6);
}


void TurnAnimEffectComponent__PlayStartAnimation(TurnAnimEffectComponent_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1

  started = TurnAnimEffectComponent__PlayStartThenLoop(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *TurnAnimEffectComponent__PlayStartThen(
        TurnAnimEffectComponent_o *this,
        System_Action_o *onCompleted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5974565 & 1) == 0 )
  {
    sub_2213A60(&TurnAnimEffectComponent__PlayStartThen_d__14_TypeInfo);
    byte_5974565 = 1;
  }
  v5 = sub_2213CCC(TurnAnimEffectComponent__PlayStartThen_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = onCompleted;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)onCompleted, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *TurnAnimEffectComponent__PlayStartThenDestroy(
        TurnAnimEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5974564 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TurnAnimEffectComponent__PlayStartThenDestroy_b__13_0__);
    byte_5974564 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TurnAnimEffectComponent__PlayStartThenDestroy_b__13_0__, 0);
  return TurnAnimEffectComponent__PlayStartThen(this, v3, v4);
}


System_Collections_IEnumerator_o *TurnAnimEffectComponent__PlayStartThenLoop(
        TurnAnimEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5974563 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TurnAnimEffectComponent__PlayStartThenLoop_b__12_0__);
    byte_5974563 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_TurnAnimEffectComponent__PlayStartThenLoop_b__12_0__, 0);
  return TurnAnimEffectComponent__PlayStartThen(this, v3, v4);
}


void TurnAnimEffectComponent__SetLeftTurnCount(
        TurnAnimEffectComponent_o *this,
        int32_t turnCount,
        const MethodInfo *method)
{
  this->fields.leftTurnCount = turnCount;
}


// local variable allocation has failed, the output may be wrong!
void TurnAnimEffectComponent__UpdateTurnCount(
        TurnAnimEffectComponent_o *this,
        int32_t turnCount,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x0

  if ( this->fields.leftTurnCount != turnCount )
  {
    this->fields.CanShowBuff = 0;
    this->fields.leftTurnCount = turnCount;
    if ( turnCount < 1 )
      started = TurnAnimEffectComponent__PlayStartThenDestroy(this, *(const MethodInfo **)&turnCount);
    else
      started = TurnAnimEffectComponent__PlayStartThenLoop(this, *(const MethodInfo **)&turnCount);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
}


void TurnAnimEffectComponent___PlayStartThenDestroy_b__13_0(TurnAnimEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5974569 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974569 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void TurnAnimEffectComponent__PlayStartThen_d__14___ctor(
        TurnAnimEffectComponent__PlayStartThen_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TurnAnimEffectComponent__PlayStartThen_d__14__MoveNext(
        TurnAnimEffectComponent__PlayStartThen_d__14_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct TurnAnimEffectComponent_o *_4__this; // x20
  System_String_o *startAnimName; // x21
  Il2CppObject *v7; // x0
  struct System_String_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject **p__2__current; // x19
  struct System_Action_o *onCompleted; // x8
  int32_t leftTurnCount; // [xsp+Ch] [xbp-24h] BYREF

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_6;
LABEL_12:
    sub_2213CDC(this, method);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_12;
  startAnimName = _4__this->fields.startAnimName;
  leftTurnCount = _4__this->fields.leftTurnCount;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &leftTurnCount);
  v8 = System_String__Format(startAnimName, v7, 0);
  this->fields._animeName_5__2 = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._animeName_5__2,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  TurnAnimEffectComponent__PlayAnimation(_4__this, this->fields._animeName_5__2, v15);
LABEL_6:
  if ( TurnAnimEffectComponent__IsAnimationPlaying(_4__this, this->fields._animeName_5__2, v2) )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v16, v17, v18, v19, v20, v21);
    *((_DWORD *)p__2__current - 2) = 1;
    return 1;
  }
  onCompleted = this->fields.onCompleted;
  _4__this->fields.CanShowBuff = 1;
  if ( onCompleted )
    ((void (__fastcall *)(intptr_t, intptr_t))onCompleted->fields.invoke_impl)(
      onCompleted->fields.method_code,
      onCompleted->fields.method);
  return 0;
}


Il2CppObject *TurnAnimEffectComponent__PlayStartThen_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TurnAnimEffectComponent__PlayStartThen_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TurnAnimEffectComponent__PlayStartThen_d__14__System_Collections_IEnumerator_Reset(
        TurnAnimEffectComponent__PlayStartThen_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TurnAnimEffectComponent__PlayStartThen_d__14_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *TurnAnimEffectComponent__PlayStartThen_d__14__System_Collections_IEnumerator_get_Current(
        TurnAnimEffectComponent__PlayStartThen_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TurnAnimEffectComponent__PlayStartThen_d__14__System_IDisposable_Dispose(
        TurnAnimEffectComponent__PlayStartThen_d__14_o *this,
        const MethodInfo *method)
{
  ;
}