void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E76FE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E76FE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    464,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E76FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__,
      id,
      priority,
      method);
    byte_42E76FF = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


WarBoardCommonReleaseEntity_array *__fastcall WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42E76FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&WarBoardCommonReleaseEntity_TypeInfo, v21, v22, v23);
    byte_42E76FC = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v27 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v27 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v27,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v25 = list;
      v28 = *(&WarBoardCommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (WarBoardCommonReleaseEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == WarBoardCommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v27;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_23169312(this, id, &condGroup, v3);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen_23169312(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v43; // x20
  __int64 v44; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v46; // x2
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v48; // x21
  __int64 v49; // x22
  int32_t *v50; // x27
  const MethodInfo *v51; // x5
  bool IsOpen; // w0
  char v53; // w19
  int v54; // w20
  __int64 v56; // x0
  __int128 v57[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E76FD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      id,
      (_DWORD)condGroup,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v40, v41, v42);
    byte_42E76FD = 1;
  }
  memset(&v58, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v43 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v43,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                       this,
                                                                                       id,
                                                                                       v46);
  if ( !list )
    goto LABEL_27;
  syncRoot = list->fields._syncRoot;
  v48 = list;
  if ( !syncRoot )
    return 0;
  if ( (int)syncRoot >= 1 )
  {
    v49 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v49 >= (unsigned int)syncRoot )
      {
        v56 = sub_B5D6C8(list);
        sub_B5D668(v56, 0LL);
      }
      v50 = (int32_t *)*((_QWORD *)&v48[1].klass + v49);
      if ( !v50 || !v43 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v43,
              v50[6],
              (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                 v43,
                                                                                                 v50[6],
                                                                                                 (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v50[7], v50[8], v50[9], v50[10], v50[11], v51);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v43,
          v50[6],
          IsOpen,
          (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(syncRoot) = v48->fields._syncRoot;
      if ( (int)++v49 >= (int)syncRoot )
        goto LABEL_19;
    }
LABEL_27:
    sub_B5D69C(list, v44);
  }
  if ( !v43 )
    goto LABEL_27;
LABEL_19:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v43,
         (const MethodInfo_2F03120 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v57,
    v43,
    (const MethodInfo_2F03AB0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v58.fields.dictionary = v57[0];
  v58.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v57[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v58,
            (const MethodInfo_289DCBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( ((__int64)v58.fields.current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v58.fields.current.fields.key;
      v53 = 1;
      v54 = 9;
      goto LABEL_26;
    }
  }
  v53 = 0;
  v54 = 7;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v58,
    (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return (v54 == 9) & v53;
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

  if ( (byte_42E7700 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&priority);
    byte_42E7700 = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}