void BattleSkillInfoData___ctor(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  this->fields.itemImageId = -1;
  *(_QWORD *)&this->fields.cutInId = -1;
  *(_QWORD *)&this->fields.commonReleaseCondId = -1;
  this->fields._SelectAddIndex_k__BackingField = -1;
  this->fields.canExecSkill = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BaseMotionSkip_o *BattleSkillInfoData__CommonMakeSkillSkip(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  __int64 v4; // x0
  SkillMotionSkip_o *v5; // x19

  if ( (byte_4C45D02 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&SkillMotionSkip_TypeInfo);
    byte_4C45D02 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
         this,
         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    sub_1C372B4(v4);
  v5 = 0;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v4, 0) )
  {
    v5 = (SkillMotionSkip_o *)sub_1C372A4(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v5, 0);
  }
  return (BaseMotionSkip_o *)v5;
}


bool BattleSkillInfoData__DoesCutInWorkAsEnemyCommandSpell(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C45CF8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return SkillEntity__DoesCutInWorkAsEnemyCommandSpell((SkillEntity_o *)Instance, 0);
}


bool BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v6; // x19
  struct System_Int32_array *funcId; // x20
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  unsigned __int64 v10; // x21

  if ( (byte_4C45CFD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CFD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
  if ( !Entity )
    return (char)Entity;
  v6 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v6->fields.funcId) == 0) )
  {
LABEL_18:
    sub_1C372B4(Instance);
  }
  max_length = funcId->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      if ( !v9 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v9,
                   funcId->m_Items[v10],
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance[1].monitor) == 27 )
          break;
      }
      LODWORD(max_length) = funcId->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_15;
    }
    LOBYTE(Entity) = 1;
  }
  return (char)Entity;
}


System_Int32_array *BattleSkillInfoData__GetAddIndiv(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C45CFE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CFE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                      this,
                                      this->klass->vtable._5_get_skillId.method),
        !MasterData_object)
    || (Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                      (SkillLvMaster_o *)MasterData_object,
                                      (int32_t)Instance,
                                      this->fields.skilllv,
                                      0)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return SkillLvEntity__GetAddIndiv((SkillLvEntity_o *)Instance, 0);
}


int32_t BattleSkillInfoData__GetCondItemId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1C372B4(HasCond);
  return commonReleaseEntity->fields.condId;
}


int32_t BattleSkillInfoData__GetCondItemNumber(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1C372B4(HasCond);
  return commonReleaseEntity->fields.condNum;
}


System_String_o *BattleSkillInfoData__GetEnemyCountChangeMessage(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  Il2CppObject *v4; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45D13 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4C45D13 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                         this,
                         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)v4,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    v4 = entity;
    if ( entity )
      return SkillEntity__GetEnemyCountChangeMessage((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_1C372B4(v4);
  }
  return 0;
}


int32_t BattleSkillInfoData__GetFieldCallEffectId(BattleSkillInfoData_o *this, bool isBefore, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45D0A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45D0A = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0);
LABEL_9:
    sub_1C372B4(Instance);
  }
  return -1;
}


BattleSkillInfoData_array *BattleSkillInfoData__GetLoadArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  __int64 v8; // x0

  if ( (byte_4C45D01 & 1) == 0 )
  {
    sub_1C37058(&BattleSkillInfoData___TypeInfo);
    byte_4C45D01 = 1;
  }
  v3 = sub_1C37100(BattleSkillInfoData___TypeInfo, 1);
  if ( !v3 )
    sub_1C372B4(0);
  v6 = v3;
  if ( this )
  {
    v3 = sub_1C37194(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v8 = sub_1C372D8(0);
      sub_1C37180(v8, 0);
    }
  }
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C372BC(v3);
  *(_QWORD *)(v6 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)this, v4, v5);
  return (BattleSkillInfoData_array *)v6;
}


int32_t BattleSkillInfoData__GetMaxSelectAddIndexBySkill(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x0
  System_Func_object__int__o *_9__103_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C45D0F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Max_DataVals___);
    sub_1C37058(&System_Func_DataVals__int__TypeInfo);
    sub_1C37058(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__103_0__);
    sub_1C37058(&BattleSkillInfoData___c_TypeInfo);
    byte_4C45D0F = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0) )
    return -1;
  v5 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v5 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__103_0 = (System_Func_object__int__o *)v5->static_fields->__9__103_0;
  if ( !_9__103_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleSkillInfoData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__103_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__103_0,
      v7,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__103_0__,
      0);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__103_0 = (struct System_Func_DataVals__int__o *)_9__103_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__103_0, (int32_t)_9__103_0, v9, v10);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__103_0,
           (const MethodInfo_3115F88 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillEntity_o *BattleSkillInfoData__GetSelfSkillEntity(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C45D08 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45D08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object) )
  {
    sub_1C372B4(Instance);
  }
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            (int32_t)Instance,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


