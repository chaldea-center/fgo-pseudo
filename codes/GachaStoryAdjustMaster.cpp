void __fastcall GachaStoryAdjustMaster___ctor(GachaStoryAdjustMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB39E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__, method);
    byte_40FB39E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    221,
    (const MethodInfo_266F73C *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaStoryAdjustEntity_o *__fastcall GachaStoryAdjustMaster__GetEntity(
        GachaStoryAdjustMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB39C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_40FB39C = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&idx);
  return (GachaStoryAdjustEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaStoryAdjustMaster__GetValidData(
        GachaStoryAdjustMaster_o *this,
        StoryGachaAdjustData_o **adjustData,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v26; // x1
  StoryGachaAdjustData_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_List_int__o *v43; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w24
  int32_t v51; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v52; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v54; // x10
  GachaStoryAdjustMaster___c_c *v55; // x0
  struct GachaStoryAdjustMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x22
  Il2CppObject *v58; // x23
  struct GachaStoryAdjustMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int size; // w26
  __int64 v67; // x27
  struct GachaStoryAdjustEntity_o *v68; // x19
  unsigned int v69; // w8
  struct GachaStoryAdjustEntity_o *v70; // x22
  int32_t targetId; // w23
  int32_t condType; // w25
  int64_t value; // x24
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  StoryGachaAdjustData_o *v80; // x0
  StoryGachaAdjustData_o *v81; // x0
  StoryGachaAdjustData_o *v82; // x21
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7

  if ( (byte_40FB39F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, adjustData);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_GachaStoryAdjustEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_GachaStoryAdjustEntity__TypeInfo, v10);
    sub_B16FFC(&CondType_TypeInfo, v11);
    sub_B16FFC(&GachaStoryAdjustEntity_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaStoryAdjustEntity__get_Item__, v21);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_B16FFC(&System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo, v23);
    sub_B16FFC(&StoryGachaAdjustData_TypeInfo, v24);
    sub_B16FFC(&Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__, v25);
    sub_B16FFC(&GachaStoryAdjustMaster___c_TypeInfo, v26);
    byte_40FB39F = 1;
  }
  v27 = (StoryGachaAdjustData_o *)sub_B170CC(StoryGachaAdjustData_TypeInfo, adjustData, *(_QWORD *)&gachaId, method, v4);
  StoryGachaAdjustData___ctor(v27, 0LL);
  *adjustData = v27;
  sub_B16F98((BattleServantConfConponent_o *)adjustData, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaStoryAdjustEntity__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity___ctor__);
  v43 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v39,
                                                    v40,
                                                    v41,
                                                    v42);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v50 = Count;
    v51 = 0;
    while ( 1 )
    {
      v52 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v52 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v52,
                                                                      v51,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v46 = Item;
      v54 = *(&GachaStoryAdjustEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v54
        || (GachaStoryAdjustEntity_c *)Item->klass->_2.typeHierarchy[v54 - 1] != GachaStoryAdjustEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == gachaId )
      {
        if ( !v38 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v38,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Add__);
      }
      if ( ++v51 >= v50 )
        goto LABEL_14;
    }
LABEL_48:
    sub_B170D4();
  }
LABEL_14:
  if ( !v38 )
    goto LABEL_48;
  if ( !v38->fields._size )
    return 0;
  v55 = GachaStoryAdjustMaster___c_TypeInfo;
  if ( (BYTE3(GachaStoryAdjustMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaStoryAdjustMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaStoryAdjustMaster___c_TypeInfo);
    v55 = GachaStoryAdjustMaster___c_TypeInfo;
  }
  static_fields = v55->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      static_fields = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_GachaStoryAdjustEntity__TypeInfo,
                                                                          v46,
                                                                          v47,
                                                                          v48,
                                                                          v49);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v58,
      Method_GachaStoryAdjustMaster___c__GetValidData_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_GachaStoryAdjustEntity___ctor__);
    v59 = GachaStoryAdjustMaster___c_TypeInfo->static_fields;
    v59->__9__3_0 = (struct System_Comparison_GachaStoryAdjustEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v59->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v38,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_GachaStoryAdjustEntity__Sort__);
  size = v38->fields._size;
  if ( size >= 1 )
  {
    v67 = 0LL;
    v68 = 0LL;
    v69 = v38->fields._size;
    while ( 1 )
    {
      if ( v69 <= (unsigned int)v67 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v70 = (struct GachaStoryAdjustEntity_o *)v38->fields._items->m_Items[v67];
      if ( !v70 )
        goto LABEL_48;
      condType = v70->fields.condType;
      targetId = v70->fields.targetId;
      value = v70->fields.value;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsOpen(condType, targetId, value, 0, 0LL) )
        goto LABEL_38;
      if ( !v43 )
        goto LABEL_48;
      System_Collections_Generic_List_int___Add(
        v43,
        v70->fields.adjustId,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( v68 )
        break;
      v81 = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      v81->fields.targetEntity = v70;
      sub_B16F98((BattleServantConfConponent_o *)&v81->fields, (System_Int32_array **)v70, v74, v75, v76, v77, v78, v79);
LABEL_39:
      if ( (int)v67 + 1 >= size )
        goto LABEL_43;
      v69 = v38->fields._size;
      ++v67;
      v68 = v70;
    }
    if ( v68->fields.idx < v70->fields.idx )
    {
      v80 = *adjustData;
      if ( !*adjustData )
        goto LABEL_48;
      v80->fields.targetEntity = v70;
      sub_B16F98((BattleServantConfConponent_o *)&v80->fields, (System_Int32_array **)v70, v74, v75, v76, v77, v78, v79);
    }
LABEL_38:
    v70 = v68;
    goto LABEL_39;
  }
LABEL_43:
  if ( !v43 )
    goto LABEL_48;
  System_Collections_Generic_List_int___Sort(
    v43,
    (const MethodInfo_2F12410 *)Method_System_Collections_Generic_List_int__Sort__);
  v82 = *adjustData;
  v83 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                 v43,
                                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v82 )
    goto LABEL_48;
  v82->fields.adjustIds = (struct System_Int32_array *)v83;
  sub_B16F98((BattleServantConfConponent_o *)&v82->fields.adjustIds, v83, v84, v85, v86, v87, v88, v89);
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

  if ( (byte_40FB39D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__, entity);
    byte_40FB39D = 1;
  }
  PK = GachaStoryAdjustEntity__CreatePK(gachaId, idx, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_GachaStoryAdjustMaster__GachaStoryAdjustEntity__string__TryGetEntity__);
}


void __fastcall GachaStoryAdjustMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F68D6 & 1) == 0 )
  {
    sub_B16FFC(&GachaStoryAdjustMaster___c_TypeInfo, v1);
    byte_40F68D6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(GachaStoryAdjustMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)GachaStoryAdjustMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.idx - b->fields.idx;
}