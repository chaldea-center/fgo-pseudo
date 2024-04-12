void __fastcall ServantTreasureDvcMaster___ctor(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B331B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
    byte_42B331B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.listCache, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    8,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__GetEntity(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3319 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
    byte_42B3319 = 1;
  }
  PK = ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDvcEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_42B331A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
    byte_42B331A = 1;
  }
  PK = ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
}


ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromIDID(
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  ServantTreasureDvcEntity_o *v18; // x0
  __int64 v19; // x1
  ServantTreasureDvcEntity_o *v20; // x22
  __int64 v21; // x9
  int v22; // w8
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int v28; // [xsp+0h] [xbp-50h]

  if ( (byte_42B331E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantTreasureDvcEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B331E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL
    || (Instance = (DataManager_o *)Instance->fields.lookup) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_18:
      v17 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v8);
    }
    v18 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                          Enumerator,
                                          *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_37;
    v21 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (ServantTreasureDvcEntity_c *)v18->klass->_2.typeHierarchy[v21 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B52D50(v18);
LABEL_37:
      sub_B52A5C(v18, v19);
    }
    if ( v18->fields.svtId == svtId && v18->fields.treasureDeviceId == dvcId )
    {
      v22 = 79;
      goto LABEL_27;
    }
  }
  v20 = 0LL;
  v22 = 77;
LABEL_27:
  v28 = v22;
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_31:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v8);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v28 == 77 )
    return 0LL;
  return v20;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdCondQuestIdAndPhase(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ServantTreasureDvcEntity_o *v21; // x0
  __int64 v22; // x1
  ServantTreasureDvcEntity_o *v23; // x23
  __int64 v24; // x10
  int v25; // w8
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-50h]

  if ( (byte_42B3321 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantTreasureDvcEntity_TypeInfo);
    byte_42B3321 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                          Enumerator,
                                          *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21
      || (v24 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v24)
      || (ServantTreasureDvcEntity_c *)v21->klass->_2.typeHierarchy[v24 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B52A5C(v21, v22);
    }
    if ( v21->fields.svtId == svtId
      && v21->fields.condQuestId == condQuestId
      && v21->fields.condQuestPhase == condQuestPhase )
    {
      v25 = 79;
      goto LABEL_26;
    }
  }
  v23 = 0LL;
  v25 = 77;
LABEL_26:
  v31 = v25;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_30:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  if ( v31 == 77 )
    return 0LL;
  return v23;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  ServantTreasureDvcEntity_o *v19; // x0
  __int64 v20; // x1
  ServantTreasureDvcEntity_o *v21; // x22
  __int64 v22; // x10
  int v23; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-50h]

  if ( (byte_42B331F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantTreasureDvcEntity_TypeInfo);
    byte_42B331F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                          Enumerator,
                                          *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19
      || (v22 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v22)
      || (ServantTreasureDvcEntity_c *)v19->klass->_2.typeHierarchy[v22 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B52A5C(v19, v20);
    }
    if ( v19->fields.svtId == svtId && v19->fields.treasureDeviceId == dvcId )
    {
      v23 = 70;
      goto LABEL_25;
    }
  }
  v21 = 0LL;
  v23 = 68;
LABEL_25:
  v29 = v23;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 68 )
    return 0LL;
  return v21;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        bool isLowPriorityPick,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  ServantTreasureDvcEntity_o *v11; // x23
  ServantTreasureDvcEntity_o *v12; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  int *v21; // x0
  __int64 v22; // x10
  int v23; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-50h]

  if ( (byte_42B3320 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&ServantTreasureDvcEntity_TypeInfo);
    byte_42B3320 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  v11 = 0LL;
LABEL_6:
  v12 = v11;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v21 = (int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                   Enumerator,
                   *(_QWORD *)(v20 + 8));
    v11 = (ServantTreasureDvcEntity_o *)v21;
    if ( v21 )
    {
      v22 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) >= (unsigned int)v22
        && *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v22 - 8) == ServantTreasureDvcEntity_TypeInfo
        && v21[4] == svtId )
      {
        if ( isLowPriorityPick && v21[6] >= 1 )
        {
          v23 = 80;
          goto LABEL_28;
        }
        goto LABEL_6;
      }
    }
  }
  v11 = 0LL;
  v23 = 78;