SkillLvEntity_o *BattleSkillInfoData__GetSelfSkillLvEntity(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C45D09 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45D09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object) )
  {
    sub_1C372B4(Instance);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
}


bool BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Nullable_bool__o v3; // w0
  struct System_Nullable_bool__o *v5; // x0
  int32_t commonReleaseCondId; // w8
  CommonReleaseEntity_array *Instance; // x0
  CommonReleaseEntity_array *v8; // x21
  CommonReleaseEntity_o *v9; // x8
  struct System_Nullable_bool__o *v10; // x0
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct CommonReleaseEntity_o *v14; // x1
  struct System_Nullable_bool__o v15; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C45D04 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C37058(&Method_System_Nullable_bool___ctor__);
    sub_1C37058(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_bool__get_Value__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45D04 = 1;
  }
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v5 = &v16;
    v16 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v5,
      0,
      (const MethodInfo_38C5044 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v16;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0);
      if ( !Instance )
        goto LABEL_14;
      v8 = Instance;
      if ( LODWORD(Instance->max_length) != 1 )
        goto LABEL_4;
      v9 = Instance->m_Items[0];
      if ( !v9 )
LABEL_14:
        sub_1C372B4(Instance);
      if ( v9->fields.condType == 2 )
      {
        v10 = &v15;
        v15 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v10,
          1,
          (const MethodInfo_38C5044 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v15;
        if ( !LODWORD(v8->max_length) )
          sub_1C372BC(v11);
        v14 = v8->m_Items[0];
        this->fields.commonReleaseEntity = v14;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.commonReleaseEntity, (int32_t)v14, v12, v13);
      }
    }
  }
LABEL_4:
  v3 = (System_Nullable_bool__o)((_WORD)this + 168);
  return System_Nullable_bool___get_Value(v3, (const MethodInfo_38C5060 *)Method_System_Nullable_bool__get_Value__);
}


bool BattleSkillInfoData__IsAvailable(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return (int)(this->fields.sealedTurn
             + ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
                 this,
                 this->klass->vtable._6_get_chargeTurn.method)) <= 0
      && BattleSkillInfoData__IsOpenCond(this, v3)
      && this->fields.canExecSkill;
}


bool BattleSkillInfoData__IsChangeable(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return 0;
}


bool BattleSkillInfoData__IsExistBranchSkillInfo(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)this->fields._BranchSkillInfos_k__BackingField,
            0);
}


bool BattleSkillInfoData__IsExistVoiceSetting(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0)
      && !System_String__IsNullOrEmpty(this->fields.voiceNumber, 0);
}


bool BattleSkillInfoData__IsOpenCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C45D05 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45D05 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0, 0, 0);
}


bool BattleSkillInfoData__IsPassive(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 10) > 0x10 )
    LOBYTE(v2) = 0;
  else
    return (0x1C001u >> (type - 10)) & 1;
  return v2;
}


bool BattleSkillInfoData__IsReplacePassiveTypeOnTransform(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 10) > 0x10 )
    LOBYTE(v2) = 0;
  else
    return (0x14001u >> (type - 10)) & 1;
  return v2;
}


bool BattleSkillInfoData__IsSelectServant(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Int32_array *ValidTargetTypeArray; // x0
  System_Collections_ICollection_o *BranchSkillInfos_k__BackingField; // x8
  System_Int32_array *v5; // x19
  bool v6; // w1
  const MethodInfo *v7; // x2

  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(this, method);
  BranchSkillInfos_k__BackingField = (System_Collections_ICollection_o *)this->fields._BranchSkillInfos_k__BackingField;
  v5 = ValidTargetTypeArray;
  v6 = !BasicHelper__IsNullOrEmpty(BranchSkillInfos_k__BackingField, 0);
  return BattleSkillInfoData__IsSelectServant_46382548(v5, v6, v7);
}


