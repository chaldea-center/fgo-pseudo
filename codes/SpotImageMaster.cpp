void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FADBF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__, method);
    byte_40FADBF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    20,
    (const MethodInfo_266F73C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FADBD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_40FADBD = 1;
  }
  PK = SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_array *__fastcall SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
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
  int32_t v20; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v27; // x10
  SpotImageMaster___c_c *v28; // x0
  struct SpotImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v31; // x21
  struct SpotImageMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FADC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spot_id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Comparison_SpotImageEntity___ctor__, v8);
    sub_B16FFC(&System_Comparison_SpotImageEntity__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotImageEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_SpotImageEntity__TypeInfo, v14);
    sub_B16FFC(&SpotImageEntity_TypeInfo, v15);
    sub_B16FFC(&Method_SpotImageMaster___c__GetImageList_b__3_0__, v16);
    sub_B16FFC(&SpotImageMaster___c_TypeInfo, v17);
    byte_40FADC0 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SpotImageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&spot_id,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  v20 = 0;
  while ( v20 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v25 )
      goto LABEL_25;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v25,
                                                                    v20,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v27 = *(&SpotImageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
        && (SpotImageEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == SpotImageEntity_TypeInfo
        && Item->fields.missionTargetId == spot_id )
      {
        if ( !v18 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SpotImageEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v20;
    if ( !list )
      goto LABEL_25;
  }
  v28 = SpotImageMaster___c_TypeInfo;
  if ( (BYTE3(SpotImageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo);
    v28 = SpotImageMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_SpotImageEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v31,
      Method_SpotImageMaster___c__GetImageList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_SpotImageEntity___ctor__);
    v32 = SpotImageMaster___c_TypeInfo->static_fields;
    v32->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !v18 )
LABEL_25:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotImageMaster__TryGetEntity(
        SpotImageMaster_o *this,
        SpotImageEntity_o **entity,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FADBE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__, entity);
    byte_40FADBE = 1;
  }
  PK = SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7A52 & 1) == 0 )
  {
    sub_B16FFC(&SpotImageMaster___c_TypeInfo, v1);
    byte_40F7A52 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SpotImageMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SpotImageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall SpotImageMaster___c___ctor(SpotImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SpotImageMaster___c___GetImageList_b__3_0(
        SpotImageMaster___c_o *this,
        SpotImageEntity_o *a,
        SpotImageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}