void __fastcall ServantTreasureDvcMaster___ctor(ServantTreasureDvcMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EBF3D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo, v8, v9, v10);
    byte_42EBF3D = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    8,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string___ctor__);
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

  if ( (byte_42EBF3B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42EBF3B = 1;
  }
  PK = ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantTreasureDvcEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__GetEntity__);
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

  if ( (byte_42EBF3C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42EBF3C = 1;
  }
  PK = ServantTreasureDvcEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantTreasureDvcMaster__ServantTreasureDvcEntity__string__TryGetEntity__);
}


ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromIDID(
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  ServantTreasureDvcEntity_o *v37; // x0
  __int64 v38; // x1
  ServantTreasureDvcEntity_o *v39; // x22
  __int64 v40; // x9
  int v41; // w8
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  int v47; // [xsp+0h] [xbp-50h]

  if ( (byte_42EBF40 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      dvcId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantTreasureDvcEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    byte_42EBF40 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___)) == 0LL
    || (Instance = (DataManager_o *)Instance->fields.lookup) == 0LL )
  {
    sub_B5D69C(Instance, v25);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_18:
      v36 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v37 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                          Enumerator,
                                          *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      goto LABEL_37;
    v40 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v37->klass->_2.bitflags2 + 1) < (unsigned int)v40
      || (ServantTreasureDvcEntity_c *)v37->klass->_2.typeHierarchy[v40 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B5D990(v37);
LABEL_37:
      sub_B5D69C(v37, v38);
    }
    if ( v37->fields.svtId == svtId && v37->fields.treasureDeviceId == dvcId )
    {
      v41 = 79;
      goto LABEL_27;
    }
  }
  v39 = 0LL;
  v41 = 77;
LABEL_27:
  v47 = v41;
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_31:
    v45 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  if ( v47 == 77 )
    return 0LL;
  return v39;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdCondQuestIdAndPhase(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t condQuestId,
        int32_t condQuestPhase,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  ServantTreasureDvcEntity_o *v33; // x0
  __int64 v34; // x1
  ServantTreasureDvcEntity_o *v35; // x23
  __int64 v36; // x10
  int v37; // w8
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  int v43; // [xsp+0h] [xbp-50h]

  if ( (byte_42EBF43 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      condQuestId,
      *(_QWORD *)&condQuestPhase);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantTreasureDvcEntity_TypeInfo, v18, v19, v20);
    byte_42EBF43 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v33 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                          Enumerator,
                                          *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33
      || (v36 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v36)
      || (ServantTreasureDvcEntity_c *)v33->klass->_2.typeHierarchy[v36 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B5D69C(v33, v34);
    }
    if ( v33->fields.svtId == svtId
      && v33->fields.condQuestId == condQuestId
      && v33->fields.condQuestPhase == condQuestPhase )
    {
      v37 = 79;
      goto LABEL_26;
    }
  }
  v35 = 0LL;
  v37 = 77;
