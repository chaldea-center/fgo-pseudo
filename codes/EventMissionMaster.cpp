void EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59708B0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
    byte_59708B0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    140,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


EventMissionEntity_array *EventMissionMaster__GetDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v14; // x25
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__10_0; // x20
  Il2CppObject *v27; // x21
  struct EventMissionMaster___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_59708BA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__GetDailyMasterMissionList_b__10_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708BA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_31;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               v12,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v14 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 3
          && (__int64)Item[3].monitor <= v9
          && (__int64)Item[4].monitor >= v9 )
        {
          if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v8);
          Time = MissionInfoMaker__GetMissionProgressType(v14, 0);
          if ( (_DWORD)Time )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v22 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v14,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v14;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_23;
    }
LABEL_31:
    sub_2213CDC(Time, v8);
  }
LABEL_23:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v8);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__10_0 = (System_Comparison_T__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__10_0,
      v27,
      Method_EventMissionMaster___c__GetDailyMasterMissionList_b__10_0__,
      0);
    v28 = EventMissionMaster___c_TypeInfo->static_fields;
    v28->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__10_0, (int32_t)_9__10_0, v29, v30, v31, v32, v33, v34);
  }
  if ( !v5 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__10_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_EventMissionEntity__o *EventMissionMaster__GetExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  int64_t v9; // x23
  int32_t Count; // w0
  int32_t v11; // w24
  int32_t i; // w25
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v14; // x26
  Il2CppObject *Master_object; // x27
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
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__12_0; // x19
  Il2CppObject *v28; // x21
  struct EventMissionMaster___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_59708BC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__GetExtraMissionList_b__12_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708BC = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_45;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    for ( i = 0; v11 != i; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_45;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               i,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v14 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId && LODWORD(Item[1].monitor) == 4 && (__int64)Item[3].monitor <= v9 )
        {
          if ( (__int64)Item[4].klass >= v9 )
          {
            if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v8);
            Time = MissionInfoMaker__GetMissionProgressType(v14, 0);
            if ( !(_DWORD)Time )
              continue;
LABEL_32:
            if ( !v5 )
              goto LABEL_45;
            items = v5->fields._items;
            v23 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_45;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v14,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v14;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
            }
            continue;
          }
          if ( (__int64)Item[4].monitor >= v9 )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            Time = (int64_t)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
              Time = (int64_t)NetworkManager_TypeInfo;
            }
            if ( !Master_object )
              goto LABEL_45;
            UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)Master_object,
              &entity,
              *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
              v14->fields.id,
              0);
            if ( entity )
            {
              Time = UserEventMissionEntity__isClearMission(entity, 0);
              if ( (Time & 1) != 0 )
                goto LABEL_32;
            }
          }
        }
      }
    }
  }
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v8);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__12_0 = (System_Comparison_T__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v28, Method_EventMissionMaster___c__GetExtraMissionList_b__12_0__, 0);
    v29 = EventMissionMaster___c_TypeInfo->static_fields;
    v29->__9__12_0 = (struct System_Comparison_EventMissionEntity__o *)_9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__12_0, (int32_t)_9__12_0, v30, v31, v32, v33, v34, v35);
  }
  if ( !v5 )
LABEL_45:
    sub_2213CDC(Time, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__12_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


System_Collections_Generic_List_EventMissionEntity__o *EventMissionMaster__GetLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v14; // x25
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v27; // x21
  struct EventMissionMaster___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_59708BD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__GetLimitedMissionList_b__13_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708BD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_31;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               v12,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v14 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 5
          && (__int64)Item[3].monitor <= v9
          && (__int64)Item[4].monitor >= v9 )
        {
          if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v8);
          Time = MissionInfoMaker__GetMissionProgressType(v14, 0);
          if ( (_DWORD)Time )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v22 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v14,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v14;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
            }
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_23;
    }
LABEL_31:
    sub_2213CDC(Time, v8);
  }
