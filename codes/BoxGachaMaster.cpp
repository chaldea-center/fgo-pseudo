void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353EBD & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
    byte_4353EBD = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    123,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *__fastcall BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  BoxGachaEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_4353EBF & 1) == 0 )
  {
    sub_B70694(&BoxGachaEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_4353EBF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     list,
                                     v10,
                                     (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (BoxGachaEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == BoxGachaEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.slot == slot )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B7076C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


System_Int32_array *__fastcall BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  const MethodInfo *v6; // x2
  System_Int32_array *result; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  System_Int32_array *v10; // x19
  unsigned int v11; // w22
  __int64 v12; // x8
  int32_t v13; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  signed __int64 size; // x8
  unsigned __int64 v17; // x22
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v20; // x21
  struct BoxGachaMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w8
  __int64 v29; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x8
  __int64 v31; // x0

  if ( (byte_4353EC0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_ItemEntity___ctor__);
    sub_B70694(&System_Comparison_ItemEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ItemEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_ItemEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ItemEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ItemEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ItemEntity__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ItemEntity__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__);
    sub_B70694(&BoxGachaMaster___c_TypeInfo);
    byte_4353EC0 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  result = (System_Int32_array *)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v6);
  if ( !result )
    goto LABEL_42;
  max_length = result->max_length;
  v10 = result;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
LABEL_43:
        v31 = sub_B70798(result);
        sub_B70738(v31, 0LL);
      }
      v12 = *(_QWORD *)&v10->m_Items[2 * v11 + 1];
      if ( !v12 )
        break;
      if ( *(_DWORD *)(v12 + 48) == 6 )
      {
        if ( !v5 )
          break;
        v13 = *(_DWORD *)(v12 + 52);
        result = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                         v5,
                                         v13,
                                         (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)result & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v5,
            v13,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_13;
    }
LABEL_42:
    sub_B7076C(result, v8);
  }
LABEL_13:
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)result,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v5 )
    goto LABEL_42;
  LODWORD(size) = v5->fields._size;
  if ( (int)size >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_42;
      result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v5->fields._items->m_Items[v17 + 1],
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( result )
      {
        if ( !v15 )
          goto LABEL_42;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)result,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
      }
      size = v5->fields._size;
    }
    while ( (__int64)++v17 < size );
  }
  result = (System_Int32_array *)BoxGachaMaster___c_TypeInfo;
  if ( (BYTE3(BoxGachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    result = (System_Int32_array *)BoxGachaMaster___c_TypeInfo;
  }
  static_fields = *(struct BoxGachaMaster___c_StaticFields **)&result->m_Items[39];
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (result->m_Items[69] & 0x4000000) != 0 && !result->m_Items[49] )
    {
      j_il2cpp_runtime_class_init_0(result);
      static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v20,
      Method_BoxGachaMaster___c__GetEventItemList_b__3_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_ItemEntity___ctor__);
    v21 = BoxGachaMaster___c_TypeInfo->static_fields;
    v21->__9__3_0 = (struct System_Comparison_ItemEntity__o *)_9__3_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v21->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v15 )
    goto LABEL_42;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v15->fields._size);
  v28 = v15->fields._size;
  if ( v28 >= 1 )
  {
    v29 = 0LL;
    while ( 1 )
    {
      if ( v28 <= (unsigned int)v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v30 = v15->fields._items->m_Items[v29];
      if ( !v30 || !result )
        goto LABEL_42;
      if ( (unsigned int)v29 >= result->max_length )
        goto LABEL_43;
      result->m_Items[v29 + 1] = v30->fields.missionTargetId;
      v28 = v15->fields._size;
      if ( (int)++v29 >= v28 )
        return result;
    }
  }
  return result;
}


BoxGachaEntity_array *__fastcall BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v14; // x21
  struct BoxGachaMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4353EBE & 1) == 0 )
  {
    sub_B70694(&BoxGachaEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Comparison_BoxGachaEntity___ctor__);
    sub_B70694(&System_Comparison_BoxGachaEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
    sub_B70694(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__);
    sub_B70694(&BoxGachaMaster___c_TypeInfo);
    byte_4353EBE = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v11 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(BoxGachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == BoxGachaEntity_TypeInfo
          && *((_DWORD *)list + 5) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B7076C(list, v6);
  }
LABEL_14:
  list = BoxGachaMaster___c_TypeInfo;
  if ( (BYTE3(BoxGachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    list = BoxGachaMaster___c_TypeInfo;
  }
  static_fields = (struct BoxGachaMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v14,
      Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BoxGachaEntity___ctor__);
    v15 = BoxGachaMaster___c_TypeInfo->static_fields;
    v15->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)_9__1_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v15->__9__1_0,
      (System_Int32_array **)_9__1_0,
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
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434ED4D & 1) == 0 )
  {
    sub_B70694(&BoxGachaMaster___c_TypeInfo);
    byte_434ED4D = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaMaster___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall BoxGachaMaster___c___ctor(BoxGachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BoxGachaMaster___c___GetEventItemList_b__3_0(
        BoxGachaMaster___c_o *this,
        ItemEntity_o *a,
        ItemEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}