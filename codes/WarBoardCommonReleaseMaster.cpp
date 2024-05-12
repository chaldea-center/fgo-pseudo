void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43899F6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
    byte_43899F6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    464,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43899F7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
    byte_43899F7 = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


WarBoardCommonReleaseEntity_array *__fastcall WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_43899F4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
    sub_B775C4(&WarBoardCommonReleaseEntity_TypeInfo);
    byte_43899F4 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&WarBoardCommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (WarBoardCommonReleaseEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == WarBoardCommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7769C(list, v6);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_22683028(this, id, &condGroup, v3);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen_22683028(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x21
  __int64 v13; // x22
  int32_t *v14; // x27
  const MethodInfo *v15; // x5
  bool IsOpen; // w0
  char v17; // w19
  int v18; // w20
  __int64 v20; // x0
  __int128 v21[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_43899F5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_43899F5 = 1;
  }
  memset(&v22, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B77694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_2F74144 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                       this,
                                                                                       id,
                                                                                       v10);
  if ( !list )
    goto LABEL_27;
  syncRoot = list->fields._syncRoot;
  v12 = list;
  if ( !syncRoot )
    return 0;
  if ( (int)syncRoot >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= (unsigned int)syncRoot )
      {
        v20 = sub_B776C8(list);
        sub_B77668(v20, 0LL);
      }
      v14 = (int32_t *)*((_QWORD *)&v12[1].klass + v13);
      if ( !v14 || !v7 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v14[6],
              (const MethodInfo_2F74F68 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                 v7,
                                                                                                 v14[6],
                                                                                                 (const MethodInfo_2F74C30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v14[7], v14[8], v14[9], v14[10], v14[11], v15);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v7,
          v14[6],
          IsOpen,
          (const MethodInfo_2F74CC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(syncRoot) = v12->fields._syncRoot;
      if ( (int)++v13 >= (int)syncRoot )
        goto LABEL_19;
    }
LABEL_27:
    sub_B7769C(list, v8);
  }
  if ( !v7 )
    goto LABEL_27;
LABEL_19:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v7,
         (const MethodInfo_2F748F0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v21,
    v7,
    (const MethodInfo_2F75280 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v22.fields.dictionary = v21[0];
  v22.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v21[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v22,
            (const MethodInfo_288442C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( ((__int64)v22.fields.current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v22.fields.current.fields.key;
      v17 = 1;
      v18 = 9;
      goto LABEL_26;
    }
  }
  v17 = 0;
  v18 = 7;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v22,
    (const MethodInfo_288457C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return (v18 == 9) & v17;
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

  if ( (byte_43899F8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
    byte_43899F8 = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}