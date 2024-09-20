void __fastcall ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5B8C8 & 1) == 0 )
  {
    sub_1B885B0(&ServantLimitAddMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_18913/*"effectFolder"*/);
    byte_4A5B8C8 = 1;
  }
  ServantLimitAddMaster_TypeInfo->static_fields->KEY_SCRIPT_EFFECT_FOLDER = (struct System_String_o *)StringLiteral_18913/*"effectFolder"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantLimitAddMaster_TypeInfo->static_fields,
    StringLiteral_18913/*"effectFolder"*/,
    v1,
    v2);
}


void __fastcall ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5B8C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    byte_4A5B8C5 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v3,
    (const MethodInfo_315E6FC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isVoiceList, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    115,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B8C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
    byte_4A5B8C6 = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
}


System_Int32_array *__fastcall ServantLimitAddMaster__GetLimitAddIndividuality(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B8C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B8C4 = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(
                               (ServantLimitAddMaster_o *)Instance,
                               &entity,
                               svtId,
                               LimitCountByDispLimit,
                               v11);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_15:
    sub_1B8880C(Instance, v10);
  individuality = entity->fields.individuality;
  if ( !individuality )
    return 0LL;
  if ( *(_QWORD *)&individuality->max_length )
    return entity->fields.individuality;
  else
    return 0LL;
}


System_String_o *__fastcall ServantLimitAddMaster__GetOverwriteTDName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *orginalTDName,
        int32_t tdLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x4
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v21; // x19
  Il2CppObject *OverwriteTDName; // x0
  int32_t v24; // [xsp+4h] [xbp-4Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B8C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9329/*"NP_NAME"*/);
    sub_1B885B0(&StringLiteral_9330/*"NP_NAME_LEVEL"*/);
    byte_4A5B8C0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_19;
  if ( ServantEntity__IsNameTrue((ServantEntity_o *)Instance, v12)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v13) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_19;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v12) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( tdLv < 1 )
      {
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9329/*"NP_NAME"*/, 0LL);
        if ( entity )
        {
          v21 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          return System_String__Format(v21, OverwriteTDName, 0LL);
        }
      }
      else
      {
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9330/*"NP_NAME_LEVEL"*/, 0LL);
        if ( entity )
        {
          v14 = (System_String_o *)Instance;
          v15 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          v24 = tdLv;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v16, v17, v18);
          return System_String__Format_61721404(v14, v15, v19, 0LL);
        }
      }
LABEL_19:
      sub_1B8880C(Instance, v12);
    }
  }
  return orginalTDName;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsContainRadomGroupIndex(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B8C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantLimitAddEntity_TypeInfo);
    byte_4A5B8C1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ServantLimitAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantLimitAddEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_33:
      sub_1B8880C(v17, v18);
    }
    if ( v17->fields.svtId == svtId
      && ServantLimitAddEntity__GetRandomGroupIndex(v17, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      goto LABEL_25;
    }
  }
  v12 = 0;
LABEL_25:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteCv(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B8C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantLimitAddEntity_TypeInfo);
    byte_4A5B8C3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ServantLimitAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantLimitAddEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_33:
      sub_1B8880C(v17, v18);
    }
    if ( v17->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteCv(v17, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      goto LABEL_25;
    }
  }
  v12 = 0;
LABEL_25:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__IsOverwriteSvtDetailName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantLimitAddEntity_o *v17; // x0
  __int64 v18; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4A5B8C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantLimitAddEntity_TypeInfo);
    byte_4A5B8C2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ServantLimitAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(ServantLimitAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantLimitAddEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantLimitAddEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_33:
      sub_1B8880C(v17, v18);
    }
    if ( v17->fields.svtId == svtId
      && ServantLimitAddEntity__IsOverwriteSvtDetailName(v17, (const MethodInfo *)ServantLimitAddEntity_TypeInfo) )
    {
      goto LABEL_25;
    }
  }
  v12 = 0;
LABEL_25:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_29;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_29:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitAddMaster__TryGetEntity(
        ServantLimitAddMaster_o *this,
        ServantLimitAddEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B8C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
    byte_4A5B8C7 = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
}


System_String_o *__fastcall ServantLimitAddMaster__getBattleChrId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  int32_t battleCharaId; // [xsp+1Ch] [xbp-4h] BYREF

  battleCharaId = svtId;
  v5 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( v5 )
  {
    if ( !entity )
      sub_1B8880C(v5, v6);
    battleCharaId = entity->fields.battleCharaId;
  }
  return System_Int32__ToString((int32_t)&battleCharaId, 0LL);
}