LABEL_23:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v8);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__13_0 = (System_Comparison_T__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(_9__13_0, v27, Method_EventMissionMaster___c__GetLimitedMissionList_b__13_0__, 0);
    v28 = EventMissionMaster___c_TypeInfo->static_fields;
    v28->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)_9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28->__9__13_0, (int32_t)_9__13_0, v29, v30, v31, v32, v33, v34);
  }
  if ( !v5 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__13_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


EventMissionEntity_array *EventMissionMaster__GetWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  __int64 v6; // x1
  int64_t Time; // x0
  const MethodInfo *v8; // x1
  int64_t v9; // x23
  int32_t Count; // w0
  int32_t v11; // w24
  int32_t i; // w25
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v14; // x26
  Il2CppObject *Master_object; // x27
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
  const MethodInfo *v26; // x3
  __int64 v27; // x29
  int64_t v28; // x27
  __int64 v29; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__11_0; // x19
  Il2CppObject *v32; // x20
  struct EventMissionMaster___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int64_t v41; // [xsp+0h] [xbp-70h]
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_59708BB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__GetWeeklyMasterMissionList_b__11_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708BB = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_58;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    for ( i = 0; i != v11; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_58;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               i,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v14 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId && LODWORD(Item[1].monitor) == 2 && (__int64)Item[3].monitor <= v9 )
        {
          if ( (__int64)Item[4].klass >= v9 )
          {
            if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v8);
            Time = MissionInfoMaker__GetMissionProgressType(v14, 0);
            if ( !(_DWORD)Time )
              continue;
            goto LABEL_33;
          }
          if ( v9 > (__int64)Item[4].monitor )
            continue;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Time = (int64_t)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
            Time = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_58;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)Master_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                 v14->fields.id,
                 0) )
          {
            Time = (int64_t)entity;
            if ( !entity )
              goto LABEL_58;
            Time = UserEventMissionEntity__isClearMission(entity, 0);
            if ( (Time & 1) == 0 )
              continue;
            goto LABEL_33;
          }
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
          Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_58;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            v14->fields.missionTargetId,
                            v14->fields.id,
                            v26);
          if ( Time )
          {
            v27 = *(_QWORD *)(Time + 24);
            v28 = Time;
            if ( v27 )
            {
              if ( (int)v27 >= 1 )
              {
                v29 = 0;
                v41 = Time + 32;
                while ( 1 )
                {
                  if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 24) )
                    sub_2213CE4(Time);
                  Time = *(_QWORD *)(v41 + 8 * v29);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v8);
                  if ( (Time & 1) == 0 )
                    goto LABEL_13;
                  if ( (_DWORD)v27 == (_DWORD)++v29 )
                    goto LABEL_33;
                }
LABEL_58:
                sub_2213CDC(Time, v8);
              }
LABEL_33:
              if ( !v5 )
                goto LABEL_58;
              items = v5->fields._items;
              v23 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_58;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v14,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v25[4] = (Il2CppClass *)v14;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
              }
            }
          }
        }
      }
LABEL_13:
      ;
    }
  }
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v8);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__11_0 = (System_Comparison_T__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__11_0,
      v32,
      Method_EventMissionMaster___c__GetWeeklyMasterMissionList_b__11_0__,
      0);
    v33 = EventMissionMaster___c_TypeInfo->static_fields;
    v33->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)_9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__11_0, (int32_t)_9__11_0, v34, v35, v36, v37, v38, v39);
  }
  if ( !v5 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__11_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


bool EventMissionMaster__IsEventPeriod(EventMissionMaster_o *this, int32_t missionId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x19
  int64_t Time; // x0
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59708B1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59708B1 = 1;
  }
  entity = 0;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          missionId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    return 0;
  v6 = entity;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  Time = NetworkManager__getTime(0);
  if ( !v6 )
    sub_2213CDC(Time, v8);
  return *(_QWORD *)((char *)&word_38 + (_QWORD)v6) <= Time && *(_QWORD *)((char *)&dword_40 + (_QWORD)v6) >= Time;
}


