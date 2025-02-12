void __fastcall BattleSkillInfoData___ctor(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  this->fields.itemImageId = -1;
  *(_QWORD *)&this->fields.cutInId = -1LL;
  *(_QWORD *)&this->fields.commonReleaseCondId = -1LL;
  this->fields._SelectAddIndex_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BaseMotionSkip_o *__fastcall BattleSkillInfoData__CommonMakeSkillSkip(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  SkillMotionSkip_o *v8; // x19

  if ( (byte_4BCA3D5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&SkillMotionSkip_TypeInfo, v4);
    byte_4BCA3D5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1C1AE30(v6, v7);
  v8 = 0LL;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v6, 0LL) )
  {
    v8 = (SkillMotionSkip_o *)sub_1C1AE20(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v8, 0LL);
  }
  return (BaseMotionSkip_o *)v8;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v10; // x19
  struct System_Int32_array *funcId; // x20
  __int64 v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  unsigned __int64 v14; // x21

  if ( (byte_4BCA3D0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BCA3D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v10->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_1C1AE30(Instance, v7);
  }
  v12 = *(_QWORD *)&funcId->max_length;
  if ( (int)v12 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
        sub_1C1AE38(Instance, v7);
      if ( !v13 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   funcId->m_Items[v14 + 1],
                   (const MethodInfo_3248678 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance[1].monitor) == 27 )
          break;
      }
      LODWORD(v12) = funcId->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_15;
    }
    LOBYTE(Entity) = 1;
  }
  return (char)Entity;
}


System_Int32_array *__fastcall BattleSkillInfoData__GetAddIndiv(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4BCA3D1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BCA3D1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object)
    || (Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                      (SkillLvMaster_o *)MasterData_object,
                                      (int32_t)Instance,
                                      this->fields.skilllv,
                                      0LL)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return SkillLvEntity__GetAddIndiv((SkillLvEntity_o *)Instance, 0LL);
}


int32_t __fastcall BattleSkillInfoData__GetCondItemId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  __int64 v4; // x1
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1C1AE30(HasCond, v4);
  return commonReleaseEntity->fields.condId;
}


int32_t __fastcall BattleSkillInfoData__GetCondItemNumber(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  __int64 v4; // x1
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1C1AE30(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


System_String_o *__fastcall BattleSkillInfoData__GetEnemyCountChangeMessage(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3E4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    byte_4BCA3E4 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                         this,
                         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)v6,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    v6 = entity;
    if ( entity )
      return SkillEntity__GetEnemyCountChangeMessage((SkillEntity_o *)entity, 0LL);
LABEL_11:
    sub_1C1AE30(v6, v7);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleSkillInfoData__GetFieldCallEffectId(
        BattleSkillInfoData_o *this,
        bool isBefore,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3DC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, isBefore);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCA3DC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_1C1AE30(Instance, v8);
  }
  return -1;
}


