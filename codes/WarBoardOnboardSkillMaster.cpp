void __fastcall WarBoardOnboardSkillMaster___ctor(WarBoardOnboardSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E75CE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E75CE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    357,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardOnboardSkillEntity_o *__fastcall WarBoardOnboardSkillMaster__GetEntity(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E75CC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__,
      stageId,
      idx,
      method);
    byte_42E75CC = 1;
  }
  PK = WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardOnboardSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *__fastcall WarBoardOnboardSkillMaster__GetEntityList(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
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
  int32_t v43; // w24
  int32_t v44; // w25
  __int64 v45; // x10
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v48; // x21
  struct WarBoardOnboardSkillMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42E75D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      stageId,
      timing,
      *(_QWORD *)&turn);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_WarBoardOnboardSkillEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_WarBoardOnboardSkillEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, v30, v31, v32);
    sub_B5D5C4(&WarBoardOnboardSkillMaster___c_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&WarBoardOnboardSkillEntity_TypeInfo, v36, v37, v38);
    byte_42E75D0 = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
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
        v45 = *(&WarBoardOnboardSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v45
          && *(WarBoardOnboardSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) == WarBoardOnboardSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == stageId
          && *((_DWORD *)list + 9) == timing
          && *((_DWORD *)list + 10) == turn )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__);
        }
      }
      if ( ++v44 >= v43 )
        goto LABEL_16;
    }
LABEL_26:
    sub_B5D69C(list, v40);
  }
LABEL_16:
  list = WarBoardOnboardSkillMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardOnboardSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardOnboardSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardOnboardSkillMaster___c_TypeInfo);
    list = WarBoardOnboardSkillMaster___c_TypeInfo;
  }
  static_fields = (struct WarBoardOnboardSkillMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_WarBoardOnboardSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v48,
      Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_WarBoardOnboardSkillEntity___ctor__);
    v49 = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    v49->__9__4_0 = (struct System_Comparison_WarBoardOnboardSkillEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v39 )
    goto LABEL_26;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
  return (System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *)v39;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardOnboardSkillMaster__IsOnBoardSkillExist(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_42E75CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      stageId,
      timing,
      *(_QWORD *)&turn);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&WarBoardOnboardSkillEntity_TypeInfo, v12, v13, v14);
    byte_42E75CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&stageId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v17 = Count;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v18,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = *(&WarBoardOnboardSkillEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (WarBoardOnboardSkillEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == WarBoardOnboardSkillEntity_TypeInfo
        && LODWORD(Item[1].klass) == stageId
        && HIDWORD(Item[2].klass) == timing
        && LODWORD(Item[2].monitor) == turn )
      {
        return 1;
      }
    }
    if ( ++v18 >= v17 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardOnboardSkillMaster__TryGetEntity(
        WarBoardOnboardSkillMaster_o *this,
        WarBoardOnboardSkillEntity_o **entity,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E75CD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__,
      (_DWORD)entity,
      stageId,
      *(_QWORD *)&idx);
    byte_42E75CD = 1;
  }
  PK = WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
}


void __fastcall WarBoardOnboardSkillMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FA3 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardOnboardSkillMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5FA3 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardOnboardSkillMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardOnboardSkillMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall WarBoardOnboardSkillMaster___c___ctor(WarBoardOnboardSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardOnboardSkillMaster___c___GetEntityList_b__4_0(
        WarBoardOnboardSkillMaster___c_o *this,
        WarBoardOnboardSkillEntity_o *a,
        WarBoardOnboardSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.idx - b->fields.idx;
}