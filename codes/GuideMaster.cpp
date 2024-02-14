void __fastcall GuideMaster___ctor(GuideMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215C93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__, method);
    byte_4215C93 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    157,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_GuideMaster__GuideEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__GetEntity(
        GuideMaster_o *this,
        int32_t guideType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4215C91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__, *(_QWORD *)&guideType);
    byte_4215C91 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&priority);
  return (GuideEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                            PK,
                            (const MethodInfo_266A024 *)Method_DataMasterBase_GuideMaster__GuideEntity__string__GetEntity__);
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

  if ( (byte_4215C92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__, entity);
    byte_4215C92 = 1;
  }
  PK = GuideEntity__CreatePK(guideType, priority, *(const MethodInfo **)&guideType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_GuideMaster__GuideEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_array *__fastcall GuideMaster__getDataListByType(
        GuideMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  void *list; // x0
  int32_t Count; // w0
  void *v19; // x1
  __int64 v20; // x2
  int32_t v21; // w22
  int32_t v22; // w23
  __int64 v23; // x10
  struct GuideMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v26; // x21
  struct GuideMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4215C94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_GuideEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_GuideEntity__TypeInfo, v7);
    sub_B0D8A4(&GuideEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GuideEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GuideEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GuideEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GuideEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_GuideEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_GuideMaster___c__getDataListByType_b__3_0__, v14);
    sub_B0D8A4(&GuideMaster___c_TypeInfo, v15);
    byte_4215C94 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GuideEntity__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GuideEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v22,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        v23 = *(&GuideEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v23
          && *(GuideEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v23 - 8) == GuideEntity_TypeInfo
          && *((_DWORD *)list + 4) == type )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GuideEntity__Add__);
        }
      }
      if ( ++v22 >= v21 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B0D97C(list);
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_GuideEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v26,
      Method_GuideMaster___c__getDataListByType_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_GuideEntity___ctor__);
    v27 = GuideMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Comparison_GuideEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_GuideEntity__Sort__);
  return (GuideEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GuideEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GuideEntity_o *__fastcall GuideMaster__getGuideData(GuideMaster_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  GuideEntity_array *DataListByType; // x0
  __int64 v7; // x8
  GuideEntity_array *v8; // x19
  __int64 v9; // x24
  GuideEntity_o *v10; // x20
  int64_t UserId; // x0
  int64_t v12; // x21
  int32_t condQuestPhase; // w22
  int32_t condQuestId; // w23
  __int64 v16; // x0

  if ( (byte_4215C95 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&type);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    byte_4215C95 = 1;
  }
  DataListByType = GuideMaster__getDataListByType(this, type, method);
  if ( !DataListByType )
    return 0LL;
  v7 = *(_QWORD *)&DataListByType->max_length;
  v8 = DataListByType;
  if ( !v7 || (int)v7 < 1 )
    return 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= (unsigned int)v7 )
    {
      v16 = sub_B0D9A8(DataListByType);
      sub_B0D948(v16, 0LL);
    }
    v10 = v8->m_Items[v9];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v10 )
      sub_B0D97C(UserId);
    v12 = UserId;
    condQuestId = v10->fields.condQuestId;
    condQuestPhase = v10->fields.condQuestPhase;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    DataListByType = (GuideEntity_array *)CondType__IsQuestPhaseClear(v12, condQuestId, condQuestPhase, -1, 0, 0LL);
    if ( ((unsigned __int8)DataListByType & 1) != 0 || !v10->fields.condQuestId )
      break;
    LODWORD(v7) = v8->max_length;
    if ( (int)++v9 >= (int)v7 )
      return 0LL;
  }
  return v10;
}


void __fastcall GuideMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct GuideMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4210F77 & 1) == 0 )
  {
    sub_B0D8A4(&GuideMaster___c_TypeInfo, v1);
    byte_4210F77 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(GuideMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = GuideMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GuideMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}