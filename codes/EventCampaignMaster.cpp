void EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970729 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
    byte_5970729 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    87,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  EventCampaignMaster___c_c *v3; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__16_0; // x20
  Il2CppObject *v6; // x21
  struct EventCampaignMaster___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct EventCampaignMaster___c_StaticFields *v14; // x8
  System_Func_object__object__o *_9__16_1; // x21
  Il2CppObject *v16; // x22
  struct EventCampaignMaster___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Linq_ILookup_TKey__TElement__o *v24; // x0
  __int64 v25; // x1
  EventCampaignMaster___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  struct EventCampaignMaster___c_StaticFields *v28; // x9
  System_Func_object__object__o *_9__16_2; // x20
  Il2CppObject *v30; // x21
  struct EventCampaignMaster___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_5970725 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    sub_2213A60(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__);
    sub_2213A60(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__);
    sub_2213A60(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__);
    sub_2213A60(&EventCampaignMaster___c_TypeInfo);
    byte_5970725 = 1;
  }
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  v3 = EventCampaignMaster___c_TypeInfo;
  if ( !*(&EventCampaignMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, method);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__16_0 = (System_Func_object__int__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_0, v6, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, 0);
    v7 = EventCampaignMaster___c_TypeInfo->static_fields;
    v7->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__16_0, (int32_t)_9__16_0, v8, v9, v10, v11, v12, v13);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  v14 = v3->static_fields;
  _9__16_1 = (System_Func_object__object__o *)v14->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      v14 = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)v14->__9;
    _9__16_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__16_1,
      v16,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
      0);
    v17 = EventCampaignMaster___c_TypeInfo->static_fields;
    v17->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__16_1, (int32_t)_9__16_1, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (System_Func_TSource__TElement__o *)_9__16_1,
          (const MethodInfo_38A1224 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
  v26 = EventCampaignMaster___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !*(&EventCampaignMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, v25);
    v26 = EventCampaignMaster___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__16_2 = (System_Func_object__object__o *)v28->__9__16_2;
  if ( !_9__16_2 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v25);
      v28 = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__16_2 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__16_2,
      v30,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
      0);
    v31 = EventCampaignMaster___c_TypeInfo->static_fields;
    v31->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->__9__16_2, (int32_t)_9__16_2, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v27,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v38,
                                                                     (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__FilterContinueItemCampaign(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  EventCampaignMaster___c_c *v21; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__17_0; // x21
  Il2CppObject *v24; // x22
  struct EventCampaignMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_object__object__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_5970726 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
    sub_2213A60(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_EventCampaignMaster___c__FilterContinueItemCampaign_b__17_0__);
    sub_2213A60(&Method_EventCampaignMaster___c__DisplayClass17_0__FilterContinueItemCampaign_b__1__);
    sub_2213A60(&EventCampaignMaster___c__DisplayClass17_0_TypeInfo);
    sub_2213A60(&EventCampaignMaster___c_TypeInfo);
    byte_5970726 = 1;
  }
  v3 = sub_2213CCC(EventCampaignMaster___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v3 )
    sub_2213CDC(Master_object, v6);
  *(_QWORD *)(v3 + 24) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)Master_object, v7, v8, v9, v10, v11, v12);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  *(_QWORD *)(v3 + 16) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v21 = EventCampaignMaster___c_TypeInfo;
  if ( !*(&EventCampaignMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, v20);
    v21 = EventCampaignMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__17_0 = (System_Func_object__int__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__17_0,
      v24,
      Method_EventCampaignMaster___c__FilterContinueItemCampaign_b__17_0__,
      0);
    v25 = EventCampaignMaster___c_TypeInfo->static_fields;
    v25->__9__17_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__17_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__17_0, (int32_t)_9__17_0, v26, v27, v28, v29, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToLookup_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
                                                               (System_Func_TSource__TKey__o *)_9__17_0,
                                                               (const MethodInfo_38A1174 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int___);
  v33 = (System_Func_object__object__o *)sub_2213CCC(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
  System_Func_object__object____ctor(
    v33,
    (Il2CppObject *)v3,
    Method_EventCampaignMaster___c__DisplayClass17_0__FilterContinueItemCampaign_b__1__,
    0);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v32,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v33,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v34,
                                                                     (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAddPassiveCampaigns(
        EventCampaignMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 38, 7, nowTime, v3);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAvailableEventCampaign(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  void *Instance; // x0
  const MethodInfo *v11; // x1
  EventMaster_o *v12; // x24
  int32_t Count; // w0
  int32_t v14; // w25
  int32_t v15; // w26
  Il2CppObject *v16; // x27
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_5970723 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970723 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_19;
  v12 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v15,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v16 = (Il2CppObject *)Instance;
        if ( *((_DWORD *)Instance + 5) == campaignTarget )
        {
          if ( !v12 )
            break;
          Instance = (void *)EventMaster__IsEnableEvent(v12, *((_DWORD *)Instance + 4), eventType, nowTime, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v24 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v16,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v16;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
            }
          }
        }
      }
      if ( v14 == ++v15 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                 v11);
    }
LABEL_19:
    sub_2213CDC(Instance, v11);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v9, v11);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 30, 7, 0, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 36, 7, 0, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetCombineEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v7; // x27
  int32_t Count; // w22
  Il2CppObject *v9; // x0
  EventCampaignReleaseMaster_o *v10; // x21
  System_Collections_Generic_List_object__o *v11; // x25
  int32_t v12; // w24
  unsigned int v13; // w8
  int64_t v14; // x26
  bool v15; // cc
  __int64 v16; // x8
  const MethodInfo *v18; // x5
  void *monitor; // x9
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int64_t condNum; // x29
  __int64 condTargetId; // x1
  int32_t condType; // w10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v34; // [xsp+8h] [xbp-78h]
  int32_t v35; // [xsp+Ch] [xbp-74h]
  EventCampaignReleaseEntity_o *v36; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_597071F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597071F = 1;
  }
  v36 = 0;
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_39;
  v7 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v10 = (EventCampaignReleaseMaster_o *)v9;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v12,
                            (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v13 = *(_DWORD *)(Instance + 20);
        v14 = Instance;
        v15 = v13 > 0x20;
        v16 = (1LL << v13) & 0x108000014LL;
        if ( !v15 && v16 != 0 )
        {
          if ( !MasterData_object )
            break;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            if ( (LODWORD(entity[1].monitor) | 8) == 0xD )
            {
              monitor = entity[6].monitor;
              if ( (__int64)monitor >= 1 && (__int64)monitor >= v7 && (__int64)entity[5].monitor <= v7 )
              {
                if ( !v10 )
                  break;
                Instance = EventCampaignReleaseMaster__TryGetEntity(
                             v10,
                             &v36,
                             *(_DWORD *)(v14 + 16),
                             *(_DWORD *)(v14 + 20),
                             *(_DWORD *)(v14 + 24),
                             v18);
                if ( (Instance & 1) == 0 )
                  goto LABEL_42;
                if ( !v36 )
                  break;
                condNum = v36->fields.condNum;
                condType = v36->fields.condType;
                condTargetId = (unsigned int)v36->fields.condTargetId;
                if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
                {
                  v34 = v36->fields.condTargetId;
                  v35 = v36->fields.condType;
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condTargetId);
                  LODWORD(condTargetId) = v34;
                  condType = v35;
                }
                Instance = CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
                if ( (Instance & 1) != 0 )
                {
LABEL_42:
                  if ( !v11 )
                  {
                    v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v11,
                      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                    if ( !v11 )
                      break;
                  }
                  items = v11->fields._items;
                  v30 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                  ++v11->fields._version;
                  if ( !items )
                    break;
                  size = v11->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v11,
                      (Il2CppObject *)v14,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = &items->obj.klass + size;
                    v11->fields._size = size + 1;
                    v32[4] = (Il2CppClass *)v14;
                    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), v14, v20, v21, v22, v23, v24, v25);
                  }
                }
              }
            }
          }
        }
      }
      if ( Count == ++v12 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v11,
                 v4);
    }
