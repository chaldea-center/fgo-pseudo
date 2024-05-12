void __fastcall BattleSkillInfoData___ctor(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  this->fields.itemImageId = -1;
  this->fields._SelectAddIndex_k__BackingField = -1;
  *(_QWORD *)&this->fields.cutInId = -1LL;
  *(_QWORD *)&this->fields.commonReleaseCondId = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BaseMotionSkip_o *__fastcall BattleSkillInfoData__CommonMakeSkillSkip(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  SkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  SkillMotionSkip_o *v6; // x19

  if ( (byte_438E237 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&SkillMotionSkip_TypeInfo);
    byte_438E237 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(v4, v5);
  v6 = 0LL;
  if ( SkillMaster__IsSkippable(Master_WarQuestSelectionMaster, v4, 0LL) )
  {
    v6 = (SkillMotionSkip_o *)sub_B77694(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v6, 0LL);
  }
  return (BaseMotionSkip_o *)v6;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v7; // x19
  struct System_Int32_array *funcId; // x20
  __int64 v9; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  unsigned __int64 v11; // x21
  __int64 v12; // x0

  if ( (byte_438E232 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E232 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v7 = Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v7->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_B7769C(Instance, v4);
  }
  v9 = *(_QWORD *)&funcId->max_length;
  if ( (int)v9 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v12 = sub_B776C8(Instance);
        sub_B77668(v12, 0LL);
      }
      if ( !v10 )
        goto LABEL_18;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    funcId->m_Items[v11 + 1],
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance->fields.datalist) == 27 )
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
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_438E233 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E233 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      this->fields.skilllv,
                                      0LL)) == 0LL )
  {
    sub_B7769C(Instance, v4);
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
    sub_B7769C(HasCond, v4);
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
    sub_B7769C(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


int32_t __fastcall BattleSkillInfoData__GetFieldCallEffectId(
        BattleSkillInfoData_o *this,
        bool isBefore,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E23E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E23E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_B7769C(Instance, v6);
  }
  return -1;
}


BattleSkillInfoData_array *__fastcall BattleSkillInfoData__GetLoadArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x20
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_438E236 & 1) == 0 )
  {
    sub_B775C4(&BattleSkillInfoData___TypeInfo);
    byte_438E236 = 1;
  }
  v3 = sub_B775DC(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v11 = v3;
  if ( this )
  {
    v3 = sub_B77684(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v14 = sub_B776BC(0LL);
      sub_B77668(v14, 0LL);
    }
  }
  if ( !*(_DWORD *)(v11 + 24) )
  {
    v13 = sub_B776C8(v3);
    sub_B77668(v13, 0LL);
  }
  *(_QWORD *)(v11 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v5, v6, v7, v8, v9, v10);
  return (BattleSkillInfoData_array *)v11;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__90_0; // x20
  Il2CppObject *v8; // x21
  struct BattleSkillInfoData___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438E242 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Max_DataVals___);
    sub_B775C4(&Method_System_Func_DataVals__int___ctor__);
    sub_B775C4(&System_Func_DataVals__int__TypeInfo);
    sub_B775C4(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__90_0__);
    sub_B775C4(&BattleSkillInfoData___c_TypeInfo);
    byte_438E242 = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v5 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v5 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__90_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__90_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__90_0,
      v8,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__90_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_DataVals__int___ctor__);
    v9 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v9->__9__90_0 = (struct System_Func_DataVals__int__o *)_9__90_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__90_0,
      (System_Int32_array **)_9__90_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__90_0,
           (const MethodInfo_1D33FF4 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_438E23D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E23D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (WebViewManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                         this,
                                         this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B7769C(Instance, v4);
  }
  return SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, this->fields.skilllv, 0LL);
}


