void BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( (byte_4D33ED0 & 1) == 0 )
  {
    sub_1C93AD4(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
    byte_4D33ED0 = 1;
  }
  v3 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_1C93D20(BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v3, v4);
  this->fields.trigger = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.trigger, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  this->fields.isDetachParent = 1;
  if ( !byte_4D2A141 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A141 = 1;
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
      sub_1C93D2C(this, effectObj);
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0);
  }
}


void BattleActorAnimationEffect__DisplayEffect(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  bool isEnemy; // w22
  int32_t effectId; // w21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  const MethodInfo *v9; // x4
  UnityEngine_GameObject_o *BattleEffect; // x21
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *FieldRoot; // x0
  const MethodInfo *v13; // x3
  float actorScale; // s2
  const MethodInfo *v15; // x2
  BattleActorAnimationEffect_o *v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FlippedLocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( !actor )
    goto LABEL_4;
  isEnemy = actor->fields.isEnemy;
  effectId = this->fields.effectId;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, this->fields.attachNodeName, -1, 0, 0);
  BattleEffect = BattleActorAnimationEffect__MakeBattleEffect(this, actor, effectId, NodeFromLvName, v9);
  BattleActorAnimationEffect__FlipEnemy(this, BattleEffect, isEnemy, v11);
  FieldRoot = BattleActorControl__getFieldRoot(actor, 0);
  BattleActorAnimationEffect__DetachParent(this, BattleEffect, FieldRoot, v13);
  actorScale = actor->fields.actorScale;
  v18.fields.x = this->fields.offset.fields.x * actorScale;
  v18.fields.y = this->fields.offset.fields.y * actorScale;
  v18.fields.z = this->fields.offset.fields.z * actorScale;
  GameObjectExtensions__AddLocalPosition(BattleEffect, v18, 0);
  FlippedLocalScale = BattleActorAnimationEffect__GetFlippedLocalScale(this, isEnemy, v15);
  GameObjectExtensions__SetLocalScale(BattleEffect, FlippedLocalScale, 0);
  BattleActorAnimationEffect__ExecuteEffectMesh(v16, BattleEffect, actor->fields.uniqueID, v17);
  if ( !BattleEffect )
LABEL_4:
    sub_1C93D2C(this, actor);
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

  if ( (byte_4D33ECF & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
    this = (BattleActorAnimationEffect_o *)sub_1C93AD4(&IEffectMesh_TypeInfo);
    byte_4D33ECF = 1;
  }
  if ( !obj )
    sub_1C93D2C(this, obj);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
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
      v11 = sub_1C69E5C(Component_object, IEffectMesh_TypeInfo, 0);
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
      v15 = sub_1C69E5C(v8, IEffectMesh_TypeInfo, 1);
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
  if ( isEnemy && this->fields.isEnemyFlip )
  {
    if ( !effectObj || (this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform(effectObj, 0)) == 0 )
      sub_1C93D2C(this, effectObj);
    UnityEngine_Transform__Rotate_72144764((UnityEngine_Transform_o *)this, 0.0, 180.0, 0.0, 0);
  }
}


UnityEngine_Vector3_o BattleActorAnimationEffect__GetFlippedLocalScale(
        BattleActorAnimationEffect_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  int32_t enemyScaleFlip; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( isEnemy )
  {
    enemyScaleFlip = this->fields.enemyScaleFlip;
    result.fields.z = -1.0;
    if ( (enemyScaleFlip & 1) != 0 )
      result.fields.x = -1.0;
    else
      result.fields.x = 1.0;
    if ( (enemyScaleFlip & 2) != 0 )
      result.fields.y = -1.0;
    else
      result.fields.y = 1.0;
    if ( (enemyScaleFlip & 4) == 0 )
      result.fields.z = 1.0;
  }
  else
  {
    if ( !byte_4D2A13E )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    result.fields.x = static_fields->oneVector.fields.x;
    result.fields.y = static_fields->oneVector.fields.y;
    result.fields.z = static_fields->oneVector.fields.z;
  }
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
  UnityEngine_GameObject_o *gameObject; // x22
  BattleActorAnimationEffect_o *v10; // x19
  BattleActorAnimationEffect_o *v11; // x21
  _BOOL4 isRotationApplyAsLocal; // w21
  BattleActorAnimationEffect_o *v15; // x20
  UnityEngine_Vector3_o rotation; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4D33ECE & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    byte_4D33ECE = 1;
  }
  if ( !actor )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  this = (BattleActorAnimationEffect_o *)BattleEffectUtility__getEffectObjectSafe(battleEffectId, gameObject, 1, 1.0, 0);
  if ( !this )
    goto LABEL_19;
  v10 = this;
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_19;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v11 = this;
  if ( !byte_4D2A139 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v11 )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  isRotationApplyAsLocal = v8->fields.isRotationApplyAsLocal;
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  if ( !this )
    goto LABEL_19;
  rotation = v8->fields.rotation;
  if ( isRotationApplyAsLocal )
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, rotation, 0);
  else
    UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)this, rotation, 0);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0);
  v15 = this;
  if ( !byte_4D2A13E )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v15 )
LABEL_19:
    sub_1C93D2C(this, actor);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v15,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  return (UnityEngine_GameObject_o *)v10;
}


System_String_o *BattleActorAnimationEffect__MakeTriggerKey(
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  if ( (byte_4D33ECC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25502/*"{0}:{1}"*/);
    byte_4D33ECC = 1;
  }
  return System_String__Format_64467032(
           (System_String_o *)StringLiteral_25502/*"{0}:{1}"*/,
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

  if ( (byte_4D33ECD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_BattleActorControl__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_DelayCall_BattleActorControl___);
    sub_1C93AD4(&Method_BattleActorAnimationEffect_DisplayEffect__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33ECD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0, 0);
  if ( !v5 )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_1C93D2C(v5, v6);
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v7);
    }
    else
    {
      v10 = (System_Action_object__o *)sub_1C93D20(System_Action_BattleActorControl__TypeInfo);
      System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleActorAnimationEffect_DisplayEffect__, 0);
      v11 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v10,
              (Il2CppObject *)actor,
              (const MethodInfo_318E23C *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v11, 0);
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
  if ( (byte_4D33ECB & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C93AD4(&AnimationList_NAME_TypeInfo);
    byte_4D33ECB = 1;
  }
  trigger = v2->fields.trigger;
  if ( !trigger
    || (v7.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo,
        v7.monitor = (void *)-1LL,
        anim = trigger->fields.anim,
        this = (BattleActorAnimationEffect_o *)System_Enum__ToString(&v7, 0),
        (v5 = v2->fields.trigger) == 0) )
  {
    sub_1C93D2C(this, method);
  }
  return BattleActorAnimationEffect__MakeTriggerKey((System_String_o *)this, v5->fields.eventTag, v4);
}


void BattleActorAnimationEffect_DisplayTrigger___ctor(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  struct System_Int32_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D33ED2 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D33ED2 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.targetSvtLimits = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.targetSvtLimits, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  System_Int32_array *targetSvtLimits; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_4D33ED1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__);
    sub_1C93AD4(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
    byte_4D33ED1 = 1;
  }
  v5 = sub_1C93D20(BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = limit;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetSvtLimits, 0) )
    return 1;
  targetSvtLimits = this->fields.targetSvtLimits;
  v10 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    0);
  return BasicHelper__Any_int__51960056(
           targetSvtLimits,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
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