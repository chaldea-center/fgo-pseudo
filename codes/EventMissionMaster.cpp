void EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42FFC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
    byte_4C42FFC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


EventMissionEntity_array *EventMissionMaster__GetDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C43004 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_EventMissionMaster___c__GetDailyMasterMissionList_b__8_0__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C43004 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_31;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               v10,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v12 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 3
          && (__int64)Item[3].monitor <= v7
          && (__int64)Item[4].monitor >= v7 )
        {
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          Time = MissionInfoMaker__GetMissionProgressType(v12, 0);
          if ( (_DWORD)Time )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v12;
              sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
            }
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_23;
    }
LABEL_31:
    sub_1C372B4(Time);
  }
LABEL_23:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v19 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v20 = **(Il2CppObject ***)(Time + 184);
    v19 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventMissionMaster___c__GetDailyMasterMissionList_b__8_0__, 0);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v19;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)v19, v22, v23);
  }
  if ( !v5 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v19,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_EventMissionEntity__o *EventMissionMaster__GetExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t Time; // x0
  int64_t v7; // x23
  int32_t Count; // w0
  int32_t v9; // w24
  int32_t i; // w25
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v12; // x26
  Il2CppObject *Master_object; // x27
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C43006 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_EventMissionMaster___c__GetExtraMissionList_b__10_0__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C43006 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_44;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    for ( i = 0; v9 != i; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_44;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               i,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v12 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId && LODWORD(Item[1].monitor) == 4 && (__int64)Item[3].monitor <= v7 )
        {
          if ( (__int64)Item[4].klass >= v7 )
          {
            if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            Time = MissionInfoMaker__GetMissionProgressType(v12, 0);
            if ( !(_DWORD)Time )
              continue;
LABEL_30:
            if ( !v5 )
              goto LABEL_44;
            items = v5->fields._items;
            v17 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_44;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v12;
              sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
            }
            continue;
          }
          if ( (__int64)Item[4].monitor >= v7 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C3CD62 )
            {
              sub_1C37058(&NetworkManager_TypeInfo);
              byte_4C3CD62 = 1;
            }
            Time = (int64_t)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = (int64_t)NetworkManager_TypeInfo;
            }
            if ( !Master_object )
              goto LABEL_44;
            UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)Master_object,
              &entity,
              *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
              v12->fields.id,
              0);
            if ( entity )
            {
              Time = UserEventMissionEntity__isClearMission(entity, 0);
              if ( (Time & 1) != 0 )
                goto LABEL_30;
            }
          }
        }
      }
    }
  }
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 48LL);
  if ( !v20 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v21 = **(Il2CppObject ***)(Time + 184);
    v20 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v20, v21, Method_EventMissionMaster___c__GetExtraMissionList_b__10_0__, 0);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v20;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)v20, v23, v24);
  }
  if ( !v5 )
LABEL_44:
    sub_1C372B4(Time);
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v20,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


System_Collections_Generic_List_EventMissionEntity__o *EventMissionMaster__GetLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C43007 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_EventMissionMaster___c__GetLimitedMissionList_b__11_0__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C43007 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_31;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               v10,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v12 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 5
          && (__int64)Item[3].monitor <= v7
          && (__int64)Item[4].monitor >= v7 )
        {
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          Time = MissionInfoMaker__GetMissionProgressType(v12, 0);
          if ( (_DWORD)Time )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v12,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v12;
              sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
            }
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_23;
    }
LABEL_31:
    sub_1C372B4(Time);
  }
