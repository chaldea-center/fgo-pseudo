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
  Il2CppObject *Master_object; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  SkillMotionSkip_o *v6; // x19

  if ( (byte_4A5D967 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&SkillMotionSkip_TypeInfo);
    byte_4A5D967 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1B8880C(v4, v5);
  v6 = 0LL;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v4, 0LL) )
  {
    v6 = (SkillMotionSkip_o *)sub_1B887FC(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v6, 0LL);
  }
  return (BaseMotionSkip_o *)v6;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v7; // x19
  struct System_Int32_array *funcId; // x20
  __int64 v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  unsigned __int64 v11; // x21

  if ( (byte_4A5D962 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D962 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v7 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v7->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(Instance, v4);
  }
  v9 = *(_QWORD *)&funcId->max_length;
  if ( (int)v9 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1B88814(Instance, v4);
      if ( !v10 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   funcId->m_Items[v11 + 1],
                   (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance[1].monitor) == 27 )
          break;
      }
      LODWORD(v9) = funcId->max_length;
      if ( (__int64)++v11 >= (int)v9 )
        goto LABEL_15;
    }
    LOBYTE(Entity) = 1;
  }
  return (char)Entity;
}


System_Int32_array *__fastcall BattleSkillInfoData__GetAddIndiv(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5D963 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D963 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(HasCond, v4);
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
    sub_1B8880C(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


int32_t __fastcall BattleSkillInfoData__GetFieldCallEffectId(
        BattleSkillInfoData_o *this,
        bool isBefore,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D96E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D96E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_1B8880C(Instance, v6);
  }
  return -1;
}


BattleSkillInfoData_array *__fastcall BattleSkillInfoData__GetLoadArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x20
  __int64 v9; // x0

  if ( (byte_4A5D966 & 1) == 0 )
  {
    sub_1B885B0(&BattleSkillInfoData___TypeInfo);
    byte_4A5D966 = 1;
  }
  v3 = sub_1B88658(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = v3;
  if ( this )
  {
    v3 = sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v9 = sub_1B88830(0LL);
      sub_1B886D8(v9, 0LL);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
    sub_1B88814(v3, v4);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v5, v6);
  return (BattleSkillInfoData_array *)v7;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x0
  System_Func_object__int__o *_9__91_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D972 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Max_DataVals___);
    sub_1B885B0(&System_Func_DataVals__int__TypeInfo);
    sub_1B885B0(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__);
    sub_1B885B0(&BattleSkillInfoData___c_TypeInfo);
    byte_4A5D972 = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v5 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v5 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__91_0 = (System_Func_object__int__o *)v5->static_fields->__9__91_0;
  if ( !_9__91_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleSkillInfoData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__91_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__91_0,
      v7,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__91_0 = (struct System_Func_DataVals__int__o *)_9__91_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v9, v10);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__91_0,
           (const MethodInfo_2EA8AE0 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5D96D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D96D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object) )
  {
    sub_1B8880C(Instance, v4);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
}


bool __fastcall BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct System_Nullable_bool__o *v4; // x0
  int32_t commonReleaseCondId; // w8
  CommonReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  CommonReleaseEntity_array *v8; // x21
  CommonReleaseEntity_o *v9; // x8
  struct System_Nullable_bool__o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct CommonReleaseEntity_o *v15; // x1
  struct System_Nullable_bool__o v16; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v17; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v18; // 0:w0.2

  if ( (byte_4A5D969 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_System_Nullable_bool___ctor__);
    sub_1B885B0(&Method_System_Nullable_bool__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_bool__get_Value__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D969 = 1;
  }
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v4 = &v17;
    v17 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v4,
      0,
      (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v17;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0LL);
      if ( !Instance )
        goto LABEL_14;
      v8 = Instance;
      if ( Instance->max_length != 1 )
        goto LABEL_4;
      v9 = Instance->m_Items[0];
      if ( !v9 )
LABEL_14:
        sub_1B8880C(Instance, v7);
      if ( v9->fields.condType == 2 )
      {
        v10 = &v16;
        v16 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v10,
          1,
          (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v16;
        if ( !v8->max_length )
          sub_1B88814(v11, v12);
        v15 = v8->m_Items[0];
        this->fields.commonReleaseEntity = v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commonReleaseEntity, (int32_t)v15, v13, v14);
      }
    }
  }
