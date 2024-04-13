void __fastcall BoardMessageMaster___ctor(BoardMessageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E862A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E862A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    229,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string___ctor__);
}


BoardMessageEntity_array *__fastcall BoardMessageMaster__GetData(
        BoardMessageMaster_o *this,
        int32_t warId,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v26; // x1
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42E862B & 1) == 0 )
  {
    sub_B5D5C4(&BoardMessageEntity_TypeInfo, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v21, v22, v23);
    byte_42E862B = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( (int)list >= 1 )
    {
      v27 = (int)list;
      v28 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                             list,
                                                                                             v28,
                                                                                             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v26 = list;
          v29 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
            && (BoardMessageEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == BoardMessageEntity_TypeInfo
            && HIDWORD(list->fields.items) == warId )
          {
            if ( !v24 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
          }
        }
        if ( ++v28 >= v27 )
          goto LABEL_15;
      }
LABEL_17:
      sub_B5D69C(list, v26);
    }
  }
LABEL_15:
  if ( !v24 )
    goto LABEL_17;
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


BoardMessageEntity_array *__fastcall BoardMessageMaster__GetDataCondCheck(
        BoardMessageMaster_o *this,
        int32_t warId,
        int64_t nowTime,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x19
  void *Instance; // x0
  __int64 v48; // x1
  BoardMessageReleaseMaster_o *v49; // x23
  int32_t Count; // w0
  int32_t v51; // w24
  int32_t v52; // w25
  const MethodInfo *v53; // x2
  void *v54; // x26
  __int64 v55; // x10
  int64_t v56; // x8
  struct BoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v59; // x21
  struct BoardMessageMaster___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7

  if ( (byte_42E862C & 1) == 0 )
  {
    sub_B5D5C4(&BoardMessageEntity_TypeInfo, warId, nowTime, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Comparison_BoardMessageEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Comparison_BoardMessageEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BoardMessageReleaseMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoardMessageEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoardMessageEntity__Sort__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoardMessageEntity___ctor__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_BoardMessageEntity__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__, v40, v41, v42);
    sub_B5D5C4(&BoardMessageMaster___c_TypeInfo, v43, v44, v45);
    byte_42E862C = 1;
  }
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoardMessageEntity___ctor__);
  if ( warId <= 0 )
  {
    if ( !v46 )
      goto LABEL_33;
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BoardMessageReleaseMaster___);
    if ( !this->fields.list )
      goto LABEL_33;
    v49 = (BoardMessageReleaseMaster_o *)Instance;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
              (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v51 = Count;
      v52 = 0;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          break;
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                     v52,
                     (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Instance )
        {
          v54 = Instance;
          v55 = *(&BoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v55
            && *(BoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v55 - 8) == BoardMessageEntity_TypeInfo
            && *((_DWORD *)Instance + 5) == warId )
          {
            if ( !v49 )
              break;
            Instance = (void *)BoardMessageReleaseMaster__IsOpen(v49, *((_DWORD *)Instance + 4), v53);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v56 = *((_QWORD *)v54 + 8);
              if ( v56 >= 1 && v56 > nowTime && *((_QWORD *)v54 + 7) < nowTime )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoardMessageEntity__Add__);
              }
            }
          }
        }
        if ( ++v52 >= v51 )
          goto LABEL_21;
      }
LABEL_33:
      sub_B5D69C(Instance, v48);
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
      v59 = (Il2CppObject *)static_fields->__9;
      _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BoardMessageEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__4_0,
        v59,
        Method_BoardMessageMaster___c__GetDataCondCheck_b__4_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_BoardMessageEntity___ctor__);
      v60 = BoardMessageMaster___c_TypeInfo->static_fields;
      v60->__9__4_0 = (struct System_Comparison_BoardMessageEntity__o *)_9__4_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v60->__9__4_0,
        (System_Int32_array **)_9__4_0,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    if ( !v46 )
      goto LABEL_33;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v46,
      (System_Comparison_T__o *)_9__4_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BoardMessageEntity__Sort__);
  }
  return (BoardMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoardMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BoardMessageEntity_o *__fastcall BoardMessageMaster__GetEntity(
        BoardMessageMaster_o *this,
        int32_t id,
        int32_t warId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8628 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__, id, warId, method);
    byte_42E8628 = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&warId);
  return (BoardMessageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__GetEntity__);
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

  if ( (byte_42E8629 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&warId);
    byte_42E8629 = 1;
  }
  PK = BoardMessageEntity__CreatePK(id, warId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_BoardMessageMaster__BoardMessageEntity__string__TryGetEntity__);
}


void __fastcall BoardMessageMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BoardMessageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E1E & 1) == 0 )
  {
    sub_B5D5C4(&BoardMessageMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5E1E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoardMessageMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}