void __fastcall ServantLimitAddMaster__getCostumeId(
        ServantLimitAddMaster_o *this,
        int32_t *svtId,
        int32_t *imageLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ServantLimitAddEntity_o *v9; // x8
  int32_t fileConvertLimitCount; // w8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  v7 = ServantLimitAddMaster__TryGetEntity(this, &entity, *svtId, *imageLimitCount, v4);
  if ( v7 )
  {
    v9 = entity;
    if ( !entity )
      sub_1B8880C(v7, v8);
    *svtId = entity->fields.battleCharaId;
    fileConvertLimitCount = v9->fields.fileConvertLimitCount;
  }
  else
  {
    fileConvertLimitCount = 0;
  }
  *imageLimitCount = fileConvertLimitCount;
}


int32_t __fastcall ServantLimitAddMaster__getScriptIntValue(
        ServantLimitAddEntity_o *limitAddEnt,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  if ( limitAddEnt )
    return ServantLimitAddEntity__getScript(limitAddEnt, key, defVal, method);
  else
    return defVal;
}


int32_t __fastcall ServantLimitAddMaster__getVoiceId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  __int64 v9; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B8BD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_4A5B8BD = 1;
  }
  entity = 0LL;
  isVoiceList = (System_Collections_Generic_Dictionary_int__bool__o *)ServantLimitAddMaster__TryGetEntity(
                                                                        this,
                                                                        &entity,
                                                                        svtId,
                                                                        limitCount,
                                                                        v4);
  if ( ((unsigned __int8)isVoiceList & 1) != 0 )
  {
    if ( entity )
      return entity->fields.svtVoiceId;
LABEL_10:
    sub_1B8880C(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    return svtId;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantLimitAddMaster__getVoiceIndex(
        ServantLimitAddMaster_o *this,
        int32_t *voiceId,
        int32_t *voicePrefix,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  __int64 v12; // x1
  ServantLimitAddEntity_o *v13; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B8BE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_4A5B8BE = 1;
  }
  entity = 0LL;
  isVoiceList = (System_Collections_Generic_Dictionary_int__bool__o *)ServantLimitAddMaster__TryGetEntity(
                                                                        this,
                                                                        &entity,
                                                                        svtId,
                                                                        limitCount,
                                                                        *(const MethodInfo **)&limitCount);
  if ( ((unsigned __int8)isVoiceList & 1) != 0 )
  {
    v13 = entity;
    if ( entity )
    {
      *voiceId = entity->fields.svtVoiceId;
      *voicePrefix = v13->fields.voicePrefix;
      return;
    }
LABEL_10:
    sub_1B8880C(isVoiceList, v12);
  }
  *voicePrefix = 0;
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    *voiceId = svtId;
  }
  else
  {
    *voiceId = 0;
  }
}


System_Int32_array *__fastcall ServantLimitAddMaster__getVoiceLimitCountList(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t maxLimitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  System_Int32_array *Item; // x0
  Il2CppObject *v11; // x1
  const MethodInfo *v12; // x4
  int32_t i; // w24
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t svtVoiceId; // w25
  int32_t voicePrefix; // w29
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  ServantStatusBattleListViewItem_o *v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x8
  System_Collections_Generic_List_object__o *v28; // x0
  __int64 v29; // x8
  __int64 v30; // x25
  unsigned __int64 v31; // x23
  int32_t v32; // w3
  int32_t v33; // w24
  int32_t v34; // w29
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_Int32_array *v41; // x20
  unsigned __int64 j; // x21
  unsigned __int64 max_length; // x8
  int32_t bounds_high; // w9
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+10h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *v47; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+30h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A5B8BF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
    byte_4A5B8BF = 1;
  }
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  v47 = 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      Item = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v12);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( !entity || !v9 )
          goto LABEL_67;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v46,
          v9,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v48 = v46;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v48,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v48.fields._current )
          {
            if ( svtVoiceId == LODWORD(v48.fields._current[3].klass)
              && voicePrefix == HIDWORD(v48.fields._current[3].klass) )
            {
LABEL_15:
              entity = 0LL;
              break;
            }
          }
          else if ( svtVoiceId == svtId && voicePrefix == 0 )
          {
            goto LABEL_15;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v48,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        v11 = (Il2CppObject *)entity;
        if ( entity )
        {
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_67;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v27 = v19[4];
            v28 = v9;
LABEL_28:
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              v11,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27 + 192) + 112LL));
            continue;
          }
          v21 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v11;
          v22 = (ServantStatusBattleListViewItem_o *)(v21 + 4);
