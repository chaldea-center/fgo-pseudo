void __fastcall BattleMoveObject___ctor(BattleMoveObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleMoveObject__GetTransform(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfTransform; // x21
  struct UnityEngine_Transform_o *transform; // x0

  if ( (byte_41843D7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41843D7 = 1;
  }
  selfTransform = (UnityEngine_Object_o *)this->fields.selfTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selfTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    this->fields.selfTransform = transform;
    sub_B2C2F8(&this->fields.selfTransform, transform);
  }
  return this->fields.selfTransform;
}


void __fastcall BattleMoveObject__OnSpawn(BattleMoveObject_o *this, const MethodInfo *method)
{
  BattleMoveObject_o *v2; // x19

  v2 = this;
  this->fields.type = 0;
  *(_WORD *)&this->fields.dropflg = 0;
  this->fields.targetTr = 0LL;
  sub_B2C2F8(&this->fields.targetTr, 0LL);
  v2->fields.perf = 0LL;
  sub_B2C2F8(&v2->fields.perf, 0LL);
  v2->fields.destoryobject = 0LL;
  v2 = (BattleMoveObject_o *)((char *)v2 + 56);
  sub_B2C2F8(v2, 0LL);
  LODWORD(v2->fields.selfTransform) = 0;
}


void __fastcall BattleMoveObject__PlayStarSe(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  SeManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *CommonSeNameLocal; // x19
  System_String_o *CueSheet; // x20
  float DefaultPreDelayTime; // s8

  if ( (byte_41843D6 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    byte_41843D6 = 1;
  }
  Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal(Instance, 7, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime(Instance, CueSheet, CommonSeNameLocal, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_34052064(7, DefaultPreDelayTime / 1000.0, 1, 0LL);
}


void __fastcall BattleMoveObject__SetEasingType(BattleMoveObject_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.easingType = type;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__SetRigidbodyGravity(BattleMoveObject_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Rigidbody_o **p_rigibody; // x21
  UnityEngine_Object_o *rigibody; // x22
  __int64 v8; // x1
  struct UnityEngine_Rigidbody_o *Component_WebViewObject; // x0

  if ( (byte_41843D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Rigidbody___, flg);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41843D8 = 1;
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
    Component_WebViewObject = (struct UnityEngine_Rigidbody_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.rigibody = Component_WebViewObject;
    sub_B2C2F8(&this->fields.rigibody, Component_WebViewObject);
  }
  if ( !*p_rigibody )
    sub_B2C434(0LL, v8);
  UnityEngine_Rigidbody__set_useGravity(*p_rigibody, flg, 0LL);
}


void __fastcall BattleMoveObject__Start(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Spawner_o *Instance; // x0
  struct UnityEngine_Rigidbody_o *Component_WebViewObject; // x0
  struct UnityEngine_Transform_o *transform; // x1

  if ( (byte_41843D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Rigidbody___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_41843D2 = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = Instance;
  sub_B2C2F8(&this->fields.spawner, Instance);
  Component_WebViewObject = (struct UnityEngine_Rigidbody_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  this->fields.rigibody = Component_WebViewObject;
  sub_B2C2F8(&this->fields.rigibody, Component_WebViewObject);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.selfTransform = transform;
  sub_B2C2F8(&this->fields.selfTransform, transform);
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
  sub_B2C2F8(&this->fields.notTweenInfo.fields.callback, callback);
  this->fields.notTweenInfo.fields.from.fields.x = x;
  this->fields.notTweenInfo.fields.from.fields.y = v15;
  this->fields.notTweenInfo.fields.from.fields.z = v14;
  this->fields.notTweenInfo.fields.to.fields.x = v13;
  this->fields.notTweenInfo.fields.to.fields.y = y;
  this->fields.notTweenInfo.fields.to.fields.z = z;
  this->fields.notTweenInfo.fields.time = time;
  this->fields.notTweenInfo.fields.startTime = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
  started = BattleMoveObject___StartNotTweenMove(this, delay, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__Update(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x20
  unsigned int v7; // s0
  float z; // s8
  unsigned int v9; // s9
  int v10; // s2
  unsigned int v11; // s0
  float v12; // s1
  UnityEngine_Object_o *rigibody; // x20
  UnityEngine_Rigidbody_o *v14; // x20
  int v15; // s0
  UnityEngine_Rigidbody_o *v18; // x20
  int v19; // s0
  float v22; // s8
  float v23; // s0
  float v24; // s0
  float32x2_t v25; // d9
  float v26; // s10
  float32x2_t v27; // d12
  float v28; // s11
  float v29; // s0
  float v30; // s2
  unsigned __int64 v31; // d0 OVERLAPPED
  float v32; // s2
  int v33; // s1
  struct System_Action_GameObject__o *callback; // x20
  System_Uri_o *v35; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41843D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_GameObject__Invoke__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41843D3 = 1;
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
      v7 = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
      z = this->fields.checkvec.fields.z;
      v9 = v7;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      *(UnityEngine_Vector3_o *)(&v10 - 2) = UnityEngine_Transform__get_position(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
      if ( !transform )
        goto LABEL_32;
      v11 = v9;
      v12 = z;
      UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v10 - 2), 0LL);
      rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(rigibody, 0LL, 0LL) )
      {
        v14 = this->fields.rigibody;
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v14 )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_velocity(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
        v18 = this->fields.rigibody;
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v18 )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_angularVelocity(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
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
  v22 = UnityEngine_Time__get_timeSinceLevelLoad(0LL) - this->fields.notTweenInfo.fields.startTime;
  v23 = v22 / this->fields.notTweenInfo.fields.time;
  if ( this->fields.easingType == 1 )
    v24 = (float)(v23 * v23) * (float)((float)(v23 * 2.7016) + -1.7016);
  else
    v24 = v23 * (float)(v23 * (float)(v23 * v23));
  v25.n64_u64[0] = *(unsigned __int64 *)&this->fields.notTweenInfo.fields.from.fields.x;
  v26 = this->fields.notTweenInfo.fields.from.fields.z;
  v27.n64_u64[0] = *(unsigned __int64 *)&this->fields.notTweenInfo.fields.to.fields.x;
  v28 = this->fields.notTweenInfo.fields.to.fields.z;
  v29 = UnityEngine_Mathf__Clamp01(v24 + 0.0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.selfTransform;
  if ( !gameObject )
    goto LABEL_32;
  v30 = (float)(v28 - v26) * v29;
  v31 = vadd_f32(v25, vmul_n_f32(vsub_f32(v27, v25), v29)).n64_u64[0];
  v32 = v26 + v30;
  v33 = HIDWORD(v31);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&v31, 0LL);
  if ( v22 <= this->fields.notTweenInfo.fields.time )
    return;
  gameObject = (UnityEngine_GameObject_o *)this->fields.selfTransform;
  this->fields.isNotTweenMove = 0;
  if ( !gameObject )
LABEL_32:
    sub_B2C434(gameObject, v5);
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.notTweenInfo.fields.to,
    0LL);
  callback = this->fields.notTweenInfo.fields.callback;
  if ( callback )
  {
    v35 = (System_Uri_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)callback,
      v35,
      (const MethodInfo_24BBAEC *)Method_System_Action_GameObject__Invoke__);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoveObject___StartNotTweenMove(
        BattleMoveObject_o *this,
        float delay,
        const MethodInfo *method)
{
  BattleMoveObject___StartNotTweenMove_d__33_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41843D9 & 1) == 0 )
  {
    sub_B2C35C(&BattleMoveObject___StartNotTweenMove_d__33_TypeInfo, method);
    byte_41843D9 = 1;
  }
  v5 = (BattleMoveObject___StartNotTweenMove_d__33_o *)sub_B2C42C(BattleMoveObject___StartNotTweenMove_d__33_TypeInfo);
  BattleMoveObject___StartNotTweenMove_d__33___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v5->fields.__4__this = this;
  sub_B2C2F8(&v5->fields.__4__this, this);
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
  __int64 v3; // x1
  UnityEngine_Object_o *perf; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  BattlePerformance_o *gameObject; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *destoryobject; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *transform; // x20
  int v15; // s0
  Spawner_o *spawner; // x20

  if ( (byte_41843D5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41843D5 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
  if ( v5 )
  {
    if ( this->fields.type == 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(4, 0LL);
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_27;
      BattlePerformance__updateDropItemCount(gameObject, 1, v8);
    }
    else
    {
      BattleMoveObject__PlayStarSe((BattleMoveObject_o *)v5, v6);
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_27;
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
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B2C434(gameObject, v7);
  }
LABEL_25:
  spawner = this->fields.spawner;
  gameObject = (BattlePerformance_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !spawner )
    goto LABEL_27;
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
  sub_B2C2F8(&this->fields.perf, perf);
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
  sub_B2C2F8(&this->fields.targetTr, tr);
}


void __fastcall BattleMoveObject__setTypeItem(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 2;
}


void __fastcall BattleMoveObject__startMoveTarget(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  float v12; // s8
  System_Collections_Hashtable_o *v13; // x20
  UnityEngine_Transform_o *targetTr; // x0
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-30h] BYREF
  float v21; // [xsp+18h] [xbp-18h] BYREF
  int v22; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_41843D4 & 1) == 0 )
  {
    sub_B2C35C(&iTween_EaseType_TypeInfo, method);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v3);
    sub_B2C35C(&float_TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v6);
    sub_B2C35C(&StringLiteral_21252/*"onOpenComplete"*/, v7);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v8);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v9);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v10);
    sub_B2C35C(&iTween_TypeInfo, v11);
    byte_41843D4 = 1;
  }
  this->fields.moveflg = 1;
  v12 = UnityEngine_Random__Range(0.2, 0.4, 0LL);
  v13 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v13, 0LL);
  if ( !v13
    || (((void (__fastcall *)(System_Collections_Hashtable_o *, Il2CppMethodPointer))v13->klass->vtable._24_Clear.method)(
          v13,
          v13->klass->vtable._25_Clone.methodPtr),
        (targetTr = this->fields.targetTr) == 0LL) )
  {
    sub_B2C434(targetTr, v15);
  }
  position = UnityEngine_Transform__get_position(targetTr, 0LL);
  v16 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_21511/*"position"*/,
    v16,
    v13->klass->vtable._24_Clear.methodPtr);
  v22 = 26;
  v17 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_18114/*"easetype"*/,
    v17,
    v13->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_21263/*"oncomplete"*/,
    StringLiteral_21252/*"onOpenComplete"*/,
    v13->klass->vtable._24_Clear.methodPtr);
  v21 = v12;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_22677/*"time"*/,
    v18,
    v13->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(gameObject, v13, 0LL);
}


void __fastcall BattleMoveObject___StartNotTweenMove_d__33___ctor(
        BattleMoveObject___StartNotTweenMove_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoveObject___StartNotTweenMove_d__33__MoveNext(
        BattleMoveObject___StartNotTweenMove_d__33_o *this,
        const MethodInfo *method)
{
  BattleMoveObject___StartNotTweenMove_d__33_o *v2; // x19
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
  if ( (byte_41871D0 & 1) == 0 )
  {
    this = (BattleMoveObject___StartNotTweenMove_d__33_o *)sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_41871D0 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
  }
  if ( !_4__this )
    sub_B2C434(this, method);
  result = 0;
  _4__this->fields.isNotTweenMove = 1;
  return result;
}


Il2CppObject *__fastcall BattleMoveObject___StartNotTweenMove_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoveObject___StartNotTweenMove_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoveObject___StartNotTweenMove_d__33__System_Collections_IEnumerator_Reset(
        BattleMoveObject___StartNotTweenMove_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleMoveObject___StartNotTweenMove_d__33_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleMoveObject___StartNotTweenMove_d__33__System_Collections_IEnumerator_get_Current(
        BattleMoveObject___StartNotTweenMove_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoveObject___StartNotTweenMove_d__33__System_IDisposable_Dispose(
        BattleMoveObject___StartNotTweenMove_d__33_o *this,
        const MethodInfo *method)
{
  ;
}