bool __fastcall BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct System_Nullable_bool__o *v4; // x0
  int32_t commonReleaseCondId; // w8
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_o *v8; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  struct System_Nullable_bool__o *v10; // x0
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CommonReleaseEntity_o *v18; // x1
  __int64 v19; // x0
  struct System_Nullable_bool__o v20; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v21; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v22; // 0:w0.2

  if ( (byte_438E239 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_System_Nullable_bool___ctor__);
    sub_B775C4(&Method_System_Nullable_bool__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_bool__get_Value__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E239 = 1;
  }
  if ( !this->fields.hasCond.fields.has_value )
  {
    v4 = &v21;
    v21 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v4,
      0,
      (const MethodInfo_2473198 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v21;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = (DataManager_o *)CommonReleaseMaster__getList(
                                    (CommonReleaseMaster_o *)Instance,
                                    this->fields.commonReleaseCondId,
                                    0LL);
      if ( !Instance )
        goto LABEL_14;
      v8 = Instance;
      if ( LODWORD(Instance->fields.datalist) != 1 )
        goto LABEL_4;
      lookup = Instance->fields.lookup;
      if ( !lookup )
LABEL_14:
        sub_B7769C(Instance, v7);
      if ( HIDWORD(lookup->fields.entries) == 2 )
      {
        v10 = &v20;
        v20 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v10,
          1,
          (const MethodInfo_2473198 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v20;
        if ( !LODWORD(v8->fields.datalist) )
        {
          v19 = sub_B776C8(v11);
          sub_B77668(v19, 0LL);
        }
        v18 = (struct CommonReleaseEntity_o *)v8->fields.lookup;
        this->fields.commonReleaseEntity = v18;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.commonReleaseEntity,
          (System_Int32_array **)v18,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
    }
  }
LABEL_4:
  v22 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v22, (const MethodInfo_24731B4 *)Method_System_Nullable_bool__get_Value__);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438E23A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E23A = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0LL, 0, 0LL);
}


bool __fastcall BattleSkillInfoData__IsPassive(int32_t type, const MethodInfo *method)
{
  return type == 10 || type == 24 || (unsigned int)(type - 25) < 2;
}


bool __fastcall BattleSkillInfoData__IsReplacePassiveTypeOnTransform(int32_t type, const MethodInfo *method)
{
  return type == 10 || (type | 2) == 26;
}


bool __fastcall BattleSkillInfoData__IsSelectedAddTargetIndex(
        BattleSkillInfoData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int32_t param; // [xsp+Ch] [xbp-4h] BYREF

  param = 0;
  if ( !dataVal )
    sub_B7769C(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 124, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v8; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x19
  unsigned __int64 v10; // x21
  __int64 v12; // x0

  if ( (byte_438E231 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E231 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   this->fields.skilllv,
                   0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_17:
    sub_B7769C(Instance, v4);
  }
  v8 = *(_QWORD *)&funcId->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
    {
      v12 = sub_B776C8(Instance);
      sub_B77668(v12, 0LL);
    }
    if ( !v9 )
      goto LABEL_17;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v9,
                                  funcId->m_Items[v10 + 1],
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( Instance )
    {
      if ( HIDWORD(Instance->fields.datalist) == 4 )
        return 1;
    }
    LODWORD(v8) = funcId->max_length;
    if ( (__int64)++v10 >= (int)v8 )
      return 0;
  }
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  SkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_438E23C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438E23C = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(v4, v5);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle(Master_WarQuestSelectionMaster, v4, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x19

  if ( (byte_438E238 & 1) == 0 )
  {
    sub_B775C4(&BattleMasterSkillInfoData_TypeInfo);
    sub_B775C4(&BattleSelfSkillInfoData_TypeInfo);
    sub_B775C4(&BattleSkillInfoData_TypeInfo);
    byte_438E238 = 1;
  }
  if ( type == 1 )
  {
    v3 = sub_B77694(BattleMasterSkillInfoData_TypeInfo);
    BattleMasterSkillInfoData___ctor((BattleMasterSkillInfoData_o *)v3, 0LL);
  }
  else if ( type == 11 )
  {
    v3 = sub_B77694(BattleSelfSkillInfoData_TypeInfo);
    BattleSelfSkillInfoData___ctor((BattleSelfSkillInfoData_o *)v3, 0LL);
  }
  else
  {
    v3 = sub_B77694(BattleSkillInfoData_TypeInfo);
    *(_DWORD *)(v3 + 64) = -1;
    *(_DWORD *)(v3 + 104) = -1;
    *(_QWORD *)(v3 + 88) = -1LL;
    *(_QWORD *)(v3 + 96) = -1LL;
    System_Object___ctor((Il2CppObject *)v3, 0LL);
  }
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
  struct ServantMaster_o *svtmaster; // x8
  ServantAssetLoadManager_o *v8; // x19
  unsigned __int64 v9; // x22
  bool v10; // w20
  BattleSkillInfoData_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_438E234 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_438E234 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._10_GetLoadArray.method)(
                                            this,
                                            this->klass->vtable._11_PreAddProcess.methodPtr,
                                            method);
  if ( !Instance )
    goto LABEL_14;
  svtmaster = Instance->fields.svtmaster;
  v8 = Instance;
  if ( (int)svtmaster >= 1 )
  {
    v9 = 0LL;
    v10 = dlOnly;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)svtmaster )
      {
        v12 = sub_B776C8(Instance);
        sub_B77668(v12, 0LL);
      }
      v11 = (BattleSkillInfoData_o *)*((_QWORD *)&v8->fields.svtlimitmaster + v9);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadSkillAnyVoice(v11, v10, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v11, 0LL);
      LODWORD(svtmaster) = v8->fields.svtmaster;
      if ( (__int64)++v9 >= (int)svtmaster )
        return;
    }
