void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B41 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
    byte_42B3B41 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    222,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3B3F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
    byte_42B3B3F = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


bool __fastcall GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  StoryGachaAdjustData_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_Collections_Generic_List_int__o *v15; // x20
  void *v16; // x1
  void *list; // x0
  int32_t v18; // w24
  int32_t v19; // w25
  __int64 v20; // x10
  GachaStoryAdjustMaster___c_c *v21; // x0
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v24; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int size; // w26
  __int64 v33; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x19
  unsigned int v35; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x22
  int32_t addCount; // w23
  int32_t eventId; // w25
  int64_t v39; // x24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  StoryGachaAdjustData_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_42B3B42 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_GachaStoryAdjustEntity___ctor__);
    sub_B52984(&System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&GachaStoryAdjustEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
    sub_B52984(&StoryGachaAdjustData_TypeInfo);
    sub_B52984(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__);
    sub_B52984(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_42B3B42 = 1;
  }
  v7 = (StoryGachaAdjustData_o *)sub_B52A54(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v7, 0LL);
  *adjustData = v7;
  sub_B52920((BattleServantConfConponent_o *)adjustData, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v15 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_48;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v18 = (int)list;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v19,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = list;
      v20 = *(&GachaStoryAdjustEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v20
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v20 - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == gachaId )
      {
        if ( !v14 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
      }
      if ( ++v19 >= v18 )
        goto LABEL_14;
    }
LABEL_48:
    sub_B52A5C(list, v16);
  }
LABEL_14:
  if ( !v14 )
    goto LABEL_48;
  if ( !v14->fields._size )
    return 0;
  v21 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( (BYTE3(GachaStoryAdjustMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v21 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v24,
      Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_GachaStoryAdjustEntity___ctor__);
    v25 = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    v25->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v25->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v14,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  size = v14->fields._size;
  if ( size >= 1 )
  {
    v33 = 0LL;
    v34 = 0LL;
    v35 = v14->fields._size;
    while ( 1 )
    {
      if ( v35 <= (unsigned int)v33 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v36 = v14->fields._items->m_Items[v33];
      if ( !v36 )
        goto LABEL_48;
      eventId = v36->fields.eventId;
      addCount = v36->fields.addCount;
      v39 = *((int *)&v36->fields + 5);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = (void *)CondType__IsOpen(eventId, addCount, v39, 0, 0LL);
      if ( ((unsigned __int8)list & 1) == 0 )
        goto LABEL_38;
      if ( !v15 )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        v15,
        v36->fields.targetId,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( v34 )
        break;
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v36;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v36,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
LABEL_39:
      if ( (int)v33 + 1 >= size )
        goto LABEL_43;
      v35 = v14->fields._size;
      ++v33;
      v34 = v36;
    }
    if ( v34->fields.missionConditionDetailId < v36->fields.missionConditionDetailId )
    {
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v36;
      sub_B52920(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v36,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
LABEL_38:
    v36 = v34;
    goto LABEL_39;
  }
LABEL_43:
  if ( !v15 )
    goto LABEL_48;
  System_Collections_Generic_List_int___Sort(
    v15,
    (const MethodInfo_3058ED0 *)Method_System_Collections_Generic_List_int__Sort__);
  v46 = *adjustData;
  list = System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v46 )
    goto LABEL_48;
  v46->fields.adjustIds = (struct System_Int32_array *)list;
  sub_B52920(
    (BattleServantConfConponent_o *)&v46->fields.adjustIds,
    (System_Int32_array **)list,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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

  if ( (byte_42B3B40 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
    byte_42B3B40 = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE37 & 1) == 0 )
  {
    sub_B52984(&GachaStoryAdjustMaster___c_TypeInfo);
    byte_42ACE37 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.idx - b->fields.idx;
}