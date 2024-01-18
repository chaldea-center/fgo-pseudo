void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B00D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_418B00D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    221,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418B00B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_418B00B = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_Collections_Generic_List_int__o *v34; // x20
  void *v35; // x1
  void *list; // x0
  int32_t v37; // w24
  int32_t v38; // w25
  __int64 v39; // x10
  GachaStoryAdjustMaster___c_c *v40; // x0
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v43; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int size; // w26
  __int64 v52; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x19
  unsigned int v54; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x22
  int32_t addCount; // w23
  int32_t eventId; // w25
  int64_t v58; // x24
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  StoryGachaAdjustData_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  if ( (byte_418B00E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, adjustData);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_GachaStoryAdjustEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v9);
    sub_B2C35C(&CondType_TypeInfo, v10);
    sub_B2C35C(&GachaStoryAdjustEntity_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B2C35C(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v22);
    sub_B2C35C(&StoryGachaAdjustData_TypeInfo, v23);
    sub_B2C35C(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v24);
    sub_B2C35C(&GachaStoryAdjustMaster___c_TypeInfo, v25);
    byte_418B00E = 1;
  }
  v26 = (StoryGachaAdjustData_o *)sub_B2C42C(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v26, 0LL);
  *adjustData = v26;
  sub_B2C2F8((BattleServantConfConponent_o *)adjustData, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v34 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_48;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v37 = (int)list;
    v38 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v38,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v35 = list;
      v39 = *(&GachaStoryAdjustEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v39
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v39 - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == gachaId )
      {
        if ( !v33 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v33,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
      }
      if ( ++v38 >= v37 )
        goto LABEL_14;
    }
LABEL_48:
    sub_B2C434(list, v35);
  }
LABEL_14:
  if ( !v33 )
    goto LABEL_48;
  if ( !v33->fields._size )
    return 0;
  v40 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( (BYTE3(GachaStoryAdjustMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v40 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v43,
      Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_GachaStoryAdjustEntity___ctor__);
    v44 = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    v44->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v44->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v33,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  size = v33->fields._size;
  if ( size >= 1 )
  {
    v52 = 0LL;
    v53 = 0LL;
    v54 = v33->fields._size;
    while ( 1 )
    {
      if ( v54 <= (unsigned int)v52 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v55 = v33->fields._items->m_Items[v52];
      if ( !v55 )
        goto LABEL_48;
      eventId = v55->fields.eventId;
      addCount = v55->fields.addCount;
      v58 = *((int *)&v55->fields + 5);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = (void *)CondType__IsOpen(eventId, addCount, v58, 0, 0LL);
      if ( ((unsigned __int8)list & 1) == 0 )
        goto LABEL_38;
      if ( !v34 )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        v34,
        v55->fields.targetId,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( v53 )
        break;
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v55;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v55,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
LABEL_39:
      if ( (int)v52 + 1 >= size )
        goto LABEL_43;
      v54 = v33->fields._size;
      ++v52;
      v53 = v55;
    }
    if ( v53->fields.missionConditionDetailId < v55->fields.missionConditionDetailId )
    {
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v55;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v55,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
LABEL_38:
    v55 = v53;
    goto LABEL_39;
  }
LABEL_43:
  if ( !v34 )
    goto LABEL_48;
  System_Collections_Generic_List_int___Sort(
    v34,
    (const MethodInfo_2F68F18 *)Method_System_Collections_Generic_List_int__Sort__);
  v65 = *adjustData;
  list = System_Collections_Generic_List_int___ToArray(
           v34,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v65 )
    goto LABEL_48;
  v65->fields.adjustIds = (struct System_Int32_array *)list;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v65->fields.adjustIds,
    (System_Int32_array **)list,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
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

  if ( (byte_418B00C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_418B00C = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841EC & 1) == 0 )
  {
    sub_B2C35C(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_41841EC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.idx - b->fields.idx;
}