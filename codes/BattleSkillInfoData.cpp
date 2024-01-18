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
  __int64 v3; // x1
  __int64 v4; // x1
  SkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  SkillMotionSkip_o *v8; // x19

  if ( (byte_418A5AD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&SkillMotionSkip_TypeInfo, v4);
    byte_418A5AD = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(v6, v7);
  v8 = 0LL;
  if ( SkillMaster__IsSkippable(Master_WarQuestSelectionMaster, v6, 0LL) )
  {
    v8 = (SkillMotionSkip_o *)sub_B2C42C(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v8, 0LL);
  }
  return (BaseMotionSkip_o *)v8;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v10; // x19
  struct System_Int32_array *funcId; // x20
  __int64 v12; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x19
  unsigned __int64 v14; // x21
  __int64 v15; // x0

  if ( (byte_418A5A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A5A8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v10->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_B2C434(Instance, v7);
  }
  v12 = *(_QWORD *)&funcId->max_length;
  if ( (int)v12 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
        v15 = sub_B2C460(Instance);
        sub_B2C400(v15, 0LL);
      }
      if ( !v13 )
        goto LABEL_18;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    funcId->m_Items[v14 + 1],
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance->fields.datalist) == 27 )
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
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_418A5A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418A5A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_B2C434(Instance, v5);
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
    sub_B2C434(HasCond, v4);
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
    sub_B2C434(HasCond, v4);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, isBefore);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A5B4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_B2C434(Instance, v8);
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

  if ( (byte_418A5AC & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillInfoData___TypeInfo, method);
    byte_418A5AC = 1;
  }
  v3 = sub_B2C374(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  v11 = v3;
  if ( this )
  {
    v3 = sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v14 = sub_B2C454(0LL);
      sub_B2C400(v14, 0LL);
    }
  }
  if ( !*(_DWORD *)(v11 + 24) )
  {
    v13 = sub_B2C460(v3);
    sub_B2C400(v13, 0LL);
  }
  *(_QWORD *)(v11 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)this, v5, v6, v7, v8, v9, v10);
  return (BattleSkillInfoData_array *)v11;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v9; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__85_0; // x20
  Il2CppObject *v12; // x21
  struct BattleSkillInfoData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418A5B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Max_DataVals___, method);
    sub_B2C35C(&Method_System_Func_DataVals__int___ctor__, v3);
    sub_B2C35C(&System_Func_DataVals__int__TypeInfo, v4);
    sub_B2C35C(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__85_0__, v5);
    sub_B2C35C(&BattleSkillInfoData___c_TypeInfo, v6);
    byte_418A5B8 = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v9 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v9 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__85_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__85_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__85_0,
      v12,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__85_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_DataVals__int___ctor__);
    v13 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v13->__9__85_0 = (struct System_Func_DataVals__int__o *)_9__85_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__85_0,
      (System_Int32_array **)_9__85_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__85_0,
           (const MethodInfo_1A92CB0 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_418A5B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418A5B3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (WebViewManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                         this,
                                         this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B2C434(Instance, v5);
  }
  return SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, this->fields.skilllv, 0LL);
}


