void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B19F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
    byte_4A5B19F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    134,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
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
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5B1A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B1A5 = 1;
  }
  entity = 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_24;
  if ( missionData->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)missionData,
                                    v7,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
                                        v7,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v7,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v4 )
              break;
            v6 = *(unsigned int *)&Instance->fields._DispLog;
            items = v4->fields._items;
            v11 = Method_System_Collections_Generic_List_int__Add__;
            ++v4->fields._version;
            if ( !items )
              break;
            size = v4->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v4,
                v6,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
LABEL_24:
    sub_1B8880C(Instance, v6);
  }
  return v4;
}


EventMissionEntity_array *__fastcall EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x22
  const MethodInfo *v6; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int32_t v9; // w24
  int32_t v10; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v12; // x26
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x27
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  __int64 v25; // x28
  EventMissionMaster___c_c *v26; // x0
  System_Func_object__int__o *_9__13_1; // x27
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  int64_t v32; // x27
  __int64 v33; // x9
  int v34; // w20
  int v35; // w19
  __int64 v36; // x8
  int v37; // w8
  System_Comparison_T__o *v39; // x19
  Il2CppObject *v40; // x20
  struct EventMissionMaster___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  int64_t Time; // [xsp+8h] [xbp-78h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5B1AC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__);
    sub_1B885B0(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1AC = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_76;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_76;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_76;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          list = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_76;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 list,
                 (int32_t)v12[1].klass,
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
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_76;
          list = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v12[3].monitor <= Time
            && (__int64)v12[4].klass < Time
            && Time <= (__int64)v12[4].monitor )
          {
            if ( !list )
              goto LABEL_76;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v12[1].monitor),
                                            (int32_t)v12[1].klass,
                                            4,
                                            v22);
          }
          else
          {
            if ( !list )
              goto LABEL_76;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v12[1].monitor),
                                            (int32_t)v12[1].klass,
                                            v21);
          }
          v24 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            v25 = *(_QWORD *)&MissionCondListHighPriority->max_length;
            if ( v25 )
              break;
          }
        }
      }
LABEL_67:
      if ( ++v10 == v9 )
        goto LABEL_68;
    }
    v26 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v26 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v26->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v26->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0LL);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v24,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (int64_t)System_Linq_Enumerable__ToArray_object_(
                      v31,
                      (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_76;
    v32 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_77:
      sub_1B88814(list, v6);
    v33 = *(_QWORD *)(list + 32);
    if ( !v33 )
      goto LABEL_76;
    if ( (int)v25 < 1 )
      goto LABEL_67;
    v34 = *(_DWORD *)(v33 + 36);
    v35 = 1;
    list = 1LL;
    while ( 1 )
    {
      v36 = *(_QWORD *)(v32 + 8LL * (v35 - 1) + 32);
      if ( !v36 )
        goto LABEL_76;
      if ( *(_DWORD *)(v36 + 20) == 4 )
      {
        if ( v34 != *(_DWORD *)(v36 + 36) )
        {
          v34 = *(_DWORD *)(v36 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_25;
LABEL_60:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v32 + 8LL * (v35 - 1) + 32),
                   v6);
          v37 = ((_DWORD)v25 == v35) & (unsigned __int8)list;
          goto LABEL_61;
        }
        if ( (list & 1) != 0 )
          goto LABEL_60;
        v37 = 0;
        list = 0LL;
      }
      else
      {
        v37 = 0;
      }
LABEL_61:
      if ( v35 >= (int)v25 || (v37 & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_67;
LABEL_25:
        if ( v5 )
        {
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( items )
          {
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v12,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v12;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
            }
            goto LABEL_67;
          }
        }
LABEL_76:
        sub_1B8880C(list, v6);
      }
      if ( (unsigned int)v35++ >= *(_DWORD *)(v32 + 24) )
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
  v39 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v39 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v40 = **(Il2CppObject ***)(list + 184);
    v39 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0LL);
    v41 = EventMissionMaster___c_TypeInfo->static_fields;
    v41->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v39;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v41->__9__13_0, (int32_t)v39, v42, v43);
  }
  if ( !v5 )
    goto LABEL_76;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v39,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B1A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1A4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v7, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B8880C(Time, v7);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v19 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v20 = **(Il2CppObject ***)(Time + 184);
    v19 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)v19, v22, v23);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v19,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5B1AD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B1AD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 < *(_QWORD *)(Time + 64) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v7, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1B8880C(Time, v7);
  }
LABEL_21:
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B1A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1A7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v7, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B8880C(Time, v7);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v19 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v20 = **(Il2CppObject ***)(Time + 184);
    v19 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)v19, v22, v23);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v19,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B1A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1A0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v7, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B8880C(Time, v7);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v19 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v20 = **(Il2CppObject ***)(Time + 184);
    v19 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)v19, v22, v23);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v19,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39188216(
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
  __int64 methodPtr_low; // x10
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B1A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1A1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (Il2CppObject *)list;
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
                           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            items = v5->fields._items;
            v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v5->fields._version;
            if ( !items )
              break;
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v11,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v11;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v11, v13, v14);
            }
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_21;
    }
LABEL_29:
    sub_1B8880C(list, v6);
  }
