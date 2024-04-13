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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  SkillMotionSkip_o *v14; // x19

  if ( (byte_42EB2D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SkillMotionSkip_TypeInfo, v8, v9, v10);
    byte_42EB2D3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  v12 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
          this,
          this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(v12, v13);
  v14 = 0LL;
  if ( SkillMaster__IsSkippable(Master_WarQuestSelectionMaster, v12, 0LL) )
  {
    v14 = (SkillMotionSkip_o *)sub_B5D694(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v14, 0LL);
  }
  return (BaseMotionSkip_o *)v14;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v18; // x19
  struct System_Int32_array *funcId; // x20
  __int64 v20; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x19
  unsigned __int64 v22; // x21
  __int64 v23; // x0

  if ( (byte_42EB2CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB2CE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v18 = Entity;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v18->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(Instance, v15);
  }
  v20 = *(_QWORD *)&funcId->max_length;
  if ( (int)v20 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
      {
        v23 = sub_B5D6C8(Instance);
        sub_B5D668(v23, 0LL);
      }
      if ( !v21 )
        goto LABEL_18;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v21,
                                    funcId->m_Items[v22 + 1],
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance->fields.datalist) == 27 )
          break;
      }
      LODWORD(v20) = funcId->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_15;
    }
    LOBYTE(Entity) = 1;
  }
  return (char)Entity;
}


System_Int32_array *__fastcall BattleSkillInfoData__GetAddIndiv(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42EB2CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB2CF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_B5D69C(Instance, v9);
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
    sub_B5D69C(HasCond, v4);
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
    sub_B5D69C(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


int32_t __fastcall BattleSkillInfoData__GetFieldCallEffectId(
        BattleSkillInfoData_o *this,
        bool isBefore,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, isBefore, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB2DA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_B5D69C(Instance, v13);
  }
  return -1;
}


BattleSkillInfoData_array *__fastcall BattleSkillInfoData__GetLoadArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x20
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_42EB2D2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillInfoData___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB2D2 = 1;
  }
  v5 = sub_B5D5DC(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  v13 = v5;
  if ( this )
  {
    v5 = sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
      v16 = sub_B5D6BC(0LL);
      sub_B5D668(v16, 0LL);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
  {
    v15 = sub_B5D6C8(v5);
    sub_B5D668(v15, 0LL);
  }
  *(_QWORD *)(v13 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (BattleSkillInfoData_array *)v13;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ICollection_o *DataValArray; // x19
  BattleSkillInfoData___c_c *v19; // x0
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__87_0; // x20
  Il2CppObject *v22; // x21
  struct BattleSkillInfoData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42EB2DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Max_DataVals___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_DataVals__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_DataVals__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__87_0__, v11, v12, v13);
    sub_B5D5C4(&BattleSkillInfoData___c_TypeInfo, v14, v15, v16);
    byte_42EB2DE = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v19 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v19 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__87_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__87_0,
      v22,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__87_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_DataVals__int___ctor__);
    v23 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v23->__9__87_0 = (struct System_Func_DataVals__int__o *)_9__87_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__87_0,
      (System_Int32_array **)_9__87_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  return System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__87_0,
           (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42EB2D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB2D9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (WebViewManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                         this,
                                         this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B5D69C(Instance, v9);
  }
  return SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, this->fields.skilllv, 0LL);
}


