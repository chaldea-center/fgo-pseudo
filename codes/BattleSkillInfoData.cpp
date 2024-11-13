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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  SkillMotionSkip_o *v14; // x19

  if ( (byte_4B18A66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&SkillMotionSkip_TypeInfo, v6, v7);
    byte_4B18A66 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1BCAA3C(v9, v10);
  v14 = 0LL;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v9, 0LL) )
  {
    v14 = (SkillMotionSkip_o *)sub_1BCAA2C(SkillMotionSkip_TypeInfo, v11, v12, v13);
    SkillMotionSkip___ctor(v14, 0LL);
  }
  return (BaseMotionSkip_o *)v14;
}


bool __fastcall BattleSkillInfoData__ExistsNoTargetNoActionType(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v14; // x19
  struct System_Int32_array *funcId; // x20
  __int64 v16; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x19
  unsigned __int64 v18; // x21

  if ( (byte_4B18A61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B18A61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v14 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v14->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(Instance, v11);
  }
  v16 = *(_QWORD *)&funcId->max_length;
  if ( (int)v16 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v16 )
        sub_1BCAA44(Instance, v11);
      if ( !v17 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v17,
                   funcId->m_Items[v18 + 1],
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance[1].monitor) == 27 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B18A62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B18A62 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1BCAA3C(Instance, v7);
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
    sub_1BCAA3C(HasCond, v4);
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
    sub_1BCAA3C(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


System_String_o *__fastcall BattleSkillInfoData__GetEnemyCountChangeMessage(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A75 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6, v7);
    byte_4B18A75 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                         this,
                         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)v9,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    v9 = entity;
    if ( entity )
      return SkillEntity__GetEnemyCountChangeMessage((SkillEntity_o *)entity, 0LL);
LABEL_11:
    sub_1BCAA3C(v9, v10);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleSkillInfoData__GetFieldCallEffectId(
        BattleSkillInfoData_o *this,
        bool isBefore,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, isBefore, method);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B18A6D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_1BCAA3C(Instance, v10);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x20
  __int64 v14; // x0

  if ( (byte_4B18A65 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillInfoData___TypeInfo, method, v2);
    byte_4B18A65 = 1;
  }
  v4 = sub_1BCA888(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
  v12 = v4;
  if ( this )
  {
    v4 = sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v14 = sub_1BCAA60(0LL);
      sub_1BCA908(v14, 0LL);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1BCAA44(v4, v5);
  *(_QWORD *)(v12 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (BattleSkillInfoData_array *)v12;
}


int32_t __fastcall BattleSkillInfoData__GetMaxSelectAddIndexBySkill(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_ICollection_o *DataValArray; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleSkillInfoData___c_c *v15; // x0
  System_Func_object__int__o *_9__91_0; // x20
  Il2CppObject *v17; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B18A71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Max_DataVals___, method, v2);
    sub_1BCA7E0(&System_Func_DataVals__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__, v6, v7);
    sub_1BCA7E0(&BattleSkillInfoData___c_TypeInfo, v8, v9);
    byte_4B18A71 = 1;
  }
  DataValArray = (System_Collections_ICollection_o *)BattleSkillInfoData__get_DataValArray(this, method);
  if ( BasicHelper__IsNullOrEmpty(DataValArray, 0LL) )
    return -1;
  v15 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v11);
    v15 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__91_0 = (System_Func_object__int__o *)v15->static_fields->__9__91_0;
  if ( !_9__91_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v11);
      v15 = BattleSkillInfoData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__91_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_DataVals__int__TypeInfo, v11, v12, v13);
    System_Func_object__int____ctor(
      _9__91_0,
      v17,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__91_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__91_0 = (struct System_Func_DataVals__int__o *)_9__91_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__91_0,
      (int64_t)_9__91_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__91_0,
           (const MethodInfo_2F3A048 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B18A6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B18A6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
}


bool __fastcall BattleSkillInfoData__HasCond(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Nullable_bool__o *v13; // x0
  int32_t commonReleaseCondId; // w8
  CommonReleaseEntity_array *Instance; // x0
  __int64 v16; // x1
  CommonReleaseEntity_array *v17; // x21
  CommonReleaseEntity_o *v18; // x8
  struct System_Nullable_bool__o *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct CommonReleaseEntity_o *v28; // x1
  struct System_Nullable_bool__o v29; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v30; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v31; // 0:w0.2

  if ( (byte_4B18A68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_bool___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_HasValue__, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_Value__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B18A68 = 1;
  }
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v13 = &v30;
    v30 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v13,
      0,
      (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v30;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !Instance )
        goto LABEL_14;
      Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseCondId, 0LL);
      if ( !Instance )
        goto LABEL_14;
      v17 = Instance;
      if ( Instance->max_length != 1 )
        goto LABEL_4;
      v18 = Instance->m_Items[0];
      if ( !v18 )
LABEL_14:
        sub_1BCAA3C(Instance, v16);
      if ( v18->fields.condType == 2 )
      {
        v19 = &v29;
        v29 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v19,
          1,
          (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v29;
        if ( !v17->max_length )
          sub_1BCAA44(v20, v21);
        v28 = v17->m_Items[0];
        this->fields.commonReleaseEntity = v28;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.commonReleaseEntity,
          (int64_t)v28,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
    }
  }
LABEL_4:
  v31 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v31, (const MethodInfo_36BAF60 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B18A69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B18A69 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
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
    sub_1BCAA3C(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 124, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
}


bool __fastcall BattleSkillInfoData__IsTargetTypeEnemy(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x20
  struct System_Int32_array *funcId; // x20
  __int64 v15; // x8
  bool v16; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x19
  unsigned __int64 v18; // x22

  if ( (byte_4B18A60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B18A60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !Entity )
    goto LABEL_16;
  funcId = Entity->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  v15 = *(_QWORD *)&funcId->max_length;
  v16 = (int)v15 > 0;
  if ( (int)v15 >= 1 )
  {
    v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v15 )
        sub_1BCAA44(Instance, v11);
      if ( !v17 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v17,
                   funcId->m_Items[v18 + 1],
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !Instance || HIDWORD(Instance[1].monitor) != 4 )
      {
        LODWORD(v15) = funcId->max_length;
        v16 = (__int64)++v18 < (int)v15;
        if ( (__int64)v18 < (int)v15 )
          continue;
      }
      return v16;
    }
LABEL_16:
    sub_1BCAA3C(Instance, v11);
  }
  return v16;
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B18A6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B18A6B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
  v7 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1BCAA3C(v7, v8);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v7, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x19
  const MethodInfo *v10; // x1
  _QWORD *v11; // x8

  if ( (byte_4B18A67 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleMasterSkillInfoData_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleSelfSkillInfoData_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleSkillInfoData_TypeInfo, v7, v8);
    byte_4B18A67 = 1;
  }
  if ( type == 1 )
  {
    v11 = &BattleMasterSkillInfoData_TypeInfo;
LABEL_8:
    v9 = sub_1BCAA2C(*v11, method, v2, v3);
    *(_DWORD *)(v9 + 64) = -1;
    *(_QWORD *)(v9 + 88) = -1LL;
    *(_QWORD *)(v9 + 96) = -1LL;
    *(_DWORD *)(v9 + 104) = -1;
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    return (BattleSkillInfoData_o *)v9;
  }
  if ( type != 11 )
  {
    v11 = &BattleSkillInfoData_TypeInfo;
    goto LABEL_8;
  }
  v9 = sub_1BCAA2C(BattleSelfSkillInfoData_TypeInfo, method, v2, v3);
  BattleRankUpSkillInfoData___ctor((BattleRankUpSkillInfoData_o *)v9, v10);
  return (BattleSkillInfoData_o *)v9;
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
  __int64 v6; // x2
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantAssetLoadManager_o *v10; // x19
  unsigned __int64 v11; // x22
  bool v12; // w20
  BattleSkillInfoData_o *v13; // x21

  if ( (byte_4B18A63 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, dlOnly, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5, v6);
    byte_4B18A63 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._10_GetLoadArray.method)(
                                            this,
                                            this->klass->vtable._11_PreAddProcess.methodPtr,
                                            method);
  if ( !Instance )
    goto LABEL_13;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v10 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0LL;
    v12 = dlOnly;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(Instance, v8);
      v13 = (BattleSkillInfoData_o *)*((_QWORD *)&v10->fields.svtmaster + v11);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8);
      ServantAssetLoadManager__preloadSkillAnyVoice(v13, v12, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v13, 0LL);
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1BCAA3C(Instance, v8);
  }
}


void __fastcall BattleSkillInfoData__SortSkill(
        System_Collections_Generic_List_BattleSkillInfoData__o *skillList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleSkillInfoData___c_c *v11; // x0
  System_Func_object__int__o *_9__92_0; // x20
  Il2CppObject *v13; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B18A72 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_StableSort_BattleSkillInfoData___, method, v2);
    sub_1BCA7E0(&System_Func_BattleSkillInfoData__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleSkillInfoData___c__SortSkill_b__92_0__, v7, v8);
    sub_1BCA7E0(&BattleSkillInfoData___c_TypeInfo, v9, v10);
    byte_4B18A72 = 1;
  }
  if ( skillList )
  {
    v11 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, method);
      v11 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__92_0 = (System_Func_object__int__o *)v11->static_fields->__9__92_0;
    if ( !_9__92_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11, method);
        v11 = BattleSkillInfoData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__92_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_BattleSkillInfoData__int__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
      System_Func_object__int____ctor(_9__92_0, v13, Method_BattleSkillInfoData___c__SortSkill_b__92_0__, 0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__92_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__92_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__92_0,
        (int64_t)_9__92_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__92_0,
      0,
      (const MethodInfo_2F028E0 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
  }
}