bool BattleSkillInfoData__IsSelectServant_46382548(
        System_Int32_array *validTargetTypeArray,
        bool isExistBranchSkillInfo,
        const MethodInfo *method)
{
  System_Func_int__bool__o *v5; // x21

  if ( (byte_4C45D0E & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int____78107944);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_Target_isChoose__);
    byte_4C45D0E = 1;
  }
  v5 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v5, 0, Method_Target_isChoose__, 0);
  return BasicHelper__Any_int__51187064(
           validTargetTypeArray,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_30D0D78 *)Method_BasicHelper_Any_int____78107944)
      || isExistBranchSkillInfo;
}


bool BattleSkillInfoData__IsSelectedAddTargetIndex(
        BattleSkillInfoData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  param = 0;
  if ( !dataVal )
    sub_1C372B4(this);
  return !DataVals__TryGetParam(dataVal, 125, &param, 0) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  il2cpp_array_size_t max_length; // x8
  bool v8; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  unsigned __int64 v10; // x22

  if ( (byte_4C45CFC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CFC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !Entity )
    goto LABEL_16;
  funcId = Entity->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  max_length = funcId->max_length;
  v8 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      if ( !v9 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v9,
                   funcId->m_Items[v10],
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !Instance || HIDWORD(Instance[1].monitor) != 4 )
      {
        LODWORD(max_length) = funcId->max_length;
        v8 = (__int64)++v10 < (int)max_length;
        if ( (__int64)v10 < (int)max_length )
          continue;
      }
      return v8;
    }
LABEL_16:
    sub_1C372B4(Instance);
  }
  return v8;
}


bool BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  __int64 v4; // x0

  if ( (byte_4C45D07 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C45D07 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
         this,
         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    sub_1C372B4(v4);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v4, 0);
}


BattleSkillInfoData_o *BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x1
  _QWORD *v5; // x8

  if ( (byte_4C45D03 & 1) == 0 )
  {
    sub_1C37058(&BattleMasterSkillInfoData_TypeInfo);
    sub_1C37058(&BattleSelfSkillInfoData_TypeInfo);
    sub_1C37058(&BattleSkillInfoData_TypeInfo);
    byte_4C45D03 = 1;
  }
  if ( type == 1 )
  {
    v5 = &BattleMasterSkillInfoData_TypeInfo;
LABEL_8:
    v3 = sub_1C372A4(*v5);
    *(_DWORD *)(v3 + 64) = -1;
    *(_QWORD *)(v3 + 88) = -1;
    *(_QWORD *)(v3 + 96) = -1;
    *(_DWORD *)(v3 + 104) = -1;
    *(_BYTE *)(v3 + 152) = 1;
    System_Object___ctor((Il2CppObject *)v3, 0);
    return (BattleSkillInfoData_o *)v3;
  }
  if ( type != 11 )
  {
    v5 = &BattleSkillInfoData_TypeInfo;
    goto LABEL_8;
  }
  v3 = sub_1C372A4(BattleSelfSkillInfoData_TypeInfo);
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)v3, v4);
  return (BattleSkillInfoData_o *)v3;
}


BaseMotionSkip_o *BattleSkillInfoData__MakeSkillSkip(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return 0;
}


void BattleSkillInfoData__PreAddProcess(
        BattleSkillInfoData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  ;
}


void BattleSkillInfoData__PreLoad(BattleSkillInfoData_o *this, bool dlOnly, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantAssetLoadManager_o *v7; // x19
  unsigned __int64 v8; // x22
  bool v9; // w20
  BattleSkillInfoData_o *v10; // x21

  if ( (byte_4C45CFF & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C45CFF = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._12_GetLoadArray.methodPtr)(
                                            this,
                                            this->klass->vtable._12_GetLoadArray.method,
                                            method);
  if ( !Instance )
    goto LABEL_13;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v7 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    v9 = dlOnly;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1C372BC(Instance);
      v10 = (BattleSkillInfoData_o *)*((_QWORD *)&v7->fields.svtmaster + v8);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadSkillAnyVoice(v10, v9, 0);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v10, 0);
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1C372B4(Instance);
  }
}


void BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  BattleSkillInfoData___c_c *v3; // x0
  System_Func_object__int__o *_9__104_0; // x20
  Il2CppObject *v5; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C45D10 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_StableSort_BattleSkillInfoData___);
    sub_1C37058(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1C37058(&Method_BattleSkillInfoData___c__SortSkill_b__104_0__);
    sub_1C37058(&BattleSkillInfoData___c_TypeInfo);
    byte_4C45D10 = 1;
  }
  if ( skillList )
  {
    v3 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v3 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__104_0 = (System_Func_object__int__o *)v3->static_fields->__9__104_0;
    if ( !_9__104_0 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = BattleSkillInfoData___c_TypeInfo;
      }
      v5 = (Il2CppObject *)v3->static_fields->__9;
      _9__104_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(_9__104_0, v5, Method_BattleSkillInfoData___c__SortSkill_b__104_0__, 0);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__104_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__104_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__104_0, (int32_t)_9__104_0, v7, v8);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__104_0,
      0,
      (const MethodInfo_30D7280 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x21
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x21
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x21
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x21
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  __int64 v80; // x5
  __int64 v81; // x6
  __int64 v82; // x7
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  Il2CppObject *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  __int64 v89; // x5
  __int64 v90; // x6
  __int64 v91; // x7
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x21
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  __int64 v98; // x5
  __int64 v99; // x6
  __int64 v100; // x7
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  Il2CppObject *v103; // x21
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  __int64 v107; // x5
  __int64 v108; // x6
  __int64 v109; // x7
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  Il2CppObject *v112; // x21
  __int64 v113; // x2
  __int64 v114; // x3
  __int64 v115; // x4
  __int64 v116; // x5
  __int64 v117; // x6
  __int64 v118; // x7
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  Il2CppObject *v121; // x19
  __int64 v123; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  bool v127[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int v129; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v131; // [xsp+28h] [xbp-48h] BYREF
  bool v132[4]; // [xsp+2Ch] [xbp-44h] BYREF
  bool v133[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4C45CF0 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&BattleSkillInfoData_TYPE_TypeInfo);
    sub_1C37058(&StringLiteral_15897/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/);
    byte_4C45CF0 = 1;
  }
  v3 = (System_Object_array *)sub_1C37100(object___TypeInfo, 13);
  type = this->fields.type;
  v10 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type, v4, v5, v6, v7, v8, v9);
  if ( !v3 )
    sub_1C372B4(v10);
  v13 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_44;
  v3->m_Items[0] = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v13, v11, v12);
  index = this->fields.index;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &index, v14, v15, v16, v17, v18, v19);
  v22 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_44;
  v3->m_Items[1] = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v22, v20, v21);
  svtUniqueId = this->fields.svtUniqueId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_44;
  v3->m_Items[2] = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v31, v29, v30);
  v133[0] = this->fields.isPassive;
  v10 = j_il2cpp_value_box_0(bool_TypeInfo, v133, v32, v33, v34, v35, v36, v37);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 3 )
    goto LABEL_44;
  v3->m_Items[3] = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v40, v38, v39);
  v132[0] = this->fields.isCharge;
  v10 = j_il2cpp_value_box_0(bool_TypeInfo, v132, v41, v42, v43, v44, v45, v46);
  v49 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_44;
  v3->m_Items[4] = v49;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[4], (int32_t)v49, v47, v48);
  v131 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
           this,
           this->klass->vtable._5_get_skillId.method);
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v131, v50, v51, v52, v53, v54, v55);
  v58 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 5 )
    goto LABEL_44;
  v3->m_Items[5] = v58;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[5], (int32_t)v58, v56, v57);
  skilllv = this->fields.skilllv;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v59, v60, v61, v62, v63, v64);
  v67 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 6 )
    goto LABEL_44;
  v3->m_Items[6] = v67;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[6], (int32_t)v67, v65, v66);
  v129 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
           this,
           this->klass->vtable._6_get_chargeTurn.method);
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v129, v68, v69, v70, v71, v72, v73);
  v76 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 7 )
    goto LABEL_44;
  v3->m_Items[7] = v76;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[7], (int32_t)v76, v74, v75);
  priority = this->fields.priority;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &priority, v77, v78, v79, v80, v81, v82);
  v85 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 8 )
    goto LABEL_44;
  v3->m_Items[8] = v85;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[8], (int32_t)v85, v83, v84);
  v127[0] = this->fields.isUseSkill;
  v10 = j_il2cpp_value_box_0(bool_TypeInfo, v127, v86, v87, v88, v89, v90, v91);
  v94 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 9 )
    goto LABEL_44;
  v3->m_Items[9] = v94;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[9], (int32_t)v94, v92, v93);
  strengthStatus = this->fields.strengthStatus;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus, v95, v96, v97, v98, v99, v100);
  v103 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 0xA )
    goto LABEL_44;
  v3->m_Items[10] = v103;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[10], (int32_t)v103, v101, v102);
  itemImageId = this->fields.itemImageId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId, v104, v105, v106, v107, v108, v109);
  v112 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 0xB )
    goto LABEL_44;
  v3->m_Items[11] = v112;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[11], (int32_t)v112, v110, v111);
  changeTDCommandType = this->fields.changeTDCommandType;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType, v113, v114, v115, v116, v117, v118);
  v121 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_45:
      v123 = sub_1C372D8(v10);
      sub_1C37180(v123, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 0xC )
