void __fastcall ServantTreasureDvcMaster___ctor(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5B9B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
    byte_4A5B9B7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    8,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__GetEntity(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B9B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
    byte_4A5B9B5 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDvcEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDvcMaster__TryGetEntity(
        ServantTreasureDvcMaster_o *this,
        ServantTreasureDvcEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B9B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
    byte_4A5B9B6 = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
}


ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromIDID(
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantTreasureDvcEntity_o *v17; // x0
  __int64 v18; // x1
  ServantTreasureDvcEntity_o *v19; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4A5B9BA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantTreasureDvcEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B9BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL
    || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
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
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                          Enumerator,
                                          *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantTreasureDvcEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1B88ACC(v17);
LABEL_35:
      sub_1B8880C(v17, v18);
    }
    if ( v17->fields.svtId == svtId && v17->fields.treasureDeviceId == dvcId )
      goto LABEL_27;
  }
  v19 = 0LL;
LABEL_27:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_31;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_31:
    v24 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v19;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdCondQuestIdAndPhase(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  ServantTreasureDvcEntity_o *v20; // x0
  __int64 v21; // x1
  ServantTreasureDvcEntity_o *v22; // x23
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5B9BD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantTreasureDvcEntity_TypeInfo);
    byte_4A5B9BD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                          Enumerator,
                                          *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20
      || (methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (ServantTreasureDvcEntity_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1B8880C(v20, v21);
    }
    if ( v20->fields.svtId == svtId
      && v20->fields.condQuestId == condQuestId
      && v20->fields.condQuestPhase == condQuestPhase )
    {
      goto LABEL_26;
    }
  }
  v22 = 0LL;
LABEL_26:
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_30;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_30:
    v27 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return v22;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  ServantTreasureDvcEntity_o *v18; // x0
  __int64 v19; // x1
  ServantTreasureDvcEntity_o *v20; // x22
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A5B9BB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantTreasureDvcEntity_TypeInfo);
    byte_4A5B9BB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                          Enumerator,
                                          *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18
      || (methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (ServantTreasureDvcEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1B8880C(v18, v19);
    }
    if ( v18->fields.svtId == svtId && v18->fields.treasureDeviceId == dvcId )
      goto LABEL_25;
  }
  v20 = 0LL;
LABEL_25:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v20;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        bool isLowPriorityPick,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  ServantTreasureDvcEntity_o *v10; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  int *v19; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4A5B9BC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantTreasureDvcEntity_TypeInfo);
    byte_4A5B9BC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  v10 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                   Enumerator,
                   *(_QWORD *)(v18 + 8));
    if ( v19 )
    {
      methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) == ServantTreasureDvcEntity_TypeInfo
        && v19[4] == svtId )
      {
        v10 = (ServantTreasureDvcEntity_o *)v19;
        if ( isLowPriorityPick )
        {
          v10 = (ServantTreasureDvcEntity_o *)v19;
          if ( v19[6] > 0 )
          {
            v10 = (ServantTreasureDvcEntity_o *)v19;
            break;
          }
        }
      }
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_30;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_30:
    v24 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v10;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_array *__fastcall ServantTreasureDvcMaster__getEntityListFromIdNum(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B9B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__);
    byte_4A5B9B9 = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1B8880C(0LL, *(_QWORD *)&svtId);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)listCache,
         svtId,
         &value,
         (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__) )
  {
    return (ServantTreasureDvcEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getUseEntity(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  ServantTreasureDvcEntity_array *EntityListFromIdNum; // x0
  __int64 v15; // x1
  int32_t v16; // w3
  const MethodInfo *v17; // x7
  ServantTreasureDvcEntity_array *v18; // x24
  unsigned int i; // w26
  Il2CppClass **v20; // x8
  ServantTreasureDvcEntity_o *v21; // x25

  EntityListFromIdNum = ServantTreasureDvcMaster__getEntityListFromIdNum(this, svtId, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v18 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v18->max_length )
        sub_1B88814(EntityListFromIdNum, v15);
      v20 = &v18->obj.klass + i;
      v21 = (ServantTreasureDvcEntity_o *)v20[4];
      if ( !v21 )
        sub_1B8880C(EntityListFromIdNum, v15);
      EntityListFromIdNum = (ServantTreasureDvcEntity_array *)ServantTreasureDvcEntity__isUse(
                                                                (ServantTreasureDvcEntity_o *)v20[4],
                                                                userId,
                                                                svtLv,
                                                                v16,
                                                                dispLimitCount,
                                                                friendshipRank,
                                                                beforeClearQuestId,
                                                                v17);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v21;
    }
  }
  return 0LL;
}