System_Collections_Generic_List_int__o *EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x23
  NetworkManager_c *v10; // x0
  int64_t userIdNumber; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_59708B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59708B8 = 1;
  }
  entity = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_28;
  if ( missionData->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      v10 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
        v10 = NetworkManager_TypeInfo;
      }
      userIdNumber = v10->static_fields->userIdNumber;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)missionData,
                                    v7,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             (UserEventMissionMaster_o *)MasterData_object,
             &entity,
             userIdNumber,
             Instance->fields.m_CachedPtr,
             0) )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          break;
        if ( UserEventMissionEntity__isAchieveMission(entity, 0) )
        {
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)missionData,
                                        v7,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v7,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v4 )
              break;
            items = v4->fields._items;
            v6 = *(unsigned int *)&Instance->fields._DispLog;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++v4->fields._version;
            if ( !items )
              break;
            size = v4->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v4,
                v6,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v4->fields._size = size + 1;
              items->m_Items[size] = v6;
            }
          }
        }
      }
      if ( ++v7 >= missionData->fields._size )
        return v4;
    }
LABEL_28:
    sub_2213CDC(Instance, v6);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int v7; // w8
  System_Collections_Generic_List_object__o *v8; // x23
  const MethodInfo *v9; // x1
  __int64 list; // x0
  int32_t Count; // w0
  int32_t v12; // w25
  int32_t v13; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x27
  Il2CppObject *MasterData_object; // x28
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
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x28
  EventMissionMaster___c_c *v31; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__14_1; // x29
  struct EventMissionMaster___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x10
  __int64 v43; // x9
  int v44; // w13
  __int64 v45; // x29
  int v46; // w8
  __int64 v47; // x12
  __int64 v48; // x11
  __int64 v49; // x8
  int32_t v50; // w20
  int v51; // w19
  int32_t v52; // w28
  EventMissionMaster_o *v53; // x25
  __int64 v54; // x22
  __int64 v55; // x21
  int v56; // w23
  __int64 v57; // x24
  bool v58; // zf
  int v59; // w8
  struct EventMissionMaster___c_StaticFields *v60; // x8
  System_Comparison_T__o *_9__14_0; // x19
  Il2CppObject *v62; // x20
  struct EventMissionMaster___c_StaticFields *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  Il2CppObject *object; // [xsp+0h] [xbp-90h]
  void *monitor; // [xsp+8h] [xbp-88h]
  int32_t v73; // [xsp+14h] [xbp-7Ch]
  System_Collections_Generic_List_object__o *v74; // [xsp+18h] [xbp-78h]
  int64_t Time; // [xsp+20h] [xbp-70h]
  UserEventMissionEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = eventId;
  if ( (byte_59708BE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    sub_2213A60(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventMissionMaster___c__getClearMasterMissionList_b__14_0__);
    sub_2213A60(&Method_EventMissionMaster___c__getClearMasterMissionList_b__14_1__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708BE = 1;
  }
  v7 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_80;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_80;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        if ( HIDWORD(Item[1].monitor) == v5
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_80;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          list = (__int64)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
            list = (__int64)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_80;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL),
                 (int32_t)v15[1].klass,
                 0) )
          {
            list = (__int64)entity;
            if ( entity )
            {
              list = UserEventMissionEntity__isClearMission(entity, 0);
              if ( (list & 1) == 0 )
                goto LABEL_68;
              goto LABEL_27;
            }
            goto LABEL_80;
          }
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_80;
          list = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v15[3].monitor <= Time
            && (__int64)v15[4].klass < Time
            && Time <= (__int64)v15[4].monitor )
          {
            if ( !list )
              goto LABEL_80;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v15[1].monitor),
                                            (int32_t)v15[1].klass,
                                            4,
                                            v28);
          }
          else
          {
            if ( !list )
              goto LABEL_80;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v15[1].monitor),
                                            (int32_t)v15[1].klass,
                                            v27);
          }
          v30 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            if ( MissionCondListHighPriority->max_length )
              break;
          }
        }
      }