LABEL_44:
    sub_1C372BC(v10);
  v3->m_Items[12] = v121;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[12], (int32_t)v121, v119, v120);
  return System_String__Format_63603084((System_String_o *)StringLiteral_15897/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v3, 0);
}


bool BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(
        BattleSkillInfoData_o *this,
        BattleBranchSkillInfoData_o **battleBranchSkillInfo,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w8
  System_Int32_array *Individualities; // x0
  struct BattleBranchSkillInfoData_array *BranchSkillInfos_k__BackingField; // x22
  int max_length; // w8
  int32_t svtUniqueId; // w23
  int32_t uniqueId; // w24
  unsigned int v13; // w25
  BattleBranchSkillInfoData_o *v14; // x21
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  *battleBranchSkillInfo = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)battleBranchSkillInfo, 0, (int32_t)targetSvtData, method);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields._BranchSkillInfos_k__BackingField,
                    0);
  Individualities = 0;
  if ( targetSvtData && !IsNullOrEmpty )
  {
    BranchSkillInfos_k__BackingField = this->fields._BranchSkillInfos_k__BackingField;
    if ( !BranchSkillInfos_k__BackingField )
LABEL_14:
      sub_1C372B4(Individualities);
    max_length = BranchSkillInfos_k__BackingField->max_length;
    if ( max_length < 1 )
    {
LABEL_10:
      LOBYTE(Individualities) = 0;
    }
    else
    {
      svtUniqueId = this->fields.svtUniqueId;
      uniqueId = targetSvtData->fields.uniqueId;
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1C372BC(Individualities);
        v14 = BranchSkillInfos_k__BackingField->m_Items[v13];
        Individualities = BattleServantData__getIndividualities(targetSvtData, 0, 1, 0, 1, 0);
        if ( !v14 )
          goto LABEL_14;
        Individualities = (System_Int32_array *)BattleBranchSkillInfoData__IsSatisfyCond(
                                                  v14,
                                                  svtUniqueId == uniqueId,
                                                  Individualities,
                                                  v15);
        if ( ((unsigned __int8)Individualities & 1) != 0 )
          break;
        max_length = BranchSkillInfos_k__BackingField->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_10;
      }
      *battleBranchSkillInfo = v14;
      sub_1C36FFC((CGThumbnailListItem_o *)battleBranchSkillInfo, (int32_t)v14, v16, v17);
      LOBYTE(Individualities) = 1;
    }
  }
  return (char)Individualities;
}


// local variable allocation has failed, the output may be wrong!
bool BattleSkillInfoData__TurnExtend(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  System_Int32_array *v11; // x23
  int v13; // w0
  int v14; // w0
  BattleSkillInfoData_c *klass; // x9

  if ( (byte_4C45CFB & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C45CFB = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v11 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._8_get_IndividualityArray.methodPtr)(
                                this,
                                this->klass->vtable._8_get_IndividualityArray.method,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( !Individuality__CheckSignedIndividualities(v11, targetList, 0)
    || this->fields.isPassive
    || !this->fields.isUseSkill )
  {
    return 0;
  }
  v13 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
          this,
          this->klass->vtable._6_get_chargeTurn.method);
  ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_set_chargeTurn.methodPtr)(
    this,
    (unsigned int)(v13 + turnCount),
    this->klass->vtable._7_set_chargeTurn.method);
  v14 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
          this,
          this->klass->vtable._6_get_chargeTurn.method);
  klass = this->klass;
  this->fields.isCharge = this->fields.sealedTurn + v14 < 1;
  if ( ((int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))klass->vtable._6_get_chargeTurn.methodPtr)(
         this,
         klass->vtable._6_get_chargeTurn.method) > max )
    ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_set_chargeTurn.methodPtr)(
      this,
      (unsigned int)max,
      this->klass->vtable._7_set_chargeTurn.method);
  return 1;
}