bool __fastcall BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Nullable_bool__o *v18; // x0
  int32_t commonReleaseCondId; // w8
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  DataManager_o *v22; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  struct System_Nullable_bool__o *v24; // x0
  __int64 v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct CommonReleaseEntity_o *v32; // x1
  __int64 v33; // x0
  struct System_Nullable_bool__o v34; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v35; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v36; // 0:w0.2

  if ( (byte_42EB2D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Nullable_bool__get_HasValue__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Nullable_bool__get_Value__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EB2D5 = 1;
  }
  if ( !this->fields.hasCond.fields.has_value )
  {
    v18 = &v35;
    v35 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v18,
      0,
      (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v35;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = (DataManager_o *)CommonReleaseMaster__getList(
                                    (CommonReleaseMaster_o *)Instance,
                                    this->fields.commonReleaseCondId,
                                    0LL);
      if ( !Instance )
        goto LABEL_14;
      v22 = Instance;
      if ( LODWORD(Instance->fields.datalist) != 1 )
        goto LABEL_4;
      lookup = Instance->fields.lookup;
      if ( !lookup )
LABEL_14:
        sub_B5D69C(Instance, v21);
      if ( HIDWORD(lookup->fields.entries) == 2 )
      {
        v24 = &v34;
        v34 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v24,
          1,
          (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v34;
        if ( !LODWORD(v22->fields.datalist) )
        {
          v33 = sub_B5D6C8(v25);
          sub_B5D668(v33, 0LL);
        }
        v32 = (struct CommonReleaseEntity_o *)v22->fields.lookup;
        this->fields.commonReleaseEntity = v32;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.commonReleaseEntity,
          (System_Int32_array **)v32,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
    }
  }
LABEL_4:
  v36 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v36, (const MethodInfo_2347EEC *)Method_System_Nullable_bool__get_Value__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EB2D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB2D6 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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
    sub_B5D69C(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 125, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v19; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x19
  unsigned __int64 v21; // x21
  __int64 v23; // x0

  if ( (byte_42EB2CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB2CD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Entity = SkillLvMaster__GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   (int32_t)Instance,
                   this->fields.skilllv,
                   0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___),
        !Entity)
    || (funcId = Entity->fields.funcId) == 0LL )
  {
LABEL_17:
    sub_B5D69C(Instance, v15);
  }
  v19 = *(_QWORD *)&funcId->max_length;
  if ( (int)v19 < 1 )
    return 0;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v21 = 0LL;
  while ( 1 )
  {
    if ( v21 >= (unsigned int)v19 )
    {
      v23 = sub_B5D6C8(Instance);
      sub_B5D668(v23, 0LL);
    }
    if ( !v20 )
      goto LABEL_17;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v20,
                                  funcId->m_Items[v21 + 1],
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    if ( Instance )
    {
      if ( HIDWORD(Instance->fields.datalist) == 4 )
        return 1;
    }
    LODWORD(v19) = funcId->max_length;
    if ( (__int64)++v21 >= (int)v19 )
      return 0;
  }
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SkillMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42EB2D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EB2D8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(v9, v10);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle(Master_WarQuestSelectionMaster, v9, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x19

  if ( (byte_42EB2D4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleMasterSkillInfoData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleSelfSkillInfoData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleSkillInfoData_TypeInfo, v8, v9, v10);
    byte_42EB2D4 = 1;
  }
  if ( type == 1 )
  {
    v11 = sub_B5D694(BattleMasterSkillInfoData_TypeInfo);
    BattleMasterSkillInfoData___ctor((BattleMasterSkillInfoData_o *)v11, 0LL);
  }
  else if ( type == 11 )
  {
    v11 = sub_B5D694(BattleSelfSkillInfoData_TypeInfo);
    BattleSelfSkillInfoData___ctor((BattleSelfSkillInfoData_o *)v11, 0LL);
  }
  else
  {
    v11 = sub_B5D694(BattleSkillInfoData_TypeInfo);
    *(_DWORD *)(v11 + 64) = -1;
    *(_DWORD *)(v11 + 104) = -1;
    *(_QWORD *)(v11 + 88) = -1LL;
    *(_QWORD *)(v11 + 96) = -1LL;
    System_Object___ctor((Il2CppObject *)v11, 0LL);
  }
  return (BattleSkillInfoData_o *)v11;
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v10; // x1
  struct ServantMaster_o *svtmaster; // x8
  ServantAssetLoadManager_o *v12; // x19
  unsigned __int64 v13; // x22
  bool v14; // w20
  BattleSkillInfoData_o *v15; // x21
  __int64 v16; // x0

  if ( (byte_42EB2D0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, dlOnly, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6, v7, v8);
    byte_42EB2D0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._10_GetLoadArray.method)(
                                            this,
                                            this->klass->vtable._11_PreAddProcess.methodPtr,
                                            method);
  if ( !Instance )
    goto LABEL_14;
  svtmaster = Instance->fields.svtmaster;
  v12 = Instance;
  if ( (int)svtmaster >= 1 )
  {
    v13 = 0LL;
    v14 = dlOnly;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)svtmaster )
      {
        v16 = sub_B5D6C8(Instance);
        sub_B5D668(v16, 0LL);
      }
      v15 = (BattleSkillInfoData_o *)*((_QWORD *)&v12->fields.svtlimitmaster + v13);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadSkillAnyVoice(v15, v14, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v15, 0LL);
      LODWORD(svtmaster) = v12->fields.svtmaster;
      if ( (__int64)++v13 >= (int)svtmaster )
        return;
    }
LABEL_14:
    sub_B5D69C(Instance, v10);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Object_array *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
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
  System_Int32_array **v96; // x21
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x21
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x20
  __int64 v112; // x0
  __int64 v113; // x0
  int32_t changeTDCommandType; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t itemImageId; // [xsp+8h] [xbp-58h] BYREF
  int32_t strengthStatus; // [xsp+Ch] [xbp-54h] BYREF
  char v117[4]; // [xsp+10h] [xbp-50h] BYREF
  int32_t priority; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t chargeTurn; // [xsp+18h] [xbp-48h] BYREF
  int32_t skilllv; // [xsp+1Ch] [xbp-44h] BYREF
  int v121; // [xsp+20h] [xbp-40h] BYREF
  char v122[4]; // [xsp+24h] [xbp-3Ch] BYREF
  char v123[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t svtUniqueId; // [xsp+2Ch] [xbp-34h] BYREF
  int32_t index; // [xsp+38h] [xbp-28h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-24h] BYREF

  if ( (byte_42EB2C4 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&object___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleSkillInfoData_TYPE_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15906/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v14, v15, v16);
    byte_42EB2C4 = 1;
  }
  v17 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 13LL);
  type = this->fields.type;
  v18 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v26 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( !v17->max_length )
    goto LABEL_44;
  v17->m_Items[0] = (Il2CppObject *)v26;
  sub_B5D560((BattleServantConfConponent_o *)v17->m_Items, v26, v20, v21, v22, v23, v24, v25);
  index = this->fields.index;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &index);
  v33 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_44;
  v17->m_Items[1] = (Il2CppObject *)v33;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  svtUniqueId = this->fields.svtUniqueId;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId);
  v40 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 2 )
    goto LABEL_44;
  v17->m_Items[2] = (Il2CppObject *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v123[0] = this->fields.isPassive;
  v18 = j_il2cpp_value_box_0(bool_TypeInfo, v123);
  v47 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 3 )
    goto LABEL_44;
  v17->m_Items[3] = (Il2CppObject *)v47;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  v122[0] = this->fields.isCharge;
  v18 = j_il2cpp_value_box_0(bool_TypeInfo, v122);
  v54 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 4 )
    goto LABEL_44;
  v17->m_Items[4] = (Il2CppObject *)v54;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  v121 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v121);
  v61 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 5 )
    goto LABEL_44;
  v17->m_Items[5] = (Il2CppObject *)v61;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[5], v61, v55, v56, v57, v58, v59, v60);
  skilllv = this->fields.skilllv;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
  v68 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 6 )
    goto LABEL_44;
  v17->m_Items[6] = (Il2CppObject *)v68;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  chargeTurn = this->fields.chargeTurn;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
  v75 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 7 )
    goto LABEL_44;
  v17->m_Items[7] = (Il2CppObject *)v75;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[7], v75, v69, v70, v71, v72, v73, v74);
  priority = this->fields.priority;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &priority);
  v82 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 8 )
    goto LABEL_44;
  v17->m_Items[8] = (Il2CppObject *)v82;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v117[0] = this->fields.isUseSkill;
  v18 = j_il2cpp_value_box_0(bool_TypeInfo, v117);
  v89 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 9 )
    goto LABEL_44;
  v17->m_Items[9] = (Il2CppObject *)v89;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  strengthStatus = this->fields.strengthStatus;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus);
  v96 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 0xA )
    goto LABEL_44;
  v17->m_Items[10] = (Il2CppObject *)v96;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  itemImageId = this->fields.itemImageId;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId);
  v103 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_45;
  }
  if ( v17->max_length <= 0xB )
    goto LABEL_44;
  v17->m_Items[11] = (Il2CppObject *)v103;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[11], v103, v97, v98, v99, v100, v101, v102);
  changeTDCommandType = this->fields.changeTDCommandType;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType);
  v110 = (System_Int32_array **)v18;
  if ( v18 )
  {
    v18 = sub_B5D684(v18, v17->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_45:
      v113 = sub_B5D6BC(v18);
      sub_B5D668(v113, 0LL);
    }
  }
  if ( v17->max_length <= 0xC )
  {
LABEL_44:
    v112 = sub_B5D6C8(v18);
    sub_B5D668(v112, 0LL);
  }
  v17->m_Items[12] = (Il2CppObject *)v110;
  sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[12], v110, v104, v105, v106, v107, v108, v109);
  return System_String__Format_44656512((System_String_o *)StringLiteral_15906/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x19
  unsigned __int64 v9; // x21
  BattleSkillInfoData_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42EB2D1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB2D1 = 1;
  }
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  v7 = *(_QWORD *)(v5 + 24);
  v8 = v5;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v11 = sub_B5D6C8(v5);
        sub_B5D668(v11, 0LL);
      }
      v10 = *(BattleSkillInfoData_o **)(v8 + 32 + 8 * v9);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__unloadSkillAnyVoice(v10, 0LL);
      LODWORD(v7) = *(_DWORD *)(v8 + 24);
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t result; // w0
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2C5 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            Instance,
                                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                    this,
                                    this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                MasterData_WarQuestSelectionMaster,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_B5D69C(Instance, v13);
  }
  return result;
}


