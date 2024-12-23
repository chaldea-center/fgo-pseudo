void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66BB2 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__,
      method);
    byte_4B66BB2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    142,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_4B66BB0 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4B66BB0 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
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
  __int64 v12; // x1
  void *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v16; // x23
  int32_t v17; // w24
  EventMissionActionAddEntity_o *v18; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4B66BB3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1BE4ACC(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4B66BB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_1BE4D28(Instance, v14);
  }
  v16 = (CommonReleaseMaster_o *)Instance;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_17;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v17,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    v18 = (EventMissionActionAddEntity_o *)Instance;
    methodPtr_low = LOBYTE(EventMissionActionAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_17;
    }
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !v16 )
        goto LABEL_17;
      Instance = (void *)CommonReleaseMaster__IsOpen(v16, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v18;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_17;
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
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t v22; // w24
  Il2CppObject *v23; // x25
  __int64 methodPtr_low; // x10
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x19
  Il2CppObject *v36; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B66BB5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1BE4ACC(&EventMissionActionAddEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v16);
    sub_1BE4ACC(&EventMissionActionAddMaster___c_TypeInfo, v17);
    byte_4B66BB5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_30;
  v22 = 0;
  while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_30;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v22,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_30;
    v23 = (Il2CppObject *)Instance;
    methodPtr_low = LOBYTE(EventMissionActionAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_30;
    }
    if ( *((_DWORD *)Instance + 4) == missionID && *((_DWORD *)Instance + 5) == progressType )
    {
      if ( !MasterData_object )
        goto LABEL_30;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0LL,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_30;
        items = v21->fields._items;
        v32 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v23,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v23, v25, v26, v27, v28, v29, v30);
        }
      }
    }
    Instance = this->fields.list;
    ++v22;
    if ( !Instance )
      goto LABEL_30;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v21 )
LABEL_30:
    sub_1BE4D28(Instance, v19);
  System_Collections_Generic_List_object___Sort_56548584(
    v21,
    v35,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v21;
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
  __int64 v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v19; // x24
  int32_t v20; // w25
  Il2CppObject *v21; // x26
  __int64 methodPtr_low; // x10
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

  if ( (byte_4B66BB4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1BE4ACC(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B66BB4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v19 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_22:
    sub_1BE4D28(Instance, v17);
  }
  v20 = 0;
  while ( v20 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v20,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_22;
    v21 = (Il2CppObject *)Instance;
    methodPtr_low = LOBYTE(EventMissionActionAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == actionType )
    {
      if ( !MasterData_object )
        goto LABEL_22;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0LL,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_22;
        items = v19->fields._items;
        v30 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            v21,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v21;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v21, v23, v24, v25, v26, v27, v28);
        }
      }
    }
    Instance = this->fields.list;
    ++v20;
    if ( !Instance )
      goto LABEL_22;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v19;
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
  __int64 v17; // x1
  void *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t v22; // w24
  Il2CppObject *v23; // x25
  __int64 methodPtr_low; // x10
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Comparison_T__o *v35; // x19
  Il2CppObject *v36; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B66BB6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1BE4ACC(&EventMissionActionAddEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BE4ACC(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v16);
    sub_1BE4ACC(&EventMissionActionAddMaster___c_TypeInfo, v17);
    byte_4B66BB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_31;
  v22 = 0;
  while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v22,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_31;
    v23 = (Il2CppObject *)Instance;
    methodPtr_low = LOBYTE(EventMissionActionAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(EventMissionActionAddEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != EventMissionActionAddEntity_TypeInfo )
    {
      goto LABEL_31;
    }
    if ( *((_DWORD *)Instance + 4) == missionID
      && *((_DWORD *)Instance + 5) == progressType
      && *((_DWORD *)Instance + 9) == 7 )
    {
      if ( !MasterData_object )
        goto LABEL_31;
      Instance = (void *)CommonReleaseMaster__IsOpen(
                           (CommonReleaseMaster_o *)MasterData_object,
                           *((_DWORD *)Instance + 8),
                           0LL,
                           0,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_31;
        items = v21->fields._items;
        v32 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_31;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v23,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v23;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v23, v25, v26, v27, v28, v29, v30);
        }
      }
    }
    Instance = this->fields.list;
    ++v22;
    if ( !Instance )
      goto LABEL_31;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v35 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v35,
      v36,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v35;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v21 )
LABEL_31:
    sub_1BE4D28(Instance, v19);
  System_Collections_Generic_List_object___Sort_56548584(
    v21,
    v35,
    (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v21;
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

  if ( (byte_4B66BB1 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      entity);
    byte_4B66BB1 = 1;
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
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
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

  if ( (byte_4B66BB7 & 1) == 0 )
  {
    sub_1BE4ACC(&EventMissionActionAddMaster___c_TypeInfo, v1);
    byte_4B66BB7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
  return a->fields.id - b->fields.id;
}