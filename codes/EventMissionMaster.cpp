void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E4D7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, method);
    byte_4A4E4D7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__GetDailyMasterMissionList(
        EventMissionMaster_o *this,
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
  System_Collections_Generic_List_object__o *v16; // x19
  int64_t Time; // x0
  __int64 v18; // x1
  int64_t v19; // x22
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v24; // x25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4A4E4DF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B863B8(&MissionInfoMaker_TypeInfo, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&Method_EventMissionMaster___c__GetDailyMasterMissionList_b__8_0__, v14);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v15);
    byte_4A4E4DF = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               v22,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v24 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 3
          && (__int64)Item[3].monitor <= v19
          && (__int64)Item[4].monitor >= v19 )
        {
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          Time = MissionInfoMaker__GetMissionProgressType(v24, 0LL);
          if ( (_DWORD)Time )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v28 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v24,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1B8635C((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
            }
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_23;
    }
LABEL_31:
    sub_1B86614(Time, v18);
  }
LABEL_23:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v31 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v32 = **(Il2CppObject ***)(Time + 184);
    v31 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_EventMissionMaster___c__GetDailyMasterMissionList_b__8_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v31;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)v31, v34, v35);
  }
  if ( !v16 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_56615964(
    v16,
    v31,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__GetExtraMissionList(
        EventMissionMaster_o *this,
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t Time; // x0
  __int64 v19; // x1
  int64_t v20; // x23
  int32_t Count; // w0
  int32_t v22; // w24
  int32_t i; // w25
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v25; // x26
  Il2CppObject *Master_object; // x27
  UserEventMissionEntity_o *Entity; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4A4E4E1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventMissionMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1B863B8(&MissionInfoMaker_TypeInfo, v13);
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    sub_1B863B8(&Method_EventMissionMaster___c__GetExtraMissionList_b__10_0__, v15);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v16);
    byte_4A4E4E1 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_44;
  v20 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    for ( i = 0; v22 != i; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_44;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               i,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v25 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId && LODWORD(Item[1].monitor) == 4 && (__int64)Item[3].monitor <= v20 )
        {
          if ( (__int64)Item[4].klass >= v20 )
          {
            if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            Time = MissionInfoMaker__GetMissionProgressType(v25, 0LL);
            if ( !(_DWORD)Time )
              continue;
LABEL_30:
            if ( !v17 )
              goto LABEL_44;
            items = v17->fields._items;
            v31 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              goto LABEL_44;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)v25,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v25;
              sub_1B8635C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v25, v28, v29);
            }
            continue;
          }
          if ( (__int64)Item[4].monitor >= v20 )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4A48C25 )
            {
              sub_1B863B8(&NetworkManager_TypeInfo, v19);
              byte_4A48C25 = 1;
            }
            Time = (int64_t)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = (int64_t)NetworkManager_TypeInfo;
            }
            if ( !Master_object )
              goto LABEL_44;
            Entity = UserEventMissionMaster__GetEntity(
                       (UserEventMissionMaster_o *)Master_object,
                       *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                       v25->fields.id,
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
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
  v34 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 48LL);
  if ( !v34 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v35 = **(Il2CppObject ***)(Time + 184);
    v34 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventMissionMaster___c__GetExtraMissionList_b__10_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v34;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)v34, v37, v38);
  }
  if ( !v17 )
LABEL_44:
    sub_1B86614(Time, v19);
  System_Collections_Generic_List_object___Sort_56615964(
    v17,
    v34,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__GetLimitedMissionList(
        EventMissionMaster_o *this,
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t Time; // x0
  __int64 v17; // x1
  int64_t v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v23; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4A4E4E2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v10);
    sub_1B863B8(&MissionInfoMaker_TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&Method_EventMissionMaster___c__GetLimitedMissionList_b__11_0__, v13);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v14);
    byte_4A4E4E2 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               v21,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v23 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == 5
          && (__int64)Item[3].monitor <= v18
          && (__int64)Item[4].monitor >= v18 )
        {
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          Time = MissionInfoMaker__GetMissionProgressType(v23, 0LL);
          if ( (_DWORD)Time )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v27 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                (Il2CppObject *)v23,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v23;
              sub_1B8635C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
            }
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_23;
    }
