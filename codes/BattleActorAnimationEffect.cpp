void __fastcall BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorAnimationEffect_DisplayTrigger_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7FEB & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FEB = 1;
  }
  v5 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_B5D694(BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v5, 0LL);
  this->fields.trigger = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.trigger, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
      sub_B5D69C(this, effectObj);
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
  UnityEngine_Transform_o *NodeFromLvName; // x0
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
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, this->fields.attachNodeName, -1, 0, 0LL);
  BattleEffect = BattleActorAnimationEffect__MakeBattleEffect(
                   (BattleActorAnimationEffect_o *)NodeFromLvName,
                   actor,
                   effectId,
                   NodeFromLvName,
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
    sub_B5D69C(this, actor);
  UnityEngine_GameObject__SetActive(BattleEffect, 1, 0LL);
}


void __fastcall BattleActorAnimationEffect__ExecuteEffectMesh(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t targetId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v10; // x3
  srcLineSprite_c *klass; // x8
  srcLineSprite_o *v12; // x19
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0
  __int64 v16; // x3
  srcLineSprite_c *v17; // x8
  unsigned __int64 v18; // x10
  IEffectMesh_c **v19; // x11
  __int64 v20; // x0

  if ( (byte_42E7FEA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___, (_DWORD)obj, targetId, method);
    this = (BattleActorAnimationEffect_o *)sub_B5D5C4(&IEffectMesh_TypeInfo, v6, v7, v8);
    byte_42E7FEA = 1;
  }
  if ( !obj )
    sub_B5D69C(this, obj);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              obj,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
  if ( Component_srcLineSprite )
  {
    klass = Component_srcLineSprite->klass;
    v12 = Component_srcLineSprite;
    if ( *(_WORD *)&Component_srcLineSprite->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IEffectMesh_c **)p_offset - 1) != IEffectMesh_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Component_srcLineSprite->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v15 = sub_AF54C0(Component_srcLineSprite, IEffectMesh_TypeInfo, 0LL, v10);
    }
    (*(void (__fastcall **)(srcLineSprite_o *, _QWORD, _QWORD))v15)(v12, (unsigned int)targetId, *(_QWORD *)(v15 + 8));
    v17 = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = (IEffectMesh_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != IEffectMesh_TypeInfo )
      {
        ++v18;
        v19 += 2;
        if ( v18 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)(&v17->vtable._1_Finalize.method + 2 * *(_DWORD *)v19);
    }
    else
    {
LABEL_16:
      v20 = sub_AF54C0(v12, IEffectMesh_TypeInfo, 1LL, v16);
    }
    (*(void (__fastcall **)(srcLineSprite_o *, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
  }
}


void __fastcall BattleActorAnimationEffect__FlipEnemy(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *effectObj,
        bool isEnemy,
        const MethodInfo *method)
{
  if ( this->fields.isEnemyFlip && isEnemy )
  {
    if ( !effectObj
      || (this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform(effectObj, 0LL)) == 0LL )
    {
      sub_B5D69C(this, effectObj);
    }
    UnityEngine_Transform__Rotate_35742360((UnityEngine_Transform_o *)this, 0.0, 180.0, 0.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleActorAnimationEffect__GetFlippedLocalScale(
        BattleActorAnimationEffect_o *this,
        bool isEnemy,
        const MethodInfo *method)
{
  int32_t enemyScaleFlip; // w8
  float v4; // s2
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( isEnemy )
  {
    enemyScaleFlip = this->fields.enemyScaleFlip;
    v4 = -1.0;
    if ( (enemyScaleFlip & 1) != 0 )
      v5 = -1.0;
    else
      v5 = 1.0;
    if ( (enemyScaleFlip & 2) != 0 )
      v6 = -1.0;
    else
      v6 = 1.0;
    if ( (enemyScaleFlip & 4) == 0 )
      v4 = 1.0;
  }
  else
  {
    *(UnityEngine_Vector3_o *)(&v4 - 2) = UnityEngine_Vector3__get_one(0LL);
  }
  result.fields.z = v4;
  result.fields.y = v6;
  result.fields.x = v5;
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
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Transform_o *v18; // x20
  int v19; // s0

  if ( (byte_42E7FE9 & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_B5D5C4(
                                             &BattleEffectUtility_TypeInfo,
                                             (_DWORD)actor,
                                             battleEffectId,
                                             parent);
    byte_42E7FE9 = 1;
  }
  if ( !actor )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0LL);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  this = (BattleActorAnimationEffect_o *)BattleEffectUtility__getEffectObjectSafe(
                                           battleEffectId,
                                           gameObject,
                                           1,
                                           1.0,
                                           0LL);
  if ( !this )
    goto LABEL_13;
  v9 = (UnityEngine_GameObject_o *)this;
  this = (BattleActorAnimationEffect_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parent, 0LL);
  transform = UnityEngine_GameObject__get_transform(v9, 0LL);
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL),
        v14 = UnityEngine_GameObject__get_transform(v9, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_up(0LL),
        !v14)
    || (UnityEngine_Transform__set_eulerAngles(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        v18 = UnityEngine_GameObject__get_transform(v9, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
        !v18) )
  {
LABEL_13:
    sub_B5D69C(this, actor);
  }
  UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  return v9;
}


System_String_o *__fastcall BattleActorAnimationEffect__MakeTriggerKey(
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7FE7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, (_DWORD)eventTag, (_DWORD)method, v3);
    byte_42E7FE7 = 1;
  }
  return System_String__Format_44573324(
           (System_String_o *)StringLiteral_23938/*"{0}:{1}"*/,
           (Il2CppObject *)animName,
           (Il2CppObject *)eventTag,
           0LL);
}


void __fastcall BattleActorAnimationEffect__OnExec(
        BattleActorAnimationEffect_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  float delay; // s8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x21
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_42E7FE8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActorControl___ctor__, (_DWORD)actor, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleActorControl__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_DelayCall_BattleActorControl___, v9, v10, v11);
    sub_B5D5C4(&Method_BattleActorAnimationEffect_DisplayEffect__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E7FE8 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( !v18 )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_B5D69C(v18, v19);
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v20);
    }
    else
    {
      v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActorControl__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v23,
        (Il2CppObject *)this,
        Method_BattleActorAnimationEffect_DisplayEffect__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleActorControl___ctor__);
      v24 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v23,
              (Il2CppObject *)actor,
              (const MethodInfo_1AD6F80 *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BattleActorAnimationEffect_o *v4; // x19
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  BattleActorAnimationEffect_DisplayTrigger_Fields *p_fields; // x20
  BattleActorAnimationEffect_o *v7; // x21
  System_String_o *v8; // x22
  const MethodInfo *v9; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *v10; // x8

  v4 = this;
  if ( (byte_42E7FE6 & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_B5D5C4(&AnimationList_NAME_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FE6 = 1;
  }
  trigger = v4->fields.trigger;
  if ( !trigger
    || (p_fields = &trigger->fields,
        (this = (BattleActorAnimationEffect_o *)j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &trigger->fields)) == 0LL)
    || (v7 = this,
        v8 = (System_String_o *)((__int64 (__fastcall *)(BattleActorAnimationEffect_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass->vtable._4_OnExec.methodPtr),
        this = (BattleActorAnimationEffect_o *)j_il2cpp_object_unbox_0(v7),
        p_fields->anim = (int32_t)this->klass,
        (v10 = v4->fields.trigger) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  return BattleActorAnimationEffect__MakeTriggerKey(v8, v10->fields.eventTag, v9);
}


void __fastcall BattleActorAnimationEffect_DisplayTrigger___ctor(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Int32_array **v12; // x1
  struct System_Int32_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42E7582 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E7582 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventTag, v12, v2, v3, v4, v5, v6, v7);
  v13 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.targetSvtLimits = v13;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetSvtLimits,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorAnimationEffect_DisplayTrigger__IsTarget(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array *targetSvtLimits; // x19
  System_Func_int__bool__o *v23; // x20

  if ( (byte_42E7581 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, limit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo, v15, v16, v17);
    byte_42E7581 = 1;
  }
  v18 = (BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *)sub_B5D694(BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.limit = limit;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetSvtLimits, 0LL) )
    return 1;
  targetSvtLimits = this->fields.targetSvtLimits;
  v23 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)v18,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__28142236(
           targetSvtLimits,
           (System_Func_T__bool__o *)v23,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
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