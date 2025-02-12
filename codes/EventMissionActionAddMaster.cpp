void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB46CB & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__,
      method);
    byte_4BB46CB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    142,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_4BB46C9 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4BB46C9 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_323D0DC *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
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

  if ( (byte_4BB46CC & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BB46CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_15:
    sub_1C13F80(Instance, v13);
  }
  v15 = (CommonReleaseMaster_o *)Instance;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_15;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v16,
                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x19
  Il2CppObject *v34; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB46CE & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v7);
    sub_1C13D24(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C13D24(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v15);
    sub_1C13D24(&EventMissionActionAddMaster___c_TypeInfo, v16);
    byte_4BB46CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_28;
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v21,
                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
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
        v30 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_28;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v22,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
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
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v33 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v33,
      v34,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v33;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v33, v36, v37, v38, v39, v40, v41);
  }
  if ( !v20 )
LABEL_28:
    sub_1C13F80(Instance, v18);
  System_Collections_Generic_List_object___Sort_56814736(
    v20,
    v33,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4BB46CD & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BB46CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_20:
    sub_1C13F80(Instance, v16);
  }
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_20;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v19,
                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
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
        v28 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            v20,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v20;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x19
  Il2CppObject *v34; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB46CF & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__,
      *(_QWORD *)&missionID);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__, v7);
    sub_1C13D24(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C13D24(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v15);
    sub_1C13D24(&EventMissionActionAddMaster___c_TypeInfo, v16);
    byte_4BB46CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_29;
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_29;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v21,
                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventMissionActionAddEntity__get_Item__);
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
        v30 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v22,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
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
  v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v33 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v33,
      v34,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v33;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v33, v36, v37, v38, v39, v40, v41);
  }
  if ( !v20 )
LABEL_29:
    sub_1C13F80(Instance, v18);
  System_Collections_Generic_List_object___Sort_56814736(
    v20,
    v33,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
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

  if ( (byte_4BB46CA & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      entity);
    byte_4BB46CA = 1;
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
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB46D0 & 1) == 0 )
  {
    sub_1C13D24(&EventMissionActionAddMaster___c_TypeInfo, v1);
    byte_4BB46D0 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C13F80(this, a);
  return a->fields.id - b->fields.id;
}