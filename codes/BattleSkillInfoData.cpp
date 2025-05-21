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

  if ( (byte_4B47661 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&SkillMotionSkip_TypeInfo, v4);
    byte_4B47661 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1BDBAD4(v6, v7);
  v8 = 0LL;
  if ( SkillMaster__IsSkippable((SkillMaster_o *)Master_object, v6, 0LL) )
  {
    v8 = (SkillMotionSkip_o *)sub_1BDBAC4(SkillMotionSkip_TypeInfo);
    SkillMotionSkip___ctor(v8, 0LL);
  }
  return (BaseMotionSkip_o *)v8;
}


bool __fastcall BattleSkillInfoData__DoesCutInWorkAsEnemyCommandSpell(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B47657 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47657 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BDBAD4(Instance, v6);
  }
  return SkillEntity__DoesCutInWorkAsEnemyCommandSpell((SkillEntity_o *)Instance, 0LL);
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
  __int64 v11; // x2
  struct System_Int32_array *funcId; // x20
  __int64 v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  unsigned __int64 v15; // x21

  if ( (byte_4B4765C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1BDB878(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B4765C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_18;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_FunctionMaster___),
        (funcId = v10->fields.funcId) == 0LL) )
  {
LABEL_18:
    sub_1BDBAD4(Instance, v7);
  }
  v13 = *(_QWORD *)&funcId->max_length;
  if ( (int)v13 < 1 )
  {
LABEL_15:
    LOBYTE(Entity) = 0;
  }
  else
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
        sub_1BDBADC(Instance, v7, v11);
      if ( !v14 )
        goto LABEL_18;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v14,
                   funcId->m_Items[v15 + 1],
                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( Instance )
      {
        if ( HIDWORD(Instance[1].monitor) == 27 )
          break;
      }
      LODWORD(v13) = funcId->max_length;
      if ( (__int64)++v15 >= (int)v13 )
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

  if ( (byte_4B4765D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B4765D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___),
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
    sub_1BDBAD4(Instance, v5);
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
    sub_1BDBAD4(HasCond, v4);
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
    sub_1BDBAD4(HasCond, v4);
  return commonReleaseEntity->fields.condNum;
}


System_String_o *__fastcall BattleSkillInfoData__GetEnemyCountChangeMessage(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B47671 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v4);
    byte_4B47671 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
  v6 = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                         this,
                         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    goto LABEL_11;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         (int32_t)v6,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    v6 = entity;
    if ( entity )
      return SkillEntity__GetEnemyCountChangeMessage((SkillEntity_o *)entity, 0LL);
LABEL_11:
    sub_1BDBAD4(v6, v7);
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
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B47669 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, isBefore);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B47669 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_9;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetFieldCallEffectId((SkillEntity_o *)entity, isBefore, 0LL);
LABEL_9:
    sub_1BDBAD4(Instance, v8);
  }
  return -1;
}


BattleSkillInfoData_array *__fastcall BattleSkillInfoData__GetLoadArray(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  __int64 v9; // x0

  if ( (byte_4B47660 & 1) == 0 )
  {
    sub_1BDB878(&BattleSkillInfoData___TypeInfo, method);
    byte_4B47660 = 1;
  }
  v3 = sub_1BDB920(BattleSkillInfoData___TypeInfo, 1LL);
  if ( !v3 )
    sub_1BDBAD4(0LL, v4);
  v7 = v3;
  if ( this )
  {
    v3 = sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
    {
      v9 = sub_1BDBAF8(0LL);
      sub_1BDB9A0(v9, 0LL);
    }
  }
  if ( !*(_DWORD *)(v7 + 24) )
    sub_1BDBADC(v3, v4, v5);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v5, v6);
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
  System_Func_object__int__o *_9__93_0; // x20
  Il2CppObject *v10; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B4766D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Max_DataVals___, method);
    sub_1BDB878(&System_Func_DataVals__int__TypeInfo, v3);
    sub_1BDB878(&Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__93_0__, v4);
    sub_1BDB878(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4B4766D = 1;
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
  _9__93_0 = (System_Func_object__int__o *)v8->static_fields->__9__93_0;
  if ( !_9__93_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleSkillInfoData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__93_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__93_0,
      v10,
      Method_BattleSkillInfoData___c__GetMaxSelectAddIndexBySkill_b__93_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__93_0 = (struct System_Func_DataVals__int__o *)_9__93_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__93_0, (int32_t)_9__93_0, v12, v13);
  }
  return System_Linq_Enumerable__Max_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray,
           (System_Func_TSource__int__o *)_9__93_0,
           (const MethodInfo_305E1C0 *)Method_System_Linq_Enumerable_Max_DataVals___);
}


SkillEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B47667 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47667 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object) )
  {
    sub_1BDBAD4(Instance, v6);
  }
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            (int32_t)Instance,
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


SkillLvEntity_o *__fastcall BattleSkillInfoData__GetSelfSkillLvEntity(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B47668 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B47668 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object) )
  {
    sub_1BDBAD4(Instance, v5);
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
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  struct CommonReleaseEntity_o *v19; // x1
  struct System_Nullable_bool__o v20; // [xsp+8h] [xbp-28h] BYREF
  struct System_Nullable_bool__o v21; // [xsp+Ch] [xbp-24h] BYREF
  System_Nullable_bool__o v22; // 0:w0.2

  if ( (byte_4B47663 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BDB878(&Method_System_Nullable_bool___ctor__, v3);
    sub_1BDB878(&Method_System_Nullable_bool__get_HasValue__, v4);
    sub_1BDB878(&Method_System_Nullable_bool__get_Value__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B47663 = 1;
  }
  if ( !this->fields.hasCond.fields.hasValue )
  {
    v8 = &v21;
    v21 = 0;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v8,
      0,
      (const MethodInfo_37F2168 *)Method_System_Nullable_bool___ctor__);
    commonReleaseCondId = this->fields.commonReleaseCondId;
    this->fields.hasCond = v21;
    if ( commonReleaseCondId >= 1 )
    {
      Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_14;
      Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
        sub_1BDBAD4(Instance, v11);
      if ( v13->fields.condType == 2 )
      {
        v14 = &v20;
        v20 = 0;
        System_Nullable_bool____ctor(
          (System_Nullable_bool__o)v14,
          1,
          (const MethodInfo_37F2168 *)Method_System_Nullable_bool___ctor__);
        this->fields.hasCond = v20;
        if ( !v12->max_length )
          sub_1BDBADC(v15, v16, v17);
        v19 = v12->m_Items[0];
        this->fields.commonReleaseEntity = v19;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commonReleaseEntity, (int32_t)v19, v17, v18);
      }
    }
  }
LABEL_4:
  v22 = (System_Nullable_bool__o)((_WORD)this + 152);
  return System_Nullable_bool___get_Value(v22, (const MethodInfo_37F2184 *)Method_System_Nullable_bool__get_Value__);
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

  if ( (byte_4B47664 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B47664 = 1;
  }
  if ( !BattleSkillInfoData__HasCond(this, method) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BDBAD4(Instance, v5);
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
    sub_1BDBAD4(this, 0LL);
  return !DataVals__TryGetParam(dataVal, 125, &param, 0LL) || param == this->fields._SelectAddIndex_k__BackingField;
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
  __int64 v10; // x2
  struct System_Int32_array *funcId; // x20
  __int64 v12; // x8
  bool v13; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  unsigned __int64 v15; // x22

  if ( (byte_4B4765B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_FunctionMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v3);
    sub_1BDB878(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B4765B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_16;
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)Instance, this->fields.skilllv, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !Entity )
    goto LABEL_16;
  funcId = Entity->fields.funcId;
  if ( !funcId )
    goto LABEL_16;
  v12 = *(_QWORD *)&funcId->max_length;
  v13 = (int)v12 > 0;
  if ( (int)v12 >= 1 )
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v12 )
        sub_1BDBADC(Instance, v7, v10);
      if ( !v14 )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v14,
                   funcId->m_Items[v15 + 1],
                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( !Instance || HIDWORD(Instance[1].monitor) != 4 )
      {
        LODWORD(v12) = funcId->max_length;
        v13 = (__int64)++v15 < (int)v12;
        if ( (__int64)v15 < (int)v12 )
          continue;
      }
      return v13;
    }
LABEL_16:
    sub_1BDBAD4(Instance, v7);
  }
  return v13;
}