LABEL_68:
      if ( ++v13 == v12 )
        goto LABEL_72;
    }
    v31 = EventMissionMaster___c_TypeInfo;
    monitor = v30[1].monitor;
    if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v9);
      v31 = EventMissionMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__14_1 = (System_Func_object__int__o *)static_fields->__9__14_1;
    if ( !_9__14_1 )
    {
      if ( !*(&v31->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v31, v9);
        static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      }
      object = (Il2CppObject *)static_fields->__9;
      _9__14_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__14_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__14_1__,
        0);
      v34 = EventMissionMaster___c_TypeInfo->static_fields;
      v34->__9__14_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__14_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->__9__14_1, (int32_t)_9__14_1, v35, v36, v37, v38, v39, v40);
    }
    v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v30,
                                                                 (System_Func_TSource__TKey__o *)_9__14_1,
                                                                 (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (__int64)System_Linq_Enumerable__ToArray_object_(
                      v41,
                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_80;
    v42 = list;
    if ( !*(_DWORD *)(list + 24) )
LABEL_81:
      sub_2213CE4(list);
    v43 = *(_QWORD *)(list + 32);
    if ( !v43 )
      goto LABEL_80;
    if ( (int)monitor < 1 )
      goto LABEL_68;
    v44 = *(_DWORD *)(v43 + 36);
    v45 = 0;
    LOBYTE(v46) = 0;
    v47 = list + 32;
    v48 = (unsigned int)-(int)monitor;
    list = 1;
    v74 = v8;
    v73 = v5;
    while ( 1 )
    {
      if ( (v46 & 1) != 0 )
        goto LABEL_27;
      if ( (unsigned int)v45 >= *(_DWORD *)(v42 + 24) )
        goto LABEL_81;
      v49 = *(_QWORD *)(v47 + 8 * v45);
      if ( !v49 )
        goto LABEL_80;
      if ( *(_DWORD *)(v49 + 20) == 4 )
      {
        if ( v44 != *(_DWORD *)(v49 + 36) )
        {
          v44 = *(_DWORD *)(v49 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_27;
LABEL_60:
          v50 = missionType;
          v51 = v48 + v45;
          v52 = v12;
          v53 = this;
          v54 = v42;
          v55 = v47;
          v56 = v44;
          v57 = v48;
          list = EventMissionConditionEntity__getMissionProgress(*(EventMissionConditionEntity_o **)(v47 + 8 * v45), v9);
          v48 = v57;
          v47 = v55;
          v58 = v51 == -1;
          v44 = v56;
          missionType = v50;
          v5 = v73;
          v8 = v74;
          v59 = v58;
          v42 = v54;
          this = v53;
          v12 = v52;
          v46 = v59 & list;
          goto LABEL_64;
        }
        if ( (list & 1) != 0 )
          goto LABEL_60;
        v46 = 0;
        list = 0;
      }
      else
      {
        v46 = 0;
      }
LABEL_64:
      if ( !((_DWORD)v48 + (_DWORD)++v45) )
      {
        if ( !v46 )
          goto LABEL_68;
LABEL_27:
        if ( v8 )
        {
          items = v8->fields._items;
          v24 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v8->fields._version;
          if ( items )
          {
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                v15,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v15;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v17, v18, v19, v20, v21, v22);
            }
            goto LABEL_68;
          }
        }
LABEL_80:
        sub_2213CDC(list, v9);
      }
    }
  }
