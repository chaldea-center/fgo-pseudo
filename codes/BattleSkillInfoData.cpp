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
  __int64 v8; // x2
  SkillMotionSkip_o *v9; // x19

  if ( (byte_49FEBB4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&SkillMotionSkip_TypeInfo, v4);
    byte_49FEBB4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1B64324(v6);
  v9 = 0LL;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v6, 0LL) )
  {
    v9 = (SkillMotionSkip_o *)sub_1B64314(SkillMotionSkip_TypeInfo, v7, v8);
    SkillMotionSkip___ctor(v9, 0LL);
  }
  return (BaseMotionSkip_o *)v9;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v9; // x19
  __int64 v10; // x1
  struct System_Int32_array *funcId; // x20
  __int64 v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  unsigned __int64 v14; // x21

  if ( (byte_49FEBAF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FEBAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v9 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v9->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_1B64324(Instance);
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
        sub_1B6432C(Instance, v10);
      if ( !v13 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   funcId->m_Items[v14 + 1],
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_49FEBB0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEBB0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1B64324(Instance);
  }
  return SkillLvEntity__GetAddIndiv((SkillLvEntity_o *)Instance, 0LL);
}


int32_t __fastcall BattleSkillInfoData__GetCondItemId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1B64324(HasCond);
  return commonReleaseEntity->fields.condId;
}


int32_t __fastcall BattleSkillInfoData__GetCondItemNumber(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  _BOOL8 HasCond; // x0
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  HasCond = BattleSkillInfoData__HasCond(this, method);
  if ( !HasCond )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_1B64324(HasCond);
  return commonReleaseEntity->fields.condNum;
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
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBBB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, isBefore);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FEBBB = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_1B64324(Instance);
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

  if ( (byte_49FEBB3 & 1) == 0 )
  {
    sub_1B640C8(&BattleSkillInfoData___TypeInfo, method);
    byte_49FEBB3 = 1;
  }
  v3 = sub_1B64170(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B64324(0LL);
  v7 = v3;
  if ( this )
  {
    v3 = sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v9 = sub_1B64348(0LL);
      sub_1B641F0(v9, 0LL);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
    sub_1B6432C(v3, v4);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v5, v6);
  return (BattleSkillInfoData_array *)v7;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_ICollection_o *DataValArray; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  BattleSkillInfoData___c_c *v10; // x0
  System_Func_object__int__o *_9__90_0; // x20
  Il2CppObject *v12; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FEBBF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Max_DataVals___, method);
    sub_1B640C8(&System_Func_DataVals__int__TypeInfo, v3);
    sub_1B640C8(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__90_0__, v4);
    sub_1B640C8(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_49FEBBF = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v10 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v10 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__90_0 = (System_Func_object__int__o *)v10->static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleSkillInfoData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__90_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_DataVals__int__TypeInfo, v7, v8);
    System_Func_object__int____ctor(
      _9__90_0,
      v12,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__90_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__90_0 = (struct System_Func_DataVals__int__o *)_9__90_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__90_0, (int32_t)_9__90_0, v14, v15);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__90_0,
           (const MethodInfo_2E61D74 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_49FEBBA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEBBA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object) )
  {
    sub_1B64324(Instance);
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
  CommonReleaseEntity_array *v11; // x21
  CommonReleaseEntity_o *v12; // x8
  struct System_Nullable_bool__o *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  struct CommonReleaseEntity_o *v18; // x1
  struct System_Nullable_bool__o v19; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v20; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v21; // 0:w0.2

  if ( (byte_49FEBB6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B640C8(&Method_System_Nullable_bool___ctor__, v3);
    sub_1B640C8(&Method_System_Nullable_bool__get_HasValue__, v4);
    sub_1B640C8(&Method_System_Nullable_bool__get_Value__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FEBB6 = 1;
  }
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v8 = &v20;
    v20 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_35CA22C *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v20;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0LL);
      if ( !Instance )
        goto LABEL_14;
      v11 = Instance;
      if ( Instance->max_length != 1 )
        goto LABEL_4;
      v12 = Instance->m_Items[0];
      if ( !v12 )
LABEL_14:
        sub_1B64324(Instance);
      if ( v12->fields.condType == 2 )
      {
        v13 = &v19;
        v19 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v13,
          1,
          (const MethodInfo_35CA22C *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v19;
        if ( !v11->max_length )
          sub_1B6432C(v14, v15);
        v18 = v11->m_Items[0];
        this->fields.commonReleaseEntity = v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commonReleaseEntity, (int32_t)v18, v16, v17);
      }
    }
  }
