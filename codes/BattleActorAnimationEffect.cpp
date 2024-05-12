void __fastcall BattleActorAnimationEffect___ctor(BattleActorAnimationEffect_o *this, const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438983C & 1) == 0 )
  {
    sub_B775C4(&BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
    byte_438983C = 1;
  }
  v3 = (BattleActorAnimationEffect_DisplayTrigger_o *)sub_B77694(BattleActorAnimationEffect_DisplayTrigger_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___ctor(v3, 0LL);
  this->fields.trigger = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.trigger, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isDetachParent = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
      sub_B7769C(this, effectObj);
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
    sub_B7769C(this, actor);
  UnityEngine_GameObject__SetActive(BattleEffect, 1, 0LL);
}


void __fastcall BattleActorAnimationEffect__ExecuteEffectMesh(
        BattleActorAnimationEffect_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t targetId,
        const MethodInfo *method)
{
  srcLineSprite_o *Component_srcLineSprite; // x0
  srcLineSprite_c *klass; // x8
  srcLineSprite_o *v8; // x19
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  srcLineSprite_c *v12; // x8
  unsigned __int64 v13; // x10
  IEffectMesh_c **v14; // x11
  __int64 v15; // x0

  if ( (byte_438983B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
    this = (BattleActorAnimationEffect_o *)sub_B775C4(&IEffectMesh_TypeInfo);
    byte_438983B = 1;
  }
  if ( !obj )
    sub_B7769C(this, obj);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              obj,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_IEffectMesh___);
  if ( Component_srcLineSprite )
  {
    klass = Component_srcLineSprite->klass;
    v8 = Component_srcLineSprite;
    if ( *(_WORD *)&Component_srcLineSprite->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IEffectMesh_c **)p_offset - 1) != IEffectMesh_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Component_srcLineSprite->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_9:
      v11 = sub_B0F4C0(Component_srcLineSprite, IEffectMesh_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(srcLineSprite_o *, _QWORD, _QWORD))v11)(v8, (unsigned int)targetId, *(_QWORD *)(v11 + 8));
    v12 = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (IEffectMesh_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != IEffectMesh_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)(&v12->vtable._1_Finalize.method + 2 * *(_DWORD *)v14);
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(v8, IEffectMesh_TypeInfo, 1LL);
    }
    (*(void (__fastcall **)(srcLineSprite_o *, _QWORD))v15)(v8, *(_QWORD *)(v15 + 8));
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
      sub_B7769C(this, effectObj);
    }
    UnityEngine_Transform__Rotate_36432168((UnityEngine_Transform_o *)this, 0.0, 180.0, 0.0, 0LL);
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

  if ( (byte_438983A & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_B775C4(&BattleEffectUtility_TypeInfo);
    byte_438983A = 1;
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
    sub_B7769C(this, actor);
  }
  UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  return v9;
}


System_String_o *__fastcall BattleActorAnimationEffect__MakeTriggerKey(
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  if ( (byte_4389838 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    byte_4389838 = 1;
  }
  return System_String__Format_44897472(
           (System_String_o *)StringLiteral_24113/*"{0}:{1}"*/,
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
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x21
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4389839 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleActorControl___ctor__);
    sub_B775C4(&System_Action_BattleActorControl__TypeInfo);
    sub_B775C4(&Method_BasicHelper_DelayCall_BattleActorControl___);
    sub_B775C4(&Method_BattleActorAnimationEffect_DisplayEffect__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389839 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( !v5 )
  {
    trigger = this->fields.trigger;
    if ( !trigger )
      sub_B7769C(v5, v6);
    delay = trigger->fields.delay;
    if ( delay <= 0.0 )
    {
      BattleActorAnimationEffect__DisplayEffect(this, actor, v7);
    }
    else
    {
      v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleActorControl__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v10,
        (Il2CppObject *)this,
        Method_BattleActorAnimationEffect_DisplayEffect__,
        (const MethodInfo_26A0868 *)Method_System_Action_BattleActorControl___ctor__);
      v11 = BasicHelper__DelayCall_object_(
              delay,
              (System_Action_T__o *)v10,
              (Il2CppObject *)actor,
              (const MethodInfo_1C66390 *)Method_BasicHelper_DelayCall_BattleActorControl___);
      UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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
  BattleActorAnimationEffect_DisplayTrigger_Fields *p_fields; // x20
  BattleActorAnimationEffect_o *v6; // x21
  System_String_o *v7; // x22
  const MethodInfo *v8; // x2
  struct BattleActorAnimationEffect_DisplayTrigger_o *v9; // x8

  v3 = this;
  if ( (byte_4389837 & 1) == 0 )
  {
    this = (BattleActorAnimationEffect_o *)sub_B775C4(&AnimationList_NAME_TypeInfo);
    byte_4389837 = 1;
  }
  trigger = v3->fields.trigger;
  if ( !trigger
    || (p_fields = &trigger->fields,
        (this = (BattleActorAnimationEffect_o *)j_il2cpp_value_box_0(AnimationList_NAME_TypeInfo, &trigger->fields, v2)) == 0LL)
    || (v6 = this,
        v7 = (System_String_o *)((__int64 (__fastcall *)(BattleActorAnimationEffect_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass->vtable._4_OnExec.methodPtr),
        this = (BattleActorAnimationEffect_o *)j_il2cpp_object_unbox_0(v6),
        p_fields->anim = (int32_t)this->klass,
        (v9 = v3->fields.trigger) == 0LL) )
  {
    sub_B7769C(this, method);
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
  System_Int32_array **v9; // x1
  struct System_Int32_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4389FAD & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389FAD = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.eventTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.eventTag, v9, v2, v3, v4, v5, v6, v7);
  v10 = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  this->fields.targetSvtLimits = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetSvtLimits,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorAnimationEffect_DisplayTrigger__IsTarget(
        BattleActorAnimationEffect_DisplayTrigger_o *this,
        int32_t limit,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *targetSvtLimits; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_4389FAC & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__);
    sub_B775C4(&BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
    byte_4389FAC = 1;
  }
  v5 = (BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_o *)sub_B77694(BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0_TypeInfo);
  BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.limit = limit;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.targetSvtLimits, 0LL) )
    return 1;
  targetSvtLimits = this->fields.targetSvtLimits;
  v10 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BattleActorAnimationEffect_DisplayTrigger___c__DisplayClass4_0__IsTarget_b__0__,
    (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__29777580(
           targetSvtLimits,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
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