LABEL_28:
  v29 = v23;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_32:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 != 78 )
    return v11;
  return v12;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_array *__fastcall ServantTreasureDvcMaster__getEntityListFromIdNum(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *listCache; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B331D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__);
    byte_42B331D = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B52A5C(0LL, *(_QWORD *)&svtId);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)listCache,
         svtId,
         &value,
         (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__) )
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
  int i; // w26
  Il2CppClass **v20; // x8
  ServantTreasureDvcEntity_o *v21; // x25
  __int64 v23; // x0

  EntityListFromIdNum = ServantTreasureDvcMaster__getEntityListFromIdNum(this, svtId, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v18 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v18->max_length )
      {
        v23 = sub_B52A88(EntityListFromIdNum);
        sub_B52A28(v23, 0LL);
      }
      v20 = &v18->obj.klass + i;
      v21 = (ServantTreasureDvcEntity_o *)v20[4];
      if ( !v21 )
        sub_B52A5C(EntityListFromIdNum, v15);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  int32_t *v17; // x0
  __int64 v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x22
  __int64 v20; // x9
  __int64 v21; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  ServantTreasureDvcMaster_o *v23; // x24
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x1
  ServantTreasureDvcMaster___c_c *v29; // x0
  int32_t key; // w22
  Il2CppObject *v31; // x21
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v34; // x24
  struct ServantTreasureDvcMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v42; // x23
  WarBoardAIRoute_RouteData_o *v43; // x0
  __int64 v44; // x1
  int v45; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+18h] [xbp-B8h] BYREF
  int v48[2]; // [xsp+40h] [xbp-90h]
  int v49; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+50h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42B331C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
    sub_B52984(&System_Comparison_ServantTreasureDvcEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
    sub_B52984(&ServantTreasureDvcEntity_TypeInfo);
    sub_B52984(&Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__);
    sub_B52984(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_42B331C = 1;
  }
  value = 0LL;
  memset(&v50, 0, sizeof(v50));
  v49 = 0;
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    listCache,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v6);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_17:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v12);
    }
    v17 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                       Enumerator,
                       *(_QWORD *)(v16 + 8));
    v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
    if ( !v17 )
      goto LABEL_53;
    v20 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v20
      || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v20 - 8) != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B52D50(v17);
LABEL_53:
      sub_B52A5C(v17, v18);
    }
    if ( v17[5] == 1 )
    {
      if ( !v4 )
        sub_B52A5C(v17, ServantTreasureDvcEntity_TypeInfo);
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v4,
              v17[4],
              &value,
              (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__) )
      {
        v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v22,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
        value = (WarBoardEvalValueSquare_CalcEval_o *)v22;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4,
          v19->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)v22,
          (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
      }
      if ( !value )
        sub_B52A5C(0LL, v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v19,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    }
  }
  v23 = this;
  v48[0] = 114;
  v49 = 1;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_32:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v12);
  }
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                                                  Enumerator,
                                                                                                  *(_QWORD *)(v27 + 8));
  v49 = 0;
  if ( !v4 )
LABEL_58:
    sub_B52A5C(listCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v47,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v4,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
  v50 = v47;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v50,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__) )
  {
    v29 = ServantTreasureDvcMaster___c_TypeInfo;
    key = (int32_t)v50.fields.current.fields.key;
    v31 = v50.fields.current.fields.value;
    if ( (BYTE3(ServantTreasureDvcMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantTreasureDvcMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDvcMaster___c_TypeInfo);
      v29 = ServantTreasureDvcMaster___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v34,
        Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
      v35 = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      v35->__9__4_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__4_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v35->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v23 = this;
    }
    if ( !v31 )
      sub_B52A5C(v29, v28);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v31,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    v42 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v23->fields.listCache;
    v43 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    if ( !v42 )
      sub_B52A5C(v43, v44);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      v42,
      key,
      v43,
      (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__);
  }
  v48[0] = 237;
  v45 = ++v49;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v50,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
  if ( v45 && v48[v45 - 1] == 237 )
    v49 = v45 - 1;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v4,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDvcMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD395 & 1) == 0 )
  {
    sub_B52984(&ServantTreasureDvcMaster___c_TypeInfo);
    byte_42AD395 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantTreasureDvcMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantTreasureDvcMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}