LABEL_4:
  v21 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v21, (const MethodInfo_35CA248 *)Method_System_Nullable_bool__get_Value__);
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

  if ( (byte_49FEBB7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEBB7 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
    sub_1B64324(this);
  return !DataVals__TryGetParam(dataVal, 124, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x20
  __int64 v9; // x1
  struct System_Int32_array *funcId; // x20
  __int64 v11; // x8
  bool v12; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  unsigned __int64 v14; // x22

  if ( (byte_49FEBAE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FEBAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___);
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
        sub_1B6432C(Instance, v9);
      if ( !v13 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   funcId->m_Items[v14 + 1],
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
    sub_1B64324(Instance);
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

  if ( (byte_49FEBB9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FEBB9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1B64324(v5);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v5, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  const MethodInfo *v7; // x1
  _QWORD *v8; // x8

  if ( (byte_49FEBB5 & 1) == 0 )
  {
    sub_1B640C8(&BattleMasterSkillInfoData_TypeInfo, method);
    sub_1B640C8(&BattleSelfSkillInfoData_TypeInfo, v4);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v5);
    byte_49FEBB5 = 1;
  }
  if ( type == 1 )
  {
    v8 = &BattleMasterSkillInfoData_TypeInfo;
LABEL_8:
    v6 = sub_1B64314(*v8, method, v2);
    *(_DWORD *)(v6 + 64) = -1;
    *(_QWORD *)(v6 + 88) = -1LL;
    *(_QWORD *)(v6 + 96) = -1LL;
    *(_DWORD *)(v6 + 104) = -1;
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    return (BattleSkillInfoData_o *)v6;
  }
  if ( type != 11 )
  {
    v8 = &BattleSkillInfoData_TypeInfo;
    goto LABEL_8;
  }
  v6 = sub_1B64314(BattleSelfSkillInfoData_TypeInfo, method, v2);
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)v6, v7);
  return (BattleSkillInfoData_o *)v6;
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

  if ( (byte_49FEBB1 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_49FEBB1 = 1;
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
        sub_1B6432C(Instance, v7);
      v12 = (BattleSkillInfoData_o *)*((_QWORD *)&v9->fields.svtmaster + v10);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadSkillAnyVoice(v12, v11, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v12, 0LL);
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1B64324(Instance);
  }
}


void __fastcall BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleSkillInfoData___c_c *v7; // x0
  System_Func_object__int__o *_9__91_0; // x20
  Il2CppObject *v9; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FEBC0 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_StableSort_BattleSkillInfoData___, method);
    sub_1B640C8(&System_Func_BattleSkillInfoData__int__TypeInfo, v4);
    sub_1B640C8(&Method_BattleSkillInfoData___c__SortSkill_b__91_0__, v5);
    sub_1B640C8(&BattleSkillInfoData___c_TypeInfo, v6);
    byte_49FEBC0 = 1;
  }
  if ( skillList )
  {
    v7 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v7 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__91_0 = (System_Func_object__int__o *)v7->static_fields->__9__91_0;
    if ( !_9__91_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleSkillInfoData___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__91_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleSkillInfoData__int__TypeInfo, method, v2);
      System_Func_object__int____ctor(_9__91_0, v9, Method_BattleSkillInfoData___c__SortSkill_b__91_0__, 0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__91_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__91_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v11, v12);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__91_0,
      0,
      (const MethodInfo_2E292C0 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x19
  __int64 v50; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  char v54[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t chargeTurn; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v58; // [xsp+28h] [xbp-48h] BYREF
  char v59[4]; // [xsp+2Ch] [xbp-44h] BYREF
  char v60[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_49FEBA5 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&object___TypeInfo, v4);
    sub_1B640C8(&BattleSkillInfoData_TYPE_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_15839/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v6);
    byte_49FEBA5 = 1;
  }
  v7 = (System_Object_array *)sub_1B64170(object___TypeInfo, 13LL);
  type = this->fields.type;
  v8 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v7 )
    sub_1B64324(v8);
  v12 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( !v7->max_length )
    goto LABEL_44;
  v7->m_Items[0] = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)v12, v10, v11);
  index = this->fields.index;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &index);
  v15 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_44;
  v7->m_Items[1] = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[1], (int32_t)v15, v13, v14);
  svtUniqueId = this->fields.svtUniqueId;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId);
  v18 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_44;
  v7->m_Items[2] = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[2], (int32_t)v18, v16, v17);
  v60[0] = this->fields.isPassive;
  v8 = j_il2cpp_value_box_0(bool_TypeInfo, v60);
  v21 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_44;
  v7->m_Items[3] = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[3], (int32_t)v21, v19, v20);
  v59[0] = this->fields.isCharge;
  v8 = j_il2cpp_value_box_0(bool_TypeInfo, v59);
  v24 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 4 )
    goto LABEL_44;
  v7->m_Items[4] = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[4], (int32_t)v24, v22, v23);
  v58 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
          this,
          this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v58);
  v27 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 5 )
    goto LABEL_44;
  v7->m_Items[5] = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[5], (int32_t)v27, v25, v26);
  skilllv = this->fields.skilllv;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
  v30 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 6 )
    goto LABEL_44;
  v7->m_Items[6] = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[6], (int32_t)v30, v28, v29);
  chargeTurn = this->fields.chargeTurn;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
  v33 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 7 )
    goto LABEL_44;
  v7->m_Items[7] = v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[7], (int32_t)v33, v31, v32);
  priority = this->fields.priority;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &priority);
  v36 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 8 )
    goto LABEL_44;
  v7->m_Items[8] = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[8], (int32_t)v36, v34, v35);
  v54[0] = this->fields.isUseSkill;
  v8 = j_il2cpp_value_box_0(bool_TypeInfo, v54);
  v39 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 9 )
    goto LABEL_44;
  v7->m_Items[9] = v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[9], (int32_t)v39, v37, v38);
  strengthStatus = this->fields.strengthStatus;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus);
  v42 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xA )
    goto LABEL_44;
  v7->m_Items[10] = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[10], (int32_t)v42, v40, v41);
  itemImageId = this->fields.itemImageId;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId);
  v45 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xB )
    goto LABEL_44;
  v7->m_Items[11] = v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[11], (int32_t)v45, v43, v44);
  changeTDCommandType = this->fields.changeTDCommandType;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType);
  v48 = (Il2CppObject *)v8;
  if ( v8 )
  {
    v8 = sub_1B64204(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_45:
      v50 = sub_1B64348(v8);
      sub_1B641F0(v50, 0LL);
    }
  }
  if ( v7->max_length <= 0xC )
