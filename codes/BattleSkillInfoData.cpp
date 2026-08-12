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

  if ( (byte_597378D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&SkillMotionSkip_TypeInfo);
    byte_597378D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
         this,
         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    sub_2213CDC(v4, v5);
  v6 = 0;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v4, 0) )
  {
    v6 = (SkillMotionSkip_o *)sub_2213CCC(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v6, 0);
  }
  return (BaseMotionSkip_o *)v6;
}


bool BattleSkillInfoData__DoesCutInWorkAsEnemyCommandSpell(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_5973782 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973782 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v4);
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

  if ( (byte_5973788 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973788 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
  if ( !Entity )
    return (char)Entity;
  v7 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v7->fields.funcId) == 0) )
  {
LABEL_18:
    sub_2213CDC(Instance, v4);
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
        sub_2213CE4(Instance);
      if ( !v10 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   funcId->m_Items[v11],
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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

  if ( (byte_5973789 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973789 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_2213CDC(Instance, v4);
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
    sub_2213CDC(HasCond, v4);
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
    sub_2213CDC(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


System_String_o *BattleSkillInfoData__GetEnemyCountChangeMessage(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597379E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_597379E = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  v5 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                         this,
                         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)v5,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    v5 = entity;
    if ( entity )
      return SkillEntity__GetEnemyCountChangeMessage((SkillEntity_o *)entity, 0);
LABEL_11:
    sub_2213CDC(v5, v6);
  }
  return 0;
}


int32_t BattleSkillInfoData__GetFieldCallEffectId(BattleSkillInfoData_o *this, bool isBefore, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973795 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973795 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0);
LABEL_9:
    sub_2213CDC(Instance, v6);
  }
  return -1;
}


BattleSkillInfoData_array *BattleSkillInfoData__GetLoadArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x20
  __int64 v12; // x1
  __int64 v14; // x0

  if ( (byte_597378C & 1) == 0 )
  {
    sub_2213A60(&BattleSkillInfoData___TypeInfo);
    byte_597378C = 1;
  }
  v3 = sub_2213B20(BattleSkillInfoData___TypeInfo, 1);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = v3;
  if ( this )
  {
    v3 = sub_2213BB4(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v14 = sub_2213D00(0, v12);
      sub_2213BA0(v14, 0);
    }
  }
  if ( !*(_DWORD *)(v11 + 24) )
    sub_2213CE4(v3);
  *(_QWORD *)(v11 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)this, v5, v6, v7, v8, v9, v10);
  return (BattleSkillInfoData_array *)v11;
}


int32_t BattleSkillInfoData__GetMaxSelectAddIndexBySkill(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *DataValArray; // x19
  __int64 v4; // x1
  BattleSkillInfoData___c_c *v6; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__120_0; // x20
  Il2CppObject *v9; // x21
  struct BattleSkillInfoData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_597379A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Max_DataVals___);
    sub_2213A60(&System_Func_DataVals__int__TypeInfo);
    sub_2213A60(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__120_0__);
    sub_2213A60(&BattleSkillInfoData___c_TypeInfo);
    byte_597379A = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0) )
    return -1;
  v6 = BattleSkillInfoData___c_TypeInfo;
  if ( !*(&BattleSkillInfoData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v4);
    v6 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__120_0 = (System_Func_object__int__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__120_0,
      v9,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__120_0__,
      0);
    v10 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v10->__9__120_0 = (struct System_Func_DataVals__int__o *)_9__120_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__120_0, (int32_t)_9__120_0, v11, v12, v13, v14, v15, v16);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__120_0,
           (const MethodInfo_38875C8 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillEntity_o *BattleSkillInfoData__GetSelfSkillEntity(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_5973793 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973793 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object) )
  {
    sub_2213CDC(Instance, v4);
  }
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            (int32_t)Instance,
                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