LABEL_39:
    sub_2213CDC(Instance, v4);
  }
  v11 = 0;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v11, v4);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *EventCampaignMaster__GetCombineEventCampaigns_48946036(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventCampaignEntity_o *current; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t target; // w28
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  int32_t value; // w28
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *v28; // x21
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  char v51; // w28
  Il2CppObject *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  Il2CppObject *v59; // x1
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  __int64 v68; // x0
  const MethodInfo *v69; // x1
  Il2CppObject *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  Il2CppObject *v77; // x1
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5970721 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
    byte_5970721 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  memset(&v86, 0, sizeof(v86));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v87 = v85;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v87,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_2213CDC(v7, v8);
    current = (EventCampaignEntity_o *)v87.fields._current;
    if ( v4->fields._size <= 0 )
    {
      v28 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v28,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_2213CDC(v29, v30);
      v31 = (Il2CppObject *)EventCampaignEntity__Clone(current, v30);
      v38 = v31;
      if ( !v28
        || (items = v28->fields._items,
            v40 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
            ++v28->fields._version,
            !items) )
      {
        sub_2213CDC(v31, v31);
      }
      size = v28->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          v31,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v38;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v38, v32, v33, v34, v35, v36, v37);
      }
      v64 = v4->fields._items;
      v65 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v4->fields._version;
      if ( !v64 )
        sub_2213CDC(v43, v44);
      v66 = v4->fields._size;
      if ( (unsigned int)v66 < LODWORD(v64->max_length) )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v28,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v85,
        v4,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v86 = v85;
      v85.fields._list = 0;
      *(_QWORD *)&v85.fields._index = &v86;
      do
      {
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v86,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v10 )
          {
            v51 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_2213CDC(v10, v11);
          v12 = (System_Collections_Generic_List_object__o *)v86.fields._current;
          if ( !v86.fields._current )
            sub_2213CDC(v10, v11);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v86.fields._current,
                   0,
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_2213CDC(0, v15);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v19 = current->fields.target;
          if ( v19 == 2 )
          {
            v20 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v20 )
              sub_2213CDC(0, v21);
            if ( HIDWORD(v20[1].klass) == 27 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 27 )
          {
            v22 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v22 )
              sub_2213CDC(0, v23);
            if ( HIDWORD(v22[1].klass) == 2 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 4 )
          {
            v24 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v24 )
              sub_2213CDC(0, v25);
            if ( HIDWORD(v24[1].klass) == 32 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 32 )
          {
            v26 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v26 )
              sub_2213CDC(0, v27);
            if ( HIDWORD(v26[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v17 = System_Collections_Generic_List_object___get_Item(
                v12,
                0,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v17 )
          sub_2213CDC(0, v18);
      }
      while ( value != LODWORD(v17[3].klass) );
      v52 = (Il2CppObject *)EventCampaignEntity__Clone(current, v18);
      v59 = v52;
      v60 = v12->fields._items;
      v61 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v12->fields._version;
      if ( !v60 )
        sub_2213CDC(v52, v52);
      v62 = v12->fields._size;
      if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v52,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &v60->obj.klass + v62;
        v12->fields._size = v62 + 1;
        v63[4] = (Il2CppClass *)v59;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), (int32_t)v59, v53, v54, v55, v56, v57, v58);
      }
      v51 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v86,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v51 & 1) == 0 )
      {
        v28 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v28,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_2213CDC(v68, v69);
        v70 = (Il2CppObject *)EventCampaignEntity__Clone(current, v69);
        v77 = v70;
        if ( !v28
          || (v78 = v28->fields._items,
              v79 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
              ++v28->fields._version,
              !v78) )
        {
          sub_2213CDC(v70, v70);
        }
        v80 = v28->fields._size;
        if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            v70,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &v78->obj.klass + v80;
          v28->fields._size = v80 + 1;
          v81[4] = (Il2CppClass *)v77;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v81 + 4), (int32_t)v77, v71, v72, v73, v74, v75, v76);
        }
        v64 = v4->fields._items;
        v65 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v4->fields._version;
        if ( !v64 )
          sub_2213CDC(v82, v83);
        v66 = v4->fields._size;
        if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
          goto LABEL_58;