System_String_o *__fastcall BattleSkillInfoData__ToString(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x21
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x21
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x21
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x19
  __int64 v107; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  char v111[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t chargeTurn; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v115; // [xsp+28h] [xbp-48h] BYREF
  char v116[4]; // [xsp+2Ch] [xbp-44h] BYREF
  char v117[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4B18A55 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&object___TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleSkillInfoData_TYPE_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16073/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v10, v11);
    byte_4B18A55 = 1;
  }
  v12 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 13LL);
  type = this->fields.type;
  v13 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v21 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( !v12->max_length )
    goto LABEL_44;
  v12->m_Items[0] = (Il2CppObject *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)v12->m_Items, v21, v15, v16, v17, v18, v19, v20);
  index = this->fields.index;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &index);
  v28 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_44;
  v12->m_Items[1] = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[1], v28, v22, v23, v24, v25, v26, v27);
  svtUniqueId = this->fields.svtUniqueId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId);
  v35 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_44;
  v12->m_Items[2] = (Il2CppObject *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
  v117[0] = this->fields.isPassive;
  v13 = j_il2cpp_value_box_0(bool_TypeInfo, v117);
  v42 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 3 )
    goto LABEL_44;
  v12->m_Items[3] = (Il2CppObject *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
  v116[0] = this->fields.isCharge;
  v13 = j_il2cpp_value_box_0(bool_TypeInfo, v116);
  v49 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 4 )
    goto LABEL_44;
  v12->m_Items[4] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[4], v49, v43, v44, v45, v46, v47, v48);
  v115 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &v115);
  v56 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 5 )
    goto LABEL_44;
  v12->m_Items[5] = (Il2CppObject *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[5], v56, v50, v51, v52, v53, v54, v55);
  skilllv = this->fields.skilllv;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv);
  v63 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 6 )
    goto LABEL_44;
  v12->m_Items[6] = (Il2CppObject *)v63;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[6], v63, v57, v58, v59, v60, v61, v62);
  chargeTurn = this->fields.chargeTurn;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
  v70 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 7 )
    goto LABEL_44;
  v12->m_Items[7] = (Il2CppObject *)v70;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[7], v70, v64, v65, v66, v67, v68, v69);
  priority = this->fields.priority;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &priority);
  v77 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 8 )
    goto LABEL_44;
  v12->m_Items[8] = (Il2CppObject *)v77;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[8], v77, v71, v72, v73, v74, v75, v76);
  v111[0] = this->fields.isUseSkill;
  v13 = j_il2cpp_value_box_0(bool_TypeInfo, v111);
  v84 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 9 )
    goto LABEL_44;
  v12->m_Items[9] = (Il2CppObject *)v84;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[9], v84, v78, v79, v80, v81, v82, v83);
  strengthStatus = this->fields.strengthStatus;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus);
  v91 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 0xA )
    goto LABEL_44;
  v12->m_Items[10] = (Il2CppObject *)v91;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[10], v91, v85, v86, v87, v88, v89, v90);
  itemImageId = this->fields.itemImageId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId);
  v98 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_45;
  }
  if ( v12->max_length <= 0xB )
    goto LABEL_44;
  v12->m_Items[11] = (Il2CppObject *)v98;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[11], v98, v92, v93, v94, v95, v96, v97);
  changeTDCommandType = this->fields.changeTDCommandType;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType);
  v105 = v13;
  if ( v13 )
  {
    v13 = sub_1BCA91C(v13, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_45:
      v107 = sub_1BCAA60(v13);
      sub_1BCA908(v107, 0LL);
    }
  }
  if ( v12->max_length <= 0xC )
