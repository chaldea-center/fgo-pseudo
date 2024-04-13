void __fastcall EventRecipeGiftMaster___ctor(EventRecipeGiftMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8ECA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E8ECA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    382,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRecipeGiftEntity_o *__fastcall EventRecipeGiftMaster__GetEntity(
        EventRecipeGiftMaster_o *this,
        int32_t recipeId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8ECB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__GetEntity__,
      recipeId,
      idx,
      method);
    byte_42E8ECB = 1;
  }
  PK = EventRecipeGiftEntity__CreatePK(recipeId, idx, *(const MethodInfo **)&idx);
  return (EventRecipeGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__GetEntity__);
}


EventRecipeGiftEntity_array *__fastcall EventRecipeGiftMaster__GetSortedEntityArray(
        EventRecipeGiftMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int32_t v43; // w22
  int32_t v44; // w23
  __int64 v45; // x10
  struct EventRecipeGiftMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v48; // x21
  struct EventRecipeGiftMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42E8ECD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventRecipeGiftEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventRecipeGiftEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventRecipeGiftEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeGiftEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_EventRecipeGiftEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_EventRecipeGiftMaster___c__GetSortedEntityArray_b__3_0__, v33, v34, v35);
    sub_B5D5C4(&EventRecipeGiftMaster___c_TypeInfo, v36, v37, v38);
    byte_42E8ECD = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRecipeGiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRecipeGiftEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
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
        v45 = *(&EventRecipeGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v45
          && *(EventRecipeGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) == EventRecipeGiftEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__Add__);
        }
      }
      if ( ++v44 >= v43 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, v40);
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
    v48 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRecipeGiftEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v48,
      Method_EventRecipeGiftMaster___c__GetSortedEntityArray_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventRecipeGiftEntity___ctor__);
    v49 = EventRecipeGiftMaster___c_TypeInfo->static_fields;
    v49->__9__3_0 = (struct System_Comparison_EventRecipeGiftEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v39 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__Sort__);
  return (EventRecipeGiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRecipeGiftEntity__ToArray__);
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

  if ( (byte_42E8ECC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__TryGetEntity__,
      (_DWORD)entity,
      recipeId,
      *(_QWORD *)&idx);
    byte_42E8ECC = 1;
  }
  PK = EventRecipeGiftEntity__CreatePK(recipeId, idx, *(const MethodInfo **)&recipeId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventRecipeGiftMaster__EventRecipeGiftEntity__string__TryGetEntity__);
}


void __fastcall EventRecipeGiftMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRecipeGiftMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5651 & 1) == 0 )
  {
    sub_B5D5C4(&EventRecipeGiftMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5651 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRecipeGiftMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRecipeGiftMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRecipeGiftMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x);
  return x->fields.displayOrder - y->fields.displayOrder;
}