SkillLvEntity_o *BattleSkillInfoData__GetSelfSkillLvEntity(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_5973794 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973794 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object) )
  {
    sub_2213CDC(Instance, v4);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct CommonReleaseEntity_o *v19; // x1
  struct System_Nullable_bool__o v20; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597378F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Nullable_bool___ctor__);
    sub_2213A60(&Method_System_Nullable_bool__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_bool__get_Value__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597378F = 1;
  }
  p_hasCond = &this->fields.hasCond;
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v5 = &v21;
    v21 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v5,
      0,
      (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v21;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0);
      if ( !Instance )
        goto LABEL_14;
      v9 = Instance;
      if ( LODWORD(Instance->max_length) != 1 )
        return System_Nullable_bool___get_Value(
                 (System_Nullable_bool__o)p_hasCond,
                 (const MethodInfo_45E0958 *)Method_System_Nullable_bool__get_Value__);
      v10 = Instance->m_Items[0];
      if ( !v10 )
LABEL_14:
        sub_2213CDC(Instance, v8);
      if ( v10->fields.condType == 2 )
      {
        v11 = &v20;
        v20 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v11,
          1,
          (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
        *p_hasCond = v20;
        if ( !LODWORD(v9->max_length) )
          sub_2213CE4(v12);
        v19 = v9->m_Items[0];
        this->fields.commonReleaseEntity = v19;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.commonReleaseEntity,
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
           (const MethodInfo_45E0958 *)Method_System_Nullable_bool__get_Value__);
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


bool BattleSkillInfoData__IsNeedUpHate(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ValidDataValArray; // x0
  __int64 v4; // x1
  int size; // w8
  System_Collections_Generic_List_object__o *v6; // x19
  bool v7; // w26
  int v8; // w21
  System_Collections_Generic_List_object__c **v9; // x8
  System_Collections_Generic_List_object__c *v10; // x20
  __int128 v11; // q0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5973787 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DataVals__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DataVals__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_DataVals__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_DataVals__GetEnumerator__);
    byte_5973787 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ValidDataValArray = (System_Collections_Generic_List_object__o *)BattleSkillInfoData__get_ValidDataValArray(
                                                                     this,
                                                                     method);
  if ( !ValidDataValArray )
    goto LABEL_18;
  size = ValidDataValArray->fields._size;
  v6 = ValidDataValArray;
  v7 = size > 0;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)size )
        sub_2213CE4(ValidDataValArray);
      v9 = &v6->klass + v8;
      v10 = v9[4];
      if ( !v10 )
        break;
      if ( DataVals__IsNeedUpHate((DataVals_o *)v9[4], 0) )
        return v7;
      ValidDataValArray = (System_Collections_Generic_List_object__o *)v10->_1.declaringType;
      if ( ValidDataValArray )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          &v13,
          ValidDataValArray,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_DataVals__GetEnumerator__);
        v11 = *(_OWORD *)&v13.fields._list;
        v13.fields._list = 0;
        *(_QWORD *)&v13.fields._index = &v14;
        *(_OWORD *)&v14.fields._list = v11;
        v14.fields._current = v13.fields._current;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v14,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_DataVals__MoveNext__) )
        {
          if ( v14.fields._current && DataVals__IsNeedUpHate((DataVals_o *)v14.fields._current, 0) )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v14,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DataVals__Dispose__);
            return v7;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v14,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_DataVals__Dispose__);
      }
      size = v6->fields._size;
      v7 = ++v8 < size;
      if ( v8 >= size )
        return v7;
    }
LABEL_18:
    sub_2213CDC(ValidDataValArray, v4);
  }
  return v7;
}


bool BattleSkillInfoData__IsOpenCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5973790 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973790 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0, 0, 0);
}


bool BattleSkillInfoData__IsPassive(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 0x1B) & (0x7000400u >> type);
}


bool BattleSkillInfoData__IsReplacePassiveTypeOnTransform(int32_t type, const MethodInfo *method)
{
  return ((unsigned int)type < 0x1B) & (0x5000400u >> type);
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
  return BattleSkillInfoData__IsSelectServant_53549084(v5, v6, v7);
}


