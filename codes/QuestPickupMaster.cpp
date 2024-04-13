void __fastcall QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED258 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42ED258 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    269,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
}


int32_t __fastcall QuestPickupMaster__GetPriority(QuestPickupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x19
  const MethodInfo *v7; // x2
  QuestPickupEntity_array *List; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  int *v12; // x11

  if ( (byte_42ED25A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, questId, (_DWORD)method, v3);
    byte_42ED25A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  List = QuestPickupMaster__getList(this, questId, v7);
  if ( !List )
LABEL_16:
    sub_B5D69C(List, v9);
  v10 = *(_QWORD *)&List->max_length;
  if ( !v10 || (int)v10 < 1 )
    return 0;
  v11 = 0LL;
  while ( 1 )
  {
    v12 = (int *)List->m_Items[v11];
    if ( !v12 )
      goto LABEL_16;
    if ( Time >= v12[5] && Time <= v12[6] )
      return v12[7];
    if ( (int)++v11 >= (int)v10 )
      return 0;
  }
}


QuestPickupEntity_array *__fastcall QuestPickupMaster__getList(
        QuestPickupMaster_o *this,
        int32_t questId,
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

  if ( (byte_42ED259 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&QuestPickupEntity_TypeInfo, v21, v22, v23);
    byte_42ED259 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
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
      v28 = *(&QuestPickupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (QuestPickupEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == QuestPickupEntity_TypeInfo
        && LODWORD(list->fields.items) == questId )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestPickupEntity__Add__);
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
  return (QuestPickupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}