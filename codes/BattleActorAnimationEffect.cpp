void __fastcall BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5DE81 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
    byte_4A5DE81 = 1;
  }
  v3 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_1B887FC(BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v3, v4);
  this->fields.trigger = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.trigger, (int32_t)v3, v5, v6);
  this->fields.isDetachParent = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorAnimationEffect__DetachParent(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *effectObj,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  if ( this->fields.isDetachParent )
  {
    if ( !effectObj
      || (this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform(effectObj, 0LL)) == 0LL )
    {
      sub_1B8880C(this, effectObj);
    }
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0LL);
  }
}


void __fastcall BattleActorAnimationEffect__DisplayEffect(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL4 isEnemy; // w22
  int32_t effectId; // w21
  UnityEngine_Transform_o *transform; // x0
  BattleActorAnimationEffect_o *NodeFromLvName; // x0
  const MethodInfo *v9; // x4
  UnityEngine_GameObject_o *BattleEffect; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  struct BattlePerformance_o *performance; // x8
  float actorScale; // s2
  const MethodInfo *v15; // x2
  BattleActorAnimationEffect_o *v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FlippedLocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( !actor )
    goto LABEL_5;
  isEnemy = actor->fields.isEnemy;
  effectId = this->fields.effectId;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)actor, 0LL);
  NodeFromLvName = (BattleActorAnimationEffect_o *)TransformHelper__getNodeFromLvName(
                                                     transform,
                                                     this->fields.attachNodeName,
                                                     -1,
                                                     0,
                                                     0LL);
  BattleEffect = BattleActorAnimationEffect__MakeBattleEffect(
                   NodeFromLvName,
                   actor,
                   effectId,
                   (UnityEngine_Transform_o *)NodeFromLvName,
                   v9);
  BattleActorAnimationEffect__FlipEnemy(this, BattleEffect, isEnemy, v11);
  performance = actor->fields.performance;
  if ( !performance )
    goto LABEL_5;
  BattleActorAnimationEffect__DetachParent(this, BattleEffect, performance->fields.root_field, v12);
  actorScale = actor->fields.actorScale;
  v18.fields.x = this->fields.offset.fields.x * actorScale;
  v18.fields.y = this->fields.offset.fields.y * actorScale;
  v18.fields.z = this->fields.offset.fields.z * actorScale;
  GameObjectExtensions__AddLocalPosition(BattleEffect, v18, 0LL);
  FlippedLocalScale = BattleActorAnimationEffect__GetFlippedLocalScale(this, isEnemy, v15);
  GameObjectExtensions__SetLocalScale(BattleEffect, FlippedLocalScale, 0LL);
  BattleActorAnimationEffect__ExecuteEffectMesh(v16, BattleEffect, actor->fields.uniqueID, v17);
  if ( !BattleEffect )
LABEL_5:
    sub_1B8880C(this, actor);
  UnityEngine_GameObject__SetActive(BattleEffect, 1, 0LL);
}


void __fastcall BattleActorAnimationEffect__ExecuteEffectMesh(
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
  __int64 p_method; // x0
  Il2CppClass *v12; // x8
  __int64 v13; // x9
  IEffectMesh_c **v14; // x10
  __int64 v15; // x0

  if ( (byte_4A5DE80 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
    this = (BattleActorAnimationEffect_o *)sub_1B885B0(&IEffectMesh_TypeInfo);
    byte_4A5DE80 = 1;
  }
  if ( !obj )
    sub_1B8880C(this, obj);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
  if ( Component_object )
  {
    klass = Component_object->klass;
    v8 = Component_object;
    v9 = *(unsigned __int16 *)(&Component_object->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Component_object->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IEffectMesh_c **)p_offset - 1) != IEffectMesh_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Component_object, IEffectMesh_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))p_method)(
      v8,
      (unsigned int)targetId,
      *(_QWORD *)(p_method + 8));
    v12 = v8->klass;
    v13 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
    {
      v14 = (IEffectMesh_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != IEffectMesh_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(v8, IEffectMesh_TypeInfo, 1LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v15)(v8, *(_QWORD *)(v15 + 8));
  }
}


void __fastcall BattleActorAnimationEffect__FlipEnemy(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *effectObj,
        bool isEnemy,
        const MethodInfo *method)
{
  if ( isEnemy && this->fields.isEnemyFlip )
  {
    if ( !effectObj
      || (this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform(effectObj, 0LL)) == 0LL )
    {
      sub_1B8880C(this, effectObj);
    }
    UnityEngine_Transform__Rotate_69482044((UnityEngine_Transform_o *)this, 0.0, 180.0, 0.0, 0LL);
  }
}