LABEL_45:
        v67 = &v64->obj.klass + v66;
        v4->fields._size = v66 + 1;
        v67[4] = (Il2CppClass *)v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v67 + 4), (int32_t)v28, v45, v46, v47, v48, v49, v50);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *EventCampaignMaster__GetEntity(
        EventCampaignMaster_o *this,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_597072A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
    byte_597072A = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetExchangeSvtCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 34, 7, 0, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 27, 5, 0, v2);
}


EventCampaignEntity_array *EventCampaignMaster__GetFriendPointCampaigns(
        EventCampaignMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v9; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w25
  Il2CppObject *v13; // x26
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  void *v20; // x9
  void *monitor; // x9
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5970720 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970720 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_38;
  v9 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_38;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v12,
                            (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v13 = (Il2CppObject *)Instance;
        if ( *(_DWORD *)(Instance + 20) == 24 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_38;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v9 || (__int64)entity[5].monitor > v9 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_38;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v9 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_38;
              v20 = entity[6].monitor;
              if ( (__int64)v20 < 1 || (__int64)v20 <= v9 || (__int64)entity[5].monitor >= v9 )
                continue;
            }
            if ( !v11 )
              goto LABEL_38;
            items = v11->fields._items;
            v23 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v13,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v13;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
    }
    while ( Count != ++v12 );
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v11,
                        v6);
  if ( !Instance )
