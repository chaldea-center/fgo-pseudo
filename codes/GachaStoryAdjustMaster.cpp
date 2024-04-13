void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC631 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC631 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    222,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EC62F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      gachaId,
      idx,
      method);
    byte_42EC62F = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


bool __fastcall GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
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
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  StoryGachaAdjustData_o *v64; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x21
  System_Collections_Generic_List_int__o *v72; // x20
  void *v73; // x1
  void *list; // x0
  int32_t v75; // w24
  int32_t v76; // w25
  __int64 v77; // x10
  GachaStoryAdjustMaster___c_c *v78; // x0
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v81; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int size; // w26
  __int64 v90; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v91; // x19
  unsigned int v92; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v93; // x22
  int32_t addCount; // w23
  int32_t eventId; // w25
  int64_t v96; // x24
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  StoryGachaAdjustData_o *v103; // x21
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7

  if ( (byte_42EC632 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)adjustData,
      gachaId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_GachaStoryAdjustEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CondType_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&GachaStoryAdjustEntity_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v46, v47, v48);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v49, v50, v51);
    sub_B5D5C4(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v52, v53, v54);
    sub_B5D5C4(&StoryGachaAdjustData_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v58, v59, v60);
    sub_B5D5C4(&GachaStoryAdjustMaster___c_TypeInfo, v61, v62, v63);
    byte_42EC632 = 1;
  }
  v64 = (StoryGachaAdjustData_o *)sub_B5D694(StoryGachaAdjustData_TypeInfo);
  StoryGachaAdjustData___ctor(v64, 0LL);
  *adjustData = v64;
  sub_B5D560((BattleServantConfConponent_o *)adjustData, (System_Int32_array **)v64, v65, v66, v67, v68, v69, v70);
  v71 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v71,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v72 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v72,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_48;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v75 = (int)list;
    v76 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v76,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v73 = list;
      v77 = *(&GachaStoryAdjustEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v77
        || *(GachaStoryAdjustEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v77 - 8) != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == gachaId )
      {
        if ( !v71 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v71,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
      }
      if ( ++v76 >= v75 )
        goto LABEL_14;
    }
LABEL_48:
    sub_B5D69C(list, v73);
  }
LABEL_14:
  if ( !v71 )
    goto LABEL_48;
  if ( !v71->fields._size )
    return 0;
  v78 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( (BYTE3(GachaStoryAdjustMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v78 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  static_fields = v78->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    }
    v81 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_GachaStoryAdjustEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v81,
      Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_GachaStoryAdjustEntity___ctor__);
    v82 = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    v82->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v82->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v71,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  size = v71->fields._size;
  if ( size >= 1 )
  {
    v90 = 0LL;
    v91 = 0LL;
    v92 = v71->fields._size;
    while ( 1 )
    {
      if ( v92 <= (unsigned int)v90 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v93 = v71->fields._items->m_Items[v90];
      if ( !v93 )
        goto LABEL_48;
      eventId = v93->fields.eventId;
      addCount = v93->fields.addCount;
      v96 = *((int *)&v93->fields + 5);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      list = (void *)CondType__IsOpen(eventId, addCount, v96, 0, 0LL);
      if ( ((unsigned __int8)list & 1) == 0 )
        goto LABEL_38;
      if ( !v72 )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        v72,
        v93->fields.targetId,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( v91 )
        break;
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v93;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v93,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
LABEL_39:
      if ( (int)v90 + 1 >= size )
        goto LABEL_43;
      v92 = v71->fields._size;
      ++v90;
      v91 = v93;
    }
    if ( v91->fields.missionConditionDetailId < v93->fields.missionConditionDetailId )
    {
      list = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      *((_QWORD *)list + 2) = v93;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)list + 16),
        (System_Int32_array **)v93,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
    }
LABEL_38:
    v93 = v91;
    goto LABEL_39;
  }
LABEL_43:
  if ( !v72 )
    goto LABEL_48;
  System_Collections_Generic_List_int___Sort(
    v72,
    (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__);
  v103 = *adjustData;
  list = System_Collections_Generic_List_int___ToArray(
           v72,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v103 )
    goto LABEL_48;
  v103->fields.adjustIds = (struct System_Int32_array *)list;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v103->fields.adjustIds,
    (System_Int32_array **)list,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
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

  if ( (byte_42EC630 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__,
      (_DWORD)entity,
      gachaId,
      *(_QWORD *)&idx);
    byte_42EC630 = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E56EF & 1) == 0 )
  {
    sub_B5D5C4(&GachaStoryAdjustMaster___c_TypeInfo, v1, v2, v3);
    byte_42E56EF = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(GachaStoryAdjustMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaStoryAdjustMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.idx - b->fields.idx;
}