LABEL_23:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v19 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v20 = **(Il2CppObject ***)(Time + 184);
    v19 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventMissionMaster___c__GetLimitedMissionList_b__11_0__, 0);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v19;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v19, v22, v23);
  }
  if ( !v5 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v19,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


EventMissionEntity_array *EventMissionMaster__GetWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  int64_t Time; // x0
  int64_t v7; // x23
  int32_t Count; // w0
  int32_t v9; // w24
  int32_t i; // w25
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v12; // x26
  Il2CppObject *Master_object; // x27
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  __int64 v22; // x8
  int64_t v23; // x27
  int v24; // w29
  int v25; // w21
  System_Comparison_T__o *v26; // x19
  Il2CppObject *v27; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C43005 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_EventMissionMaster___c__GetWeeklyMasterMissionList_b__9_0__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C43005 = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_59;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    for ( i = 0; i != v9; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_59;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               i,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v12 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId && LODWORD(Item[1].monitor) == 2 && (__int64)Item[3].monitor <= v7 )
        {
          if ( (__int64)Item[4].klass >= v7 )
          {
            if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            Time = MissionInfoMaker__GetMissionProgressType(v12, 0);
            if ( !(_DWORD)Time )
              continue;
            goto LABEL_31;
          }
          if ( v7 > (__int64)Item[4].monitor )
            continue;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          Time = (int64_t)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !Master_object )
            goto LABEL_59;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)Master_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                 v12->fields.id,
                 0) )
          {
            Time = (int64_t)entity;
            if ( !entity )
              goto LABEL_59;
            Time = UserEventMissionEntity__isClearMission(entity, 0);
            if ( (Time & 1) == 0 )
              continue;
            goto LABEL_31;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_59;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            v12->fields.missionTargetId,
                            v12->fields.id,
                            v20);
          if ( Time )
          {
            v22 = *(_QWORD *)(Time + 24);
            v23 = Time;
            if ( v22 )
            {
              v24 = v22 - 1;
              if ( (int)v22 >= 1 )
              {
                if ( !(_DWORD)v22 )
LABEL_50:
                  sub_1C372BC(Time);
                v25 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v23 + 8LL * v25 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v21);
                  if ( (Time & 1) == 0 )
                    goto LABEL_36;
                  if ( v24 == v25 )
                    goto LABEL_31;
                  if ( (unsigned int)++v25 >= *(_DWORD *)(v23 + 24) )
                    goto LABEL_50;
                }
LABEL_59:
                sub_1C372B4(Time);
              }
LABEL_31:
              if ( !v5 )
                goto LABEL_59;
              items = v5->fields._items;
              v17 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_59;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v12,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v19[4] = (Il2CppClass *)v12;
                sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
              }
            }
          }
        }
      }
LABEL_36:
      ;
    }
  }
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v26 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 40LL);
  if ( !v26 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v27 = **(Il2CppObject ***)(Time + 184);
    v26 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v26, v27, Method_EventMissionMaster___c__GetWeeklyMasterMissionList_b__9_0__, 0);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v26;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)v26, v29, v30);
  }
  if ( !v5 )
    goto LABEL_59;
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v26,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_int__o *EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  void *Instance; // x0
  int32_t v6; // w21
  Il2CppObject *MasterData_object; // x23
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x24
  int32_t v10; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C43002 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43002 = 1;
  }
  entity = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_28;
  if ( missionData->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
      }
      v8 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v8 = NetworkManager_TypeInfo;
      }
      userIdNumber = v8->static_fields->userIdNumber;
      Instance = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)missionData,
                   v6,
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             (UserEventMissionMaster_o *)MasterData_object,
             &entity,
             userIdNumber,
             *((_DWORD *)Instance + 4),
             0) )
      {
        Instance = entity;
        if ( !entity )
          break;
        if ( UserEventMissionEntity__isAchieveMission(entity, 0) )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)missionData,
                       v6,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *((_DWORD *)Instance + 8) != 1 )
          {
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)missionData,
                         v6,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v4 )
              break;
            v10 = *((_DWORD *)Instance + 8);
            items = v4->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++v4->fields._version;
            if ( !items )
              break;
            size = v4->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v4,
                v10,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            }
            else
            {
              v4->fields._size = size + 1;
              items->m_Items[size] = v10;
            }
          }
        }
      }
      if ( ++v6 >= missionData->fields._size )
        return v4;
    }
LABEL_28:
    sub_1C372B4(Instance);
  }
  return v4;
}


