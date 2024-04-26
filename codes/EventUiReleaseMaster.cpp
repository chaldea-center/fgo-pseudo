void __fastcall EventUiReleaseMaster___ctor(EventUiReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4350FF2 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
    byte_4350FF2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    271,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string___ctor__);
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

  if ( (byte_4350FF0 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
    byte_4350FF0 = 1;
  }
  PK = EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&idx);
  return (EventUiReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_21C0890 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__GetEntity__);
}


bool __fastcall EventUiReleaseMaster__IsOpen(
        EventUiReleaseMaster_o *this,
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  EventUiReleaseEntity_c **v8; // x26
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t *v11; // x24
  __int64 v12; // x10
  EventUiReleaseEntity_c **v13; // x20
  int32_t v14; // w25
  int32_t v15; // w27
  int64_t v16; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v19; // x19
  char v20; // w19
  int v21; // w20
  EventUiReleaseMaster_o *v23; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4350FF3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_B70694(&EventUiReleaseEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_bool___ctor___69155096);
    sub_B70694(&System_Collections_Generic_List_bool__TypeInfo);
    byte_4350FF3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !eventUIEntity )
    return 0;
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B70764(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_2F47534 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = &EventUiReleaseEntity_TypeInfo;
    v9 = (int)list;
    v10 = 0;
    v23 = this;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = (int32_t *)list;
      v12 = *(&(*v8)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v12
        || *(EventUiReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) != *v8 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventUIEntity->fields.id && *((_DWORD *)list + 5) == eventUIEntity->fields.priority )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 7),
                (const MethodInfo_2F48358 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v11[7],
                               (const MethodInfo_2F48020 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v13 = v8;
          v15 = v11[8];
          v14 = v11[9];
          v16 = v11[10];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v15, v14, v16, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v11[7],
            IsOpen,
            (const MethodInfo_2F480B8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v8 = v13;
          this = v23;
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_23;
    }
LABEL_33:
    sub_B7076C(list, v6);
  }
LABEL_23:
  if ( !v5 )
    goto LABEL_33;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_2F47CE0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_2F47E88 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v19 = (System_Collections_Generic_List_bool__o *)sub_B70764(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_50678856(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3054C48 *)Method_System_Collections_Generic_List_bool___ctor___69155096);
  if ( !v19 )
    goto LABEL_33;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v24,
    v19,
    (const MethodInfo_3056620 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v25,
            (const MethodInfo_19F215C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v25.fields.current) )
    {
      v20 = 1;
      v21 = 2;
      goto LABEL_32;
    }
  }
  v21 = 0;
  v20 = 0;
LABEL_32:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v25,
    (const MethodInfo_19F2158 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v21 == 2) & v20;
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

  if ( (byte_4350FF1 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
    byte_4350FF1 = 1;
  }
  PK = EventUiReleaseEntity__CreatePK(eventUiId, priority, idx, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_EventUiReleaseMaster__EventUiReleaseEntity__string__TryGetEntity__);
}