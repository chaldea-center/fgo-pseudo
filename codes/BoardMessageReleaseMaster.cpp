void __fastcall BoardMessageReleaseMaster___ctor(BoardMessageReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFEAC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__);
    byte_42AFEAC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    230,
    (const MethodInfo_23E268C *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string___ctor__);
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

  if ( (byte_42AFEAA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__);
    byte_42AFEAA = 1;
  }
  PK = BoardMessageReleaseEntity__CreatePK(messageId, condType, condTargetId, *(const MethodInfo **)&condTargetId);
  return (BoardMessageReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__GetEntity__);
}


bool __fastcall BoardMessageReleaseMaster__IsOpen(
        BoardMessageReleaseMaster_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  BoardMessageReleaseEntity_c **v8; // x26
  int32_t v9; // w22
  int32_t v10; // w23
  _DWORD *v11; // x24
  __int64 v12; // x10
  BoardMessageReleaseMaster_o *v13; // x22
  int32_t v14; // w20
  BoardMessageReleaseEntity_c **v15; // x19
  int32_t v16; // w25
  int32_t v17; // w27
  int64_t v18; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v21; // x19
  char v22; // w19
  int v23; // w20
  int32_t v25; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AFEAD & 1) == 0 )
  {
    sub_B52984(&BoardMessageReleaseEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_bool__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_B52984(&System_Collections_Generic_List_bool__TypeInfo);
    byte_42AFEAD = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v5 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v5,
    (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = &BoardMessageReleaseEntity_TypeInfo;
    v9 = (int)list;
    v10 = 0;
    v25 = (int)list;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = list;
      v12 = *(&(*v8)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v12
        || *(BoardMessageReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) != *v8 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == messageId )
      {
        if ( !v5 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v5,
                *((_DWORD *)list + 8),
                (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v5,
                               v11[8],
                               (const MethodInfo_2EF80A4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v13 = this;
          v14 = messageId;
          v15 = v8;
          v17 = v11[5];
          v16 = v11[6];
          v18 = (int)v11[7];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v17, v16, v18, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v5,
            v11[8],
            IsOpen,
            (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v8 = v15;
          messageId = v14;
          this = v13;
          v9 = v25;
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_19;
    }
LABEL_30:
    sub_B52A5C(list, v6);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v5,
         (const MethodInfo_2EF7D64 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v5,
             (const MethodInfo_2EF7F0C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v21 = (System_Collections_Generic_List_bool__o *)sub_B52A54(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_50346800(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3003B30 *)Method_System_Collections_Generic_List_bool___ctor__);
  if ( !v21 )
    goto LABEL_30;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v26,
    v21,
    (const MethodInfo_3005508 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v27,
            (const MethodInfo_200D038 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v27.fields.current) )
    {
      v22 = 1;
      v23 = 6;
      goto LABEL_28;
    }
  }
  v22 = 0;
  v23 = 2;
LABEL_28:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v27,
    (const MethodInfo_200D034 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v23 == 6) & v22;
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

  if ( (byte_42AFEAB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__);
    byte_42AFEAB = 1;
  }
  PK = BoardMessageReleaseEntity__CreatePK(messageId, condType, condTargetId, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_BoardMessageReleaseMaster__BoardMessageReleaseEntity__string__TryGetEntity__);
}