LABEL_14:
    sub_B7769C(Instance, v6);
  }
}


void __fastcall BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  BattleSkillInfoData___c_c *v3; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__91_0; // x20
  Il2CppObject *v6; // x21
  struct BattleSkillInfoData___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438E243 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_StableSort_BattleSkillInfoData___);
    sub_B775C4(&Method_System_Func_BattleSkillInfoData__int___ctor__);
    sub_B775C4(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_B775C4(&Method_BattleSkillInfoData___c__SortSkill_b__91_0__);
    sub_B775C4(&BattleSkillInfoData___c_TypeInfo);
    byte_438E243 = 1;
  }
  if ( skillList )
  {
    v3 = BattleSkillInfoData___c_TypeInfo;
    if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v3 = BattleSkillInfoData___c_TypeInfo;
    }
    static_fields = v3->static_fields;
    _9__91_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__91_0;
    if ( !_9__91_0 )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      }
      v6 = (Il2CppObject *)static_fields->__9;
      _9__91_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__91_0,
        v6,
        Method_BattleSkillInfoData___c__SortSkill_b__91_0__,
        (const MethodInfo_29E9E70 *)Method_System_Func_BattleSkillInfoData__int___ctor__);
      v7 = BattleSkillInfoData___c_TypeInfo->static_fields;
      v7->__9__91_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__91_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v7->__9__91_0,
        (System_Int32_array **)_9__91_0,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__91_0,
      0,
      (const MethodInfo_1C68E10 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x19
  __int64 v4; // x2
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x21
  __int64 v14; // x2
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x21
  __int64 v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  __int64 v30; // x2
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  __int64 v38; // x2
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  __int64 v46; // x2
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x21
  __int64 v54; // x2
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x21
  __int64 v62; // x2
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x21
  __int64 v70; // x2
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x21
  __int64 v78; // x2
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x21
  __int64 v86; // x2
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x21
  __int64 v94; // x2
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x21
  __int64 v102; // x2
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x20
  __int64 v111; // x0
  __int64 v112; // x0
  int32_t changeTDCommandType; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t itemImageId; // [xsp+8h] [xbp-58h] BYREF
  int32_t strengthStatus; // [xsp+Ch] [xbp-54h] BYREF
  char v116[4]; // [xsp+10h] [xbp-50h] BYREF
  int32_t priority; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t chargeTurn; // [xsp+18h] [xbp-48h] BYREF
  int32_t skilllv; // [xsp+1Ch] [xbp-44h] BYREF
  int v120; // [xsp+20h] [xbp-40h] BYREF
  char v121[4]; // [xsp+24h] [xbp-3Ch] BYREF
  char v122[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtUniqueId; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t index; // [xsp+38h] [xbp-28h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_438E228 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&BattleSkillInfoData_TYPE_TypeInfo);
    sub_B775C4(&StringLiteral_16007/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/);
    byte_438E228 = 1;
  }
  v3 = (System_Object_array *)sub_B775DC(object___TypeInfo, 13LL);
  type = this->fields.type;
  v5 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type, v4);
  if ( !v3 )
    sub_B7769C(v5, v6);
  v13 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( !v3->max_length )
    goto LABEL_44;
  v3->m_Items[0] = (Il2CppObject *)v13;
  sub_B77560((BattleServantConfConponent_o *)v3->m_Items, v13, v7, v8, v9, v10, v11, v12);
  index = this->fields.index;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &index, v14);
  v21 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_44;
  v3->m_Items[1] = (Il2CppObject *)v21;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
  svtUniqueId = this->fields.svtUniqueId;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId, v22);
  v29 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_44;
  v3->m_Items[2] = (Il2CppObject *)v29;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  v122[0] = this->fields.isPassive;
  v5 = j_il2cpp_value_box_0(bool_TypeInfo, v122, v30);
  v37 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_44;
  v3->m_Items[3] = (Il2CppObject *)v37;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  v121[0] = this->fields.isCharge;
  v5 = j_il2cpp_value_box_0(bool_TypeInfo, v121, v38);
  v45 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 4 )
    goto LABEL_44;
  v3->m_Items[4] = (Il2CppObject *)v45;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v120 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &v120, v46);
  v53 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 5 )
    goto LABEL_44;
  v3->m_Items[5] = (Il2CppObject *)v53;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[5], v53, v47, v48, v49, v50, v51, v52);
  skilllv = this->fields.skilllv;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v54);
  v61 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 6 )
    goto LABEL_44;
  v3->m_Items[6] = (Il2CppObject *)v61;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[6], v61, v55, v56, v57, v58, v59, v60);
  chargeTurn = this->fields.chargeTurn;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v62);
  v69 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 7 )
    goto LABEL_44;
  v3->m_Items[7] = (Il2CppObject *)v69;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[7], v69, v63, v64, v65, v66, v67, v68);
  priority = this->fields.priority;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &priority, v70);
  v77 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 8 )
    goto LABEL_44;
  v3->m_Items[8] = (Il2CppObject *)v77;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[8], v77, v71, v72, v73, v74, v75, v76);
  v116[0] = this->fields.isUseSkill;
  v5 = j_il2cpp_value_box_0(bool_TypeInfo, v116, v78);
  v85 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 9 )
    goto LABEL_44;
  v3->m_Items[9] = (Il2CppObject *)v85;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[9], v85, v79, v80, v81, v82, v83, v84);
  strengthStatus = this->fields.strengthStatus;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus, v86);
  v93 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 0xA )
    goto LABEL_44;
  v3->m_Items[10] = (Il2CppObject *)v93;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[10], v93, v87, v88, v89, v90, v91, v92);
  itemImageId = this->fields.itemImageId;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId, v94);
  v101 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 0xB )
    goto LABEL_44;
  v3->m_Items[11] = (Il2CppObject *)v101;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[11], v101, v95, v96, v97, v98, v99, v100);
  changeTDCommandType = this->fields.changeTDCommandType;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType, v102);
  v109 = (System_Int32_array **)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_45:
      v112 = sub_B776BC(v5);
      sub_B77668(v112, 0LL);
    }
  }
  if ( v3->max_length <= 0xC )
  {
LABEL_44:
    v111 = sub_B776C8(v5);
    sub_B77668(v111, 0LL);
  }
  v3->m_Items[12] = (Il2CppObject *)v109;
  sub_B77560((BattleServantConfConponent_o *)&v3->m_Items[12], v109, v103, v104, v105, v106, v107, v108);
  return System_String__Format_44980660((System_String_o *)StringLiteral_16007/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v3, 0LL);
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
  __int64 v9; // x0

  if ( (byte_438E235 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438E235 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
      {
        v9 = sub_B776C8(v3);
        sub_B77668(v9, 0LL);
      }
      v8 = *(BattleSkillInfoData_o **)(v6 + 32 + 8 * v7);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E229 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E229 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            Instance,
                                                                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                    this,
                                    this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          result = 0;
          goto LABEL_10;
        }
        Instance = (DataManager_o *)entity;
        if ( entity )
        {
          result = SkillEntity__getSkillCutInId((SkillEntity_o *)entity, 0LL);
LABEL_10:
          this->fields.cutInId = result;
          return result;
        }
      }
    }
    sub_B7769C(Instance, v5);
  }
  return result;
}


