void __fastcall BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *v3; // x20
  const MethodInfo *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB7537 & 1) == 0 )
  {
    sub_1C13D24(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo, method);
    byte_4BB7537 = 1;
  }
  v3 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_1C13F70(BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v3, v4);
  this->fields.trigger = v3;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.trigger, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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
      sub_1C13F80(this, effectObj);
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
    sub_1C13F80(this, actor);
  UnityEngine_GameObject__SetActive(BattleEffect, 1, 0LL);
}


void __fastcall BattleActorAnimationEffect__ExecuteEffectMesh(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  Il2CppClass *klass; // x8
  Il2CppObject *v9; // x19
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppClass *v13; // x8
  __int64 v14; // x9
  IEffectMesh_c **v15; // x10
  __int64 v16; // x0

  if ( (byte_4BB7536 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___, obj);
    this = (BattleActorAnimationEffect_o *)sub_1C13D24(&IEffectMesh_TypeInfo, v6);
    byte_4BB7536 = 1;
  }
  if ( !obj )
    sub_1C13F80(this, obj);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
  if ( Component_object )
  {
    klass = Component_object->klass;
    v9 = Component_object;
    v10 = *(unsigned __int16 *)(&Component_object->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Component_object->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IEffectMesh_c **)p_offset - 1) != IEffectMesh_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Component_object, IEffectMesh_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))p_method)(
      v9,
      (unsigned int)targetId,
      *(_QWORD *)(p_method + 8));
    v13 = v9->klass;
    v14 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
    {
      v15 = (IEffectMesh_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != IEffectMesh_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1C65D04(v9, IEffectMesh_TypeInfo, 1LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))v16)(v9, *(_QWORD *)(v16 + 8));
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
      sub_1C13F80(this, effectObj);
    }
    UnityEngine_Transform__Rotate_70744812((UnityEngine_Transform_o *)this, 0.0, 180.0, 0.0, 0LL);
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
    if ( !byte_4BAEDA6 )
    {
      sub_1C13D24(&UnityEngine_Vector3_TypeInfo, isEnemy);
      byte_4BAEDA6 = 1;
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

  if ( (byte_4BB7535 & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C13D24(&BattleEffectUtility_TypeInfo, actor);
    byte_4BB7535 = 1;
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
  if ( !byte_4BAEDA1 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, actor);
    byte_4BAEDA1 = 1;
  }
  if ( !v10 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v10,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  v11 = this;
  if ( !byte_4BAEDA9 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, actor);
    byte_4BAEDA9 = 1;
  }
  if ( !v11 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->upVector,
    0LL);
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  v12 = this;
  if ( !byte_4BAEDA6 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, actor);
    byte_4BAEDA6 = 1;
  }
  if ( !v12 )
LABEL_18:
    sub_1C13F80(this, actor);
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
  if ( (byte_4BB7533 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_25476/*"{0}/{1}"*/, eventTag);
    byte_4BB7533 = 1;
  }
  return System_String__Format_62982316(
           (System_String_o *)StringLiteral_25476/*"{0}/{1}"*/,
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
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  float delay; // s8
  System_Action_object__o *v13; // x21
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_4BB7534 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleActorControl__TypeInfo, actor);
    sub_1C13D24(&Method_BasicHelper_DelayCall_BattleActorControl___, v5);
    sub_1C13D24(&Method_BattleActorAnimationEffect_DisplayEffect__, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB7534 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( !v8 )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_1C13F80(v8, v9);
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v10);
    }
    else
    {
      v13 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleActorControl__TypeInfo);
      System_Action_object____ctor(v13, (Il2CppObject *)this, Method_BattleActorAnimationEffect_DisplayEffect__, 0LL);
      v14 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v13,
              (Il2CppObject *)actor,
              (const MethodInfo_2F7AA9C *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v14, 0LL);
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
  if ( (byte_4BB7532 & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_1C13D24(&AnimationList_NAME_TypeInfo, method);
    byte_4BB7532 = 1;
  }
  trigger = v2->fields.trigger;
  if ( !trigger
    || (v7.klass = (System_Enum_c *)AnimationList_NAME_TypeInfo,
        v7.monitor = (void *)-1LL,
        anim = trigger->fields.anim,
        this = (BattleActorAnimationEffect_o *)System_Enum__ToString(&v7, 0LL),
        (v5 = v2->fields.trigger) == 0LL) )
  {
    sub_1C13F80(this, method);
  }
  return BattleActorAnimationEffect__MakeTriggerKey((System_String_o *)this, v5->fields.eventTag, v4);
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
  void *v10; // x1
  struct System_Int32_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB7539 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    sub_1C13D24(&StringLiteral_1/*""*/, v9);
    byte_4BB7539 = 1;
  }
  v10 = StringLiteral_1/*""*/;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventTag, (int64_t)v10, v2, v3, v4, v5, v6, v7);
  v11 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  this->fields.targetSvtLimits = v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.targetSvtLimits, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorAnimationEffect_DisplayTrigger__IsTarget(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *targetSvtLimits; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_4BB7538 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, *(_QWORD *)&limit);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v5);
    sub_1C13D24(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__, v6);
    sub_1C13D24(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo, v7);
    byte_4BB7538 = 1;
  }
  v8 = sub_1C13F70(BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_DWORD *)(v8 + 16) = limit;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetSvtLimits, 0LL) )
    return 1;
  targetSvtLimits = this->fields.targetSvtLimits;
  v13 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    0LL);
  return BasicHelper__Any_int__49783128(
           targetSvtLimits,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
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