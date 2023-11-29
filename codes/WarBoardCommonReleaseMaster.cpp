void __fastcall WarBoardCommonReleaseMaster___ctor(WarBoardCommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F894B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__, method);
    byte_40F894B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    462,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_o *__fastcall WarBoardCommonReleaseMaster__GetEntity(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F894C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40F894C = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (WarBoardCommonReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardCommonReleaseEntity_array *__fastcall WarBoardCommonReleaseMaster__GetList(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40F8949 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo, v11);
    sub_B16FFC(&WarBoardCommonReleaseEntity_TypeInfo, v12);
    byte_40F8949 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardCommonReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&id,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_17;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v16,
                                                                    v15,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&WarBoardCommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (WarBoardCommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == WarBoardCommonReleaseEntity_TypeInfo
        && Item->fields.missionTargetId == id )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardCommonReleaseEntity__ToArray__);
}


bool __fastcall WarBoardCommonReleaseMaster__IsOpen(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-4h] BYREF

  condGroup = 0;
  return WarBoardCommonReleaseMaster__IsOpen_22592744(this, id, &condGroup, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCommonReleaseMaster__IsOpen_22592744(
        WarBoardCommonReleaseMaster_o *this,
        int32_t id,
        int32_t *condGroup,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_int__bool__o *v20; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v22; // x2
  WarBoardCommonReleaseEntity_array *Item; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x8
  WarBoardCommonReleaseEntity_array *v27; // x21
  __int64 v28; // x22
  int32_t *v29; // x27
  const MethodInfo *v30; // x5
  bool IsOpen; // w0
  char v32; // w19
  int v33; // w20
  __int128 v35[2]; // [xsp+0h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F894A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v19);
    byte_40F894A = 1;
  }
  memset(&v36, 0, 32);
  *condGroup = -1;
  if ( (id & 0x80000000) != 0 )
    return 0;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&id,
                                                                condGroup,
                                                                method,
                                                                v4);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  Item = WarBoardCommonReleaseMaster__GetList(this, id, v22);
  if ( !Item )
    goto LABEL_27;
  v26 = *(_QWORD *)&Item->max_length;
  v27 = Item;
  if ( !v26 )
    return 0;
  if ( (int)v26 >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v28 >= (unsigned int)v26 )
      {
        sub_B17100(Item, v24, v25);
        sub_B170A0();
      }
      v29 = (int32_t *)v27->m_Items[v28];
      if ( !v29 || !v20 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v20,
              v29[6],
              (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (Item = (WarBoardCommonReleaseEntity_array *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                          v20,
                                                          v29[6],
                                                          (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)Item & 1) != 0) )
      {
        IsOpen = WarBoardCondType__IsOpen(v29[7], v29[8], v29[9], v29[10], v29[11], v30);
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v20,
          v29[6],
          IsOpen,
          (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(v26) = v27->max_length;
      if ( (int)++v28 >= (int)v26 )
        goto LABEL_19;
    }
LABEL_27:
    sub_B170D4();
  }
  if ( !v20 )
    goto LABEL_27;
LABEL_19:
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v20,
         (const MethodInfo_2DD527C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v35,
    v20,
    (const MethodInfo_2DD5C0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v36.fields.dictionary = v35[0];
  v36.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v35[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v36,
            (const MethodInfo_2724684 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( ((__int64)v36.fields.current.fields.key & 0xFF00000000LL) != 0 )
    {
      *condGroup = (int32_t)v36.fields.current.fields.key;
      v32 = 1;
      v33 = 9;
      goto LABEL_26;
    }
  }
  v32 = 0;
  v33 = 7;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v36,
    (const MethodInfo_27247D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  return (v33 == 9) & v32;
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

  if ( (byte_40F894D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40F894D = 1;
  }
  PK = WarBoardCommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_WarBoardCommonReleaseMaster__WarBoardCommonReleaseEntity__string__TryGetEntity__);
}