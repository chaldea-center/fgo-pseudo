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
  __int64 v5; // x1
  SkillMotionSkip_o *v6; // x19

  if ( (byte_4D337DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&SkillMotionSkip_TypeInfo);
    byte_4D337DC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
         this,
         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    sub_1C93D2C(v4, v5);
  v6 = 0;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v4, 0) )
  {
    v6 = (SkillMotionSkip_o *)sub_1C93D20(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v6, 0);
  }
  return (BaseMotionSkip_o *)v6;
}


bool BattleSkillInfoData__DoesCutInWorkAsEnemyCommandSpell(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4D337D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  return SkillEntity__DoesCutInWorkAsEnemyCommandSpell((SkillEntity_o *)Instance, 0);
}


bool BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v7; // x19
  struct System_Int32_array *funcId; // x20
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  unsigned __int64 v11; // x21

  if ( (byte_4D337D7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
  if ( !Entity )
    return (char)Entity;
  v7 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v7->fields.funcId) == 0) )
  {
LABEL_18:
    sub_1C93D2C(Instance, v4);
  }
  max_length = funcId->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C93D34(Instance);
      if ( !v10 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   funcId->m_Items[v11],
                   (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance[1].monitor) == 27 )
          break;
      }
      LODWORD(max_length) = funcId->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_15;
    }
    LOBYTE(Entity) = 1;
  }
  return (char)Entity;
}


System_Int32_array *BattleSkillInfoData__GetAddIndiv(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4D337D8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1C93D2C(Instance, v4);
  }
  return SkillLvEntity__GetAddIndiv((SkillLvEntity_o *)Instance, 0);
}


int32_t BattleSkillInfoData__GetCondItemId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  __int64 v4; // x1
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1C93D2C(HasCond, v4);
  return commonReleaseEntity->fields.condId;
}


int32_t BattleSkillInfoData__GetCondItemNumber(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  __int64 v4; // x1
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1C93D2C(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


System_String_o *BattleSkillInfoData__GetEnemyCountChangeMessage(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337ED & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_4D337ED = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                         this,
                         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)v4,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    v4 = entity;
    if ( entity )
      return SkillEntity__GetEnemyCountChangeMessage((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_1C93D2C(v4, v5);
  }
  return 0;
}


int32_t BattleSkillInfoData__GetFieldCallEffectId(BattleSkillInfoData_o *this, bool isBefore, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337E4 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0);
LABEL_9:
    sub_1C93D2C(Instance, v6);
  }
  return -1;
}


BattleSkillInfoData_array *BattleSkillInfoData__GetLoadArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x20
  __int64 v13; // x0

  if ( (byte_4D337DB & 1) == 0 )
  {
    sub_1C93AD4(&BattleSkillInfoData___TypeInfo);
    byte_4D337DB = 1;
  }
  v3 = sub_1C93B7C(BattleSkillInfoData___TypeInfo, 1);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v11 = v3;
  if ( this )
  {
    v3 = sub_1C93C10(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v13 = sub_1C93D50(0);
      sub_1C93BFC(v13, 0);
    }
  }
  if ( !*(_DWORD *)(v11 + 24) )
    sub_1C93D34(v3);
  *(_QWORD *)(v11 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)this, v5, v6, v7, v8, v9, v10);
  return (BattleSkillInfoData_array *)v11;
}


int32_t BattleSkillInfoData__GetMaxSelectAddIndexBySkill(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x0
  System_Func_object__int__o *_9__116_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D337E9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Max_DataVals___);
    sub_1C93AD4(&System_Func_DataVals__int__TypeInfo);
    sub_1C93AD4(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__116_0__);
    sub_1C93AD4(&BattleSkillInfoData___c_TypeInfo);
    byte_4D337E9 = 1;
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
  _9__116_0 = (System_Func_object__int__o *)v5->static_fields->__9__116_0;
  if ( !_9__116_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleSkillInfoData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__116_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__116_0,
      v7,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__116_0__,
      0);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__116_0 = (struct System_Func_DataVals__int__o *)_9__116_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__116_0,
      (int32_t)_9__116_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__116_0,
           (const MethodInfo_31D24AC *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillEntity_o *BattleSkillInfoData__GetSelfSkillEntity(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4D337E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object) )
  {
    sub_1C93D2C(Instance, v4);
  }
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            (int32_t)Instance,
                            (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


SkillLvEntity_o *BattleSkillInfoData__GetSelfSkillLvEntity(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4D337E3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object) )
  {
    sub_1C93D2C(Instance, v4);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
}


