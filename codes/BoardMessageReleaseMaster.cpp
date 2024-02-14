void __fastcall BoardMessageReleaseMaster___ctor(BoardMessageReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214BB5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__, method);
    byte_4214BB5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    229,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageReleaseEntity_o *__fastcall BoardMessageReleaseMaster__GetEntity(
        BoardMessageReleaseMaster_o *this,
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4214BB3 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__,
      *(_QWORD *)&messageId);
    byte_4214BB3 = 1;
  }
  PK = BoardMessageReleaseEntity__CreatePK(messageId, condType, condTargetId, *(const MethodInfo **)&condTargetId);
  return (BoardMessageReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266A024 *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoardMessageReleaseMaster__IsOpen(
        BoardMessageReleaseMaster_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  System_Collections_Generic_Dictionary_int__bool__o *v21; // x21
  void *list; // x0
  BoardMessageReleaseEntity_c **v23; // x26
  int32_t v24; // w22
  int32_t v25; // w23
  _DWORD *v26; // x24
  __int64 v27; // x10
  BoardMessageReleaseMaster_o *v28; // x22
  int32_t v29; // w20
  BoardMessageReleaseEntity_c **v30; // x19
  int32_t v31; // w25
  int32_t v32; // w27
  int64_t v33; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_bool__o *v38; // x19
  char v39; // w19
  int v40; // w20
  int32_t v42; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-70h] BYREF

  v3 = messageId;
  if ( (byte_4214BB6 & 1) == 0 )
  {
    sub_B0D8A4(&BoardMessageReleaseEntity_TypeInfo, *(_QWORD *)&messageId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&CondType_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool___ctor___67875096, v19);
    sub_B0D8A4(&System_Collections_Generic_List_bool__TypeInfo, v20);
    byte_4214BB6 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v21 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&messageId,
                                                                method);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v21,
    (const MethodInfo_2E61370 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = &BoardMessageReleaseEntity_TypeInfo;
    v24 = (int)list;
    v25 = 0;
    v42 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v25,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v26 = list;
      v27 = *(&(*v23)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v27
        || *(BoardMessageReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v27 - 8) != *v23 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v3 )
      {
        if ( !v21 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v21,
                *((_DWORD *)list + 8),
                (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v21,
                               v26[8],
                               (const MethodInfo_2E61E5C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v28 = this;
          v29 = v3;
          v30 = v23;
          v32 = v26[5];
          v31 = v26[6];
          v33 = (int)v26[7];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v32, v31, v33, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v21,
            v26[8],
            IsOpen,
            (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v23 = v30;
          v3 = v29;
          this = v28;
          v24 = v42;
        }
      }
      if ( ++v25 >= v24 )
        goto LABEL_19;
    }
LABEL_30:
    sub_B0D97C(list);
  }
LABEL_19:
  if ( !v21 )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v21,
         (const MethodInfo_2E61B1C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v21,
             (const MethodInfo_2E61CC4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v38 = (System_Collections_Generic_List_bool__o *)sub_B0D974(System_Collections_Generic_List_bool__TypeInfo, v36, v37);
  System_Collections_Generic_List_bool____ctor_49514580(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2F38854 *)Method_System_Collections_Generic_List_bool___ctor___67875096);
  if ( !v38 )
    goto LABEL_30;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v43,
    v38,
    (const MethodInfo_2F3A22C *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v44,
            (const MethodInfo_210DC2C *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v44.fields.current) )
    {
      v39 = 1;
      v40 = 6;
      goto LABEL_28;
    }
  }
  v39 = 0;
  v40 = 2;
LABEL_28:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v44,
    (const MethodInfo_210DC28 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v40 == 6) & v39;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoardMessageReleaseMaster__TryGetEntity(
        BoardMessageReleaseMaster_o *this,
        BoardMessageReleaseEntity_o **entity,
        int32_t messageId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4214BB4 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4214BB4 = 1;
  }
  PK = BoardMessageReleaseEntity__CreatePK(messageId, condType, condTargetId, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__);
}