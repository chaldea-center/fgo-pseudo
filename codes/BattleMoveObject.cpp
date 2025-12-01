void BattleMoveObject___ctor(BattleMoveObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


UnityEngine_Transform_o *BattleMoveObject__GetTransform(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfTransform; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC9FB7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9FB7 = 1;
  }
  selfTransform = (UnityEngine_Object_o *)this->fields.selfTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selfTransform, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.selfTransform = transform;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.selfTransform, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.selfTransform;
}


bool BattleMoveObject__IsMoveToBattleItemUi(BattleMoveObject_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


void BattleMoveObject__OnSpawn(BattleMoveObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleMoveObject_o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  v8 = this;
  this->fields.type = 0;
  *(_WORD *)&this->fields.dropflg = 0;
  this->fields.targetTr = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.targetTr, 0, v2, v3, v4, v5, v6, v7);
  v8->fields.perf = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.perf, 0, v9, v10, v11, v12, v13, v14);
  v8->fields.destoryobject = 0;
  v8 = (BattleMoveObject_o *)((char *)v8 + 64);
  sub_1C71354((GrandQuestFolderBoardItem_o *)v8, 0, v15, v16, v17, v18, v19, v20);
  LODWORD(v8->fields.spawner) = 0;
}


void BattleMoveObject__PlayStarSe(BattleMoveObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  System_String_o *CommonSeNameLocal; // x19
  System_String_o *CueSheet; // x20
  float DefaultPreDelayTime; // s0
  _QWORD *v7; // x0
  float v8; // s8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4CC9FB6 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleMoveObject_PlayStarSe__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4CC9FB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v3);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0);
  v7 = Method_BattleMoveObject_PlayStarSe__;
  v8 = DefaultPreDelayTime;
  if ( (*((_BYTE *)Method_BattleMoveObject_PlayStarSe__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C713C8(Method_BattleMoveObject_PlayStarSe__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe_41697920(v9, 7, v8 / 1000.0, 1, 0, 0);
}


void BattleMoveObject__SetEasingType(BattleMoveObject_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.easingType = type;
}


void BattleMoveObject__SetRigidbodyGravity(BattleMoveObject_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Rigidbody_o **p_rigibody; // x21
  UnityEngine_Object_o *rigibody; // x22
  __int64 v7; // x1
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC9FB8 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9FB8 = 1;
  }
  p_rigibody = &this->fields.rigibody;
  rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rigibody, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)Component_object;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.rigibody,
      (int32_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !*p_rigibody )
    sub_1C71608(0, v7);
  UnityEngine_Rigidbody__set_useGravity(*p_rigibody, flg, 0);
}


void BattleMoveObject__SetTypeBattleItem(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 3;
}


void BattleMoveObject__SetTypeBattleSkillDrop(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 4;
}


void BattleMoveObject__Start(BattleMoveObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC9FB2 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_4CC9FB2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.spawner, (int32_t)Instance, v4, v5, v6, v7, v8, v9);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.rigibody,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.selfTransform = transform;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.selfTransform,
    (int32_t)transform,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void BattleMoveObject__StartNotTweenMove(
        BattleMoveObject_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float time,
        float delay,
        System_Action_GameObject__o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  float x; // s15
  float z; // s10
  float y; // s11
  float v18; // s12
  float v19; // s13
  float v20; // s14
  const MethodInfo *v21; // x1
  System_Collections_IEnumerator_o *started; // x1

  x = from.fields.x;
  *(_OWORD *)&this->fields.notTweenInfo.fields.from.fields.x = 0u;
  *(_OWORD *)&this->fields.notTweenInfo.fields.to.fields.y = 0u;
  this->fields.notTweenInfo.fields.callback = callback;
  z = to.fields.z;
  y = to.fields.y;
  v18 = to.fields.x;
  v19 = from.fields.z;
  v20 = from.fields.y;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.notTweenInfo.fields.callback,
    (int32_t)callback,
    (int32_t)method,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.notTweenInfo.fields.from.fields.x = x;
  this->fields.notTweenInfo.fields.from.fields.y = v20;
  this->fields.notTweenInfo.fields.from.fields.z = v19;
  this->fields.notTweenInfo.fields.to.fields.x = v18;
  this->fields.notTweenInfo.fields.to.fields.y = y;
  this->fields.notTweenInfo.fields.to.fields.z = z;
  this->fields.notTweenInfo.fields.time = time;
  this->fields.notTweenInfo.fields.startTime = UnityEngine_Time__get_timeSinceLevelLoad(0);
  started = BattleMoveObject___StartNotTweenMove(this, delay, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleMoveObject__Update(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x20
  unsigned int v6; // s0
  float y; // s8
  unsigned int v8; // s9
  unsigned int v9; // s0
  float v10; // s1
  UnityEngine_Object_o *rigibody; // x20
  UnityEngine_Rigidbody_o *v12; // x20
  UnityEngine_Rigidbody_o *v13; // x20
  float v14; // s8
  float v15; // s0
  float v16; // s0
  float v17; // s0
  float v18; // s2
  float v19; // s0
  float z; // s2
  float v21; // s3
  unsigned __int64 v22; // d0 OVERLAPPED
  float v23; // s2
  int v24; // s1
  struct System_Action_GameObject__o *callback; // x20
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC9FB3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9FB3 = 1;
  }
  if ( this->fields.dropflg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_38;
    gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_38;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
    if ( position.fields.y < this->fields.checkvec.fields.y )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_38;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_38;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_38;
      v6 = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
      y = this->fields.checkvec.fields.y;
      v8 = v6;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_38;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_38;
      v28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
      if ( !transform )
        goto LABEL_38;
      v9 = v8;
      v10 = y;
      UnityEngine_Transform__set_position(transform, v28, 0);
      rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = UnityEngine_Object__op_Inequality(rigibody, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        v12 = this->fields.rigibody;
        if ( !byte_4CC0D09 )
        {
          gameObject = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D09 = 1;
        }
        if ( !v12 )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_velocity(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        v13 = this->fields.rigibody;
        if ( !byte_4CC0D09 )
        {
          gameObject = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
          byte_4CC0D09 = 1;
        }
        if ( !v13 )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_angularVelocity(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        gameObject = (__int64)this->fields.rigibody;
        if ( !gameObject )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)gameObject, 0, 0);
      }
      this->fields.dropflg = 0;
    }
  }
  if ( !this->fields.isNotTweenMove )
    return;
  v14 = UnityEngine_Time__get_timeSinceLevelLoad(0) - this->fields.notTweenInfo.fields.startTime;
  v15 = v14 / this->fields.notTweenInfo.fields.time;
  if ( this->fields.easingType == 1 )
    v16 = (float)(v15 * v15) * (float)((float)(v15 * 2.7016) + -1.7016);
  else
    v16 = v15 * (float)(v15 * (float)(v15 * v15));
  gameObject = (__int64)this->fields.selfTransform;
  v17 = v16 + 0.0;
  v18 = fminf(v17, 1.0);
  if ( v17 < 0.0 )
    v19 = 0.0;
  else
    v19 = v18;
  if ( !gameObject )
    goto LABEL_38;
  z = this->fields.notTweenInfo.fields.from.fields.z;
  v21 = v19 * (float)(this->fields.notTweenInfo.fields.to.fields.z - z);
  v22 = vadd_f32(
          *(float32x2_t *)&this->fields.notTweenInfo.fields.from.fields.x,
          vmul_n_f32(
            vsub_f32(
              *(float32x2_t *)&this->fields.notTweenInfo.fields.to.fields.x,
              *(float32x2_t *)&this->fields.notTweenInfo.fields.from.fields.x),
            v19)).n64_u64[0];
  v23 = z + v21;
  v24 = HIDWORD(v22);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, *(UnityEngine_Vector3_o *)&v22, 0);
  if ( v14 <= this->fields.notTweenInfo.fields.time )
    return;
  gameObject = (__int64)this->fields.selfTransform;
  this->fields.isNotTweenMove = 0;
  if ( !gameObject )
LABEL_38:
    sub_1C71608(gameObject, v4);
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)gameObject,
    this->fields.notTweenInfo.fields.to,
    0);
  callback = this->fields.notTweenInfo.fields.callback;
  if ( callback )
  {
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      v26,
      callback->fields.method);
  }
}