LABEL_31:
    sub_1B86614(Time, v17);
  }
LABEL_23:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v30 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v31 = **(Il2CppObject ***)(Time + 184);
    v30 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_EventMissionMaster___c__GetLimitedMissionList_b__11_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v30;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v30, v33, v34);
  }
  if ( !v15 )
    goto LABEL_31;
  System_Collections_Generic_List_object___Sort_56615964(
    v15,
    v30,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__GetWeeklyMasterMissionList(
        EventMissionMaster_o *this,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x22
  int64_t Time; // x0
  __int64 v21; // x1
  int64_t v22; // x23
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t i; // w25
  Il2CppObject *Item; // x0
  EventMissionEntity_o *v27; // x26
  Il2CppObject *Master_object; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x8
  int64_t v36; // x27
  int v37; // w29
  int v38; // w21
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4E4E0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventMissionMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v14);
    sub_1B863B8(&MissionInfoMaker_TypeInfo, v15);
    sub_1B863B8(&NetworkManager_TypeInfo, v16);
    sub_1B863B8(&Method_EventMissionMaster___c__GetWeeklyMasterMissionList_b__9_0__, v17);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v18);
    byte_4A4E4E0 = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_59;
  v22 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    for ( i = 0; i != v24; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_59;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Time,
               i,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v27 = (EventMissionEntity_o *)Item;
        if ( HIDWORD(Item[1].monitor) == eventId && LODWORD(Item[1].monitor) == 2 && (__int64)Item[3].monitor <= v22 )
        {
          if ( (__int64)Item[4].klass >= v22 )
          {
            if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            Time = MissionInfoMaker__GetMissionProgressType(v27, 0LL);
            if ( !(_DWORD)Time )
              continue;
            goto LABEL_31;
          }
          if ( v22 > (__int64)Item[4].monitor )
            continue;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, v21);
            byte_4A48C25 = 1;
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
                 v27->fields.id,
                 0LL) )
          {
            Time = (int64_t)entity;
            if ( !entity )
              goto LABEL_59;
            Time = UserEventMissionEntity__isClearMission(entity, 0LL);
            if ( (Time & 1) == 0 )
              continue;
            goto LABEL_31;
          }
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_59;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            v27->fields.missionTargetId,
                            v27->fields.id,
                            0LL);
          if ( Time )
          {
            v35 = *(_QWORD *)(Time + 24);
            v36 = Time;
            if ( v35 )
            {
              v37 = v35 - 1;
              if ( (int)v35 >= 1 )
              {
                if ( !(_DWORD)v35 )
LABEL_50:
                  sub_1B8661C(Time, v21);
                v38 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v36 + 8LL * v38 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, 0LL);
                  if ( (Time & 1) == 0 )
                    goto LABEL_36;
                  if ( v37 == v38 )
                    goto LABEL_31;
                  if ( (unsigned int)++v38 >= *(_DWORD *)(v36 + 24) )
                    goto LABEL_50;
                }
LABEL_59:
                sub_1B86614(Time, v21);
              }