LABEL_44:
    sub_1BCAA44(v13, v14);
  v12->m_Items[12] = (Il2CppObject *)v105;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[12], v105, v99, v100, v101, v102, v103, v104);
  return System_String__Format_62415728((System_String_o *)StringLiteral_16073/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillInfoData__TurnExtend(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_Int32_array *v12; // x23
  int32_t v14; // w8
  bool v15; // w9

  if ( (byte_4B18A5F & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, *(_QWORD *)&turnCount, *(_QWORD *)&max);
    byte_4B18A5F = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v12 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11);
  if ( !Individuality__CheckSignedIndividualities(v12, targetList, 0LL)
    || this->fields.isPassive
    || !this->fields.isUseSkill )
  {
    return 0;
  }
  v14 = this->fields.chargeTurn + turnCount;
  v15 = this->fields.sealedTurn + v14 < 1;
  this->fields.chargeTurn = v14;
  this->fields.isCharge = v15;
  if ( v14 > max )
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillInfoData__TurnProgress(
        BattleSkillInfoData_o *this,
        int32_t turnCount,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_Int32_array *v12; // x23
  bool result; // w0
  int32_t chargeTurn; // w9
  int sealedTurn; // w8

  if ( (byte_4B18A5E & 1) == 0 )
  {
    sub_1BCA7E0(&Individuality_TypeInfo, *(_QWORD *)&turnCount, *(_QWORD *)&max);
    byte_4B18A5E = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v12 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v11);
  if ( !Individuality__CheckSignedIndividualities(v12, targetList, 0LL) )
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
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 v7; // x19
  unsigned __int64 v8; // x21
  BattleSkillInfoData_o *v9; // x20

  if ( (byte_4B18A64 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v2);
    byte_4B18A64 = 1;
  }
  v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
  v6 = *(_QWORD *)(v4 + 24);
  v7 = v4;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1BCAA44(v4, v5);
      v9 = *(BattleSkillInfoData_o **)(v7 + 32 + 8 * v8);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t result; // w0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B18A56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A56 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                   this,
                                   this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_1BCAA3C(Instance, v10);
  }
  return result;
}


int32_t __fastcall BattleSkillInfoData__getInfoId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  return this->fields.index + 100 * this->fields.type;
}