bool BattleSkillInfoData__IsSelectServant_53549084(
        System_Int32_array *validTargetTypeArray,
        bool isExistBranchSkillInfo,
        const MethodInfo *method)
{
  System_Func_int__bool__o *v5; // x21

  if ( (byte_5973799 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_Target_isChoose__);
    byte_5973799 = 1;
  }
  v5 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v5, 0, Method_Target_isChoose__, 0);
  return BasicHelper__Any_int__58784608(
           validTargetTypeArray,
           (System_Func_T__bool__o *)v5,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248)
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
    sub_2213CDC(this, 0);
  return !DataVals__TryGetParam(dataVal, 128, &param, 0) || param == this->fields._SelectAddIndex_k__BackingField;
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
  int monitor_high; // w8

  if ( (byte_5973786 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973786 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_17;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !Entity )
    goto LABEL_17;
  funcId = Entity->fields.funcId;
  if ( !funcId )
    goto LABEL_17;
  max_length = funcId->max_length;
  v9 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      if ( !v10 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   funcId->m_Items[v11],
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !Instance || (monitor_high = HIDWORD(Instance[1].monitor), monitor_high != 4) && monitor_high != 35 )
      {
        LODWORD(max_length) = funcId->max_length;
        v9 = (__int64)++v11 < (int)max_length;
        if ( (__int64)v11 < (int)max_length )
          continue;
      }
      return v9;
    }
LABEL_17:
    sub_2213CDC(Instance, v4);
  }
  return v9;
}


bool BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_5973792 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5973792 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
         this,
         this->klass->vtable._5_get_skillId.method);
  if ( !Master_object )
    sub_2213CDC(v4, v5);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v4, 0);
}


BattleSkillInfoData_o *BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  BattleSkillInfoData_o *v3; // x19
  const MethodInfo *v4; // x1
  _QWORD *v5; // x8
  __int64 v6; // x0

  if ( (byte_597378E & 1) == 0 )
  {
    sub_2213A60(&BattleExUiSkillInfoData_TypeInfo);
    sub_2213A60(&BattleMasterSkillInfoData_TypeInfo);
    sub_2213A60(&BattleSelfSkillInfoData_TypeInfo);
    sub_2213A60(&BattleSkillInfoData_TypeInfo);
    byte_597378E = 1;
  }
  if ( type == 1 )
  {
    v5 = &BattleMasterSkillInfoData_TypeInfo;
    goto LABEL_10;
  }
  if ( type == 27 )
  {
    v5 = &BattleExUiSkillInfoData_TypeInfo;
LABEL_10:
    v6 = sub_2213CCC(*v5);
    *(_DWORD *)(v6 + 64) = -1;
    v3 = (BattleSkillInfoData_o *)v6;
    *(_QWORD *)(v6 + 88) = -1;
    *(_QWORD *)(v6 + 96) = -1;
    *(_DWORD *)(v6 + 104) = -1;
    *(_BYTE *)(v6 + 152) = 1;
    System_Object___ctor((Il2CppObject *)v6, 0);
    return v3;
  }
  if ( type != 11 )
  {
    v5 = &BattleSkillInfoData_TypeInfo;
    goto LABEL_10;
  }
  v3 = (BattleSkillInfoData_o *)sub_2213CCC(BattleSelfSkillInfoData_TypeInfo);
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)v3, v4);
  return v3;
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
  ServantAssetLoadManager_o *v8; // x20
  unsigned __int64 v9; // x22
  BattleSkillInfoData_o *v10; // x21

  if ( (byte_597378A & 1) == 0 )
  {
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_597378A = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._12_GetLoadArray.methodPtr)(
                                            this,
                                            this->klass->vtable._12_GetLoadArray.method,
                                            method);
  if ( !Instance )
    goto LABEL_12;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        sub_2213CE4(Instance);
      v10 = (BattleSkillInfoData_o *)*((_QWORD *)&v8->fields.svtmaster + v9);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6);
      ServantAssetLoadManager__preloadSkillAnyVoice(v10, dlOnly, 0);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v10, 0);
      LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
      if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_12:
    sub_2213CDC(Instance, v6);
  }
}


void BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  BattleSkillInfoData___c_c *v3; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__121_0; // x20
  Il2CppObject *v6; // x21
  struct BattleSkillInfoData___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_597379B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_StableSort_BattleSkillInfoData___);
    sub_2213A60(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_2213A60(&Method_BattleSkillInfoData___c__SortSkill_b__121_0__);
    sub_2213A60(&BattleSkillInfoData___c_TypeInfo);
    byte_597379B = 1;
  }
  if ( skillList )
  {
    v3 = BattleSkillInfoData___c_TypeInfo;
    if ( !*(&BattleSkillInfoData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, method);
      v3 = BattleSkillInfoData___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__121_0 = (System_Func_object__int__o *)static_fields->__9__121_0;
    if ( !_9__121_0 )
    {
      if ( !*(&v3->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v3, method);
        static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      }
      v6 = (Il2CppObject *)static_fields->__9;
      _9__121_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(_9__121_0, v6, Method_BattleSkillInfoData___c__SortSkill_b__121_0__, 0);
      v7 = BattleSkillInfoData___c_TypeInfo->static_fields;
      v7->__9__121_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__121_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__121_0, (int32_t)_9__121_0, v8, v9, v10, v11, v12, v13);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__121_0,
      0,
      (const MethodInfo_3815EE8 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  Il2CppObject *v41; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppObject *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  Il2CppObject *v55; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  Il2CppObject *v62; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppObject *v69; // x21
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  Il2CppObject *v76; // x21
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  Il2CppObject *v83; // x21
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  Il2CppObject *v90; // x21
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  Il2CppObject *v97; // x20
  __int64 v99; // x0
  int32_t changeTDCommandType; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t itemImageId; // [xsp+8h] [xbp-58h] BYREF
  int32_t strengthStatus; // [xsp+Ch] [xbp-54h] BYREF
  bool v103[4]; // [xsp+10h] [xbp-50h] BYREF
  int32_t priority; // [xsp+14h] [xbp-4Ch] BYREF
  int v105; // [xsp+18h] [xbp-48h] BYREF
  int32_t skilllv; // [xsp+1Ch] [xbp-44h] BYREF
  int v107; // [xsp+20h] [xbp-40h] BYREF
  bool v108[4]; // [xsp+24h] [xbp-3Ch] BYREF
  bool v109[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtUniqueId; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t index; // [xsp+38h] [xbp-28h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_597377A & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&BattleSkillInfoData_TYPE_TypeInfo);
    sub_2213A60(&StringLiteral_16518/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/);
    byte_597377A = 1;
  }
  v3 = (System_Object_array *)sub_2213B20(object___TypeInfo, 13);
  type = this->fields.type;
  v4 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  v12 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_44;
  v3->m_Items[0] = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v3->m_Items, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  index = this->fields.index;
  v4 = j_il2cpp_value_box_0(qword_5984348, &index);
  v20 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( (v3->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_44;
  v3->m_Items[1] = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[1], (int32_t)v20, v14, v15, v16, v17, v18, v19);
  svtUniqueId = this->fields.svtUniqueId;
  v4 = j_il2cpp_value_box_0(qword_5984348, &svtUniqueId);
  v27 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_44;
  v3->m_Items[2] = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[2], (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v109[0] = this->fields.isPassive;
  v4 = j_il2cpp_value_box_0(qword_5984328, v109);
  v34 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( (v3->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_44;
  v3->m_Items[3] = v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[3], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  v108[0] = this->fields.isCharge;
  v4 = j_il2cpp_value_box_0(qword_5984328, v108);
  v41 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 4 )
    goto LABEL_44;
  v3->m_Items[4] = v41;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[4], (int32_t)v41, v35, v36, v37, v38, v39, v40);
  v107 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
           this,
           this->klass->vtable._5_get_skillId.method);
  v4 = j_il2cpp_value_box_0(qword_5984348, &v107);
  v48 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 5 )
    goto LABEL_44;
  v3->m_Items[5] = v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[5], (int32_t)v48, v42, v43, v44, v45, v46, v47);
  skilllv = this->fields.skilllv;
  v4 = j_il2cpp_value_box_0(qword_5984348, &skilllv);
  v55 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 6 )
    goto LABEL_44;
  v3->m_Items[6] = v55;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[6], (int32_t)v55, v49, v50, v51, v52, v53, v54);
  v105 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
           this,
           this->klass->vtable._6_get_chargeTurn.method);
  v4 = j_il2cpp_value_box_0(qword_5984348, &v105);
  v62 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( (v3->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_44;
  v3->m_Items[7] = v62;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[7], (int32_t)v62, v56, v57, v58, v59, v60, v61);
  priority = this->fields.priority;
  v4 = j_il2cpp_value_box_0(qword_5984348, &priority);
  v69 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 8 )
    goto LABEL_44;
  v3->m_Items[8] = v69;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[8], (int32_t)v69, v63, v64, v65, v66, v67, v68);
  v103[0] = this->fields.isUseSkill;
  v4 = j_il2cpp_value_box_0(qword_5984328, v103);
  v76 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 9 )
    goto LABEL_44;
  v3->m_Items[9] = v76;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[9], (int32_t)v76, v70, v71, v72, v73, v74, v75);
  strengthStatus = this->fields.strengthStatus;
  v4 = j_il2cpp_value_box_0(qword_5984348, &strengthStatus);
  v83 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 0xA )
    goto LABEL_44;
  v3->m_Items[10] = v83;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[10], (int32_t)v83, v77, v78, v79, v80, v81, v82);
  itemImageId = this->fields.itemImageId;
  v4 = j_il2cpp_value_box_0(qword_5984348, &itemImageId);
  v90 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( LODWORD(v3->max_length) <= 0xB )
    goto LABEL_44;
  v3->m_Items[11] = v90;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[11], (int32_t)v90, v84, v85, v86, v87, v88, v89);
  changeTDCommandType = this->fields.changeTDCommandType;
  v4 = j_il2cpp_value_box_0(qword_5984348, &changeTDCommandType);
  v97 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_45:
      v99 = sub_2213D00(v4, v13);
      sub_2213BA0(v99, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 0xC )