System_Collections_IEnumerator_o *BattleMoveObject___StartNotTweenMove(
        BattleMoveObject_o *this,
        float delay,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC9FB9 & 1) == 0 )
  {
    sub_1C713B0(&BattleMoveObject___StartNotTweenMove_d__36_TypeInfo);
    byte_4CC9FB9 = 1;
  }
  v5 = sub_1C715FC(BattleMoveObject___StartNotTweenMove_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 32) = delay;
  return (System_Collections_IEnumerator_o *)v5;
}


float BattleMoveObject__easeInBack(
        BattleMoveObject_o *this,
        float start,
        float end,
        float value,
        const MethodInfo *method)
{
  return (float)((float)((float)((float)(end - start) * value) * value) * (float)((float)(value * 2.7016) + -1.7016))
       + start;
}


float BattleMoveObject__easeInQuart(
        BattleMoveObject_o *this,
        float start,
        float end,
        float value,
        const MethodInfo *method)
{
  return (float)((float)((float)((float)((float)(end - start) * value) * value) * value) * value) + start;
}


bool BattleMoveObject__isMoveToItems(BattleMoveObject_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


void BattleMoveObject__onOpenComplete(BattleMoveObject_o *this, const MethodInfo *method)
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
  Spawner_o *spawner; // x20
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC9FB5 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleMoveObject_onOpenComplete__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9FB5 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(perf, 0, 0);
  if ( v4 )
  {
    type = this->fields.type;
    if ( type != 4 )
    {
      if ( type == 3 )
      {
        gameObject = this->fields.perf;
        if ( !gameObject )
          goto LABEL_28;
        BattlePerformance__updateDropItemCountHaveCheck(gameObject, 1, 0);
      }
      else if ( type == 2 )
      {
        v7 = Method_BattleMoveObject_onOpenComplete__;
        if ( (*((_BYTE *)Method_BattleMoveObject_onOpenComplete__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C713C8(Method_BattleMoveObject_onOpenComplete__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 4, 0, 0);
        gameObject = this->fields.perf;
        if ( !gameObject )
          goto LABEL_28;
        BattlePerformance__updateDropItemCount(gameObject, 1, 0);
      }
      else
      {
        BattleMoveObject__PlayStarSe((BattleMoveObject_o *)v4, v5);
        gameObject = this->fields.perf;
        if ( !gameObject )
          goto LABEL_28;
        BattlePerformance__addCriticalPont(gameObject, this->fields.count, 0);
      }
    }
  }
  destoryobject = (UnityEngine_Object_o *)this->fields.destoryobject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(destoryobject, 0, 0) )
  {
    v11 = this->fields.destoryobject;
    gameObject = (BattlePerformance_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (BattlePerformance_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            0);
      if ( gameObject )
      {
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
        gameObject = (BattlePerformance_o *)BaseMonoBehaviour__createObject(
                                              (BaseMonoBehaviour_o *)this,
                                              v11,
                                              parent,
                                              0,
                                              0);
        if ( gameObject )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
          gameObject = (BattlePerformance_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( gameObject )
          {
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
            if ( transform )
            {
              UnityEngine_Transform__set_position(transform, position, 0);
              goto LABEL_26;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C71608(gameObject, v5);
  }
LABEL_26:
  spawner = this->fields.spawner;
  gameObject = (BattlePerformance_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !spawner )
    goto LABEL_28;
  Spawner__Despawn(spawner, (UnityEngine_GameObject_o *)gameObject, 0, 0);
}


void BattleMoveObject__setAction(BattleMoveObject_o *this, UnityEngine_Vector3_o vec, const MethodInfo *method)
{
  this->fields.checkvec = vec;
  this->fields.checkvec.fields.y = vec.fields.y + UnityEngine_Random__Range(0.09, 0.12, 0);
  this->fields.dropflg = 1;
}


void BattleMoveObject__setParam(
        BattleMoveObject_o *this,
        BattlePerformance_o *perf,
        int32_t count,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattlePerformance_o **p_perf; // x20

  this->fields.perf = perf;
  p_perf = &this->fields.perf;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.perf, (int32_t)perf, count, (int32_t)method, v4, v5, v6, v7);
  *((_DWORD *)p_perf + 2) = count;
}


void BattleMoveObject__setTarget(BattleMoveObject_o *this, UnityEngine_Vector3_o vec, const MethodInfo *method)
{
  this->fields.targetvec = vec;
}


void BattleMoveObject__setTargetTr(BattleMoveObject_o *this, UnityEngine_Transform_o *tr, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.targetTr = tr;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.targetTr, (int32_t)tr, (int32_t)method, v3, v4, v5, v6, v7);
}


void BattleMoveObject__setTypeItem(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 2;
}


void BattleMoveObject__startMoveTarget(BattleMoveObject_o *this, const MethodInfo *method)
{
  float v3; // s8
  System_Collections_Hashtable_o *v4; // x20
  UnityEngine_Transform_o *targetTr; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-80h] BYREF
  float v12; // [xsp+18h] [xbp-68h] BYREF
  int v13; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4CC9FB4 & 1) == 0 )
  {
    sub_1C713B0(&iTween_EaseType_TypeInfo);
    sub_1C713B0(&System_Collections_Hashtable_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_18800/*"easetype"*/);
    sub_1C713B0(&StringLiteral_22521/*"onOpenComplete"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22847/*"position"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC9FB4 = 1;
  }
  this->fields.moveflg = 1;
  v3 = UnityEngine_Random__Range(0.2, 0.4, 0);
  v4 = (System_Collections_Hashtable_o *)sub_1C715FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65394340(v4, 0);
  if ( !v4
    || (((void (__fastcall *)(System_Collections_Hashtable_o *, const MethodInfo *))v4->klass->vtable._23_Clear.methodPtr)(
          v4,
          v4->klass->vtable._23_Clear.method),
        (targetTr = this->fields.targetTr) == 0) )
  {
    sub_1C71608(targetTr, v6);
  }
  position = UnityEngine_Transform__get_position(targetTr, 0);
  v7 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22847/*"position"*/,
    v7,
    v4->klass->vtable._22_Add.method);
  v13 = 26;
  v8 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_18800/*"easetype"*/,
    v8,
    v4->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_22533/*"oncomplete"*/,
    StringLiteral_22521/*"onOpenComplete"*/,
    v4->klass->vtable._22_Add.method);
  v12 = v3;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v12);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v4->klass->vtable._22_Add.methodPtr)(
    v4,
    StringLiteral_24189/*"time"*/,
    v9,
    v4->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63669288(gameObject, v4, 0);
}


void BattleMoveObject___StartNotTweenMove_d__36___ctor(
        BattleMoveObject___StartNotTweenMove_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoveObject___StartNotTweenMove_d__36__MoveNext(
        BattleMoveObject___StartNotTweenMove_d__36_o *this,
        const MethodInfo *method)
{
  BattleMoveObject___StartNotTweenMove_d__36_o *v2; // x19
  int32_t _1__state; // w9
  struct BattleMoveObject_o *_4__this; // x8
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4CC9FBB & 1) == 0 )
  {
    this = (BattleMoveObject___StartNotTweenMove_d__36_o *)sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CC9FBB = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, delay, 0);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
  }
  if ( !_4__this )
    sub_1C71608(this, method);
  result = 0;
  _4__this->fields.isNotTweenMove = 1;
  return result;
}


Il2CppObject *BattleMoveObject___StartNotTweenMove_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoveObject___StartNotTweenMove_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoveObject___StartNotTweenMove_d__36__System_Collections_IEnumerator_Reset(
        BattleMoveObject___StartNotTweenMove_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleMoveObject___StartNotTweenMove_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattleMoveObject___StartNotTweenMove_d__36__System_Collections_IEnumerator_get_Current(
        BattleMoveObject___StartNotTweenMove_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoveObject___StartNotTweenMove_d__36__System_IDisposable_Dispose(
        BattleMoveObject___StartNotTweenMove_d__36_o *this,
        const MethodInfo *method)
{
  ;
}