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
  int32_t v6; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  SkillMotionSkip_o *v11; // x19

  if ( (byte_40FCD64 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&SkillMotionSkip_TypeInfo, v4);
    byte_40FCD64 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  v11 = 0LL;
  if ( SkillMaster__IsSkippable(Master_WarQuestSelectionMaster, v6, 0LL) )
  {
    v11 = (SkillMotionSkip_o *)sub_B170CC(SkillMotionSkip_TypeInfo, v7, v8, v9, v10);
    SkillMotionSkip___ctor(v11, 0LL);
  }
  return (BaseMotionSkip_o *)v11;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v8; // w0
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v10; // x19
  WebViewManager_o *v11; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Int32_array *funcId; // x20
  __int64 v16; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x19
  unsigned __int64 v18; // x21

  if ( (byte_40FCD5F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FCD5F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v8 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v8, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11
    || (v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v11,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v10->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  v16 = *(_QWORD *)&funcId->max_length;
  if ( (int)v16 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v17 = v12;
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      if ( !v17 )
        goto LABEL_18;
      v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             v17,
                                                             funcId->m_Items[v18 + 1],
                                                             (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( v12 )
      {
        if ( HIDWORD(v12->fields._MasterName_k__BackingField) == 27 )
          break;
      }
      LODWORD(v16) = funcId->max_length;
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_15;
    }
    LOBYTE(Entity) = 1;
  }
  return (char)Entity;
}


System_Int32_array *__fastcall BattleSkillInfoData__GetAddIndiv(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v6; // w0
  SkillLvEntity_o *Entity; // x0

  if ( (byte_40FCD60 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCD60 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
               this,
               this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v6, this->fields.skilllv, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return SkillLvEntity__GetAddIndiv(Entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__GetCondItemId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_B170D4();
  return commonReleaseEntity->fields.condId;
}


int32_t __fastcall BattleSkillInfoData__GetCondItemNumber(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  struct CommonReleaseEntity_o *commonReleaseEntity; // x8

  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 0;
  commonReleaseEntity = this->fields.commonReleaseEntity;
  if ( !commonReleaseEntity )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int32_t v9; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD6B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, isBefore);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCD6B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v9 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v9,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_B170D4();
  }
  return -1;
}


BattleSkillInfoData_array *__fastcall BattleSkillInfoData__GetLoadArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x20

  if ( (byte_40FCD63 & 1) == 0 )
  {
    sub_B16FFC(&BattleSkillInfoData___TypeInfo, method);
    byte_40FCD63 = 1;
  }
  v4 = sub_B17014(BattleSkillInfoData___TypeInfo, 1LL, v2);
  if ( !v4 )
    sub_B170D4();
  v12 = v4;
  if ( this )
  {
    v4 = sub_B170BC(this, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
  {
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  *(_QWORD *)(v12 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (BattleSkillInfoData_array *)v12;
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleSkillInfoData___c_c *v13; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__81_0; // x20
  Il2CppObject *v16; // x21
  struct BattleSkillInfoData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40FCD6F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Max_DataVals___, method);
    sub_B16FFC(&Method_System_Func_DataVals__int___ctor__, v3);
    sub_B16FFC(&System_Func_DataVals__int__TypeInfo, v4);
    sub_B16FFC(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__81_0__, v5);
    sub_B16FFC(&BattleSkillInfoData___c_TypeInfo, v6);
    byte_40FCD6F = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v13 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v13 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__81_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__81_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_DataVals__int__TypeInfo,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10,
                                                                                 v11);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__81_0,
      v16,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__81_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_DataVals__int___ctor__);
    v17 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v17->__9__81_0 = (struct System_Func_DataVals__int__o *)_9__81_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__81_0,
      (System_Int32_array **)_9__81_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  return System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__81_0,
           (const MethodInfo_19BCDAC *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v6; // w0

  if ( (byte_40FCD6A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCD6A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
               this,
               this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B170D4();
  }
  return SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v6, this->fields.skilllv, 0LL);
}


bool __fastcall BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Nullable_bool__o *v8; // x0
  int32_t commonReleaseCondId; // w8
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CommonReleaseEntity_array *List; // x0
  CommonReleaseEntity_array *v13; // x21
  CommonReleaseEntity_o *v14; // x8
  struct System_Nullable_bool__o *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CommonReleaseEntity_o *v24; // x1
  struct System_Nullable_bool__o v25; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v26; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v27; // 0:w0.2

  if ( (byte_40FCD66 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B16FFC(&Method_System_Nullable_bool___ctor__, v3);
    sub_B16FFC(&Method_System_Nullable_bool__get_HasValue__, v4);
    sub_B16FFC(&Method_System_Nullable_bool__get_Value__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FCD66 = 1;
  }
  if ( !this->fields.hasCond.fields.has_value )
  {
    v8 = &v26;
    v26 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_296535C *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v26;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_14;
      List = CommonReleaseMaster__getList(MasterData_WarQuestSelectionMaster, this->fields.commonReleaseCondId, 0LL);
      if ( !List )
        goto LABEL_14;
      v13 = List;
      if ( List->max_length != 1 )
        goto LABEL_4;
      v14 = List->m_Items[0];
      if ( !v14 )
LABEL_14:
        sub_B170D4();
      if ( v14->fields.condType == 2 )
      {
        v15 = &v25;
        v25 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v15,
          1,
          (const MethodInfo_296535C *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v25;
        if ( !v13->max_length )
        {
          sub_B17100(v16, v17, v18);
          sub_B170A0();
        }
        v24 = v13->m_Items[0];
        this->fields.commonReleaseEntity = v24;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.commonReleaseEntity,
          (System_Int32_array **)v24,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
    }
  }
LABEL_4:
  v27 = (System_Nullable_bool__o)((_WORD)this + 120);
  return System_Nullable_bool___get_Value(v27, (const MethodInfo_2965378 *)Method_System_Nullable_bool__get_Value__);
}


bool __fastcall BattleSkillInfoData__IsChangeable(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleSkillInfoData__IsOpenCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FCD67 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCD67 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, this->fields.commonReleaseCondId, 0LL, 0, 0LL);
}


bool __fastcall BattleSkillInfoData__IsSelectedAddTargetIndex(
        BattleSkillInfoData_o *this,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  int32_t param; // [xsp+Ch] [xbp-4h] BYREF

  param = 0;
  if ( !dataVal )
    sub_B170D4();
  return !DataVals__TryGetParam(dataVal, 125, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v8; // w0
  SkillLvEntity_o *Entity; // x20
  WebViewManager_o *v10; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *funcId; // x20
  __int64 v15; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x19
  unsigned __int64 v17; // x21

  if ( (byte_40FCD5E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FCD5E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v8 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
               this,
               this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v8, this->fields.skilllv, 0LL),
        (v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v10,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  v15 = *(_QWORD *)&funcId->max_length;
  if ( (int)v15 < 1 )
    return 0;
  v16 = v11;
  v17 = 0LL;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)v15 )
    {
      sub_B17100(v11, v12, v13);
      sub_B170A0();
    }
    if ( !v16 )
      goto LABEL_17;
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           v16,
                                                           funcId->m_Items[v17 + 1],
                                                           (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( v11 )
    {
      if ( HIDWORD(v11->fields._MasterName_k__BackingField) == 4 )
        return 1;
    }
    LODWORD(v15) = funcId->max_length;
    if ( (__int64)++v17 >= (int)v15 )
      return 0;
  }
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SkillMaster_o *Master_WarQuestSelectionMaster; // x20
  int32_t v5; // w0

  if ( (byte_40FCD69 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FCD69 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return SkillMaster__IsWarBoardForcePassiveEveryBattle(Master_WarQuestSelectionMaster, v5, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19

  if ( (byte_40FCD65 & 1) == 0 )
  {
    sub_B16FFC(&BattleMasterSkillInfoData_TypeInfo, method);
    sub_B16FFC(&BattleSelfSkillInfoData_TypeInfo, v6);
    sub_B16FFC(&BattleSkillInfoData_TypeInfo, v7);
    byte_40FCD65 = 1;
  }
  if ( type == 1 )
  {
    v8 = sub_B170CC(BattleMasterSkillInfoData_TypeInfo, method, v2, v3, v4);
    BattleMasterSkillInfoData___ctor((BattleMasterSkillInfoData_o *)v8, 0LL);
  }
  else if ( type == 11 )
  {
    v8 = sub_B170CC(BattleSelfSkillInfoData_TypeInfo, method, v2, v3, v4);
    BattleSelfSkillInfoData___ctor((BattleSelfSkillInfoData_o *)v8, 0LL);
  }
  else
  {
    v8 = sub_B170CC(BattleSkillInfoData_TypeInfo, method, v2, v3, v4);
    *(_DWORD *)(v8 + 64) = -1;
    *(_DWORD *)(v8 + 104) = -1;
    *(_QWORD *)(v8 + 88) = -1LL;
    *(_QWORD *)(v8 + 96) = -1LL;
    System_Object___ctor((Il2CppObject *)v8, 0LL);
  }
  return (BattleSkillInfoData_o *)v8;
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
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  __int64 v10; // x19
  unsigned __int64 v11; // x22
  bool v12; // w20
  BattleSkillInfoData_o *v13; // x21
  ServantAssetLoadManager_o *Instance; // x0

  if ( (byte_40FCD61 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_40FCD61 = 1;
  }
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr,
         method);
  if ( !v6 )
    goto LABEL_14;
  v9 = *(_QWORD *)(v6 + 24);
  v10 = v6;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    v12 = dlOnly;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
      {
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
      v13 = *(BattleSkillInfoData_o **)(v10 + 32 + 8 * v11);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadSkillAnyVoice(v13, v12, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v13, 0LL);
      LODWORD(v9) = *(_DWORD *)(v10 + 24);
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_14:
    sub_B170D4();
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Object_array *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x21
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x21
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x21
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x21
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x21
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x21
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x20
  int32_t changeTDCommandType; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t itemImageId; // [xsp+8h] [xbp-58h] BYREF
  int32_t strengthStatus; // [xsp+Ch] [xbp-54h] BYREF
  char v94[4]; // [xsp+10h] [xbp-50h] BYREF
  int32_t priority; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t chargeTurn; // [xsp+18h] [xbp-48h] BYREF
  int32_t skilllv; // [xsp+1Ch] [xbp-44h] BYREF
  int v98; // [xsp+20h] [xbp-40h] BYREF
  char v99[4]; // [xsp+24h] [xbp-3Ch] BYREF
  char v100[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtUniqueId; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t index; // [xsp+38h] [xbp-28h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_40FCD55 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v4);
    sub_B16FFC(&object___TypeInfo, v5);
    sub_B16FFC(&BattleSkillInfoData_TYPE_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15653/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v7);
    byte_40FCD55 = 1;
  }
  v8 = (System_Object_array *)sub_B17014(object___TypeInfo, 13LL, v2);
  type = this->fields.type;
  v9 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v8 )
    sub_B170D4();
  v17 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( !v8->max_length )
    goto LABEL_44;
  v8->m_Items[0] = (Il2CppObject *)v17;
  sub_B16F98((BattleServantConfConponent_o *)v8->m_Items, v17, v11, v12, v13, v14, v15, v16);
  index = this->fields.index;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &index);
  v23 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_44;
  v8->m_Items[1] = (Il2CppObject *)v23;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[1], v23, v11, v18, v19, v20, v21, v22);
  svtUniqueId = this->fields.svtUniqueId;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId);
  v29 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_44;
  v8->m_Items[2] = (Il2CppObject *)v29;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[2], v29, v11, v24, v25, v26, v27, v28);
  v100[0] = this->fields.isPassive;
  v9 = j_il2cpp_value_box_0(bool_TypeInfo, v100);
  v35 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_44;
  v8->m_Items[3] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[3], v35, v11, v30, v31, v32, v33, v34);
  v99[0] = this->fields.isCharge;
  v9 = j_il2cpp_value_box_0(bool_TypeInfo, v99);
  v41 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 4 )
    goto LABEL_44;
  v8->m_Items[4] = (Il2CppObject *)v41;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[4], v41, v11, v36, v37, v38, v39, v40);
  v98 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
          this,
          this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v98);
  v47 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 5 )
    goto LABEL_44;
  v8->m_Items[5] = (Il2CppObject *)v47;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[5], v47, v11, v42, v43, v44, v45, v46);
  skilllv = this->fields.skilllv;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
  v53 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 6 )
    goto LABEL_44;
  v8->m_Items[6] = (Il2CppObject *)v53;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[6], v53, v11, v48, v49, v50, v51, v52);
  chargeTurn = this->fields.chargeTurn;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
  v59 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 7 )
    goto LABEL_44;
  v8->m_Items[7] = (Il2CppObject *)v59;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[7], v59, v11, v54, v55, v56, v57, v58);
  priority = this->fields.priority;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &priority);
  v65 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 8 )
    goto LABEL_44;
  v8->m_Items[8] = (Il2CppObject *)v65;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[8], v65, v11, v60, v61, v62, v63, v64);
  v94[0] = this->fields.isUseSkill;
  v9 = j_il2cpp_value_box_0(bool_TypeInfo, v94);
  v71 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 9 )
    goto LABEL_44;
  v8->m_Items[9] = (Il2CppObject *)v71;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[9], v71, v11, v66, v67, v68, v69, v70);
  strengthStatus = this->fields.strengthStatus;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus);
  v77 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 0xA )
    goto LABEL_44;
  v8->m_Items[10] = (Il2CppObject *)v77;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[10], v77, v11, v72, v73, v74, v75, v76);
  itemImageId = this->fields.itemImageId;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId);
  v83 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_45;
  }
  if ( v8->max_length <= 0xB )
    goto LABEL_44;
  v8->m_Items[11] = (Il2CppObject *)v83;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[11], v83, v11, v78, v79, v80, v81, v82);
  changeTDCommandType = this->fields.changeTDCommandType;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType);
  v89 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v9 = sub_B170BC(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_45:
      sub_B170F4(v9);
      sub_B170A0();
    }
  }
  if ( v8->max_length <= 0xC )
  {
LABEL_44:
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  v8->m_Items[12] = (Il2CppObject *)v89;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[12], v89, v11, v84, v85, v86, v87, v88);
  return System_String__Format_43822456((System_String_o *)StringLiteral_15653/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v8, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x8
  __int64 v7; // x19
  unsigned __int64 v8; // x21
  BattleSkillInfoData_o *v9; // x20

  if ( (byte_40FCD62 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    byte_40FCD62 = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_B170D4();
  v6 = *(_QWORD *)(v3 + 24);
  v7 = v3;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
      {
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v9 = *(BattleSkillInfoData_o **)(v7 + 32 + 8 * v8);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__unloadSkillAnyVoice(v9, 0LL);
      LODWORD(v6) = *(_DWORD *)(v7 + 24);
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v8; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD56 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD56 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      v8 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
             this,
             this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                v8,
                (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          result = 0;
          goto LABEL_10;
        }
        if ( entity )
        {
          result = SkillEntity__getSkillCutInId((SkillEntity_o *)entity, 0LL);
LABEL_10:
          this->fields.cutInId = result;
          return result;
        }
      }
    }
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD68 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD68 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v7,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD5C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD5C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v7,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_10:
    sub_B170D4();
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD5B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD5B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v7,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_10:
    sub_B170D4();
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD5D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD5D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v7,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B170D4();
  }
  return 0;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD58 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD58 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v7,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B170D4();
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD59 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD59 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v7,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B170D4();
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD5A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD5A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v7,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B170D4();
  }
  return 0LL;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInVoices(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int32_t v7; // w0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD57 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCD57 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         v7,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B170D4();
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

  if ( (byte_40FCD6C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_DataVals___, method);
    byte_40FCD6C = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_DataVals___;
    v6 = **((_QWORD **)Method_System_Array_Empty_DataVals___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_DataVals___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AAFCFC(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AAFCFC(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AAFCFC(*v5[6]);
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
    sub_B16F98(
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_40FCD6D & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_DataVals___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_B16FFC(&Method_System_Func_DataVals__bool___ctor__, v5);
    sub_B16FFC(&System_Func_DataVals__bool__TypeInfo, v6);
    byte_40FCD6D = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_DataVals__bool__TypeInfo,
                                                                             v8,
                                                                             v9,
                                                                             v10,
                                                                             v11);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleSkillInfoData_IsSelectedAddTargetIndex__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_DataVals__bool___ctor__);
  v13 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          DataValArray,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v13,
                             (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_DataVals___);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_IEnumerable_TSource__o *ValidDataValArray; // x19
  BattleSkillInfoData___c_c *v13; // x8
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__80_0; // x20
  Il2CppObject *v16; // x21
  struct BattleSkillInfoData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_40FCD6E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_B16FFC(&Method_System_Func_DataVals__int___ctor__, v4);
    sub_B16FFC(&System_Func_DataVals__int__TypeInfo, v5);
    sub_B16FFC(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__80_0__, v6);
    sub_B16FFC(&BattleSkillInfoData___c_TypeInfo, v7);
    byte_40FCD6E = 1;
  }
  ValidDataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_ValidDataValArray(
                                                                             this,
                                                                             method);
  v13 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v13 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_DataVals__int__TypeInfo,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10,
                                                                                 v11);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__80_0,
      v16,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__80_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_DataVals__int___ctor__);
    v17 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v17->__9__80_0 = (struct System_Func_DataVals__int__o *)_9__80_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__80_0,
      (System_Int32_array **)_9__80_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               ValidDataValArray,
                                                               (System_Func_TSource__TResult__o *)_9__80_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0

  if ( (byte_40F71D0 & 1) == 0 )
  {
    sub_B16FFC(&BattleSkillInfoData___c_TypeInfo, v1);
    byte_40F71D0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleSkillInfoData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSkillInfoData___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__81_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return DataVals__GetParam(x, 125, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__80_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.targetType;
}