UnityEngine_Vector3_o __fastcall BattleActorAnimationEffect__GetFlippedLocalScale(
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
    if ( !byte_4A55CE6 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
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


UnityEngine_GameObject_o *__fastcall BattleActorAnimationEffect__MakeBattleEffect(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        int32_t battleEffectId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  BattleActorAnimationEffect_o *v9; // x19
  BattleActorAnimationEffect_o *v10; // x20
  BattleActorAnimationEffect_o *v11; // x20
  BattleActorAnimationEffect_o *v12; // x20

  if ( (byte_4A5DE7F & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1B885B0(&BattleEffectUtility_TypeInfo);
    byte_4A5DE7F = 1;
  }
  if ( !actor )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0LL);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  this = (BattleActorAnimationEffect_o *)BattleEffectUtility__getEffectObjectSafe(
                                           battleEffectId,
                                           gameObject,
                                           1,
                                           1.0,
                                           0LL);
  if ( !this )
    goto LABEL_18;
  v9 = this;
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  v10 = this;
  if ( !byte_4A55CE1 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v10 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v10,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  v11 = this;
  if ( !byte_4A55CE9 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE9 = 1;
  }
  if ( !v11 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->upVector,
    0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  v12 = this;
  if ( !byte_4A55CE6 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v12 )
LABEL_18:
    sub_1B8880C(this, actor);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UnityEngine_GameObject_o *)v9;
}


System_String_o *__fastcall BattleActorAnimationEffect__MakeTriggerKey(
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  if ( (byte_4A5DE7D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_25076/*"{0}:{1}"*/);
    byte_4A5DE7D = 1;
  }
  return System_String__Format_61721404(
           (System_String_o *)StringLiteral_25076/*"{0}:{1}"*/,
           (Il2CppObject *)animName,
           (Il2CppObject *)eventTag,
           0LL);
}


void __fastcall BattleActorAnimationEffect__OnExec(
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

  if ( (byte_4A5DE7E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActorControl__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_DelayCall_BattleActorControl___);
    sub_1B885B0(&Method_BattleActorAnimationEffect_DisplayEffect__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE7E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( !v5 )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_1B8880C(v5, v6);
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v7);
    }
    else
    {
      v10 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActorControl__TypeInfo);
      System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleActorAnimationEffect_DisplayEffect__, 0LL);
      v11 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v10,
              (Il2CppObject *)actor,
              (const MethodInfo_2E6B394 *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    }
  }
}


BattleActorAnimationEffect_DisplayTrigger_o *__fastcall BattleActorAnimationEffect__get_Trigger(
        BattleActorAnimationEffect_o *this,
        const MethodInfo *method)
{
  return this->fields.trigger;
}


System_String_o *__fastcall BattleActorAnimationEffect__get_TriggerKey(
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
  if ( (byte_4A5DE7C & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1B885B0(&AnimationList_NAME_TypeInfo);
    byte_4A5DE7C = 1;
  }
  trigger = v2->fields.trigger;
  if ( !trigger
    || (v7.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo,
        v7.monitor = (void *)-1LL,
        anim = trigger->fields.anim,
        this = (BattleActorAnimationEffect_o *)System_Enum__ToString(&v7, 0LL),
        (v5 = v2->fields.trigger) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  return BattleActorAnimationEffect__MakeTriggerKey((System_String_o *)this, v5->fields.eventTag, v4);
}


void __fastcall BattleActorAnimationEffect_DisplayTrigger___ctor(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  struct System_Int32_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DE83 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DE83 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventTag, v5, v2, v3);
  v6 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.targetSvtLimits = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetSvtLimits, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorAnimationEffect_DisplayTrigger__IsTarget(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *targetSvtLimits; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_4A5DE82 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__);
    sub_1B885B0(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
    byte_4A5DE82 = 1;
  }
  v5 = sub_1B887FC(BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = limit;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetSvtLimits, 0LL) )
    return 1;
  targetSvtLimits = this->fields.targetSvtLimits;
  v10 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    0LL);
  return BasicHelper__Any_int__48671312(
           targetSvtLimits,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
}


void __fastcall BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0___ctor(
        BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0___IsTarget_b__0(
        BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.limit == x;
}