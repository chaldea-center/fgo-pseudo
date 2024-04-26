void __fastcall BattleMoveObject___ctor(BattleMoveObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleMoveObject__GetTransform(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfTransform; // x21

  if ( (byte_434E15E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E15E = 1;
  }
  selfTransform = (UnityEngine_Object_o *)this->fields.selfTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selfTransform, 0LL, 0LL) )
  {
    this->fields.selfTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    sub_B70630(&this->fields.selfTransform);
  }
  return this->fields.selfTransform;
}


bool __fastcall BattleMoveObject__IsMoveToBattleItemUi(BattleMoveObject_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


void __fastcall BattleMoveObject__OnSpawn(BattleMoveObject_o *this, const MethodInfo *method)
{
  BattleMoveObject_o *v2; // x19

  v2 = this;
  this->fields.type = 0;
  *(_WORD *)&this->fields.dropflg = 0;
  this->fields.targetTr = 0LL;
  sub_B70630(&this->fields.targetTr);
  v2->fields.perf = 0LL;
  sub_B70630(&v2->fields.perf);
  v2->fields.destoryobject = 0LL;
  v2 = (BattleMoveObject_o *)((char *)v2 + 56);
  sub_B70630(v2);
  LODWORD(v2->fields.selfTransform) = 0;
}


void __fastcall BattleMoveObject__PlayStarSe(BattleMoveObject_o *this, const MethodInfo *method)
{
  SeManager_o *Instance; // x0
  __int64 v3; // x1
  System_String_o *CommonSeNameLocal; // x19
  System_String_o *CueSheet; // x20
  float DefaultPreDelayTime; // s8

  if ( (byte_434E15D & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_434E15D = 1;
  }
  Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal(Instance, 7, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v3);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime(Instance, CueSheet, CommonSeNameLocal, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_34724844(7, DefaultPreDelayTime / 1000.0, 1, 0LL);
}


void __fastcall BattleMoveObject__SetEasingType(BattleMoveObject_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.easingType = type;
}


void __fastcall BattleMoveObject__SetRigidbodyGravity(BattleMoveObject_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Rigidbody_o **p_rigibody; // x21
  UnityEngine_Object_o *rigibody; // x22
  __int64 v7; // x1

  if ( (byte_434E15F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E15F = 1;
  }
  p_rigibody = &this->fields.rigibody;
  rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rigibody, 0LL, 0LL) )
  {
    this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_B70630(&this->fields.rigibody);
  }
  if ( !*p_rigibody )
    sub_B7076C(0LL, v7);
  UnityEngine_Rigidbody__set_useGravity(*p_rigibody, flg, 0LL);
}


void __fastcall BattleMoveObject__SetTypeBattleItem(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 3;
}


void __fastcall BattleMoveObject__Start(BattleMoveObject_o *this, const MethodInfo *method)
{
  if ( (byte_434E159 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_B70694(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_434E159 = 1;
  }
  this->fields.spawner = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  sub_B70630(&this->fields.spawner);
  this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              (UnityEngine_Component_o *)this,
                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  sub_B70630(&this->fields.rigibody);
  this->fields.selfTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  sub_B70630(&this->fields.selfTransform);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__StartNotTweenMove(
        BattleMoveObject_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float time,
        float delay,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  float x; // s15
  float z; // s10
  float y; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s14
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *started; // x1

  x = from.fields.x;
  *(_OWORD *)&this->fields.notTweenInfo.fields.to.fields.y = 0u;
  *(_OWORD *)&this->fields.notTweenInfo.fields.from.fields.x = 0u;
  this->fields.notTweenInfo.fields.callback = callback;
  z = to.fields.z;
  y = to.fields.y;
  v13 = to.fields.x;
  v14 = from.fields.z;
  v15 = from.fields.y;
  sub_B70630(&this->fields.notTweenInfo.fields.callback);
  this->fields.notTweenInfo.fields.from.fields.x = x;
  this->fields.notTweenInfo.fields.from.fields.y = v15;
  this->fields.notTweenInfo.fields.from.fields.z = v14;
  this->fields.notTweenInfo.fields.to.fields.x = v13;
  this->fields.notTweenInfo.fields.to.fields.y = y;
  this->fields.notTweenInfo.fields.to.fields.z = z;
  this->fields.notTweenInfo.fields.time = time;
  this->fields.notTweenInfo.fields.startTime = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
  started = BattleMoveObject___StartNotTweenMove(this, delay, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__Update(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  unsigned int v6; // s0
  float z; // s8
  unsigned int v8; // s9
  int v9; // s2
  unsigned int v10; // s0
  float v11; // s1
  UnityEngine_Object_o *rigibody; // x20
  UnityEngine_Rigidbody_o *v13; // x20
  int v14; // s0
  UnityEngine_Rigidbody_o *v17; // x20
  int v18; // s0
  float v21; // s8
  float v22; // s0
  float v23; // s0
  float32x2_t v24; // d9
  float v25; // s10
  float32x2_t v26; // d12
  float v27; // s11
  float v28; // s0
  float v29; // s2
  unsigned __int64 v30; // d0 OVERLAPPED
  float v31; // s2
  int v32; // s1
  struct System_Action_GameObject__o *callback; // x20
  System_Uri_o *v34; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434E15A & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_GameObject__Invoke__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E15A = 1;
  }
  if ( this->fields.dropflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
    if ( position.fields.y < this->fields.checkvec.fields.z )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      v6 = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
      z = this->fields.checkvec.fields.z;
      v8 = v6;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_position(
                                              (UnityEngine_Transform_o *)gameObject,
                                              0LL);
      if ( !transform )
        goto LABEL_32;
      v10 = v8;
      v11 = z;
      UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v9 - 2), 0LL);
      rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(rigibody, 0LL, 0LL) )
      {
        v13 = this->fields.rigibody;
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v13 )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_velocity(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
        v17 = this->fields.rigibody;
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v17 )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_angularVelocity(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.rigibody;
        if ( !gameObject )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)gameObject, 0, 0LL);
      }
      this->fields.dropflg = 0;
    }
  }
  if ( !this->fields.isNotTweenMove )
    return;
  v21 = UnityEngine_Time__get_timeSinceLevelLoad(0LL) - this->fields.notTweenInfo.fields.startTime;
  v22 = v21 / this->fields.notTweenInfo.fields.time;
  if ( this->fields.easingType == 1 )
    v23 = (float)(v22 * v22) * (float)((float)(v22 * 2.7016) + -1.7016);
  else
    v23 = v22 * (float)(v22 * (float)(v22 * v22));
  v24.n64_u64[0] = *(unsigned __int64 *)&this->fields.notTweenInfo.fields.from.fields.x;
  v25 = this->fields.notTweenInfo.fields.from.fields.z;
  v26.n64_u64[0] = *(unsigned __int64 *)&this->fields.notTweenInfo.fields.to.fields.x;
  v27 = this->fields.notTweenInfo.fields.to.fields.z;
  v28 = UnityEngine_Mathf__Clamp01(v23 + 0.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selfTransform;
  if ( !gameObject )
    goto LABEL_32;
  v29 = (float)(v27 - v25) * v28;
  v30 = vadd_f32(v24, vmul_n_f32(vsub_f32(v26, v24), v28)).n64_u64[0];
  v31 = v25 + v29;
  v32 = HIDWORD(v30);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&v30, 0LL);
  if ( v21 <= this->fields.notTweenInfo.fields.time )
    return;
  gameObject = (UnityEngine_GameObject_o *)this->fields.selfTransform;
  this->fields.isNotTweenMove = 0;
  if ( !gameObject )
LABEL_32:
    sub_B7076C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.notTweenInfo.fields.to,
    0LL);
  callback = this->fields.notTweenInfo.fields.callback;
  if ( callback )
  {
    v34 = (System_Uri_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)callback,
      v34,
      (const MethodInfo_264C15C *)Method_System_Action_GameObject__Invoke__);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoveObject___StartNotTweenMove(
        BattleMoveObject_o *this,
        float delay,
        const MethodInfo *method)
{
  BattleMoveObject___StartNotTweenMove_d__35_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_434E160 & 1) == 0 )
  {
    sub_B70694(&BattleMoveObject___StartNotTweenMove_d__35_TypeInfo);
    byte_434E160 = 1;
  }
  v5 = (BattleMoveObject___StartNotTweenMove_d__35_o *)sub_B70764(BattleMoveObject___StartNotTweenMove_d__35_TypeInfo);
  BattleMoveObject___StartNotTweenMove_d__35___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.__4__this = this;
  sub_B70630(&v5->fields.__4__this);
  v5->fields.delay = delay;
  return (System_Collections_IEnumerator_o *)v5;
}


