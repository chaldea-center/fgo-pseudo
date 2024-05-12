void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C905 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
    byte_438C905 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    158,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C903 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
    byte_438C903 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                            PK,
                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GuideMaster__TryGetEntity(
        GuideMaster_o *this,
        GuideEntity_o **entity,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438C904 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
    byte_438C904 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


GuideEntity_array *__fastcall GuideMaster__getDataListByType(
        GuideMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct GuideMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct GuideMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438C906 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_GuideEntity___ctor__);
    sub_B775C4(&System_Comparison_GuideEntity__TypeInfo);
    sub_B775C4(&GuideEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GuideEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GuideEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_GuideEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_GuideEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GuideEntity__TypeInfo);
    sub_B775C4(&Method_GuideMaster___c__getDataListByType_b__3_0__);
    sub_B775C4(&GuideMaster___c_TypeInfo);
    byte_438C906 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v11 = *(&GuideEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(GuideEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == GuideEntity_TypeInfo
          && *((_DWORD *)list + 4) == type )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GuideEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B7769C(list, v6);
  }
LABEL_14:
  list = GuideMaster___c_TypeInfo;
  if ( (BYTE3(GuideMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    list = GuideMaster___c_TypeInfo;
  }
  static_fields = (struct GuideMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = GuideMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v14,
      Method_GuideMaster___c__getDataListByType_b__3_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_GuideEntity___ctor__);
    v15 = GuideMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_GuideEntity__o *)_9__3_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  GuideEntity_array *DataListByType; // x0
  __int64 v6; // x8
  GuideEntity_array *v7; // x19
  __int64 v8; // x24
  GuideEntity_o *v9; // x20
  int64_t UserId; // x0
  __int64 v11; // x1
  int64_t v12; // x21
  int32_t condQuestPhase; // w22
  int32_t condQuestId; // w23
  __int64 v16; // x0

  if ( (byte_438C907 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438C907 = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0LL;
  v6 = *(_QWORD *)&DataListByType->max_length;
  v7 = DataListByType;
  if ( !v6 || (int)v6 < 1 )
    return 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= (unsigned int)v6 )
    {
      v16 = sub_B776C8(DataListByType);
      sub_B77668(v16, 0LL);
    }
    v9 = v7->m_Items[v8];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v9 )
      sub_B7769C(UserId, v11);
    v12 = UserId;
    condQuestId = v9->fields.condQuestId;
    condQuestPhase = v9->fields.condQuestPhase;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(v12, condQuestId, condQuestPhase, -1, 0, 0LL);
    if ( ((unsigned __int8)DataListByType & 1) != 0 || !v9->fields.condQuestId )
      break;
    LODWORD(v6) = v7->max_length;
    if ( (int)++v8 >= (int)v6 )
      return 0LL;
  }
  return v9;
}


void __fastcall GuideMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct GuideMaster___c_StaticFields *static_fields; // x0

  if ( (byte_438892F & 1) == 0 )
  {
    sub_B775C4(&GuideMaster___c_TypeInfo);
    byte_438892F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(GuideMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = GuideMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GuideMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall GuideMaster___c___ctor(GuideMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GuideMaster___c___getDataListByType_b__3_0(
        GuideMaster___c_o *this,
        GuideEntity_o *a,
        GuideEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}