void __fastcall ServantTreasureDvcMaster___ctor(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB505F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo, v4);
    byte_4BB505F = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *)v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    8,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
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

  if ( (byte_4BB505D & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BB505D = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDvcEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_323D0DC *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
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

  if ( (byte_4BB505E & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__,
      entity);
    byte_4BB505E = 1;
  }
  PK = (Il2CppObject *)ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromIDID(
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  ServantTreasureDvcEntity_o *v23; // x0
  __int64 v24; // x1
  ServantTreasureDvcEntity_o *v25; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4BB5062 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__,
      *(_QWORD *)&dvcId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v5);
    sub_1C13D24(&System_IDisposable_TypeInfo, v6);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, v7);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C13D24(&ServantTreasureDvcEntity_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB5062 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL
    || (Instance = (DataManager_o *)Instance->fields.datalist) == 0LL )
  {
    sub_1C13F80(Instance, v12);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_18:
      v22 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0LL);
    }
    v23 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                          Enumerator,
                                          *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (ServantTreasureDvcEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C14240(v23);
LABEL_35:
      sub_1C13F80(v23, v24);
    }
    if ( v23->fields.svtId == svtId && v23->fields.treasureDeviceId == dvcId )
      goto LABEL_27;
  }
  v25 = 0LL;
LABEL_27:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_31;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_31:
    v30 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v25;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdCondQuestIdAndPhase(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  ServantTreasureDvcEntity_o *v24; // x0
  __int64 v25; // x1
  ServantTreasureDvcEntity_o *v26; // x23
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4BB5065 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C13D24(&System_IDisposable_TypeInfo, v9);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, v10);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C13D24(&ServantTreasureDvcEntity_TypeInfo, v12);
    byte_4BB5065 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0LL);
    }
    v24 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                          Enumerator,
                                          *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24
      || (methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (ServantTreasureDvcEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C13F80(v24, v25);
    }
    if ( v24->fields.svtId == svtId
      && v24->fields.condQuestId == condQuestId
      && v24->fields.condQuestPhase == condQuestPhase )
    {
      goto LABEL_26;
    }
  }
  v26 = 0LL;
LABEL_26:
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
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v26;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ServantTreasureDvcEntity_o *v22; // x0
  __int64 v23; // x1
  ServantTreasureDvcEntity_o *v24; // x22
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4BB5063 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C13D24(&ServantTreasureDvcEntity_TypeInfo, v10);
    byte_4BB5063 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0LL);
    }
    v22 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                          Enumerator,
                                          *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22
      || (methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (ServantTreasureDvcEntity_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C13F80(v22, v23);
    }
    if ( v22->fields.svtId == svtId && v22->fields.treasureDeviceId == dvcId )
      goto LABEL_25;
  }
  v24 = 0LL;
LABEL_25:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v24;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        bool isLowPriorityPick,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int *v14; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  int *v23; // x0
  ServantTreasureDvcEntity_o *v24; // x22
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4BB5064 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__,
      *(_QWORD *)&svtId);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, v8);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C13D24(&ServantTreasureDvcEntity_TypeInfo, v10);
    byte_4BB5064 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v12);
  v14 = 0LL;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0LL);
    }
    v23 = (int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                   Enumerator,
                   *(_QWORD *)(v22 + 8));
    v24 = (ServantTreasureDvcEntity_o *)v23;
    if ( v23 )
    {
      methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) >= (unsigned int)methodPtr_low
        && *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) == ServantTreasureDvcEntity_TypeInfo
        && v23[4] == svtId )
      {
        v14 = v23;
        if ( isLowPriorityPick )
        {
          v14 = v23;
          if ( v23[6] > 0 )
            goto LABEL_27;
        }
      }
    }
  }
  v24 = (ServantTreasureDvcEntity_o *)v14;