int32_t __fastcall BattleSkillInfoData__getInfoId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.index + 100 * this->fields.type;
}


int32_t __fastcall BattleSkillInfoData__getLossCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2D7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2CB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2CB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B5D69C(Instance, v12);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2CA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B5D69C(Instance, v12);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2CC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2C7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2C8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2C9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return 0LL;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInVoices(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB2C6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                this,
                                this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return 0LL;
}


DataVals_array *__fastcall BattleSkillInfoData__get_DataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  DataVals_array *result; // x0
  _QWORD **v7; // x20
  __int64 v8; // x19
  __int16 v9; // w8
  __int64 v10; // x19
  __int64 v11; // x19
  __int64 v12; // x19

  if ( (byte_42EB2DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_DataVals___, (_DWORD)method, v2, v3);
    byte_42EB2DB = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v7 = (_QWORD **)Method_System_Array_Empty_DataVals___;
    v8 = **((_QWORD **)Method_System_Array_Empty_DataVals___ + 6);
    v9 = *(_WORD *)(v8 + 306);
    if ( (v9 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_DataVals___ + 6));
      v9 = *(_WORD *)(v8 + 306);
    }
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *v7[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AF52C4(*v7[6]);
      if ( !*(_DWORD *)(v10 + 224) )
      {
        v11 = *v7[6];
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AF52C4(*v7[6]);
        j_il2cpp_runtime_class_init_0(v11);
      }
    }
    v12 = *v7[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AF52C4(*v7[6]);
    return **(DataVals_array ***)(v12 + 184);
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
    sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *DataValArray; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_42EB2DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_DataVals___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_DataVals___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_DataVals__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_DataVals__bool__TypeInfo, v14, v15, v16);
    byte_42EB2DC = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_DataVals__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleSkillInfoData_IsSelectedAddTargetIndex__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_DataVals__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          DataValArray,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                             v19,
                             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *__fastcall BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ValidDataValArray; // x19
  BattleSkillInfoData___c_c *v21; // x8
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__86_0; // x20
  Il2CppObject *v24; // x21
  struct BattleSkillInfoData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EB2DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataVals__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_DataVals__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_DataVals__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__86_0__, v14, v15, v16);
    sub_B5D5C4(&BattleSkillInfoData___c_TypeInfo, v17, v18, v19);
    byte_42EB2DD = 1;
  }
  ValidDataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_ValidDataValArray(
                                                                             this,
                                                                             method);
  v21 = BattleSkillInfoData___c_TypeInfo;
  if ( (BYTE3(BattleSkillInfoData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v21 = BattleSkillInfoData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__86_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__86_0;
  if ( !_9__86_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__86_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_DataVals__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__86_0,
      v24,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__86_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_DataVals__int___ctor__);
    v25 = BattleSkillInfoData___c_TypeInfo->static_fields;
    v25->__9__86_0 = (struct System_Func_DataVals__int__o *)_9__86_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__86_0,
      (System_Int32_array **)_9__86_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               ValidDataValArray,
                                                               (System_Func_TSource__TResult__o *)_9__86_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v32,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0

  if ( (byte_42E60F7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillInfoData___c_TypeInfo, v1, v2, v3);
    byte_42E60F7 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSkillInfoData___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__87_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return DataVals__GetParam(x, 125, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__86_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.targetType;
}