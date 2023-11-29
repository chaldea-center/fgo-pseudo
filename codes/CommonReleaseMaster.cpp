void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F65D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__, method);
    byte_40F65D1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    287,
    (const MethodInfo_266F73C *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F65CF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40F65CF = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x10
  int monitor_high; // w8

  if ( (byte_40F65D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CommonReleaseEntity_TypeInfo, v8);
    byte_40F65D3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B170D4();
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v14 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v13) )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  const MethodInfo *v24; // x2
  CommonReleaseEntity_array *Item; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x8
  CommonReleaseEntity_array *v29; // x21
  unsigned int v30; // w27
  int32_t *v31; // x23
  CommonReleaseCondOverwriter_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v36; // w24
  int32_t v37; // w26
  int64_t v38; // x25
  char IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  char v41; // w19
  int v42; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F65D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&CommonReleaseCondOverwriter_TypeInfo, v9);
    sub_B16FFC(&CondType_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__, v21);
    byte_40F65D4 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( (id & 0x80000000) != 0 )
    return 0;
  v22 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&id,
                                                                overwriter,
                                                                isCheckMaterialHistory,
                                                                method);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v22,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  Item = CommonReleaseMaster__getList(this, id, v24);
  if ( !Item )
    goto LABEL_39;
  v28 = *(_QWORD *)&Item->max_length;
  v29 = Item;
  if ( !v28 )
    return 0;
  if ( (int)v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v28 )
      {
        sub_B17100(Item, v26, v27);
        sub_B170A0();
      }
      v31 = (int32_t *)v29->m_Items[v30];
      if ( !v31 || !v22 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v22,
              v31[6],
              (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (Item = (CommonReleaseEntity_array *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                  v22,
                                                  v31[6],
                                                  (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)Item & 1) != 0) )
      {
        if ( overwriter )
        {
          klass = overwriter->klass;
          if ( *(_WORD *)&overwriter->klass->_2.bitflags1 )
          {
            v33 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              ++v33;
              p_offset += 4;
              if ( v33 >= *(unsigned __int16 *)&overwriter->klass->_2.bitflags1 )
                goto LABEL_20;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_20:
            p_method = sub_AAFEF8(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
          }
          IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                     overwriter,
                     v31,
                     *(_QWORD *)(p_method + 8));
        }
        else
        {
          v37 = v31[7];
          v36 = v31[8];
          v38 = v31[9];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v37, v36, v38, isCheckMaterialHistory, 0LL);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v22,
          v31[6],
          IsOpen & 1,
          (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(v28) = v29->max_length;
      if ( (int)++v30 >= (int)v28 )
        goto LABEL_29;
    }
LABEL_39:
    sub_B170D4();
  }
LABEL_29:
  if ( !v22 )
    goto LABEL_39;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v22,
         (const MethodInfo_2DD527C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  Values = System_Collections_Generic_Dictionary_int__bool___get_Values(
             v22,
             (const MethodInfo_2DD5424 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !Values )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v44,
    Values,
    (const MethodInfo_2278C18 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v45 = v44;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v45,
            (const MethodInfo_2725088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
  {
    if ( LOBYTE(v45.fields.currentValue) )
    {
      v41 = 1;
      v42 = 4;
      goto LABEL_38;
    }
  }
  v41 = 0;
  v42 = 2;
LABEL_38:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v45,
    (const MethodInfo_2725084 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return (v42 == 4) & v41;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsQuestContain(
        CommonReleaseMaster_o *this,
        int32_t questId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  CommonReleaseEntity_array *List; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  CommonReleaseEntity_o *v8; // x13
  unsigned int condType; // w14

  List = CommonReleaseMaster__getList(this, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  if ( List )
  {
    v6 = *(_QWORD *)&List->max_length;
    if ( v6 && (int)v6 >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        v8 = List->m_Items[v7];
        if ( !v8 )
          sub_B170D4();
        condType = v8->fields.condType;
        if ( condType <= 0x2E && ((1LL << condType) & 0x400002000002LL) != 0 && v8->fields.condId == questId )
          break;
        if ( (int)++v7 >= (int)v6 )
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

  if ( (byte_40F65D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__, entity);
    byte_40F65D0 = 1;
  }
  PK = CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40F65D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CommonReleaseEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v12);
    byte_40F65D2 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CommonReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&id,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_17;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v16,
                                                                    v15,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&CommonReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == CommonReleaseEntity_TypeInfo
        && Item->fields.missionTargetId == id )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}