void BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int v11; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_593BCA3 & 1) == 0 )
  {
    sub_21FFC50(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
    byte_593BCA3 = 1;
  }
  v3 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_21FFEBC(BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v3, v4);
  this->fields.trigger = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.trigger, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (unsigned __int8)byte_5931948;
  this->fields.isDetachParent = 1;
  if ( !v11 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931948 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->upVector.fields.z;
  *(_QWORD *)&this->fields.rotation.fields.x = *(_QWORD *)&static_fields->upVector.fields.x;
  this->fields.rotation.fields.z = z;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleActorAnimationEffect__DetachParent(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *effectObj,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  if ( this->fields.isDetachParent )
  {
    if ( !effectObj || (this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform(effectObj, 0)) == 0 )
      sub_21FFECC(this, effectObj);
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0);
  }
}


void BattleActorAnimationEffect__DisplayEffect(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_o *v4; // x20
  _BOOL4 isEnemy; // w22
  int32_t effectId; // w21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  const MethodInfo *v9; // x4
  UnityEngine_GameObject_o *BattleEffect; // x21
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *FieldRoot; // x0
  const MethodInfo *v13; // x3
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x23
  __int64 v16; // x1
  BattleCharaColorMatrixComponent_c *v17; // x0
  __int128 *static_fields; // x8
  __int128 v19; // q0
  __int128 v20; // q2
  __int128 v21; // q3
  float actorScale; // s2
  const MethodInfo *v23; // x2
  BattleActorAnimationEffect_o *v24; // x0
  const MethodInfo *v25; // x3
  UnityEngine_Matrix4x4_o v26; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FlippedLocalScale; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593BCA0 & 1) == 0 )
  {
    sub_21FFC50(&BattleCharaColorMatrixComponent_TypeInfo);
    this = (BattleActorAnimationEffect_o *)sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    byte_593BCA0 = 1;
  }
  if ( !actor )
    goto LABEL_14;
  isEnemy = actor->fields.isEnemy;
  effectId = v4->fields.effectId;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, v4->fields.attachNodeName, -1, 0, 0);
  BattleEffect = BattleActorAnimationEffect__MakeBattleEffect(v4, actor, effectId, NodeFromLvName, v9);
  BattleActorAnimationEffect__FlipEnemy(v4, BattleEffect, isEnemy, v11);
  FieldRoot = BattleActorControl__getFieldRoot(actor, 0);
  BattleActorAnimationEffect__DetachParent(v4, BattleEffect, FieldRoot, v13);
  if ( actor->fields._IsStun2WaitMode_k__BackingField && v4->fields.isDetachParent )
  {
    performance = actor->fields.performance;
    if ( !performance )
      goto LABEL_14;
    data = performance->fields.data;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, actor);
    ServantAssetLoadManager__changeColorMatrixShader(BattleEffect, 1, data, 0);
    v17 = BattleCharaColorMatrixComponent_TypeInfo;
    if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v16);
      v17 = BattleCharaColorMatrixComponent_TypeInfo;
    }
    static_fields = (__int128 *)v17->static_fields;
    v19 = static_fields[3];
    v21 = *static_fields;
    v20 = static_fields[1];
    *(_OWORD *)&v26.fields.m02 = static_fields[2];
    *(_OWORD *)&v26.fields.m03 = v19;
    *(_OWORD *)&v26.fields.m00 = v21;
    *(_OWORD *)&v26.fields.m01 = v20;
    ServantAssetLoadManager__setColorMatrix(BattleEffect, &v26, 0.7, 0);
  }
  actorScale = actor->fields.actorScale;
  v27.fields.x = v4->fields.offset.fields.x * actorScale;
  v27.fields.y = v4->fields.offset.fields.y * actorScale;
  v27.fields.z = v4->fields.offset.fields.z * actorScale;
  GameObjectExtensions__AddLocalPosition(BattleEffect, v27, 0);
  FlippedLocalScale = BattleActorAnimationEffect__GetFlippedLocalScale(v4, isEnemy, v23);
  GameObjectExtensions__SetLocalScale(BattleEffect, FlippedLocalScale, 0);
  BattleActorAnimationEffect__ExecuteEffectMesh(v24, BattleEffect, actor->fields.uniqueID, v25);
  if ( !BattleEffect )
