void __fastcall WarBoardOnboardSkillMaster___ctor(WarBoardOnboardSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186548 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__, method);
    byte_4186548 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    356,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardOnboardSkillEntity_o *__fastcall WarBoardOnboardSkillMaster__GetEntity(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186546 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_4186546 = 1;
  }
  PK = WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardOnboardSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *__fastcall WarBoardOnboardSkillMaster__GetEntityList(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  void *v20; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t v24; // w25
  __int64 v25; // x10
  struct WarBoardOnboardSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v28; // x21
  struct WarBoardOnboardSkillMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_418654A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_System_Comparison_WarBoardOnboardSkillEntity___ctor__, v10);
    sub_B2C35C(&System_Comparison_WarBoardOnboardSkillEntity__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo, v15);
    sub_B2C35C(&Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__, v16);
    sub_B2C35C(&WarBoardOnboardSkillMaster___c_TypeInfo, v17);
    sub_B2C35C(&WarBoardOnboardSkillEntity_TypeInfo, v18);
    byte_418654A = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardOnboardSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = list;
        v25 = *(&WarBoardOnboardSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v25
          && *(WarBoardOnboardSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v25 - 8) == WarBoardOnboardSkillEntity_TypeInfo
          && *((_DWORD *)list + 4) == stageId
          && *((_DWORD *)list + 9) == timing
          && *((_DWORD *)list + 10) == turn )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Add__);
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_16;
    }
LABEL_26:
    sub_B2C434(list, v20);
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
    v28 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_WarBoardOnboardSkillEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v28,
      Method_WarBoardOnboardSkillMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_WarBoardOnboardSkillEntity___ctor__);
    v29 = WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
    v29->__9__4_0 = (struct System_Comparison_WarBoardOnboardSkillEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v19 )
    goto LABEL_26;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_WarBoardOnboardSkillEntity__Sort__);
  return (System_Collections_Generic_List_WarBoardOnboardSkillEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardOnboardSkillMaster__IsOnBoardSkillExist(
        WarBoardOnboardSkillMaster_o *this,
        int32_t stageId,
        int32_t timing,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v16; // x10

  if ( (byte_4186549 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&WarBoardOnboardSkillEntity_TypeInfo, v10);
    byte_4186549 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&stageId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v13 = Count;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v14,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v16 = *(&WarBoardOnboardSkillEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (WarBoardOnboardSkillEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == WarBoardOnboardSkillEntity_TypeInfo
        && LODWORD(Item[1].klass) == stageId
        && HIDWORD(Item[2].klass) == timing
        && LODWORD(Item[2].monitor) == turn )
      {
        return 1;
      }
    }
    if ( ++v14 >= v13 )
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

  if ( (byte_4186547 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__,
      entity);
    byte_4186547 = 1;
  }
  PK = WarBoardOnboardSkillEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardOnboardSkillMaster__WarBoardOnboardSkillEntity__string__TryGetEntity__);
}


void __fastcall WarBoardOnboardSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41866F4 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardOnboardSkillMaster___c_TypeInfo, v1);
    byte_41866F4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardOnboardSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardOnboardSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
  return a->fields.idx - b->fields.idx;
}