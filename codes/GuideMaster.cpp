void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC142 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__, method);
    byte_40FC142 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    157,
    (const MethodInfo_266F73C *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FC140 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__, *(_QWORD *)&guideType);
    byte_40FC140 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                            PK,
                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_40FC141 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__, entity);
    byte_40FC141 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_array *__fastcall GuideMaster__getDataListByType(
        GuideMaster_o *this,
        int32_t type,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w22
  int32_t v26; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v29; // x10
  GuideMaster___c_c *v30; // x0
  struct GuideMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v33; // x21
  struct GuideMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FC143 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_GuideEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_GuideEntity__TypeInfo, v9);
    sub_B16FFC(&GuideEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GuideEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GuideEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GuideEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GuideEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_GuideEntity__TypeInfo, v15);
    sub_B16FFC(&Method_GuideMaster___c__getDataListByType_b__3_0__, v16);
    sub_B16FFC(&GuideMaster___c_TypeInfo, v17);
    byte_40FC143 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GuideEntity__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v27 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v27,
                                                                      v26,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v29 = *(&GuideEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (GuideEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == GuideEntity_TypeInfo
          && Item->fields.missionTargetId == type )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GuideEntity__Add__);
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v30 = GuideMaster___c_TypeInfo;
  if ( (BYTE3(GuideMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GuideMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GuideMaster___c_TypeInfo);
    v30 = GuideMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = GuideMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_GuideEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v33,
      Method_GuideMaster___c__getDataListByType_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_GuideEntity___ctor__);
    v34 = GuideMaster___c_TypeInfo->static_fields;
    v34->__9__3_0 = (struct System_Comparison_GuideEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v18 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  GuideEntity_array *DataListByType; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  GuideEntity_array *v10; // x19
  __int64 v11; // x24
  GuideEntity_o *v12; // x20
  int64_t UserId; // x0
  int64_t v14; // x21
  int32_t condQuestPhase; // w22
  int32_t condQuestId; // w23

  if ( (byte_40FC144 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FC144 = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0LL;
  v9 = *(_QWORD *)&DataListByType->max_length;
  v10 = DataListByType;
  if ( !v9 || (int)v9 < 1 )
    return 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= (unsigned int)v9 )
    {
      sub_B17100(DataListByType, v7, v8);
      sub_B170A0();
    }
    v12 = v10->m_Items[v11];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v12 )
      sub_B170D4();
    v14 = UserId;
    condQuestId = v12->fields.condQuestId;
    condQuestPhase = v12->fields.condQuestPhase;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(v14, condQuestId, condQuestPhase, -1, 0, 0LL);
    if ( ((unsigned __int8)DataListByType & 1) != 0 || !v12->fields.condQuestId )
      break;
    LODWORD(v9) = v10->max_length;
    if ( (int)++v11 >= (int)v9 )
      return 0LL;
  }
  return v12;
}


void __fastcall GuideMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F68E0 & 1) == 0 )
  {
    sub_B16FFC(&GuideMaster___c_TypeInfo, v1);
    byte_40F68E0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(GuideMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)GuideMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}