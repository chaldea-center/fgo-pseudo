void __fastcall EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E84F2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    271,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventUiReleaseEntity_o *__fastcall EventUiReleaseMaster__GetEntity(
        EventUiReleaseMaster_o *this,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E84F0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__,
      eventUiId,
      priority,
      *(_QWORD *)&idx);
    byte_42E84F0 = 1;
  }
  PK = EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool __fastcall EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v54; // x21
  __int64 v55; // x1
  void *list; // x0
  EventUiReleaseEntity_c **v57; // x26
  int32_t v58; // w22
  int32_t v59; // w23
  int32_t *v60; // x24
  __int64 v61; // x10
  EventUiReleaseEntity_c **v62; // x20
  int32_t v63; // w25
  int32_t v64; // w27
  int64_t v65; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v68; // x19
  char v69; // w19
  int v70; // w20
  EventUiReleaseMaster_o *v72; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E84F3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)eventUIEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v39, v40, v41);
    sub_B5D5C4(&EventUiReleaseEntity_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool___ctor___68730336, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_bool__TypeInfo, v51, v52, v53);
    byte_42E84F3 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  if ( !eventUIEntity )
    return 0;
  v54 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v54,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v57 = &EventUiReleaseEntity_TypeInfo;
    v58 = (int)list;
    v59 = 0;
    v72 = this;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v59,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v60 = (int32_t *)list;
      v61 = *(&(*v57)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v61
        || *(EventUiReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v61 - 8) != *v57 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
      {
        if ( !v54 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v54,
                *((_DWORD *)list + 7),
                (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v54,
                               v60[7],
                               (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v62 = v57;
          v64 = v60[8];
          v63 = v60[9];
          v65 = v60[10];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v64, v63, v65, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v54,
            v60[7],
            IsOpen,
            (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v57 = v62;
          this = v72;
        }
      }
      if ( ++v59 >= v58 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B5D69C(list, v55);
  }
LABEL_23:
  if ( !v54 )
    goto LABEL_33;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v54,
         (const MethodInfo_2F03120 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v54,
             (const MethodInfo_2F032C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v68 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_50415848(
    v68,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_30148E8 *)Method_System_Collections_Generic_List_bool___ctor___68730336);
  if ( !v68 )
    goto LABEL_33;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v73,
    v68,
    (const MethodInfo_30162C0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v74 = v73;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v74,
            (const MethodInfo_201A6AC *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v74.fields.current) )
    {
      v69 = 1;
      v70 = 2;
      goto LABEL_32;
    }
  }
  v70 = 0;
  v69 = 0;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v74,
    (const MethodInfo_201A6A8 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v70 == 2) & v69;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiReleaseMaster__TryGetEntity(
        EventUiReleaseMaster_o *this,
        EventUiReleaseEntity_o **entity,
        int32_t eventUiId,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E84F1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventUiId,
      *(_QWORD *)&priority);
    byte_42E84F1 = 1;
  }
  PK = EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}