BattleSkillInfoData_array *__fastcall BattleSkillInfoData__GetLoadArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x20
  __int64 v13; // x0

  if ( (byte_4BCA3D4 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleSkillInfoData___TypeInfo, method);
    byte_4BCA3D4 = 1;
  }
  v3 = sub_1C1AC7C(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_1C1AE30(0LL, v4);
  v11 = v3;
  if ( this )
  {
    v3 = sub_1C1AD10(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v13 = sub_1C1AE54(0LL);
      sub_1C1ACFC(v13, 0LL);
    }
  }
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1C1AE38(v3, v4);
  *(_QWORD *)(v11 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)this, v5, v6, v7, v8, v9, v10);
  return (BattleSkillInfoData_array *)v11;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v8; // x0
  System_Func_object__int__o *_9__91_0; // x20
  Il2CppObject *v10; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BCA3E0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Max_DataVals___, method);
    sub_1C1ABD4(&System_Func_DataVals__int__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__, v4);
    sub_1C1ABD4(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4BCA3E0 = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v8 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v8 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__91_0 = (System_Func_object__int__o *)v8->static_fields->__9__91_0;
  if ( !_9__91_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleSkillInfoData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__91_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__91_0,
      v10,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__91_0 = (struct System_Func_DataVals__int__o *)_9__91_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__91_0,
      (int64_t)_9__91_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__91_0,
           (const MethodInfo_2FC721C *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4BCA3DB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BCA3DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object) )
  {
    sub_1C1AE30(Instance, v5);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
}


bool __fastcall BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Nullable_bool__o *v8; // x0
  int32_t commonReleaseCondId; // w8
  CommonReleaseEntity_array *Instance; // x0
  __int64 v11; // x1
  CommonReleaseEntity_array *v12; // x21
  CommonReleaseEntity_o *v13; // x8
  struct System_Nullable_bool__o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct CommonReleaseEntity_o *v23; // x1
  struct System_Nullable_bool__o v24; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v25; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v26; // 0:w0.2

  if ( (byte_4BCA3D7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C1ABD4(&Method_System_Nullable_bool___ctor__, v3);
    sub_1C1ABD4(&Method_System_Nullable_bool__get_HasValue__, v4);
    sub_1C1ABD4(&Method_System_Nullable_bool__get_Value__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCA3D7 = 1;
  }
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v8 = &v25;
    v25 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_3754F04 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v25;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0LL);
      if ( !Instance )
        goto LABEL_14;
      v12 = Instance;
      if ( Instance->max_length != 1 )
        goto LABEL_4;
      v13 = Instance->m_Items[0];
      if ( !v13 )
LABEL_14:
        sub_1C1AE30(Instance, v11);
      if ( v13->fields.condType == 2 )
      {
        v14 = &v24;
        v24 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v14,
          1,
          (const MethodInfo_3754F04 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v24;
        if ( !v12->max_length )
          sub_1C1AE38(v15, v16);
        v23 = v12->m_Items[0];
        this->fields.commonReleaseEntity = v23;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.commonReleaseEntity,
          (int64_t)v23,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
    }
  }
LABEL_4:
  v26 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v26, (const MethodInfo_3754F20 *)Method_System_Nullable_bool__get_Value__);
}


bool __fastcall BattleSkillInfoData__IsAvailable(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.sealedTurn + this->fields.chargeTurn <= 0 && BattleSkillInfoData__IsOpenCond(this, method);
}


bool __fastcall BattleSkillInfoData__IsChangeable(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleSkillInfoData__IsExistVoiceSetting(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL)
      && !System_String__IsNullOrEmpty(this->fields.voiceNumber, 0LL);
}


bool __fastcall BattleSkillInfoData__IsOpenCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BCA3D8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BCA3D8 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v5);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0LL, 0, 0LL);
}


bool __fastcall BattleSkillInfoData__IsPassive(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 10) > 0x10 )
    LOBYTE(v2) = 0;
  else
    return (0x1C001u >> (type - 10)) & 1;
  return v2;
}


bool __fastcall BattleSkillInfoData__IsReplacePassiveTypeOnTransform(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 10) > 0x10 )
    LOBYTE(v2) = 0;
  else
    return (0x14001u >> (type - 10)) & 1;
  return v2;
}


bool __fastcall BattleSkillInfoData__IsSelectedAddTargetIndex(
        BattleSkillInfoData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  if ( !dataVal )
    sub_1C1AE30(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 124, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v11; // x8
  bool v12; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  unsigned __int64 v14; // x22

  if ( (byte_4BCA3CF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1C1ABD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BCA3CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !Entity )
    goto LABEL_16;
  funcId = Entity->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  v11 = *(_QWORD *)&funcId->max_length;
  v12 = (int)v11 > 0;
  if ( (int)v11 >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v11 )
        sub_1C1AE38(Instance, v7);
      if ( !v13 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   funcId->m_Items[v14 + 1],
                   (const MethodInfo_3248678 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !Instance || HIDWORD(Instance[1].monitor) != 4 )
      {
        LODWORD(v11) = funcId->max_length;
        v12 = (__int64)++v14 < (int)v11;
        if ( (__int64)v14 < (int)v11 )
          continue;
      }
      return v12;
    }
LABEL_16:
    sub_1C1AE30(Instance, v7);
  }
  return v12;
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BCA3DA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BCA3DA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_SkillMaster___);
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1C1AE30(v5, v6);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v5, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  _QWORD *v7; // x8

  if ( (byte_4BCA3D6 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleMasterSkillInfoData_TypeInfo, method);
    sub_1C1ABD4(&BattleSelfSkillInfoData_TypeInfo, v3);
    sub_1C1ABD4(&BattleSkillInfoData_TypeInfo, v4);
    byte_4BCA3D6 = 1;
  }
  if ( type == 1 )
  {
    v7 = &BattleMasterSkillInfoData_TypeInfo;
LABEL_8:
    v5 = sub_1C1AE20(*v7);
    *(_DWORD *)(v5 + 64) = -1;
    *(_QWORD *)(v5 + 88) = -1LL;
    *(_QWORD *)(v5 + 96) = -1LL;
    *(_DWORD *)(v5 + 104) = -1;
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    return (BattleSkillInfoData_o *)v5;
  }
  if ( type != 11 )
  {
    v7 = &BattleSkillInfoData_TypeInfo;
    goto LABEL_8;
  }
  v5 = sub_1C1AE20(BattleSelfSkillInfoData_TypeInfo);
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)v5, v6);
  return (BattleSkillInfoData_o *)v5;
}


