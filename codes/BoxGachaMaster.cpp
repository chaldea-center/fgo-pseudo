void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216351 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method);
    byte_4216351 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    122,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
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

  if ( (byte_4216353 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    byte_4216353 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                     (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_B0D97C(list);
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
  signed int max_length; // w8
  System_Int32_array *v28; // x19
  unsigned int v29; // w22
  __int64 v30; // x8
  int32_t v31; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  signed __int64 size; // x8
  unsigned __int64 v39; // x22
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v42; // x21
  struct BoxGachaMaster___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int v50; // w8
  __int64 v51; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x8
  __int64 v53; // x0

  if ( (byte_4216354 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_ItemEntity___ctor__, *(_QWORD *)&event_id);
    sub_B0D8A4(&System_Comparison_ItemEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B0D8A4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v22);
    sub_B0D8A4(&BoxGachaMaster___c_TypeInfo, v23);
    byte_4216354 = 1;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&event_id,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  result = (System_Int32_array *)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v25);
  if ( !result )
    goto LABEL_42;
  max_length = result->max_length;
  v28 = result;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
      {
LABEL_43:
        v53 = sub_B0D9A8(result);
        sub_B0D948(v53, 0LL);
      }
      v30 = *(_QWORD *)&v28->m_Items[2 * v29 + 1];
      if ( !v30 )
        break;
      if ( *(_DWORD *)(v30 + 48) == 6 )
      {
        if ( !v24 )
          break;
        v31 = *(_DWORD *)(v30 + 52);
        result = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                         v24,
                                         v31,
                                         (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)result & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v24,
            v31,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = v28->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_13;
    }
LABEL_42:
    sub_B0D97C(result);
  }
LABEL_13:
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)result,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v24 )
    goto LABEL_42;
  LODWORD(size) = v24->fields._size;
  if ( (int)size >= 1 )
  {
    v39 = 0LL;
    do
    {
      if ( v39 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_42;
      result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v24->fields._items->m_Items[v39 + 1],
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( result )
      {
        if ( !v35 )
          goto LABEL_42;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          (EventMissionProgressRequest_Argument_ProgressData_o *)result,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
      }
      size = v24->fields._size;
    }
    while ( (__int64)++v39 < size );
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
    v42 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_ItemEntity__TypeInfo,
                                                                          v36,
                                                                          v37);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v42,
      Method_BoxGachaMaster___c__GetEventItemList_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ItemEntity___ctor__);
    v43 = BoxGachaMaster___c_TypeInfo->static_fields;
    v43->__9__3_0 = (struct System_Comparison_ItemEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v43->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  if ( !v35 )
    goto LABEL_42;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v35->fields._size);
  v50 = v35->fields._size;
  if ( v50 >= 1 )
  {
    v51 = 0LL;
    while ( 1 )
    {
      if ( v50 <= (unsigned int)v51 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v52 = v35->fields._items->m_Items[v51];
      if ( !v52 || !result )
        goto LABEL_42;
      if ( (unsigned int)v51 >= result->max_length )
        goto LABEL_43;
      result->m_Items[v51 + 1] = v52->fields.missionTargetId;
      v50 = v35->fields._size;
      if ( (int)++v51 >= v50 )
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
  void *list; // x0
  int32_t Count; // w0
  void *v19; // x1
  __int64 v20; // x2
  int32_t v21; // w22
  int32_t v22; // w23
  __int64 v23; // x10
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v26; // x21
  struct BoxGachaMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4216352 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_System_Comparison_BoxGachaEntity___ctor__, v7);
    sub_B0D8A4(&System_Comparison_BoxGachaEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v14);
    sub_B0D8A4(&BoxGachaMaster___c_TypeInfo, v15);
    byte_4216352 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BoxGachaEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v22,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        v23 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v23
          && *(BoxGachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v23 - 8) == BoxGachaEntity_TypeInfo
          && *((_DWORD *)list + 5) == eventId )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
        }
      }
      if ( ++v22 >= v21 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B0D97C(list);
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_BoxGachaEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v26,
      Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BoxGachaEntity___ctor__);
    v27 = BoxGachaMaster___c_TypeInfo->static_fields;
    v27->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211DD9 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaMaster___c_TypeInfo, v1);
    byte_4211DD9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BoxGachaMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}