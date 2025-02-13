void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC577 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
    byte_4BDC577 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  Il2CppObject *MasterData_object; // x23
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDC57D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC57D = 1;
  }
  entity = 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_28;
  if ( missionData->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      v9 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v9 = NetworkManager_TypeInfo;
      }
      userIdNumber = v9->static_fields->userIdNumber;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)missionData,
                                    v7,
                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
                                        v7,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v7,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v4 )
              break;
            v6 = *(unsigned int *)&Instance->fields._DispLog;
            items = v4->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++v4->fields._version;
            if ( !items )
              break;
            size = v4->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v4,
                v6,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
            }
            else
            {
              v4->fields._size = size + 1;
              items->m_Items[size + 1] = v6;
            }
          }
        }
      }
      if ( ++v7 >= missionData->fields._size )
        return v4;
    }
LABEL_28:
    sub_1C22094(Instance, v6);
  }
  return v4;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  __int64 list; // x0
  int32_t Count; // w0
  int32_t v10; // w25
  int32_t v11; // w26
  Il2CppObject *Item; // x0
  int64_t v13; // x27
  Il2CppObject *MasterData_object; // x28
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x28
  __int64 v29; // x24
  EventMissionMaster___c_c *v30; // x0
  System_Func_object__int__o *_9__13_1; // x29
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  __int64 v40; // x28
  __int64 v41; // x9
  int v42; // w23
  int v43; // w29
  __int64 v44; // x8
  int v45; // w8
  System_Comparison_T__o *v47; // x19
  Il2CppObject *v48; // x20
  struct EventMissionMaster___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_object__o *v58; // [xsp+8h] [xbp-78h]
  int64_t Time; // [xsp+10h] [xbp-70h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BDC584 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    sub_1C21E38(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__);
    sub_1C21E38(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC584 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v58 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_78;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_78;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v11,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v13 = (int64_t)Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
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
                 *(_DWORD *)(v13 + 16),
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
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          list = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && *(_QWORD *)(v13 + 56) <= Time
            && *(_QWORD *)(v13 + 64) < Time
            && Time <= *(_QWORD *)(v13 + 72) )
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            *(_DWORD *)(v13 + 28),
                                            *(_DWORD *)(v13 + 16),
                                            4,
                                            v26);
          }
          else
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            *(_DWORD *)(v13 + 28),
                                            *(_DWORD *)(v13 + 16),
                                            v25);
          }
          v28 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            v29 = *(_QWORD *)&MissionCondListHighPriority->max_length;
            if ( v29 )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v11 == v10 )
        goto LABEL_70;
    }
    v30 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v30 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v30->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v30->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0LL);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__13_1,
        (int64_t)_9__13_1,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v28,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (__int64)System_Linq_Enumerable__ToArray_object_(
                      v39,
                      (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_78;
    v40 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_79:
      sub_1C2209C(list, v7);
    v41 = *(_QWORD *)(list + 32);
    if ( !v41 )
      goto LABEL_78;
    if ( (int)v29 < 1 )
      goto LABEL_66;
    v42 = *(_DWORD *)(v41 + 36);
    v43 = 1;
    list = 1LL;
    while ( 1 )
    {
      v44 = *(_QWORD *)(v40 + 8LL * (v43 - 1) + 32);
      if ( !v44 )
        goto LABEL_78;
      if ( *(_DWORD *)(v44 + 20) == 4 )
      {
        if ( v42 != *(_DWORD *)(v44 + 36) )
        {
          v42 = *(_DWORD *)(v44 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_27;
LABEL_58:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v40 + 8LL * (v43 - 1) + 32),
                   v7);
          v45 = ((_DWORD)v29 == v43) & (unsigned __int8)list;
          goto LABEL_59;
        }
        if ( (list & 1) != 0 )
          goto LABEL_58;
        v45 = 0;
        list = 0LL;
      }
      else
      {
        v45 = 0;
      }
LABEL_59:
      if ( v43 >= (int)v29 || (v45 & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_66;
LABEL_27:
        if ( v58 )
        {
          items = v58->fields._items;
          v22 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v58->fields._version;
          if ( items )
          {
            size = v58->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v58,
                (Il2CppObject *)v13,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v58->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v13;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v13, v15, v16, v17, v18, v19, v20);
            }
            goto LABEL_66;
          }
        }
LABEL_78:
        sub_1C22094(list, v7);
      }
      if ( (unsigned int)v43++ >= *(_DWORD *)(v40 + 24) )
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
  v47 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v47 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (__int64)EventMissionMaster___c_TypeInfo;
    }
    v48 = **(Il2CppObject ***)(list + 184);
    v47 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v47, v48, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0LL);
    v49 = EventMissionMaster___c_TypeInfo->static_fields;
    v49->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v47;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v49->__9__13_0, (int64_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( !v58 )
    goto LABEL_78;
  System_Collections_Generic_List_object___Sort_56953720(
    v58,
    v47,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v58,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDC57C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC57C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v11,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v7 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v7, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1C22094(Time, v7);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v22 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v23 = **(Il2CppObject ***)(Time + 184);
    v22 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v22,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


int32_t __fastcall EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4BDC585 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC585 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v11,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v7 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && v8 >= *(_QWORD *)(Time + 56) && v8 < *(_QWORD *)(Time + 64) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v7, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C22094(Time, v7);
  }
LABEL_19:
  if ( v5 )
    return v5->fields._size;
  else
    return 0;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDC57F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC57F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v11,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v7 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v7, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1C22094(Time, v7);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v22 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v23 = **(Il2CppObject ***)(Time + 184);
    v22 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v22,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDC578 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC578 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v11,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v7 = Time;
        if ( *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v7, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1C22094(Time, v7);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v22 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v23 = **(Il2CppObject ***)(Time + 184);
    v22 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v22,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_40440140(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  Il2CppObject *v11; // x24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDC579 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC579 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( list )
      {
        v11 = (Il2CppObject *)list;
        if ( *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v19 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v11,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v11;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v11, v12, v13, v14, v15, v16, v17);
            }
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1C22094(list, v6);
  }
LABEL_19:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)list + 23);
    v22 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v22,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_40440836(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDC57A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4BDC57A = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                    (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( !idList )
    goto LABEL_19;
  v8 = *(_QWORD *)&idList->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1C2209C(list, v6);
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        &entity,
                                                                                        idList->m_Items[v9 + 1],
                                                                                        (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        v6 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) != 7 )
        {
          if ( !v5 )
            goto LABEL_19;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v6,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      LODWORD(v8) = idList->max_length;
    }
    while ( (__int64)++v9 < (int)v8 );
  }
  if ( !v5 )
