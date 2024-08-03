void __fastcall EventMissionActionAddMaster___ctor(EventMissionActionAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC40B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__,
      method);
    byte_49FC40B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string___ctor__);
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

  if ( (byte_49FC409 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_49FC409 = 1;
  }
  PK = (Il2CppObject *)EventMissionActionAddEntity__CreatePK(
                         missionId,
                         missionProgressType,
                         id,
                         *(const MethodInfo **)&id);
  return (EventMissionActionAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30D41FC *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v15; // x23
  int32_t v16; // w24
  EventMissionActionAddEntity_o *v17; // x25
  __int64 methodPtr_low; // x10

  if ( (byte_49FC40C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1B640C8(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FC40C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  v15 = (CommonReleaseMaster_o *)Instance;
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_17;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v16,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    v17 = (EventMissionActionAddEntity_o *)Instance;
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
      if ( !v15 )
        goto LABEL_17;
      Instance = (void *)CommonReleaseMaster__IsOpen(v15, *((_DWORD *)Instance + 8), 0LL, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return v17;
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
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
  Il2CppObject *MasterData_object; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w24
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x25
  __int64 methodPtr_low; // x10
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_49FC40E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1B640C8(&EventMissionActionAddEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__, v16);
    sub_1B640C8(&EventMissionActionAddMaster___c_TypeInfo, v17);
    byte_49FC40E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_30;
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_30;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v23,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_30;
    v26 = (Il2CppObject *)Instance;
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
        if ( !v22 )
          goto LABEL_30;
        items = v22->fields._items;
        v31 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_30;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v26,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v26;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
        }
      }
    }
    Instance = this->fields.list;
    ++v23;
    if ( !Instance )
      goto LABEL_30;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMissionActionAddEntity__TypeInfo, v24, v25);
    System_Comparison_object____ctor(
      v34,
      v35,
      Method_EventMissionActionAddMaster___c__GetEntityListFromIDnType_b__5_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v34, v37, v38);
  }
  if ( !v22 )
LABEL_30:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v22,
    v34,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v22;
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
  Il2CppObject *MasterData_object; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x24
  int32_t v21; // w25
  Il2CppObject *v22; // x26
  __int64 methodPtr_low; // x10
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_49FC40D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10);
    sub_1B640C8(&EventMissionActionAddEntity_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FC40D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                             v18,
                                                             v19),
        System_Collections_Generic_List_object____ctor(
          v20,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__),
        (Instance = this->fields.list) == 0LL) )
  {
LABEL_22:
    sub_1B64324(Instance);
  }
  v21 = 0;
  while ( v21 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v21,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_22;
    v22 = (Il2CppObject *)Instance;
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
        if ( !v20 )
          goto LABEL_22;
        items = v20->fields._items;
        v27 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          goto LABEL_22;
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v22,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v22;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
        }
      }
    }
    Instance = this->fields.list;
    ++v21;
    if ( !Instance )
      goto LABEL_22;
  }
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v20;
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
  Il2CppObject *MasterData_object; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w24
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x25
  __int64 methodPtr_low; // x10
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x20
  struct EventMissionActionAddMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_49FC40F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&System_Comparison_EventMissionActionAddEntity__TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9);
    sub_1B640C8(&EventMissionActionAddEntity_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__, v16);
    sub_1B640C8(&EventMissionActionAddMaster___c_TypeInfo, v17);
    byte_49FC40F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionActionAddEntity__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_31;
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_31;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 v23,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_31;
    v26 = (Il2CppObject *)Instance;
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
        if ( !v22 )
          goto LABEL_31;
        items = v22->fields._items;
        v31 = Method_System_Collections_Generic_List_EventMissionActionAddEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_31;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v26,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v26;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
        }
      }
    }
    Instance = this->fields.list;
    ++v23;
    if ( !Instance )
      goto LABEL_31;
  }
  Instance = EventMissionActionAddMaster___c_TypeInfo;
  if ( !EventMissionActionAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionAddMaster___c_TypeInfo);
    Instance = EventMissionActionAddMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = EventMissionActionAddMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v34 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMissionActionAddEntity__TypeInfo, v24, v25);
    System_Comparison_object____ctor(
      v34,
      v35,
      Method_EventMissionActionAddMaster___c__GetSafeActionListFromIDnType_b__6_0__,
      0LL);
    static_fields = EventMissionActionAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventMissionActionAddEntity__o *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)v34, v37, v38);
  }
  if ( !v22 )
LABEL_31:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___Sort_55243320(
    v22,
    v34,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionAddEntity__o *)v22;
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

  if ( (byte_49FC40A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__,
      entity);
    byte_49FC40A = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventMissionActionAddMaster__EventMissionActionAddEntity__string__TryGetEntity__);
}


void __fastcall EventMissionActionAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC410 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionActionAddMaster___c_TypeInfo, v1);
    byte_49FC410 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventMissionActionAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventMissionActionAddMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionActionAddMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventMissionActionAddMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionAddMaster___c___GetSafeActionListFromIDnType_b__6_0(
        EventMissionActionAddMaster___c_o *this,
        EventMissionActionAddEntity_o *a,
        EventMissionActionAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.id - b->fields.id;
}