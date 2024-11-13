void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B161E9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__,
      method,
      v2);
    byte_4B161E9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_4B161E7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId,
      *(_QWORD *)&missionProgressType);
    byte_4B161E7 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  void *Instance; // x0
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v20; // x23
  int32_t v21; // w24
  EventMissionActionAddEntity_o *v22; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_4B161EA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11, v12);
    sub_1BCA7E0(&EventMissionActionAddEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B161EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v18);
  }
  v20 = (CommonReleaseMaster_o *)Instance;
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_17;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v21,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    v22 = (EventMissionActionAddEntity_o *)Instance;
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
      if ( !v20 )
        goto LABEL_17;
      Instance = (void *)CommonReleaseMaster__IsOpen(v20, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v22;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v21;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  void *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x22
  int32_t v36; // w24
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x25
  __int64 methodPtr_low; // x10
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Comparison_T__o *v51; // x19
  Il2CppObject *v52; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B161EC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11, v12);
    sub_1BCA7E0(&EventMissionActionAddEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v25, v26);
    sub_1BCA7E0(&EventMissionActionAddMaster___c_TypeInfo, v27, v28);
    byte_4B161EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_30;
  v36 = 0;
  while ( v36 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_30;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v36,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_30;
    v39 = (Il2CppObject *)Instance;
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
        if ( !v35 )
          goto LABEL_30;
        items = v35->fields._items;
        v48 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v35->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v35->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            v39,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v35->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v39, v41, v42, v43, v44, v45, v46);
        }
      }
    }
    Instance = this->fields.list;
    ++v36;
    if ( !Instance )
      goto LABEL_30;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo, v30);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v30);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionActionAddEntity__TypeInfo, v30, v37, v38);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v35 )
LABEL_30:
    sub_1BCAA3C(Instance, v30);
  System_Collections_Generic_List_object___Sort_56244000(
    v35,
    v51,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v35;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  void *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x24
  int32_t v30; // w25
  Il2CppObject *v31; // x26
  __int64 methodPtr_low; // x10
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4B161EB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11, v12);
    sub_1BCA7E0(&EventMissionActionAddEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B161EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                             v26,
                                                             v27,
                                                             v28),
        System_Collections_Generic_List_object____ctor(
          v29,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v24);
  }
  v30 = 0;
  while ( v30 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v30,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_22;
    v31 = (Il2CppObject *)Instance;
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
        if ( !v29 )
          goto LABEL_22;
        items = v29->fields._items;
        v40 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            v31,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v29->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v31;
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v31, v33, v34, v35, v36, v37, v38);
        }
      }
    }
    Instance = this->fields.list;
    ++v30;
    if ( !Instance )
      goto LABEL_22;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v29;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetSafeActionListFromIDnType(
        EventMissionActionAddMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  void *Instance; // x0
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x22
  int32_t v36; // w24
  __int64 v37; // x2
  __int64 v38; // x3
  Il2CppObject *v39; // x25
  __int64 methodPtr_low; // x10
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Comparison_T__o *v51; // x19
  Il2CppObject *v52; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B161ED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v11, v12);
    sub_1BCA7E0(&EventMissionActionAddEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v25, v26);
    sub_1BCA7E0(&EventMissionActionAddMaster___c_TypeInfo, v27, v28);
    byte_4B161ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_31;
  v36 = 0;
  while ( v36 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v36,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_31;
    v39 = (Il2CppObject *)Instance;
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
        if ( !v35 )
          goto LABEL_31;
        items = v35->fields._items;
        v48 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v35->fields._version;
        if ( !items )
          goto LABEL_31;
        size = v35->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            v39,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v35->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v39, v41, v42, v43, v44, v45, v46);
        }
      }
    }
    Instance = this->fields.list;
    ++v36;
    if ( !Instance )
      goto LABEL_31;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo, v30);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v30);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v52 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v51 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionActionAddEntity__TypeInfo, v30, v37, v38);
    System_Comparison_object____ctor(
      v51,
      v52,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v51, v54, v55, v56, v57, v58, v59);
  }
  if ( !v35 )
LABEL_31:
    sub_1BCAA3C(Instance, v30);
  System_Collections_Generic_List_object___Sort_56244000(
    v35,
    v51,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v35;
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

  if ( (byte_4B161E8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&missionId);
    byte_4B161E8 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B161EE & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionActionAddMaster___c_TypeInfo, v1, v2);
    byte_4B161EE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMissionActionAddMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}