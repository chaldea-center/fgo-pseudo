void __fastcall BattleMoveObject___ctor(BattleMoveObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleMoveObject__GetTransform(BattleMoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfTransform; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B39856 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B39856 = 1;
  }
  selfTransform = (UnityEngine_Object_o *)this->fields.selfTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(selfTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    this->fields.selfTransform = transform;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.selfTransform, (int64_t)transform, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.selfTransform;
}


bool __fastcall BattleMoveObject__IsMoveToBattleItemUi(BattleMoveObject_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


void __fastcall BattleMoveObject__OnSpawn(BattleMoveObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleMoveObject_o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  v8 = this;
  this->fields.type = 0;
  *(_WORD *)&this->fields.dropflg = 0;
  this->fields.targetTr = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.targetTr, 0LL, v2, v3, v4, v5, v6, v7);
  v8->fields.perf = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields.perf, 0LL, v9, v10, v11, v12, v13, v14);
  v8->fields.destoryobject = 0LL;
  v8 = (BattleMoveObject_o *)((char *)v8 + 64);
  sub_1BD33FC((PartyOrganizationUtility_o *)v8, 0LL, v15, v16, v17, v18, v19, v20);
  LODWORD(v8->fields.spawner) = 0;
}


void __fastcall BattleMoveObject__PlayStarSe(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *CommonSeNameLocal; // x19
  System_String_o *CueSheet; // x20
  float DefaultPreDelayTime; // s0
  _QWORD *v9; // x0
  float v10; // s8
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4B39855 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattleMoveObject_PlayStarSe__, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v2);
    sub_1BD3458(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v3);
    byte_4B39855 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
    sub_1BD36B4(Instance, v5);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0LL);
  v9 = Method_BattleMoveObject_PlayStarSe__;
  v10 = DefaultPreDelayTime;
  if ( (*((_BYTE *)Method_BattleMoveObject_PlayStarSe__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BD3470(Method_BattleMoveObject_PlayStarSe__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BD343C(v9, v9[4]);
  OverwriteAssetSoundName__PlayCommonSe_39394788(v11, 7, v10 / 1000.0, 1, 0LL);
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
  Il2CppObject *Component_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B39857 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_Rigidbody___, flg);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B39857 = 1;
  }
  p_rigibody = &this->fields.rigibody;
  rigibody = (UnityEngine_Object_o *)this->fields.rigibody;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(rigibody, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)Component_object;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&this->fields.rigibody,
      (int64_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !*p_rigibody )
    sub_1BD36B4(0LL, v8);
  UnityEngine_Rigidbody__set_useGravity(*p_rigibody, flg, 0LL);
}


void __fastcall BattleMoveObject__SetTypeBattleItem(BattleMoveObject_o *this, const MethodInfo *method)
{
  this->fields.type = 3;
}


void __fastcall BattleMoveObject__Start(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  Il2CppObject *Component_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B39851 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_Rigidbody___, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_4B39851 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.spawner, (int64_t)Instance, v5, v6, v7, v8, v9, v10);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  this->fields.rigibody = (struct UnityEngine_Rigidbody_o *)Component_object;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.rigibody,
    (int64_t)Component_object,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this->fields.selfTransform = transform;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.selfTransform,
    (int64_t)transform,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
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
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.notTweenInfo.fields.callback,
    (int64_t)callback,
    (int64_t)method,
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
  this->fields.notTweenInfo.fields.startTime = UnityEngine_Time__get_timeSinceLevelLoad(0LL);
  started = BattleMoveObject___StartNotTweenMove(this, delay, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_70263544((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__Update(BattleMoveObject_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
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

  if ( (byte_4B39852 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B39852 = 1;
  }
  if ( this->fields.dropflg )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_38;
    gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_38;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
    if ( position.fields.y < this->fields.checkvec.fields.y )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      v6 = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
      y = this->fields.checkvec.fields.y;
      v8 = v6;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
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
      gameObject = UnityEngine_Object__op_Inequality(rigibody, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        v13 = this->fields.rigibody;
        if ( !byte_4B31941 )
        {
          gameObject = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v4);
          byte_4B31941 = 1;
        }
        if ( !v13 )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_velocity(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        v14 = this->fields.rigibody;
        if ( !byte_4B31941 )
        {
          gameObject = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v4);
          byte_4B31941 = 1;
        }
        if ( !v14 )
          goto LABEL_38;
        UnityEngine_Rigidbody__set_angularVelocity(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        gameObject = (__int64)this->fields.rigibody;
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
  gameObject = (__int64)this->fields.selfTransform;
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
  gameObject = (__int64)this->fields.selfTransform;
  this->fields.isNotTweenMove = 0;
  if ( !gameObject )
LABEL_38:
    sub_1BD36B4(gameObject, v4);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B39858 & 1) == 0 )
  {
    sub_1BD3458(&BattleMoveObject___StartNotTweenMove_d__35_TypeInfo, method);
    byte_4B39858 = 1;
  }
  v5 = sub_1BD36A4(BattleMoveObject___StartNotTweenMove_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x1
  UnityEngine_Object_o *perf; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  int32_t type; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  BattlePerformance_o *gameObject; // x0
  UnityEngine_Object_o *destoryobject; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *transform; // x20
  int v15; // s0
  Spawner_o *spawner; // x20

  if ( (byte_4B39854 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattleMoveObject_onOpenComplete__, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B39854 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
  if ( v5 )
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
      v8 = Method_BattleMoveObject_onOpenComplete__;
      if ( (*((_BYTE *)Method_BattleMoveObject_onOpenComplete__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BD3470(Method_BattleMoveObject_onOpenComplete__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BD343C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 4, 0LL);
      gameObject = this->fields.perf;
      if ( !gameObject )
        goto LABEL_27;
      BattlePerformance__updateDropItemCount(gameObject, 1, 0LL);
    }
    else
    {
      BattleMoveObject__PlayStarSe((BattleMoveObject_o *)v5, v6);
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
    sub_1BD36B4(gameObject, v6);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoveObject__setParam(
        BattleMoveObject_o *this,
        BattlePerformance_o *perf,
        int32_t count,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattlePerformance_o **p_perf; // x20

  this->fields.perf = perf;
  p_perf = &this->fields.perf;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)perf,
    *(int64_t *)&count,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.targetTr = tr;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.targetTr, (int64_t)tr, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Vector3_o position; // [xsp+0h] [xbp-80h] BYREF
  float v30; // [xsp+18h] [xbp-68h] BYREF
  int v31; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B39853 & 1) == 0 )
  {
    sub_1BD3458(&iTween_EaseType_TypeInfo, method);
    sub_1BD3458(&System_Collections_Hashtable_TypeInfo, v3);
    sub_1BD3458(&float_TypeInfo, v4);
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_18978/*"easetype"*/, v6);
    sub_1BD3458(&StringLiteral_22534/*"onOpenComplete"*/, v7);
    sub_1BD3458(&StringLiteral_24213/*"time"*/, v8);
    sub_1BD3458(&StringLiteral_22848/*"position"*/, v9);
    sub_1BD3458(&StringLiteral_22546/*"oncomplete"*/, v10);
    sub_1BD3458(&iTween_TypeInfo, v11);
    byte_4B39853 = 1;
  }
  this->fields.moveflg = 1;
  v12 = UnityEngine_Random__Range(0.2, 0.4, 0LL);
  v13 = (System_Collections_Hashtable_o *)sub_1BD36A4(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63105008(v13, 0LL);
  if ( !v13
    || (((void (__fastcall *)(System_Collections_Hashtable_o *, Il2CppMethodPointer))v13->klass->vtable._24_Clear.method)(
          v13,
          v13->klass->vtable._25_Clone.methodPtr),
        (targetTr = this->fields.targetTr) == 0LL) )
  {
    sub_1BD36B4(targetTr, v15);
  }
  position = UnityEngine_Transform__get_position(targetTr, 0LL);
  v19 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &position, v16, v17, v18);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_22848/*"position"*/,
    v19,
    v13->klass->vtable._24_Clear.methodPtr);
  v31 = 26;
  v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v31, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_18978/*"easetype"*/,
    v23,
    v13->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_22546/*"oncomplete"*/,
    StringLiteral_22534/*"onOpenComplete"*/,
    v13->klass->vtable._24_Clear.methodPtr);
  v30 = v12;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v30, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_24213/*"time"*/,
    v27,
    v13->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61063580(gameObject, v13, 0LL);
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_4B3985A & 1) == 0 )
  {
    this = (BattleMoveObject___StartNotTweenMove_d__35_o *)sub_1BD3458(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4B3985A = 1;
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
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, delay, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1BD33FC(p__2__current, (int64_t)v6, v8, v9, v10, v11, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
  }
  if ( !_4__this )
    sub_1BD36B4(this, method);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattleMoveObject___StartNotTweenMove_d__35_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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