void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAE61 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__,
      method);
    byte_49BAE61 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    142,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionAddEntity_o *__fastcall EventMissionActionAddMaster__GetEntity(
        EventMissionActionAddMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BAE5F & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_49BAE5F = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31A2454 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionAddEntity_o *__fastcall EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Instance; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v15; // x23
  int32_t v16; // w24
  EventMissionActionAddEntity_o *v17; // x25

  if ( (byte_49BAE62 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49BAE62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_15:
    sub_1B4D1EC(Instance, v13);
  }
  v15 = (CommonReleaseMaster_o *)Instance;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_15;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v16,
                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_15;
    v17 = (EventMissionActionAddEntity_o *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !v15 )
        goto LABEL_15;
      Instance = (void *)CommonReleaseMaster__IsOpen(v15, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v17;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_15;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  void *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w24
  Il2CppObject *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x19
  Il2CppObject *v30; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_49BAE64 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v7);
    sub_1B4CF90(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B4CF90(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v15);
    sub_1B4CF90(&EventMissionActionAddMaster___c_TypeInfo, v16);
    byte_49BAE64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_28;
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v21,
                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v22 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID && *((_DWORD *)Instance + 5) == progressType )
    {
      if ( !MasterData_object )
        goto LABEL_28;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0LL,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_28;
        items = v20->fields._items;
        v26 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_28;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v22,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v22;
          sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
        }
      }
    }
    Instance = this->fields.list;
    ++v21;
    if ( !Instance )
      goto LABEL_28;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v29 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v29,
      v30,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v29;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v29, v32, v33);
  }
  if ( !v20 )
LABEL_28:
    sub_1B4D1EC(Instance, v18);
  System_Collections_Generic_List_object___Sort_56106144(
    v20,
    v29,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t v19; // w25
  Il2CppObject *v20; // x26
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49BAE63 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49BAE63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_20:
    sub_1B4D1EC(Instance, v16);
  }
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v19,
                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_20;
    v20 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !MasterData_object )
        goto LABEL_20;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0LL,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v24 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v20,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v20;
          sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
        }
      }
    }
    Instance = this->fields.list;
    ++v19;
    if ( !Instance )
      goto LABEL_20;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetSafeActionListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  void *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w24
  Il2CppObject *v22; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x19
  Il2CppObject *v30; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_49BAE65 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v7);
    sub_1B4CF90(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B4CF90(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v15);
    sub_1B4CF90(&EventMissionActionAddMaster___c_TypeInfo, v16);
    byte_49BAE65 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v21,
                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_29;
    v22 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == 7 )
    {
      if ( !MasterData_object )
        goto LABEL_29;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0LL,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_29;
        items = v20->fields._items;
        v26 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v22,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v22;
          sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
        }
      }
    }
    Instance = this->fields.list;
    ++v21;
    if ( !Instance )
      goto LABEL_29;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v29 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v29,
      v30,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v29;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)v29, v32, v33);
  }
  if ( !v20 )
LABEL_29:
    sub_1B4D1EC(Instance, v18);
  System_Collections_Generic_List_object___Sort_56106144(
    v20,
    v29,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionActionAddMaster__TryGetEntity(
        EventMissionActionAddMaster_o *this,
        EventMissionActionAddEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BAE60 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      entity);
    byte_49BAE60 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BAE66 & 1) == 0 )
  {
    sub_1B4CF90(&EventMissionActionAddMaster___c_TypeInfo, v1);
    byte_49BAE66 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventMissionActionAddMaster___c___ctor(
        EventMissionActionAddMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionActionAddMaster___c___GetEntityListFromIDnType_b__5_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.id - b->fields.id;
}