LABEL_27:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_31;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_31:
    v29 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v24;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_array *__fastcall ServantTreasureDvcMaster__getEntityListFromIdNum(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *listCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB5061 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__,
      *(_QWORD *)&svtId);
    byte_4BB5061 = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_1C13F80(0LL, *(_QWORD *)&svtId);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)listCache,
         svtId,
         &value,
         (const MethodInfo_3293A34 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__) )
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
        sub_1C13F88(EntityListFromIdNum, v15);
      v20 = &v18->obj.klass + i;
      v21 = (ServantTreasureDvcEntity_o *)v20[4];
      if ( !v21 )
        sub_1C13F80(EntityListFromIdNum, v15);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_int__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  int32_t *v41; // x0
  __int64 v42; // x1
  int64_t v43; // x22
  __int64 methodPtr_low; // x9
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x23
  System_Collections_Generic_List_object__o *v53; // x0
  Il2CppClass *v54; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  void **v57; // x8
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  _BOOL8 v62; // x0
  __int64 v63; // x1
  ServantTreasureDvcMaster___c_c *v64; // x8
  int32_t key; // w22
  Il2CppObject *v66; // x21
  System_Comparison_T__o *_9__4_0; // x23
  Il2CppObject *v68; // x24
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *v76; // x23
  System_Object_array *v77; // x0
  __int64 v78; // x1
  int32_t monitor; // w2
  int v80; // w8
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v82; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BB5060 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__, method);
    sub_1C13D24(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__, v10);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo, v11);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__,
      v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__,
      v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___get_Current__,
      v14);
    sub_1C13D24(&System_IDisposable_TypeInfo, v15);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, v16);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Key__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Value__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v24);
    sub_1C13D24(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v25);
    sub_1C13D24(&ServantTreasureDvcEntity_TypeInfo, v26);
    sub_1C13D24(&Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__, v27);
    sub_1C13D24(&ServantTreasureDvcMaster___c_TypeInfo, v28);
    byte_4BB5060 = 1;
  }
  value = 0LL;
  memset(&v83, 0, sizeof(v83));
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__object___Clear(
    listCache,
    (const MethodInfo_3292430 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v30,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantTreasureDvcEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantTreasureDvcEntity__TypeInfo, 0LL);
    }
    v41 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                       Enumerator,
                       *(_QWORD *)(v40 + 8));
    v43 = (int64_t)v41;
    if ( !v41 )
      goto LABEL_52;
    methodPtr_low = LOBYTE(ServantTreasureDvcEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_1C14240(v41);
LABEL_52:
      sub_1C13F80(v41, v42);
    }
    if ( v41[5] == 1 )
    {
      if ( !v30 )
        sub_1C13F80(v41, ServantTreasureDvcEntity_TypeInfo);
      if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
              v30,
              v41[4],
              &value,
              (const MethodInfo_3293A34 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__) )
      {
        v52 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v52,
          (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
        value = (Il2CppObject *)v52;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v30,
          *(_DWORD *)(v43 + 16),
          (Il2CppObject *)v52,
          (const MethodInfo_3292294 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
      }
      v53 = (System_Collections_Generic_List_object__o *)value;
      if ( !value )
        sub_1C13F80(0LL, v45);
      v54 = value[1].klass;
      v55 = Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__;
      ++HIDWORD(value[1].monitor);
      if ( !v54 )
        sub_1C13F80(v53, v45);
      size = v53->fields._size;
      if ( (unsigned int)size >= LODWORD(v54->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          (Il2CppObject *)v43,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &v54->_1.image + size;
        v53->fields._size = size + 1;
        v57[4] = (void *)v43;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v57 + 4), v43, v46, v47, v48, v49, v50, v51);
      }
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_35;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_35:
    v61 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_int__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                                        Enumerator,
                                                                        *(_QWORD *)(v61 + 8));
  if ( !v30 )
LABEL_58:
    sub_1C13F80(listCache, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v82,
    v30,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
  v83 = v82;
  while ( 1 )
  {
    v62 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v83,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__);
    if ( !v62 )
      break;
    v64 = ServantTreasureDvcMaster___c_TypeInfo;
    key = (int32_t)v83.fields._current.fields.key;
    v66 = v83.fields._current.fields.value;
    if ( !ServantTreasureDvcMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDvcMaster___c_TypeInfo);
      v64 = ServantTreasureDvcMaster___c_TypeInfo;
    }
    _9__4_0 = (System_Comparison_T__o *)v64->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = ServantTreasureDvcMaster___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v64->static_fields->__9;
      _9__4_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
      System_Comparison_object____ctor(_9__4_0, v68, Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__, 0LL);
      static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__4_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    if ( !v66 )
      sub_1C13F80(v62, v63);
    System_Collections_Generic_List_object___Sort_56814736(
      (System_Collections_Generic_List_object__o *)v66,
      _9__4_0,
      (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    v76 = this->fields.listCache;
    v77 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v66,
            (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    if ( !v76 )
      sub_1C13F80(v77, v78);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)v76,
      key,
      &v77->obj,
      (const MethodInfo_3292294 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    monitor = (int32_t)v66[1].monitor;
    v80 = HIDWORD(v66[1].monitor) + 1;
    LODWORD(v66[1].monitor) = 0;
    HIDWORD(v66[1].monitor) = v80;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v66[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v83,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v30,
    (const MethodInfo_3292430 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDvcMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB5066 & 1) == 0 )
  {
    sub_1C13D24(&ServantTreasureDvcMaster___c_TypeInfo, v1);
    byte_4BB5066 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantTreasureDvcMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantTreasureDvcMaster___c_TypeInfo->static_fields->__9 = (struct ServantTreasureDvcMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantTreasureDvcMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  return a->fields.priority - b->fields.priority;
}