void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FB14 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, method);
    byte_4A1FB14 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    134,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
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
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A1FB1A & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionData);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B715CC(&NetworkManager_TypeInfo, v9);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A1FB1A = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_24;
  if ( missionData->fields._size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)missionData,
                                    v14,
                                    (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
      if ( !Instance || !MasterData_object )
        break;
      if ( UserEventMissionMaster__TryGetEntity(
             (UserEventMissionMaster_o *)MasterData_object,
             &entity,
             UserId,
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
                                        (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v14,
                                          (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v11 )
              break;
            v13 = *(unsigned int *)&Instance->fields._DispLog;
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
                *(const MethodInfo_34B323C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
LABEL_24:
    sub_1B71828(Instance, v13);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *v23; // x22
  const MethodInfo *v24; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v27; // w24
  int32_t v28; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v30; // x26
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x27
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  __int64 v43; // x28
  EventMissionMaster___c_c *v44; // x0
  System_Func_object__int__o *_9__13_1; // x27
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  int64_t v50; // x27
  __int64 v51; // x9
  int v52; // w20
  int v53; // w19
  __int64 v54; // x8
  int v55; // w8
  System_Comparison_T__o *v57; // x19
  Il2CppObject *v58; // x20
  struct EventMissionMaster___c_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  int64_t Time; // [xsp+8h] [xbp-78h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A1FB21 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8);
    sub_1B715CC(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v9);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v10);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v11);
    sub_1B715CC(&System_Func_EventMissionConditionEntity__int__TypeInfo, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v17);
    sub_1B715CC(&NetworkManager_TypeInfo, v18);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B715CC(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v20);
    sub_1B715CC(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v21);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v22);
    byte_4A1FB21 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_76;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_76;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v28,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v30 = Item;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_76;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_76;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 list,
                 (int32_t)v30[1].klass,
                 0LL) )
          {
            list = (int64_t)entity;
            if ( entity )
            {
              list = UserEventMissionEntity__isClearMission(entity, 0LL);
              if ( (list & 1) == 0 )
                goto LABEL_67;
              goto LABEL_25;
            }
            goto LABEL_76;
          }
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_76;
          list = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v30[3].monitor <= Time
            && (__int64)v30[4].klass < Time
            && Time <= (__int64)v30[4].monitor )
          {
            if ( !list )
              goto LABEL_76;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v30[1].monitor),
                                            (int32_t)v30[1].klass,
                                            4,
                                            v40);
          }
          else
          {
            if ( !list )
              goto LABEL_76;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v30[1].monitor),
                                            (int32_t)v30[1].klass,
                                            v39);
          }
          v42 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            v43 = *(_QWORD *)&MissionCondListHighPriority->max_length;
            if ( v43 )
              break;
          }
        }
      }
LABEL_67:
      if ( ++v28 == v27 )
        goto LABEL_68;
    }
    v44 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v44 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v44->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v44->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1B71818(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0LL);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v47, v48);
    }
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v42,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_2E8590C *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (int64_t)System_Linq_Enumerable__ToArray_object_(
                      v49,
                      (const MethodInfo_2E93E84 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_76;
    v50 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_77:
      sub_1B71830(list, v24);
    v51 = *(_QWORD *)(list + 32);
    if ( !v51 )
      goto LABEL_76;
    if ( (int)v43 < 1 )
      goto LABEL_67;
    v52 = *(_DWORD *)(v51 + 36);
    v53 = 1;
    list = 1LL;
    while ( 1 )
    {
      v54 = *(_QWORD *)(v50 + 8LL * (v53 - 1) + 32);
      if ( !v54 )
        goto LABEL_76;
      if ( *(_DWORD *)(v54 + 20) == 4 )
      {
        if ( v52 != *(_DWORD *)(v54 + 36) )
        {
          v52 = *(_DWORD *)(v54 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_25;
LABEL_60:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v50 + 8LL * (v53 - 1) + 32),
                   v24);
          v55 = ((_DWORD)v43 == v53) & (unsigned __int8)list;
          goto LABEL_61;
        }
        if ( (list & 1) != 0 )
          goto LABEL_60;
        v55 = 0;
        list = 0LL;
      }
      else
      {
        v55 = 0;
      }
LABEL_61:
      if ( v53 >= (int)v43 || (v55 & 1) != 0 )
      {
        if ( !v55 )
          goto LABEL_67;
LABEL_25:
        if ( v23 )
        {
          items = v23->fields._items;
          v36 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v23->fields._version;
          if ( items )
          {
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                v30,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v30;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v30, v33, v34);
            }
            goto LABEL_67;
          }
        }
LABEL_76:
        sub_1B71828(list, v24);
      }
      if ( (unsigned int)v53++ >= *(_DWORD *)(v50 + 24) )
        goto LABEL_77;
    }
  }