EventMissionEntity_array *EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 list; // x0
  int32_t Count; // w0
  int32_t v9; // w25
  int32_t v10; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x27
  Il2CppObject *MasterData_object; // x28
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x28
  il2cpp_array_size_t max_length; // x24
  EventMissionMaster___c_c *v25; // x0
  System_Func_object__int__o *_9__13_1; // x29
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  const MethodInfo *v31; // x1
  __int64 v32; // x28
  __int64 v33; // x9
  int v34; // w23
  int v35; // w29
  __int64 v36; // x8
  int v37; // w8
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x20
  struct EventMissionMaster___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_object__o *v46; // [xsp+8h] [xbp-78h]
  int64_t Time; // [xsp+10h] [xbp-70h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C43009 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    sub_1C37058(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__);
    sub_1C37058(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C43009 = 1;
  }
  entity = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v46 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_78;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_78;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v12 = Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
          }
          list = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            list = (__int64)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_78;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL),
                 (int32_t)v12[1].klass,
                 0) )
          {
            list = (__int64)entity;
            if ( entity )
            {
              list = UserEventMissionEntity__isClearMission(entity, 0);
              if ( (list & 1) == 0 )
                goto LABEL_66;
              goto LABEL_27;
            }
            goto LABEL_78;
          }
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          list = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v12[3].monitor <= Time
            && (__int64)v12[4].klass < Time
            && Time <= (__int64)v12[4].monitor )
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v12[1].monitor),
                                            (int32_t)v12[1].klass,
                                            4,
                                            v21);
          }
          else
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v12[1].monitor),
                                            (int32_t)v12[1].klass,
                                            v20);
          }
          v23 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            max_length = MissionCondListHighPriority->max_length;
            if ( max_length )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v10 == v9 )
        goto LABEL_70;
    }
    v25 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v25 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v25->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v25->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v28, v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v23,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (__int64)System_Linq_Enumerable__ToArray_object_(
                      v30,
                      (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_78;
    v32 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_79:
      sub_1C372BC(list);
    v33 = *(_QWORD *)(list + 32);
    if ( !v33 )
      goto LABEL_78;
    if ( (int)max_length < 1 )
      goto LABEL_66;
    v34 = *(_DWORD *)(v33 + 36);
    v35 = 1;
    list = 1;
    while ( 1 )
    {
      v36 = *(_QWORD *)(v32 + 8LL * (v35 - 1) + 32);
      if ( !v36 )
        goto LABEL_78;
      if ( *(_DWORD *)(v36 + 20) == 4 )
      {
        if ( v34 != *(_DWORD *)(v36 + 36) )
        {
          v34 = *(_DWORD *)(v36 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_27;
LABEL_58:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v32 + 8LL * (v35 - 1) + 32),
                   v31);
          v37 = ((_DWORD)max_length == v35) & (unsigned __int8)list;
          goto LABEL_59;
        }
        if ( (list & 1) != 0 )
          goto LABEL_58;
        v37 = 0;
        list = 0;
      }
      else
      {
        v37 = 0;
      }
LABEL_59:
      if ( v35 >= (int)max_length || (v37 & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_66;
LABEL_27:
        if ( v46 )
        {
          items = v46->fields._items;
          v17 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v46->fields._version;
          if ( items )
          {
            size = v46->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v46,
                v12,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v46->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v12;
              sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
            }
            goto LABEL_66;
          }
        }
LABEL_78:
        sub_1C372B4(list);
      }
      if ( (unsigned int)v35++ >= *(_DWORD *)(v32 + 24) )
        goto LABEL_79;
    }
  }
LABEL_70:
  list = (__int64)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = (__int64)EventMissionMaster___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v39 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (__int64)EventMissionMaster___c_TypeInfo;
    }
    v40 = **(Il2CppObject ***)(list + 184);
    v39 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0);
    v41 = EventMissionMaster___c_TypeInfo->static_fields;
    v41->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v39;
    sub_1C36FFC((CGThumbnailListItem_o *)&v41->__9__13_0, (int32_t)v39, v42, v43);
  }
  if ( !v46 )
    goto LABEL_78;
  System_Collections_Generic_List_object___Sort_58346216(
    v46,
    v39,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v46,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int64_t v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C43001 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C43001 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_28;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v10,
                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v13 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v7 >= *(_QWORD *)(Time + 56)
          && v7 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), v13, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1C372B4(Time);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v18 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v19 = **(Il2CppObject ***)(Time + 184);
    v18 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v18, v21, v22);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v18,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


int32_t EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t Time; // x0
  int64_t v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int64_t v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C4300A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4300A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_22;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v10,
                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v13 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && v7 >= *(_QWORD *)(Time + 56) && v7 < *(_QWORD *)(Time + 64) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), v13, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C372B4(Time);
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
  int64_t Time; // x0
  int64_t v7; // x22
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int64_t v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C42FFD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C42FFD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_28;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v10,
                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v13 = Time;
        if ( *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v7 >= *(_QWORD *)(Time + 56)
          && v7 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), v13, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1C372B4(Time);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v18 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v19 = **(Il2CppObject ***)(Time + 184);
    v18 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v18, v21, v22);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v18,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *EventMissionMaster__getEventMissionList_42044040(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  void *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w23
  Il2CppObject *v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x20
  Il2CppObject *v18; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C42FFE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__);
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C42FFE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( list )
      {
        v10 = (Il2CppObject *)list;
        if ( *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v14 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v10,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v16[4] = (Il2CppClass *)v10;
              sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
            }
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1C372B4(list);
  }
