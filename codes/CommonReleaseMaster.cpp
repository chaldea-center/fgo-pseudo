void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4D66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E4D66 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    288,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E4D64 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__,
      id,
      priority,
      method);
    byte_42E4D64 = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsContainCondType(
        CommonReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v16; // x3
  __int64 v17; // x10
  int monitor_high; // w8

  if ( (byte_42E4D68 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetId,
      condType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CommonReleaseEntity_TypeInfo, v10, v11, v12);
    byte_42E4D68 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&targetId);
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v14,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v16) )
        {
          return 1;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsOpen(
        CommonReleaseMaster_o *this,
        int32_t id,
        CommonReleaseCondOverwriter_o *overwriter,
        bool isCheckMaterialHistory,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__bool__o *v48; // x20
  __int64 v49; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v51; // x2
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v53; // x21
  unsigned int v54; // w27
  int32_t *v55; // x23
  __int64 v56; // x3
  CommonReleaseCondOverwriter_c *klass; // x8
  unsigned __int64 v58; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v61; // w24
  int32_t v62; // w26
  int64_t v63; // x25
  char IsOpen; // w0
  char v65; // w19
  int v66; // w20
  __int64 v68; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v69; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v70; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E4D69 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      id,
      (_DWORD)overwriter,
      isCheckMaterialHistory);
    sub_B5D5C4(&CommonReleaseCondOverwriter_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CondType_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v33, v34, v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__,
      v36,
      v37,
      v38);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__,
      v39,
      v40,
      v41);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__,
      v42,
      v43,
      v44);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__, v45, v46, v47);
    byte_42E4D69 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  if ( (id & 0x80000000) != 0 )
    return 0;
  v48 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v48,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__getList(
                                                                                       this,
                                                                                       id,
                                                                                       v51);
  if ( !list )
    goto LABEL_39;
  syncRoot = list->fields._syncRoot;
  v53 = list;
  if ( !syncRoot )
    return 0;
  if ( (int)syncRoot >= 1 )
  {
    v54 = 0;
    while ( 1 )
    {
      if ( v54 >= (unsigned int)syncRoot )
      {
        v68 = sub_B5D6C8(list);
        sub_B5D668(v68, 0LL);
      }
      v55 = (int32_t *)*((_QWORD *)&v53[1].klass + (int)v54);
      if ( !v55 || !v48 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v48,
              v55[6],
              (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                 v48,
                                                                                                 v55[6],
                                                                                                 (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        if ( overwriter )
        {
          klass = overwriter->klass;
          if ( *(_WORD *)&overwriter->klass->_2.bitflags1 )
          {
            v58 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              ++v58;
              p_offset += 4;
              if ( v58 >= *(unsigned __int16 *)&overwriter->klass->_2.bitflags1 )
                goto LABEL_20;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_20:
            p_method = sub_AF54C0(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL, v56);
          }
          IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                     overwriter,
                     v55,
                     *(_QWORD *)(p_method + 8));
        }
        else
        {
          v62 = v55[7];
          v61 = v55[8];
          v63 = v55[9];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v62, v61, v63, isCheckMaterialHistory, 0LL);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v48,
          v55[6],
          IsOpen & 1,
          (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(syncRoot) = v53->fields._syncRoot;
      if ( (int)++v54 >= (int)syncRoot )
        goto LABEL_29;
    }
LABEL_39:
    sub_B5D69C(list, v49);
  }
LABEL_29:
  if ( !v48 )
    goto LABEL_39;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v48,
         (const MethodInfo_2F03120 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                                                       v48,
                                                                                       (const MethodInfo_2F032C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !list )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v69,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
    (const MethodInfo_23B6414 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v70 = v69;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v70,
            (const MethodInfo_289E6C0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
  {
    if ( LOBYTE(v70.fields.currentValue) )
    {
      v65 = 1;
      v66 = 4;
      goto LABEL_38;
    }
  }
  v65 = 0;
  v66 = 2;
LABEL_38:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v70,
    (const MethodInfo_289E6BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return (v66 == 4) & v65;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsQuestContain(
        CommonReleaseMaster_o *this,
        int32_t questId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  CommonReleaseEntity_array *List; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x9
  CommonReleaseEntity_o *v9; // x13
  unsigned int condType; // w14

  List = CommonReleaseMaster__getList(this, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  if ( List )
  {
    v7 = *(_QWORD *)&List->max_length;
    if ( v7 && (int)v7 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        v9 = List->m_Items[v8];
        if ( !v9 )
          sub_B5D69C(List, v6);
        condType = v9->fields.condType;
        if ( condType <= 0x2E && ((1LL << condType) & 0x400002000002LL) != 0 && v9->fields.condId == questId )
          break;
        if ( (int)++v8 >= (int)v7 )
          goto LABEL_10;
      }
      LOBYTE(List) = 1;
    }
    else
    {
LABEL_10:
      LOBYTE(List) = 0;
    }
  }
  return (char)List;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__TryGetEntity(
        CommonReleaseMaster_o *this,
        CommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E4D65 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&priority);
    byte_42E4D65 = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
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

  if ( (byte_42E4D67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CommonReleaseEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v21, v22, v23);
    byte_42E4D67 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
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
      v28 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (CommonReleaseEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
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
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}