bool BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct System_Nullable_bool__o *p_hasCond; // x20
  struct System_Nullable_bool__o *v5; // x0
  int32_t commonReleaseCondId; // w8
  CommonReleaseEntity_array *Instance; // x0
  __int64 v8; // x1
  CommonReleaseEntity_array *v9; // x21
  CommonReleaseEntity_o *v10; // x8
  struct System_Nullable_bool__o *v11; // x0
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct CommonReleaseEntity_o *v19; // x1
  struct System_Nullable_bool__o v20; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D337DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_System_Nullable_bool___ctor__);
    sub_1C93AD4(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_bool__get_Value__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337DE = 1;
  }
  p_hasCond = &this->fields.hasCond;
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v5 = &v21;
    v21 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v5,
      0,
      (const MethodInfo_399C0AC *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v21;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0);
      if ( !Instance )
        goto LABEL_14;
      v9 = Instance;
      if ( LODWORD(Instance->max_length) != 1 )
        return System_Nullable_bool___get_Value(
                 (System_Nullable_bool__o)p_hasCond,
                 (const MethodInfo_399C0C8 *)Method_System_Nullable_bool__get_Value__);
      v10 = Instance->m_Items[0];
      if ( !v10 )
LABEL_14:
        sub_1C93D2C(Instance, v8);
      if ( v10->fields.condType == 2 )
      {
        v11 = &v20;
        v20 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v11,
          1,
          (const MethodInfo_399C0AC *)Method_System_Nullable_bool___ctor__);
        *p_hasCond = v20;
        if ( !LODWORD(v9->max_length) )
          sub_1C93D34(v12);
        v19 = v9->m_Items[0];
        this->fields.commonReleaseEntity = v19;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.commonReleaseEntity,
          (int32_t)v19,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
      }
    }
  }
  return System_Nullable_bool___get_Value(
           (System_Nullable_bool__o)p_hasCond,
           (const MethodInfo_399C0C8 *)Method_System_Nullable_bool__get_Value__);
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


bool BattleSkillInfoData__IsIgnoreUpHateTargetChange(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  SkillLvEntity_o *Entity; // x0
  __int64 v5; // x1

  if ( (byte_4D337D6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D337D6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  Entity = (SkillLvEntity_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                this,
                                this->klass->vtable._5_get_skillId.method);
  if ( !Master_object
    || (Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Master_object, (int32_t)Entity, this->fields.skilllv, 0)) == 0 )
  {
    sub_1C93D2C(Entity, v5);
  }
  return SkillLvEntity__IsIgnoreUpHateTargetChange(Entity, 0);
}


bool BattleSkillInfoData__IsOpenCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D337DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337DF = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
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
  return BattleSkillInfoData__IsSelectServant_47159376(v5, v6, v7);
}


bool BattleSkillInfoData__IsSelectServant_47159376(
        System_Int32_array *validTargetTypeArray,
        bool isExistBranchSkillInfo,
        const MethodInfo *method)
{
  System_Func_int__bool__o *v5; // x21

  if ( (byte_4D337E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_Target_isChoose__);
    byte_4D337E8 = 1;
  }
  v5 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v5, 0, Method_Target_isChoose__, 0);
  return BasicHelper__Any_int__51960056(
           validTargetTypeArray,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720)
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
    sub_1C93D2C(this, 0);
  return !DataVals__TryGetParam(dataVal, 127, &param, 0) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  il2cpp_array_size_t max_length; // x8
  bool v9; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  unsigned __int64 v11; // x22

  if ( (byte_4D337D5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !Entity )
    goto LABEL_16;
  funcId = Entity->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  max_length = funcId->max_length;
  v9 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C93D34(Instance);
      if ( !v10 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   funcId->m_Items[v11],
                   (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !Instance || HIDWORD(Instance[1].monitor) != 4 )
      {
        LODWORD(max_length) = funcId->max_length;
        v9 = (__int64)++v11 < (int)max_length;
        if ( (__int64)v11 < (int)max_length )
          continue;
      }
      return v9;
    }
LABEL_16:
    sub_1C93D2C(Instance, v4);
  }
  return v9;
}


