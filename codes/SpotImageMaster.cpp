void __fastcall SpotImageMaster___ctor(SpotImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B0A77 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
    byte_42B0A77 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    21,
    (const MethodInfo_23E268C *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotImageEntity_o *__fastcall SpotImageMaster__GetEntity(
        SpotImageMaster_o *this,
        int32_t spotId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B0A75 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
    byte_42B0A75 = 1;
  }
  PK = SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&priority);
  return (SpotImageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__GetEntity__);
}


SpotImageEntity_array *__fastcall SpotImageMaster__GetImageList(
        SpotImageMaster_o *this,
        int32_t spot_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10
  struct SpotImageMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v12; // x21
  struct SpotImageMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42B0A78 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_SpotImageEntity___ctor__);
    sub_B52984(&System_Comparison_SpotImageEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SpotImageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_SpotImageEntity__TypeInfo);
    sub_B52984(&SpotImageEntity_TypeInfo);
    sub_B52984(&Method_SpotImageMaster___c__GetImageList_b__3_0__);
    sub_B52984(&SpotImageMaster___c_TypeInfo);
    byte_42B0A78 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SpotImageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SpotImageEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&SpotImageEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v9
        && *(SpotImageEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v9 - 8) == SpotImageEntity_TypeInfo
        && *((_DWORD *)list + 4) == spot_id )
      {
        if ( !v5 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SpotImageEntity__Add__);
      }
    }
    list = this->fields.list;
    ++v8;
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
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_SpotImageEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v12,
      Method_SpotImageMaster___c__GetImageList_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_SpotImageEntity___ctor__);
    v13 = SpotImageMaster___c_TypeInfo->static_fields;
    v13->__9__3_0 = (struct System_Comparison_SpotImageEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v13->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !v5 )
LABEL_25:
    sub_B52A5C(list, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_SpotImageEntity__Sort__);
  return (SpotImageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SpotImageEntity__ToArray__);
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

  if ( (byte_42B0A76 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
    byte_42B0A76 = 1;
  }
  PK = SpotImageEntity__CreatePK(spotId, priority, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_SpotImageMaster__SpotImageEntity__string__TryGetEntity__);
}


void __fastcall SpotImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct SpotImageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ADD5F & 1) == 0 )
  {
    sub_B52984(&SpotImageMaster___c_TypeInfo);
    byte_42ADD5F = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(SpotImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SpotImageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SpotImageMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}