int32_t __fastcall BattleSkillInfoData__getLossCutInId(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A6A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return 0;
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamField(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A5C = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  return SkillEntity__isSkillCutInCamField((SkillEntity_o *)entity, 0LL);
}


bool __fastcall BattleSkillInfoData__getSkillCutInCamPlayerAll(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A5B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  return SkillEntity__getSkillCutInCamPlayerAll((SkillEntity_o *)entity, 0LL);
}


int32_t __fastcall BattleSkillInfoData__getSkillCutInMessageMode(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A5D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return 0;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabInfo(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A58 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabOffsets(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A59 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return 0LL;
}


UnityEngine_Vector3_array *__fastcall BattleSkillInfoData__getSkillCutInPrefabSizes(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A5A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return 0LL;
}


System_String_array *__fastcall BattleSkillInfoData__getSkillCutInVoices(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18A57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18A57 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  }
  return 0LL;
}


DataVals_array *__fastcall BattleSkillInfoData__get_DataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  __int64 v5; // x1
  long double inited; // q0
  DataVals_array *result; // x0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4B18A6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_DataVals___, method, v2);
    byte_4B18A6E = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v8 = Method_System_Array_Empty_DataVals___;
    v9 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v9 )
    {
      sub_1C1C718(Method_System_Array_Empty_DataVals___, v5);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10, v5);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C1C6BC(inited);
    return **(DataVals_array ***)(v11 + 184);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0LL);
    this->fields.individualityArray = individualityArray;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_individualityArray,
      (int64_t)individualityArray,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return individualityArray;
}


