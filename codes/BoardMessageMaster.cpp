void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB0BF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__, method);
    byte_40FB0BF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    228,
    (const MethodInfo_266F73C *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
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
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FB0C0 & 1) == 0 )
  {
    sub_B16FFC(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v12);
    byte_40FB0C0 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = Count;
      v17 = 0;
      while ( 1 )
      {
        v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v18 )
          break;
        Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                        v18,
                                                                        v17,
                                                                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v20 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
            && (BoardMessageEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == BoardMessageEntity_TypeInfo
            && Item->fields.missionConditionDetailId == warId )
          {
            if ( !v13 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              Item,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
          }
        }
        if ( ++v17 >= v16 )
          goto LABEL_15;
      }
LABEL_17:
      sub_B170D4();
    }
  }
LABEL_15:
  if ( !v13 )
    goto LABEL_17;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BoardMessageReleaseMaster_o *v24; // x23
  int32_t Count; // w0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w24
  int32_t v31; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t *Item; // x0
  int32_t *v34; // x26
  __int64 v35; // x10
  int64_t v36; // x8
  BoardMessageMaster___c_c *v37; // x0
  struct BoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v40; // x21
  struct BoardMessageMaster___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_40FB0C1 & 1) == 0 )
  {
    sub_B16FFC(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_System_Comparison_BoardMessageEntity___ctor__, v10);
    sub_B16FFC(&System_Comparison_BoardMessageEntity__TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__, v19);
    sub_B16FFC(&BoardMessageMaster___c_TypeInfo, v20);
    byte_40FB0C1 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  nowTime,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v21 )
      goto LABEL_33;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_33;
    v24 = (BoardMessageReleaseMaster_o *)MasterData_WarQuestSelectionMaster;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v30 = Count;
      v31 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            list,
                            v31,
                            (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v34 = Item;
          v35 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v35
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v35 - 8) == BoardMessageEntity_TypeInfo
            && Item[5] == warId )
          {
            if ( !v24 )
              break;
            if ( BoardMessageReleaseMaster__IsOpen(v24, Item[4], v27) )
            {
              v36 = *((_QWORD *)v34 + 8);
              if ( v36 >= 1 && v36 > nowTime && *((_QWORD *)v34 + 7) < nowTime )
              {
                if ( !v21 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
              }
            }
          }
        }
        if ( ++v31 >= v30 )
          goto LABEL_21;
      }
LABEL_33:
      sub_B170D4();
    }
LABEL_21:
    v37 = BoardMessageMaster___c_TypeInfo;
    if ( (BYTE3(BoardMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      v37 = BoardMessageMaster___c_TypeInfo;
    }
    static_fields = v37->static_fields;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      }
      v40 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_BoardMessageEntity__TypeInfo,
                                                                            v26,
                                                                            v27,
                                                                            v28,
                                                                            v29);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v40,
        Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_BoardMessageEntity___ctor__);
      v41 = BoardMessageMaster___c_TypeInfo->static_fields;
      v41->__9__4_0 = (struct System_Comparison_BoardMessageEntity__o *)_9__4_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v41->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    if ( !v21 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v21,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_o *__fastcall BoardMessageMaster__GetEntity(
        BoardMessageMaster_o *this,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB0BD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FB0BD = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (BoardMessageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266F7D8 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoardMessageMaster__TryGetEntity(
        BoardMessageMaster_o *this,
        BoardMessageEntity_o **entity,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FB0BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__, entity);
    byte_40FB0BE = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F708E & 1) == 0 )
  {
    sub_B16FFC(&BoardMessageMaster___c_TypeInfo, v1);
    byte_40F708E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BoardMessageMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BoardMessageMaster___c___ctor(BoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoardMessageMaster___c___GetDataCondCheck_b__4_0(
        BoardMessageMaster___c_o *this,
        BoardMessageEntity_o *a,
        BoardMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}