LABEL_19:
    sub_1C22094(list, v6);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x23
  int32_t Count; // w0
  int32_t v10; // w24
  int32_t v11; // w25
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x26
  Il2CppObject *MasterData_object; // x27
  UserEventMissionEntity_o *Entity; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x20
  Il2CppObject *v26; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BDC581 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC581 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_39;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v11,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v18 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && *(_DWORD *)(Time + 24) == 4 && v8 >= *(_QWORD *)(Time + 56) )
        {
          if ( v8 <= *(_QWORD *)(Time + 64) )
            goto LABEL_42;
          if ( v8 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Time,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BD6FF5 )
            {
              sub_1C21E38(&NetworkManager_TypeInfo);
              byte_4BD6FF5 = 1;
            }
            Time = (int64_t)NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Time = (int64_t)NetworkManager_TypeInfo;
            }
            if ( !MasterData_object )
              break;
            Entity = UserEventMissionMaster__GetEntity(
                       (UserEventMissionMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                       *(_DWORD *)(v18 + 16),
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_42:
                if ( !v5 )
                  break;
                items = v5->fields._items;
                v22 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
                ++v5->fields._version;
                if ( !items )
                  break;
                size = v5->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    (Il2CppObject *)v18,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                }
                else
                {
                  v24 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v24[4] = (Il2CppClass *)v18;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v18, v12, v13, v14, v15, v16, v17);
                }
              }
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1C22094(Time, v7);
  }
LABEL_31:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 48LL);
  if ( !v25 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v26 = **(Il2CppObject ***)(Time + 184);
    v25 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v25, v26, Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v25;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__10_0, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v5 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v25,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x0
  int64_t v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  Il2CppObject *v23; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDC582 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC582 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v11,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v7 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v7;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v7, v12, v13, v14, v15, v16, v17);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1C22094(Time, v7);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v22 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v23 = **(Il2CppObject ***)(Time + 184);
    v22 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__11_0, (int64_t)v22, v25, v26, v27, v28, v29, v30);
  }
  if ( !v5 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v22,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v5;
}


System_Int32_array *__fastcall EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  int v9; // w23
  int32_t v10; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4BDC57B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC57B = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v8 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v9 = Time;
    v10 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v10,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time
        && *(_DWORD *)(Time + 28) == eventId
        && *(_DWORD *)(Time + 24) != 7
        && v8 >= *(_QWORD *)(Time + 56)
        && v8 <= *(_QWORD *)(Time + 72) )
      {
        if ( !v5 )
          break;
        v7 = *(unsigned int *)(Time + 16);
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size + 1] = v7;
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C22094(Time, v7);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventMissionMaster__getMissionType(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x0
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *v8; // x21
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  Il2CppObject *Item; // x0
  int32_t result; // w0

  if ( (byte_4BDC583 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC583 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_18;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v11,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        if ( HIDWORD(Item[1].monitor) == eventId
          && (__int64)v8 >= (__int64)Item[3].monitor
          && (__int64)v8 <= (__int64)Item[4].klass )
        {
          result = (int32_t)Item[1].monitor;
          if ( (unsigned int)result <= 5 && ((1 << result) & 0x34) != 0 )
            return result;
        }
      }
      if ( v10 == ++v11 )
        return 2;
    }
LABEL_18:
    sub_1C22094(Time, v7);
  }
  return 2;
}


