void __fastcall EventBulletinBoardReleaseMaster___ctor(
        EventBulletinBoardReleaseMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB11E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB11E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    236,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBulletinBoardReleaseEntity_o *__fastcall EventBulletinBoardReleaseMaster__GetEntity(
        EventBulletinBoardReleaseMaster_o *this,
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB11C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__,
      bulletinBoardId,
      condType,
      *(_QWORD *)&condTargetId);
    byte_42EB11C = 1;
  }
  PK = EventBulletinBoardReleaseEntity__CreatePK(
         bulletinBoardId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condTargetId);
  return (EventBulletinBoardReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23FB260 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
}


bool __fastcall EventBulletinBoardReleaseMaster__IsOpen(
        EventBulletinBoardReleaseMaster_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
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
  EventBulletinBoardReleaseEntity_c **v57; // x26
  int32_t v58; // w22
  int32_t v59; // w23
  _DWORD *v60; // x24
  __int64 v61; // x10
  EventBulletinBoardReleaseMaster_o *v62; // x22
  int32_t v63; // w20
  EventBulletinBoardReleaseEntity_c **v64; // x19
  int32_t v65; // w25
  int32_t v66; // w27
  int64_t v67; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  System_Collections_Generic_List_bool__o *v70; // x19
  char v71; // w19
  int v72; // w20
  int32_t v74; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+20h] [xbp-70h] BYREF

  v4 = messageId;
  if ( (byte_42EB11F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      messageId,
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
    sub_B5D5C4(&EventBulletinBoardReleaseEntity_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool___ctor___68730336, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_bool__TypeInfo, v51, v52, v53);
    byte_42EB11F = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v54 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v54,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v57 = &EventBulletinBoardReleaseEntity_TypeInfo;
    v58 = (int)list;
    v59 = 0;
    v74 = (int)list;
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
      v60 = list;
      v61 = *(&(*v57)->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v61
        || *(EventBulletinBoardReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v61 - 8) != *v57 )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == v4 )
      {
        if ( !v54 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v54,
                *((_DWORD *)list + 8),
                (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || (list = (void *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                               v54,
                               v60[8],
                               (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
              ((unsigned __int8)list & 1) != 0) )
        {
          v62 = this;
          v63 = v4;
          v64 = v57;
          v66 = v60[5];
          v65 = v60[6];
          v67 = (int)v60[7];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v66, v65, v67, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v54,
            v60[8],
            IsOpen,
            (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v57 = v64;
          v4 = v63;
          this = v62;
          v58 = v74;
        }
      }
      if ( ++v59 >= v58 )
        goto LABEL_19;
    }
LABEL_30:
    sub_B5D69C(list, v55);
  }
LABEL_19:
  if ( !v54 )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v54,
         (const MethodInfo_2F03120 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v54,
             (const MethodInfo_2F032C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v70 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor_50415848(
    v70,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_30148E8 *)Method_System_Collections_Generic_List_bool___ctor___68730336);
  if ( !v70 )
    goto LABEL_30;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v75,
    v70,
    (const MethodInfo_30162C0 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v76 = v75;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v76,
            (const MethodInfo_201A6AC *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v76.fields.current) )
    {
      v71 = 1;
      v72 = 6;
      goto LABEL_28;
    }
  }
  v71 = 0;
  v72 = 2;
LABEL_28:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v76,
    (const MethodInfo_201A6A8 *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v72 == 6) & v71;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBulletinBoardReleaseMaster__TryGetEntity(
        EventBulletinBoardReleaseMaster_o *this,
        EventBulletinBoardReleaseEntity_o **entity,
        int32_t bulletinBoardId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB11D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      bulletinBoardId,
      *(_QWORD *)&condType);
    byte_42EB11D = 1;
  }
  PK = EventBulletinBoardReleaseEntity__CreatePK(
         bulletinBoardId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
}