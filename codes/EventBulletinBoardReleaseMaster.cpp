void __fastcall EventBulletinBoardReleaseMaster___ctor(
        EventBulletinBoardReleaseMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC5A6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__,
      method);
    byte_40FC5A6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    235,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string___ctor__);
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

  if ( (byte_40FC5A4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__,
      *(_QWORD *)&bulletinBoardId);
    byte_40FC5A4 = 1;
  }
  PK = EventBulletinBoardReleaseEntity__CreatePK(
         bulletinBoardId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condTargetId);
  return (EventBulletinBoardReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBulletinBoardReleaseMaster__IsOpen(
        EventBulletinBoardReleaseMaster_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t v5; // w19
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
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v23; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventBulletinBoardReleaseEntity_c **v26; // x26
  int32_t v27; // w22
  int32_t v28; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x24
  __int64 v32; // x10
  EventBulletinBoardReleaseMaster_o *v33; // x22
  int32_t v34; // w20
  EventBulletinBoardReleaseEntity_c **v35; // x19
  int32_t monitor; // w25
  int32_t klass_high; // w27
  int64_t monitor_high; // x26
  bool IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_List_bool__o *v45; // x19
  char v46; // w19
  int v47; // w20
  int32_t v49; // [xsp+4h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+20h] [xbp-70h] BYREF

  v5 = messageId;
  if ( (byte_40FC5A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&messageId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_bool__get_Current__, v18);
    sub_B16FFC(&EventBulletinBoardReleaseEntity_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor___66727368, v21);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v22);
    byte_40FC5A7 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v23 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&messageId,
                                                                method,
                                                                v3,
                                                                v4);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v23,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = &EventBulletinBoardReleaseEntity_TypeInfo;
    v27 = Count;
    v28 = 0;
    v49 = Count;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v29,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v31 = Item;
      v32 = *(&(*v26)->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v32
        || (EventBulletinBoardReleaseEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] != *v26 )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == v5 )
      {
        if ( !v23 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v23,
                (int32_t)Item[2].klass,
                (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
          || System_Collections_Generic_Dictionary_int__bool___get_Item(
               v23,
               (int32_t)v31[2].klass,
               (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
        {
          v33 = this;
          v34 = v5;
          v35 = v26;
          klass_high = HIDWORD(v31[1].klass);
          monitor = (int32_t)v31[1].monitor;
          monitor_high = SHIDWORD(v31[1].monitor);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(klass_high, monitor, monitor_high, 0, 0LL);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v23,
            (int32_t)v31[2].klass,
            IsOpen,
            (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          v26 = v35;
          v5 = v34;
          this = v33;
          v27 = v49;
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_19;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_19:
  if ( !v23 )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v23,
         (const MethodInfo_2DD527C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v23,
             (const MethodInfo_2DD5424 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  v45 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v41,
                                                     v42,
                                                     v43,
                                                     v44);
  System_Collections_Generic_List_bool____ctor_48951152(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2EAEF70 *)Method_System_Collections_Generic_List_bool___ctor___66727368);
  if ( !v45 )
    goto LABEL_30;
  System_Collections_Generic_List_bool___GetEnumerator(
    &v50,
    v45,
    (const MethodInfo_2EB0948 *)Method_System_Collections_Generic_List_bool__GetEnumerator__);
  v51 = v50;
  while ( System_Collections_Generic_List_Enumerator_bool___MoveNext(
            &v51,
            (const MethodInfo_206F730 *)Method_System_Collections_Generic_List_Enumerator_bool__MoveNext__) )
  {
    if ( LOBYTE(v51.fields.current) )
    {
      v46 = 1;
      v47 = 6;
      goto LABEL_28;
    }
  }
  v46 = 0;
  v47 = 2;
LABEL_28:
  System_Collections_Generic_List_Enumerator_bool___Dispose(
    &v51,
    (const MethodInfo_206F72C *)Method_System_Collections_Generic_List_Enumerator_bool__Dispose__);
  return (v47 == 6) & v46;
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

  if ( (byte_40FC5A5 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40FC5A5 = 1;
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
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventBulletinBoardReleaseMaster__EventBulletinBoardReleaseEntity__string__TryGetEntity__);
}