LABEL_68:
  list = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v57 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v57 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v58 = **(Il2CppObject ***)(list + 184);
    v57 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v57, v58, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0LL);
    v59 = EventMissionMaster___c_TypeInfo->static_fields;
    v59->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v57;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->__9__13_0, (int32_t)v57, v60, v61);
  }
  if ( !v23 )
    goto LABEL_76;
  System_Collections_Generic_List_object___Sort_55385380(
    v23,
    v57,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v23,
                                       (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  int64_t Time; // x0
  int64_t v18; // x1
  int64_t v19; // x22
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A1FB19 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1B715CC(&NetworkManager_TypeInfo, v13);
    sub_1B715CC(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v14);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v15);
    byte_4A1FB19 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v22,
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v18 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v19 >= *(_QWORD *)(Time + 56)
          && v19 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Time,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v18;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 4), v18, v23, v24);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B71828(Time, v18);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v30 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v31 = **(Il2CppObject ***)(Time + 184);
    v30 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v30;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v30, v33, v34);
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55385380(
    v16,
    v30,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  int64_t Time; // x0
  int64_t v14; // x1
  int64_t v15; // x22
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A1FB22 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v9);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v10);
    sub_1B715CC(&NetworkManager_TypeInfo, v11);
    byte_4A1FB22 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v15 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v18,
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v14 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && v15 >= *(_QWORD *)(Time + 56)
          && v15 < *(_QWORD *)(Time + 64) )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v23 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)Time,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v14;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v25 + 4), v14, v19, v20);
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1B71828(Time, v14);
  }
LABEL_21:
  if ( v12 )
    return v12->fields._size;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getDailyMasterMissionList(
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
  int64_t v18; // x1
  int64_t v19; // x22
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A1FB1C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1B715CC(&NetworkManager_TypeInfo, v13);
    sub_1B715CC(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, v14);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v15);
    byte_4A1FB1C = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v22,
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v18 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v19 >= *(_QWORD *)(Time + 56)
          && v19 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Time,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v18;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 4), v18, v23, v24);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B71828(Time, v18);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v30 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v31 = **(Il2CppObject ***)(Time + 184);
    v30 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v30;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)v30, v33, v34);
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55385380(
    v16,
    v30,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  int64_t Time; // x0
  int64_t v18; // x1
  int64_t v19; // x22
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_4A1FB15 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1B715CC(&NetworkManager_TypeInfo, v13);
    sub_1B715CC(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v14);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v15);
    byte_4A1FB15 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v22,
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v18 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v19 >= *(_QWORD *)(Time + 56)
          && v19 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v27 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Time,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v18;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v29 + 4), v18, v23, v24);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B71828(Time, v18);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v30 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v31 = **(Il2CppObject ***)(Time + 184);
    v30 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v30;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v30, v33, v34);
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55385380(
    v16,
    v30,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_38982464(
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 v18; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v21; // w22
  int32_t v22; // w23
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x10
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Comparison_T__o *v31; // x20
  Il2CppObject *v32; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_4A1FB16 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v13);
    sub_1B715CC(&NetworkManager_TypeInfo, v14);
    sub_1B715CC(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v15);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v16);
    byte_4A1FB16 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v22,
               (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v17 )
              break;
            items = v17->fields._items;
            v28 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v23,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v23;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
            }
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_21;
    }
