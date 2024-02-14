void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4218084 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_4218084 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    221,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4218082 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4218082 = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  StoryGachaAdjustData_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_int__o *v38; // x20
  void *list; // x0
  void *v40; // x1
  __int64 v41; // x2
  int32_t v42; // w24
  int32_t v43; // w25
  __int64 v44; // x10
  GachaStoryAdjustMaster___c_c *v45; // x0
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v48; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int size; // w26
  __int64 v57; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v58; // x19
  unsigned int v59; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x22
  int32_t addCount; // w23
  int32_t eventId; // w25
  int64_t v63; // x24
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  StoryGachaAdjustData_o *v70; // x21
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7

  if ( (byte_4218085 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, adjustData);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_GachaStoryAdjustEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v9);
    sub_B0D8A4(&CondType_TypeInfo, v10);
    sub_B0D8A4(&GachaStoryAdjustEntity_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v22);
    sub_B0D8A4(&StoryGachaAdjustData_TypeInfo, v23);
    sub_B0D8A4(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v24);
    sub_B0D8A4(&GachaStoryAdjustMaster___c_TypeInfo, v25);
    byte_4218085 = 1;
  }
  v26 = (StoryGachaAdjustData_o *)sub_B0D974(StoryGachaAdjustData_TypeInfo, adjustData, *(_QWORD *)&gachaId);
  StoryGachaAdjustData___ctor(v26, 0LL);
  *adjustData = v26;
  sub_B0D840((BattleServantConfConponent_o *)adjustData, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v38 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v36, v37);
  System_Collections_Generic_List_int____ctor(
    v38,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_48;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v42 = (int)list;
    v43 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v43,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v40 = list;
      v44 = *(&GachaStoryAdjustEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v44
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v44 - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == gachaId )
      {
        if ( !v35 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
      }
      if ( ++v43 >= v42 )
        goto LABEL_14;
    }
LABEL_48:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v35 )
    goto LABEL_48;
  if ( !v35->fields._size )
    return 0;
  v45 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( (BYTE3(GachaStoryAdjustMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v45 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_GachaStoryAdjustEntity__TypeInfo,
                                                                          v40,
                                                                          v41);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v48,
      Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_GachaStoryAdjustEntity___ctor__);
    v49 = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    v49->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v49->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  size = v35->fields._size;
  if ( size >= 1 )
  {
    v57 = 0LL;
    v58 = 0LL;
    v59 = v35->fields._size;
    while ( 1 )
    {
      if ( v59 <= (unsigned int)v57 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v60 = v35->fields._items->m_Items[v57];
      if ( !v60 )
        goto LABEL_48;
      eventId = v60->fields.eventId;
      addCount = v60->fields.addCount;
      v63 = *((int *)&v60->fields + 5);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = (void *)CondType__IsOpen(eventId, addCount, v63, 0, 0LL);
      if ( ((unsigned __int8)list & 1) == 0 )
        goto LABEL_38;
      if ( !v38 )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        v38,
        v60->fields.targetId,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      if ( v58 )
        break;
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v60;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v60,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
LABEL_39:
      if ( (int)v57 + 1 >= size )
        goto LABEL_43;
      v59 = v35->fields._size;
      ++v57;
      v58 = v60;
    }
    if ( v58->fields.missionConditionDetailId < v60->fields.missionConditionDetailId )
    {
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v60;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v60,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
LABEL_38:
    v60 = v58;
    goto LABEL_39;
  }
LABEL_43:
  if ( !v38 )
    goto LABEL_48;
  System_Collections_Generic_List_int___Sort(
    v38,
    (const MethodInfo_2FB1E20 *)Method_System_Collections_Generic_List_int__Sort__);
  v70 = *adjustData;
  list = System_Collections_Generic_List_int___ToArray(
           v38,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v70 )
    goto LABEL_48;
  v70->fields.adjustIds = (struct System_Int32_array *)list;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v70->fields.adjustIds,
    (System_Int32_array **)list,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  if ( !*adjustData )
    goto LABEL_48;
  return (*adjustData)->fields.targetEntity != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaStoryAdjustMaster__TryGetEntity(
        GachaStoryAdjustMaster_o *this,
        GachaStoryAdjustEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4218083 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_4218083 = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4210F6B & 1) == 0 )
  {
    sub_B0D8A4(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_4210F6B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(GachaStoryAdjustMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall GachaStoryAdjustMaster___c___ctor(GachaStoryAdjustMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaStoryAdjustMaster___c___GetValidData_b__3_0(
        GachaStoryAdjustMaster___c_o *this,
        GachaStoryAdjustEntity_o *a,
        GachaStoryAdjustEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.idx - b->fields.idx;
}