void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41865FC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__, method);
    byte_41865FC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    462,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41865FD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_41865FD = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_41865FA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo, v9);
    sub_B2C35C(&WarBoardCommonReleaseEntity_TypeInfo, v10);
    byte_41865FA = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&WarBoardCommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (WarBoardCommonReleaseEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == WarBoardCommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_22500540(this, id, &condGroup, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__IsOpen_22500540(
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
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v22; // x2
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v24; // x21
  __int64 v25; // x22
  int32_t *v26; // x27
  const MethodInfo *v27; // x5
  bool IsOpen; // w0
  char v29; // w19
  int v30; // w20
  __int64 v32; // x0
  __int128 v33[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_41865FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v18);
    byte_41865FB = 1;
  }
  memset(&v34, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v19 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v19,
    (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                       this,
                                                                                       id,
                                                                                       v22);
  if ( !list )
    goto LABEL_27;
  syncRoot = list->fields._syncRoot;
  v24 = list;
  if ( !syncRoot )
    return 0;
  if ( (int)syncRoot >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= (unsigned int)syncRoot )
      {
        v32 = sub_B2C460(list);
        sub_B2C400(v32, 0LL);
      }
      v26 = (int32_t *)*((_QWORD *)&v24[1].klass + v25);
      if ( !v26 || !v19 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v19,
              v26[6],
              (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                 v19,
                                                                                                 v26[6],
                                                                                                 (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v26[7], v26[8], v26[9], v26[10], v26[11], v27);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v19,
          v26[6],
          IsOpen,
          (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(syncRoot) = v24->fields._syncRoot;
      if ( (int)++v25 >= (int)syncRoot )
        goto LABEL_19;
    }
LABEL_27:
    sub_B2C434(list, v20);
  }
  if ( !v19 )
    goto LABEL_27;
LABEL_19:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v19,
         (const MethodInfo_2E1C808 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v33,
    v19,
    (const MethodInfo_2E1D198 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v34.fields.dictionary = v33[0];
  v34.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v33[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v34,
            (const MethodInfo_2566B54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( ((__int64)v34.fields.current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v34.fields.current.fields.key;
      v29 = 1;
      v30 = 9;
      goto LABEL_26;
    }
  }
  v29 = 0;
  v30 = 7;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v34,
    (const MethodInfo_2566CA4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return (v30 == 9) & v29;
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

  if ( (byte_41865FE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__,
      entity);
    byte_41865FE = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}