LABEL_38:
    sub_2213CDC(Instance, v6);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  System_Collections_Generic_List_object__o *v12; // x24
  int32_t v13; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x26
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5970722 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970722 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_29;
  v9 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v13,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        if ( HIDWORD(Item[1].klass) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       (System_Int32_array *)Item[2].monitor,
                       gachaId,
                       (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         (int32_t)v15[1].klass,
                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1 && (__int64)entity[5].monitor <= v9 && v9 <= (__int64)entity[6].klass )
              {
                if ( !v12 )
                {
                  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v12,
                    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v12 )
                    break;
                }
                items = v12->fields._items;
                v23 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v12->fields._version;
                if ( !items )
                  break;
                size = v12->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v12,
                    v15,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v15;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
                }
              }
            }
          }
        }
      }
      if ( v11 == ++v13 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v12,
                 v6);
    }
LABEL_29:
    sub_2213CDC(Instance, v6);
  }
  v12 = 0;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v12, v6);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetFriendshipUpCampaigns(
        EventCampaignMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 31, 7, nowTime, v3);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_EventCampaignEntity__bool__c *v11; // x0
  System_Func_object__bool__o *v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_5970724 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_2213A60(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_2213A60(&Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__);
    sub_2213A60(&EventCampaignMaster___c__DisplayClass11_0_TypeInfo);
    byte_5970724 = 1;
  }
  v7 = sub_2213CCC(EventCampaignMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  list = this->fields.list;
  v11 = System_Func_EventCampaignEntity__bool__TypeInfo;
  *(_DWORD *)(v7 + 16) = campaignTarget;
  *(_DWORD *)(v7 + 20) = itemId;
  v12 = (System_Func_object__bool__o *)sub_2213CCC(v11);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v13,
                                                                     (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


EventCampaignEntity_array *EventCampaignMaster__GetTargetEntitiyAllList(
        EventCampaignMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_597071C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_597071C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( HIDWORD(list->fields.items) == targetType )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventCampaignMaster__IsEnableServant(
        EventCampaignMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        const MethodInfo *method)
{
  EventCampaignEntity_o *Data; // x0
  EventCampaignEntity_o *v8; // x20

  if ( (byte_5970727 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5970727 = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  }
  return (char)Data;
}


bool EventCampaignMaster__IsOverrideEntryCondMessage(
        EventCampaignMaster_o *this,
        System_String_o **message,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignEntity_o *v4; // x22
  MissionNaviTransitionBoardItem_o *v5; // x19
  EventCampaignMaster_o *v6; // x20
  __int64 v7; // x23
  Il2CppObject *Master_object; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject **v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  MissionNaviTransitionBoardItem_c *v23; // x1
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  System_String_o *EventName; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *list; // x22
  System_Func_object__bool__o *v35; // x24
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  EventCampaignMaster___c_c *v38; // x8
  struct EventCampaignMaster___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__19_1; // x23
  Il2CppObject *v41; // x24
  struct EventCampaignMaster___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  Il2CppObject *v52; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF

  while ( 1 )
  {
    v4 = entity;
    v5 = (MissionNaviTransitionBoardItem_o *)message;
    v6 = this;
    if ( (byte_5970728 & 1) == 0 )
    {
      sub_2213A60(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
      sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
      sub_2213A60(&DataManager_TypeInfo);
      sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
      sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____);
      sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      sub_2213A60(&System_Func_EventCampaignEntity__bool__TypeInfo);
      sub_2213A60(&System_Func_EventCampaignEntity__Nullable_int___TypeInfo);
      sub_2213A60(&Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__19_1__);
      sub_2213A60(&Method_EventCampaignMaster___c__DisplayClass19_0__IsOverrideEntryCondMessage_b__0__);
      sub_2213A60(&EventCampaignMaster___c__DisplayClass19_0_TypeInfo);
      sub_2213A60(&EventCampaignMaster___c_TypeInfo);
      byte_5970728 = 1;
    }
    entitya = 0;
    v52 = 0;
    v7 = sub_2213CCC(EventCampaignMaster___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !v7 )
      goto LABEL_33;
    *(_QWORD *)(v7 + 16) = v4;
    v16 = (Il2CppObject **)(v7 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v4, v10, v11, v12, v13, v14, v15);
    if ( !*(_QWORD *)(v7 + 16) )
      goto LABEL_33;
    v23 = *(MissionNaviTransitionBoardItem_c **)(*(_QWORD *)(v7 + 16) + 64LL);
    v5->klass = v23;
    sub_2213A04(v5, (int32_t)v23, v17, v18, v19, v20, v21, v22);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    if ( !*v16 || !Master_object )
      goto LABEL_33;
    if ( EventCampaignReleaseMaster__isRelease(
           (EventCampaignReleaseMaster_o *)Master_object,
           (int32_t)(*v16)[1].klass,
           HIDWORD((*v16)[1].klass),
           v25) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
      if ( *v16 && Master_object )
      {
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entitya,
               (int32_t)(*v16)[1].klass,
               (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
        {
          Master_object = entitya;
          if ( !entitya )
            goto LABEL_33;
          goto LABEL_16;
        }
        return 0;
      }
LABEL_33:
      sub_2213CDC(Master_object, v9);
    }
    Master_object = *v16;
    if ( !*v16 )
      goto LABEL_33;
    if ( !EventCampaignEntity__IsNotDispEntryCondMessage((EventCampaignEntity_o *)Master_object, v9) )
      return 0;
    list = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.list;
    v35 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v35,
      (Il2CppObject *)v7,
      Method_EventCampaignMaster___c__DisplayClass19_0__IsOverrideEntryCondMessage_b__0__,
      0);
    v37 = System_Linq_Enumerable__Where_object_(
            list,
            (System_Func_TSource__bool__o *)v35,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    v38 = EventCampaignMaster___c_TypeInfo;
    if ( !*(&EventCampaignMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, v36);
      v38 = EventCampaignMaster___c_TypeInfo;
    }
    static_fields = v38->static_fields;
    _9__19_1 = (System_Func_T__TResult__o *)static_fields->__9__19_1;
    if ( !_9__19_1 )
    {
      if ( !*(&v38->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v38, v36);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)static_fields->__9;
      _9__19_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_EventCampaignEntity__Nullable_int___TypeInfo);
      System_Func_object__Nullable_int_____ctor(
        _9__19_1,
        v41,
        Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__19_1__,
        0);
      v42 = EventCampaignMaster___c_TypeInfo->static_fields;
      v42->__9__19_1 = (struct System_Func_EventCampaignEntity__Nullable_int___o *)_9__19_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->__9__19_1, (int32_t)_9__19_1, v43, v44, v45, v46, v47, v48);
    }
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Nullable_int__(
                                                                 v37,
                                                                 (System_Func_TSource__TKey__o *)_9__19_1,
                                                                 (const MethodInfo_38890E4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____);
    v50 = System_Linq_Enumerable__FirstOrDefault_object_(
            v49,
            (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    if ( !v50 )
      break;
    entity = (EventCampaignEntity_o *)v50;
    this = v6;
    message = (System_String_o **)v5;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v51);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !*v16 || !Master_object )
    goto LABEL_33;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &v52,
          (int32_t)(*v16)[1].klass,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = v52;
  if ( !v52 )
    goto LABEL_33;
LABEL_16:
  EventName = EventEntity__getEventName((EventEntity_o *)Master_object, v9);
  v5->klass = (MissionNaviTransitionBoardItem_c *)EventName;
  sub_2213A04(v5, (int32_t)EventName, v27, v28, v29, v30, v31, v32);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool EventCampaignMaster__TryGetEntity(
        EventCampaignMaster_o *this,
        EventCampaignEntity_o **entity,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597072B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
    byte_597072B = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  EventCampaignEntity_o *v20; // x20
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  System_Collections_Generic_IEnumerator_T__o *v26; // [xsp+18h] [xbp-28h]

  if ( (byte_597071D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597071D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__);
  v26 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v26 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v26 )
      sub_2213CDC(v13, v14);
    v15 = v26->klass;
    v16 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventCampaignEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v26, System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v26,
            *(_QWORD *)(v18 + 8));
    v20 = (EventCampaignEntity_o *)v19;
    if ( v19 && *(_DWORD *)(v19 + 16) == event_id )
      goto LABEL_25;
  }
  v20 = 0;
LABEL_25:
  if ( v26 )
  {
    v21 = v26->klass;
    v22 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_30;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_30:
      v24 = sub_224BC3C(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(v26, *(_QWORD *)(v24 + 8));
  }
  return v20;
}


EventCampaignEntity_array *EventCampaignMaster__getData_48943100(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v10; // w23
  int max_length; // w26
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int v19; // w9
  int v20; // w10
  EventEntity_o **m_Items; // x11
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_597071E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_597071E = 1;
  }
  if ( !eventEntityList )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    max_length = eventEntityList->max_length;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( !list )
        break;
      v8 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v19 = eventEntityList->max_length;
        v20 = max_length;
        m_Items = eventEntityList->m_Items;
        while ( 1 )
        {
          if ( !v19 )
            sub_2213CE4(list);
          if ( !*m_Items )
            goto LABEL_28;
          if ( LODWORD(list->fields.items) == (*m_Items)->fields.id )
            break;
          --v20;
          ++m_Items;
          --v19;
          if ( !v20 )
            goto LABEL_22;
        }
        if ( !v7 )
          break;
        items = v7->fields._items;
        v23 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v8;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v8, v13, v14, v15, v16, v17, v18);
        }
      }
LABEL_22:
      if ( ++v12 == v10 )
        goto LABEL_23;
    }
LABEL_28:
    sub_2213CDC(list, v8);
  }
