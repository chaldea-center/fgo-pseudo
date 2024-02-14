void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215303 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__, method);
    byte_4215303 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    20,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4215301 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_4215301 = 1;
  }
  PK = SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266A024 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_array *__fastcall SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
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
  int32_t v18; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x10
  struct SpotImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v24; // x21
  struct SpotImageMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4215304 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spot_id);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_SpotImageEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_SpotImageEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotImageEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_SpotImageEntity__TypeInfo, v12);
    sub_B0D8A4(&SpotImageEntity_TypeInfo, v13);
    sub_B0D8A4(&Method_SpotImageMaster___c__GetImageList_b__3_0__, v14);
    sub_B0D8A4(&SpotImageMaster___c_TypeInfo, v15);
    byte_4215304 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SpotImageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&spot_id,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v18,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v21 = *(&SpotImageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
        && *(SpotImageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == SpotImageEntity_TypeInfo
        && *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v16 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SpotImageEntity__Add__);
      }
    }
    list = this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_25;
  }
  list = SpotImageMaster___c_TypeInfo;
  if ( (BYTE3(SpotImageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SpotImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SpotImageMaster___c_TypeInfo);
    list = SpotImageMaster___c_TypeInfo;
  }
  static_fields = (struct SpotImageMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = SpotImageMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_SpotImageEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v24,
      Method_SpotImageMaster___c__GetImageList_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_SpotImageEntity___ctor__);
    v25 = SpotImageMaster___c_TypeInfo->static_fields;
    v25->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v16 )
LABEL_25:
    sub_B0D97C(list);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
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

  if ( (byte_4215302 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__, entity);
    byte_4215302 = 1;
  }
  PK = SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SpotImageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211718 & 1) == 0 )
  {
    sub_B0D8A4(&SpotImageMaster___c_TypeInfo, v1);
    byte_4211718 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SpotImageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SpotImageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SpotImageMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}