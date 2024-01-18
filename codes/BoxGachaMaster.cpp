void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41896E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method);
    byte_41896E2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    122,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *__fastcall BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  BoxGachaEntity_o *result; // x0
  __int64 v14; // x10

  if ( (byte_41896E4 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    byte_41896E4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     list,
                                     v12,
                                     (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (BoxGachaEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == BoxGachaEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.slot == slot )
        {
          return result;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_int__o *v24; // x20
  const MethodInfo *v25; // x2
  System_Int32_array *result; // x0
  __int64 v27; // x1
  signed int max_length; // w8
  System_Int32_array *v29; // x19
  unsigned int v30; // w22
  __int64 v31; // x8
  int32_t v32; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19
  signed __int64 size; // x8
  unsigned __int64 v36; // x22
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v39; // x21
  struct BoxGachaMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int v47; // w8
  __int64 v48; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x8
  __int64 v50; // x0

  if ( (byte_41896E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_ItemEntity___ctor__, *(_QWORD *)&event_id);
    sub_B2C35C(&System_Comparison_ItemEntity__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B2C35C(&System_Collections_Generic_List_ItemEntity__TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v22);
    sub_B2C35C(&BoxGachaMaster___c_TypeInfo, v23);
    byte_41896E5 = 1;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  result = (System_Int32_array *)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v25);
  if ( !result )
    goto LABEL_42;
  max_length = result->max_length;
  v29 = result;
  if ( max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      if ( v30 >= max_length )
      {
LABEL_43:
        v50 = sub_B2C460(result);
        sub_B2C400(v50, 0LL);
      }
      v31 = *(_QWORD *)&v29->m_Items[2 * v30 + 1];
      if ( !v31 )
        break;
      if ( *(_DWORD *)(v31 + 48) == 6 )
      {
        if ( !v24 )
          break;
        v32 = *(_DWORD *)(v31 + 52);
        result = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                         v24,
                                         v32,
                                         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)result & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v24,
            v32,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = v29->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_13;
    }
LABEL_42:
    sub_B2C434(result, v27);
  }
LABEL_13:
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)result,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v24 )
    goto LABEL_42;
  LODWORD(size) = v24->fields._size;
  if ( (int)size >= 1 )
  {
    v36 = 0LL;
    do
    {
      if ( v36 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_42;
      result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v24->fields._items->m_Items[v36 + 1],
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( result )
      {
        if ( !v34 )
          goto LABEL_42;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v34,
          (EventMissionProgressRequest_Argument_ProgressData_o *)result,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
      }
      size = v24->fields._size;
    }
    while ( (__int64)++v36 < size );
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
    v39 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v39,
      Method_BoxGachaMaster___c__GetEventItemList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_ItemEntity___ctor__);
    v40 = BoxGachaMaster___c_TypeInfo->static_fields;
    v40->__9__3_0 = (struct System_Comparison_ItemEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v40->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v34 )
    goto LABEL_42;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v34,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v34->fields._size);
  v47 = v34->fields._size;
  if ( v47 >= 1 )
  {
    v48 = 0LL;
    while ( 1 )
    {
      if ( v47 <= (unsigned int)v48 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v49 = v34->fields._items->m_Items[v48];
      if ( !v49 || !result )
        goto LABEL_42;
      if ( (unsigned int)v48 >= result->max_length )
        goto LABEL_43;
      result->m_Items[v48 + 1] = v49->fields.missionTargetId;
      v47 = v34->fields._size;
      if ( (int)++v48 >= v47 )
        return result;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_array *__fastcall BoxGachaMaster__getBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
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
  void *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v25; // x21
  struct BoxGachaMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_41896E3 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Comparison_BoxGachaEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_BoxGachaEntity__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v13);
    sub_B2C35C(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v14);
    sub_B2C35C(&BoxGachaMaster___c_TypeInfo, v15);
    byte_41896E3 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = list;
        v22 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(BoxGachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == BoxGachaEntity_TypeInfo
          && *((_DWORD *)list + 5) == eventId )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v17);
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
    v25 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v25,
      Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BoxGachaEntity___ctor__);
    v26 = BoxGachaMaster___c_TypeInfo->static_fields;
    v26->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184EAA & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaMaster___c_TypeInfo, v1);
    byte_4184EAA = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}