EventMissionEntity_o *__fastcall EventMissionMaster__getTargetEventMissionEntity(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v8; // x1
  int64_t v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  EventMissionEntity_o *result; // x0

  if ( (byte_4BDC586 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC586 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_17;
  v9 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         Time,
                                         v12,
                                         (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( result
        && result->fields.missionTargetId == eventId
        && v9 >= result->fields.startedAt
        && v9 <= result->fields.closedAt
        && result->fields.id == targetMissionId )
      {
        return result;
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_17:
    sub_1C22094(Time, v8);
  }
  return 0LL;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t Time; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x23
  int32_t Count; // w0
  int32_t v10; // w24
  int32_t i; // w25
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x26
  Il2CppObject *MasterData_object; // x27
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  int64_t v22; // x27
  int v23; // w29
  int v24; // w22
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x19
  Il2CppObject *v30; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDC580 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
    sub_1C21E38(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__);
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC580 = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_53;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    for ( i = 0; i != v10; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_53;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        i,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v18 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && *(_DWORD *)(Time + 24) == 2 && v8 >= *(_QWORD *)(Time + 56) )
        {
          if ( v8 <= *(_QWORD *)(Time + 64) )
            goto LABEL_39;
          if ( v8 > *(_QWORD *)(Time + 72) )
            continue;
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_53;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BD6FF5 )
          {
            sub_1C21E38(&NetworkManager_TypeInfo);
            byte_4BD6FF5 = 1;
          }
          Time = (int64_t)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_53;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                 *(_DWORD *)(v18 + 16),
                 0LL) )
          {
            Time = (int64_t)entity;
            if ( !entity )
              goto LABEL_53;
            Time = UserEventMissionEntity__isClearMission(entity, 0LL);
            if ( (Time & 1) == 0 )
              continue;
            goto LABEL_39;
          }
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_53;
          Time = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Time,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_53;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            *(_DWORD *)(v18 + 28),
                            *(_DWORD *)(v18 + 16),
                            v20);
          if ( Time )
          {
            v21 = *(_QWORD *)(Time + 24);
            v22 = Time;
            if ( v21 )
            {
              v23 = v21 - 1;
              if ( (int)v21 >= 1 )
              {
                if ( !(_DWORD)v21 )
LABEL_54:
                  sub_1C2209C(Time, v7);
                v24 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v22 + 8LL * v24 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v7);
                  if ( (Time & 1) == 0 )
                    goto LABEL_44;
                  if ( v23 == v24 )
                    goto LABEL_39;
                  if ( (unsigned int)++v24 >= *(_DWORD *)(v22 + 24) )
                    goto LABEL_54;
                }
LABEL_53:
                sub_1C22094(Time, v7);
              }
LABEL_39:
              if ( !v5 )
                goto LABEL_53;
              items = v5->fields._items;
              v26 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_53;
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v18,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v18;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 4), v18, v12, v13, v14, v15, v16, v17);
              }
            }
          }
        }
      }
LABEL_44:
      ;
    }
  }
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 40LL);
  if ( !v29 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v30 = **(Il2CppObject ***)(Time + 184);
    v29 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v29;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !v5 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_56953720(
    v5,
    v29,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


bool __fastcall EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int v6; // w8
  void *v7; // x20
  bool v8; // w21
  int v9; // w22
  __int64 v10; // x8

  if ( (byte_4BDC57E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC57E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_14;
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  v8 = v6 > 0;
  if ( v6 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v6 )
        sub_1C2209C(Instance, v4);
      v10 = *((_QWORD *)v7 + v9 + 4);
      if ( !v10 )
        break;
      Instance = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v10 + 20), v5);
      if ( !Instance )
        break;
      if ( !*((_QWORD *)Instance + 3) )
      {
        v6 = *((_DWORD *)v7 + 6);
        v8 = ++v9 < v6;
        if ( v9 < v6 )
          continue;
      }
      return v8;
    }
LABEL_14:
    sub_1C22094(Instance, v4);
  }
  return v8;
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC587 & 1) == 0 )
  {
    sub_1C21E38(&EventMissionMaster___c_TypeInfo);
    byte_4BDC587 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventMissionMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventMissionMaster___c___ctor(EventMissionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1C22094(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}