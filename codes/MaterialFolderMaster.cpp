void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41881B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, method);
    byte_41881B7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    172,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MaterialFolderEntity_array *__fastcall MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x1
  void *list; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x24
  __int64 v18; // x10
  int32_t v19; // w25

  if ( (byte_41881B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v10);
    sub_B2C35C(&MaterialFolderEntity_TypeInfo, v11);
    byte_41881B8 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v16,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v18 = *(&MaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v18
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          v19 = *((_DWORD *)list + 9);
          if ( v19 < 1 )
            goto LABEL_16;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_25746984(v19, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_16:
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              v17,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
          }
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B2C434(list, v13);
  }
LABEL_19:
  if ( !v12 )
    goto LABEL_21;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}