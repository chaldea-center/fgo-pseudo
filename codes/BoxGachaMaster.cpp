void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA59B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA59B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    123,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaEntity_o *__fastcall BoxGachaMaster__GetBoxGachaDataByEventId(
        BoxGachaMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  BoxGachaEntity_o *result; // x0
  __int64 v18; // x10

  if ( (byte_42EA59D & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaEntity_TypeInfo, eventId, slot, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    byte_42EA59D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     list,
                                     v16,
                                     (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v18 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (BoxGachaEntity_c *)result->klass->_2.typeHierarchy[v18 - 1] == BoxGachaEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.slot == slot )
        {
          return result;
        }
      }
      if ( ++v16 >= v15 )
        return 0LL;
    }
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


System_Int32_array *__fastcall BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  System_Collections_Generic_List_int__o *v63; // x20
  const MethodInfo *v64; // x2
  System_Int32_array *result; // x0
  __int64 v66; // x1
  signed int max_length; // w8
  System_Int32_array *v68; // x19
  unsigned int v69; // w22
  __int64 v70; // x8
  int32_t v71; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x19
  signed __int64 size; // x8
  unsigned __int64 v75; // x22
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v78; // x21
  struct BoxGachaMaster___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int v86; // w8
  __int64 v87; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v88; // x8
  __int64 v89; // x0

  if ( (byte_42EA59E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_ItemEntity___ctor__, event_id, (_DWORD)method, v3);
    sub_B5D5C4(&System_Comparison_ItemEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_ItemEntity__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v57, v58, v59);
    sub_B5D5C4(&BoxGachaMaster___c_TypeInfo, v60, v61, v62);
    byte_42EA59E = 1;
  }
  v63 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v63,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  result = (System_Int32_array *)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v64);
  if ( !result )
    goto LABEL_42;
  max_length = result->max_length;
  v68 = result;
  if ( max_length >= 1 )
  {
    v69 = 0;
    while ( 1 )
    {
      if ( v69 >= max_length )
      {
LABEL_43:
        v89 = sub_B5D6C8(result);
        sub_B5D668(v89, 0LL);
      }
      v70 = *(_QWORD *)&v68->m_Items[2 * v69 + 1];
      if ( !v70 )
        break;
      if ( *(_DWORD *)(v70 + 48) == 6 )
      {
        if ( !v63 )
          break;
        v71 = *(_DWORD *)(v70 + 52);
        result = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                         v63,
                                         v71,
                                         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)result & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v63,
            v71,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = v68->max_length;
      if ( (int)++v69 >= max_length )
        goto LABEL_13;
    }
LABEL_42:
    sub_B5D69C(result, v66);
  }
LABEL_13:
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)result,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  v73 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v73,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v63 )
    goto LABEL_42;
  LODWORD(size) = v63->fields._size;
  if ( (int)size >= 1 )
  {
    v75 = 0LL;
    do
    {
      if ( v75 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_42;
      result = (System_Int32_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v63->fields._items->m_Items[v75 + 1],
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( result )
      {
        if ( !v73 )
          goto LABEL_42;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v73,
          (EventMissionProgressRequest_Argument_ProgressData_o *)result,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
      }
      size = v63->fields._size;
    }
    while ( (__int64)++v75 < size );
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
    v78 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ItemEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v78,
      Method_BoxGachaMaster___c__GetEventItemList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_ItemEntity___ctor__);
    v79 = BoxGachaMaster___c_TypeInfo->static_fields;
    v79->__9__3_0 = (struct System_Comparison_ItemEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v79->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  if ( !v73 )
    goto LABEL_42;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v73,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v73->fields._size);
  v86 = v73->fields._size;
  if ( v86 >= 1 )
  {
    v87 = 0LL;
    while ( 1 )
    {
      if ( v86 <= (unsigned int)v87 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v88 = v73->fields._items->m_Items[v87];
      if ( !v88 || !result )
        goto LABEL_42;
      if ( (unsigned int)v87 >= result->max_length )
        goto LABEL_43;
      result->m_Items[v87 + 1] = v88->fields.missionTargetId;
      v86 = v73->fields._size;
      if ( (int)++v87 >= v86 )
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
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v48; // x21
  struct BoxGachaMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42EA59C & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaEntity_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Comparison_BoxGachaEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_BoxGachaEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v33, v34, v35);
    sub_B5D5C4(&BoxGachaMaster___c_TypeInfo, v36, v37, v38);
    byte_42EA59C = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoxGachaEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
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
        v45 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v45
          && *(BoxGachaEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) == BoxGachaEntity_TypeInfo
          && *((_DWORD *)list + 5) == eventId )
        {
          if ( !v39 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
        }
      }
      if ( ++v44 >= v43 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, v40);
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
    v48 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BoxGachaEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v48,
      Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_BoxGachaEntity___ctor__);
    v49 = BoxGachaMaster___c_TypeInfo->static_fields;
    v49->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__1_0,
      (System_Int32_array **)_9__1_0,
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
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BoxGachaMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E32 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5E32 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BoxGachaMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}