bool __fastcall BattleSkillInfoData__IsWarBoardForcePassiveEveryBattle(
        BattleSkillInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B47666 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B47666 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
         this,
         this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
    sub_1BDBAD4(v5, v6);
  return SkillMaster__IsWarBoardForcePassiveEveryBattle((SkillMaster_o *)Master_object, v5, 0LL);
}


BattleSkillInfoData_o *__fastcall BattleSkillInfoData__MakeSkillData(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  _QWORD *v7; // x8

  if ( (byte_4B47662 & 1) == 0 )
  {
    sub_1BDB878(&BattleMasterSkillInfoData_TypeInfo, method);
    sub_1BDB878(&BattleSelfSkillInfoData_TypeInfo, v3);
    sub_1BDB878(&BattleSkillInfoData_TypeInfo, v4);
    byte_4B47662 = 1;
  }
  if ( type == 1 )
  {
    v7 = &BattleMasterSkillInfoData_TypeInfo;
LABEL_8:
    v5 = sub_1BDBAC4(*v7);
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
  v5 = sub_1BDBAC4(BattleSelfSkillInfoData_TypeInfo);
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
  __int64 v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  ServantAssetLoadManager_o *v10; // x19
  unsigned __int64 v11; // x22
  bool v12; // w20
  BattleSkillInfoData_o *v13; // x21

  if ( (byte_4B4765E & 1) == 0 )
  {
    sub_1BDB878(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1BDB878(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_4B4765E = 1;
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
        sub_1BDBADC(Instance, v7, v8);
      v13 = (BattleSkillInfoData_o *)*((_QWORD *)&v10->fields.svtmaster + v11);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadSkillAnyVoice(v13, v12, 0LL);
      Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        break;
      ServantAssetLoadManager__DownloadSkillCutInLocal(Instance, v13, 0LL);
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_13:
    sub_1BDBAD4(Instance, v7);
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
  System_Func_object__int__o *_9__94_0; // x20
  Il2CppObject *v8; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B4766E & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_StableSort_BattleSkillInfoData___, method);
    sub_1BDB878(&System_Func_BattleSkillInfoData__int__TypeInfo, v3);
    sub_1BDB878(&Method_BattleSkillInfoData___c__SortSkill_b__94_0__, v4);
    sub_1BDB878(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4B4766E = 1;
  }
  if ( skillList )
  {
    v6 = BattleSkillInfoData___c_TypeInfo;
    if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
      v6 = BattleSkillInfoData___c_TypeInfo;
    }
    _9__94_0 = (System_Func_object__int__o *)v6->static_fields->__9__94_0;
    if ( !_9__94_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleSkillInfoData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__94_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleSkillInfoData__int__TypeInfo);
      System_Func_object__int____ctor(_9__94_0, v8, Method_BattleSkillInfoData___c__SortSkill_b__94_0__, 0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__94_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__94_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__94_0, (int32_t)_9__94_0, v10, v11);
    }
    BasicHelper__StableSort_object_(
      (System_Collections_Generic_List_T__o *)skillList,
      (System_Func_T__int__o *)_9__94_0,
      0,
      (const MethodInfo_3023084 *)Method_BasicHelper_StableSort_BattleSkillInfoData___);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x21
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  const MethodInfo *v59; // x3
  Il2CppObject *v60; // x21
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  const MethodInfo *v64; // x3
  Il2CppObject *v65; // x21
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x21
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x19
  __int64 v77; // x0
  int32_t changeTDCommandType; // [xsp+Ch] [xbp-64h] BYREF
  int32_t itemImageId; // [xsp+10h] [xbp-60h] BYREF
  int32_t strengthStatus; // [xsp+14h] [xbp-5Ch] BYREF
  char v81[4]; // [xsp+18h] [xbp-58h] BYREF
  int32_t priority; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t chargeTurn; // [xsp+20h] [xbp-50h] BYREF
  int32_t skilllv; // [xsp+24h] [xbp-4Ch] BYREF
  int v85; // [xsp+28h] [xbp-48h] BYREF
  char v86[4]; // [xsp+2Ch] [xbp-44h] BYREF
  char v87[4]; // [xsp+30h] [xbp-40h] BYREF
  int32_t svtUniqueId; // [xsp+34h] [xbp-3Ch] BYREF
  int32_t index; // [xsp+38h] [xbp-38h] BYREF
  int32_t type; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4B4764F & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, method);
    sub_1BDB878(&int_TypeInfo, v3);
    sub_1BDB878(&object___TypeInfo, v4);
    sub_1BDB878(&BattleSkillInfoData_TYPE_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_15876/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v6);
    byte_4B4764F = 1;
  }
  v7 = (System_Object_array *)sub_1BDB920(object___TypeInfo, 13LL);
  type = this->fields.type;
  v11 = j_il2cpp_value_box_0(BattleSkillInfoData_TYPE_TypeInfo, &type, v8, v9, v10);
  if ( !v7 )
    sub_1BDBAD4(v11, v12);
  v15 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( !v7->max_length )
    goto LABEL_44;
  v7->m_Items[0] = v15;
  sub_1BDB81C((CGThumbnailListItem_o *)v7->m_Items, (int32_t)v15, v13, v14);
  index = this->fields.index;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &index, v16, v17, v18);
  v20 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_44;
  v7->m_Items[1] = v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[1], (int32_t)v20, v13, v19);
  svtUniqueId = this->fields.svtUniqueId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &svtUniqueId, v21, v22, v23);
  v25 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_44;
  v7->m_Items[2] = v25;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[2], (int32_t)v25, v13, v24);
  v87[0] = this->fields.isPassive;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v87, v26, v27, v28);
  v30 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 3 )
    goto LABEL_44;
  v7->m_Items[3] = v30;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[3], (int32_t)v30, v13, v29);
  v86[0] = this->fields.isCharge;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v86, v31, v32, v33);
  v35 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 4 )
    goto LABEL_44;
  v7->m_Items[4] = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[4], (int32_t)v35, v13, v34);
  v85 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
          this,
          this->klass->vtable._6_get_IndividualityArray.methodPtr);
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v85, v36, v37, v38);
  v40 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 5 )
    goto LABEL_44;
  v7->m_Items[5] = v40;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[5], (int32_t)v40, v13, v39);
  skilllv = this->fields.skilllv;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &skilllv, v41, v42, v43);
  v45 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 6 )
    goto LABEL_44;
  v7->m_Items[6] = v45;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[6], (int32_t)v45, v13, v44);
  chargeTurn = this->fields.chargeTurn;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v46, v47, v48);
  v50 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 7 )
    goto LABEL_44;
  v7->m_Items[7] = v50;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[7], (int32_t)v50, v13, v49);
  priority = this->fields.priority;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &priority, v51, v52, v53);
  v55 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 8 )
    goto LABEL_44;
  v7->m_Items[8] = v55;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[8], (int32_t)v55, v13, v54);
  v81[0] = this->fields.isUseSkill;
  v11 = j_il2cpp_value_box_0(bool_TypeInfo, v81, v56, v57, v58);
  v60 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 9 )
    goto LABEL_44;
  v7->m_Items[9] = v60;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[9], (int32_t)v60, v13, v59);
  strengthStatus = this->fields.strengthStatus;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &strengthStatus, v61, v62, v63);
  v65 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xA )
    goto LABEL_44;
  v7->m_Items[10] = v65;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[10], (int32_t)v65, v13, v64);
  itemImageId = this->fields.itemImageId;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &itemImageId, v66, v67, v68);
  v70 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_45;
  }
  if ( v7->max_length <= 0xB )
    goto LABEL_44;
  v7->m_Items[11] = v70;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[11], (int32_t)v70, v13, v69);
  changeTDCommandType = this->fields.changeTDCommandType;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &changeTDCommandType, v71, v72, v73);
  v75 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_1BDB9B4(v11, v7->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_45:
      v77 = sub_1BDBAF8(v11);
      sub_1BDB9A0(v77, 0LL);
    }
  }
  if ( v7->max_length <= 0xC )
