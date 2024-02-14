void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42133AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__, method);
    byte_42133AE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    462,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42133AF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_42133AF = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266A024 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_array *__fastcall WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_42133AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo, v9);
    sub_B0D8A4(&WarBoardCommonReleaseEntity_TypeInfo, v10);
    byte_42133AC = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&id,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v14 = *(&WarBoardCommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (WarBoardCommonReleaseEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == WarBoardCommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B0D97C(list);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_22061376(this, id, &condGroup, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__IsOpen_22061376(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__bool__o *v19; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v21; // x2
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x21
  __int64 v24; // x22
  int32_t *v25; // x27
  const MethodInfo *v26; // x5
  bool IsOpen; // w0
  char v28; // w19
  int v29; // w20
  __int64 v31; // x0
  __int128 v32[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42133AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v18);
    byte_42133AD = 1;
  }
  memset(&v33, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v19 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&id,
                                                                condGroup);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v19,
    (const MethodInfo_2E61370 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                       this,
                                                                                       id,
                                                                                       v21);
  if ( !list )
    goto LABEL_27;
  syncRoot = list->fields._syncRoot;
  v23 = list;
  if ( !syncRoot )
    return 0;
  if ( (int)syncRoot >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= (unsigned int)syncRoot )
      {
        v31 = sub_B0D9A8(list);
        sub_B0D948(v31, 0LL);
      }
      v25 = (int32_t *)*((_QWORD *)&v23[1].klass + v24);
      if ( !v25 || !v19 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v19,
              v25[6],
              (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                 v19,
                                                                                                 v25[6],
                                                                                                 (const MethodInfo_2E61E5C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v25[7], v25[8], v25[9], v25[10], v25[11], v26);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v19,
          v25[6],
          IsOpen,
          (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(syncRoot) = v23->fields._syncRoot;
      if ( (int)++v24 >= (int)syncRoot )
        goto LABEL_19;
    }
LABEL_27:
    sub_B0D97C(list);
  }
  if ( !v19 )
    goto LABEL_27;
LABEL_19:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v19,
         (const MethodInfo_2E61B1C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v32,
    v19,
    (const MethodInfo_2E624AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v33.fields.dictionary = v32[0];
  v33.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v32[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v33,
            (const MethodInfo_280C7EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( ((__int64)v33.fields.current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v33.fields.current.fields.key;
      v28 = 1;
      v29 = 9;
      goto LABEL_26;
    }
  }
  v28 = 0;
  v29 = 7;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v33,
    (const MethodInfo_280C93C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return (v29 == 9) & v28;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__TryGetEntity(
        WarBoardCommonReleaseMaster_o *this,
        WarBoardCommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42133B0 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__,
      entity);
    byte_42133B0 = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}