void __fastcall BoardMessageReleaseMaster___ctor(BoardMessageReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187D97 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__, method);
    byte_4187D97 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    229,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__);
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

  if ( (byte_4187D95 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__,
      *(_QWORD *)&messageId);
    byte_4187D95 = 1;
  }
  PK = BoardMessageReleaseEntity__CreatePK(messageId, condType, condTargetId, *(const MethodInfo **)&condTargetId);
  return (BoardMessageReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__);
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
  __int64 v22; // x1
  void *list; // x0
  BoardMessageReleaseEntity_c **v24; // x26
  int32_t v25; // w22
  int32_t v26; // w23
  _DWORD *v27; // x24
  __int64 v28; // x10
  BoardMessageReleaseMaster_o *v29; // x22
  int32_t v30; // w20
  BoardMessageReleaseEntity_c **v31; // x19
  int32_t v32; // w25
  int32_t v33; // w27
  int64_t v34; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v37; // x19
  char v38; // w19
  int v39; // w20
  int32_t v41; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF

  v3 = messageId;
  if ( (byte_4187D98 & 1) == 0 )
  {
    sub_B2C35C(&BoardMessageReleaseEntity_TypeInfo, *(_QWORD *)&messageId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&CondType_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_bool__TypeInfo, v20);
    byte_4187D98 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v21 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v21,
    (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v24 = &BoardMessageReleaseEntity_TypeInfo;
    v25 = (int)list;
    v26 = 0;
    v41 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v26,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v27 = list;
      v28 = *(&(*v24)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v28
        || *(BoardMessageReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v28 - 8) != *v24 )
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
                (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v21,
                               v27[8],
                               (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v29 = this;
          v30 = v3;
          v31 = v24;
          v33 = v27[5];
          v32 = v27[6];
          v34 = (int)v27[7];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v33, v32, v34, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v21,
            v27[8],
            IsOpen,
            (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v24 = v31;
          v3 = v30;
          this = v29;
          v25 = v41;
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_19;
    }
LABEL_30:
    sub_B2C434(list, v22);
  }
LABEL_19:
  if ( !v21 )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v21,
         (const MethodInfo_2E1C808 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v21,
             (const MethodInfo_2E1C9B0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v37 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_49471176(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2F2DEC8 *)Method_System_Collections_Generic_List_bool___ctor__);
  if ( !v37 )
    goto LABEL_30;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v42,
    v37,
    (const MethodInfo_2F2F8A0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v43,
            (const MethodInfo_20E5B08 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v43.fields.current) )
    {
      v38 = 1;
      v39 = 6;
      goto LABEL_28;
    }
  }
  v38 = 0;
  v39 = 2;
LABEL_28:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v43,
    (const MethodInfo_20E5B04 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v39 == 6) & v38;
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

  if ( (byte_4187D96 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4187D96 = 1;
  }
  PK = BoardMessageReleaseEntity__CreatePK(messageId, condType, condTargetId, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__);
}