void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B37BB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
    byte_42B37BB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    173,
    (const MethodInfo_23E223C *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


MaterialFolderEntity_array *__fastcall MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10
  int32_t v12; // w25

  if ( (byte_42B37BC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
    sub_B52984(&MaterialFolderEntity_TypeInfo);
    byte_42B37BC = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v9,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v11 = *(&MaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          v12 = *((_DWORD *)list + 9);
          if ( v12 < 1 )
            goto LABEL_16;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_25987760(v12, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_16:
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v10,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
          }
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B52A5C(list, v6);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}