LABEL_31:
              if ( !v19 )
                goto LABEL_59;
              items = v19->fields._items;
              v32 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                goto LABEL_59;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v27,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v27;
                sub_1B8635C((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v27, v29, v30);
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
  v39 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 40LL);
  if ( !v39 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v40 = **(Il2CppObject ***)(Time + 184);
    v39 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_EventMissionMaster___c__GetWeeklyMasterMissionList_b__9_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v39;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)v39, v42, v43);
  }
  if ( !v19 )
    goto LABEL_59;
  System_Collections_Generic_List_object___Sort_56615964(
    v19,
    v39,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v19,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x23
  NetworkManager_c *v17; // x0
  int64_t userIdNumber; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A4E4DD & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionData);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A4E4DD = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_28;
  if ( missionData->fields._size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v15);
        byte_4A48C25 = 1;
      }
      v17 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v17 = NetworkManager_TypeInfo;
      }
      userIdNumber = v17->static_fields->userIdNumber;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)missionData,
                                    v14,
                                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             (UserEventMissionMaster_o *)MasterData_object,
             &entity,
             userIdNumber,
             Instance->fields.m_CachedPtr,
             0LL) )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          break;
        if ( UserEventMissionEntity__isAchieveMission(entity, 0LL) )
        {
          Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)missionData,
                                        v14,
                                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v14,
                                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v11 )
              break;
            v13 = *(unsigned int *)&Instance->fields._DispLog;
            items = v11->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                v13,
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = size + 1;
              items->m_Items[size + 1] = v13;
            }
          }
        }
      }
      if ( ++v14 >= missionData->fields._size )
        return v11;
    }
LABEL_28:
    sub_1B86614(Instance, v13);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
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
  __int64 list; // x0
  int32_t Count; // w0
  int32_t v27; // w25
  int32_t v28; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v30; // x27
  Il2CppObject *MasterData_object; // x28
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x28
  __int64 v40; // x24
  EventMissionMaster___c_c *v41; // x0
  System_Func_object__int__o *_9__13_1; // x29
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  __int64 v47; // x28
  __int64 v48; // x9
  int v49; // w23
  int v50; // w29
  __int64 v51; // x8
  int v52; // w8
  System_Comparison_T__o *v54; // x19
  Il2CppObject *v55; // x20
  struct EventMissionMaster___c_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_object__o *v61; // [xsp+8h] [xbp-78h]
  int64_t Time; // [xsp+10h] [xbp-70h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A4E4E4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v7);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v12);
    sub_1B863B8(&System_Func_EventMissionConditionEntity__int__TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v17);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v18);
    sub_1B863B8(&NetworkManager_TypeInfo, v19);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B863B8(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v21);
    sub_1B863B8(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v22);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v23);
    byte_4A4E4E4 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v61 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_78;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_78;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v28,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v30 = Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4A48C25 )
          {
            sub_1B863B8(&NetworkManager_TypeInfo, v24);
            byte_4A48C25 = 1;
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
                 (int32_t)v30[1].klass,
                 0LL) )
          {
            list = (__int64)entity;
            if ( entity )
            {
              list = UserEventMissionEntity__isClearMission(entity, 0LL);
              if ( (list & 1) == 0 )
                goto LABEL_66;
              goto LABEL_27;
            }
            goto LABEL_78;
          }
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          list = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v30[3].monitor <= Time
            && (__int64)v30[4].klass < Time
            && Time <= (__int64)v30[4].monitor )
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v30[1].monitor),
                                            (int32_t)v30[1].klass,
                                            4,
                                            0LL);
          }
          else
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v30[1].monitor),
                                            (int32_t)v30[1].klass,
                                            0LL);
          }
          v39 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            v40 = *(_QWORD *)&MissionCondListHighPriority->max_length;
            if ( v40 )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v28 == v27 )
        goto LABEL_70;
    }
    v41 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v41 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v41->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v41->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0LL);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v44, v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v39,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_2F9AB50 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (__int64)System_Linq_Enumerable__ToArray_object_(
                      v46,
                      (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_78;
    v47 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_79:
      sub_1B8661C(list, v24);
    v48 = *(_QWORD *)(list + 32);
    if ( !v48 )
      goto LABEL_78;
    if ( (int)v40 < 1 )
      goto LABEL_66;
    v49 = *(_DWORD *)(v48 + 36);
    v50 = 1;
    list = 1LL;
    while ( 1 )
    {
      v51 = *(_QWORD *)(v47 + 8LL * (v50 - 1) + 32);
      if ( !v51 )
        goto LABEL_78;
      if ( *(_DWORD *)(v51 + 20) == 4 )
      {
        if ( v49 != *(_DWORD *)(v51 + 36) )
        {
          v49 = *(_DWORD *)(v51 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_27;
LABEL_58:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v47 + 8LL * (v50 - 1) + 32),
                   0LL);
          v52 = ((_DWORD)v40 == v50) & (unsigned __int8)list;
          goto LABEL_59;
        }
        if ( (list & 1) != 0 )
          goto LABEL_58;
        v52 = 0;
        list = 0LL;
      }
      else
      {
        v52 = 0;
      }
LABEL_59:
      if ( v50 >= (int)v40 || (v52 & 1) != 0 )
      {
        if ( !v52 )
          goto LABEL_66;
LABEL_27:
        if ( v61 )
        {
          items = v61->fields._items;
          v35 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v61->fields._version;
          if ( items )
          {
            size = v61->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v61,
                v30,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v61->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v30;
              sub_1B8635C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
            }
            goto LABEL_66;
          }
        }
LABEL_78:
        sub_1B86614(list, v24);
      }
      if ( (unsigned int)v50++ >= *(_DWORD *)(v47 + 24) )
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
  v54 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v54 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (__int64)EventMissionMaster___c_TypeInfo;
    }
    v55 = **(Il2CppObject ***)(list + 184);
    v54 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v54, v55, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0LL);
    v56 = EventMissionMaster___c_TypeInfo->static_fields;
    v56->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v54;
    sub_1B8635C((CGThumbnailListItem_o *)&v56->__9__13_0, (int32_t)v54, v57, v58);
  }
  if ( !v61 )
    goto LABEL_78;
  System_Collections_Generic_List_object___Sort_56615964(
    v61,
    v54,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v61,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t Time; // x0
  int64_t v17; // x1
  int64_t v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4A4E4DC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v13);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v14);
    byte_4A4E4DC = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v21,
                        (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v17 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v18 >= *(_QWORD *)(Time + 56)
          && v18 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Time,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v17;
            sub_1B8635C((CGThumbnailListItem_o *)(v27 + 4), v17, v22, v23);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B86614(Time, v17);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v28 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v29 = **(Il2CppObject ***)(Time + 184);
    v28 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v28;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56615964(
    v15,
    v28,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t Time; // x0
  int64_t v13; // x1
  int64_t v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A4E4E5 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v8);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    byte_4A4E4E5 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v14 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v17,
                        (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v13 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && v14 >= *(_QWORD *)(Time + 56) && v14 < *(_QWORD *)(Time + 64) )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v21 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)Time,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v13;
            sub_1B8635C((CGThumbnailListItem_o *)(v23 + 4), v13, v18, v19);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B86614(Time, v13);
  }
