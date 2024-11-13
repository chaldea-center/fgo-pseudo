void __fastcall BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActorAnimationEffect_DisplayTrigger_o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B18FA0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo, method, v2);
    byte_4B18FA0 = 1;
  }
  v5 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_1BCAA2C(
                                                        BattleActorAnimationEffect_DisplayTrigger_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v5, v6);
  this->fields.trigger = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.trigger, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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
      sub_1BCAA3C(this, effectObj);
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
    sub_1BCAA3C(this, actor);
  UnityEngine_GameObject__SetActive(BattleEffect, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorAnimationEffect__ExecuteEffectMesh(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x0
  Il2CppClass *klass; // x8
  Il2CppObject *v10; // x19
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v14; // x8
  __int64 v15; // x9
  IEffectMesh_c **v16; // x10
  __int64 v17; // x0

  if ( (byte_4B18F9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___, obj, *(_QWORD *)&targetId);
    this = (BattleActorAnimationEffect_o *)sub_1BCA7E0(&IEffectMesh_TypeInfo, v6, v7);
    byte_4B18F9F = 1;
  }
  if ( !obj )
    sub_1BCAA3C(this, obj);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
  if ( Component_object )
  {
    klass = Component_object->klass;
    v10 = Component_object;
    v11 = *(unsigned __int16 *)(&Component_object->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Component_object->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IEffectMesh_c **)p_offset - 1) != IEffectMesh_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Component_object, IEffectMesh_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))p_method)(
      v10,
      (unsigned int)targetId,
      *(_QWORD *)(p_method + 8));
    v14 = v10->klass;
    v15 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      v16 = (IEffectMesh_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != IEffectMesh_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1C1C7C0(v10, IEffectMesh_TypeInfo, 1LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v17)(v10, *(_QWORD *)(v17 + 8));
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
      sub_1BCAA3C(this, effectObj);
    }
    UnityEngine_Transform__Rotate_70176908((UnityEngine_Transform_o *)this, 0.0, 180.0, 0.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    if ( !byte_4B109C6 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, isEnemy, method);
      byte_4B109C6 = 1;
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleActorAnimationEffect__MakeBattleEffect(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        int32_t battleEffectId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  BattleActorAnimationEffect_o *v10; // x19
  __int64 v11; // x2
  BattleActorAnimationEffect_o *v12; // x20
  __int64 v13; // x2
  BattleActorAnimationEffect_o *v14; // x20
  __int64 v15; // x2
  BattleActorAnimationEffect_o *v16; // x20

  if ( (byte_4B18F9E & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1BCA7E0(&BattleEffectUtility_TypeInfo, actor, *(_QWORD *)&battleEffectId);
    byte_4B18F9E = 1;
  }
  if ( !actor )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0LL);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v8);
  this = (BattleActorAnimationEffect_o *)BattleEffectUtility__getEffectObjectSafe(
                                           battleEffectId,
                                           gameObject,
                                           1,
                                           1.0,
                                           0LL);
  if ( !this )
    goto LABEL_18;
  v10 = this;
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_18;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v12 = this;
  if ( !byte_4B109C1 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, actor, v11);
    byte_4B109C1 = 1;
  }
  if ( !v12 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v14 = this;
  if ( !byte_4B109C9 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, actor, v13);
    byte_4B109C9 = 1;
  }
  if ( !v14 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->upVector,
    0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
  v16 = this;
  if ( !byte_4B109C6 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, actor, v15);
    byte_4B109C6 = 1;
  }
  if ( !v16 )
LABEL_18:
    sub_1BCAA3C(this, actor);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UnityEngine_GameObject_o *)v10;
}


System_String_o *__fastcall BattleActorAnimationEffect__MakeTriggerKey(
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  if ( (byte_4B18F9C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_25331/*"{0}:{1}"*/, eventTag, method);
    byte_4B18F9C = 1;
  }
  return System_String__Format_62415592(
           (System_String_o *)StringLiteral_25331/*"{0}:{1}"*/,
           (Il2CppObject *)animName,
           (Il2CppObject *)eventTag,
           0LL);
}


void __fastcall BattleActorAnimationEffect__OnExec(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  float delay; // s8
  System_Action_object__o *v17; // x21
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4B18F9D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActorControl__TypeInfo, actor, method);
    sub_1BCA7E0(&Method_BasicHelper_DelayCall_BattleActorControl___, v5, v6);
    sub_1BCA7E0(&Method_BattleActorAnimationEffect_DisplayEffect__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B18F9D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( !v11 )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_1BCAA3C(v11, v12);
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v13);
    }
    else
    {
      v17 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActorControl__TypeInfo, v12, v13, v14);
      System_Action_object____ctor(v17, (Il2CppObject *)this, Method_BattleActorAnimationEffect_DisplayEffect__, 0LL);
      v18 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v17,
              (Il2CppObject *)actor,
              (const MethodInfo_2EFE358 *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
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
  __int64 v2; // x2
  BattleActorAnimationEffect_o *v3; // x19
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  const MethodInfo *v5; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *v6; // x8
  System_Enum_o v8; // [xsp+8h] [xbp-38h] BYREF
  int32_t anim; // [xsp+18h] [xbp-28h]

  v3 = this;
  if ( (byte_4B18F9B & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1BCA7E0(&AnimationList_NAME_TypeInfo, method, v2);
    byte_4B18F9B = 1;
  }
  trigger = v3->fields.trigger;
  if ( !trigger
    || (v8.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo,
        v8.monitor = (void *)-1LL,
        anim = trigger->fields.anim,
        this = (BattleActorAnimationEffect_o *)System_Enum__ToString(&v8, 0LL),
        (v6 = v3->fields.trigger) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  return BattleActorAnimationEffect__MakeTriggerKey((System_String_o *)this, v6->fields.eventTag, v5);
}


void __fastcall BattleActorAnimationEffect_DisplayTrigger___ctor(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  void *v11; // x1
  struct System_Int32_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B18FA2 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B18FA2 = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventTag, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  v12 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.targetSvtLimits = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetSvtLimits, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorAnimationEffect_DisplayTrigger__IsTarget(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Int32_array *targetSvtLimits; // x19
  System_Func_int__bool__o *v20; // x20

  if ( (byte_4B18FA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&limit, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__, v8, v9);
    sub_1BCA7E0(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo, v10, v11);
    byte_4B18FA1 = 1;
  }
  v12 = sub_1BCAA2C(
          BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo,
          *(_QWORD *)&limit,
          method,
          v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = limit;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetSvtLimits, 0LL) )
    return 1;
  targetSvtLimits = this->fields.targetSvtLimits;
  v20 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v15, v16, v17);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v12,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    0LL);
  return BasicHelper__Any_int__49273364(
           targetSvtLimits,
           (System_Func_T__bool__o *)v20,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
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