bool BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D337E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D337E1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
         this,
         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    sub_1C93D2C(v4, v5);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v4, 0);
}


BattleSkillInfoData_o *BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x19

  if ( (byte_4D337DD & 1) == 0 )
  {
    sub_1C93AD4(&BattleExUiSkillInfoData_TypeInfo);
    sub_1C93AD4(&BattleMasterSkillInfoData_TypeInfo);
    sub_1C93AD4(&BattleSelfSkillInfoData_TypeInfo);
    sub_1C93AD4(&BattleSkillInfoData_TypeInfo);
    byte_4D337DD = 1;
  }
  switch ( type )
  {
    case 1:
      v3 = sub_1C93D20(BattleMasterSkillInfoData_TypeInfo);
      BattleMasterSkillInfoData___ctor((BattleMasterSkillInfoData_o *)v3, 0);
      break;
    case 27:
      v3 = sub_1C93D20(BattleExUiSkillInfoData_TypeInfo);
      BattleExUiSkillInfoData___ctor((BattleExUiSkillInfoData_o *)v3, 0);
      break;
    case 11:
      v3 = sub_1C93D20(BattleSelfSkillInfoData_TypeInfo);
      BattleSelfSkillInfoData___ctor((BattleSelfSkillInfoData_o *)v3, 0);
      break;
    default:
      v3 = sub_1C93D20(BattleSkillInfoData_TypeInfo);
      *(_DWORD *)(v3 + 64) = -1;
      *(_QWORD *)(v3 + 88) = -1;
      *(_QWORD *)(v3 + 96) = -1;
      *(_DWORD *)(v3 + 104) = -1;
      *(_BYTE *)(v3 + 152) = 1;
      System_Object___ctor((Il2CppObject *)v3, 0);
      break;
  }
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
  __int64 v6; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantAssetLoadManager_o *v8; // x19
  unsigned __int64 v9; // x22
  bool v10; // w20
  BattleSkillInfoData_o *v11; // x21

  if ( (byte_4D337D9 & 1) == 0 )
  {
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4D337D9 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._12_GetLoadArray.methodPtr)(
                                            this,
                                            this->klass->vtable._12_GetLoadArray.method,
                                            method);
  if ( !Instance )
    goto LABEL_13;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    v10 = dlOnly;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        sub_1C93D34(Instance);
      v11 = (BattleSkillInfoData_o *)*((_QWORD *)&v8->fields.svtmaster + v9);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadSkillAnyVoice(v11, v10, 0);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v11, 0);
      LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
      if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1C93D2C(Instance, v6);
  }
}


void BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  BattleSkillInfoData___c_c *v3; // x0
  System_Func_object__int__o *_9__117_0; // x20
  Il2CppObject *v5; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D337EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_StableSort_BattleSkillInfoData___);
    sub_1C93AD4(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1C93AD4(&Method_BattleSkillInfoData___c__SortSkill_b__117_0__);
    sub_1C93AD4(&BattleSkillInfoData___c_TypeInfo);
    byte_4D337EA = 1;
  }
  if ( skillList )
  {
    v3 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v3 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__117_0 = (System_Func_object__int__o *)v3->static_fields->__9__117_0;
    if ( !_9__117_0 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = BattleSkillInfoData___c_TypeInfo;
      }
      v5 = (Il2CppObject *)v3->static_fields->__9;
      _9__117_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(_9__117_0, v5, Method_BattleSkillInfoData___c__SortSkill_b__117_0__, 0);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__117_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__117_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__117_0,
        (int32_t)_9__117_0,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__117_0,
      0,
      (const MethodInfo_3193FD0 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  Il2CppObject *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  Il2CppObject *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  Il2CppObject *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  Il2CppObject *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  Il2CppObject *v68; // x21
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  Il2CppObject *v75; // x21
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  Il2CppObject *v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  Il2CppObject *v89; // x21
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  Il2CppObject *v96; // x19
  __int64 v98; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  bool v102[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int v104; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v106; // [xsp+28h] [xbp-48h] BYREF
  bool v107[4]; // [xsp+2Ch] [xbp-44h] BYREF
  bool v108[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4D337C9 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&BattleSkillInfoData_TYPE_TypeInfo);
    sub_1C93AD4(&StringLiteral_15994/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/);
    byte_4D337C9 = 1;
  }
  v3 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 13);
  type = this->fields.type;
  v4 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  v12 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_44;
  v3->m_Items[0] = v12;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v3->m_Items, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  index = this->fields.index;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &index);
  v19 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_44;
  v3->m_Items[1] = v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[1], (int32_t)v19, v13, v14, v15, v16, v17, v18);
  svtUniqueId = this->fields.svtUniqueId;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId);
  v26 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_44;
  v3->m_Items[2] = v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[2], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v108[0] = this->fields.isPassive;
  v4 = j_il2cpp_value_box_0(bool_TypeInfo, v108);
  v33 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 3 )
    goto LABEL_44;
  v3->m_Items[3] = v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[3], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  v107[0] = this->fields.isCharge;
  v4 = j_il2cpp_value_box_0(bool_TypeInfo, v107);
  v40 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_44;
  v3->m_Items[4] = v40;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[4], (int32_t)v40, v34, v35, v36, v37, v38, v39);
  v106 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
           this,
           this->klass->vtable._5_get_skillId.method);
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v47 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 5 )
    goto LABEL_44;
  v3->m_Items[5] = v47;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[5], (int32_t)v47, v41, v42, v43, v44, v45, v46);
  skilllv = this->fields.skilllv;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
  v54 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 6 )
    goto LABEL_44;
  v3->m_Items[6] = v54;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[6], (int32_t)v54, v48, v49, v50, v51, v52, v53);
  v104 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
           this,
           this->klass->vtable._6_get_chargeTurn.method);
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &v104);
  v61 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 7 )
    goto LABEL_44;
  v3->m_Items[7] = v61;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[7], (int32_t)v61, v55, v56, v57, v58, v59, v60);
  priority = this->fields.priority;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &priority);
  v68 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 8 )
    goto LABEL_44;
  v3->m_Items[8] = v68;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[8], (int32_t)v68, v62, v63, v64, v65, v66, v67);
  v102[0] = this->fields.isUseSkill;
  v4 = j_il2cpp_value_box_0(bool_TypeInfo, v102);
  v75 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 9 )
    goto LABEL_44;
  v3->m_Items[9] = v75;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[9], (int32_t)v75, v69, v70, v71, v72, v73, v74);
  strengthStatus = this->fields.strengthStatus;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus);
  v82 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 0xA )
    goto LABEL_44;
  v3->m_Items[10] = v82;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[10], (int32_t)v82, v76, v77, v78, v79, v80, v81);
  itemImageId = this->fields.itemImageId;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId);
  v89 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 0xB )
    goto LABEL_44;
  v3->m_Items[11] = v89;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[11], (int32_t)v89, v83, v84, v85, v86, v87, v88);
  changeTDCommandType = this->fields.changeTDCommandType;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType);
  v96 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_45:
      v98 = sub_1C93D50(v4);
      sub_1C93BFC(v98, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 0xC )
LABEL_44:
    sub_1C93D34(v4);
  v3->m_Items[12] = v96;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[12], (int32_t)v96, v90, v91, v92, v93, v94, v95);
  return System_String__Format_64467168((System_String_o *)StringLiteral_15994/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v3, 0);
}