LABEL_26:
  v43 = v37;
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_30:
    v41 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  if ( v43 == 77 )
    return 0LL;
  return v35;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdDvcId(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        int32_t dvcId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  ServantTreasureDvcEntity_o *v31; // x0
  __int64 v32; // x1
  ServantTreasureDvcEntity_o *v33; // x22
  __int64 v34; // x10
  int v35; // w8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+0h] [xbp-50h]

  if ( (byte_42EBF41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, svtId, dvcId, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantTreasureDvcEntity_TypeInfo, v16, v17, v18);
    byte_42EBF41 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v31 = (ServantTreasureDvcEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                          Enumerator,
                                          *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31
      || (v34 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v34)
      || (ServantTreasureDvcEntity_c *)v31->klass->_2.typeHierarchy[v34 - 1] != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B5D69C(v31, v32);
    }
    if ( v31->fields.svtId == svtId && v31->fields.treasureDeviceId == dvcId )
    {
      v35 = 70;
      goto LABEL_25;
    }
  }
  v33 = 0LL;
  v35 = 68;
LABEL_25:
  v41 = v35;
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  if ( v41 == 68 )
    return 0LL;
  return v33;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_o *__fastcall ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        bool isLowPriorityPick,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  ServantTreasureDvcEntity_o *v23; // x23
  ServantTreasureDvcEntity_o *v24; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int *v33; // x0
  __int64 v34; // x10
  int v35; // w8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+0h] [xbp-50h]

  if ( (byte_42EBF42 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      svtId,
      isLowPriorityPick,
      method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantTreasureDvcEntity_TypeInfo, v16, v17, v18);
    byte_42EBF42 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  v23 = 0LL;
LABEL_6:
  v24 = v23;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_18:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v33 = (int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                   Enumerator,
                   *(_QWORD *)(v32 + 8));
    v23 = (ServantTreasureDvcEntity_o *)v33;
    if ( v33 )
    {
      v34 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) >= (unsigned int)v34
        && *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v34 - 8) == ServantTreasureDvcEntity_TypeInfo
        && v33[4] == svtId )
      {
        if ( isLowPriorityPick && v33[6] >= 1 )
        {
          v35 = 80;
          goto LABEL_28;
        }
        goto LABEL_6;
      }
    }
  }
  v23 = 0LL;
  v35 = 78;
LABEL_28:
  v41 = v35;
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  if ( v41 != 78 )
    return v23;
  return v24;
}


// local variable allocation has failed, the output may be wrong!
ServantTreasureDvcEntity_array *__fastcall ServantTreasureDvcMaster__getEntityListFromIdNum(
        ServantTreasureDvcMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____o *listCache; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBF3F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__,
      svtId,
      (_DWORD)method,
      v3);
    byte_42EBF3F = 1;
  }
  value = 0LL;
  listCache = this->fields.listCache;
  if ( !listCache )
    sub_B5D69C(0LL, *(_QWORD *)&svtId);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)listCache,
         svtId,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____TryGetValue__) )
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
        v23 = sub_B5D6C8(EntityListFromIdNum);
        sub_B5D668(v23, 0LL);
      }
      v20 = &v18->obj.klass + i;
      v21 = (ServantTreasureDvcEntity_o *)v20[4];
      if ( !v21 )
        sub_B5D69C(EntityListFromIdNum, v15);
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *listCache; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v87; // x19
  __int64 v88; // x1
  __int64 v89; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v92; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v95; // x3
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  int32_t *v100; // x0
  __int64 v101; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v102; // x22
  __int64 v103; // x9
  __int64 v104; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // x23
  ServantTreasureDvcMaster_o *v106; // x24
  System_Collections_Generic_IEnumerator_T__c *v107; // x8
  unsigned __int64 v108; // x10
  int32_t *v109; // x11
  __int64 v110; // x0
  __int64 v111; // x1
  ServantTreasureDvcMaster___c_c *v112; // x0
  int32_t key; // w22
  Il2CppObject *v114; // x21
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x23
  Il2CppObject *v117; // x24
  struct ServantTreasureDvcMaster___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v125; // x23
  WarBoardAIRoute_RouteData_o *v126; // x0
  __int64 v127; // x1
  int v128; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v130; // [xsp+18h] [xbp-B8h] BYREF
  int v131[2]; // [xsp+40h] [xbp-90h]
  int v132; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v133; // [xsp+50h] [xbp-80h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42EBF3E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Comparison_ServantTreasureDvcEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ServantTreasureDvcEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___get_Current__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Key__,
      v53,
      v54,
      v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantTreasureDvcEntity___get_Value__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&ServantTreasureDvcEntity_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__, v80, v81, v82);
    sub_B5D5C4(&ServantTreasureDvcMaster___c_TypeInfo, v83, v84, v85);
    byte_42EBF3E = 1;
  }
  value = 0LL;
  memset(&v133, 0, sizeof(v133));
  v132 = 0;
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_58;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    listCache,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____Clear__);
  v87 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v87,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v88);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        p_offset += 4;
        if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v89);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v96 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v98 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v99 = (__int64)&v96->vtable[*v98].method;
    }
    else
    {
LABEL_17:
      v99 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v95);
    }
    v100 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
                        Enumerator,
                        *(_QWORD *)(v99 + 8));
    v102 = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
    if ( !v100 )
      goto LABEL_53;
    v103 = *(&ServantTreasureDvcEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v100 + 300LL) < (unsigned int)v103
      || *(ServantTreasureDvcEntity_c **)(*(_QWORD *)(*(_QWORD *)v100 + 200LL) + 8 * v103 - 8) != ServantTreasureDvcEntity_TypeInfo )
    {
      sub_B5D990(v100);
LABEL_53:
      sub_B5D69C(v100, v101);
    }
    if ( v100[5] == 1 )
    {
      if ( !v87 )
        sub_B5D69C(v100, ServantTreasureDvcEntity_TypeInfo);
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v87,
              v100[4],
              &value,
              (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___TryGetValue__) )
      {
        v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantTreasureDvcEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v105,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity___ctor__);
        value = (WarBoardEvalValueSquare_CalcEval_o *)v105;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v87,
          v102->fields.missionTargetId,
          (WarBoardAIRoute_RouteData_o *)v105,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___set_Item__);
      }
      if ( !value )
        sub_B5D69C(0LL, v104);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
        v102,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Add__);
    }
  }
  v106 = this;
  v131[0] = 114;
  v132 = 1;
  v107 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v108 = 0LL;
    v109 = &v107->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v109 - 1) != System_IDisposable_TypeInfo )
    {
      ++v108;
      v109 += 4;
      if ( v108 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v110 = (__int64)&v107->vtable[*v109].method;
  }
  else
  {
LABEL_32:
    v110 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v95);
  }
  listCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v110)(
                                                                                                  Enumerator,
                                                                                                  *(_QWORD *)(v110 + 8));
  v132 = 0;
  if ( !v87 )