LABEL_4:
  v18 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v18, (const MethodInfo_3616780 *)Method_System_Nullable_bool__get_Value__);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5D96A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D96A = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 124, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v8; // x8
  bool v9; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x19
  unsigned __int64 v11; // x22

  if ( (byte_4A5D961 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D961 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !Entity )
    goto LABEL_16;
  funcId = Entity->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  v8 = *(_QWORD *)&funcId->max_length;
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
        sub_1B88814(Instance, v4);
      if ( !v10 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v10,
                   funcId->m_Items[v11 + 1],
                   (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !Instance || HIDWORD(Instance[1].monitor) != 4 )
      {
        LODWORD(v8) = funcId->max_length;
        v9 = (__int64)++v11 < (int)v8;
        if ( (__int64)v11 < (int)v8 )
          continue;
      }
      return v9;
    }
LABEL_16:
    sub_1B8880C(Instance, v4);
  }
  return v9;
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A5D96C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D96C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1B8880C(v4, v5);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v4, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x1
  _QWORD *v5; // x8

  if ( (byte_4A5D968 & 1) == 0 )
  {
    sub_1B885B0(&BattleMasterSkillInfoData_TypeInfo);
    sub_1B885B0(&BattleSelfSkillInfoData_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    byte_4A5D968 = 1;
  }
  if ( type == 1 )
  {
    v5 = &BattleMasterSkillInfoData_TypeInfo;
LABEL_8:
    v3 = sub_1B887FC(*v5);
    *(_DWORD *)(v3 + 64) = -1;
    *(_QWORD *)(v3 + 88) = -1LL;
    *(_QWORD *)(v3 + 96) = -1LL;
    *(_DWORD *)(v3 + 104) = -1;
    System_Object___ctor((Il2CppObject *)v3, 0LL);
    return (BattleSkillInfoData_o *)v3;
  }
  if ( type != 11 )
  {
    v5 = &BattleSkillInfoData_TypeInfo;
    goto LABEL_8;
  }
  v3 = sub_1B887FC(BattleSelfSkillInfoData_TypeInfo);
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)v3, v4);
  return (BattleSkillInfoData_o *)v3;
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


void __fastcall BattleSkillInfoData__PreLoad(BattleSkillInfoData_o *this, bool dlOnly, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantAssetLoadManager_o *v8; // x19
  unsigned __int64 v9; // x22
  bool v10; // w20
  BattleSkillInfoData_o *v11; // x21

  if ( (byte_4A5D964 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4A5D964 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._10_GetLoadArray.method)(
                                            this,
                                            this->klass->vtable._11_PreAddProcess.methodPtr,
                                            method);
  if ( !Instance )
    goto LABEL_13;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v8 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0LL;
    v10 = dlOnly;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(Instance, v6);
      v11 = (BattleSkillInfoData_o *)*((_QWORD *)&v8->fields.svtmaster + v9);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadSkillAnyVoice(v11, v10, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v11, 0LL);
      LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
      if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1B8880C(Instance, v6);
  }
}


