void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214BAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__, method);
    byte_4214BAE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    228,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w23
  __int64 v15; // x10

  if ( (byte_4214BAF & 1) == 0 )
  {
    sub_B0D8A4(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v10);
    byte_4214BAF = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v13 = (int)list;
      v14 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v14,
                                                                                             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v15 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
            && (BoardMessageEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == BoardMessageEntity_TypeInfo
            && HIDWORD(list->fields.items) == warId )
          {
            if ( !v11 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
          }
        }
        if ( ++v14 >= v13 )
          goto LABEL_15;
      }
LABEL_17:
      sub_B0D97C(list);
    }
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  void *Instance; // x0
  BoardMessageReleaseMaster_o *v22; // x23
  int32_t Count; // w0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w24
  int32_t v27; // w25
  void *v28; // x26
  __int64 v29; // x10
  int64_t v30; // x8
  struct BoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v33; // x21
  struct BoardMessageMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4214BB0 & 1) == 0 )
  {
    sub_B0D8A4(&BoardMessageEntity_TypeInfo, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B0D8A4(&Method_System_Comparison_BoardMessageEntity___ctor__, v9);
    sub_B0D8A4(&System_Comparison_BoardMessageEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__, v18);
    sub_B0D8A4(&BoardMessageMaster___c_TypeInfo, v19);
    byte_4214BB0 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoardMessageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  nowTime);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v20 )
      goto LABEL_33;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_33;
    v22 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
              (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v26 = Count;
      v27 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                     v27,
                     (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v28 = Instance;
          v29 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v29
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v22 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v22, *((_DWORD *)Instance + 4), v25);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v30 = *((_QWORD *)v28 + 8);
              if ( v30 >= 1 && v30 > nowTime && *((_QWORD *)v28 + 7) < nowTime )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
              }
            }
          }
        }
        if ( ++v27 >= v26 )
          goto LABEL_21;
      }
LABEL_33:
      sub_B0D97C(Instance);
    }
LABEL_21:
    Instance = BoardMessageMaster___c_TypeInfo;
    if ( (BYTE3(BoardMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoardMessageMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardMessageMaster___c_TypeInfo);
      Instance = BoardMessageMaster___c_TypeInfo;
    }
    static_fields = (struct BoardMessageMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_BoardMessageEntity__TypeInfo,
                                                                            v24,
                                                                            v25);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v33,
        Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_BoardMessageEntity___ctor__);
      v34 = BoardMessageMaster___c_TypeInfo->static_fields;
      v34->__9__4_0 = (struct System_Comparison_BoardMessageEntity__o *)_9__4_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v34->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    if ( !v20 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_o *__fastcall BoardMessageMaster__GetEntity(
        BoardMessageMaster_o *this,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4214BAC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4214BAC = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (BoardMessageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266A024 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__);
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

  if ( (byte_4214BAD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__, entity);
    byte_4214BAD = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211DC5 & 1) == 0 )
  {
    sub_B0D8A4(&BoardMessageMaster___c_TypeInfo, v1);
    byte_4211DC5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BoardMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoardMessageMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}