bool BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(
        BattleSkillInfoData_o *this,
        BattleBranchSkillInfoData_o **battleBranchSkillInfo,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  bool IsNullOrEmpty; // w8
  System_Int32_array *Individualities; // x0
  struct BattleBranchSkillInfoData_array *BranchSkillInfos_k__BackingField; // x22
  int max_length; // w8
  int32_t svtUniqueId; // w23
  int32_t uniqueId; // w24
  unsigned int v18; // w25
  BattleBranchSkillInfoData_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  *battleBranchSkillInfo = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)battleBranchSkillInfo,
    0,
    (int32_t)targetSvtData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields._BranchSkillInfos_k__BackingField,
                    0);
  Individualities = 0;
  if ( targetSvtData && !IsNullOrEmpty )
  {
    BranchSkillInfos_k__BackingField = this->fields._BranchSkillInfos_k__BackingField;
    if ( !BranchSkillInfos_k__BackingField )
LABEL_14:
      sub_1C93D2C(Individualities, v11);
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
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
          sub_1C93D34(Individualities);
        v19 = BranchSkillInfos_k__BackingField->m_Items[v18];
        Individualities = BattleServantData__getIndividualities(targetSvtData, 0, 1, 0, 1, 0);
        if ( !v19 )
          goto LABEL_14;
        Individualities = (System_Int32_array *)BattleBranchSkillInfoData__IsSatisfyCond(
                                                  v19,
                                                  svtUniqueId == uniqueId,
                                                  Individualities,
                                                  0);
        if ( ((unsigned __int8)Individualities & 1) != 0 )
          break;
        max_length = BranchSkillInfos_k__BackingField->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_10;
      }
      *battleBranchSkillInfo = v19;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)battleBranchSkillInfo, (int32_t)v19, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4D337D4 & 1) == 0 )
  {
    sub_1C93AD4(&Individuality_TypeInfo);
    byte_4D337D4 = 1;
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
  int v13; // w0
  int32_t sealedTurn; // w8
  int32_t v15; // w8
  int v16; // w0

  if ( (byte_4D337D3 & 1) == 0 )
  {
    sub_1C93AD4(&Individuality_TypeInfo);
    byte_4D337D3 = 1;
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
    v16 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
            this,
            this->klass->vtable._6_get_chargeTurn.method);
    ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_set_chargeTurn.methodPtr)(
      this,
      (unsigned int)(v16 - turnCount),
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
  this->fields.isCharge = (int)(this->fields.sealedTurn
                              + ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
                                  this,
                                  this->klass->vtable._6_get_chargeTurn.method)) < 1;
  return 1;
}


void BattleSkillInfoData__UnLoad(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x19
  unsigned __int64 v7; // x21
  BattleSkillInfoData_o *v8; // x20

  if ( (byte_4D337DA & 1) == 0 )
  {
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    byte_4D337DA = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._12_GetLoadArray.methodPtr)(
         this,
         this->klass->vtable._12_GetLoadArray.method);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1C93D34(v3);
      v8 = *(BattleSkillInfoData_o **)(v6 + 32 + 8 * v7);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadSkillAnyVoice(v8, 0);
      LODWORD(v5) = *(_DWORD *)(v6 + 24);
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
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
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D337CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337CA = 1;
  }
  entity = 0;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                   this,
                                   this->klass->vtable._5_get_skillId.method);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_1C93D2C(Instance, v5);
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
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337E0 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}


bool BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337D0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337D0 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C93D2C(Instance, v4);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0);
}


bool BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337CF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337CF = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C93D2C(Instance, v4);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0);
}


int32_t BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337D2 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}


System_String_array *BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337CC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337CC = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}


UnityEngine_Vector3_array *BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337CD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337CD = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}


UnityEngine_Vector3_array *BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337CE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337CE = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}


System_String_array *BattleSkillInfoData__getSkillCutInVoices(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D337CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D337CB = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_1C93D2C(Instance, v4);
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

  if ( (byte_4D337E5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_DataVals___);
    byte_4D337E5 = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0)) == 0 )
  {
    v6 = Method_System_Array_Empty_DataVals___;
    v7 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v7 )
    {
      sub_1C69BC4(Method_System_Array_Empty_DataVals___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C69B68(inited);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
           this,
           this->klass->vtable._5_get_skillId.method);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0);
    this->fields.individualityArray = individualityArray;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)p_individualityArray,
      (int32_t)individualityArray,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return individualityArray;
}


