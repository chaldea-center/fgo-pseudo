void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7B67 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, method);
    byte_40F7B67 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    172,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MaterialFolderEntity_array *__fastcall MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
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
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x24
  __int64 v22; // x10
  int32_t klass_high; // w25

  if ( (byte_40F7B68 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v12);
    sub_B16FFC(&MaterialFolderEntity_TypeInfo, v13);
    byte_40F7B68 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MaterialFolderEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v19,
               v18,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v22 = *(&MaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (MaterialFolderEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == MaterialFolderEntity_TypeInfo
          && LODWORD(Item[2].klass) == eventId )
        {
          klass_high = HIDWORD(Item[2].klass);
          if ( klass_high < 1 )
            goto LABEL_16;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsQuestClear_25438860(klass_high, -1, 0, 0LL) )
          {
LABEL_16:
            if ( !v14 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              v21,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
          }
        }
      }
      if ( ++v18 >= v17 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_21;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                         (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}