LABEL_19:
  if ( v11 )
    return v11->fields._size;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t Time; // x0
  int64_t v17; // x1
  int64_t v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_4A4E4D8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v13);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v14);
    byte_4A4E4D8 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v21,
                        (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v17 = Time;
        if ( *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v18 >= *(_QWORD *)(Time + 56)
          && v18 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Time,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v17;
            sub_1B8635C((CGThumbnailListItem_o *)(v27 + 4), v17, v22, v23);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B86614(Time, v17);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v28 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v29 = **(Il2CppObject ***)(Time + 184);
    v28 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v28;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56615964(
    v15,
    v28,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_40162240(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
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
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  Il2CppObject *v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4A4E4D9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, idList);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1B863B8(&NetworkManager_TypeInfo, v13);
    sub_1B863B8(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v14);
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v15);
    byte_4A4E4D9 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( list )
      {
        v22 = (Il2CppObject *)list;
        if ( *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v26 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v22,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v22;
              sub_1B8635C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
            }
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1B86614(list, v17);
  }
LABEL_19:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v29;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)v29, v32, v33);
  }
  if ( !v16 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_56615964(
    v16,
    v29,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_40162936(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  Il2CppObject *v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4E4DA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, idList);
    sub_1B863B8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    byte_4A4E4DA = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                    (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( !idList )
    goto LABEL_19;
  v13 = *(_QWORD *)&idList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B8661C(list, v11);
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        &entity,
                                                                                        idList->m_Items[v14 + 1],
                                                                                        (const MethodInfo_32142CC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        v11 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) != 7 )
        {
          if ( !v10 )
            goto LABEL_19;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v11,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1B8635C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      LODWORD(v13) = idList->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v10 )
LABEL_19:
    sub_1B86614(list, v11);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x21
  int64_t Time; // x0
  __int64 v13; // x1
  int64_t v14; // x22
  int v15; // w23
  int32_t v16; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4A4E4DB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    byte_4A4E4DB = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v14 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v15 = Time;
    v16 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v16,
                        (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time
        && *(_DWORD *)(Time + 28) == eventId
        && *(_DWORD *)(Time + 24) != 7
        && v14 >= *(_QWORD *)(Time + 56)
        && v14 <= *(_QWORD *)(Time + 72) )
      {
        if ( !v11 )
          break;
        v13 = *(unsigned int *)(Time + 16);
        items = v11->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v13,
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v13;
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B86614(Time, v13);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getMissionType(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x0
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *v12; // x21
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  Il2CppObject *Item; // x0
  int32_t result; // w0

  if ( (byte_4A4E4E3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    byte_4A4E4E3 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_18;
  v12 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v15,
               (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        if ( HIDWORD(Item[1].monitor) == eventId
          && (__int64)v12 >= (__int64)Item[3].monitor
          && (__int64)v12 <= (__int64)Item[4].klass )
        {
          result = (int32_t)Item[1].monitor;
          if ( (unsigned int)result <= 5 && ((1 << result) & 0x34) != 0 )
            return result;
        }
      }
      if ( v14 == ++v15 )
        return 2;
    }
LABEL_18:
    sub_1B86614(Time, v11);
  }
  return 2;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_o *__fastcall EventMissionMaster__getTargetEventMissionEntity(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v10; // x1
  int64_t v11; // x22
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  EventMissionEntity_o *result; // x0

  if ( (byte_4A4E4E6 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    byte_4A4E4E6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_17;
  v11 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         Time,
                                         v14,
                                         (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( result
        && result->fields.missionTargetId == eventId
        && v11 >= result->fields.startedAt
        && v11 <= result->fields.closedAt
        && result->fields.id == targetMissionId )
      {
        return result;
      }
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_17:
    sub_1B86614(Time, v10);
  }
  return 0LL;
}


bool __fastcall EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int v7; // w8
  void *v8; // x20
  bool v9; // w21
  int v10; // w22
  __int64 v11; // x8

  if ( (byte_4A4E4DE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MstMissionMaster___, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A4E4DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_14;
  v7 = *((_DWORD *)Instance + 6);
  v8 = Instance;
  v9 = v7 > 0;
  if ( v7 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v7 )
        sub_1B8661C(Instance, v5);
      v11 = *((_QWORD *)v8 + v10 + 4);
      if ( !v11 )
        break;
      Instance = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v11 + 20), v6);
      if ( !Instance )
        break;
      if ( !*((_QWORD *)Instance + 3) )
      {
        v7 = *((_DWORD *)v8 + 6);
        v9 = ++v10 < v7;
        if ( v10 < v7 )
          continue;
      }
      return v9;
    }
LABEL_14:
    sub_1B86614(Instance, v5);
  }
  return v9;
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4E4E7 & 1) == 0 )
  {
    sub_1B863B8(&EventMissionMaster___c_TypeInfo, v1);
    byte_4A4E4E7 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)EventMissionMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventMissionMaster___c___ctor(EventMissionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionMaster___c___GetDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___GetExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___GetLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___GetWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1B86614(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B86614(this, a);
  return a->fields.id - b->fields.id;
}