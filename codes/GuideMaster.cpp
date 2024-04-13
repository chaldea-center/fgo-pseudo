void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA488 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA488 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    158,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA486 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__, guideType, priority, method);
    byte_42EA486 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                            PK,
                            (const MethodInfo_23FB260 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_42EA487 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__,
      (_DWORD)entity,
      guideType,
      *(_QWORD *)&priority);
    byte_42EA487 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


GuideEntity_array *__fastcall GuideMaster__getDataListByType(
        GuideMaster_o *this,
        int32_t type,
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  void *v40; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v43; // w22
  int32_t v44; // w23
  __int64 v45; // x10
  struct GuideMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v48; // x21
  struct GuideMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42EA489 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_GuideEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_GuideEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&GuideEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GuideEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GuideEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GuideEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GuideEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_GuideEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_GuideMaster___c__getDataListByType_b__3_0__, v33, v34, v35);
    sub_B5D5C4(&GuideMaster___c_TypeInfo, v36, v37, v38);
    byte_42EA489 = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GuideEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v43 = Count;
    v44 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v44,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v40 = list;
        v45 = *(&GuideEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v45
          && *(GuideEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) == GuideEntity_TypeInfo
          && *((_DWORD *)list + 4) == type )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GuideEntity__Add__);
        }
      }
      if ( ++v44 >= v43 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, v40);
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
    v48 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GuideEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v48,
      Method_GuideMaster___c__getDataListByType_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_GuideEntity___ctor__);
    v49 = GuideMaster___c_TypeInfo->static_fields;
    v49->__9__3_0 = (struct System_Comparison_GuideEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v39 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  GuideEntity_array *DataListByType; // x0
  __int64 v10; // x8
  GuideEntity_array *v11; // x19
  __int64 v12; // x24
  GuideEntity_o *v13; // x20
  int64_t UserId; // x0
  __int64 v15; // x1
  int64_t v16; // x21
  int32_t condQuestPhase; // w22
  int32_t condQuestId; // w23
  __int64 v20; // x0

  if ( (byte_42EA48A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42EA48A = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0LL;
  v10 = *(_QWORD *)&DataListByType->max_length;
  v11 = DataListByType;
  if ( !v10 || (int)v10 < 1 )
    return 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
    {
      v20 = sub_B5D6C8(DataListByType);
      sub_B5D668(v20, 0LL);
    }
    v13 = v11->m_Items[v12];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v13 )
      sub_B5D69C(UserId, v15);
    v16 = UserId;
    condQuestId = v13->fields.condQuestId;
    condQuestPhase = v13->fields.condQuestPhase;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(v16, condQuestId, condQuestPhase, -1, 0, 0LL);
    if ( ((unsigned __int8)DataListByType & 1) != 0 || !v13->fields.condQuestId )
      break;
    LODWORD(v10) = v11->max_length;
    if ( (int)++v12 >= (int)v10 )
      return 0LL;
  }
  return v13;
}


void __fastcall GuideMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct GuideMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E56FB & 1) == 0 )
  {
    sub_B5D5C4(&GuideMaster___c_TypeInfo, v1, v2, v3);
    byte_42E56FB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(GuideMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = GuideMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GuideMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}