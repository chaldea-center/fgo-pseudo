void __fastcall BattleMoveObject___ctor(BattleMoveObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleMoveObject__GetTransform(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfTransform; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5D795 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D795 = 1;
  }
  selfTransform = (UnityEngine_Object_o *)this->fields.selfTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selfTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    this->fields.selfTransform = transform;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selfTransform, (int32_t)transform, v5, v6);
  }
  return this->fields.selfTransform;
}


bool __fastcall BattleMoveObject__IsMoveToBattleItemUi(BattleMoveObject_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


void __fastcall BattleMoveObject__OnSpawn(BattleMoveObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoveObject_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3

  v4 = this;
  this->fields.type = 0;
  *(_WORD *)&this->fields.dropflg = 0;
  this->fields.targetTr = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetTr, 0, v2, v3);
  v4->fields.perf = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.perf, 0, v5, v6);
  v4->fields.destoryobject = 0LL;
  v4 = (BattleMoveObject_o *)((char *)v4 + 64);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v4, 0, v7, v8);
  LODWORD(v4->fields.spawner) = 0;
}


void __fastcall BattleMoveObject__PlayStarSe(BattleMoveObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  System_String_o *CommonSeNameLocal; // x19
  System_String_o *CueSheet; // x20
  float DefaultPreDelayTime; // s0
  _QWORD *v7; // x0
  float v8; // s8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4A5D794 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMoveObject_PlayStarSe__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4A5D794 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v3);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0LL);
  v7 = Method_BattleMoveObject_PlayStarSe__;
  v8 = DefaultPreDelayTime;
  if ( (*((_BYTE *)Method_BattleMoveObject_PlayStarSe__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B885C8(Method_BattleMoveObject_PlayStarSe__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe_38531988(v9, 7, v8 / 1000.0, 1, 0LL);
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
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D796 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D796 = 1;
  }
  p_rigibody = &this->fields.rigibody;
  rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rigibody, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rigibody, (int32_t)Component_object, v9, v10);
  }
  if ( !*p_rigibody )
    sub_1B8880C(0LL, v7);
  UnityEngine_Rigidbody__set_useGravity(*p_rigibody, flg, 0LL);
}


void __fastcall BattleMoveObject__SetTypeBattleItem(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 3;
}


void __fastcall BattleMoveObject__Start(BattleMoveObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D790 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_4A5D790 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spawner, (int32_t)Instance, v4, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rigibody, (int32_t)Component_object, v7, v8);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.selfTransform = transform;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selfTransform, (int32_t)transform, v10, v11);
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
  int32_t v7; // w3
  float x; // s15
  float z; // s10
  float y; // s11
  float v14; // s12
  float v15; // s13
  float v16; // s14
  const MethodInfo *v17; // x1
  System_Collections_IEnumerator_o *started; // x1

  x = from.fields.x;
  *(_OWORD *)&this->fields.notTweenInfo.fields.from.fields.x = 0u;
  *(_OWORD *)&this->fields.notTweenInfo.fields.to.fields.y = 0u;
  this->fields.notTweenInfo.fields.callback = callback;
  z = to.fields.z;
  y = to.fields.y;
  v14 = to.fields.x;
  v15 = from.fields.z;
  v16 = from.fields.y;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.notTweenInfo.fields.callback,
    (int32_t)callback,
    (int32_t)method,
    v7);
  this->fields.notTweenInfo.fields.from.fields.x = x;
  this->fields.notTweenInfo.fields.from.fields.y = v16;
  this->fields.notTweenInfo.fields.from.fields.z = v15;
  this->fields.notTweenInfo.fields.to.fields.x = v14;
  this->fields.notTweenInfo.fields.to.fields.y = y;
  this->fields.notTweenInfo.fields.to.fields.z = z;
  this->fields.notTweenInfo.fields.time = time;
  this->fields.notTweenInfo.fields.startTime = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
  started = BattleMoveObject___StartNotTweenMove(this, delay, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__Update(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  unsigned int v6; // s0
  float y; // s8
  unsigned int v8; // s9
  int v9; // s2
  unsigned int v10; // s0
  float v11; // s1
  UnityEngine_Object_o *rigibody; // x20
  UnityEngine_Rigidbody_o *v13; // x20
  UnityEngine_Rigidbody_o *v14; // x20
  float v15; // s8
  float v16; // s0
  float v17; // s0
  float v18; // s0
  float v19; // s2
  float v20; // s0
  float z; // s2
  float v22; // s3
  unsigned __int64 v23; // d0 OVERLAPPED
  float v24; // s2
  int v25; // s1
  struct System_Action_GameObject__o *callback; // x20
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5D791 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D791 = 1;
  }
  if ( this->fields.dropflg )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_38;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_38;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
    if ( position.fields.y < this->fields.checkvec.fields.y )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      v6 = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
      y = this->fields.checkvec.fields.y;
      v8 = v6;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_position(
                                              (UnityEngine_Transform_o *)gameObject,
                                              0LL);
      if ( !transform )
        goto LABEL_38;
      v10 = v8;
      v11 = y;
      UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v9 - 2), 0LL);
      rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rigibody, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v13 = this->fields.rigibody;
        if ( !byte_4A55CE1 )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v13 )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_velocity(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        v14 = this->fields.rigibody;
        if ( !byte_4A55CE1 )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v14 )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_angularVelocity(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.rigibody;
        if ( !gameObject )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)gameObject, 0, 0LL);
      }
      this->fields.dropflg = 0;
    }
  }
  if ( !this->fields.isNotTweenMove )
    return;
  v15 = UnityEngine_Time__get_timeSinceLevelLoad(0LL) - this->fields.notTweenInfo.fields.startTime;
  v16 = v15 / this->fields.notTweenInfo.fields.time;
  if ( this->fields.easingType == 1 )
    v17 = (float)(v16 * v16) * (float)((float)(v16 * 2.7016) + -1.7016);
  else
    v17 = v16 * (float)(v16 * (float)(v16 * v16));
  gameObject = (UnityEngine_GameObject_o *)this->fields.selfTransform;
  v18 = v17 + 0.0;
  v19 = fminf(v18, 1.0);
  if ( v18 < 0.0 )
    v20 = 0.0;
  else
    v20 = v19;
  if ( !gameObject )
    goto LABEL_38;
  z = this->fields.notTweenInfo.fields.from.fields.z;
  v22 = v20 * (float)(this->fields.notTweenInfo.fields.to.fields.z - z);
  v23 = vadd_f32(
          *(float32x2_t *)&this->fields.notTweenInfo.fields.from.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&this->fields.notTweenInfo.fields.to.fields.x,
              *(float32x2_t *)&this->fields.notTweenInfo.fields.from.fields.x),
            v20)).n64_u64[0];
  v24 = z + v22;
  v25 = HIDWORD(v23);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&v23, 0LL);
  if ( v15 <= this->fields.notTweenInfo.fields.time )
    return;
  gameObject = (UnityEngine_GameObject_o *)this->fields.selfTransform;
  this->fields.isNotTweenMove = 0;
  if ( !gameObject )
