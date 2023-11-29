void __fastcall QuestPickupMaster___ctor(QuestPickupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD54A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__, method);
    byte_40FD54A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    268,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_QuestPickupMaster__QuestPickupEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPickupMaster__GetPriority(QuestPickupMaster_o *this, int32_t questId, const MethodInfo *method)
{
  int64_t Time; // x19
  const MethodInfo *v6; // x2
  QuestPickupEntity_array *List; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  int *v10; // x11

  if ( (byte_40FD54C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&questId);
    byte_40FD54C = 1;
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
    sub_B170D4();
  v8 = *(_QWORD *)&List->max_length;
  if ( !v8 || (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (int *)List->m_Items[v9];
    if ( !v10 )
      goto LABEL_16;
    if ( Time >= v10[5] && Time <= v10[6] )
      return v10[7];
    if ( (int)++v9 >= (int)v8 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
QuestPickupEntity_array *__fastcall QuestPickupMaster__getList(
        QuestPickupMaster_o *this,
        int32_t questId,
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

  if ( (byte_40FD54B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPickupEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPickupEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_QuestPickupEntity__TypeInfo, v11);
    sub_B16FFC(&QuestPickupEntity_TypeInfo, v12);
    byte_40FD54B = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestPickupEntity__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestPickupEntity___ctor__);
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
      v18 = *(&QuestPickupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (QuestPickupEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == QuestPickupEntity_TypeInfo
        && Item->fields.missionTargetId == questId )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestPickupEntity__Add__);
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
  return (QuestPickupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestPickupEntity__ToArray__);
}