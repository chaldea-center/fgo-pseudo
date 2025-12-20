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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2FD5F & 1) == 0 )
  {
    sub_1C94098(&BattleActorAnimationDuringAct_ChangeAlphaProcess_TypeInfo);
    byte_4D2FD5F = 1;
  }
  AlphaCurve = this->fields.AlphaCurve;
  if ( AlphaCurve && UnityEngine_AnimationCurve__get_length(AlphaCurve, 0) >= 1 )
  {
    v4 = this->fields.AlphaCurve;
    AlphaChangeMeshRenderers = this->fields.AlphaChangeMeshRenderers;
    v6 = (BattleActorAnimationDuringAct_ChangeAlphaProcess_o *)sub_1C942E4(BattleActorAnimationDuringAct_ChangeAlphaProcess_TypeInfo);
    BattleActorAnimationDuringAct_ChangeAlphaProcess___ctor(v6, v4, AlphaChangeMeshRenderers, v7);
    this->fields._changeAlphaProc = v6;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._changeAlphaProc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattleActorAnimationDuringAct_ChangeAlphaProcess_o *changeAlphaProc; // x20
  const MethodInfo *v14; // x1

  if ( this->fields.effectId >= 1 )
    BattleActorAnimationEffect__OnExec((BattleActorAnimationEffect_o *)this, actor, method);
  if ( this->fields._changeAlphaProc )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    changeAlphaProc = this->fields._changeAlphaProc;
    if ( !changeAlphaProc )
      sub_1C942F0(v5, v6);
    changeAlphaProc->fields._battleActor = actor;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&changeAlphaProc->fields, (int32_t)actor, v7, v8, v9, v10, v11, v12);
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
  BattleActorAnimationDuringAct_ChangeAlphaProcess_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  float KeyTime; // s0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._animCurve = animCurve;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v6->fields._animCurve, (int32_t)animCurve, v7, v8, v9, v10, v11, v12);
  KeyTime = BasicHelper__LastKeyTime(animCurve, 0.0, 0);
  v6->fields._meshRenderers = meshRenderers;
  v6 = (BattleActorAnimationDuringAct_ChangeAlphaProcess_o *)((char *)v6 + 40);
  *(float *)&v6[-1].fields._meshRenderers = KeyTime;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v6, (int32_t)meshRenderers, v14, v15, v16, v17, v18, v19);
}


bool BattleActorAnimationDuringAct_ChangeAlphaProcess__Exec(
        BattleActorAnimationDuringAct_ChangeAlphaProcess_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Object_o *battleActor; // x22
  UnityEngine_AnimationCurve_o *animCurve; // x0
  float v8; // s0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v10; // x1
  float v11; // s0
  bool v12; // nf
  float v13; // s0
  BattleActorControl_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_T__o *meshRenderers; // x23
  System_Action_object__o *v22; // x24

  if ( (byte_4D2FD60 & 1) == 0 )
  {
    sub_1C94098(&System_Action_Material__TypeInfo);
    sub_1C94098(&Method_BattleActorControl_UpdateMaterialsOnRenderers_SkinnedMeshRenderer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0__Exec_b__0__);
    sub_1C94098(&BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_TypeInfo);
    byte_4D2FD60 = 1;
  }
  v5 = sub_1C942E4(BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  battleActor = (UnityEngine_Object_o *)this->fields._battleActor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(battleActor, 0, 0) )
    goto LABEL_19;
  animCurve = this->fields._animCurve;
  if ( !animCurve )
    return (char)animCurve;
  v8 = this->fields._elapsedTime + deltaTime;
  this->fields._elapsedTime = v8;
  v11 = UnityEngine_AnimationCurve__Evaluate(animCurve, v8, 0);
  if ( !v5 )
    goto LABEL_21;
  v12 = v11 < 0.0;
  v13 = fminf(v11, 1.0);
  if ( v12 )
    v13 = 0.0;
  *(float *)(v5 + 16) = v13;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._meshRenderers, 0);
  v14 = this->fields._battleActor;
  if ( IsNullOrEmpty )
  {
    if ( v14 )
    {
      BattleActorControl__SetActorAlpha(this->fields._battleActor, *(float *)(v5 + 16), 0);
      goto LABEL_16;
    }
LABEL_21:
    sub_1C942F0(IsNullOrEmpty, v10);
  }
  meshRenderers = (System_Collections_Generic_IEnumerable_T__o *)this->fields._meshRenderers;
  v22 = (System_Action_object__o *)sub_1C942E4(System_Action_Material__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0__Exec_b__0__,
    0);
  if ( !v14 )
    goto LABEL_21;
  BattleActorControl__UpdateMaterialsOnRenderers_object_(
    v14,
    meshRenderers,
    (System_Action_Material__o *)v22,
    (const MethodInfo_318C334 *)Method_BattleActorControl_UpdateMaterialsOnRenderers_SkinnedMeshRenderer___);
LABEL_16:
  if ( this->fields._totalTime <= this->fields._elapsedTime )
  {
    this->fields._battleActor = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, 0, v15, v16, v17, v18, v19, v20);
LABEL_19:
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields._battleActor = actor;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)actor, (int32_t)method, v3, v4, v5, v6, v7);
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
  if ( (byte_4D2FD61 & 1) == 0 )
  {
    this = (BattleActorAnimationDuringAct_ChangeAlphaProcess___c__DisplayClass7_0_o *)sub_1C94098(&StringLiteral_16610/*"_fade"*/);
    byte_4D2FD61 = 1;
  }
  if ( !material )
    sub_1C942F0(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16610/*"_fade"*/, v4->fields.alpha, 0);
}