LABEL_29:
    sub_1B71828(list, v18);
  }
LABEL_21:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v31, v32, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v31;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)v31, v34, v35);
  }
  if ( !v17 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_55385380(
    v17,
    v31,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v17,
                                       (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_38983232(
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A1FB17 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_1B715CC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    byte_4A1FB17 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                           (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                           (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_19;
  v13 = *(_QWORD *)&idList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B71830(list, v11);
      list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                               &entity,
                                                                                               idList->m_Items[v14 + 1],
                                                                                               (const MethodInfo_30F87B4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      LODWORD(v13) = idList->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v10 )
LABEL_19:
    sub_1B71828(list, v11);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
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
  int64_t v20; // x22
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  int32_t v24; // w2
  int32_t v25; // w3
  int64_t v26; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x26
  UserEventMissionEntity_o *Entity; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_4A1FB1E & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1B715CC(&NetworkManager_TypeInfo, v13);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B715CC(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, v15);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v16);
    byte_4A1FB1E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v20 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v23,
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v26 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 4
          && v20 >= *(_QWORD *)(Time + 56) )
        {
          if ( v20 <= *(_QWORD *)(Time + 64) )
            goto LABEL_40;
          if ( v20 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Time,
                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Entity = UserEventMissionMaster__GetEntity(
                       (UserEventMissionMaster_o *)MasterData_object,
                       Time,
                       *(_DWORD *)(v26 + 16),
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_40:
                if ( !v17 )
                  break;
                items = v17->fields._items;
                v31 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
                ++v17->fields._version;
                if ( !items )
                  break;
                size = v17->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v17,
                    (Il2CppObject *)v26,
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &items->obj.klass + size;
                  v17->fields._size = size + 1;
                  v33[4] = (Il2CppClass *)v26;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 4), v26, v24, v25);
                }
              }
            }
          }
        }
      }
      if ( v22 == ++v23 )
        goto LABEL_29;
    }
LABEL_37:
    sub_1B71828(Time, v19);
  }
LABEL_29:
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
    v34 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v34;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)v34, v37, v38);
  }
  if ( !v17 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55385380(
    v17,
    v34,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getLimitedMissionList(
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
  int32_t v23; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_4A1FB1F & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B715CC(&NetworkManager_TypeInfo, v12);
    sub_1B715CC(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, v13);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v14);
    byte_4A1FB1F = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v17 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v18 >= *(_QWORD *)(Time + 56)
          && v18 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v26 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Time,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v17;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v28 + 4), v17, v22, v23);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B71828(Time, v17);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v29 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v30 = **(Il2CppObject ***)(Time + 184);
    v29 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v29;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)v29, v32, v33);
  }
  if ( !v15 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55385380(
    v15,
    v29,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v15;
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
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x21
  int64_t Time; // x0
  __int64 v14; // x1
  int64_t v15; // x22
  int v16; // w23
  int32_t v17; // w24
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4A1FB18 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B715CC(&NetworkManager_TypeInfo, v11);
    byte_4A1FB18 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v15 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v16 = Time;
    v17 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v17,
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) != 7
          && v15 >= *(_QWORD *)(Time + 56)
          && v15 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v12 )
            break;
          v14 = *(unsigned int *)(Time + 16);
          items = v12->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v14,
              *(const MethodInfo_34B323C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = v14;
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B71828(Time, v14);
  }
LABEL_22:
  if ( !v12 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x0
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *v13; // x21
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10
  int32_t result; // w0

  if ( (byte_4A1FB20 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v7);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v8);
    sub_1B715CC(&NetworkManager_TypeInfo, v9);
    byte_4A1FB20 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v13 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                          Time,
                          v16,
                          (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && Item[7] == eventId
          && (__int64)v13 >= *((_QWORD *)Item + 7)
          && (__int64)v13 <= *((_QWORD *)Item + 8) )
        {
          result = Item[6];
          if ( (unsigned int)result <= 5 && ((1 << result) & 0x34) != 0 )
            return result;
        }
      }
      if ( v15 == ++v16 )
        return 2;
    }
