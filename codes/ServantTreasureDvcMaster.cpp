void __fastcall ServantTreasureDvcMaster___ctor(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418B0E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo, v4);
    byte_418B0E5 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    8,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
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

  if ( (byte_418B0E3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_418B0E3 = 1;
  }
  PK = ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDvcEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
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

  if ( (byte_418B0E4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__,
      entity);
    byte_418B0E4 = 1;
  }
  PK = ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
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
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  ServantTreasureDvcEntity_o *v24; // x0
  __int64 v25; // x1
  ServantTreasureDvcEntity_o *v26; // x22
  __int64 v27; // x9
  int v28; // w8
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-50h]

  if ( (byte_418B0E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&dvcId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&ServantTreasureDvcEntity_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418B0E8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL
    || (Instance = (DataManager_o *)Instance->fields.lookup) == 0LL )
  {
    sub_B2C434(Instance, v12);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_18:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
    }
    v24 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                          Enumerator,
                                          *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      goto LABEL_37;
    v27 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (ServantTreasureDvcEntity_c *)v24->klass->_2.typeHierarchy[v27 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B2C728(v24);
LABEL_37:
      sub_B2C434(v24, v25);
    }
    if ( v24->fields.svtId == svtId && v24->fields.treasureDeviceId == dvcId )
    {
      v28 = 79;
      goto LABEL_27;
    }
  }
  v26 = 0LL;
  v28 = 77;
LABEL_27:
  v34 = v28;
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_31:
    v32 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v34 == 77 )
    return 0LL;
  return v26;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  ServantTreasureDvcEntity_o *v25; // x0
  __int64 v26; // x1
  ServantTreasureDvcEntity_o *v27; // x23
  __int64 v28; // x10
  int v29; // w8
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  int v35; // [xsp+0h] [xbp-50h]

  if ( (byte_418B0EB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&ServantTreasureDvcEntity_TypeInfo, v12);
    byte_418B0EB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v25 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                          Enumerator,
                                          *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25
      || (v28 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (ServantTreasureDvcEntity_c *)v25->klass->_2.typeHierarchy[v28 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B2C434(v25, v26);
    }
    if ( v25->fields.svtId == svtId
      && v25->fields.condQuestId == condQuestId
      && v25->fields.condQuestPhase == condQuestPhase )
    {
      v29 = 79;
      goto LABEL_26;
    }
  }
  v27 = 0LL;
  v29 = 77;
LABEL_26:
  v35 = v29;
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_30:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( v35 == 77 )
    return 0LL;
  return v27;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  ServantTreasureDvcEntity_o *v23; // x0
  __int64 v24; // x1
  ServantTreasureDvcEntity_o *v25; // x22
  __int64 v26; // x10
  int v27; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int v33; // [xsp+0h] [xbp-50h]

  if ( (byte_418B0E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&ServantTreasureDvcEntity_TypeInfo, v10);
    byte_418B0E9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v23 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                          Enumerator,
                                          *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23
      || (v26 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v26)
      || (ServantTreasureDvcEntity_c *)v23->klass->_2.typeHierarchy[v26 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B2C434(v23, v24);
    }
    if ( v23->fields.svtId == svtId && v23->fields.treasureDeviceId == dvcId )
    {
      v27 = 70;
      goto LABEL_25;
    }
  }
  v25 = 0LL;
  v27 = 68;
LABEL_25:
  v33 = v27;
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( v33 == 68 )
    return 0LL;
  return v25;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  ServantTreasureDvcEntity_o *v15; // x23
  ServantTreasureDvcEntity_o *v16; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int *v25; // x0
  __int64 v26; // x10
  int v27; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int v33; // [xsp+0h] [xbp-50h]

  if ( (byte_418B0EA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&svtId);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&ServantTreasureDvcEntity_TypeInfo, v10);
    byte_418B0EA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  v15 = 0LL;
LABEL_6:
  v16 = v15;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_18:
      v24 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v25 = (int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                   Enumerator,
                   *(_QWORD *)(v24 + 8));
    v15 = (ServantTreasureDvcEntity_o *)v25;
    if ( v25 )
    {
      v26 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) >= (unsigned int)v26
        && *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v26 - 8) == ServantTreasureDvcEntity_TypeInfo
        && v25[4] == svtId )
      {
        if ( isLowPriorityPick && v25[6] >= 1 )
        {
          v27 = 80;
          goto LABEL_28;
        }
        goto LABEL_6;
      }
    }
  }
  v15 = 0LL;
  v27 = 78;