LABEL_44:
    sub_2213CE4(v4);
  v3->m_Items[12] = v97;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[12], (int32_t)v97, v91, v92, v93, v94, v95, v96);
  return System_String__Format_75698016((System_String_o *)StringLiteral_16518/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v3, 0);
}


bool BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(
        BattleSkillInfoData_o *this,
        BattleBranchSkillInfoData_o **battleBranchSkillInfo,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  bool IsNullOrEmpty; // w8
  System_Int32_array *Individualities; // x0
  struct BattleBranchSkillInfoData_array *BranchSkillInfos_k__BackingField; // x22
  int max_length; // w8
  int32_t svtUniqueId; // w24
  int32_t uniqueId; // w25
  __int64 v18; // x23
  BattleBranchSkillInfoData_o *v19; // x21
  const MethodInfo *v20; // x3
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  *battleBranchSkillInfo = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)battleBranchSkillInfo,
    0,
    (System_String_o *)targetSvtData,
    (System_String_o *)method,
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
LABEL_13:
      sub_2213CDC(Individualities, v11);
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
        if ( (unsigned int)v18 >= max_length )
          sub_2213CE4(Individualities);
        v19 = BranchSkillInfos_k__BackingField->m_Items[v18];
        Individualities = BattleServantData__getIndividualities(targetSvtData, 0, 1, 0, 1, 0);
        if ( !v19 )
          goto LABEL_13;
        Individualities = (System_Int32_array *)BattleBranchSkillInfoData__IsSatisfyCond(
                                                  v19,
                                                  svtUniqueId == uniqueId,
                                                  Individualities,
                                                  v20);
        if ( ((unsigned __int8)Individualities & 1) != 0 )
          break;
        max_length = BranchSkillInfos_k__BackingField->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_10;
      }
      *battleBranchSkillInfo = v19;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)battleBranchSkillInfo, (int32_t)v19, v21, v22, v23, v24, v25, v26);
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
  __int64 v11; // x1
  System_Int32_array *v12; // x23
  int v14; // w0
  int v15; // w8
  const MethodInfo *v16; // x1
  Il2CppMethodPointer methodPtr; // x10

  if ( (byte_5973785 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5973785 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v12 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._8_get_IndividualityArray.methodPtr)(
                                this,
                                this->klass->vtable._8_get_IndividualityArray.method,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11);
  if ( !Individuality__CheckSignedIndividualities(v12, targetList, 0)
    || this->fields.isPassive
    || !this->fields.isUseSkill )
  {
    return 0;
  }
  v14 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
          this,
          this->klass->vtable._6_get_chargeTurn.method);
  ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_set_chargeTurn.methodPtr)(
    this,
    (unsigned int)(v14 + turnCount),
    this->klass->vtable._7_set_chargeTurn.method);
  v15 = this->fields.sealedTurn
      + ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
          this,
          this->klass->vtable._6_get_chargeTurn.method);
  methodPtr = this->klass->vtable._6_get_chargeTurn.methodPtr;
  v16 = this->klass->vtable._6_get_chargeTurn.method;
  this->fields.isCharge = v15 < 1;
  if ( ((int (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))methodPtr)(this, v16) > max )
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
  int32_t v6; // w8
  const MethodInfo *v7; // x1
  Il2CppMethodPointer methodPtr; // x10
  int v9; // w0
  int32_t sealedTurn; // w8

  if ( !this->fields.isPassive )
  {
    v6 = this->fields.sealedTurn + turnCount;
    methodPtr = this->klass->vtable._6_get_chargeTurn.methodPtr;
    v7 = this->klass->vtable._6_get_chargeTurn.method;
    this->fields.sealedTurn = v6;
    v9 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, int32_t, const MethodInfo *))methodPtr)(
           this,
           v7,
           max,
           method);
    sealedTurn = this->fields.sealedTurn;
    this->fields.isCharge = sealedTurn + v9 < 1;
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
  __int64 v11; // x1
  System_Int32_array *v12; // x23
  int v14; // w0
  int32_t sealedTurn; // w8
  int32_t v16; // w8
  int v17; // w0

  if ( (byte_5973784 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5973784 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v12 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._8_get_IndividualityArray.methodPtr)(
                                this,
                                this->klass->vtable._8_get_IndividualityArray.method,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11);
  if ( !Individuality__CheckSignedIndividualities(v12, targetList, 0) )
    return 0;
  if ( this->fields.isPassive )
    return 0;
  v14 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._6_get_chargeTurn.methodPtr)(
          this,
          this->klass->vtable._6_get_chargeTurn.method);
  sealedTurn = this->fields.sealedTurn;
  if ( sealedTurn + v14 < 1 )
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
  v16 = sealedTurn - turnCount;
  this->fields.sealedTurn = v16;
  if ( v16 < 0 )
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

  if ( (byte_597378B & 1) == 0 )
  {
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_597378B = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._12_GetLoadArray.methodPtr)(
         this,
         this->klass->vtable._12_GetLoadArray.method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_2213CE4(v3);
      v8 = *(BattleSkillInfoData_o **)(v6 + 32 + 8 * v7);
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v4);
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

  if ( (byte_597377B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597377B = 1;
  }
  result = this->fields.cutInId;
  entity = 0;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                   this,
                                   this->klass->vtable._5_get_skillId.method);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_2213CDC(Instance, v5);
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

  if ( (byte_5973791 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973791 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


bool BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973781 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973781 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_2213CDC(Instance, v4);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0);
}