LABEL_14:
    sub_21FFECC(this, actor);
  UnityEngine_GameObject__SetActive(BattleEffect, 1, 0);
}


void BattleActorAnimationEffect__ExecuteEffectMesh(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  Il2CppClass *klass; // x8
  Il2CppObject *v8; // x19
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  Il2CppClass *v12; // x8
  __int64 v13; // x9
  IEffectMesh_c **v14; // x10
  __int64 v15; // x0

  if ( (byte_593BCA2 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
    this = (BattleActorAnimationEffect_o *)sub_21FFC50(&IEffectMesh_TypeInfo);
    byte_593BCA2 = 1;
  }
  if ( !obj )
    sub_21FFECC(this, obj);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
  if ( Component_object )
  {
    klass = Component_object->klass;
    v8 = Component_object;
    v9 = *(unsigned __int16 *)&Component_object->klass->_2.rank;
    if ( *(_WORD *)&Component_object->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IEffectMesh_c **)p_offset - 1) != IEffectMesh_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_2237E2C(Component_object, IEffectMesh_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v11)(v8, (unsigned int)targetId, *(_QWORD *)(v11 + 8));
    v12 = v8->klass;
    v13 = *(unsigned __int16 *)&v8->klass->_2.rank;
    if ( *(_WORD *)&v8->klass->_2.rank )
    {
      v14 = (IEffectMesh_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != IEffectMesh_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_16:
      v15 = sub_2237E2C(v8, IEffectMesh_TypeInfo, 1);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v15)(v8, *(_QWORD *)(v15 + 8));
  }
}


void BattleActorAnimationEffect__FlipEnemy(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *effectObj,
        bool isEnemy,
        const MethodInfo *method)
{
  if ( this->fields.isEnemyFlip && isEnemy )
  {
    if ( !effectObj || (this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform(effectObj, 0)) == 0 )
      sub_21FFECC(this, effectObj);
    UnityEngine_Transform__Rotate_83280924((UnityEngine_Transform_o *)this, 0.0, 180.0, 0.0, 0);
  }
}


UnityEngine_Vector3_o BattleActorAnimationEffect__GetFlippedLocalScale(
        BattleActorAnimationEffect_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  int32_t enemyScaleFlip; // w8
  float z; // s2
  float x; // s0
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( isEnemy )
  {
    enemyScaleFlip = this->fields.enemyScaleFlip;
    z = -1.0;
    if ( (enemyScaleFlip & 1) != 0 )
      x = -1.0;
    else
      x = 1.0;
    if ( (enemyScaleFlip & 2) != 0 )
      y = -1.0;
    else
      y = 1.0;
    if ( (enemyScaleFlip & 4) == 0 )
      z = 1.0;
  }
  else
  {
    if ( !byte_5931945 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void BattleActorAnimationEffect__Init(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *BattleActorAnimationEffect__MakeBattleEffect(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        int32_t battleEffectId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  BattleActorAnimationEffect_o *v11; // x19
  BattleActorAnimationEffect_o *v12; // x21
  _BOOL4 isRotationApplyAsLocal; // w21
  BattleActorAnimationEffect_o *v14; // x20

  v8 = this;
  if ( (byte_593BCA1 & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_21FFC50(&BattleEffectUtility_TypeInfo);
    byte_593BCA1 = 1;
  }
  if ( !actor )
    goto LABEL_20;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0);
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v9);
  this = (BattleActorAnimationEffect_o *)BattleEffectUtility__getEffectObjectSafe(battleEffectId, gameObject, 1, 1.0, 0);
  if ( !this )
    goto LABEL_20;
  v11 = this;
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  v12 = this;
  if ( !byte_5931940 )
  {
    this = (BattleActorAnimationEffect_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v12 )
    goto LABEL_20;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  isRotationApplyAsLocal = v8->fields.isRotationApplyAsLocal;
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  if ( isRotationApplyAsLocal )
  {
    if ( !this )
      goto LABEL_20;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v8->fields.rotation, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_20;
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)this, v8->fields.rotation, 0);
  }
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v11, 0);
  v14 = this;
  if ( !byte_5931945 )
  {
    this = (BattleActorAnimationEffect_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v14 )
LABEL_20:
    sub_21FFECC(this, actor);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  return (UnityEngine_GameObject_o *)v11;
}


System_String_o *BattleActorAnimationEffect__MakeTriggerKey(
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  if ( (byte_593BC9E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26522/*"{0}:{1}"*/);
    byte_593BC9E = 1;
  }
  return System_String__Format_75484576(
           (System_String_o *)StringLiteral_26522/*"{0}:{1}"*/,
           (Il2CppObject *)animName,
           (Il2CppObject *)eventTag,
           0);
}


void BattleActorAnimationEffect__OnExec(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  float delay; // s8
  System_Action_object__o *v10; // x21
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_593BC9F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleActorControl__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_DelayCall_BattleActorControl___);
    sub_21FFC50(&Method_BattleActorAnimationEffect_DisplayEffect__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BC9F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0, 0);
  if ( !v5 )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_21FFECC(v5, v6);
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v7);
    }
    else
    {
      v10 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleActorControl__TypeInfo);
      System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleActorAnimationEffect_DisplayEffect__, 0);
      v11 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v10,
              (Il2CppObject *)actor,
              (const MethodInfo_37DD110 *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v11, 0);
    }
  }
}