int32_t __fastcall BattleSkillInfoData__getInfoId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.index + 100 * this->fields.type;
}


int32_t __fastcall BattleSkillInfoData__getLossCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E23B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E23B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E22F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E22F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B7769C(Instance, v4);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E22E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E22E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B7769C(Instance, v4);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E230 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E230 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return 0;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E22B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E22B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E22C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E22C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E22D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E22D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return 0LL;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInVoices(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E22A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E22A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return 0LL;
}


DataVals_array *__fastcall BattleSkillInfoData__get_DataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  DataVals_array *result; // x0
  _QWORD **v5; // x20
  __int64 v6; // x19
  __int16 v7; // w8
  __int64 v8; // x19
  __int64 v9; // x19
  __int64 v10; // x19

  if ( (byte_438E23F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_DataVals___);
    byte_438E23F = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_DataVals___;
    v6 = **((_QWORD **)Method_System_Array_Empty_DataVals___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_DataVals___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_B0F2C4(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_B0F2C4(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_B0F2C4(*v5[6]);
    return **(DataVals_array ***)(v10 + 184);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0LL);
    this->fields.individualityArray = individualityArray;
    sub_B77560(
      (BattleServantConfConponent_o *)p_individualityArray,
      (System_Int32_array **)individualityArray,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return individualityArray;
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_438E240 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_DataVals___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_B775C4(&Method_System_Func_DataVals__bool___ctor__);
    sub_B775C4(&System_Func_DataVals__bool__TypeInfo);
    byte_438E240 = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_DataVals__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleSkillInfoData_IsSelectedAddTargetIndex__,
    (const MethodInfo_29E92C4 *)Method_System_Func_DataVals__bool___ctor__);
  v5 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
         DataValArray,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v5,
                             (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *__fastcall BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *ValidDataValArray; // x19
  BattleSkillInfoData___c_c *v4; // x8
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__89_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_438E241 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_DataVals__int___ctor__);
    sub_B775C4(&System_Func_DataVals__int__TypeInfo);
    sub_B775C4(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__89_0__);
    sub_B775C4(&BattleSkillInfoData___c_TypeInfo);
    byte_438E241 = 1;
  }
  ValidDataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_ValidDataValArray(
                                                                             this,
                                                                             method);
  v4 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v4 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__89_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__89_0;
  if ( !_9__89_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__89_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__89_0,
      v7,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__89_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_DataVals__int___ctor__);
    v8 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v8->__9__89_0 = (struct System_Func_DataVals__int__o *)_9__89_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__89_0,
      (System_Int32_array **)_9__89_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               ValidDataValArray,
                                                               (System_Func_TSource__TResult__o *)_9__89_0,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  unsigned int type; // w8

  type = this->fields.type;
  return type <= 0x1A && ((1 << type) & 0x7000400) != 0 || type - 11 < 2;
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
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0

  if ( (byte_43884FC & 1) == 0 )
  {
    sub_B775C4(&BattleSkillInfoData___c_TypeInfo);
    byte_43884FC = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSkillInfoData___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return DataVals__GetParam(x, 124, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___SortSkill_b__91_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__89_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.targetType;
}