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

  if ( (byte_42B2AB2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&SkillMotionSkip_TypeInfo);
    byte_42B2AB2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(v4, v5);
  v6 = 0LL;
  if ( SkillMaster__IsSkippable(Master_WarQuestSelectionMaster, v4, 0LL) )
  {
    v6 = (SkillMotionSkip_o *)sub_B52A54(SkillMotionSkip_TypeInfo);
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

  if ( (byte_42B2AAD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AAD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v7 = Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v7->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(Instance, v4);
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
        v12 = sub_B52A88(Instance);
        sub_B52A28(v12, 0LL);
      }
      if ( !v10 )
        goto LABEL_18;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    funcId->m_Items[v11 + 1],
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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

  if ( (byte_42B2AAE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AAE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_B52A5C(Instance, v4);
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
    sub_B52A5C(HasCond, v4);
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
    sub_B52A5C(HasCond, v4);
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

  if ( (byte_42B2AB9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AB9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_B52A5C(Instance, v6);
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

  if ( (byte_42B2AB1 & 1) == 0 )
  {
    sub_B52984(&BattleSkillInfoData___TypeInfo);
    byte_42B2AB1 = 1;
  }
  v3 = sub_B5299C(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  v11 = v3;
  if ( this )
  {
    v3 = sub_B52A44(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v14 = sub_B52A7C(0LL);
      sub_B52A28(v14, 0LL);
    }
  }
  if ( !*(_DWORD *)(v11 + 24) )
  {
    v13 = sub_B52A88(v3);
    sub_B52A28(v13, 0LL);
  }
  *(_QWORD *)(v11 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v5, v6, v7, v8, v9, v10);
  return (BattleSkillInfoData_array *)v11;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v5; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__85_0; // x20
  Il2CppObject *v8; // x21
  struct BattleSkillInfoData___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B2ABD & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Max_DataVals___);
    sub_B52984(&Method_System_Func_DataVals__int___ctor__);
    sub_B52984(&System_Func_DataVals__int__TypeInfo);
    sub_B52984(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__85_0__);
    sub_B52984(&BattleSkillInfoData___c_TypeInfo);
    byte_42B2ABD = 1;
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
  _9__85_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__85_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__85_0,
      v8,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__85_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_DataVals__int___ctor__);
    v9 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v9->__9__85_0 = (struct System_Func_DataVals__int__o *)_9__85_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v9->__9__85_0,
      (System_Int32_array **)_9__85_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__85_0,
           (const MethodInfo_1B65988 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42B2AB8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AB8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (WebViewManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                         this,
                                         this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42B2AB4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_System_Nullable_bool___ctor__);
    sub_B52984(&Method_System_Nullable_bool__get_HasValue__);
    sub_B52984(&Method_System_Nullable_bool__get_Value__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AB4 = 1;
  }
  if ( !this->fields.hasCond.fields.has_value )
  {
    v4 = &v21;
    v21 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v4,
      0,
      (const MethodInfo_216E4D4 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v21;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_B52A5C(Instance, v7);
      if ( HIDWORD(lookup->fields.entries) == 2 )
      {
        v10 = &v20;
        v20 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v10,
          1,
          (const MethodInfo_216E4D4 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v20;
        if ( !LODWORD(v8->fields.datalist) )
        {
          v19 = sub_B52A88(v11);
          sub_B52A28(v19, 0LL);
        }
        v18 = (struct CommonReleaseEntity_o *)v8->fields.lookup;
        this->fields.commonReleaseEntity = v18;
        sub_B52920(
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
  v22 = (System_Nullable_bool__o)((_WORD)this + 144);
  return System_Nullable_bool___get_Value(v22, (const MethodInfo_216E4F0 *)Method_System_Nullable_bool__get_Value__);
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

  if ( (byte_42B2AB5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AB5 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v4);
  }
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0LL, 0, 0LL);
}


bool __fastcall BattleSkillInfoData__IsSelectedAddTargetIndex(
        BattleSkillInfoData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int32_t param; // [xsp+Ch] [xbp-4h] BYREF

  param = 0;
  if ( !dataVal )
    sub_B52A5C(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 125, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
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

  if ( (byte_42B2AAC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AAC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   this->fields.skilllv,
                   0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_17:
    sub_B52A5C(Instance, v4);
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
      v12 = sub_B52A88(Instance);
      sub_B52A28(v12, 0LL);
    }
    if ( !v9 )
      goto LABEL_17;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v9,
                                  funcId->m_Items[v10 + 1],
                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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

  if ( (byte_42B2AB7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B2AB7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(v4, v5);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle(Master_WarQuestSelectionMaster, v4, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x19

  if ( (byte_42B2AB3 & 1) == 0 )
  {
    sub_B52984(&BattleMasterSkillInfoData_TypeInfo);
    sub_B52984(&BattleSelfSkillInfoData_TypeInfo);
    sub_B52984(&BattleSkillInfoData_TypeInfo);
    byte_42B2AB3 = 1;
  }
  if ( type == 1 )
  {
    v3 = sub_B52A54(BattleMasterSkillInfoData_TypeInfo);
    BattleMasterSkillInfoData___ctor((BattleMasterSkillInfoData_o *)v3, 0LL);
  }
  else if ( type == 11 )
  {
    v3 = sub_B52A54(BattleSelfSkillInfoData_TypeInfo);
    BattleSelfSkillInfoData___ctor((BattleSelfSkillInfoData_o *)v3, 0LL);
  }
  else
  {
    v3 = sub_B52A54(BattleSkillInfoData_TypeInfo);
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

  if ( (byte_42B2AAF & 1) == 0 )
  {
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_42B2AAF = 1;
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
        v12 = sub_B52A88(Instance);
        sub_B52A28(v12, 0LL);
      }
      v11 = (BattleSkillInfoData_o *)*((_QWORD *)&v8->fields.svtlimitmaster + v9);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadSkillAnyVoice(v11, v10, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v11, 0LL);
      LODWORD(svtmaster) = v8->fields.svtmaster;
      if ( (__int64)++v9 >= (int)svtmaster )
        return;
    }
LABEL_14:
    sub_B52A5C(Instance, v6);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x20
  __int64 v98; // x0
  __int64 v99; // x0
  int32_t changeTDCommandType; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t itemImageId; // [xsp+8h] [xbp-58h] BYREF
  int32_t strengthStatus; // [xsp+Ch] [xbp-54h] BYREF
  char v103[4]; // [xsp+10h] [xbp-50h] BYREF
  int32_t priority; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t chargeTurn; // [xsp+18h] [xbp-48h] BYREF
  int32_t skilllv; // [xsp+1Ch] [xbp-44h] BYREF
  int v107; // [xsp+20h] [xbp-40h] BYREF
  char v108[4]; // [xsp+24h] [xbp-3Ch] BYREF
  char v109[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtUniqueId; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t index; // [xsp+38h] [xbp-28h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_42B2AA3 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&BattleSkillInfoData_TYPE_TypeInfo);
    sub_B52984(&StringLiteral_15821/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/);
    byte_42B2AA3 = 1;
  }
  v3 = (System_Object_array *)sub_B5299C(object___TypeInfo, 13LL);
  type = this->fields.type;
  v4 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  v12 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( !v3->max_length )
    goto LABEL_44;
  v3->m_Items[0] = (Il2CppObject *)v12;
  sub_B52920((BattleServantConfConponent_o *)v3->m_Items, v12, v6, v7, v8, v9, v10, v11);
  index = this->fields.index;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &index);
  v19 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_44;
  v3->m_Items[1] = (Il2CppObject *)v19;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[1], v19, v13, v14, v15, v16, v17, v18);
  svtUniqueId = this->fields.svtUniqueId;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId);
  v26 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_44;
  v3->m_Items[2] = (Il2CppObject *)v26;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[2], v26, v20, v21, v22, v23, v24, v25);
  v109[0] = this->fields.isPassive;
  v4 = j_il2cpp_value_box_0(bool_TypeInfo, v109);
  v33 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 3 )
    goto LABEL_44;
  v3->m_Items[3] = (Il2CppObject *)v33;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[3], v33, v27, v28, v29, v30, v31, v32);
  v108[0] = this->fields.isCharge;
  v4 = j_il2cpp_value_box_0(bool_TypeInfo, v108);
  v40 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 4 )
    goto LABEL_44;
  v3->m_Items[4] = (Il2CppObject *)v40;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[4], v40, v34, v35, v36, v37, v38, v39);
  v107 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &v107);
  v47 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 5 )
    goto LABEL_44;
  v3->m_Items[5] = (Il2CppObject *)v47;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[5], v47, v41, v42, v43, v44, v45, v46);
  skilllv = this->fields.skilllv;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
  v54 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 6 )
    goto LABEL_44;
  v3->m_Items[6] = (Il2CppObject *)v54;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[6], v54, v48, v49, v50, v51, v52, v53);
  chargeTurn = this->fields.chargeTurn;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
  v61 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 7 )
    goto LABEL_44;
  v3->m_Items[7] = (Il2CppObject *)v61;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[7], v61, v55, v56, v57, v58, v59, v60);
  priority = this->fields.priority;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &priority);
  v68 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 8 )
    goto LABEL_44;
  v3->m_Items[8] = (Il2CppObject *)v68;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[8], v68, v62, v63, v64, v65, v66, v67);
  v103[0] = this->fields.isUseSkill;
  v4 = j_il2cpp_value_box_0(bool_TypeInfo, v103);
  v75 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 9 )
    goto LABEL_44;
  v3->m_Items[9] = (Il2CppObject *)v75;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[9], v75, v69, v70, v71, v72, v73, v74);
  strengthStatus = this->fields.strengthStatus;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus);
  v82 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 0xA )
    goto LABEL_44;
  v3->m_Items[10] = (Il2CppObject *)v82;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[10], v82, v76, v77, v78, v79, v80, v81);
  itemImageId = this->fields.itemImageId;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId);
  v89 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_45;
  }
  if ( v3->max_length <= 0xB )
    goto LABEL_44;
  v3->m_Items[11] = (Il2CppObject *)v89;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[11], v89, v83, v84, v85, v86, v87, v88);
  changeTDCommandType = this->fields.changeTDCommandType;
  v4 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType);
  v96 = (System_Int32_array **)v4;
  if ( v4 )
  {
    v4 = sub_B52A44(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_45:
      v99 = sub_B52A7C(v4);
      sub_B52A28(v99, 0LL);
    }
  }
  if ( v3->max_length <= 0xC )
  {
LABEL_44:
    v98 = sub_B52A88(v4);
    sub_B52A28(v98, 0LL);
  }
  v3->m_Items[12] = (Il2CppObject *)v96;
  sub_B52920((BattleServantConfConponent_o *)&v3->m_Items[12], v96, v90, v91, v92, v93, v94, v95);
  return System_String__Format_44647040((System_String_o *)StringLiteral_15821/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v3, 0LL);
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

  if ( (byte_42B2AB0 & 1) == 0 )
  {
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    byte_42B2AB0 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
      {
        v9 = sub_B52A88(v3);
        sub_B52A28(v9, 0LL);
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

  if ( (byte_42B2AA4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AA4 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            Instance,
                                                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                    this,
                                    this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_B52A5C(Instance, v5);
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

  if ( (byte_42B2AB6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AB6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2AAA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AAA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B52A5C(Instance, v4);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2AA9 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AA9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B52A5C(Instance, v4);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B2AAB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AAB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42B2AA6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AA6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42B2AA7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AA7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42B2AA8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AA8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42B2AA5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2AA5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B52A5C(Instance, v4);
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

  if ( (byte_42B2ABA & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_DataVals___);
    byte_42B2ABA = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_DataVals___;
    v6 = **((_QWORD **)Method_System_Array_Empty_DataVals___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_DataVals___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AEB684(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AEB684(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v5[6]);
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
    sub_B52920(
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

  if ( (byte_42B2ABB & 1) == 0 )
  {
    sub_B52984(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_DataVals___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_B52984(&Method_System_Func_DataVals__bool___ctor__);
    sub_B52984(&System_Func_DataVals__bool__TypeInfo);
    byte_42B2ABB = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_DataVals__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleSkillInfoData_IsSelectedAddTargetIndex__,
    (const MethodInfo_2BC90BC *)Method_System_Func_DataVals__bool___ctor__);
  v5 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
         DataValArray,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v5,
                             (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *__fastcall BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *ValidDataValArray; // x19
  BattleSkillInfoData___c_c *v4; // x8
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__84_0; // x20
  Il2CppObject *v7; // x21
  struct BattleSkillInfoData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42B2ABC & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_DataVals__int___ctor__);
    sub_B52984(&System_Func_DataVals__int__TypeInfo);
    sub_B52984(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__84_0__);
    sub_B52984(&BattleSkillInfoData___c_TypeInfo);
    byte_42B2ABC = 1;
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
  _9__84_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__84_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__84_0,
      v7,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__84_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_DataVals__int___ctor__);
    v8 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v8->__9__84_0 = (struct System_Func_DataVals__int__o *)_9__84_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__84_0,
      (System_Int32_array **)_9__84_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               ValidDataValArray,
                                                               (System_Func_TSource__TResult__o *)_9__84_0,
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t type; // w8

  type = this->fields.type;
  return type == 10 || (unsigned int)(type - 11) < 2;
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

  if ( (byte_42AD874 & 1) == 0 )
  {
    sub_B52984(&BattleSkillInfoData___c_TypeInfo);
    byte_42AD874 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSkillInfoData___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__85_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return DataVals__GetParam(x, 125, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__84_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.targetType;
}