LABEL_72:
  list = (__int64)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v9);
    list = (__int64)EventMissionMaster___c_TypeInfo;
  }
  v60 = *(struct EventMissionMaster___c_StaticFields **)(list + 184);
  _9__14_0 = (System_Comparison_T__o *)v60->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(_DWORD *)(list + 228) )
    {
      j_il2cpp_runtime_class_init_0(list, v9);
      v60 = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v60->__9;
    _9__14_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__14_0,
      v62,
      Method_EventMissionMaster___c__getClearMasterMissionList_b__14_0__,
      0);
    v63 = EventMissionMaster___c_TypeInfo->static_fields;
    v63->__9__14_0 = (struct System_Comparison_EventMissionEntity__o *)_9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v63->__9__14_0, (int32_t)_9__14_0, v64, v65, v66, v67, v68, v69);
  }
  if ( !v8 )
    goto LABEL_80;
  System_Collections_Generic_List_object___Sort_71849708(
    v8,
    _9__14_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v8,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  int64_t Time; // x0
  int64_t v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v25; // x21
  struct EventMissionMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_59708B7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__getCompleteMissionList_b__7_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708B7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_28;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v12,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v8 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v9 >= *(_QWORD *)(Time + 56)
          && v9 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v20 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_20;
    }
LABEL_28:
    sub_2213CDC(Time, v8);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v8);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__7_0 = (System_Comparison_T__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v25, Method_EventMissionMaster___c__getCompleteMissionList_b__7_0__, 0);
    v26 = EventMissionMaster___c_TypeInfo->static_fields;
    v26->__9__7_0 = (struct System_Comparison_EventMissionEntity__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__7_0, (int32_t)_9__7_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__7_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


int32_t EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x1
  int64_t Time; // x0
  int64_t v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_59708BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59708BF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_22;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v12,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v8 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && v9 >= *(_QWORD *)(Time + 56) && v9 < *(_QWORD *)(Time + 64) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v20 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_19;
    }
LABEL_22:
    sub_2213CDC(Time, v8);
  }
LABEL_19:
  if ( v5 )
    return v5->fields._size;
  else
    return 0;
}


EventMissionEntity_array *EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  int64_t Time; // x0
  int64_t v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v25; // x21
  struct EventMissionMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_59708B2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708B2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_28;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v12,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v8 = Time;
        if ( *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v9 >= *(_QWORD *)(Time + 56)
          && v9 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v20 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_20;
    }
LABEL_28:
    sub_2213CDC(Time, v8);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v8);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(_9__2_0, v25, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0);
    v26 = EventMissionMaster___c_TypeInfo->static_fields;
    v26->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)_9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__2_0, (int32_t)_9__2_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__2_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *EventMissionMaster__getEventMissionListForEventReward(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  int64_t Time; // x0
  int64_t v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct EventMissionMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_59708B3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__getEventMissionListForEventReward_b__3_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708B3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_28;
  v9 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v12,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v8 = Time;
        if ( (*(_DWORD *)(Time + 24) & 0xFFFFFFFE) != 6
          && *(_DWORD *)(Time + 28) == eventId
          && v9 >= *(_QWORD *)(Time + 56)
          && v9 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v20 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v8;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), v8, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v11 == ++v12 )
        goto LABEL_20;
    }
LABEL_28:
    sub_2213CDC(Time, v8);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v8);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  static_fields = *(struct EventMissionMaster___c_StaticFields **)(Time + 184);
  _9__3_0 = (System_Comparison_T__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(_DWORD *)(Time + 228) )
    {
      j_il2cpp_runtime_class_init_0(Time, v8);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v25,
      Method_EventMissionMaster___c__getEventMissionListForEventReward_b__3_0__,
      0);
    v26 = EventMissionMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_EventMissionEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__3_0, (int32_t)_9__3_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__3_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *EventMissionMaster__getEventMissionList_49055168(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  Il2CppObject *v12; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct EventMissionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__4_0; // x20
  Il2CppObject *v25; // x21
  struct EventMissionMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_59708B4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_EventMissionMaster___c__getEventMissionList_b__4_0__);
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708B4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  NetworkManager__getTime(0);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( list )
      {
        v12 = (Il2CppObject *)list;
        if ( *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v20 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v12,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v12;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_19;
    }
LABEL_27:
    sub_2213CDC(list, v7);
  }