BaseMotionSkip_o *__fastcall BattleSkillInfoData__MakeSkillSkip(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return 0LL;
}


void __fastcall BattleSkillInfoData__PreAddProcess(
        BattleSkillInfoData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillInfoData__PreLoad(BattleSkillInfoData_o *this, bool dlOnly, const MethodInfo *method)
{
  __int64 v5; // x1
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v7; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantAssetLoadManager_o *v9; // x19
  unsigned __int64 v10; // x22
  bool v11; // w20
  BattleSkillInfoData_o *v12; // x21

  if ( (byte_4BCA3D2 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4BCA3D2 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._10_GetLoadArray.method)(
                                            this,
                                            this->klass->vtable._11_PreAddProcess.methodPtr,
                                            method);
  if ( !Instance )
    goto LABEL_13;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v9 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0LL;
    v11 = dlOnly;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)m_CancellationTokenSource )
        sub_1C1AE38(Instance, v7);
      v12 = (BattleSkillInfoData_o *)*((_QWORD *)&v9->fields.svtmaster + v10);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadSkillAnyVoice(v12, v11, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v12, 0LL);
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1C1AE30(Instance, v7);
  }
}


void __fastcall BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleSkillInfoData___c_c *v6; // x0
  System_Func_object__int__o *_9__92_0; // x20
  Il2CppObject *v8; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BCA3E1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_StableSort_BattleSkillInfoData___, method);
    sub_1C1ABD4(&System_Func_BattleSkillInfoData__int__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleSkillInfoData___c__SortSkill_b__92_0__, v4);
    sub_1C1ABD4(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4BCA3E1 = 1;
  }
  if ( skillList )
  {
    v6 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v6 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__92_0 = (System_Func_object__int__o *)v6->static_fields->__9__92_0;
    if ( !_9__92_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleSkillInfoData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__92_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(_9__92_0, v8, Method_BattleSkillInfoData___c__SortSkill_b__92_0__, 0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__92_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__92_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__92_0,
        (int64_t)_9__92_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__92_0,
      0,
      (const MethodInfo_2F8F0E0 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x21
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x21
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x21
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x21
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x21
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x21
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x21
  __int64 v120; // x2
  __int64 v121; // x3
  __int64 v122; // x4
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x21
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int64_t v139; // x19
  __int64 v141; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  char v145[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t chargeTurn; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v149; // [xsp+28h] [xbp-48h] BYREF
  char v150[4]; // [xsp+2Ch] [xbp-44h] BYREF
  char v151[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4BCA3C4 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, method);
    sub_1C1ABD4(&int_TypeInfo, v3);
    sub_1C1ABD4(&object___TypeInfo, v4);
    sub_1C1ABD4(&BattleSkillInfoData_TYPE_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_16170/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v6);
    byte_4BCA3C4 = 1;
  }
  v7 = (System_Object_array *)sub_1C1AC7C(object___TypeInfo, 13LL);
  type = this->fields.type;
  v11 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type, v8, v9, v10);
  if ( !v7 )
    sub_1C1AE30(v11, v12);
  v19 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( !v7->max_length )
    goto LABEL_44;
  v7->m_Items[0] = (Il2CppObject *)v19;
  sub_1C1AB78((PartyOrganizationUtility_o *)v7->m_Items, v19, v13, v14, v15, v16, v17, v18);
  index = this->fields.index;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &index, v20, v21, v22);
  v29 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_44;
  v7->m_Items[1] = (Il2CppObject *)v29;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
  svtUniqueId = this->fields.svtUniqueId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId, v30, v31, v32);
  v39 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_44;
  v7->m_Items[2] = (Il2CppObject *)v39;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v151[0] = this->fields.isPassive;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v151, v40, v41, v42);
  v49 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_44;
  v7->m_Items[3] = (Il2CppObject *)v49;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
  v150[0] = this->fields.isCharge;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v150, v50, v51, v52);
  v59 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 4 )
    goto LABEL_44;
  v7->m_Items[4] = (Il2CppObject *)v59;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[4], v59, v53, v54, v55, v56, v57, v58);
  v149 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v149, v60, v61, v62);
  v69 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 5 )
    goto LABEL_44;
  v7->m_Items[5] = (Il2CppObject *)v69;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[5], v69, v63, v64, v65, v66, v67, v68);
  skilllv = this->fields.skilllv;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v70, v71, v72);
  v79 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 6 )
    goto LABEL_44;
  v7->m_Items[6] = (Il2CppObject *)v79;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[6], v79, v73, v74, v75, v76, v77, v78);
  chargeTurn = this->fields.chargeTurn;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v80, v81, v82);
  v89 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 7 )
    goto LABEL_44;
  v7->m_Items[7] = (Il2CppObject *)v89;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[7], v89, v83, v84, v85, v86, v87, v88);
  priority = this->fields.priority;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &priority, v90, v91, v92);
  v99 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 8 )
    goto LABEL_44;
  v7->m_Items[8] = (Il2CppObject *)v99;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[8], v99, v93, v94, v95, v96, v97, v98);
  v145[0] = this->fields.isUseSkill;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v145, v100, v101, v102);
  v109 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 9 )
    goto LABEL_44;
  v7->m_Items[9] = (Il2CppObject *)v109;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[9], v109, v103, v104, v105, v106, v107, v108);
  strengthStatus = this->fields.strengthStatus;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus, v110, v111, v112);
  v119 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xA )
    goto LABEL_44;
  v7->m_Items[10] = (Il2CppObject *)v119;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[10], v119, v113, v114, v115, v116, v117, v118);
  itemImageId = this->fields.itemImageId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId, v120, v121, v122);
  v129 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xB )
    goto LABEL_44;
  v7->m_Items[11] = (Il2CppObject *)v129;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[11], v129, v123, v124, v125, v126, v127, v128);
  changeTDCommandType = this->fields.changeTDCommandType;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType, v130, v131, v132);
  v139 = v11;
  if ( v11 )
  {
    v11 = sub_1C1AD10(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_45:
      v141 = sub_1C1AE54(v11);
      sub_1C1ACFC(v141, 0LL);
    }
  }
  if ( v7->max_length <= 0xC )