void BattleSkillInfoData__TurnExtendForDelay(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        const MethodInfo *method)
{
  BattleSkillInfoData_c *klass; // x9
  int v7; // w0
  int32_t sealedTurn; // w8

  if ( !this->fields.isPassive )
  {
    klass = this->klass;
    this->fields.sealedTurn += turnCount;
    v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, int32_t, const MethodInfo *))klass->vtable._6_get_chargeTurn.methodPtr)(
           this,
           klass->vtable._6_get_chargeTurn.method,
           max,
           method);
    sealedTurn = this->fields.sealedTurn;
    this->fields.isCharge = sealedTurn + v7 < 1;
    if ( sealedTurn > max )
      this->fields.sealedTurn = max;
  }
}


// local variable allocation has failed, the output may be wrong!
bool BattleSkillInfoData__TurnProgress(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  System_Int32_array *v11; // x23
  bool result; // w0
  int v13; // w0
  int32_t sealedTurn; // w8
  int32_t v15; // w8
  bool v16; // w8
  int v17; // w0

  if ( (byte_4C45CFA & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C45CFA = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v11 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._8_get_IndividualityArray.methodPtr)(
                                this,
                                this->klass->vtable._8_get_IndividualityArray.method,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( !Individuality__CheckSignedIndividualities(v11, targetList, 0) )
    return 0;
  if ( this->fields.isPassive )
    return 0;
  v13 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
          this,
          this->klass->vtable._6_get_chargeTurn.method);
  sealedTurn = this->fields.sealedTurn;
  if ( sealedTurn + v13 < 1 )
    return 0;
  if ( sealedTurn < 1 )
  {
    v17 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
            this,
            this->klass->vtable._6_get_chargeTurn.method);
    ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_set_chargeTurn.methodPtr)(
      this,
      (unsigned int)(v17 - turnCount),
      this->klass->vtable._7_set_chargeTurn.method);
    if ( (this->fields.sealedTurn & 0x80000000) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v15 = sealedTurn - turnCount;
  this->fields.sealedTurn = v15;
  if ( v15 < 0 )
LABEL_13:
    this->fields.sealedTurn = 0;
LABEL_14:
  if ( ((int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
         this,
         this->klass->vtable._6_get_chargeTurn.method) < max )
    ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_set_chargeTurn.methodPtr)(
      this,
      (unsigned int)max,
      this->klass->vtable._7_set_chargeTurn.method);
  v16 = (int)(this->fields.sealedTurn
            + ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
                this,
                this->klass->vtable._6_get_chargeTurn.method)) < 1;
  result = 1;
  this->fields.isCharge = v16;
  return result;
}


void BattleSkillInfoData__UnLoad(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x8
  __int64 v5; // x19
  unsigned __int64 v6; // x21
  BattleSkillInfoData_o *v7; // x20

  if ( (byte_4C45D00 & 1) == 0 )
  {
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C45D00 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._12_GetLoadArray.methodPtr)(
         this,
         this->klass->vtable._12_GetLoadArray.method);
  if ( !v3 )
    sub_1C372B4(0);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = v3;
  if ( (int)v4 >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C372BC(v3);
      v7 = *(BattleSkillInfoData_o **)(v5 + 32 + 8 * v6);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadSkillAnyVoice(v7, 0);
      LODWORD(v4) = *(_DWORD *)(v5 + 24);
      ++v6;
    }
    while ( (__int64)v6 < (int)v4 );
  }
}


void BattleSkillInfoData__UpdateSelectAddIndex(BattleSkillInfoData_o *this, int32_t selIndex, const MethodInfo *method)
{
  this->fields._SelectAddIndex_k__BackingField = selIndex;
}


void BattleSkillInfoData__UseSkill(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  ;
}


void BattleSkillInfoData__checkSkillCharge(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  this->fields.isCharge = (int)(this->fields.sealedTurn
                              + ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
                                  this,
                                  this->klass->vtable._6_get_chargeTurn.method)) < 1;
}


int32_t BattleSkillInfoData__getChargeTurn(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.sealedTurn
       + ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
           this,
           this->klass->vtable._6_get_chargeTurn.method);
}