LABEL_20:
    sub_1B71828(Time, v12);
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
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v11; // x1
  int64_t v12; // x22
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  EventMissionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A1FB23 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v8);
    sub_1B715CC(&NetworkManager_TypeInfo, v9);
    byte_4A1FB23 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_19;
  v12 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         Time,
                                         v15,
                                         (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionEntity_TypeInfo
          && result->fields.missionTargetId == eventId
          && v12 >= result->fields.startedAt
          && v12 <= result->fields.closedAt
          && result->fields.id == targetMissionId )
        {
          return result;
        }
      }
      if ( v14 == ++v15 )
        return 0LL;
    }
LABEL_19:
    sub_1B71828(Time, v11);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getWeeklyMasterMissionList(
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
  System_Collections_Generic_List_object__o *v19; // x21
  int64_t Time; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x22
  int32_t Count; // w0
  int32_t v24; // w23
  int32_t i; // w24
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t v28; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v31; // x3
  __int64 v32; // x8
  int64_t v33; // x26
  int v34; // w27
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int v45; // [xsp+4h] [xbp-6Ch]
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A1FB1D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B715CC(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8);
    sub_1B715CC(&EventMissionEntity_TypeInfo, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_1B715CC(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v14);
    sub_1B715CC(&NetworkManager_TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B715CC(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, v17);
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v18);
    byte_4A1FB1D = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v22 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3095AA8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    for ( i = 0; i != v24; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_51;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        i,
                        (const MethodInfo_3095B38 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v28 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 2
          && v22 >= *(_QWORD *)(Time + 56) )
        {
          if ( v22 <= *(_QWORD *)(Time + 64) )
            goto LABEL_37;
          if ( v22 > *(_QWORD *)(Time + 72) )
            continue;
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_51;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_51;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 Time,
                 *(_DWORD *)(v28 + 16),
                 0LL) )
          {
            Time = (int64_t)entity;
            if ( !entity )
              goto LABEL_51;
            Time = UserEventMissionEntity__isClearMission(entity, 0LL);
            if ( (Time & 1) == 0 )
              continue;
            goto LABEL_37;
          }
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_51;
          Time = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Time,
                            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_51;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            *(_DWORD *)(v28 + 28),
                            *(_DWORD *)(v28 + 16),
                            v31);
          if ( Time )
          {
            v32 = *(_QWORD *)(Time + 24);
            v33 = Time;
            if ( v32 )
            {
              v45 = v32 - 1;
              if ( (int)v32 >= 1 )
              {
                if ( !(_DWORD)v32 )
LABEL_52:
                  sub_1B71830(Time, v21);
                v34 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v33 + 8LL * v34 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v21);
                  if ( (Time & 1) == 0 )
                    goto LABEL_42;
                  if ( v45 == v34 )
                    goto LABEL_37;
                  if ( (unsigned int)++v34 >= *(_DWORD *)(v33 + 24) )
                    goto LABEL_52;
                }
LABEL_51:
                sub_1B71828(Time, v21);
              }
LABEL_37:
              if ( !v19 )
                goto LABEL_51;
              items = v19->fields._items;
              v36 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                goto LABEL_51;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v28,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v38[4] = (Il2CppClass *)v28;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v38 + 4), v28, v26, v27);
              }
            }
          }
        }
      }
LABEL_42:
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
    v39 = (System_Comparison_T__o *)sub_1B71818(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v39;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)v39, v42, v43);
  }
  if ( !v19 )
    goto LABEL_51;
  System_Collections_Generic_List_object___Sort_55385380(
    v19,
    v39,
    (const MethodInfo_34D1D24 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v19,
                                       (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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

  if ( (byte_4A1FB1B & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_MstMissionMaster___, method);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A1FB1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
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
        sub_1B71830(Instance, v5);
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
    sub_1B71828(Instance, v5);
  }
  return v9;
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1FB24 & 1) == 0 )
  {
    sub_1B715CC(&EventMissionMaster___c_TypeInfo, v1);
    byte_4A1FB24 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)EventMissionMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B71828(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1B71828(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}