LABEL_23:
  if ( !v7 )
    goto LABEL_28;
  if ( v7->fields._size < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v7,
                                                             v8);
  if ( !list )
    goto LABEL_28;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597072C & 1) == 0 )
  {
    sub_2213A60(&EventCampaignMaster___c_TypeInfo);
    byte_597072C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventCampaignMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCampaignMaster___c___ctor(EventCampaignMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventCampaignMaster___c___CheckCampaignGrouping_b__16_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.groupId;
}


EventCampaignEntity_o *EventCampaignMaster___c___CheckCampaignGrouping_b__16_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *EventCampaignMaster___c___CheckCampaignGrouping_b__16_2(
        EventCampaignMaster___c_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  EventCampaignMaster___c_c *v10; // x0
  struct EventCampaignMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__16_3; // x21
  Il2CppObject *v13; // x22
  struct EventCampaignMaster___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  EventCampaignMaster___c_o *v31; // x1
  Il2CppClass **v32; // x0

  if ( (byte_597072D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_First_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_2213A60(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_2213A60(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__);
    this = (EventCampaignMaster___c_o *)sub_2213A60(&EventCampaignMaster___c_TypeInfo);
    byte_597072D = 1;
  }
  if ( !x )
    goto LABEL_24;
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_224BC3C(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))v7)(
          x,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v10 = EventCampaignMaster___c_TypeInfo;
  if ( !*(&EventCampaignMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, v9);
    v10 = EventCampaignMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__16_3 = (System_Func_object__int__o *)static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v9);
      static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__16_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_3, v13, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, 0);
    v14 = EventCampaignMaster___c_TypeInfo->static_fields;
    v14->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__16_3, (int32_t)_9__16_3, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v21,
                                        (const MethodInfo_387FC04 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v8
    || (items = v8->fields._items,
        v29 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_24:
    sub_2213CDC(this, x);
  }
  size = v8->fields._size;
  v31 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v31;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v31, v22, v23, v24, v25, v26, v27);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v8;
}


int32_t EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_2213CDC(this, 0);
  return y->fields.priority;
}