LABEL_44:
    sub_1BDBADC(v11, v12, v13);
  v7->m_Items[12] = v75;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->m_Items[12], (int32_t)v75, v13, v74);
  return System_String__Format_62613688((System_String_o *)StringLiteral_15876/*"[BattleSkillInfoData]type:{0},index:{1},svtUniqueId:{2},isPassive:{3},isCharge:{4},skillId:{5},skilllv:{6},chargeTurn:{7},priority:{8}isUseSkill:{9},strengthStatus:{10},itemImageId:{11},changeTDCommandType:{12}"*/, v7, 0LL);
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
  System_Int32_array *v11; // x23
  int32_t v13; // w8
  bool v14; // w9

  if ( (byte_4B4765A & 1) == 0 )
  {
    sub_1BDB878(&Individuality_TypeInfo, *(_QWORD *)&turnCount);
    byte_4B4765A = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v11 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( !Individuality__CheckSignedIndividualities(v11, targetList, 0LL)
    || this->fields.isPassive
    || !this->fields.isUseSkill )
  {
    return 0;
  }
  v13 = this->fields.chargeTurn + turnCount;
  v14 = this->fields.sealedTurn + v13 < 1;
  this->fields.chargeTurn = v13;
  this->fields.isCharge = v14;
  if ( v13 > max )
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
  System_Int32_array *v11; // x23
  bool result; // w0
  int32_t chargeTurn; // w9
  int sealedTurn; // w8

  if ( (byte_4B47659 & 1) == 0 )
  {
    sub_1BDB878(&Individuality_TypeInfo, *(_QWORD *)&turnCount);
    byte_4B47659 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 && this->fields.index != targetIndex )
    return 0;
  v11 = (System_Int32_array *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, _QWORD, _QWORD, System_Int32_array *, const MethodInfo *))this->klass->vtable._6_get_IndividualityArray.method)(
                                this,
                                this->klass->vtable._7_getCutInId.methodPtr,
                                *(_QWORD *)&max,
                                *(_QWORD *)&targetIndex,
                                targetList,
                                method);
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  if ( !Individuality__CheckSignedIndividualities(v11, targetList, 0LL) )
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
    if ( (sealedTurn & 0x80000000) == 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  sealedTurn -= turnCount;
  this->fields.sealedTurn = sealedTurn;
  if ( (sealedTurn & 0x80000000) != 0 )
  {
LABEL_13:
    sealedTurn = 0;
    this->fields.sealedTurn = 0;
  }
LABEL_14:
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

  if ( (byte_4B4765F & 1) == 0 )
  {
    sub_1BDB878(&ServantAssetLoadManager_TypeInfo, method);
    byte_4B4765F = 1;
  }
  v3 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._10_GetLoadArray.method)(
         this,
         this->klass->vtable._11_PreAddProcess.methodPtr);
  if ( !v3 )
    sub_1BDBAD4(0LL, v4);
  v6 = *(_QWORD *)(v3 + 24);
  v7 = v3;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1BDBADC(v3, v4, v5);
      v9 = *(BattleSkillInfoData_o **)(v7 + 32 + 8 * v8);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B47650 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47650 = 1;
  }
  entity = 0LL;
  result = this->fields.cutInId;
  if ( result == -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                   this,
                                   this->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                &entity,
                (int32_t)Instance,
                (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
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
    sub_1BDBAD4(Instance, v7);
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

  if ( (byte_4B47665 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47665 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__GetLossCutinId((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BDBAD4(Instance, v6);
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

  if ( (byte_4B47656 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47656 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BDBAD4(Instance, v6);
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

  if ( (byte_4B47655 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47655 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)Instance,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BDBAD4(Instance, v6);
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

  if ( (byte_4B47658 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47658 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInMessageMode((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BDBAD4(Instance, v6);
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

  if ( (byte_4B47652 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47652 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabInfo((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BDBAD4(Instance, v6);
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

  if ( (byte_4B47653 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47653 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabOffsets((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BDBAD4(Instance, v6);
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

  if ( (byte_4B47654 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47654 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInPrefabSizes((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BDBAD4(Instance, v6);
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

  if ( (byte_4B47651 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B47651 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                               this,
                               this->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !MasterData_object )
    goto LABEL_10;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( entity )
      return SkillEntity__getSkillCutInVoices((SkillEntity_o *)entity, 0LL);
LABEL_10:
    sub_1BDBAD4(Instance, v6);
  }
  return 0LL;
}


DataVals_array *__fastcall BattleSkillInfoData__get_DataValArray(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  SkillLvEntity_o *SelfSkillLvEntity; // x0
  long double inited; // q0
  DataVals_array *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4B4766A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_DataVals___, method);
    byte_4B4766A = 1;
  }
  SelfSkillLvEntity = BattleSkillInfoData__GetSelfSkillLvEntity(this, method);
  if ( !SelfSkillLvEntity || (result = SkillLvEntity__GetSetTypeDataValArray(SelfSkillLvEntity, 0LL)) == 0LL )
  {
    v6 = Method_System_Array_Empty_DataVals___;
    v7 = *((_QWORD *)Method_System_Array_Empty_DataVals___ + 7);
    if ( !v7 )
    {
      sub_1C2BF64(Method_System_Array_Empty_DataVals___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C2BF08(inited);
    return **(DataVals_array ***)(v9 + 184);
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
  const MethodInfo *v7; // x3

  p_individualityArray = &this->fields.individualityArray;
  individualityArray = this->fields.individualityArray;
  if ( !individualityArray )
  {
    v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
           this,
           this->klass->vtable._6_get_IndividualityArray.methodPtr);
    individualityArray = SkillIndividualityMaster__GetIndividuality(v5, 0LL);
    this->fields.individualityArray = individualityArray;
    sub_1BDB81C((CGThumbnailListItem_o *)p_individualityArray, (int32_t)individualityArray, v6, v7);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Nullable_bool__o *p_hasAddBattlePointFunc; // x19
  System_Object_array *DataValArray; // x20
  BattleSkillInfoData___c_c *v13; // x8
  System_Func_object__bool__o *_9__97_0; // x21
  Il2CppObject *v15; // x22
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool v19; // w1
  __int16 *v20; // x0
  struct System_Nullable_bool__o v22; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_bool__o v23; // 0:w0.2

  if ( (byte_4B4766F & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_DataVals___, method);
    sub_1BDB878(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1BDB878(&Method_System_Nullable_bool__GetValueOrDefault__, v4);
    sub_1BDB878(&Method_System_Nullable_bool___ctor__, v5);
    sub_1BDB878(&Method_System_Nullable_bool__get_HasValue__, v6);
    sub_1BDB878(&Method_System_Nullable_bool__get_Value__, v7);
    sub_1BDB878(&Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__97_0__, v8);
    sub_1BDB878(&BattleSkillInfoData___c_TypeInfo, v9);
    byte_4B4766F = 1;
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
      v13 = BattleSkillInfoData___c_TypeInfo;
      if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
        v13 = BattleSkillInfoData___c_TypeInfo;
      }
      _9__97_0 = (System_Func_object__bool__o *)v13->static_fields->__9__97_0;
      if ( !_9__97_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = BattleSkillInfoData___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__97_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_DataVals__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__97_0,
          v15,
          Method_BattleSkillInfoData___c__get_IsContainedBattlePointFunc_b__97_0__,
          0LL);
        static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
        static_fields->__9__97_0 = (struct System_Func_DataVals__bool__o *)_9__97_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__97_0, (int32_t)_9__97_0, v17, v18);
      }
      v19 = BasicHelper__Any_object__50450088(
              DataValArray,
              (System_Func_T__bool__o *)_9__97_0,
              (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_DataVals___);
      v20 = (__int16 *)&v22;
      v22 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v20,
        v19,
        (const MethodInfo_37F2168 *)Method_System_Nullable_bool___ctor__);
      *p_hasAddBattlePointFunc = v22;
    }
    v23 = (System_Nullable_bool__o)p_hasAddBattlePointFunc;
    return System_Nullable_bool___get_Value(v23, (const MethodInfo_37F2184 *)Method_System_Nullable_bool__get_Value__);
  }
}


bool __fastcall BattleSkillInfoData__get_IsOnlyBattlePointFunc(BattleSkillInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Object_array *DataValArray; // x19
  BattleSkillInfoData___c_c *v8; // x8
  System_Func_object__bool__o *_9__99_0; // x20
  Il2CppObject *v10; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B47670 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_DataVals___, method);
    sub_1BDB878(&System_Func_DataVals__bool__TypeInfo, v3);
    sub_1BDB878(&Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__99_0__, v4);
    sub_1BDB878(&BattleSkillInfoData___c_TypeInfo, v5);
    byte_4B47670 = 1;
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
    _9__99_0 = (System_Func_object__bool__o *)v8->static_fields->__9__99_0;
    if ( !_9__99_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = BattleSkillInfoData___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__99_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__99_0,
        v10,
        Method_BattleSkillInfoData___c__get_IsOnlyBattlePointFunc_b__99_0__,
        0LL);
      static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
      static_fields->__9__99_0 = (struct System_Func_DataVals__bool__o *)_9__99_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__99_0, (int32_t)_9__99_0, v12, v13);
    }
    return !BasicHelper__Any_object__50450088(
              DataValArray,
              (System_Func_T__bool__o *)_9__99_0,
              (const MethodInfo_301CEA8 *)Method_BasicHelper_Any_DataVals___);
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

  if ( (byte_4B4766B & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_DataVals___, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_DataVals___, v4);
    sub_1BDB878(&System_Func_DataVals__bool__TypeInfo, v5);
    byte_4B4766B = 1;
  }
  DataValArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleSkillInfoData__get_DataValArray(
                                                                        this,
                                                                        method);
  v7 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_DataVals__bool__TypeInfo);
  System_Func_object__bool____ctor(v7, (Il2CppObject *)this, Method_BattleSkillInfoData_IsSelectedAddTargetIndex__, 0LL);
  v8 = System_Linq_Enumerable__Where_object_(
         DataValArray,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_DataVals___);
  return (DataVals_array *)System_Linq_Enumerable__ToArray_object_(
                             v8,
                             (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_DataVals___);
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
  System_Func_object__int__o *_9__92_0; // x20
  Il2CppObject *v11; // x21
  struct BattleSkillInfoData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4B4766C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_DataVals__int___, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1BDB878(&System_Func_DataVals__int__TypeInfo, v4);
    sub_1BDB878(&Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__92_0__, v5);
    sub_1BDB878(&BattleSkillInfoData___c_TypeInfo, v6);
    byte_4B4766C = 1;
  }
  ValidDataValArray = BattleSkillInfoData__get_ValidDataValArray(this, method);
  v8 = BattleSkillInfoData___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)ValidDataValArray;
  if ( !BattleSkillInfoData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillInfoData___c_TypeInfo);
    v8 = BattleSkillInfoData___c_TypeInfo;
  }
  _9__92_0 = (System_Func_object__int__o *)v8->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleSkillInfoData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__92_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_DataVals__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__92_0,
      v11,
      Method_BattleSkillInfoData___c__get_ValidTargetTypeArray_b__92_0__,
      0LL);
    static_fields = BattleSkillInfoData___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = (struct System_Func_DataVals__int__o *)_9__92_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__92_0, (int32_t)_9__92_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__92_0,
                                                               (const MethodInfo_3067BA8 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  const MethodInfo *v4; // x3

  if ( (byte_4B47672 & 1) == 0 )
  {
    sub_1BDB878(&BattleSkillInfoData___c_TypeInfo, v1);
    byte_4B47672 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleSkillInfoData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleSkillInfoData___c_TypeInfo->static_fields->__9 = (struct BattleSkillInfoData___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BattleSkillInfoData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleSkillInfoData___c___ctor(BattleSkillInfoData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___GetMaxSelectAddIndexBySkill_b__93_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return DataVals__GetParam(x, 125, -1, 0LL);
}


int32_t __fastcall BattleSkillInfoData___c___SortSkill_b__94_0(
        BattleSkillInfoData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.priority;
}


bool __fastcall BattleSkillInfoData___c___get_IsContainedBattlePointFunc_b__97_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.funcType == 142;
}


bool __fastcall BattleSkillInfoData___c___get_IsOnlyBattlePointFunc_b__99_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.funcType != 142;
}


int32_t __fastcall BattleSkillInfoData___c___get_ValidTargetTypeArray_b__92_0(
        BattleSkillInfoData___c_o *this,
        DataVals_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.targetType;
}