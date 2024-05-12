void __fastcall QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438FD02 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
    byte_438FD02 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    269,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
}


int32_t __fastcall QuestPickupMaster__GetPriority(QuestPickupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int64_t Time; // x19
  const MethodInfo *v6; // x2
  QuestPickupEntity_array *List; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  int *v11; // x11

  if ( (byte_438FD04 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438FD04 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  List = QuestPickupMaster__getList(this, questId, v6);
  if ( !List )
LABEL_16:
    sub_B7769C(List, v8);
  v9 = *(_QWORD *)&List->max_length;
  if ( !v9 || (int)v9 < 1 )
    return 0;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (int *)List->m_Items[v10];
    if ( !v11 )
      goto LABEL_16;
    if ( Time >= v11[5] && Time <= v11[6] )
      return v11[7];
    if ( (int)++v10 >= (int)v9 )
      return 0;
  }
}


QuestPickupEntity_array *__fastcall QuestPickupMaster__getList(
        QuestPickupMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_438FD03 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
    sub_B775C4(&QuestPickupEntity_TypeInfo);
    byte_438FD03 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestPickupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&QuestPickupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (QuestPickupEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == QuestPickupEntity_TypeInfo
        && LODWORD(list->fields.items) == questId )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestPickupEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7769C(list, v6);
  return (QuestPickupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}