bool BattleSkillInfoData__get_IsContainedBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct System_Nullable_bool__o *p_hasAddBattlePointFunc; // x19
  System_Object_array *DataValArray; // x20
  BattleSkillInfoData___c_c *v6; // x8
  System_Func_object__bool__o *_9__120_0; // x21
  Il2CppObject *v8; // x22
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  bool v16; // w1
  struct System_Nullable_bool__o *v17; // x0
  struct System_Nullable_bool__o v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D337EB & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_DataVals___);
    sub_1C93AD4(&System_Func_DataVals__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_bool___ctor__);
    sub_1C93AD4(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_bool__get_Value__);
    sub_1C93AD4(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__120_0__);
    sub_1C93AD4(&BattleSkillInfoData___c_TypeInfo);
    byte_4D337EB = 1;
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
      _9__120_0 = (System_Func_object__bool__o *)v6->static_fields->__9__120_0;
      if ( !_9__120_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = BattleSkillInfoData___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__120_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_DataVals__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__120_0,
          v8,
          Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__120_0__,
          0);
        static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
        static_fields->__9__120_0 = (struct System_Func_DataVals__bool__o *)_9__120_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__120_0,
          (int32_t)_9__120_0,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      v16 = BasicHelper__Any_object__51960868(
              DataValArray,
              (System_Func_T__bool__o *)_9__120_0,
              (const MethodInfo_318DC24 *)Method_BasicHelper_Any_DataVals___);
      v17 = &v19;
      v19 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v17,
        v16,
        (const MethodInfo_399C0AC *)Method_System_Nullable_bool___ctor__);
      *p_hasAddBattlePointFunc = v19;
    }
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_hasAddBattlePointFunc,
             (const MethodInfo_399C0C8 *)Method_System_Nullable_bool__get_Value__);
  }
}


bool BattleSkillInfoData__get_IsMasterEquipType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x8
  System_Func_object__bool__o *_9__122_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D337EC & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_DataVals___);
    sub_1C93AD4(&System_Func_DataVals__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__122_0__);
    sub_1C93AD4(&BattleSkillInfoData___c_TypeInfo);
    byte_4D337EC = 1;
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
    _9__122_0 = (System_Func_object__bool__o *)v5->static_fields->__9__122_0;
    if ( !_9__122_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = BattleSkillInfoData___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__122_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__122_0,
        v7,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__122_0__,
        0);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__122_0 = (struct System_Func_DataVals__bool__o *)_9__122_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__122_0,
        (int32_t)_9__122_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    return !BasicHelper__Any_object__51960868(
              DataValArray,
              (System_Func_T__bool__o *)_9__122_0,
              (const MethodInfo_318DC24 *)Method_BasicHelper_Any_DataVals___);
  }
}


int32_t BattleSkillInfoData__get_SelectAddIndex(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._SelectAddIndex_k__BackingField;
}


int32_t BattleSkillInfoData__get_UsedChargeTurn(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._UsedChargeTurn_k__BackingField;
}


int32_t BattleSkillInfoData__get_UsedNpValue(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._UsedNpValue_k__BackingField;
}


DataVals_array *BattleSkillInfoData__get_ValidDataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *DataValArray; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4D337E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_DataVals___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_1C93AD4(&System_Func_DataVals__bool__TypeInfo);
    byte_4D337E6 = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v4 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_DataVals__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0);
  v5 = System_Linq_Enumerable__Where_object_(
         DataValArray,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v5,
                             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataVals_array *ValidDataValArray; // x0
  BattleSkillInfoData___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__113_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4D337E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&System_Func_DataVals__int__TypeInfo);
    sub_1C93AD4(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__113_0__);
    sub_1C93AD4(&BattleSkillInfoData___c_TypeInfo);
    byte_4D337E7 = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v4 = BattleSkillInfoData___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v4 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__113_0 = (System_Func_object__int__o *)v4->static_fields->__9__113_0;
  if ( !_9__113_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleSkillInfoData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__113_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__113_0,
      v7,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__113_0__,
      0);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__113_0 = (struct System_Func_DataVals__int__o *)_9__113_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__113_0,
      (int32_t)_9__113_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__113_0,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BranchSkillInfos_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._BranchSkillInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSkillInfoData__set_SelectAddIndex(BattleSkillInfoData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SelectAddIndex_k__BackingField = value;
}


void BattleSkillInfoData__set_UsedChargeTurn(BattleSkillInfoData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UsedChargeTurn_k__BackingField = value;
}


void BattleSkillInfoData__set_UsedNpValue(BattleSkillInfoData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UsedNpValue_k__BackingField = value;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D337EE & 1) == 0 )
  {
    sub_1C93AD4(&BattleSkillInfoData___c_TypeInfo);
    byte_4D337EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleSkillInfoData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__116_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return DataVals__GetParam(x, 127, -1, 0);
}


int32_t BattleSkillInfoData___c___SortSkill_b__117_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.priority;
}


bool BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__120_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.funcType == 142;
}


bool BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__122_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.funcType != 142;
}


int32_t BattleSkillInfoData___c___get_ValidTargetTypeArray_b__113_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.targetType;
}