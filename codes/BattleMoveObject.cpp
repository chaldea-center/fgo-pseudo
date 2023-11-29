void __fastcall BattleMoveObject___ctor(BattleMoveObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleMoveObject__GetTransform(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfTransform; // x21
  struct UnityEngine_Transform_o *transform; // x0

  if ( (byte_40F6AEE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6AEE = 1;
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
    sub_B16F98(&this->fields.selfTransform, transform);
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
  sub_B16F98(&this->fields.targetTr, 0LL);
  v2->fields.perf = 0LL;
  sub_B16F98(&v2->fields.perf, 0LL);
  v2->fields.destoryobject = 0LL;
  v2 = (BattleMoveObject_o *)((char *)v2 + 56);
  sub_B16F98(v2, 0LL);
  LODWORD(v2->fields.selfTransform) = 0;
}


void __fastcall BattleMoveObject__PlayStarSe(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  SeManager_o *Instance; // x0
  System_String_o *CommonSeNameLocal; // x19
  SoundManager_o *v6; // x0
  System_String_o *CueSheet; // x20
  SeManager_o *v8; // x0
  float DefaultPreDelayTime; // s8

  if ( (byte_40F6AED & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    byte_40F6AED = 1;
  }
  Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal(Instance, 7, 0LL),
        (v6 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet(v6, CommonSeNameLocal, 0LL),
        (v8 = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime(v8, CueSheet, CommonSeNameLocal, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe_33003004(7, DefaultPreDelayTime / 1000.0, 1, 0LL);
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
  struct UnityEngine_Rigidbody_o *Component_WebViewObject; // x0

  if ( (byte_40F6AEF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Rigidbody___, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F6AEF = 1;
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
                                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.rigibody = Component_WebViewObject;
    sub_B16F98(&this->fields.rigibody, Component_WebViewObject);
  }
  if ( !*p_rigibody )
    sub_B170D4();
  UnityEngine_Rigidbody__set_useGravity(*p_rigibody, flg, 0LL);
}


void __fastcall BattleMoveObject__Start(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Spawner_o *Instance; // x0
  struct UnityEngine_Rigidbody_o *Component_WebViewObject; // x0
  struct UnityEngine_Transform_o *transform; // x1

  if ( (byte_40F6AE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Rigidbody___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_40F6AE9 = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = Instance;
  sub_B16F98(&this->fields.spawner, Instance);
  Component_WebViewObject = (struct UnityEngine_Rigidbody_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  this->fields.rigibody = Component_WebViewObject;
  sub_B16F98(&this->fields.rigibody, Component_WebViewObject);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.selfTransform = transform;
  sub_B16F98(&this->fields.selfTransform, transform);
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
  sub_B16F98(&this->fields.notTweenInfo.fields.callback, callback);
  this->fields.notTweenInfo.fields.from.fields.x = x;
  this->fields.notTweenInfo.fields.from.fields.y = v15;
  this->fields.notTweenInfo.fields.from.fields.z = v14;
  this->fields.notTweenInfo.fields.to.fields.x = v13;
  this->fields.notTweenInfo.fields.to.fields.y = y;
  this->fields.notTweenInfo.fields.to.fields.z = z;
  this->fields.notTweenInfo.fields.time = time;
  this->fields.notTweenInfo.fields.startTime = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
  started = BattleMoveObject___StartNotTweenMove(this, delay, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__Update(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *v9; // x0
  unsigned int v10; // s0
  float z; // s8
  unsigned int v12; // s9
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  int v15; // s2
  unsigned int v16; // s0
  float v17; // s1
  UnityEngine_Object_o *rigibody; // x20
  UnityEngine_Rigidbody_o *v19; // x20
  int v20; // s0
  UnityEngine_Rigidbody_o *v23; // x20
  int v24; // s0
  UnityEngine_Rigidbody_o *v27; // x0
  float v28; // s8
  float v29; // s0
  float v30; // s0
  float32x2_t v31; // d9
  float v32; // s10
  float32x2_t v33; // d12
  float v34; // s11
  float v35; // s0
  UnityEngine_Transform_o *selfTransform; // x0
  float v37; // s2
  unsigned __int64 v38; // d0 OVERLAPPED
  float v39; // s2
  int v40; // s1
  UnityEngine_Transform_o *v41; // x0
  struct System_Action_GameObject__o *callback; // x20
  System_Uri_o *v43; // x1
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F6AEA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_GameObject__Invoke__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F6AEA = 1;
  }
  if ( this->fields.dropflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !transform )
      goto LABEL_32;
    position = UnityEngine_Transform__get_position(transform, 0LL);
    if ( position.fields.y < this->fields.checkvec.fields.z )
    {
      v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v6 )
        goto LABEL_32;
      v7 = UnityEngine_GameObject__get_transform(v6, 0LL);
      v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v8 )
        goto LABEL_32;
      v9 = UnityEngine_GameObject__get_transform(v8, 0LL);
      if ( !v9 )
        goto LABEL_32;
      v10 = (unsigned int)UnityEngine_Transform__get_position(v9, 0LL);
      z = this->fields.checkvec.fields.z;
      v12 = v10;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v13 )
        goto LABEL_32;
      v14 = UnityEngine_GameObject__get_transform(v13, 0LL);
      if ( !v14 )
        goto LABEL_32;
      *(UnityEngine_Vector3_o *)(&v15 - 2) = UnityEngine_Transform__get_position(v14, 0LL);
      if ( !v7 )
        goto LABEL_32;
      v16 = v12;
      v17 = z;
      UnityEngine_Transform__set_position(v7, *(UnityEngine_Vector3_o *)(&v15 - 2), 0LL);
      rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(rigibody, 0LL, 0LL) )
      {
        v19 = this->fields.rigibody;
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v19 )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_velocity(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
        v23 = this->fields.rigibody;
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v23 )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_angularVelocity(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
        v27 = this->fields.rigibody;
        if ( !v27 )
          goto LABEL_32;
        UnityEngine_Rigidbody__set_useGravity(v27, 0, 0LL);
      }
      this->fields.dropflg = 0;
    }
  }
  if ( !this->fields.isNotTweenMove )
    return;
  v28 = UnityEngine_Time__get_timeSinceLevelLoad(0LL) - this->fields.notTweenInfo.fields.startTime;
  v29 = v28 / this->fields.notTweenInfo.fields.time;
  if ( this->fields.easingType == 1 )
    v30 = (float)(v29 * v29) * (float)((float)(v29 * 2.7016) + -1.7016);
  else
    v30 = v29 * (float)(v29 * (float)(v29 * v29));
  v31.n64_u64[0] = *(unsigned __int64 *)&this->fields.notTweenInfo.fields.from.fields.x;
  v32 = this->fields.notTweenInfo.fields.from.fields.z;
  v33.n64_u64[0] = *(unsigned __int64 *)&this->fields.notTweenInfo.fields.to.fields.x;
  v34 = this->fields.notTweenInfo.fields.to.fields.z;
  v35 = UnityEngine_Mathf__Clamp01(v30 + 0.0, 0LL);
  selfTransform = this->fields.selfTransform;
  if ( !selfTransform )
    goto LABEL_32;
  v37 = (float)(v34 - v32) * v35;
  v38 = vadd_f32(v31, vmul_n_f32(vsub_f32(v33, v31), v35)).n64_u64[0];
  v39 = v32 + v37;
  v40 = HIDWORD(v38);
  UnityEngine_Transform__set_localPosition(selfTransform, *(UnityEngine_Vector3_o *)&v38, 0LL);
  if ( v28 <= this->fields.notTweenInfo.fields.time )
    return;
  v41 = this->fields.selfTransform;
  this->fields.isNotTweenMove = 0;
  if ( !v41 )
LABEL_32:
    sub_B170D4();
  UnityEngine_Transform__set_localPosition(v41, this->fields.notTweenInfo.fields.to, 0LL);
  callback = this->fields.notTweenInfo.fields.callback;
  if ( callback )
  {
    v43 = (System_Uri_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)callback,
      v43,
      (const MethodInfo_24B7324 *)Method_System_Action_GameObject__Invoke__);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoveObject___StartNotTweenMove(
        BattleMoveObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  BattleMoveObject___StartNotTweenMove_d__33_o *v8; // x20

  if ( (byte_40F6AF0 & 1) == 0 )
  {
    sub_B16FFC(&BattleMoveObject___StartNotTweenMove_d__33_TypeInfo, method);
    byte_40F6AF0 = 1;
  }
  v8 = (BattleMoveObject___StartNotTweenMove_d__33_o *)sub_B170CC(
                                                         BattleMoveObject___StartNotTweenMove_d__33_TypeInfo,
                                                         method,
                                                         v3,
                                                         v4,
                                                         v5);
  BattleMoveObject___StartNotTweenMove_d__33___ctor(v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  v8->fields.__4__this = this;
  sub_B16F98(&v8->fields.__4__this, this);
  v8->fields.delay = delay;
  return (System_Collections_IEnumerator_o *)v8;
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
  const MethodInfo *v7; // x1
  BattlePerformance_o *v8; // x0
  const MethodInfo *v9; // x2
  BattlePerformance_o *v10; // x0
  UnityEngine_Object_o *destoryobject; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Transform_o *v18; // x0
  int v19; // s0
  Spawner_o *spawner; // x20
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_40F6AEC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F6AEC = 1;
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
      v8 = this->fields.perf;
      if ( !v8 )
        goto LABEL_27;
      BattlePerformance__updateDropItemCount(v8, v7);
    }
    else
    {
      BattleMoveObject__PlayStarSe((BattleMoveObject_o *)v5, v6);
      v10 = this->fields.perf;
      if ( !v10 )
        goto LABEL_27;
      BattlePerformance__addCriticalPont(v10, this->fields.count, v9);
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
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( transform )
      {
        parent = UnityEngine_Transform__get_parent(transform, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v12, parent, 0LL, 0LL);
        if ( Object )
        {
          v17 = UnityEngine_GameObject__get_transform(Object, 0LL);
          v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( v18 )
          {
            *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(v18, 0LL);
            if ( v17 )
            {
              UnityEngine_Transform__set_position(v17, *(UnityEngine_Vector3_o *)&v19, 0LL);
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_25:
  spawner = this->fields.spawner;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !spawner )
    goto LABEL_27;
  Spawner__Despawn(spawner, v23, 0, 0LL);
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
  sub_B16F98(&this->fields.perf, perf);
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
  sub_B16F98(&this->fields.targetTr, tr);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Hashtable_o *v17; // x20
  UnityEngine_Transform_o *targetTr; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-30h] BYREF
  float v24; // [xsp+18h] [xbp-18h] BYREF
  int v25; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F6AEB & 1) == 0 )
  {
    sub_B16FFC(&iTween_EaseType_TypeInfo, method);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v3);
    sub_B16FFC(&float_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18046, v6);
    sub_B16FFC(&StringLiteral_21162, v7);
    sub_B16FFC(&StringLiteral_22584, v8);
    sub_B16FFC(&StringLiteral_21419, v9);
    sub_B16FFC(&StringLiteral_21173, v10);
    sub_B16FFC(&iTween_TypeInfo, v11);
    byte_40F6AEB = 1;
  }
  this->fields.moveflg = 1;
  v12 = UnityEngine_Random__Range(0.2, 0.4, 0LL);
  v17 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v13, v14, v15, v16);
  System_Collections_Hashtable___ctor_38240048(v17, 0LL);
  if ( !v17
    || (((void (__fastcall *)(System_Collections_Hashtable_o *, Il2CppMethodPointer))v17->klass->vtable._24_Clear.method)(
          v17,
          v17->klass->vtable._25_Clone.methodPtr),
        (targetTr = this->fields.targetTr) == 0LL) )
  {
    sub_B170D4();
  }
  position = UnityEngine_Transform__get_position(targetTr, 0LL);
  v19 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_21419,
    v19,
    v17->klass->vtable._24_Clear.methodPtr);
  v25 = 26;
  v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v25);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_18046,
    v20,
    v17->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_21173,
    StringLiteral_21162,
    v17->klass->vtable._24_Clear.methodPtr);
  v24 = v12;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_22584,
    v21,
    v17->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(gameObject, v17, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _1__state; // w9
  struct BattleMoveObject_o *_4__this; // x8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0

  if ( (byte_40F9DE1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_40F9DE1 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    delay = this->fields.delay;
    this->fields.__1__state = -1;
    if ( delay > 0.0 )
    {
      v9 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v9, delay, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  if ( !_4__this )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleMoveObject___StartNotTweenMove_d__33_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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