int32_t BattleSkillInfoData__getCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C45CF1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF1 = 1;
  }
  entity = 0;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                   this,
                                   this->klass->vtable._5_get_skillId.method);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          result = 0;
          goto LABEL_10;
        }
        Instance = entity;
        if ( entity )
        {
          result = SkillEntity__getSkillCutInId((SkillEntity_o *)entity, 0);
LABEL_10:
          this->fields.cutInId = result;
          return result;
        }
      }
    }
    sub_1C372B4(Instance);
  }
  return result;
}


int32_t BattleSkillInfoData__getInfoId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.index + 100 * this->fields.type;
}


int32_t BattleSkillInfoData__getLossCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45D06 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45D06 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C372B4(Instance);
  }
  return 0;
}


bool BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45CF7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF7 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C372B4(Instance);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0);
}


bool BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45CF6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF6 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C372B4(Instance);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0);
}


int32_t BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45CF9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF9 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C372B4(Instance);
  }
  return 0;
}


System_String_array *BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45CF3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF3 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C372B4(Instance);
  }
  return 0;
}


UnityEngine_Vector3_array *BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45CF4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF4 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C372B4(Instance);
  }
  return 0;
}


UnityEngine_Vector3_array *BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45CF5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF5 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C372B4(Instance);
  }
  return 0;
}


System_String_array *BattleSkillInfoData__getSkillCutInVoices(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45CF2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C45CF2 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C372B4(Instance);
  }
  return 0;
}


BattleBranchSkillInfoData_array *BattleSkillInfoData__get_BranchSkillInfos(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  return this->fields._BranchSkillInfos_k__BackingField;
}


DataVals_array *BattleSkillInfoData__get_DataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  long double inited; // q0
  DataVals_array *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4C45D0B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_DataVals___);
    byte_4C45D0B = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0)) == 0 )
  {
    v6 = Method_System_Array_Empty_DataVals___;
    v7 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v7 )
    {
      sub_1C877C8(Method_System_Array_Empty_DataVals___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(inited);
    return **(DataVals_array ***)(v9 + 184);
  }
  return result;
}


System_Int32_array *BattleSkillInfoData__get_IndividualityArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct System_Int32_array **p_individualityArray; // x19
  struct System_Int32_array *individualityArray; // x21
  int32_t v5; // w0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
           this,
           this->klass->vtable._5_get_skillId.method);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0);
    this->fields.individualityArray = individualityArray;
    sub_1C36FFC((CGThumbnailListItem_o *)p_individualityArray, (int32_t)individualityArray, v6, v7);
  }
  return individualityArray;
}


bool BattleSkillInfoData__get_IsContainedBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct System_Nullable_bool__o *p_hasAddBattlePointFunc; // x19
  System_Object_array *DataValArray; // x20
  BattleSkillInfoData___c_c *v6; // x8
  System_Func_object__bool__o *_9__107_0; // x21
  Il2CppObject *v8; // x22
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool v12; // w1
  struct System_Nullable_bool__o *v13; // x0
  System_Nullable_bool__o v14; // w0
  struct System_Nullable_bool__o v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C45D11 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_DataVals___);
    sub_1C37058(&System_Func_DataVals__bool__TypeInfo);
    sub_1C37058(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_bool___ctor__);
    sub_1C37058(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_bool__get_Value__);
    sub_1C37058(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__107_0__);
    sub_1C37058(&BattleSkillInfoData___c_TypeInfo);
    byte_4C45D11 = 1;
  }
  if ( this->fields.type == 2 )
  {
    return 0;
  }
  else
  {
    p_hasAddBattlePointFunc = &this->fields.hasAddBattlePointFunc;
    if ( !this->fields.hasAddBattlePointFunc.fields.hasValue )
    {
      DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, method);
      v6 = BattleSkillInfoData___c_TypeInfo;
      if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
        v6 = BattleSkillInfoData___c_TypeInfo;
      }
      _9__107_0 = (System_Func_object__bool__o *)v6->static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = BattleSkillInfoData___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__107_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_DataVals__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__107_0,
          v8,
          Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__107_0__,
          0);
        static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
        static_fields->__9__107_0 = (struct System_Func_DataVals__bool__o *)_9__107_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v10, v11);
      }
      v12 = BasicHelper__Any_object__51187876(
              DataValArray,
              (System_Func_T__bool__o *)_9__107_0,
              (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_DataVals___);
      v13 = &v16;
      v16 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v13,
        v12,
        (const MethodInfo_38C5044 *)Method_System_Nullable_bool___ctor__);
      *p_hasAddBattlePointFunc = v16;
    }
    v14 = (System_Nullable_bool__o)p_hasAddBattlePointFunc;
    return System_Nullable_bool___get_Value(v14, (const MethodInfo_38C5060 *)Method_System_Nullable_bool__get_Value__);
  }
}