float __fastcall BattleMoveObject__easeInBack(
        BattleMoveObject_o *this,
        float start,
        float end,
        float value,
        const MethodInfo *method)
{
  return (float)((float)((float)((float)(end - start) * value) * value) * (float)((float)(value * 2.7016) + -1.7016))
       + start;
}


float __fastcall BattleMoveObject__easeInQuart(
        BattleMoveObject_o *this,
        float start,
        float end,
        float value,
        const MethodInfo *method)
{
  return (float)((float)((float)((float)((float)(end - start) * value) * value) * value) * value) + start;
}


bool __fastcall BattleMoveObject__isMoveToItems(BattleMoveObject_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__onOpenComplete(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *perf; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int32_t type; // w8
  const MethodInfo *v8; // x2
  BattlePerformance_o *gameObject; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *destoryobject; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *transform; // x20
  int v15; // s0
  Spawner_o *spawner; // x20

  if ( (byte_434E15C & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434E15C = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
  if ( v4 )
  {
    type = this->fields.type;
    if ( type == 3 )
    {
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_30;
      BattlePerformance__updateDropItemCountHaveCheck(gameObject, 1, v6);
    }
    else if ( type == 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(4, 0LL);
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_30;
      BattlePerformance__updateDropItemCount(gameObject, 1, v8);
    }
    else
    {
      BattleMoveObject__PlayStarSe((BattleMoveObject_o *)v4, v5);
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_30;
      BattlePerformance__addCriticalPont(gameObject, this->fields.count, v10);
    }
  }
  destoryobject = (UnityEngine_Object_o *)this->fields.destoryobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(destoryobject, 0LL, 0LL) )
  {
    v12 = this->fields.destoryobject;
    gameObject = (BattlePerformance_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (BattlePerformance_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            0LL);
      if ( gameObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = (BattlePerformance_o *)BaseMonoBehaviour__createObject(
                                              (BaseMonoBehaviour_o *)this,
                                              v12,
                                              parent,
                                              0LL,
                                              0LL);
        if ( gameObject )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          gameObject = (BattlePerformance_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( gameObject )
          {
            *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    sub_B7076C(gameObject, v5);
  }
LABEL_28:
  spawner = this->fields.spawner;
  gameObject = (BattlePerformance_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !spawner )
    goto LABEL_30;
  Spawner__Despawn(spawner, (UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__setAction(
        BattleMoveObject_o *this,
        UnityEngine_Vector3_o vec,
        const MethodInfo *method)
{
  *(UnityEngine_Vector3_o *)&this->fields.checkvec.fields.y = vec;
  this->fields.checkvec.fields.z = vec.fields.y + UnityEngine_Random__Range(0.09, 0.12, 0LL);
  this->fields.dropflg = 1;
}


void __fastcall BattleMoveObject__setParam(
        BattleMoveObject_o *this,
        BattlePerformance_o *perf,
        int32_t count,
        const MethodInfo *method)
{
  struct BattlePerformance_o **p_perf; // x20

  this->fields.perf = perf;
  p_perf = &this->fields.perf;
  sub_B70630(&this->fields.perf);
  *((_DWORD *)p_perf + 2) = count;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__setTarget(
        BattleMoveObject_o *this,
        UnityEngine_Vector3_o vec,
        const MethodInfo *method)
{
  *(UnityEngine_Vector3_o *)&this->fields.targetvec.fields.y = vec;
}


void __fastcall BattleMoveObject__setTargetTr(
        BattleMoveObject_o *this,
        UnityEngine_Transform_o *tr,
        const MethodInfo *method)
{
  this->fields.targetTr = tr;
  sub_B70630(&this->fields.targetTr);
}


void __fastcall BattleMoveObject__setTypeItem(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 2;
}


void __fastcall BattleMoveObject__startMoveTarget(BattleMoveObject_o *this, const MethodInfo *method)
{
  float v3; // s8
  System_Collections_Hashtable_o *v4; // x20
  UnityEngine_Transform_o *targetTr; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-30h] BYREF
  float v15; // [xsp+18h] [xbp-18h] BYREF
  int v16; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_434E15B & 1) == 0 )
  {
    sub_B70694(&iTween_EaseType_TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&UnityEngine_Vector3_TypeInfo);
    sub_B70694(&StringLiteral_18388/*"easetype"*/);
    sub_B70694(&StringLiteral_21594/*"onOpenComplete"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21866/*"position"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_434E15B = 1;
  }
  this->fields.moveflg = 1;
  v3 = UnityEngine_Random__Range(0.2, 0.4, 0LL);
  v4 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39248100(v4, 0LL);
  if ( !v4
    || (((void (__fastcall *)(System_Collections_Hashtable_o *, Il2CppMethodPointer))v4->klass->vtable._24_Clear.method)(
          v4,
          v4->klass->vtable._25_Clone.methodPtr),
        (targetTr = this->fields.targetTr) == 0LL) )
  {
    sub_B7076C(targetTr, v6);
  }
  position = UnityEngine_Transform__get_position(targetTr, 0LL);
  v8 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position, v7);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_21866/*"position"*/,
    v8,
    v4->klass->vtable._24_Clear.methodPtr);
  v16 = 26;
  v10 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v16, v9);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_18388/*"easetype"*/,
    v10,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_21605/*"oncomplete"*/,
    StringLiteral_21594/*"onOpenComplete"*/,
    v4->klass->vtable._24_Clear.methodPtr);
  v15 = v3;
  v12 = j_il2cpp_value_box_0(float_TypeInfo, &v15, v11);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_23053/*"time"*/,
    v12,
    v4->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42827204(gameObject, v4, 0LL);
}


void __fastcall BattleMoveObject___StartNotTweenMove_d__35___ctor(
        BattleMoveObject___StartNotTweenMove_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoveObject___StartNotTweenMove_d__35__MoveNext(
        BattleMoveObject___StartNotTweenMove_d__35_o *this,
        const MethodInfo *method)
{
  BattleMoveObject___StartNotTweenMove_d__35_o *v2; // x19
  int32_t _1__state; // w9
  struct BattleMoveObject_o *_4__this; // x8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4351433 & 1) == 0 )
  {
    this = (BattleMoveObject___StartNotTweenMove_d__35_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4351433 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    delay = v2->fields.delay;
    v2->fields.__1__state = -1;
    if ( delay > 0.0 )
    {
      v6 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B70630(p__2__current, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
  }
  if ( !_4__this )
    sub_B7076C(this, method);
  result = 0;
  _4__this->fields.isNotTweenMove = 1;
  return result;
}


Il2CppObject *__fastcall BattleMoveObject___StartNotTweenMove_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoveObject___StartNotTweenMove_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoveObject___StartNotTweenMove_d__35__System_Collections_IEnumerator_Reset(
        BattleMoveObject___StartNotTweenMove_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleMoveObject___StartNotTweenMove_d__35_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleMoveObject___StartNotTweenMove_d__35__System_Collections_IEnumerator_get_Current(
        BattleMoveObject___StartNotTweenMove_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoveObject___StartNotTweenMove_d__35__System_IDisposable_Dispose(
        BattleMoveObject___StartNotTweenMove_d__35_o *this,
        const MethodInfo *method)
{
  ;
}