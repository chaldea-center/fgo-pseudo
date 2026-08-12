void EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597086F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
    byte_597086F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    144,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_597086D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
    byte_597086D = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3F157EC *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
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

  if ( (byte_5970870 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970870 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0) )
  {
LABEL_15:
    sub_2213CDC(Instance, v10);
  }
  v12 = (CommonReleaseMaster_o *)Instance;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_15;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
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
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__5_0; // x19
  Il2CppObject *v25; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5970872 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__);
    sub_2213A60(&EventMissionActionAddMaster___c_TypeInfo);
    byte_5970872 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_19;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_19;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v11,
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_19;
    v12 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID && *((_DWORD *)Instance + 5) == progressType )
    {
      if ( !MasterData_object )
        goto LABEL_19;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0,
                           0,
                           0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_19;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
      }
    }
    Instance = this->fields.list;
    ++v11;
    if ( !Instance )
      goto LABEL_19;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !*(&EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo, v8);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionAddMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__5_0 = (System_Comparison_T__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__5_0,
      v25,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0);
    v26 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v26->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__5_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__5_0, (int32_t)_9__5_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v10 )
LABEL_19:
    sub_2213CDC(Instance, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v10,
    _9__5_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
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

  if ( (byte_5970871 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970871 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0) )
  {
LABEL_20:
    sub_2213CDC(Instance, v10);
  }
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v14;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
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
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__6_0; // x19
  Il2CppObject *v25; // x20
  struct EventMissionActionAddMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5970873 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    sub_2213A60(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__);
    sub_2213A60(&EventMissionActionAddMaster___c_TypeInfo);
    byte_5970873 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_20;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v11,
                 (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
    if ( !Instance )
      goto LABEL_20;
    v12 = (Il2CppObject *)Instance;
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == 7 )
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
        if ( !v10 )
          goto LABEL_20;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
      }
    }
    Instance = this->fields.list;
    ++v11;
    if ( !Instance )
      goto LABEL_20;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !*(&EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo, v8);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionAddMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__6_0 = (System_Comparison_T__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v8);
      static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__6_0,
      v25,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0);
    v26 = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    v26->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)_9__6_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->__9__6_0, (int32_t)_9__6_0, v27, v28, v29, v30, v31, v32);
  }
  if ( !v10 )
LABEL_20:
    sub_2213CDC(Instance, v8);
  System_Collections_Generic_List_object___Sort_71849708(
    v10,
    _9__6_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
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

  if ( (byte_597086E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
    byte_597086E = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970874 & 1) == 0 )
  {
    sub_2213A60(&EventMissionActionAddMaster___c_TypeInfo);
    byte_5970874 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  return a->fields.id - b->fields.id;
}