bool __fastcall BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Nullable_bool__o *v8; // x0
  int32_t commonReleaseCondId; // w8
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  DataManager_o *v12; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  struct System_Nullable_bool__o *v14; // x0
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct CommonReleaseEntity_o *v22; // x1
  __int64 v23; // x0
  struct System_Nullable_bool__o v24; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v25; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v26; // 0:w0.2

  if ( (byte_418A5AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_System_Nullable_bool___ctor__, v3);
    sub_B2C35C(&Method_System_Nullable_bool__get_HasValue__, v4);
    sub_B2C35C(&Method_System_Nullable_bool__get_Value__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A5AF = 1;
  }
  if ( !this->fields.hasCond.fields.has_value )
  {
    v8 = &v25;
    v25 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_214E7FC *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v25;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = (DataManager_o *)CommonReleaseMaster__getList(
                                    (CommonReleaseMaster_o *)Instance,
                                    this->fields.commonReleaseCondId,
                                    0LL);
      if ( !Instance )
        goto LABEL_14;
      v12 = Instance;
      if ( LODWORD(Instance->fields.datalist) != 1 )
        goto LABEL_4;
      lookup = Instance->fields.lookup;
      if ( !lookup )
LABEL_14:
        sub_B2C434(Instance, v11);
      if ( HIDWORD(lookup->fields.entries) == 2 )
      {
        v14 = &v24;
        v24 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v14,
          1,
          (const MethodInfo_214E7FC *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v24;
        if ( !LODWORD(v12->fields.datalist) )
        {
          v23 = sub_B2C460(v15);
          sub_B2C400(v23, 0LL);
        }
        v22 = (struct CommonReleaseEntity_o *)v12->fields.lookup;
        this->fields.commonReleaseEntity = v22;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.commonReleaseEntity,
          (System_Int32_array **)v22,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
    }
  }
LABEL_4:
  v26 = (System_Nullable_bool__o)((_WORD)this + 144);
  return System_Nullable_bool___get_Value(v26, (const MethodInfo_214E818 *)Method_System_Nullable_bool__get_Value__);
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
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418A5B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418A5B0 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
    sub_B2C434(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 125, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v11; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x19
  unsigned __int64 v13; // x21
  __int64 v15; // x0

  if ( (byte_418A5A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A5A7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   this->fields.skilllv,
                   0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_17:
    sub_B2C434(Instance, v7);
  }
  v11 = *(_QWORD *)&funcId->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v11 )
    {
      v15 = sub_B2C460(Instance);
      sub_B2C400(v15, 0LL);
    }
    if ( !v12 )
      goto LABEL_17;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v12,
                                  funcId->m_Items[v13 + 1],
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( Instance )
    {
      if ( HIDWORD(Instance->fields.datalist) == 4 )
        return 1;
    }
    LODWORD(v11) = funcId->max_length;
    if ( (__int64)++v13 >= (int)v11 )
      return 0;
  }
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_418A5B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_418A5B2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(v5, v6);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle(Master_WarQuestSelectionMaster, v5, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19

  if ( (byte_418A5AE & 1) == 0 )
  {
    sub_B2C35C(&BattleMasterSkillInfoData_TypeInfo, method);
    sub_B2C35C(&BattleSelfSkillInfoData_TypeInfo, v3);
    sub_B2C35C(&BattleSkillInfoData_TypeInfo, v4);
    byte_418A5AE = 1;
  }
  if ( type == 1 )
  {
    v5 = sub_B2C42C(BattleMasterSkillInfoData_TypeInfo);
    BattleMasterSkillInfoData___ctor((BattleMasterSkillInfoData_o *)v5, 0LL);
  }
  else if ( type == 11 )
  {
    v5 = sub_B2C42C(BattleSelfSkillInfoData_TypeInfo);
    BattleSelfSkillInfoData___ctor((BattleSelfSkillInfoData_o *)v5, 0LL);
  }
  else
  {
    v5 = sub_B2C42C(BattleSkillInfoData_TypeInfo);
    *(_DWORD *)(v5 + 64) = -1;
    *(_DWORD *)(v5 + 104) = -1;
    *(_QWORD *)(v5 + 88) = -1LL;
    *(_QWORD *)(v5 + 96) = -1LL;
    System_Object___ctor((Il2CppObject *)v5, 0LL);
  }
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
  struct ServantMaster_o *svtmaster; // x8
  ServantAssetLoadManager_o *v9; // x19
  unsigned __int64 v10; // x22
  bool v11; // w20
  BattleSkillInfoData_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_418A5AA & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_418A5AA = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._10_GetLoadArray.method)(
                                            this,
                                            this->klass->vtable._11_PreAddProcess.methodPtr,
                                            method);
  if ( !Instance )
    goto LABEL_14;
  svtmaster = Instance->fields.svtmaster;
  v9 = Instance;
  if ( (int)svtmaster >= 1 )
  {
    v10 = 0LL;
    v11 = dlOnly;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)svtmaster )
      {
        v13 = sub_B2C460(Instance);
        sub_B2C400(v13, 0LL);
      }
      v12 = (BattleSkillInfoData_o *)*((_QWORD *)&v9->fields.svtlimitmaster + v10);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadSkillAnyVoice(v12, v11, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v12, 0LL);
      LODWORD(svtmaster) = v9->fields.svtmaster;
      if ( (__int64)++v10 >= (int)svtmaster )
        return;
    }