LABEL_28:
  v33 = v27;
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_32:
    v31 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( v33 != 78 )
    return v15;
  return v16;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_array *__fastcall ServantTreasureDvcMaster__getEntityListFromIdNum(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *listCache; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B0E7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__,
      *(_QWORD *)&svtId);
    byte_418B0E7 = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B2C434(0LL, *(_QWORD *)&svtId);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)listCache,
         svtId,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__) )
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
        v23 = sub_B2C460(EntityListFromIdNum);
        sub_B2C400(v23, 0LL);
      }
      v20 = &v18->obj.klass + i;
      v21 = (ServantTreasureDvcEntity_o *)v20[4];
      if ( !v21 )
        sub_B2C434(EntityListFromIdNum, v15);
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
  __int64 v29; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  int32_t *v44; // x0
  __int64 v45; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x22
  __int64 v47; // x9
  __int64 v48; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x23
  ServantTreasureDvcMaster_o *v50; // x24
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x1
  ServantTreasureDvcMaster___c_c *v56; // x0
  int32_t key; // w22
  Il2CppObject *v58; // x21
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v61; // x24
  struct ServantTreasureDvcMaster___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v69; // x23
  WarBoardAIRoute_RouteData_o *v70; // x0
  __int64 v71; // x1
  int v72; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v74; // [xsp+18h] [xbp-B8h] BYREF
  int v75[2]; // [xsp+40h] [xbp-90h]
  int v76; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+50h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_418B0E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___get_Current__,
      v15);
    sub_B2C35C(&System_IDisposable_TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Key__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Value__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v26);
    sub_B2C35C(&ServantTreasureDvcEntity_TypeInfo, v27);
    sub_B2C35C(&Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__, v28);
    sub_B2C35C(&ServantTreasureDvcMaster___c_TypeInfo, v29);
    byte_418B0E6 = 1;
  }
  value = 0LL;
  memset(&v77, 0, sizeof(v77));
  v76 = 0;
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    listCache,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_17:
      v43 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v44 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                       Enumerator,
                       *(_QWORD *)(v43 + 8));
    v46 = (EventMissionProgressRequest_Argument_ProgressData_o *)v44;
    if ( !v44 )
      goto LABEL_53;
    v47 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v47
      || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v47 - 8) != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B2C728(v44);
LABEL_53:
      sub_B2C434(v44, v45);
    }
    if ( v44[5] == 1 )
    {
      if ( !v31 )
        sub_B2C434(v44, ServantTreasureDvcEntity_TypeInfo);
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v31,
              v44[4],
              &value,
              (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__) )
      {
        v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v49,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
        value = (WarBoardEvalValueSquare_CalcEval_o *)v49;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v31,
          v46->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)v49,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
      }
      if ( !value )
        sub_B2C434(0LL, v48);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v46,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    }
  }
  v50 = this;
  v75[0] = 114;
  v76 = 1;
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_32:
    v54 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                                                                  Enumerator,
                                                                                                  *(_QWORD *)(v54 + 8));
  v76 = 0;
  if ( !v31 )
LABEL_58:
    sub_B2C434(listCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v74,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v31,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
  v77 = v74;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v77,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__) )
  {
    v56 = ServantTreasureDvcMaster___c_TypeInfo;
    key = (int32_t)v77.fields.current.fields.key;
    v58 = v77.fields.current.fields.value;
    if ( (BYTE3(ServantTreasureDvcMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantTreasureDvcMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDvcMaster___c_TypeInfo);
      v56 = ServantTreasureDvcMaster___c_TypeInfo;
    }
    static_fields = v56->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      }
      v61 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v61,
        Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
      v62 = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      v62->__9__4_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__4_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v62->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
      v50 = this;
    }
    if ( !v58 )
      sub_B2C434(v56, v55);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v58,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    v69 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v50->fields.listCache;
    v70 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v58,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    if ( !v69 )
      sub_B2C434(v70, v71);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      v69,
      key,
      v70,
      (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v58,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__);
  }
  v75[0] = 237;
  v72 = ++v76;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v77,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
  if ( v72 && v75[v72 - 1] == 237 )
    v76 = v72 - 1;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v31,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDvcMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185432 & 1) == 0 )
  {
    sub_B2C35C(&ServantTreasureDvcMaster___c_TypeInfo, v1);
    byte_4185432 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantTreasureDvcMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantTreasureDvcMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}