LABEL_44:
    sub_1C1AE38(v11, v12);
  v7->m_Items[12] = (Il2CppObject *)v139;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v7->m_Items[12], v139, v133, v134, v135, v136, v137, v138);
  return System_String__Format_63054876((System_String_o *)StringLiteral_16170/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillInfoData__TurnExtend(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  System_Int32_array *v11; // x23
  int32_t v13; // w8
  bool v14; // w9

  if ( (byte_4BCA3CE & 1) == 0 )
  {
    sub_1C1ABD4(&Individuality_TypeInfo, *(_QWORD *)&turnCount);
    byte_4BCA3CE = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v11 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( !Individuality__CheckSignedIndividualities(v11, targetList, 0LL)
    || this->fields.isPassive
    || !this->fields.isUseSkill )
  {
    return 0;
  }
  v13 = this->fields.chargeTurn + turnCount;
  v14 = this->fields.sealedTurn + v13 < 1;
  this->fields.chargeTurn = v13;
  this->fields.isCharge = v14;
  if ( v13 > max )
    this->fields.chargeTurn = max;
  return 1;
}


void __fastcall BattleSkillInfoData__TurnExtendForDelay(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        const MethodInfo *method)
{
  int32_t v4; // w8
  bool v5; // w9

  if ( !this->fields.isPassive )
  {
    v4 = this->fields.sealedTurn + turnCount;
    v5 = this->fields.chargeTurn + v4 < 1;
    this->fields.sealedTurn = v4;
    this->fields.isCharge = v5;
    if ( v4 > max )
      this->fields.sealedTurn = max;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillInfoData__TurnProgress(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  System_Int32_array *v11; // x23
  bool result; // w0
  int32_t chargeTurn; // w9
  int sealedTurn; // w8

  if ( (byte_4BCA3CD & 1) == 0 )
  {
    sub_1C1ABD4(&Individuality_TypeInfo, *(_QWORD *)&turnCount);
    byte_4BCA3CD = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v11 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( !Individuality__CheckSignedIndividualities(v11, targetList, 0LL) )
    return 0;
  if ( this->fields.isPassive )
    return 0;
  chargeTurn = this->fields.chargeTurn;
  sealedTurn = this->fields.sealedTurn;
  if ( sealedTurn + chargeTurn < 1 )
    return 0;
  if ( sealedTurn < 1 )
  {
    chargeTurn -= turnCount;
    this->fields.chargeTurn = chargeTurn;
    if ( (sealedTurn & 0x80000000) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  sealedTurn -= turnCount;
  this->fields.sealedTurn = sealedTurn;
  if ( (sealedTurn & 0x80000000) != 0 )
  {
LABEL_13:
    sealedTurn = 0;
    this->fields.sealedTurn = 0;
  }
LABEL_14:
  if ( chargeTurn < max )
  {
    chargeTurn = max;
    this->fields.chargeTurn = max;
  }
  result = 1;
  this->fields.isCharge = sealedTurn + chargeTurn < 1;
  return result;
}


void __fastcall BattleSkillInfoData__UnLoad(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x19
  unsigned __int64 v7; // x21
  BattleSkillInfoData_o *v8; // x20

  if ( (byte_4BCA3D3 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantAssetLoadManager_TypeInfo, method);
    byte_4BCA3D3 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_1C1AE30(0LL, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1C1AE38(v3, v4);
      v8 = *(BattleSkillInfoData_o **)(v6 + 32 + 8 * v7);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadSkillAnyVoice(v8, 0LL);
      LODWORD(v5) = *(_DWORD *)(v6 + 24);
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
  }
}


void __fastcall BattleSkillInfoData__UpdateSelectAddIndex(
        BattleSkillInfoData_o *this,
        int32_t selIndex,
        const MethodInfo *method)
{
  this->fields._SelectAddIndex_k__BackingField = selIndex;
}


void __fastcall BattleSkillInfoData__UseSkill(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleSkillInfoData__checkSkillCharge(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  this->fields.isCharge = this->fields.sealedTurn + this->fields.chargeTurn < 1;
}


int32_t __fastcall BattleSkillInfoData__getChargeTurn(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.sealedTurn + this->fields.chargeTurn;
}


int32_t __fastcall BattleSkillInfoData__getCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t result; // w0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BCA3C5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3C5 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                   this,
                                   this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          result = 0;
          goto LABEL_10;
        }
        Instance = entity;
        if ( entity )
        {
          result = SkillEntity__getSkillCutInId((SkillEntity_o *)entity, 0LL);
LABEL_10:
          this->fields.cutInId = result;
          return result;
        }
      }
    }
    sub_1C1AE30(Instance, v7);
  }
  return result;
}


int32_t __fastcall BattleSkillInfoData__getInfoId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.index + 100 * this->fields.type;
}


int32_t __fastcall BattleSkillInfoData__getLossCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3D9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3D9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1C1AE30(Instance, v6);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3CB & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3CB = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C1AE30(Instance, v6);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3CA & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3CA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C1AE30(Instance, v6);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3CC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3CC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1C1AE30(Instance, v6);
  }
  return 0;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3C7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3C7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1C1AE30(Instance, v6);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3C8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3C8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1C1AE30(Instance, v6);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3C9 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3C9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1C1AE30(Instance, v6);
  }
  return 0LL;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInVoices(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCA3C6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BCA3C6 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1C1AE30(Instance, v6);
  }
  return 0LL;
}