LABEL_21:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)list + 23);
    v19 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)v19, v22, v23);
  }
  if ( !v5 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v19,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39188984(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *v6; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5B1A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    byte_4A5B1A2 = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                           (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_19;
  v8 = *(_QWORD *)&idList->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1B88814(list, v6);
      list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                               &entity,
                                                                                               idList->m_Items[v9 + 1],
                                                                                               (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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
          v13 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v6,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      LODWORD(v8) = idList->max_length;
    }
    while ( (__int64)++v9 < (int)v8 );
  }
  if ( !v5 )
LABEL_19:
    sub_1B8880C(list, v6);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  int32_t v13; // w3
  int64_t v14; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x26
  UserEventMissionEntity_o *Entity; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x19
  Il2CppObject *v23; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5B1A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1A9 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v14 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 4
          && v8 >= *(_QWORD *)(Time + 56) )
        {
          if ( v8 <= *(_QWORD *)(Time + 64) )
            goto LABEL_40;
          if ( v8 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Time,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Entity = UserEventMissionMaster__GetEntity(
                       (UserEventMissionMaster_o *)MasterData_object,
                       Time,
                       *(_DWORD *)(v14 + 16),
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_40:
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
                    (Il2CppObject *)v14,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v21[4] = (Il2CppClass *)v14;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), v14, v12, v13);
                }
              }
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_29;
    }
LABEL_37:
    sub_1B8880C(Time, v7);
  }
LABEL_29:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v22 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 48LL);
  if ( !v22 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v23 = **(Il2CppObject ***)(Time + 184);
    v22 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v22, v23, Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)v22, v25, v26);
  }
  if ( !v5 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v22,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Comparison_T__o *v19; // x20
  Il2CppObject *v20; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B1AA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1AA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v7 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v16 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)Time,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v7;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v7, v12, v13);
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1B8880C(Time, v7);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v19 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v20 = **(Il2CppObject ***)(Time + 184);
    v19 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)v19, v22, v23);
  }
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v19,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
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
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4A5B1A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B1A3 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v8 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) != 7
          && v8 >= *(_QWORD *)(Time + 56)
          && v8 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v5 )
            break;
          v7 = *(unsigned int *)(Time + 16);
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v7,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size + 1] = v7;
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B8880C(Time, v7);
  }
LABEL_22:
  if ( !v5 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10
  int32_t result; // w0

  if ( (byte_4A5B1AB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B1AB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                          Time,
                          v11,
                          (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && Item[7] == eventId
          && (__int64)v8 >= *((_QWORD *)Item + 7)
          && (__int64)v8 <= *((_QWORD *)Item + 8) )
        {
          result = Item[6];
          if ( (unsigned int)result <= 5 && ((1 << result) & 0x34) != 0 )
            return result;
        }
      }
      if ( v10 == ++v11 )
        return 2;
    }
LABEL_20:
    sub_1B8880C(Time, v7);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B1AE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B1AE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_19;
  v9 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                         (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionEntity_TypeInfo
          && result->fields.missionTargetId == eventId
          && v9 >= result->fields.startedAt
          && v9 <= result->fields.closedAt
          && result->fields.id == targetMissionId )
        {
          return result;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_19:
    sub_1B8880C(Time, v8);
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
  int64_t v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  int32_t i; // w24
  int32_t v12; // w2
  int32_t v13; // w3
  int64_t v14; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  int64_t v19; // x26
  int v20; // w27
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x19
  Il2CppObject *v26; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int v31; // [xsp+4h] [xbp-6Ch]
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B1A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_EventMissionEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&EventMissionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__);
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1A8 = 1;
  }
  entity = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v8 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    for ( i = 0; i != v10; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_51;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        i,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v14 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 2
          && v8 >= *(_QWORD *)(Time + 56) )
        {
          if ( v8 <= *(_QWORD *)(Time + 64) )
            goto LABEL_37;
          if ( v8 > *(_QWORD *)(Time + 72) )
            continue;
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_51;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_51;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 Time,
                 *(_DWORD *)(v14 + 16),
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
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_51;
          Time = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Time,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_51;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            *(_DWORD *)(v14 + 28),
                            *(_DWORD *)(v14 + 16),
                            v17);
          if ( Time )
          {
            v18 = *(_QWORD *)(Time + 24);
            v19 = Time;
            if ( v18 )
            {
              v31 = v18 - 1;
              if ( (int)v18 >= 1 )
              {
                if ( !(_DWORD)v18 )
LABEL_52:
                  sub_1B88814(Time, v7);
                v20 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v19 + 8LL * v20 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v7);
                  if ( (Time & 1) == 0 )
                    goto LABEL_42;
                  if ( v31 == v20 )
                    goto LABEL_37;
                  if ( (unsigned int)++v20 >= *(_DWORD *)(v19 + 24) )
                    goto LABEL_52;
                }
LABEL_51:
                sub_1B8880C(Time, v7);
              }
LABEL_37:
              if ( !v5 )
                goto LABEL_51;
              items = v5->fields._items;
              v22 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_51;
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)v14,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v14;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v14, v12, v13);
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
  v25 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 40LL);
  if ( !v25 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v26 = **(Il2CppObject ***)(Time + 184);
    v25 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v25, v26, Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)v25, v28, v29);
  }
  if ( !v5 )
    goto LABEL_51;
  System_Collections_Generic_List_object___Sort_55571192(
    v5,
    v25,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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

  if ( (byte_4A5B1A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B1A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MstMissionMaster___);
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
        sub_1B88814(Instance, v4);
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
    sub_1B8880C(Instance, v4);
  }
  return v8;
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B1AF & 1) == 0 )
  {
    sub_1B885B0(&EventMissionMaster___c_TypeInfo);
    byte_4A5B1AF = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventMissionMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1B8880C(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}