BattleActorAnimationEffect_DisplayTrigger_o *BattleActorAnimationEffect__get_Trigger(
        BattleActorAnimationEffect_o *this,
        const MethodInfo *method)
{
  return this->fields.trigger;
}


System_String_o *BattleActorAnimationEffect__get_TriggerKey(
        BattleActorAnimationEffect_o *this,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_o *v2; // x19
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  const MethodInfo *v4; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *v5; // x8
  System_Enum_o v7; // [xsp+8h] [xbp-38h] BYREF
  int32_t anim; // [xsp+18h] [xbp-28h]

  v2 = this;
  if ( (byte_593BC9D & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_21FFC50(&AnimationList_NAME_TypeInfo);
    byte_593BC9D = 1;
  }
  trigger = v2->fields.trigger;
  if ( !trigger
    || (anim = trigger->fields.anim,
        v7.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo,
        v7.monitor = (void *)-1LL,
        this = (BattleActorAnimationEffect_o *)System_Enum__ToString(&v7, 0),
        (v5 = v2->fields.trigger) == 0) )
  {
    sub_21FFECC(this, method);
  }
  return BattleActorAnimationEffect__MakeTriggerKey((System_String_o *)this, v5->fields.eventTag, v4);
}


void BattleActorAnimationEffect_DisplayTrigger___ctor(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  struct System_Int32_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593BCA5 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593BCA5 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  this->fields.targetSvtLimits = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetSvtLimits,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorAnimationEffect_DisplayTrigger__IsTarget(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_ICollection_o *targetSvtLimits; // x0
  System_Int32_array *v10; // x19
  System_Func_int__bool__o *v11; // x20

  if ( (byte_593BCA4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__);
    sub_21FFC50(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
    byte_593BCA4 = 1;
  }
  v5 = sub_21FFEBC(BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  targetSvtLimits = (System_Collections_ICollection_o *)this->fields.targetSvtLimits;
  *(_DWORD *)(v5 + 16) = limit;
  if ( BasicHelper__IsNullOrEmpty(targetSvtLimits, 0) )
    return 1;
  v10 = this->fields.targetSvtLimits;
  v11 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    0);
  return BasicHelper__Any_int__58574768(
           v10,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
}


void BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0___ctor(
        BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0___IsTarget_b__0(
        BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.limit == x;
}