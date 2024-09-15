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

  if ( (byte_4A30727 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    sub_1B761C0(&SkillMotionSkip_TypeInfo, v4);
    byte_4A30727 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1B7641C(v6, v7);
  v8 = 0LL;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v6, 0LL) )
  {
    v8 = (SkillMotionSkip_o *)sub_1B7640C(SkillMotionSkip_TypeInfo);
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

  if ( (byte_4A30722 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B761C0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A30722 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v10->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_1B7641C(Instance, v7);
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
        sub_1B76424(Instance, v7);
      if ( !v13 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   funcId->m_Items[v14 + 1],
                   (const MethodInfo_30FF780 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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

  if ( (byte_4A30723 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A30723 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1B7641C(Instance, v5);
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
    sub_1B7641C(HasCond, v4);
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
    sub_1B7641C(HasCond, v4);
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
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A3072E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, isBefore);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A3072E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_1B7641C(Instance, v8);
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

  if ( (byte_4A30726 & 1) == 0 )
  {
    sub_1B761C0(&BattleSkillInfoData___TypeInfo, method);
    byte_4A30726 = 1;
  }
  v3 = sub_1B76268(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B7641C(0LL, v4);
  v7 = v3;
  if ( this )
  {
    v3 = sub_1B762FC(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v9 = sub_1B76440(0LL);
      sub_1B762E8(v9, 0LL);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
    sub_1B76424(v3, v4);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v5, v6);
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
  BattleSkillInfoData___c_c *v8; // x0
  System_Func_object__int__o *_9__91_0; // x20
  Il2CppObject *v10; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A30732 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Max_DataVals___, method);
    sub_1B761C0(&System_Func_DataVals__int__TypeInfo, v3);
    sub_1B761C0(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__, v4);
    sub_1B761C0(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4A30732 = 1;
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
    _9__91_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__91_0,
      v10,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__91_0 = (struct System_Func_DataVals__int__o *)_9__91_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v12, v13);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__91_0,
           (const MethodInfo_2E8B5E0 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A3072D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A3072D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object) )
  {
    sub_1B7641C(Instance, v5);
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
  int32_t v17; // w2
  int32_t v18; // w3
  struct CommonReleaseEntity_o *v19; // x1
  struct System_Nullable_bool__o v20; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v21; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v22; // 0:w0.2

  if ( (byte_4A30729 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B761C0(&Method_System_Nullable_bool___ctor__, v3);
    sub_1B761C0(&Method_System_Nullable_bool__get_HasValue__, v4);
    sub_1B761C0(&Method_System_Nullable_bool__get_Value__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A30729 = 1;
  }
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v8 = &v21;
    v21 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_35F0794 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v21;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_1B7641C(Instance, v11);
      if ( v13->fields.condType == 2 )
      {
        v14 = &v20;
        v20 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v14,
          1,
          (const MethodInfo_35F0794 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v20;
        if ( !v12->max_length )
          sub_1B76424(v15, v16);
        v19 = v12->m_Items[0];
        this->fields.commonReleaseEntity = v19;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.commonReleaseEntity, (int32_t)v19, v17, v18);
      }
    }
  }
LABEL_4:
  v22 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v22, (const MethodInfo_35F07B0 *)Method_System_Nullable_bool__get_Value__);
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

  if ( (byte_4A3072A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A3072A = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B7641C(Instance, v5);
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
    sub_1B7641C(this, 0LL);
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

  if ( (byte_4A30721 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1B761C0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A30721 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_FunctionMaster___);
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
        sub_1B76424(Instance, v7);
      if ( !v13 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v13,
                   funcId->m_Items[v14 + 1],
                   (const MethodInfo_30FF780 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
    sub_1B7641C(Instance, v7);
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

  if ( (byte_4A3072C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    byte_4A3072C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SkillMaster___);
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1B7641C(v5, v6);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v5, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  _QWORD *v7; // x8

  if ( (byte_4A30728 & 1) == 0 )
  {
    sub_1B761C0(&BattleMasterSkillInfoData_TypeInfo, method);
    sub_1B761C0(&BattleSelfSkillInfoData_TypeInfo, v3);
    sub_1B761C0(&BattleSkillInfoData_TypeInfo, v4);
    byte_4A30728 = 1;
  }
  if ( type == 1 )
  {
    v7 = &BattleMasterSkillInfoData_TypeInfo;
LABEL_8:
    v5 = sub_1B7640C(*v7);
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
  v5 = sub_1B7640C(BattleSelfSkillInfoData_TypeInfo);
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

  if ( (byte_4A30724 & 1) == 0 )
  {
    sub_1B761C0(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4A30724 = 1;
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
        sub_1B76424(Instance, v7);
      v12 = (BattleSkillInfoData_o *)*((_QWORD *)&v9->fields.svtmaster + v10);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadSkillAnyVoice(v12, v11, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v12, 0LL);
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1B7641C(Instance, v7);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A30733 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_StableSort_BattleSkillInfoData___, method);
    sub_1B761C0(&System_Func_BattleSkillInfoData__int__TypeInfo, v3);
    sub_1B761C0(&Method_BattleSkillInfoData___c__SortSkill_b__92_0__, v4);
    sub_1B761C0(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4A30733 = 1;
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
      _9__92_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(_9__92_0, v8, Method_BattleSkillInfoData___c__SortSkill_b__92_0__, 0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__92_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__92_0;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__92_0, (int32_t)_9__92_0, v10, v11);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__92_0,
      0,
      (const MethodInfo_2E522DC *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
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
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x21
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x21
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x21
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x21
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppObject *v81; // x21
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  int32_t v85; // w2
  int32_t v86; // w3
  Il2CppObject *v87; // x19
  __int64 v89; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  char v93[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t chargeTurn; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v97; // [xsp+28h] [xbp-48h] BYREF
  char v98[4]; // [xsp+2Ch] [xbp-44h] BYREF
  char v99[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4A30718 & 1) == 0 )
  {
    sub_1B761C0(&bool_TypeInfo, method);
    sub_1B761C0(&int_TypeInfo, v3);
    sub_1B761C0(&object___TypeInfo, v4);
    sub_1B761C0(&BattleSkillInfoData_TYPE_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_15901/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v6);
    byte_4A30718 = 1;
  }
  v7 = (System_Object_array *)sub_1B76268(object___TypeInfo, 13LL);
  type = this->fields.type;
  v11 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type, v8, v9, v10);
  if ( !v7 )
    sub_1B7641C(v11, v12);
  v15 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( !v7->max_length )
    goto LABEL_44;
  v7->m_Items[0] = v15;
  sub_1B76164((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)v15, v13, v14);
  index = this->fields.index;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &index, v16, v17, v18);
  v21 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_44;
  v7->m_Items[1] = v21;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[1], (int32_t)v21, v19, v20);
  svtUniqueId = this->fields.svtUniqueId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId, v22, v23, v24);
  v27 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_44;
  v7->m_Items[2] = v27;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[2], (int32_t)v27, v25, v26);
  v99[0] = this->fields.isPassive;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v99, v28, v29, v30);
  v33 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_44;
  v7->m_Items[3] = v33;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[3], (int32_t)v33, v31, v32);
  v98[0] = this->fields.isCharge;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v98, v34, v35, v36);
  v39 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 4 )
    goto LABEL_44;
  v7->m_Items[4] = v39;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[4], (int32_t)v39, v37, v38);
  v97 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
          this,
          this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v97, v40, v41, v42);
  v45 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 5 )
    goto LABEL_44;
  v7->m_Items[5] = v45;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[5], (int32_t)v45, v43, v44);
  skilllv = this->fields.skilllv;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v46, v47, v48);
  v51 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 6 )
    goto LABEL_44;
  v7->m_Items[6] = v51;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[6], (int32_t)v51, v49, v50);
  chargeTurn = this->fields.chargeTurn;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v52, v53, v54);
  v57 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 7 )
    goto LABEL_44;
  v7->m_Items[7] = v57;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[7], (int32_t)v57, v55, v56);
  priority = this->fields.priority;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &priority, v58, v59, v60);
  v63 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 8 )
    goto LABEL_44;
  v7->m_Items[8] = v63;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[8], (int32_t)v63, v61, v62);
  v93[0] = this->fields.isUseSkill;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v93, v64, v65, v66);
  v69 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 9 )
    goto LABEL_44;
  v7->m_Items[9] = v69;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[9], (int32_t)v69, v67, v68);
  strengthStatus = this->fields.strengthStatus;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus, v70, v71, v72);
  v75 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xA )
    goto LABEL_44;
  v7->m_Items[10] = v75;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[10], (int32_t)v75, v73, v74);
  itemImageId = this->fields.itemImageId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId, v76, v77, v78);
  v81 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xB )
    goto LABEL_44;
  v7->m_Items[11] = v81;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[11], (int32_t)v81, v79, v80);
  changeTDCommandType = this->fields.changeTDCommandType;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType, v82, v83, v84);
  v87 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1B762FC(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_45:
      v89 = sub_1B76440(v11);
      sub_1B762E8(v89, 0LL);
    }
  }
  if ( v7->max_length <= 0xC )
