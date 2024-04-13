void __fastcall MaterialFolderMaster___ctor(MaterialFolderMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC372 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EC372 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    173,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_MaterialFolderMaster__MaterialFolderEntity__int___ctor__);
}


MaterialFolderEntity_array *__fastcall MaterialFolderMaster__getFoldersWithEventID(
        MaterialFolderMaster_o *this,
        int32_t eventId,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  void *list; // x0
  int32_t v30; // w22
  int32_t v31; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x24
  __int64 v33; // x10
  int32_t v34; // w25

  if ( (byte_42EC373 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialFolderEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_MaterialFolderEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&MaterialFolderEntity_TypeInfo, v24, v25, v26);
    byte_42EC373 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MaterialFolderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MaterialFolderEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = (int)list;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v31,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v33 = *(&MaterialFolderEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v33
          && *(MaterialFolderEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v33 - 8) == MaterialFolderEntity_TypeInfo
          && *((_DWORD *)list + 8) == eventId )
        {
          v34 = *((_DWORD *)list + 9);
          if ( v34 < 1 )
            goto LABEL_16;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          list = (void *)CondType__IsQuestClear_25877652(v34, -1, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_16:
            if ( !v27 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              v32,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MaterialFolderEntity__Add__);
          }
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(list, v28);
  }
LABEL_19:
  if ( !v27 )
    goto LABEL_21;
  return (MaterialFolderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_MaterialFolderEntity__ToArray__);
}