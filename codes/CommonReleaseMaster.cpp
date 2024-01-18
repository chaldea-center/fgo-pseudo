void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4183E9A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__, method);
    byte_4183E9A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    287,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4183E98 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4183E98 = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsContainCondType(
        CommonReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x10
  int monitor_high; // w8

  if ( (byte_4183E9C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&CommonReleaseEntity_TypeInfo, v8);
    byte_4183E9C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&targetId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v10,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v12) )
        {
          return 1;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v10;
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
  System_Collections_Generic_Dictionary_int__bool__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x21
  unsigned int v28; // w27
  int32_t *v29; // x23
  __int64 v30; // x3
  CommonReleaseCondOverwriter_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v35; // w24
  int32_t v36; // w26
  int64_t v37; // x25
  char IsOpen; // w0
  char v39; // w19
  int v40; // w20
  __int64 v42; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v44; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4183E9D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&CommonReleaseCondOverwriter_TypeInfo, v9);
    sub_B2C35C(&CondType_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__, v21);
    byte_4183E9D = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( (id & 0x80000000) != 0 )
    return 0;
  v22 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v22,
    (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__getList(
                                                                                       this,
                                                                                       id,
                                                                                       v25);
  if ( !list )
    goto LABEL_39;
  syncRoot = list->fields._syncRoot;
  v27 = list;
  if ( !syncRoot )
    return 0;
  if ( (int)syncRoot >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)syncRoot )
      {
        v42 = sub_B2C460(list);
        sub_B2C400(v42, 0LL);
      }
      v29 = (int32_t *)*((_QWORD *)&v27[1].klass + (int)v28);
      if ( !v29 || !v22 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v22,
              v29[6],
              (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                 v22,
                                                                                                 v29[6],
                                                                                                 (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        if ( overwriter )
        {
          klass = overwriter->klass;
          if ( *(_WORD *)&overwriter->klass->_2.bitflags1 )
          {
            v32 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              ++v32;
              p_offset += 4;
              if ( v32 >= *(unsigned __int16 *)&overwriter->klass->_2.bitflags1 )
                goto LABEL_20;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_20:
            p_method = sub_AC5258(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL, v30);
          }
          IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                     overwriter,
                     v29,
                     *(_QWORD *)(p_method + 8));
        }
        else
        {
          v36 = v29[7];
          v35 = v29[8];
          v37 = v29[9];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v36, v35, v37, isCheckMaterialHistory, 0LL);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v22,
          v29[6],
          IsOpen & 1,
          (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(syncRoot) = v27->fields._syncRoot;
      if ( (int)++v28 >= (int)syncRoot )
        goto LABEL_29;
    }
LABEL_39:
    sub_B2C434(list, v23);
  }
LABEL_29:
  if ( !v22 )
    goto LABEL_39;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v22,
         (const MethodInfo_2E1C808 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                                                       v22,
                                                                                       (const MethodInfo_2E1C9B0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !list )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v43,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
    (const MethodInfo_23FFE80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v44,
            (const MethodInfo_2567558 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
  {
    if ( LOBYTE(v44.fields.currentValue) )
    {
      v39 = 1;
      v40 = 4;
      goto LABEL_38;
    }
  }
  v39 = 0;
  v40 = 2;
LABEL_38:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v44,
    (const MethodInfo_2567554 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return (v40 == 4) & v39;
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
          sub_B2C434(List, v6);
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

  if ( (byte_4183E99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__, entity);
    byte_4183E99 = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_4183E9B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CommonReleaseEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v10);
    byte_4183E9B = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (CommonReleaseEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}