LABEL_14:
    sub_B2C434(Instance, v7);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Object_array *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x21
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x20
  __int64 v102; // x0
  __int64 v103; // x0
  int32_t changeTDCommandType; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t itemImageId; // [xsp+8h] [xbp-58h] BYREF
  int32_t strengthStatus; // [xsp+Ch] [xbp-54h] BYREF
  char v107[4]; // [xsp+10h] [xbp-50h] BYREF
  int32_t priority; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t chargeTurn; // [xsp+18h] [xbp-48h] BYREF
  int32_t skilllv; // [xsp+1Ch] [xbp-44h] BYREF
  int v111; // [xsp+20h] [xbp-40h] BYREF
  char v112[4]; // [xsp+24h] [xbp-3Ch] BYREF
  char v113[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtUniqueId; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t index; // [xsp+38h] [xbp-28h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_418A59E & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&object___TypeInfo, v4);
    sub_B2C35C(&BattleSkillInfoData_TYPE_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15716/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v6);
    byte_418A59E = 1;
  }
  v7 = (System_Object_array *)sub_B2C374(object___TypeInfo, 13LL);
  type = this->fields.type;
  v8 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v16 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( !v7->max_length )
    goto LABEL_44;
  v7->m_Items[0] = (Il2CppObject *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  index = this->fields.index;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &index);
  v23 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_44;
  v7->m_Items[1] = (Il2CppObject *)v23;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  svtUniqueId = this->fields.svtUniqueId;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId);
  v30 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_44;
  v7->m_Items[2] = (Il2CppObject *)v30;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v113[0] = this->fields.isPassive;
  v8 = j_il2cpp_value_box_0(bool_TypeInfo, v113);
  v37 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_44;
  v7->m_Items[3] = (Il2CppObject *)v37;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  v112[0] = this->fields.isCharge;
  v8 = j_il2cpp_value_box_0(bool_TypeInfo, v112);
  v44 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 4 )
    goto LABEL_44;
  v7->m_Items[4] = (Il2CppObject *)v44;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  v111 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v111);
  v51 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 5 )
    goto LABEL_44;
  v7->m_Items[5] = (Il2CppObject *)v51;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[5], v51, v45, v46, v47, v48, v49, v50);
  skilllv = this->fields.skilllv;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
  v58 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 6 )
    goto LABEL_44;
  v7->m_Items[6] = (Il2CppObject *)v58;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[6], v58, v52, v53, v54, v55, v56, v57);
  chargeTurn = this->fields.chargeTurn;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
  v65 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 7 )
    goto LABEL_44;
  v7->m_Items[7] = (Il2CppObject *)v65;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[7], v65, v59, v60, v61, v62, v63, v64);
  priority = this->fields.priority;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &priority);
  v72 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 8 )
    goto LABEL_44;
  v7->m_Items[8] = (Il2CppObject *)v72;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[8], v72, v66, v67, v68, v69, v70, v71);
  v107[0] = this->fields.isUseSkill;
  v8 = j_il2cpp_value_box_0(bool_TypeInfo, v107);
  v79 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 9 )
    goto LABEL_44;
  v7->m_Items[9] = (Il2CppObject *)v79;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[9], v79, v73, v74, v75, v76, v77, v78);
  strengthStatus = this->fields.strengthStatus;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus);
  v86 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xA )
    goto LABEL_44;
  v7->m_Items[10] = (Il2CppObject *)v86;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[10], v86, v80, v81, v82, v83, v84, v85);
  itemImageId = this->fields.itemImageId;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId);
  v93 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xB )
    goto LABEL_44;
  v7->m_Items[11] = (Il2CppObject *)v93;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[11], v93, v87, v88, v89, v90, v91, v92);
  changeTDCommandType = this->fields.changeTDCommandType;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType);
  v100 = (System_Int32_array **)v8;
  if ( v8 )
  {
    v8 = sub_B2C41C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_45:
      v103 = sub_B2C454(v8);
      sub_B2C400(v103, 0LL);
    }
  }
  if ( v7->max_length <= 0xC )
  {
LABEL_44:
    v102 = sub_B2C460(v8);
    sub_B2C400(v102, 0LL);
  }
  v7->m_Items[12] = (Il2CppObject *)v100;
  sub_B2C2F8((BattleServantConfConponent_o *)&v7->m_Items[12], v100, v94, v95, v96, v97, v98, v99);
  return System_String__Format_44384256((System_String_o *)StringLiteral_15716/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v7, 0LL);
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

  if ( (byte_418A5AB & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    byte_418A5AB = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  v5 = *(_QWORD *)(v3 + 24);
  v6 = v3;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
      {
        v9 = sub_B2C460(v3);
        sub_B2C400(v9, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t result; // w0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A59F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A59F = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            Instance,
                                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                    this,
                                    this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_B2C434(Instance, v7);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5B1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B2C434(Instance, v6);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5A5 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B2C434(Instance, v6);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5A4 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B2C434(Instance, v6);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5A6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B2C434(Instance, v6);
  }
  return 0;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5A1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B2C434(Instance, v6);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5A2 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B2C434(Instance, v6);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5A3 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B2C434(Instance, v6);
  }
  return 0LL;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInVoices(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A5A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418A5A0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B2C434(Instance, v6);
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

  if ( (byte_418A5B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_DataVals___, method);
    byte_418A5B5 = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_DataVals___;
    v6 = **((_QWORD **)Method_System_Array_Empty_DataVals___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_DataVals___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AC505C(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AC505C(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AC505C(*v5[6]);
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
    sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *DataValArray; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_418A5B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_DataVals___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_B2C35C(&Method_System_Func_DataVals__bool___ctor__, v5);
    sub_B2C35C(&System_Func_DataVals__bool__TypeInfo, v6);
    byte_418A5B6 = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v8 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_DataVals__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleSkillInfoData_IsSelectedAddTargetIndex__,
    (const MethodInfo_2711C04 *)Method_System_Func_DataVals__bool___ctor__);
  v9 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
         DataValArray,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v9,
                             (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *__fastcall BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ValidDataValArray; // x19
  BattleSkillInfoData___c_c *v9; // x8
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__84_0; // x20
  Il2CppObject *v12; // x21
  struct BattleSkillInfoData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_418A5B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_B2C35C(&Method_System_Func_DataVals__int___ctor__, v4);
    sub_B2C35C(&System_Func_DataVals__int__TypeInfo, v5);
    sub_B2C35C(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__84_0__, v6);
    sub_B2C35C(&BattleSkillInfoData___c_TypeInfo, v7);
    byte_418A5B7 = 1;
  }
  ValidDataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_ValidDataValArray(
                                                                             this,
                                                                             method);
  v9 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v9 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__84_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__84_0;
  if ( !_9__84_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__84_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__84_0,
      v12,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__84_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_DataVals__int___ctor__);
    v13 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v13->__9__84_0 = (struct System_Func_DataVals__int__o *)_9__84_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__84_0,
      (System_Int32_array **)_9__84_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               ValidDataValArray,
                                                               (System_Func_TSource__TResult__o *)_9__84_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v20,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0

  if ( (byte_41850DC & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillInfoData___c_TypeInfo, v1);
    byte_41850DC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSkillInfoData___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return DataVals__GetParam(x, 125, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__84_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.targetType;
}