LABEL_58:
    sub_B5D69C(listCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v130,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v87,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___GetEnumerator__);
  v133 = v130;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v133,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___MoveNext__) )
  {
    v112 = ServantTreasureDvcMaster___c_TypeInfo;
    key = (int32_t)v133.fields.current.fields.key;
    v114 = v133.fields.current.fields.value;
    if ( (BYTE3(ServantTreasureDvcMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantTreasureDvcMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantTreasureDvcMaster___c_TypeInfo);
      v112 = ServantTreasureDvcMaster___c_TypeInfo;
    }
    static_fields = v112->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v112);
        static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      }
      v117 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantTreasureDvcEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v117,
        Method_ServantTreasureDvcMaster___c__preProcess_b__4_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantTreasureDvcEntity___ctor__);
      v118 = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
      v118->__9__4_0 = (struct System_Comparison_ServantTreasureDvcEntity__o *)_9__4_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v118->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124);
      v106 = this;
    }
    if ( !v114 )
      sub_B5D69C(v112, v111);
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v114,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Sort__);
    v125 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v106->fields.listCache;
    v126 = (WarBoardAIRoute_RouteData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v114,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__ToArray__);
    if ( !v125 )
      sub_B5D69C(v126, v127);
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      v125,
      key,
      v126,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__ServantTreasureDvcEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v114,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantTreasureDvcEntity__Clear__);
  }
  v131[0] = 237;
  v128 = ++v132;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v133,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantTreasureDvcEntity___Dispose__);
  if ( v128 && v131[v128 - 1] == 237 )
    v132 = v128 - 1;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v87,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantTreasureDvcEntity___Clear__);
  return 1;
}


void __fastcall ServantTreasureDvcMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantTreasureDvcMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DAD & 1) == 0 )
  {
    sub_B5D5C4(&ServantTreasureDvcMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5DAD = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantTreasureDvcMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantTreasureDvcMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantTreasureDvcMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}