LABEL_38:
    sub_1B8880C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.notTweenInfo.fields.to,
    0LL);
  callback = this->fields.notTweenInfo.fields.callback;
  if ( callback )
  {
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      v27,
      *(_QWORD *)&callback->fields.extra_arg);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoveObject___StartNotTweenMove(
        BattleMoveObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D797 & 1) == 0 )
  {
    sub_1B885B0(&BattleMoveObject___StartNotTweenMove_d__35_TypeInfo);
    byte_4A5D797 = 1;
  }
  v5 = sub_1B887FC(BattleMoveObject___StartNotTweenMove_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(float *)(v5 + 32) = delay;
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
  int32_t type; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  BattlePerformance_o *gameObject; // x0
  UnityEngine_Object_o *destoryobject; // x20
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0
  Spawner_o *spawner; // x20

  if ( (byte_4A5D793 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleMoveObject_onOpenComplete__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D793 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
  if ( v4 )
  {
    type = this->fields.type;
    if ( type == 3 )
    {
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_27;
      BattlePerformance__updateDropItemCountHaveCheck(gameObject, 1, 0LL);
    }
    else if ( type == 2 )
    {
      v7 = Method_BattleMoveObject_onOpenComplete__;
      if ( (*((_BYTE *)Method_BattleMoveObject_onOpenComplete__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_BattleMoveObject_onOpenComplete__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 4, 0LL);
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_27;
      BattlePerformance__updateDropItemCount(gameObject, 1, 0LL);
    }
    else
    {
      BattleMoveObject__PlayStarSe((BattleMoveObject_o *)v4, v5);
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_27;
      BattlePerformance__addCriticalPont(gameObject, this->fields.count, 0LL);
    }
  }
  destoryobject = (UnityEngine_Object_o *)this->fields.destoryobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(destoryobject, 0LL, 0LL) )
  {
    v11 = this->fields.destoryobject;
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
                                              v11,
                                              parent,
                                              0LL,
                                              0LL);
        if ( gameObject )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          gameObject = (BattlePerformance_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( gameObject )
          {
            *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position(
                                               (UnityEngine_Transform_o *)gameObject,
                                               0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
              goto LABEL_25;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1B8880C(gameObject, v5);
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
  this->fields.checkvec = vec;
  this->fields.checkvec.fields.y = vec.fields.y + UnityEngine_Random__Range(0.09, 0.12, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)perf, count, (int32_t)method);
  *((_DWORD *)p_perf + 2) = count;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__setTarget(
        BattleMoveObject_o *this,
        UnityEngine_Vector3_o vec,
        const MethodInfo *method)
{
  this->fields.targetvec = vec;
}


void __fastcall BattleMoveObject__setTargetTr(
        BattleMoveObject_o *this,
        UnityEngine_Transform_o *tr,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.targetTr = tr;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetTr, (int32_t)tr, (int32_t)method, v3);
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
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-80h] BYREF
  float v21; // [xsp+18h] [xbp-68h] BYREF
  int v22; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5D792 & 1) == 0 )
  {
    sub_1B885B0(&iTween_EaseType_TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_18755/*"easetype"*/);
    sub_1B885B0(&StringLiteral_22261/*"onOpenComplete"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22573/*"position"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D792 = 1;
  }
  this->fields.moveflg = 1;
  v3 = UnityEngine_Random__Range(0.2, 0.4, 0LL);
  v4 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v4, 0LL);
  if ( !v4
    || (((void (__fastcall *)(System_Collections_Hashtable_o *, Il2CppMethodPointer))v4->klass->vtable._24_Clear.method)(
          v4,
          v4->klass->vtable._25_Clone.methodPtr),
        (targetTr = this->fields.targetTr) == 0LL) )
  {
    sub_1B8880C(targetTr, v6);
  }
  position = UnityEngine_Transform__get_position(targetTr, 0LL);
  v10 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position, v7, v8, v9);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22573/*"position"*/,
    v10,
    v4->klass->vtable._24_Clear.methodPtr);
  v22 = 26;
  v14 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v22, v11, v12, v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_18755/*"easetype"*/,
    v14,
    v4->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_22273/*"oncomplete"*/,
    StringLiteral_22261/*"onOpenComplete"*/,
    v4->klass->vtable._24_Clear.methodPtr);
  v21 = v3;
  v18 = j_il2cpp_value_box_0(float_TypeInfo, &v21, v15, v16, v17);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v4->klass->vtable._23_Add.method)(
    v4,
    StringLiteral_23929/*"time"*/,
    v18,
    v4->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60245364(gameObject, v4, 0LL);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0

  v2 = this;
  if ( (byte_4A5D799 & 1) == 0 )
  {
    this = (BattleMoveObject___StartNotTweenMove_d__35_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5D799 = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v6, v8, v9);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleMoveObject___StartNotTweenMove_d__35_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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