bool BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x8
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C45D12 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_DataVals___);
    sub_1C37058(&System_Func_DataVals__bool__TypeInfo);
    sub_1C37058(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__109_0__);
    sub_1C37058(&BattleSkillInfoData___c_TypeInfo);
    byte_4C45D12 = 1;
  }
  if ( this->fields.type == 2 || !BattleSkillInfoData__get_IsContainedBattlePointFunc(this, method) )
  {
    return 0;
  }
  else
  {
    DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, v3);
    v5 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v5 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__109_0 = (System_Func_object__bool__o *)v5->static_fields->__9__109_0;
    if ( !_9__109_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = BattleSkillInfoData___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__109_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__109_0,
        v7,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__109_0__,
        0);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__109_0 = (struct System_Func_DataVals__bool__o *)_9__109_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)_9__109_0, v9, v10);
    }
    return !BasicHelper__Any_object__51187876(
              DataValArray,
              (System_Func_T__bool__o *)_9__109_0,
              (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_DataVals___);
  }
}


int32_t BattleSkillInfoData__get_SelectAddIndex(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._SelectAddIndex_k__BackingField;
}


DataVals_array *BattleSkillInfoData__get_ValidDataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *DataValArray; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4C45D0C & 1) == 0 )
  {
    sub_1C37058(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_DataVals___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_1C37058(&System_Func_DataVals__bool__TypeInfo);
    byte_4C45D0C = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v4 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_DataVals__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0);
  v5 = System_Linq_Enumerable__Where_object_(
         DataValArray,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v5,
                             (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataVals_array *ValidDataValArray; // x0
  BattleSkillInfoData___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__100_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4C45D0D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_DataVals__int__TypeInfo);
    sub_1C37058(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__100_0__);
    sub_1C37058(&BattleSkillInfoData___c_TypeInfo);
    byte_4C45D0D = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v4 = BattleSkillInfoData___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v4 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__100_0 = (System_Func_object__int__o *)v4->static_fields->__9__100_0;
  if ( !_9__100_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleSkillInfoData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__100_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__100_0,
      v7,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__100_0__,
      0);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__100_0 = (struct System_Func_DataVals__int__o *)_9__100_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__100_0, (int32_t)_9__100_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__100_0,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v11,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BattleSkillInfoData__get_chargeTurn(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._chargeTurn_k__BackingField;
}


int32_t BattleSkillInfoData__get_skillId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._skillId;
}


bool BattleSkillInfoData__isChargeOK(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return (int)(this->fields.sealedTurn
             + ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
                 this,
                 this->klass->vtable._6_get_chargeTurn.method)) < 1;
}


bool BattleSkillInfoData__isItemIcon(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.itemImageId != -1;
}


bool BattleSkillInfoData__isServantSkill(BattleSkillInfoData_o *this, const MethodInfo *method)
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


void BattleSkillInfoData__set_BranchSkillInfos(
        BattleSkillInfoData_o *this,
        BattleBranchSkillInfoData_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BranchSkillInfos_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._BranchSkillInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleSkillInfoData__set_SelectAddIndex(BattleSkillInfoData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SelectAddIndex_k__BackingField = value;
}


void BattleSkillInfoData__set_chargeTurn(BattleSkillInfoData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._chargeTurn_k__BackingField = value;
}


void BattleSkillInfoData__set_skillId(BattleSkillInfoData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._skillId = value;
}


void BattleSkillInfoData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45D14 & 1) == 0 )
  {
    sub_1C37058(&BattleSkillInfoData___c_TypeInfo);
    byte_4C45D14 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleSkillInfoData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__103_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return DataVals__GetParam(x, 125, -1, 0);
}


int32_t BattleSkillInfoData___c___SortSkill_b__104_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.priority;
}


bool BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__107_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.funcType == 142;
}


bool BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__109_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.funcType != 142;
}


int32_t BattleSkillInfoData___c___get_ValidTargetTypeArray_b__100_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.targetType;
}