bool BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973780 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973780 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_2213CDC(Instance, v4);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0);
}


int32_t BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973783 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973783 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_597377D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597377D = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_597377E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597377E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_2213CDC(Instance, v4);
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

  if ( (byte_597377F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597377F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


System_String_array *BattleSkillInfoData__getSkillCutInVoices(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597377C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597377C = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                               this,
                               this->klass->vtable._5_get_skillId.method);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0);
LABEL_10:
    sub_2213CDC(Instance, v4);
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
  __int64 v4; // x1
  long double v5; // q0
  DataVals_array *result; // x0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_5973796 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_DataVals___);
    byte_5973796 = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0)) == 0 )
  {
    v7 = Method_System_Array_Empty_DataVals___;
    v8 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v8 )
    {
      sub_224B964(Method_System_Array_Empty_DataVals___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v5);
    if ( !*(_DWORD *)(v9 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v9, v4);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v5);
    return **(DataVals_array ***)(v10 + 184);
  }
  return result;
}


System_Int32_array *BattleSkillInfoData__get_IndividualityArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct System_Int32_array **p_individualityArray; // x19
  struct System_Int32_array *individualityArray; // x21
  int32_t v5; // w0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
           this,
           this->klass->vtable._5_get_skillId.method);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0);
    this->fields.individualityArray = individualityArray;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_individualityArray,
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
  __int64 v5; // x1
  System_Object_array *DataValArray; // x20
  BattleSkillInfoData___c_c *v7; // x8
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__124_0; // x21
  Il2CppObject *v10; // x22
  struct BattleSkillInfoData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  bool v18; // w8
  struct System_Nullable_bool__o *v19; // x0
  struct System_Nullable_bool__o v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_597379C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_DataVals___);
    sub_2213A60(&System_Func_DataVals__bool__TypeInfo);
    sub_2213A60(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_bool___ctor__);
    sub_2213A60(&Method_System_Nullable_bool__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_bool__get_Value__);
    sub_2213A60(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__124_0__);
    sub_2213A60(&BattleSkillInfoData___c_TypeInfo);
    byte_597379C = 1;
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
      v7 = BattleSkillInfoData___c_TypeInfo;
      if ( !*(&BattleSkillInfoData___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v5);
        v7 = BattleSkillInfoData___c_TypeInfo;
      }
      static_fields = v7->static_fields;
      _9__124_0 = (System_Func_object__bool__o *)static_fields->__9__124_0;
      if ( !_9__124_0 )
      {
        if ( !*(&v7->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v7, v5);
          static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
        }
        v10 = (Il2CppObject *)static_fields->__9;
        _9__124_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DataVals__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__124_0,
          v10,
          Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__124_0__,
          0);
        v11 = BattleSkillInfoData___c_TypeInfo->static_fields;
        v11->__9__124_0 = (struct System_Func_DataVals__bool__o *)_9__124_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v11->__9__124_0,
          (int32_t)_9__124_0,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      v18 = BasicHelper__Any_object__58785420(
              DataValArray,
              (System_Func_T__bool__o *)_9__124_0,
              (const MethodInfo_380FE8C *)Method_BasicHelper_Any_DataVals___);
      v19 = &v21;
      v21 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v19,
        v18,
        (const MethodInfo_45E0940 *)Method_System_Nullable_bool___ctor__);
      *p_hasAddBattlePointFunc = v21;
    }
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_hasAddBattlePointFunc,
             (const MethodInfo_45E0958 *)Method_System_Nullable_bool__get_Value__);
  }
}