bool __fastcall BattleSkillInfoData__get_IsContainedBattlePointFunc(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v15; // x8
  System_Func_object__bool__o *_9__94_0; // x20
  Il2CppObject *v17; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B18A73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_DataVals___, method, v2);
    sub_1BCA7E0(&System_Func_DataVals__bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__, v6, v7);
    sub_1BCA7E0(&BattleSkillInfoData___c_TypeInfo, v8, v9);
    byte_4B18A73 = 1;
  }
  if ( this->fields.type == 2 )
    return 0;
  DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, method);
  v15 = BattleSkillInfoData___c_TypeInfo;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v11);
    v15 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__94_0 = (System_Func_object__bool__o *)v15->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v11);
      v15 = BattleSkillInfoData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__94_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_DataVals__bool__TypeInfo, v11, v12, v13);
    System_Func_object__bool____ctor(
      _9__94_0,
      v17,
      Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__94_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_DataVals__bool__o *)_9__94_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__94_0,
      (int64_t)_9__94_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  return BasicHelper__Any_object__49274176(
           DataValArray,
           (System_Func_T__bool__o *)_9__94_0,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_DataVals___);
}


bool __fastcall BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v15; // x8
  System_Func_object__bool__o *_9__96_0; // x20
  Il2CppObject *v17; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B18A74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_DataVals___, method, v2);
    sub_1BCA7E0(&System_Func_DataVals__bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__, v6, v7);
    sub_1BCA7E0(&BattleSkillInfoData___c_TypeInfo, v8, v9);
    byte_4B18A74 = 1;
  }
  if ( this->fields.type == 2 || !BattleSkillInfoData__get_IsContainedBattlePointFunc(this, method) )
  {
    return 0;
  }
  else
  {
    DataValArray = (System_Object_array *)BattleSkillInfoData__get_DataValArray(this, v10);
    v15 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v11);
      v15 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__96_0 = (System_Func_object__bool__o *)v15->static_fields->__9__96_0;
    if ( !_9__96_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15, v11);
        v15 = BattleSkillInfoData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__96_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_DataVals__bool__TypeInfo, v11, v12, v13);
      System_Func_object__bool____ctor(
        _9__96_0,
        v17,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__96_0__,
        0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__96_0 = (struct System_Func_DataVals__bool__o *)_9__96_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__96_0,
        (int64_t)_9__96_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    return !BasicHelper__Any_object__49274176(
              DataValArray,
              (System_Func_T__bool__o *)_9__96_0,
              (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_DataVals___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DataValArray; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4B18A6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_DataVals___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_DataVals___, v6, v7);
    sub_1BCA7E0(&System_Func_DataVals__bool__TypeInfo, v8, v9);
    byte_4B18A6F = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v14 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_DataVals__bool__TypeInfo, v11, v12, v13);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleSkillInfoData_IsSelectedAddTargetIndex__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          DataValArray,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v15,
                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
}


System_Int32_array *__fastcall BattleSkillInfoData__get_ValidTargetTypeArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataVals_array *ValidDataValArray; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleSkillInfoData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__90_0; // x20
  Il2CppObject *v19; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_4B18A70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataVals__int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v4, v5);
    sub_1BCA7E0(&System_Func_DataVals__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__, v8, v9);
    sub_1BCA7E0(&BattleSkillInfoData___c_TypeInfo, v10, v11);
    byte_4B18A70 = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v16 = BattleSkillInfoData___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo, v13);
    v16 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__90_0 = (System_Func_object__int__o *)v16->static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = BattleSkillInfoData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__90_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_DataVals__int__TypeInfo, v13, v14, v15);
    System_Func_object__int____ctor(
      _9__90_0,
      v19,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__90_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__90_0 = (struct System_Func_DataVals__int__o *)_9__90_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__90_0,
      (int64_t)_9__90_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__90_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v27,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18A76 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillInfoData___c_TypeInfo, v1, v2);
    byte_4B18A76 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleSkillInfoData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleSkillInfoData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return DataVals__GetParam(x, 124, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___SortSkill_b__92_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.priority;
}


bool __fastcall BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__94_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.funcType == 142;
}


bool __fastcall BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__96_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.funcType != 142;
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__90_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.targetType;
}