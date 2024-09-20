void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B15A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
    byte_4A5B15A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_4A5B158 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
    byte_4A5B158 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
}


EventMissionActionAddEntity_o *__fastcall EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B15B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventMissionActionAddEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B15B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(Instance, v10);
  }
  v12 = (CommonReleaseMaster_o *)Instance;
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_17;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    v14 = (EventMissionActionAddEntity_o *)Instance;
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
      if ( !v12 )
        goto LABEL_17;
      Instance = (void *)CommonReleaseMaster__IsOpen(v12, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v14;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_17;
  }
  return 0LL;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIDnType(
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
  __int64 methodPtr_low; // x10
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5B15D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventMissionActionAddEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__);
    sub_1B885B0(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4A5B15D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_30;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_30;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v11,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_30;
    v12 = (Il2CppObject *)Instance;
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
        if ( !v10 )
          goto LABEL_30;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
        }
      }
    }
    Instance = this->fields.list;
    ++v11;
    if ( !Instance )
      goto LABEL_30;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v20 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v20,
      v21,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v20, v23, v24);
  }
  if ( !v10 )
LABEL_30:
    sub_1B8880C(Instance, v8);
  System_Collections_Generic_List_object___Sort_55571192(
    v10,
    v20,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v10;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetEntityListFromIdProgressTypeAndActionType(
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
  __int64 methodPtr_low; // x10
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5B15C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventMissionActionAddEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B15C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(Instance, v10);
  }
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v13,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_22;
    v14 = (Il2CppObject *)Instance;
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
        if ( !v12 )
          goto LABEL_22;
        items = v12->fields._items;
        v19 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v14,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
        }
      }
    }
    Instance = this->fields.list;
    ++v13;
    if ( !Instance )
      goto LABEL_22;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v12;
}


System_Collections_Generic_List_EventMissionActionAddEntity__o *__fastcall EventMissionActionAddMaster__GetSafeActionListFromIDnType(
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
  __int64 methodPtr_low; // x10
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Comparison_T__o *v20; // x19
  Il2CppObject *v21; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5B15E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionActionAddEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventMissionActionAddEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__);
    sub_1B885B0(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4A5B15E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_31;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v11,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_31;
    v12 = (Il2CppObject *)Instance;
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
        if ( !v10 )
          goto LABEL_31;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_31;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
        }
      }
    }
    Instance = this->fields.list;
    ++v11;
    if ( !Instance )
      goto LABEL_31;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v20 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v20 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionActionAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      v20,
      v21,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v20, v23, v24);
  }
  if ( !v10 )
LABEL_31:
    sub_1B8880C(Instance, v8);
  System_Collections_Generic_List_object___Sort_55571192(
    v10,
    v20,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v10;
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

  if ( (byte_4A5B159 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
    byte_4A5B159 = 1;
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
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B15F & 1) == 0 )
  {
    sub_1B885B0(&EventMissionActionAddMaster___c_TypeInfo);
    byte_4A5B15F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMissionActionAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.id - b->fields.id;
}