bool BattleSkillInfoData__get_IsMasterEquipType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v6; // x8
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__126_0; // x20
  Il2CppObject *v9; // x21
  struct BattleSkillInfoData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_597379D & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_DataVals___);
    sub_2213A60(&System_Func_DataVals__bool__TypeInfo);
    sub_2213A60(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__126_0__);
    sub_2213A60(&BattleSkillInfoData___c_TypeInfo);
    byte_597379D = 1;
  }
  if ( this->fields.type == 2 || !BattleSkillInfoData__get_IsContainedBattlePointFunc(this, method) )
  {
    return 0;
  }
  else
  {
    DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, v3);
    v6 = BattleSkillInfoData___c_TypeInfo;
    if ( !*(&BattleSkillInfoData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v4);
      v6 = BattleSkillInfoData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__126_0 = (System_Func_object__bool__o *)static_fields->__9__126_0;
    if ( !_9__126_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v4);
        static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__126_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__126_0,
        v9,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__126_0__,
        0);
      v10 = BattleSkillInfoData___c_TypeInfo->static_fields;
      v10->__9__126_0 = (struct System_Func_DataVals__bool__o *)_9__126_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->__9__126_0,
        (int32_t)_9__126_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    return !BasicHelper__Any_object__58785420(
              DataValArray,
              (System_Func_T__bool__o *)_9__126_0,
              (const MethodInfo_380FE8C *)Method_BasicHelper_Any_DataVals___);
  }
}