LABEL_19:
  list = EventMissionMaster___c_TypeInfo;
  if ( !*(&EventMissionMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v7);
    list = EventMissionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v7);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v25, Method_EventMissionMaster___c__getEventMissionList_b__4_0__, 0);
    v26 = EventMissionMaster___c_TypeInfo->static_fields;
    v26->__9__4_0 = (struct System_Comparison_EventMissionEntity__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__4_0, (int32_t)_9__4_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v5 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__4_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *EventMissionMaster__getEventMissionList_49055864(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
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
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59708B5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_59708B5 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                    (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( !idList )
    goto LABEL_19;
  max_length = idList->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
        sub_2213CE4(list);
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        &entity,
                                                                                        idList->m_Items[v9],
                                                                                        (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        v6 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) != 7 )
        {
          if ( !v5 )
            goto LABEL_19;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v6,
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
      LODWORD(max_length) = idList->max_length;
    }
    while ( (__int64)++v9 < (int)max_length );
  }
  if ( !v5 )
LABEL_19:
    sub_2213CDC(list, v6);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Int32_array *EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  int v10; // w23
  int32_t v11; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_59708B6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59708B6 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_22;
  v9 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v10 = Time;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v11,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time
        && *(_DWORD *)(Time + 28) == eventId
        && *(_DWORD *)(Time + 24) != 7
        && v9 >= *(_QWORD *)(Time + 56)
        && v9 <= *(_QWORD *)(Time + 72) )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v8 = *(unsigned int *)(Time + 16);
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v8,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v8;
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_20;
    }
LABEL_22:
    sub_2213CDC(Time, v8);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_o *EventMissionMaster__getTargetEventMissionEntity(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  EventMissionEntity_o *result; // x0

  if ( (byte_59708C0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59708C0 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_17;
  v9 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         Time,
                                         v12,
                                         (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( result
        && result->fields.missionTargetId == eventId
        && v9 >= result->fields.startedAt
        && v9 <= result->fields.closedAt
        && result->fields.id == targetMissionId )
      {
        return result;
      }
      if ( v11 == ++v12 )
        return 0;
    }
LABEL_17:
    sub_2213CDC(Time, v8);
  }
  return 0;
}


bool EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int v6; // w8
  void *v7; // x20
  bool v8; // w21
  __int64 v9; // x22
  __int64 v10; // x8

  if ( (byte_59708B9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59708B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_14;
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  v8 = v6 > 0;
  if ( v6 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= v6 )
        sub_2213CE4(Instance);
      v10 = *((_QWORD *)v7 + v9 + 4);
      if ( !v10 )
        break;
      Instance = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v10 + 20), v5);
      if ( !Instance )
        break;
      if ( !*((_QWORD *)Instance + 3) )
      {
        v6 = *((_DWORD *)v7 + 6);
        v8 = (int)++v9 < v6;
        if ( (int)v9 < v6 )
          continue;
      }
      return v8;
    }
LABEL_14:
    sub_2213CDC(Instance, v4);
  }
  return v8;
}


void EventMissionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59708C1 & 1) == 0 )
  {
    sub_2213A60(&EventMissionMaster___c_TypeInfo);
    byte_59708C1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMissionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMissionMaster___c___ctor(EventMissionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionMaster___c___GetDailyMasterMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___GetExtraMissionList_b__12_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___GetLimitedMissionList_b__13_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___GetWeeklyMasterMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___getClearMasterMissionList_b__14_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___getClearMasterMissionList_b__14_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_2213CDC(this, 0);
  return value->fields.condGroup;
}


int32_t EventMissionMaster___c___getCompleteMissionList_b__7_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___getEventMissionListForEventReward_b__3_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMissionMaster___c___getEventMissionList_b__4_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}