DataVals_array *__fastcall BattleSkillInfoData__get_DataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  long double inited; // q0
  DataVals_array *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4BCA3DD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_DataVals___, method);
    byte_4BCA3DD = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v6 = Method_System_Array_Empty_DataVals___;
    v7 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v7 )
    {
      sub_1C6CB0C(Method_System_Array_Empty_DataVals___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6CAB0(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6CAB0(inited);
    return **(DataVals_array ***)(v9 + 184);
  }
  return result;
}


System_Int32_array *__fastcall BattleSkillInfoData__get_IndividualityArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array **p_individualityArray; // x19
  struct System_Int32_array *individualityArray; // x21
  int32_t v5; // w0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0LL);
    this->fields.individualityArray = individualityArray;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)p_individualityArray,
      (int64_t)individualityArray,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return individualityArray;
}


bool __fastcall BattleSkillInfoData__get_IsContainedBattlePointFunc(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v8; // x8
  System_Func_object__bool__o *_9__94_0; // x20
  Il2CppObject *v10; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BCA3E2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_DataVals___, method);
    sub_1C1ABD4(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__, v4);
    sub_1C1ABD4(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4BCA3E2 = 1;
  }
  if ( this->fields.type == 2 )
    return 0;
  DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, method);
  v8 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v8 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__94_0 = (System_Func_object__bool__o *)v8->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleSkillInfoData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__94_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__94_0,
      v10,
      Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_DataVals__bool__o *)_9__94_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__94_0,
      (int64_t)_9__94_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return BasicHelper__Any_object__49849512(
           DataValArray,
           (System_Func_T__bool__o *)_9__94_0,
           (const MethodInfo_2F8A4A8 *)Method_BasicHelper_Any_DataVals___);
}


