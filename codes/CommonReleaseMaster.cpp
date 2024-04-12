void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC4E4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
    byte_42AC4E4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    288,
    (const MethodInfo_23E268C *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AC4E2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
    byte_42AC4E2 = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsContainCondType(
        CommonReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // x10
  int monitor_high; // w8

  if ( (byte_42AC4E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CommonReleaseEntity_TypeInfo);
    byte_42AC4E6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B52A5C(list, *(_QWORD *)&targetId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v11 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v10) )
        {
          return 1;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
}


bool __fastcall CommonReleaseMaster__IsOpen(
        CommonReleaseMaster_o *this,
        int32_t id,
        CommonReleaseCondOverwriter_o *overwriter,
        bool isCheckMaterialHistory,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v9; // x20
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v12; // x2
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x21
  unsigned int v15; // w27
  int32_t *v16; // x23
  __int64 v17; // x3
  CommonReleaseCondOverwriter_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v22; // w24
  int32_t v23; // w26
  int64_t v24; // x25
  char IsOpen; // w0
  char v26; // w19
  int v27; // w20
  __int64 v29; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AC4E7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&CommonReleaseCondOverwriter_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
    byte_42AC4E7 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( (id & 0x80000000) != 0 )
    return 0;
  v9 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v9,
    (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__getList(
                                                                                       this,
                                                                                       id,
                                                                                       v12);
  if ( !list )
    goto LABEL_39;
  syncRoot = list->fields._syncRoot;
  v14 = list;
  if ( !syncRoot )
    return 0;
  if ( (int)syncRoot >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)syncRoot )
      {
        v29 = sub_B52A88(list);
        sub_B52A28(v29, 0LL);
      }
      v16 = (int32_t *)*((_QWORD *)&v14[1].klass + (int)v15);
      if ( !v16 || !v9 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v9,
              v16[6],
              (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                 v9,
                                                                                                 v16[6],
                                                                                                 (const MethodInfo_2EF80A4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        if ( overwriter )
        {
          klass = overwriter->klass;
          if ( *(_WORD *)&overwriter->klass->_2.bitflags1 )
          {
            v19 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              ++v19;
              p_offset += 4;
              if ( v19 >= *(unsigned __int16 *)&overwriter->klass->_2.bitflags1 )
                goto LABEL_20;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_20:
            p_method = sub_AEB880(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL, v17);
          }
          IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                     overwriter,
                     v16,
                     *(_QWORD *)(p_method + 8));
        }
        else
        {
          v23 = v16[7];
          v22 = v16[8];
          v24 = v16[9];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v23, v22, v24, isCheckMaterialHistory, 0LL);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v9,
          v16[6],
          IsOpen & 1,
          (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(syncRoot) = v14->fields._syncRoot;
      if ( (int)++v15 >= (int)syncRoot )
        goto LABEL_29;
    }
LABEL_39:
    sub_B52A5C(list, v10);
  }
LABEL_29:
  if ( !v9 )
    goto LABEL_39;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v9,
         (const MethodInfo_2EF7D64 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                                                       v9,
                                                                                       (const MethodInfo_2EF7F0C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !list )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v30,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
    (const MethodInfo_25F89D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v31,
            (const MethodInfo_2885FEC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
  {
    if ( LOBYTE(v31.fields.currentValue) )
    {
      v26 = 1;
      v27 = 4;
      goto LABEL_38;
    }
  }
  v26 = 0;
  v27 = 2;
LABEL_38:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v31,
    (const MethodInfo_2885FE8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return (v27 == 4) & v26;
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
          sub_B52A5C(List, v6);
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

  if ( (byte_42AC4E3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
    byte_42AC4E3 = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_42AC4E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CommonReleaseEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_42AC4E5 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (CommonReleaseEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B52A5C(list, v6);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}