void __fastcall BoxGachaMaster___ctor(BoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB478 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__, method);
    byte_40FB478 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    122,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  BoxGachaEntity_o *result; // x0
  __int64 v15; // x10

  if ( (byte_40FB47A & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    byte_40FB47A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v13 )
        break;
      result = (BoxGachaEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                     v13,
                                     v12,
                                     (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v15 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (BoxGachaEntity_c *)result->klass->_2.typeHierarchy[v15 - 1] == BoxGachaEntity_TypeInfo
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
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BoxGachaMaster__GetEventItemList(
        BoxGachaMaster_o *this,
        int32_t event_id,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_int__o *v26; // x20
  const MethodInfo *v27; // x2
  System_Int32_array *result; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  signed int max_length; // w8
  System_Int32_array *v32; // x19
  unsigned int v33; // w22
  __int64 v34; // x8
  int32_t v35; // w21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  signed __int64 size; // x8
  unsigned __int64 v48; // x22
  WarEntity_o *Entity; // x0
  BoxGachaMaster___c_c *v50; // x0
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v53; // x21
  struct BoxGachaMaster___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x2
  int v62; // w8
  __int64 v63; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v64; // x8

  if ( (byte_40FB47B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_ItemEntity___ctor__, *(_QWORD *)&event_id);
    sub_B16FFC(&System_Comparison_ItemEntity__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B16FFC(&System_Collections_Generic_List_ItemEntity__TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_BoxGachaMaster___c__GetEventItemList_b__3_0__, v24);
    sub_B16FFC(&BoxGachaMaster___c_TypeInfo, v25);
    byte_40FB47B = 1;
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&event_id,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  result = (System_Int32_array *)BoxGachaMaster__getBoxGachaDataByEventId(this, event_id, v27);
  if ( !result )
    goto LABEL_42;
  max_length = result->max_length;
  v32 = result;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
      {
LABEL_43:
        sub_B17100(result, v29, v30);
        sub_B170A0();
      }
      v34 = *(_QWORD *)&v32->m_Items[2 * v33 + 1];
      if ( !v34 )
        break;
      if ( *(_DWORD *)(v34 + 48) == 6 )
      {
        if ( !v26 )
          break;
        v35 = *(_DWORD *)(v34 + 52);
        result = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                         v26,
                                         v35,
                                         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)result & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v26,
            v35,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = v32->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_13;
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_13:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemEntity__TypeInfo,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40,
                                                                                                  v41);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemEntity___ctor__);
  if ( !v26 )
    goto LABEL_42;
  LODWORD(size) = v26->fields._size;
  if ( (int)size >= 1 )
  {
    v48 = 0LL;
    do
    {
      if ( v48 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_42;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 v26->fields._items->m_Items[v48 + 1],
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v42 )
          goto LABEL_42;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v42,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemEntity__Add__);
      }
      size = v26->fields._size;
    }
    while ( (__int64)++v48 < size );
  }
  v50 = BoxGachaMaster___c_TypeInfo;
  if ( (BYTE3(BoxGachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    v50 = BoxGachaMaster___c_TypeInfo;
  }
  static_fields = v50->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ItemEntity__TypeInfo,
                                                                          v43,
                                                                          v44,
                                                                          v45,
                                                                          v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v53,
      Method_BoxGachaMaster___c__GetEventItemList_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ItemEntity___ctor__);
    v54 = BoxGachaMaster___c_TypeInfo->static_fields;
    v54->__9__3_0 = (struct System_Comparison_ItemEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v54->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !v42 )
    goto LABEL_42;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ItemEntity__Sort__);
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v42->fields._size, v61);
  v62 = v42->fields._size;
  if ( v62 >= 1 )
  {
    v63 = 0LL;
    while ( 1 )
    {
      if ( v62 <= (unsigned int)v63 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v64 = v42->fields._items->m_Items[v63];
      if ( !v64 || !result )
        goto LABEL_42;
      if ( (unsigned int)v63 >= result->max_length )
        goto LABEL_43;
      result->m_Items[v63 + 1] = v64->fields.missionTargetId;
      v62 = v42->fields._size;
      if ( (int)++v63 >= v62 )
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
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w22
  int32_t v26; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v29; // x10
  BoxGachaMaster___c_c *v30; // x0
  struct BoxGachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v33; // x21
  struct BoxGachaMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FB479 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaEntity_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_BoxGachaEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_BoxGachaEntity__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoxGachaEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoxGachaEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BoxGachaEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_BoxGachaEntity__TypeInfo, v15);
    sub_B16FFC(&Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__, v16);
    sub_B16FFC(&BoxGachaMaster___c_TypeInfo, v17);
    byte_40FB479 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BoxGachaEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BoxGachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v27 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v27,
                                                                      v26,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v29 = *(&BoxGachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (BoxGachaEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == BoxGachaEntity_TypeInfo
          && Item->fields.missionConditionDetailId == eventId )
        {
          if ( !v18 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BoxGachaEntity__Add__);
        }
      }
      if ( ++v26 >= v25 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  v30 = BoxGachaMaster___c_TypeInfo;
  if ( (BYTE3(BoxGachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaMaster___c_TypeInfo);
    v30 = BoxGachaMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = BoxGachaMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_BoxGachaEntity__TypeInfo,
                                                                          v21,
                                                                          v22,
                                                                          v23,
                                                                          v24);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v33,
      Method_BoxGachaMaster___c__getBoxGachaDataByEventId_b__1_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BoxGachaEntity___ctor__);
    v34 = BoxGachaMaster___c_TypeInfo->static_fields;
    v34->__9__1_0 = (struct System_Comparison_BoxGachaEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v34->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v18 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BoxGachaEntity__Sort__);
  return (BoxGachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BoxGachaEntity__ToArray__);
}


void __fastcall BoxGachaMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F70A2 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaMaster___c_TypeInfo, v1);
    byte_40F70A2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BoxGachaMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BoxGachaMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}


int32_t __fastcall BoxGachaMaster___c___getBoxGachaDataByEventId_b__1_0(
        BoxGachaMaster___c_o *this,
        BoxGachaEntity_o *a,
        BoxGachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}