// attributes: thunk
void BattleActorAnimationDuringAct___ctor(BattleActorAnimationDuringAct_o *this, const MethodInfo *method)
{
  BattleActorAnimationEffect___ctor((BattleActorAnimationEffect_o *)this, method);
}


void BattleActorAnimationDuringAct__Init(BattleActorAnimationDuringAct_o *this, const MethodInfo *method)
{
  UnityEngine_AnimationCurve_o *AlphaCurve; // x0
  UnityEngine_AnimationCurve_o *v4; // x20
  UnityEngine_SkinnedMeshRenderer_array *AlphaChangeMeshRenderers; // x21
  BattleActorAnimationDuringAct_ChangeAlphaProcess_o *v6; // x22
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5973EA6 & 1) == 0 )
  {
    sub_2213A60(&BattleActorAnimationDuringAct_ChangeAlphaProcess_TypeInfo);
    byte_5973EA6 = 1;
  }
  AlphaCurve = this->fields.AlphaCurve;
  if ( AlphaCurve && UnityEngine_AnimationCurve__get_length(AlphaCurve, 0) >= 1 )
  {
    v4 = this->fields.AlphaCurve;
    AlphaChangeMeshRenderers = this->fields.AlphaChangeMeshRenderers;
    v6 = (BattleActorAnimationDuringAct_ChangeAlphaProcess_o *)sub_2213CCC(BattleActorAnimationDuringAct_ChangeAlphaProcess_TypeInfo);
    BattleActorAnimationDuringAct_ChangeAlphaProcess___ctor(v6, v4, AlphaChangeMeshRenderers, v7);
    this->fields._changeAlphaProc = v6;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._changeAlphaProc,
      (int32_t)v6,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  else
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
}


void BattleActorAnimationDuringAct__OnExec(
        BattleActorAnimationDuringAct_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct BattleActorAnimationDuringAct_ChangeAlphaProcess_o *changeAlphaProc; // x20
  const MethodInfo *v14; // x1

  if ( this->fields.effectId >= 1 )
    BattleActorAnimationEffect__OnExec((BattleActorAnimationEffect_o *)this, actor, method);
  if ( this->fields._changeAlphaProc )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    changeAlphaProc = this->fields._changeAlphaProc;
    if ( !changeAlphaProc )
      sub_2213CDC(v5, v6);
    changeAlphaProc->fields._battleActor = actor;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&changeAlphaProc->fields, (int32_t)actor, v7, v8, v9, v10, v11, v12);
    changeAlphaProc->fields._elapsedTime = 0.0;
    BattleActorAnimationDuringAct_ChangeAlphaProcess__Exec(changeAlphaProc, 0.0, v14);
  }
}


void BattleActorAnimationDuringAct__Update(BattleActorAnimationDuringAct_o *this, const MethodInfo *method)
{
  BattleActorAnimationDuringAct_ChangeAlphaProcess_o *changeAlphaProc; // x20
  float deltaTime; // s0
  const MethodInfo *v5; // x1

  changeAlphaProc = this->fields._changeAlphaProc;
  if ( changeAlphaProc )
  {
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    if ( !BattleActorAnimationDuringAct_ChangeAlphaProcess__Exec(changeAlphaProc, deltaTime, v5) )
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  }
}