LABEL_25:
          sub_1B88554(v22, (int32_t)v11, v14, v15);
        }
      }
      else if ( !i )
      {
        if ( !v9 )
          goto LABEL_67;
        v23 = v9->fields._items;
        v24 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
        ++v9->fields._version;
        if ( !v23 )
          goto LABEL_67;
        v25 = v9->fields._size;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          v27 = v24[4];
          v28 = v9;
          v11 = 0LL;
          goto LABEL_28;
        }
        v26 = &v23->obj.klass + v25;
        v9->fields._size = v25 + 1;
        v26[4] = 0LL;
        v22 = (ServantStatusBattleListViewItem_o *)(v26 + 4);
        LODWORD(v11) = 0;
        goto LABEL_25;
      }
    }
  }
  if ( costumeIds )
  {
    v29 = *(_QWORD *)&costumeIds->max_length;
    if ( v29 )
    {
      if ( (int)v29 >= 1 )
      {
        v30 = (unsigned int)*(_QWORD *)&costumeIds->max_length;
        if ( (unsigned int)*(_QWORD *)&costumeIds->max_length )
        {
          v31 = 0LL;
          do
          {
            v32 = costumeIds->m_Items[v31 + 1];
            if ( v32 >= 1 )
            {
              Item = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(this, &v47, svtId, v32, v12);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                if ( !v47 || !v9 )
                  goto LABEL_67;
                v33 = v47->fields.svtVoiceId;
                v34 = v47->fields.voicePrefix;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v46,
                  v9,
                  (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
                v48 = v46;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v48,
                          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
                {
                  if ( v48.fields._current )
                  {
                    if ( v33 == LODWORD(v48.fields._current[3].klass) && v34 == HIDWORD(v48.fields._current[3].klass) )
                    {
LABEL_46:
                      v47 = 0LL;
                      break;
                    }
                  }
                  else if ( v33 == svtId && v34 == 0 )
                  {
                    goto LABEL_46;
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v48,
                  (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
                v11 = (Il2CppObject *)v47;
                if ( v47 )
                {
                  v37 = v9->fields._items;
                  v38 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
                  ++v9->fields._version;
                  if ( !v37 )
                    goto LABEL_67;
                  v39 = v9->fields._size;
                  if ( (unsigned int)v39 >= v37->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v9,
                      v11,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v40 = &v37->obj.klass + v39;
                    v9->fields._size = v39 + 1;
                    v40[4] = (Il2CppClass *)v11;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v11, v35, v36);
                  }
                }
              }
            }
            if ( ++v31 == v30 )
              goto LABEL_55;
          }
          while ( v31 < costumeIds->max_length );
        }
LABEL_68:
        sub_1B88814(Item, v11);
      }
    }
  }
LABEL_55:
  if ( !v9 || (Item = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v9->fields._size)) == 0LL )
LABEL_67:
    sub_1B8880C(Item, v11);
  v41 = Item;
  if ( (int)Item->max_length >= 1 )
  {
    for ( j = 0LL; (__int64)j < (int)max_length; ++j )
    {
      Item = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                     v9,
                                     j,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
      if ( Item )
      {
        Item = (System_Int32_array *)System_Collections_Generic_List_object___get_Item(
                                       v9,
                                       j,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
        if ( !Item )
          goto LABEL_67;
        max_length = v41->max_length;
        if ( j >= max_length )
          goto LABEL_68;
        bounds_high = HIDWORD(Item->bounds);
      }
      else
      {
        max_length = v41->max_length;
        if ( j >= max_length )
          goto LABEL_68;
        bounds_high = 0;
      }
      v41->m_Items[j + 1] = bounds_high;
    }
  }
  return v41;
}


int32_t __fastcall ServantLimitAddMaster__getVoicePrefix(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v5 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_1B8880C(v5, v6);
  return entity->fields.voicePrefix;
}


bool __fastcall ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  struct ServantMaster_o **p_servantMaster; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A5B8BC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B8BC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object,
        p_servantMaster = &this->fields.servantMaster,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.servantMaster,
          (int32_t)MasterData_object,
          v7,
          v8),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0LL)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_315F264 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, v9);
  return 1;
}