bool __fastcall ServantTreasureDvcMaster__preProcess(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  int32_t *v15; // x0
  __int64 v16; // x1
  int32_t *v17; // x22
  __int64 methodPtr_low; // x9
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x23
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppClass *v24; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  void **v27; // x8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  ServantTreasureDvcMaster___c_c *v34; // x8
  int32_t key; // w22
  Il2CppObject *v36; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v38; // x24
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *v42; // x23
  System_Object_array *v43; // x0
  __int64 v44; // x1
  int32_t monitor; // w2
  int v46; // w8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5B9B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_1B885B0(&ServantTreasureDvcEntity_TypeInfo);
    sub_1B885B0(&Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__);
    sub_1B885B0(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_4A5B9B8 = 1;
  }
  value = 0LL;
  memset(&v49, 0, sizeof(v49));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                       Enumerator,
                       *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      goto LABEL_52;
    methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1B88ACC(v15);
LABEL_52:
      sub_1B8880C(v15, v16);
    }
    if ( v15[5] == 1 )
    {
      if ( !v4 )
        sub_1B8880C(v15, ServantTreasureDvcEntity_TypeInfo);
      if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
              v4,
              v15[4],
              &value,
              (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__) )
      {
        v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
        value = (Il2CppObject *)v22;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v4,
          v17[4],
          (Il2CppObject *)v22,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
      }
      v23 = (System_Collections_Generic_List_object__o *)value;
      if ( !value )
        sub_1B8880C(0LL, v19);
      v24 = value[1].klass;
      v25 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
      ++HIDWORD(value[1].monitor);
      if ( !v24 )
        sub_1B8880C(v23, v19);
      size = v23->fields._size;
      if ( (unsigned int)size >= LODWORD(v24->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v17,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &v24->_1.image + size;
        v23->fields._size = size + 1;
        v27[4] = v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v17, v20, v21);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_35;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_35:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v31 + 8));
  if ( !v4 )
LABEL_58:
    sub_1B8880C(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v48,
    v4,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v32 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v49,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__);
    if ( !v32 )
      break;
    v34 = ServantTreasureDvcMaster___c_TypeInfo;
    key = (int32_t)v49.fields._current.fields.key;
    v36 = v49.fields._current.fields.value;
    if ( !ServantTreasureDvcMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDvcMaster___c_TypeInfo);
      v34 = ServantTreasureDvcMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v34->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = ServantTreasureDvcMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v34->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v38, Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__, 0LL);
      static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__4_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v40, v41);
    }
    if ( !v36 )
      sub_1B8880C(v32, v33);
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)v36,
      _9__4_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    v42 = this->fields.listCache;
    v43 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v36,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    if ( !v42 )
      sub_1B8880C(v43, v44);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v42,
      key,
      &v43->obj,
      (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    monitor = (int32_t)v36[1].monitor;
    v46 = HIDWORD(v36[1].monitor) + 1;
    LODWORD(v36[1].monitor) = 0;
    HIDWORD(v36[1].monitor) = v46;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v36[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v49,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDvcMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B9BE & 1) == 0 )
  {
    sub_1B885B0(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_4A5B9BE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantTreasureDvcMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantTreasureDvcMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDvcMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantTreasureDvcMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ServantTreasureDvcMaster___c___ctor(ServantTreasureDvcMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantTreasureDvcMaster___c___preProcess_b__4_0(
        ServantTreasureDvcMaster___c_o *this,
        ServantTreasureDvcEntity_o *a,
        ServantTreasureDvcEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.priority - b->fields.priority;
}