void BattleActorAnimationDuringAct_ChangeAlphaProcess___ctor(
        BattleActorAnimationDuringAct_ChangeAlphaProcess_o *this,
        UnityEngine_AnimationCurve_o *animCurve,
        UnityEngine_SkinnedMeshRenderer_array *meshRenderers,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  float KeyTime; // s0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._animCurve = animCurve;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._animCurve,
    (int32_t)animCurve,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  KeyTime = BasicHelper__LastKeyTime(animCurve, 0.0, 0);
  this->fields._meshRenderers = meshRenderers;
  this->fields._totalTime = KeyTime;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._meshRenderers,
    (int32_t)meshRenderers,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


bool BattleActorAnimationDuringAct_ChangeAlphaProcess__Exec(
        BattleActorAnimationDuringAct_ChangeAlphaProcess_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *battleActor; // x22
  UnityEngine_AnimationCurve_o *animCurve; // x0
  float v9; // s0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  float v12; // s0
  float v13; // s1
  System_Collections_ICollection_o *meshRenderers; // x0
  float v15; // s0
  BattleActorControl_o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_T__o *v23; // x23
  System_Action_object__o *v24; // x24

  if ( (byte_5973EA7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_Material__TypeInfo);
    sub_2213A60(&Method_BattleActorControl_UpdateMaterialsOnRenderers_SkinnedMeshRenderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0__Exec_b__0__);
    sub_2213A60(&BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_TypeInfo);
    byte_5973EA7 = 1;
  }
  v5 = sub_2213CCC(BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  battleActor = (UnityEngine_Object_o *)this->fields._battleActor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Equality(battleActor, 0, 0) )
    goto LABEL_21;
  animCurve = this->fields._animCurve;
  if ( !animCurve )
    return (char)animCurve;
  v9 = this->fields._elapsedTime + deltaTime;
  this->fields._elapsedTime = v9;
  v12 = UnityEngine_AnimationCurve__Evaluate(animCurve, v9, 0);
  if ( !v5 )
    goto LABEL_23;
  v13 = 1.0;
  meshRenderers = (System_Collections_ICollection_o *)this->fields._meshRenderers;
  if ( v12 <= 1.0 )
    v13 = v12;
  if ( v12 >= 0.0 )
    v15 = v13;
  else
    v15 = 0.0;
  *(float *)(v5 + 16) = v15;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(meshRenderers, 0);
  v16 = this->fields._battleActor;
  if ( IsNullOrEmpty )
  {
    if ( v16 )
    {
      BattleActorControl__SetActorAlpha(this->fields._battleActor, *(float *)(v5 + 16), 0);
      goto LABEL_18;
    }
LABEL_23:
    sub_2213CDC(IsNullOrEmpty, v11);
  }
  v23 = (System_Collections_Generic_IEnumerable_T__o *)this->fields._meshRenderers;
  v24 = (System_Action_object__o *)sub_2213CCC(System_Action_Material__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)v5,
    Method_BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0__Exec_b__0__,
    0);
  if ( !v16 )
    goto LABEL_23;
  BattleActorControl__UpdateMaterialsOnRenderers_object_(
    v16,
    v23,
    (System_Action_Material__o *)v24,
    (const MethodInfo_3816A70 *)Method_BattleActorControl_UpdateMaterialsOnRenderers_SkinnedMeshRenderer___);
LABEL_18:
  if ( this->fields._totalTime <= this->fields._elapsedTime )
  {
    this->fields._battleActor = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v17, v18, v19, v20, v21, v22);
LABEL_21:
    LOBYTE(animCurve) = 0;
    return (char)animCurve;
  }
  LOBYTE(animCurve) = 1;
  return (char)animCurve;
}


void BattleActorAnimationDuringAct_ChangeAlphaProcess__Start(
        BattleActorAnimationDuringAct_ChangeAlphaProcess_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields._battleActor = actor;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)actor,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields._elapsedTime = 0.0;
  BattleActorAnimationDuringAct_ChangeAlphaProcess__Exec(this, 0.0, v9);
}


void BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0___ctor(
        BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0___Exec_b__0(
        BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_o *v4; // x20

  v4 = this;
  if ( (byte_5973EA8 & 1) == 0 )
  {
    this = (BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_o *)sub_2213A60(&StringLiteral_17223/*"_fade"*/);
    byte_5973EA8 = 1;
  }
  if ( !material )
    sub_2213CDC(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17223/*"_fade"*/, v4->fields.alpha, 0);
}