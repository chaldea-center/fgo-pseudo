void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFEA5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__);
    byte_42AFEA5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    229,
    (const MethodInfo_23E268C *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__);
}


BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x1
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42AFEA6 & 1) == 0 )
  {
    sub_B52984(&BoardMessageEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    byte_42AFEA6 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v8 = (int)list;
      v9 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v9,
                                                                                             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v7 = list;
          v10 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
            && (BoardMessageEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == BoardMessageEntity_TypeInfo
            && HIDWORD(list->fields.items) == warId )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
          }
        }
        if ( ++v9 >= v8 )
          goto LABEL_15;
      }
LABEL_17:
      sub_B52A5C(list, v7);
    }
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  void *Instance; // x0
  __int64 v9; // x1
  BoardMessageReleaseMaster_o *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  const MethodInfo *v14; // x2
  void *v15; // x26
  __int64 v16; // x10
  int64_t v17; // x8
  struct BoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v20; // x21
  struct BoardMessageMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42AFEA7 & 1) == 0 )
  {
    sub_B52984(&BoardMessageEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_BoardMessageEntity___ctor__);
    sub_B52984(&System_Comparison_BoardMessageEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__);
    sub_B52984(&BoardMessageMaster___c_TypeInfo);
    byte_42AFEA7 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v7 )
      goto LABEL_33;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_33;
    v10 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
              (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v12 = Count;
      v13 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                     v13,
                     (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v15 = Instance;
          v16 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v16
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v16 - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v10 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v10, *((_DWORD *)Instance + 4), v14);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v17 = *((_QWORD *)v15 + 8);
              if ( v17 >= 1 && v17 > nowTime && *((_QWORD *)v15 + 7) < nowTime )
              {
                if ( !v7 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v7,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
              }
            }
          }
        }
        if ( ++v13 >= v12 )
          goto LABEL_21;
      }
LABEL_33:
      sub_B52A5C(Instance, v9);
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
      v20 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v20,
        Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_BoardMessageEntity___ctor__);
      v21 = BoardMessageMaster___c_TypeInfo->static_fields;
      v21->__9__4_0 = (struct System_Comparison_BoardMessageEntity__o *)_9__4_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v21->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( !v7 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_o *__fastcall BoardMessageMaster__GetEntity(
        BoardMessageMaster_o *this,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AFEA3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__);
    byte_42AFEA3 = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (BoardMessageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23E2728 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__);
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

  if ( (byte_42AFEA4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__);
    byte_42AFEA4 = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD667 & 1) == 0 )
  {
    sub_B52984(&BoardMessageMaster___c_TypeInfo);
    byte_42AD667 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoardMessageMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}