int32_t EventCampaignMaster___c___FilterContinueItemCampaign_b__17_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.target;
}


System_Nullable_int__o EventCampaignMaster___c___IsOverrideEntryCondMessage_b__19_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  System_Nullable_int__o v4; // x0
  int32_t priority; // w1
  System_Nullable_int__o v7; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_597072E & 1) == 0 )
  {
    this = (EventCampaignMaster___c_o *)sub_2213A60(&Method_System_Nullable_int___ctor__);
    byte_597072E = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  v4 = (System_Nullable_int__o)&v7;
  priority = x->fields.priority;
  v7 = 0;
  System_Nullable_int____ctor(v4, priority, (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
  return v7;
}


void EventCampaignMaster___c__DisplayClass11_0___ctor(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCampaignMaster___c__DisplayClass11_0___GetQuestUseItemEventCampaignsByItemId_b__0(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster___c__DisplayClass11_0_o *v4; // x19
  System_Int32_array *targetIds; // x20
  System_Func_int__bool__o *_9__1; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_597072F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    this = (EventCampaignMaster___c__DisplayClass11_0_o *)sub_2213A60(&Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__);
    byte_597072F = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  if ( entity->fields.target != v4->fields.target )
    return 0;
  targetIds = entity->fields.targetIds;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  return BasicHelper__Any_int__58784608(
           targetIds,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


bool EventCampaignMaster___c__DisplayClass11_0___GetQuestUseItemEventCampaignsByItemId_b__1(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.itemId == id;
}


void EventCampaignMaster___c__DisplayClass17_0___ctor(
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *EventCampaignMaster___c__DisplayClass17_0___FilterContinueItemCampaign_b__1(
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  EventCampaignMaster___c__DisplayClass17_0_o *v4; // x19
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Func_object__bool__o *_9__2; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_T__TResult__o *_9__3; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  v4 = this;
  if ( (byte_5970730 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_EventCampaignEntity__ValueTuple_bool__Nullable_long_____);
    sub_2213A60(&Method_System_Linq_Enumerable_Take_EventCampaignEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_2213A60(&System_Func_EventCampaignEntity__ValueTuple_bool__Nullable_long____TypeInfo);
    sub_2213A60(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_2213A60(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo);
    sub_2213A60(&Method_EventCampaignMaster___c__DisplayClass17_0__FilterContinueItemCampaign_b__2__);
    this = (EventCampaignMaster___c__DisplayClass17_0_o *)sub_2213A60(&Method_EventCampaignMaster___c__DisplayClass17_0__FilterContinueItemCampaign_b__3__);
    byte_5970730 = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  klass = x->klass;
  v6 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_224BC3C(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0);
  }
  if ( (*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))v8)(
         x,
         *(_QWORD *)(v8 + 8)) != 28 )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)x;
  _9__2 = (System_Func_object__bool__o *)v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventCampaignEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventCampaignMaster___c__DisplayClass17_0__FilterContinueItemCampaign_b__2__,
      0);
    v4->fields.__9__2 = (struct System_Func_EventCampaignEntity__bool__o *)_9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)x,
          (System_Func_TSource__bool__o *)_9__2,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  _9__3 = (System_Func_T__TResult__o *)v4->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_EventCampaignEntity__ValueTuple_bool__Nullable_long____TypeInfo);
    System_Func_object__ValueTuple_bool__Nullable_long______ctor(
      _9__3,
      (Il2CppObject *)v4,
      Method_EventCampaignMaster___c__DisplayClass17_0__FilterContinueItemCampaign_b__3__,
      0);
    v4->fields.__9__3 = (struct System_Func_EventCampaignEntity__ValueTuple_bool__Nullable_long____o *)_9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__ValueTuple_bool__Nullable_long___(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__3,
                                                               (const MethodInfo_3888AC0 *)Method_System_Linq_Enumerable_OrderBy_EventCampaignEntity__ValueTuple_bool__Nullable_long_____);
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__Take_object_(
                                                                            v24,
                                                                            1,
                                                                            (const MethodInfo_389A270 *)Method_System_Linq_Enumerable_Take_EventCampaignEntity___);
}


bool EventCampaignMaster___c__DisplayClass17_0___FilterContinueItemCampaign_b__2(
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  UserItemMaster_o *userItemMaster; // x20
  NetworkManager_c *v6; // x0
  UserItemEntity_o *EntityDefinitely; // x0

  if ( (byte_5970731 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970731 = 1;
  }
  userItemMaster = this->fields.userItemMaster;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, y);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, y);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !y || !userItemMaster )
    sub_2213CDC(v6, y);
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       userItemMaster,
                       v6->static_fields->userIdNumber,
                       y->fields.value,
                       0);
  if ( EntityDefinitely )
    LOBYTE(EntityDefinitely) = EntityDefinitely->fields.num > 0;
  return (char)EntityDefinitely;
}