LABEL_19:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  v17 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)list + 23);
    v17 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v17, v18, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v17;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)v17, v20, v21);
  }
  if ( !v5 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_58346216(
    v5,
    v17,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *EventMissionMaster__getEventMissionList_42044736(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C42FFF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4C42FFF = 1;
  }
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                    (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( !idList )
    goto LABEL_19;
  max_length = idList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C372BC(list);
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        &entity,
                                                                                        idList->m_Items[v8],
                                                                                        (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        v11 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) != 7 )
        {
          if ( !v5 )
            goto LABEL_19;
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v11,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
          }
        }
      }
      LODWORD(max_length) = idList->max_length;
    }
    while ( (__int64)++v8 < (int)max_length );
  }
  if ( !v5 )
LABEL_19:
    sub_1C372B4(list);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Int32_array *EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  int64_t Time; // x0
  int64_t v7; // x22
  int v8; // w23
  int32_t v9; // w24
  int32_t v10; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C43000 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43000 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_22;
  v7 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v8 = Time;
    v9 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v9,
                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time
        && *(_DWORD *)(Time + 28) == eventId
        && *(_DWORD *)(Time + 24) != 7
        && v7 >= *(_QWORD *)(Time + 56)
        && v7 <= *(_QWORD *)(Time + 72) )
      {
        if ( !v5 )
          break;
        v10 = *(_DWORD *)(Time + 16);
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v10,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size] = v10;
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C372B4(Time);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t EventMissionMaster__getMissionType(EventMissionMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x0
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  System_Collections_ObjectModel_Collection_T__o *v7; // x21
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  Il2CppObject *Item; // x0
  int32_t result; // w0

  if ( (byte_4C43008 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43008 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_18;
  v7 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v10,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        if ( HIDWORD(Item[1].monitor) == eventId
          && (__int64)v7 >= (__int64)Item[3].monitor
          && (__int64)v7 <= (__int64)Item[4].klass )
        {
          result = (int32_t)Item[1].monitor;
          if ( (unsigned int)result <= 5 && ((1 << result) & 0x34) != 0 )
            return result;
        }
      }
      if ( v9 == ++v10 )
        return 2;
    }
LABEL_18:
    sub_1C372B4(Time);
  }
  return 2;
}


EventMissionEntity_o *EventMissionMaster__getTargetEventMissionEntity(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  EventMissionEntity_o *result; // x0

  if ( (byte_4C4300B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4300B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_17;
  v8 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         Time,
                                         v11,
                                         (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( result
        && result->fields.missionTargetId == eventId
        && v8 >= result->fields.startedAt
        && v8 <= result->fields.closedAt
        && result->fields.id == targetMissionId )
      {
        return result;
      }
      if ( v10 == ++v11 )
        return 0;
    }
LABEL_17:
    sub_1C372B4(Time);
  }
  return 0;
}


bool EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x2
  int v5; // w8
  void *v6; // x20
  bool v7; // w21
  int v8; // w22
  __int64 v9; // x8

  if ( (byte_4C43003 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43003 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_14;
  v5 = *((_DWORD *)Instance + 6);
  v6 = Instance;
  v7 = v5 > 0;
  if ( v5 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v5 )
        sub_1C372BC(Instance);
      v9 = *((_QWORD *)v6 + v8 + 4);
      if ( !v9 )
        break;
      Instance = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v9 + 20), v4);
      if ( !Instance )
        break;
      if ( !*((_QWORD *)Instance + 3) )
      {
        v5 = *((_DWORD *)v6 + 6);
        v7 = ++v8 < v5;
        if ( v8 < v5 )
          continue;
      }
      return v7;
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
  return v7;
}


void EventMissionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4300C & 1) == 0 )
  {
    sub_1C37058(&EventMissionMaster___c_TypeInfo);
    byte_4C4300C = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventMissionMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventMissionMaster___c___ctor(EventMissionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionMaster___c___GetDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___GetExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___GetLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___GetWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___getClearMasterMissionList_b__13_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C372B4(this);
  return value->fields.condGroup;
}


int32_t EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.id - b->fields.id;
}


int32_t EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C372B4(this);
  return a->fields.id - b->fields.id;
}