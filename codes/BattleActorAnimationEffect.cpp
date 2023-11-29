void __fastcall BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActorAnimationEffect_DisplayTrigger_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDA78 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo, method);
    byte_40FDA78 = 1;
  }
  v6 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_B170CC(
                                                        BattleActorAnimationEffect_DisplayTrigger_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3,
                                                        v4);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v6, 0LL);
  this->fields.trigger = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.trigger,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isDetachParent = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorAnimationEffect__DetachParent(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *effectObj,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( this->fields.isDetachParent )
  {
    if ( !effectObj || (transform = UnityEngine_GameObject__get_transform(effectObj, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_Transform__set_parent(transform, parent, 0LL);
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(BattleEffect, 1, 0LL);
}


void __fastcall BattleActorAnimationEffect__ExecuteEffectMesh(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  srcLineSprite_c *klass; // x8
  srcLineSprite_o *v9; // x19
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  srcLineSprite_c *v13; // x8
  unsigned __int64 v14; // x10
  IEffectMesh_c **v15; // x11
  __int64 v16; // x0

  if ( (byte_40FDA77 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___, obj);
    sub_B16FFC(&IEffectMesh_TypeInfo, v6);
    byte_40FDA77 = 1;
  }
  if ( !obj )
    sub_B170D4();
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              obj,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
  if ( Component_srcLineSprite )
  {
    klass = Component_srcLineSprite->klass;
    v9 = Component_srcLineSprite;
    if ( *(_WORD *)&Component_srcLineSprite->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IEffectMesh_c **)p_offset - 1) != IEffectMesh_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Component_srcLineSprite->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v12 = sub_AAFEF8(Component_srcLineSprite, IEffectMesh_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(srcLineSprite_o *, _QWORD, _QWORD))v12)(v9, (unsigned int)targetId, *(_QWORD *)(v12 + 8));
    v13 = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = (IEffectMesh_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != IEffectMesh_TypeInfo )
      {
        ++v14;
        v15 += 2;
        if ( v14 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)(&v13->vtable._1_Finalize.method + 2 * *(_DWORD *)v15);
    }
    else
    {
LABEL_16:
      v16 = sub_AAFEF8(v9, IEffectMesh_TypeInfo, 1LL);
    }
    (*(void (__fastcall **)(srcLineSprite_o *, _QWORD))v16)(v9, *(_QWORD *)(v16 + 8));
  }
}


void __fastcall BattleActorAnimationEffect__FlipEnemy(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *effectObj,
        bool isEnemy,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( this->fields.isEnemyFlip && isEnemy )
  {
    if ( !effectObj || (transform = UnityEngine_GameObject__get_transform(effectObj, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_Transform__Rotate_34931432(transform, 0.0, 180.0, 0.0, 0LL);
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
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v12; // x20
  int v13; // s0
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0

  if ( (byte_40FDA76 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, actor);
    byte_40FDA76 = 1;
  }
  if ( !actor )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)actor, 0LL);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(battleEffectId, gameObject, 1, 1.0, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_13;
  v10 = EffectObjectSafe;
  transform = UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, parent, 0LL);
  v12 = UnityEngine_GameObject__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v12
    || (UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0LL),
        v16 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_up(0LL),
        !v16)
    || (UnityEngine_Transform__set_eulerAngles(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
        v20 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL),
        !v20) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  return v10;
}


System_String_o *__fastcall BattleActorAnimationEffect__MakeTriggerKey(
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  if ( (byte_40FDA74 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23532, eventTag);
    byte_40FDA74 = 1;
  }
  return System_String__Format_43739268(
           (System_String_o *)StringLiteral_23532,
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
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  float delay; // s8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_40FDA75 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleActorControl___ctor__, actor);
    sub_B16FFC(&System_Action_BattleActorControl__TypeInfo, v5);
    sub_B16FFC(&Method_BasicHelper_DelayCall_BattleActorControl___, v6);
    sub_B16FFC(&Method_BattleActorAnimationEffect_DisplayEffect__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FDA75 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0LL, 0LL) )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_B170D4();
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v10);
    }
    else
    {
      v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                   System_Action_BattleActorControl__TypeInfo,
                                                                                   v9,
                                                                                   v10,
                                                                                   v11,
                                                                                   v12);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v15,
        (Il2CppObject *)this,
        Method_BattleActorAnimationEffect_DisplayEffect__,
        (const MethodInfo_24B7310 *)Method_System_Action_BattleActorControl___ctor__);
      v16 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v15,
              (Il2CppObject *)actor,
              (const MethodInfo_18B6214 *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
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
  struct BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8
  BattleActorAnimationEffect_DisplayTrigger_Fields *p_fields; // x20
  __int64 v5; // x0
  __int64 v6; // x21
  System_String_o *v7; // x22
  const MethodInfo *v8; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *v9; // x8

  if ( (byte_40FDA73 & 1) == 0 )
  {
    sub_B16FFC(&AnimationList_NAME_TypeInfo, method);
    byte_40FDA73 = 1;
  }
  trigger = this->fields.trigger;
  if ( !trigger
    || (p_fields = &trigger->fields, (v5 = j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &trigger->fields)) == 0)
    || (v6 = v5,
        v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 360LL))(
                                  v5,
                                  *(_QWORD *)(*(_QWORD *)v5 + 368LL)),
        p_fields->anim = *(_DWORD *)j_il2cpp_object_unbox_0(v6),
        (v9 = this->fields.trigger) == 0LL) )
  {
    sub_B170D4();
  }
  return BattleActorAnimationEffect__MakeTriggerKey(v7, v9->fields.eventTag, v8);
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
  __int64 v9; // x1
  System_Int32_array **v10; // x1
  __int64 v11; // x2
  struct System_Int32_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F9187 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40F9187 = 1;
  }
  v10 = (System_Int32_array **)StringLiteral_1;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventTag, v10, v2, v3, v4, v5, v6, v7);
  v12 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v11);
  this->fields.targetSvtLimits = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetSvtLimits,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorAnimationEffect_DisplayTrigger__IsTarget(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *targetSvtLimits; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_40F9186 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&limit);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__, v9);
    sub_B16FFC(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo, v10);
    byte_40F9186 = 1;
  }
  v11 = (BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *)sub_B170CC(
                                                                              BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo,
                                                                              *(_QWORD *)&limit,
                                                                              method,
                                                                              v3,
                                                                              v4);
  BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.limit = limit;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetSvtLimits, 0LL) )
    return 1;
  targetSvtLimits = this->fields.targetSvtLimits;
  v18 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v12, v13, v14, v15);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__25910576(
           targetSvtLimits,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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