LABEL_44:
    sub_1B6432C(v8, v9);
  v7->m_Items[12] = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->m_Items[12], (int32_t)v48, v46, v47);
  return System_String__Format_61389904((System_String_o *)StringLiteral_15839/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v7, 0LL);
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

  if ( (byte_49FEBB2 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, method);
    byte_49FEBB2 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_1B64324(0LL);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1B6432C(v3, v4);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FEBA6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBA6 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                   this,
                                   this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBB8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B64324(Instance);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBAC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBAC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B64324(Instance);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBAB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBAB = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B64324(Instance);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBAD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBAD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBA8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBA8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBA9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBA9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBAA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBAA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEBA7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEBA7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B64324(Instance);
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

  if ( (byte_49FEBBC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_DataVals___, method);
    byte_49FEBBC = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v5 = Method_System_Array_Empty_DataVals___;
    v6 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v6 )
    {
      sub_1BB6000(Method_System_Array_Empty_DataVals___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BB5FA4(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BB5FA4(v8);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_individualityArray, (int32_t)individualityArray, v6, v7);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v10; // x8
  System_Func_object__bool__o *_9__93_0; // x20
  Il2CppObject *v12; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FEBC1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_DataVals___, method);
    sub_1B640C8(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1B640C8(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__93_0__, v4);
    sub_1B640C8(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_49FEBC1 = 1;
  }
  if ( this->fields.type == 2 )
    return 0;
  DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, method);
  v10 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v10 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__93_0 = (System_Func_object__bool__o *)v10->static_fields->__9__93_0;
  if ( !_9__93_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleSkillInfoData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__93_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_DataVals__bool__TypeInfo, v7, v8);
    System_Func_object__bool____ctor(
      _9__93_0,
      v12,
      Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__93_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__93_0 = (struct System_Func_DataVals__bool__o *)_9__93_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__93_0, (int32_t)_9__93_0, v14, v15);
  }
  return BasicHelper__Any_object__48384284(
           DataValArray,
           (System_Func_T__bool__o *)_9__93_0,
           (const MethodInfo_2E2491C *)Method_BasicHelper_Any_DataVals___);
}