void __fastcall BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  BattleSkillInfoData___c_c *v3; // x0
  System_Func_object__int__o *_9__92_0; // x20
  Il2CppObject *v5; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D973 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_StableSort_BattleSkillInfoData___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1B885B0(&Method_BattleSkillInfoData___c__SortSkill_b__92_0__);
    sub_1B885B0(&BattleSkillInfoData___c_TypeInfo);
    byte_4A5D973 = 1;
  }
  if ( skillList )
  {
    v3 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v3 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__92_0 = (System_Func_object__int__o *)v3->static_fields->__9__92_0;
    if ( !_9__92_0 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = BattleSkillInfoData___c_TypeInfo;
      }
      v5 = (Il2CppObject *)v3->static_fields->__9;
      _9__92_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(_9__92_0, v5, Method_BattleSkillInfoData___c__SortSkill_b__92_0__, 0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__92_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__92_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__92_0, (int32_t)_9__92_0, v7, v8);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__92_0,
      0,
      (const MethodInfo_2E6F7DC *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x21
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x21
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x21
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x21
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int32_t v75; // w2
  int32_t v76; // w3
  Il2CppObject *v77; // x21
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int32_t v81; // w2
  int32_t v82; // w3
  Il2CppObject *v83; // x19
  __int64 v85; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  char v89[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t chargeTurn; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v93; // [xsp+28h] [xbp-48h] BYREF
  char v94[4]; // [xsp+2Ch] [xbp-44h] BYREF
  char v95[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4A5D958 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TYPE_TypeInfo);
    sub_1B885B0(&StringLiteral_15907/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/);
    byte_4A5D958 = 1;
  }
  v3 = (System_Object_array *)sub_1B88658(object___TypeInfo, 13LL);
  type = this->fields.type;
  v7 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type, v4, v5, v6);
  if ( !v3 )
    sub_1B8880C(v7, v8);
  v11 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( !v3->max_length )
    goto LABEL_44;
  v3->m_Items[0] = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v3->m_Items, (int32_t)v11, v9, v10);
  index = this->fields.index;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &index, v12, v13, v14);
  v17 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_44;
  v3->m_Items[1] = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[1], (int32_t)v17, v15, v16);
  svtUniqueId = this->fields.svtUniqueId;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId, v18, v19, v20);
  v23 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_44;
  v3->m_Items[2] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[2], (int32_t)v23, v21, v22);
  v95[0] = this->fields.isPassive;
  v7 = j_il2cpp_value_box_0(bool_TypeInfo, v95, v24, v25, v26);
  v29 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_44;
  v3->m_Items[3] = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[3], (int32_t)v29, v27, v28);
  v94[0] = this->fields.isCharge;
  v7 = j_il2cpp_value_box_0(bool_TypeInfo, v94, v30, v31, v32);
  v35 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 4 )
    goto LABEL_44;
  v3->m_Items[4] = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[4], (int32_t)v35, v33, v34);
  v93 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
          this,
          this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v93, v36, v37, v38);
  v41 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 5 )
    goto LABEL_44;
  v3->m_Items[5] = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[5], (int32_t)v41, v39, v40);
  skilllv = this->fields.skilllv;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v42, v43, v44);
  v47 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 6 )
    goto LABEL_44;
  v3->m_Items[6] = v47;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[6], (int32_t)v47, v45, v46);
  chargeTurn = this->fields.chargeTurn;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v48, v49, v50);
  v53 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 7 )
    goto LABEL_44;
  v3->m_Items[7] = v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[7], (int32_t)v53, v51, v52);
  priority = this->fields.priority;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &priority, v54, v55, v56);
  v59 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 8 )
    goto LABEL_44;
  v3->m_Items[8] = v59;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[8], (int32_t)v59, v57, v58);
  v89[0] = this->fields.isUseSkill;
  v7 = j_il2cpp_value_box_0(bool_TypeInfo, v89, v60, v61, v62);
  v65 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 9 )
    goto LABEL_44;
  v3->m_Items[9] = v65;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[9], (int32_t)v65, v63, v64);
  strengthStatus = this->fields.strengthStatus;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus, v66, v67, v68);
  v71 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 0xA )
    goto LABEL_44;
  v3->m_Items[10] = v71;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[10], (int32_t)v71, v69, v70);
  itemImageId = this->fields.itemImageId;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId, v72, v73, v74);
  v77 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 0xB )
    goto LABEL_44;
  v3->m_Items[11] = v77;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[11], (int32_t)v77, v75, v76);
  changeTDCommandType = this->fields.changeTDCommandType;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType, v78, v79, v80);
  v83 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_45:
      v85 = sub_1B88830(v7);
      sub_1B886D8(v85, 0LL);
    }
  }
  if ( v3->max_length <= 0xC )
LABEL_44:
    sub_1B88814(v7, v8);
  v3->m_Items[12] = v83;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[12], (int32_t)v83, v81, v82);
  return System_String__Format_61721540((System_String_o *)StringLiteral_15907/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v3, 0LL);
}


bool __fastcall BattleSkillInfoData__TurnExtend(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  System_Int32_array *v10; // x0
  int32_t v12; // w8
  bool v13; // w9

  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v10 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, int32_t, int32_t, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                max,
                                targetIndex,
                                targetList,
                                method);
  if ( !Individuality__CheckSignedIndividualities(v10, targetList, 0LL)
    || this->fields.isPassive
    || !this->fields.isUseSkill )
  {
    return 0;
  }
  v12 = this->fields.chargeTurn + turnCount;
  v13 = this->fields.sealedTurn + v12 < 1;
  this->fields.chargeTurn = v12;
  this->fields.isCharge = v13;
  if ( v12 > max )
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


bool __fastcall BattleSkillInfoData__TurnProgress(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  System_Int32_array *v10; // x0
  bool result; // w0
  int32_t chargeTurn; // w9
  int sealedTurn; // w8

  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v10 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, int32_t, int32_t, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                max,
                                targetIndex,
                                targetList,
                                method);
  if ( !Individuality__CheckSignedIndividualities(v10, targetList, 0LL) )
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
  }
  else
  {
    sealedTurn -= turnCount;
    this->fields.sealedTurn = sealedTurn;
  }
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

  if ( (byte_4A5D965 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5D965 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1B88814(v3, v4);
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
  int32_t result; // w0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5D959 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D959 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                   this,
                                   this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_1B8880C(Instance, v5);
  }
  return result;
}