LABEL_44:
    sub_1B76424(v11, v12);
  v7->m_Items[12] = v87;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v7->m_Items[12], (int32_t)v87, v85, v86);
  return System_String__Format_61549568((System_String_o *)StringLiteral_15901/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v7, 0LL);
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

  if ( (byte_4A30725 & 1) == 0 )
  {
    sub_1B761C0(&ServantAssetLoadManager_TypeInfo, method);
    byte_4A30725 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_1B7641C(0LL, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1B76424(v3, v4);
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

  if ( (byte_4A30719 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A30719 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                   this,
                                   this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_1B7641C(Instance, v7);
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

  if ( (byte_4A3072B & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A3072B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A3071F & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A3071F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A3071E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A3071E = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A30720 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A30720 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A3071B & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A3071B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A3071C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A3071C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A3071D & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A3071D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A3071A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A3071A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30FF7D4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1B7641C(Instance, v6);
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

  if ( (byte_4A3072F & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_Empty_DataVals___, method);
    byte_4A3072F = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v5 = Method_System_Array_Empty_DataVals___;
    v6 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v6 )
    {
      sub_1BC80F8(Method_System_Array_Empty_DataVals___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BC809C(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BC809C(v8);
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
    sub_1B76164((ServantStatusBattleListViewItem_o *)p_individualityArray, (int32_t)individualityArray, v6, v7);
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
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A30734 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_DataVals___, method);
    sub_1B761C0(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1B761C0(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__, v4);
    sub_1B761C0(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4A30734 = 1;
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
    _9__94_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_DataVals__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__94_0,
      v10,
      Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_DataVals__bool__o *)_9__94_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__94_0, (int32_t)_9__94_0, v12, v13);
  }
  return BasicHelper__Any_object__48552060(
           DataValArray,
           (System_Func_T__bool__o *)_9__94_0,
           (const MethodInfo_2E4D87C *)Method_BasicHelper_Any_DataVals___);
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
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A30735 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_DataVals___, method);
    sub_1B761C0(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1B761C0(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__, v4);
    sub_1B761C0(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4A30735 = 1;
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
      _9__96_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__96_0,
        v10,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__,
        0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__96_0 = (struct System_Func_DataVals__bool__o *)_9__96_0;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__96_0, (int32_t)_9__96_0, v12, v13);
    }
    return !BasicHelper__Any_object__48552060(
              DataValArray,
              (System_Func_T__bool__o *)_9__96_0,
              (const MethodInfo_2E4D87C *)Method_BasicHelper_Any_DataVals___);
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

  if ( (byte_4A30730 & 1) == 0 )
  {
    sub_1B761C0(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, method);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_DataVals___, v3);
    sub_1B761C0(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_1B761C0(&System_Func_DataVals__bool__TypeInfo, v5);
    byte_4A30730 = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v7 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_DataVals__bool__TypeInfo);
  System_Func_object__bool____ctor(v7, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0LL);
  v8 = System_Linq_Enumerable__Where_object_(
         DataValArray,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_2EA0B7C *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v8,
                             (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4A30731 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1B761C0(&System_Func_DataVals__int__TypeInfo, v4);
    sub_1B761C0(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__, v5);
    sub_1B761C0(&BattleSkillInfoData___c_TypeInfo, v6);
    byte_4A30731 = 1;
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
    _9__90_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__90_0,
      v11,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__90_0 = (struct System_Func_DataVals__int__o *)_9__90_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__90_0, (int32_t)_9__90_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__90_0,
                                                               (const MethodInfo_2E92630 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_2E9AD0C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A30736 & 1) == 0 )
  {
    sub_1B761C0(&BattleSkillInfoData___c_TypeInfo, v1);
    byte_4A30736 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)BattleSkillInfoData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B7641C(this, 0LL);
  return DataVals__GetParam(x, 124, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___SortSkill_b__92_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.priority;
}


bool __fastcall BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__94_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.funcType == 142;
}


bool __fastcall BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__96_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.funcType != 142;
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__90_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.targetType;
}