bool __fastcall BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v8; // x8
  System_Func_object__bool__o *_9__96_0; // x20
  Il2CppObject *v10; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BCA3E3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_DataVals___, method);
    sub_1C1ABD4(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1C1ABD4(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__, v4);
    sub_1C1ABD4(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4BCA3E3 = 1;
  }
  if ( this->fields.type == 2 || !BattleSkillInfoData__get_IsContainedBattlePointFunc(this, method) )
  {
    return 0;
  }
  else
  {
    DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, v6);
    v8 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v8 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__96_0 = (System_Func_object__bool__o *)v8->static_fields->__9__96_0;
    if ( !_9__96_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = BattleSkillInfoData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__96_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__96_0,
        v10,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__,
        0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__96_0 = (struct System_Func_DataVals__bool__o *)_9__96_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__96_0,
        (int64_t)_9__96_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    return !BasicHelper__Any_object__49849512(
              DataValArray,
              (System_Func_T__bool__o *)_9__96_0,
              (const MethodInfo_2F8A4A8 *)Method_BasicHelper_Any_DataVals___);
  }
}


int32_t __fastcall BattleSkillInfoData__get_SelectAddIndex(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._SelectAddIndex_k__BackingField;
}


DataVals_array *__fastcall BattleSkillInfoData__get_ValidDataValArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *DataValArray; // x20
  System_Func_object__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4BCA3DE & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_DataVals___, v3);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_1C1ABD4(&System_Func_DataVals__bool__TypeInfo, v5);
    byte_4BCA3DE = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v7 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_DataVals__bool__TypeInfo);
  System_Func_object__bool____ctor(v7, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0LL);
  v8 = System_Linq_Enumerable__Where_object_(
         DataValArray,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v8,
                             (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *__fastcall BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataVals_array *ValidDataValArray; // x0
  BattleSkillInfoData___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__int__o *_9__90_0; // x20
  Il2CppObject *v11; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4BCA3DF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1C1ABD4(&System_Func_DataVals__int__TypeInfo, v4);
    sub_1C1ABD4(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__, v5);
    sub_1C1ABD4(&BattleSkillInfoData___c_TypeInfo, v6);
    byte_4BCA3DF = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v8 = BattleSkillInfoData___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v8 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__90_0 = (System_Func_object__int__o *)v8->static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleSkillInfoData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__90_0 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__90_0,
      v11,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__90_0 = (struct System_Func_DataVals__int__o *)_9__90_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__90_0,
      (int64_t)_9__90_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__90_0,
                                                               (const MethodInfo_2FD0368 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleSkillInfoData__get_skillId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._skillId;
}


bool __fastcall BattleSkillInfoData__isChargeOK(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.sealedTurn + this->fields.chargeTurn < 1;
}


bool __fastcall BattleSkillInfoData__isItemIcon(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.itemImageId != -1;
}


bool __fastcall BattleSkillInfoData__isServantSkill(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  unsigned int v2; // w8
  _BOOL4 v3; // w0

  v2 = this->fields.type - 10;
  if ( v2 > 0x10 )
    LOBYTE(v3) = 0;
  else
    return (0x1C007u >> v2) & 1;
  return v3;
}


void __fastcall BattleSkillInfoData__set_SelectAddIndex(
        BattleSkillInfoData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SelectAddIndex_k__BackingField = value;
}


void __fastcall BattleSkillInfoData__set_skillId(BattleSkillInfoData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._skillId = value;
}


void __fastcall BattleSkillInfoData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCA3E5 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleSkillInfoData___c_TypeInfo, v1);
    byte_4BCA3E5 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleSkillInfoData___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__91_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return DataVals__GetParam(x, 124, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___SortSkill_b__92_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.priority;
}


bool __fastcall BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__94_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.funcType == 142;
}


bool __fastcall BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__96_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.funcType != 142;
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__90_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.targetType;
}