bool __fastcall BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v10; // x8
  System_Func_object__bool__o *_9__95_0; // x20
  Il2CppObject *v12; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FEBC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_DataVals___, method);
    sub_1B640C8(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1B640C8(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__95_0__, v4);
    sub_1B640C8(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_49FEBC2 = 1;
  }
  if ( this->fields.type == 2 || !BattleSkillInfoData__get_IsContainedBattlePointFunc(this, method) )
  {
    return 0;
  }
  else
  {
    DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, v6);
    v10 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v10 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__95_0 = (System_Func_object__bool__o *)v10->static_fields->__9__95_0;
    if ( !_9__95_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleSkillInfoData___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__95_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_DataVals__bool__TypeInfo, v7, v8);
      System_Func_object__bool____ctor(
        _9__95_0,
        v12,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__95_0__,
        0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__95_0 = (struct System_Func_DataVals__bool__o *)_9__95_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__95_0, (int32_t)_9__95_0, v14, v15);
    }
    return !BasicHelper__Any_object__48384284(
              DataValArray,
              (System_Func_T__bool__o *)_9__95_0,
              (const MethodInfo_2E2491C *)Method_BasicHelper_Any_DataVals___);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_49FEBBD & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_DataVals___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_1B640C8(&System_Func_DataVals__bool__TypeInfo, v5);
    byte_49FEBBD = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v9 = (System_Func_object__bool__o *)sub_1B64314(System_Func_DataVals__bool__TypeInfo, v7, v8);
  System_Func_object__bool____ctor(v9, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          DataValArray,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v10,
                             (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
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
  __int64 v8; // x1
  __int64 v9; // x2
  BattleSkillInfoData___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__89_0; // x20
  Il2CppObject *v13; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_49FEBBE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1B640C8(&System_Func_DataVals__int__TypeInfo, v4);
    sub_1B640C8(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__89_0__, v5);
    sub_1B640C8(&BattleSkillInfoData___c_TypeInfo, v6);
    byte_49FEBBE = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v10 = BattleSkillInfoData___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v10 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__89_0 = (System_Func_object__int__o *)v10->static_fields->__9__89_0;
  if ( !_9__89_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleSkillInfoData___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__89_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_DataVals__int__TypeInfo, v8, v9);
    System_Func_object__int____ctor(
      _9__89_0,
      v13,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__89_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Func_DataVals__int__o *)_9__89_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__89_0, (int32_t)_9__89_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__89_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEBC3 & 1) == 0 )
  {
    sub_1B640C8(&BattleSkillInfoData___c_TypeInfo, v1);
    byte_49FEBC3 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleSkillInfoData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleSkillInfoData___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__90_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return DataVals__GetParam(x, 124, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___SortSkill_b__91_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.priority;
}


bool __fastcall BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__93_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.funcType == 142;
}


bool __fastcall BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__95_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.funcType != 142;
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__89_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.targetType;
}