System_ValueTuple_bool__Nullable_long___o *EventCampaignMaster___c__DisplayClass17_0___FilterContinueItemCampaign_b__3(
        System_ValueTuple_bool__Nullable_long___o *__return_ptr retstr,
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  EventCampaignMaster___c__DisplayClass17_0_o *v5; // x21
  const MethodInfo_45E4A50 *v7; // x3
  bool v8; // w20
  System_Nullable_long__o v9; // x2 OVERLAPPED
  const MethodInfo_3CE90EC *v10; // x4
  System_ValueTuple_bool__Nullable_long___o *result; // x0
  System_Nullable_long__o v12; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_long__o v14; // 0:x0.16

  v5 = this;
  if ( (byte_5970732 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    this = (EventCampaignMaster___c__DisplayClass17_0_o *)sub_2213A60(&Method_System_ValueTuple_bool__Nullable_long____ctor__);
    byte_5970732 = 1;
  }
  entity = 0;
  if ( !y || (this = (EventCampaignMaster___c__DisplayClass17_0_o *)v5->fields.eventMaster) == 0 )
    sub_2213CDC(this, y);
  v8 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         y->fields.eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( entity )
  {
    *(_QWORD *)&v14.fields.hasValue = &v12;
    v14.fields.value = (int64_t)entity[6].monitor;
    v12 = (System_Nullable_long__o)0LL;
    System_Nullable_long____ctor(v14, Method_System_Nullable_long___ctor__, v7);
    v9 = v12;
  }
  else
  {
    v9.fields.value = 0;
    *(_QWORD *)&v9.fields.hasValue = 0;
  }
  v10 = (const MethodInfo_3CE90EC *)Method_System_ValueTuple_bool__Nullable_long____ctor__;
  *(_QWORD *)&retstr->fields.Item1 = 0;
  *(_QWORD *)&retstr->fields.Item2.fields.hasValue = 0;
  retstr->fields.Item2.fields.value = 0;
  System_ValueTuple_bool__Nullable_long_____ctor(retstr, !v8, v9, v10);
  return result;
}


void EventCampaignMaster___c__DisplayClass19_0___ctor(
        EventCampaignMaster___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCampaignMaster___c__DisplayClass19_0___IsOverrideEntryCondMessage_b__0(
        EventCampaignMaster___c__DisplayClass19_0_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0 )
    sub_2213CDC(this, x);
  return x->fields.target == entity->fields.target
      && x->fields.groupId == entity->fields.groupId
      && x->fields.priority < entity->fields.priority;
}