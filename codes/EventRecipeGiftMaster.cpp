void __fastcall EventRecipeGiftMaster___ctor(EventRecipeGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BDCC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string___ctor__);
    byte_438BDCC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    382,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeGiftEntity_o *__fastcall EventRecipeGiftMaster__GetEntity(
        EventRecipeGiftMaster_o *this,
        int32_t recipeId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438BDCD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__GetEntity__);
    byte_438BDCD = 1;
  }
  PK = EventRecipeGiftEntity__CreatePK(recipeId, idx, *(const MethodInfo **)&idx);
  return (EventRecipeGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__GetEntity__);
}


EventRecipeGiftEntity_array *__fastcall EventRecipeGiftMaster__GetSortedEntityArray(
        EventRecipeGiftMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct EventRecipeGiftMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct EventRecipeGiftMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438BDCF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventRecipeGiftEntity___ctor__);
    sub_B775C4(&System_Comparison_EventRecipeGiftEntity__TypeInfo);
    sub_B775C4(&EventRecipeGiftEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventRecipeGiftEntity__TypeInfo);
    sub_B775C4(&Method_EventRecipeGiftMaster___c__GetSortedEntityArray_b__3_0__);
    sub_B775C4(&EventRecipeGiftMaster___c_TypeInfo);
    byte_438BDCF = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventRecipeGiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventRecipeGiftEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v11 = *(&EventRecipeGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(EventRecipeGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == EventRecipeGiftEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B7769C(list, v6);
  }
LABEL_14:
  list = EventRecipeGiftMaster___c_TypeInfo;
  if ( (BYTE3(EventRecipeGiftMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRecipeGiftMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRecipeGiftMaster___c_TypeInfo);
    list = EventRecipeGiftMaster___c_TypeInfo;
  }
  static_fields = (struct EventRecipeGiftMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventRecipeGiftMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventRecipeGiftEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v14,
      Method_EventRecipeGiftMaster___c__GetSortedEntityArray_b__3_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventRecipeGiftEntity___ctor__);
    v15 = EventRecipeGiftMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_EventRecipeGiftEntity__o *)_9__3_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__Sort__);
  return (EventRecipeGiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRecipeGiftMaster__TryGetEntity(
        EventRecipeGiftMaster_o *this,
        EventRecipeGiftEntity_o **entity,
        int32_t recipeId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438BDCE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__TryGetEntity__);
    byte_438BDCE = 1;
  }
  PK = EventRecipeGiftEntity__CreatePK(recipeId, idx, *(const MethodInfo **)&recipeId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__TryGetEntity__);
}


void __fastcall EventRecipeGiftMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventRecipeGiftMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388006 & 1) == 0 )
  {
    sub_B775C4(&EventRecipeGiftMaster___c_TypeInfo);
    byte_4388006 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventRecipeGiftMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRecipeGiftMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRecipeGiftMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall EventRecipeGiftMaster___c___ctor(EventRecipeGiftMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRecipeGiftMaster___c___GetSortedEntityArray_b__3_0(
        EventRecipeGiftMaster___c_o *this,
        EventRecipeGiftEntity_o *x,
        EventRecipeGiftEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B7769C(this, x);
  return x->fields.displayOrder - y->fields.displayOrder;
}