bool BattleSkillInfoData__get_IsReActForSummonedServant(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields._IsReActForSummonedServant_k__BackingField;
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

  if ( (byte_5973797 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_DataVals___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_2213A60(&System_Func_DataVals__bool__TypeInfo);
    byte_5973797 = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_DataVals__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0);
  v5 = System_Linq_Enumerable__Where_object_(
         DataValArray,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v5,
                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataVals_array *ValidDataValArray; // x0
  __int64 v4; // x1
  BattleSkillInfoData___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__117_0; // x20
  Il2CppObject *v9; // x21
  struct BattleSkillInfoData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_5973798 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_DataVals__int__TypeInfo);
    sub_2213A60(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__117_0__);
    sub_2213A60(&BattleSkillInfoData___c_TypeInfo);
    byte_5973798 = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v5 = BattleSkillInfoData___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !*(&BattleSkillInfoData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v4);
    v5 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__117_0 = (System_Func_object__int__o *)static_fields->__9__117_0;
  if ( !_9__117_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__117_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__117_0,
      v9,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__117_0__,
      0);
    v10 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v10->__9__117_0 = (struct System_Func_DataVals__int__o *)_9__117_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__117_0, (int32_t)_9__117_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v6,
                                                               (System_Func_TSource__TResult__o *)_9__117_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  return (this->fields.type < 0x1Bu) & (0x7001C00u >> this->fields.type);
}


void BattleSkillInfoData__set_BranchSkillInfos(
        BattleSkillInfoData_o *this,
        BattleBranchSkillInfoData_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BranchSkillInfos_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BranchSkillInfos_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSkillInfoData__set_IsReActForSummonedServant(
        BattleSkillInfoData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsReActForSummonedServant_k__BackingField = value;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597379F & 1) == 0 )
  {
    sub_2213A60(&BattleSkillInfoData___c_TypeInfo);
    byte_597379F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleSkillInfoData___c_TypeInfo->static_fields,
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


int32_t BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__120_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return DataVals__GetParam(x, 128, -1, 0);
}


int32_t BattleSkillInfoData___c___SortSkill_b__121_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


bool BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__124_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  int32_t funcType; // w8

  if ( !x )
    sub_2213CDC(this, 0);
  funcType = x->fields.funcType;
  return funcType == 142 || funcType == 166;
}


bool BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__126_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  int32_t funcType; // w8

  if ( !x )
    sub_2213CDC(this, 0);
  funcType = x->fields.funcType;
  return funcType != 142 && funcType != 166;
}


int32_t BattleSkillInfoData___c___get_ValidTargetTypeArray_b__117_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.targetType;
}