int32_t __fastcall BattleSkillInfoData__getInfoId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.index + 100 * this->fields.type;
}


int32_t __fastcall BattleSkillInfoData__getLossCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D96B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D96B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D95F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D95F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B8880C(Instance, v4);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D95E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D95E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B8880C(Instance, v4);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D960 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D960 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 0;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D95B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D95B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D95C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D95C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D95D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D95D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 0LL;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInVoices(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D95A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D95A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 0LL;
}


DataVals_array *__fastcall BattleSkillInfoData__get_DataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  DataVals_array *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4A5D96F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_DataVals___);
    byte_4A5D96F = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v5 = Method_System_Array_Empty_DataVals___;
    v6 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v6 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_DataVals___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    return **(DataVals_array ***)(v8 + 184);
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
  int32_t v6; // w2
  int32_t v7; // w3

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0LL);
    this->fields.individualityArray = individualityArray;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_individualityArray, (int32_t)individualityArray, v6, v7);
  }
  return individualityArray;
}


bool __fastcall BattleSkillInfoData__get_IsContainedBattlePointFunc(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x8
  System_Func_object__bool__o *_9__94_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D974 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_DataVals___);
    sub_1B885B0(&System_Func_DataVals__bool__TypeInfo);
    sub_1B885B0(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__);
    sub_1B885B0(&BattleSkillInfoData___c_TypeInfo);
    byte_4A5D974 = 1;
  }
  if ( this->fields.type == 2 )
    return 0;
  DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, method);
  v5 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v5 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__94_0 = (System_Func_object__bool__o *)v5->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleSkillInfoData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__94_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__94_0,
      v7,
      Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_DataVals__bool__o *)_9__94_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__94_0, (int32_t)_9__94_0, v9, v10);
  }
  return BasicHelper__Any_object__48672124(
           DataValArray,
           (System_Func_T__bool__o *)_9__94_0,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_DataVals___);
}


bool __fastcall BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x8
  System_Func_object__bool__o *_9__96_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D975 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_DataVals___);
    sub_1B885B0(&System_Func_DataVals__bool__TypeInfo);
    sub_1B885B0(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__);
    sub_1B885B0(&BattleSkillInfoData___c_TypeInfo);
    byte_4A5D975 = 1;
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
    _9__96_0 = (System_Func_object__bool__o *)v5->static_fields->__9__96_0;
    if ( !_9__96_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = BattleSkillInfoData___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__96_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__96_0,
        v7,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__,
        0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__96_0 = (struct System_Func_DataVals__bool__o *)_9__96_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__96_0, (int32_t)_9__96_0, v9, v10);
    }
    return !BasicHelper__Any_object__48672124(
              DataValArray,
              (System_Func_T__bool__o *)_9__96_0,
              (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_DataVals___);
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
  System_Collections_Generic_IEnumerable_TSource__o *DataValArray; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4A5D970 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_DataVals___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_1B885B0(&System_Func_DataVals__bool__TypeInfo);
    byte_4A5D970 = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v4 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DataVals__bool__TypeInfo);
  System_Func_object__bool____ctor(v4, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0LL);
  v5 = System_Linq_Enumerable__Where_object_(
         DataValArray,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v5,
                             (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *__fastcall BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataVals_array *ValidDataValArray; // x0
  BattleSkillInfoData___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__int__o *_9__90_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4A5D971 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_DataVals__int__TypeInfo);
    sub_1B885B0(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__);
    sub_1B885B0(&BattleSkillInfoData___c_TypeInfo);
    byte_4A5D971 = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v4 = BattleSkillInfoData___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v4 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__90_0 = (System_Func_object__int__o *)v4->static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleSkillInfoData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__90_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__90_0,
      v7,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__90_0 = (struct System_Func_DataVals__int__o *)_9__90_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__90_0, (int32_t)_9__90_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__90_0,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v11,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D976 & 1) == 0 )
  {
    sub_1B885B0(&BattleSkillInfoData___c_TypeInfo);
    byte_4A5D976 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleSkillInfoData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return DataVals__GetParam(x, 124, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___SortSkill_b__92_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.priority;
}


bool __fastcall BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__94_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.funcType == 142;
}


bool __fastcall BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__96_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.funcType != 142;
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__90_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.targetType;
}