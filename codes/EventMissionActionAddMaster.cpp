void EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C86D & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
    byte_4D2C86D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    142,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionAddEntity_o *EventMissionActionAddMaster__GetEntity(
        EventMissionActionAddMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C86B & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
    byte_4D2C86B = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_345FF78 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
}


EventMissionActionAddEntity_o *EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v12; // x23
  int32_t v13; // w24
  EventMissionActionAddEntity_o *v14; // x25

  if ( (byte_4D2C86E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C86E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_15:
    sub_1C942F0(Instance, v10);
  }
  v12 = (CommonReleaseMaster_o *)Instance;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_15;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_15;
    v14 = (EventMissionActionAddEntity_o *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !v12 )
        goto LABEL_15;
      Instance = (void *)CommonReleaseMaster__IsOpen(v12, *((_DWORD *)Instance + 8), 0, 0, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v14;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_15;
  }
  return 0;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *EventMissionActionAddMaster__GetEntityListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w24
  Il2CppObject *v12; // x25
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x19
  Il2CppObject *v24; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2C870 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__);
    sub_1C94098(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4D2C870 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_28;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v11,
                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v12 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID && *((_DWORD *)Instance + 5) == progressType )
    {
      if ( !MasterData_object )
        goto LABEL_28;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0,
                           0,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_28;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_28;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
      }
    }
    Instance = this->fields.list;
    ++v11;
    if ( !Instance )
      goto LABEL_28;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v23 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v23,
      v24,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v23;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0, (int32_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v10 )
LABEL_28:
    sub_1C942F0(Instance, v8);
  System_Collections_Generic_List_object___Sort_59164920(
    v10,
    v23,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v10;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v12; // x24
  int32_t v13; // w25
  Il2CppObject *v14; // x26
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4D2C86F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C86F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0) )
  {
LABEL_20:
    sub_1C942F0(Instance, v10);
  }
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_20;
    v14 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !MasterData_object )
        goto LABEL_20;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0,
                           0,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_20;
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v14,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v14;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    Instance = this->fields.list;
    ++v13;
    if ( !Instance )
      goto LABEL_20;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v12;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *EventMissionActionAddMaster__GetSafeActionListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w24
  Il2CppObject *v12; // x25
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Comparison_T__o *v23; // x19
  Il2CppObject *v24; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D2C871 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_1C94098(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__);
    sub_1C94098(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4D2C871 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v11,
                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_29;
    v12 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == 7 )
    {
      if ( !MasterData_object )
        goto LABEL_29;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0,
                           0,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_29;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
      }
    }
    Instance = this->fields.list;
    ++v11;
    if ( !Instance )
      goto LABEL_29;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v23 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v23,
      v24,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v23;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)v23, v26, v27, v28, v29, v30, v31);
  }
  if ( !v10 )
LABEL_29:
    sub_1C942F0(Instance, v8);
  System_Collections_Generic_List_object___Sort_59164920(
    v10,
    v23,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
bool EventMissionActionAddMaster__TryGetEntity(
        EventMissionActionAddMaster_o *this,
        EventMissionActionAddEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C86C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
    byte_4D2C86C = 1;
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
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C872 & 1) == 0 )
  {
    sub_1C94098(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4D2C872 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMissionActionAddMaster___c___ctor(EventMissionActionAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionActionAddMaster___c___GetEntityListFromIDnType_b__5_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C942F0(this, a);
  return a->fields.id - b->fields.id;
}