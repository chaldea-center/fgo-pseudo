void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAEA6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, method);
    byte_49BAEA6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    138,
    (const MethodInfo_319B678 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
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
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x23
  NetworkManager_c *v17; // x0
  int64_t userIdNumber; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BAEAC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionData);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49BAEAC = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_28;
  if ( missionData->fields._size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_49B57A5 )
      {
        sub_1B4CF90(&NetworkManager_TypeInfo, v15);
        byte_49B57A5 = 1;
      }
      v17 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v17 = NetworkManager_TypeInfo;
      }
      userIdNumber = v17->static_fields->userIdNumber;
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)missionData,
                                    v14,
                                    (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
                                        v14,
                                        (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v14,
                                          (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v11 )
              break;
            v13 = *(unsigned int *)&Instance->fields._DispLog;
            items = v11->fields._items;
            v20 = Method_System_Collections_Generic_List_int__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v11,
                v13,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
LABEL_28:
    sub_1B4D1EC(Instance, v13);
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
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  __int64 list; // x0
  int32_t Count; // w0
  int32_t v27; // w25
  int32_t v28; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v30; // x27
  Il2CppObject *MasterData_object; // x28
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x28
  __int64 v42; // x24
  EventMissionMaster___c_c *v43; // x0
  System_Func_object__int__o *_9__13_1; // x29
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  __int64 v49; // x28
  __int64 v50; // x9
  int v51; // w23
  int v52; // w29
  __int64 v53; // x8
  int v54; // w8
  System_Comparison_T__o *v56; // x19
  Il2CppObject *v57; // x20
  struct EventMissionMaster___c_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_object__o *v63; // [xsp+8h] [xbp-78h]
  int64_t Time; // [xsp+10h] [xbp-70h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_49BAEB3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v7);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v12);
    sub_1B4CF90(&System_Func_EventMissionConditionEntity__int__TypeInfo, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v17);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v18);
    sub_1B4CF90(&NetworkManager_TypeInfo, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B4CF90(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v21);
    sub_1B4CF90(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v22);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v23);
    byte_49BAEB3 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v63 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_78;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_78;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v28,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        v30 = Item;
        if ( HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_49B57A5 )
          {
            sub_1B4CF90(&NetworkManager_TypeInfo, v24);
            byte_49B57A5 = 1;
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
                 (int32_t)v30[1].klass,
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
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_78;
          list = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && (__int64)v30[3].monitor <= Time
            && (__int64)v30[4].klass < Time
            && Time <= (__int64)v30[4].monitor )
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v30[1].monitor),
                                            (int32_t)v30[1].klass,
                                            4,
                                            v39);
          }
          else
          {
            if ( !list )
              goto LABEL_78;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            HIDWORD(v30[1].monitor),
                                            (int32_t)v30[1].klass,
                                            v38);
          }
          v41 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            v42 = *(_QWORD *)&MissionCondListHighPriority->max_length;
            if ( v42 )
              break;
          }
        }
      }
LABEL_66:
      if ( ++v28 == v27 )
        goto LABEL_70;
    }
    v43 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v43 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v43->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v43->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0LL);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__13_1, (int32_t)_9__13_1, v46, v47);
    }
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v41,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (__int64)System_Linq_Enumerable__ToArray_object_(
                      v48,
                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_78;
    v49 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_79:
      sub_1B4D1F4(list, v24);
    v50 = *(_QWORD *)(list + 32);
    if ( !v50 )
      goto LABEL_78;
    if ( (int)v42 < 1 )
      goto LABEL_66;
    v51 = *(_DWORD *)(v50 + 36);
    v52 = 1;
    list = 1LL;
    while ( 1 )
    {
      v53 = *(_QWORD *)(v49 + 8LL * (v52 - 1) + 32);
      if ( !v53 )
        goto LABEL_78;
      if ( *(_DWORD *)(v53 + 20) == 4 )
      {
        if ( v51 != *(_DWORD *)(v53 + 36) )
        {
          v51 = *(_DWORD *)(v53 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_27;
LABEL_58:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v49 + 8LL * (v52 - 1) + 32),
                   v24);
          v54 = ((_DWORD)v42 == v52) & (unsigned __int8)list;
          goto LABEL_59;
        }
        if ( (list & 1) != 0 )
          goto LABEL_58;
        v54 = 0;
        list = 0LL;
      }
      else
      {
        v54 = 0;
      }
LABEL_59:
      if ( v52 >= (int)v42 || (v54 & 1) != 0 )
      {
        if ( !v54 )
          goto LABEL_66;
LABEL_27:
        if ( v63 )
        {
          items = v63->fields._items;
          v35 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v63->fields._version;
          if ( items )
          {
            size = v63->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v63,
                v30,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v63->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v30;
              sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
            }
            goto LABEL_66;
          }
        }
LABEL_78:
        sub_1B4D1EC(list, v24);
      }
      if ( (unsigned int)v52++ >= *(_DWORD *)(v49 + 24) )
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
  v56 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v56 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (__int64)EventMissionMaster___c_TypeInfo;
    }
    v57 = **(Il2CppObject ***)(list + 184);
    v56 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v56, v57, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0LL);
    v58 = EventMissionMaster___c_TypeInfo->static_fields;
    v58->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v56;
    sub_1B4CF34((CGThumbnailListItem_o *)&v58->__9__13_0, (int32_t)v56, v59, v60);
  }
  if ( !v63 )
    goto LABEL_78;
  System_Collections_Generic_List_object___Sort_56106144(
    v63,
    v56,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v63,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t Time; // x0
  int64_t v17; // x1
  int64_t v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_49BAEAB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B4CF90(&NetworkManager_TypeInfo, v12);
    sub_1B4CF90(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v13);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v14);
    byte_49BAEAB = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
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
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v17 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v18 >= *(_QWORD *)(Time + 56)
          && v18 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Time,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v17;
            sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 4), v17, v22, v23);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B4D1EC(Time, v17);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v28 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v29 = **(Il2CppObject ***)(Time + 184);
    v28 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v28;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56106144(
    v15,
    v28,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t Time; // x0
  int64_t v13; // x1
  int64_t v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49BAEB4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    byte_49BAEB4 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v14 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v17,
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v13 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && v14 >= *(_QWORD *)(Time + 56) && v14 < *(_QWORD *)(Time + 64) )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v21 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)Time,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v13;
            sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), v13, v18, v19);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B4D1EC(Time, v13);
  }
LABEL_19:
  if ( v11 )
    return v11->fields._size;
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t Time; // x0
  int64_t v17; // x1
  int64_t v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_49BAEAE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B4CF90(&NetworkManager_TypeInfo, v12);
    sub_1B4CF90(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, v13);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v14);
    byte_49BAEAE = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
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
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v17 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v18 >= *(_QWORD *)(Time + 56)
          && v18 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Time,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v17;
            sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 4), v17, v22, v23);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B4D1EC(Time, v17);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v28 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v29 = **(Il2CppObject ***)(Time + 184);
    v28 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v28;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56106144(
    v15,
    v28,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v15; // x19
  int64_t Time; // x0
  int64_t v17; // x1
  int64_t v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  if ( (byte_49BAEA7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B4CF90(&NetworkManager_TypeInfo, v12);
    sub_1B4CF90(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v13);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v14);
    byte_49BAEA7 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
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
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v17 = Time;
        if ( *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v18 >= *(_QWORD *)(Time + 56)
          && v18 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Time,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v17;
            sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 4), v17, v22, v23);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B4D1EC(Time, v17);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v28 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v29 = **(Il2CppObject ***)(Time + 184);
    v28 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v28;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)v28, v31, v32);
  }
  if ( !v15 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56106144(
    v15,
    v28,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v15,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39742432(
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
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  Il2CppObject *v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_49BAEA8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, idList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1B4CF90(&NetworkManager_TypeInfo, v13);
    sub_1B4CF90(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v14);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v15);
    byte_49BAEA8 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v21,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( list )
      {
        v22 = (Il2CppObject *)list;
        if ( *((_DWORD *)list + 6) != 7 )
        {
          if ( !idList )
            break;
          list = (void *)System_Collections_Generic_List_int___Contains(
                           idList,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v26 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v22,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v22;
              sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
            }
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_19;
    }
LABEL_27:
    sub_1B4D1EC(list, v17);
  }
LABEL_19:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v29, v30, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v29;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)v29, v32, v33);
  }
  if ( !v16 )
    goto LABEL_27;
  System_Collections_Generic_List_object___Sort_56106144(
    v16,
    v29,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39743128(
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49BAEA9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, idList);
    sub_1B4CF90(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    byte_49BAEA9 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                    (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                    (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( !idList )
    goto LABEL_19;
  v13 = *(_QWORD *)&idList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B4D1F4(list, v11);
      list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                        &entity,
                                                                                        idList->m_Items[v14 + 1],
                                                                                        (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      LODWORD(v13) = idList->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v10 )
LABEL_19:
    sub_1B4D1EC(list, v11);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v16; // x19
  int64_t Time; // x0
  __int64 v18; // x1
  int64_t v19; // x23
  int32_t Count; // w0
  int32_t v21; // w24
  int32_t v22; // w25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int64_t v25; // x26
  Il2CppObject *MasterData_object; // x27
  UserEventMissionEntity_o *Entity; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Comparison_T__o *v32; // x20
  Il2CppObject *v33; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_49BAEB0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1B4CF90(&NetworkManager_TypeInfo, v12);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B4CF90(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, v14);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v15);
    byte_49BAEB0 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_39;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
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
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v25 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && *(_DWORD *)(Time + 24) == 4 && v19 >= *(_QWORD *)(Time + 56) )
        {
          if ( v19 <= *(_QWORD *)(Time + 64) )
            goto LABEL_42;
          if ( v19 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Time,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_49B57A5 )
            {
              sub_1B4CF90(&NetworkManager_TypeInfo, v18);
              byte_49B57A5 = 1;
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
                       *(_DWORD *)(v25 + 16),
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_42:
                if ( !v16 )
                  break;
                items = v16->fields._items;
                v29 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
                ++v16->fields._version;
                if ( !items )
                  break;
                size = v16->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    (Il2CppObject *)v25,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v31 = &items->obj.klass + size;
                  v16->fields._size = size + 1;
                  v31[4] = (Il2CppClass *)v25;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 4), v25, v23, v24);
                }
              }
            }
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_31;
    }
LABEL_39:
    sub_1B4D1EC(Time, v18);
  }
LABEL_31:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v32 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 48LL);
  if ( !v32 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v33 = **(Il2CppObject ***)(Time + 184);
    v32 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v32, v33, Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v32;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)v32, v35, v36);
  }
  if ( !v16 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_56106144(
    v16,
    v32,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v16;
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
  System_Collections_Generic_List_object__o *v14; // x19
  int64_t Time; // x0
  int64_t v16; // x1
  int64_t v17; // x22
  int32_t Count; // w0
  int32_t v19; // w23
  int32_t v20; // w24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Comparison_T__o *v27; // x20
  Il2CppObject *v28; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_49BAEB1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v10);
    sub_1B4CF90(&NetworkManager_TypeInfo, v11);
    sub_1B4CF90(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, v12);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v13);
    byte_49BAEB1 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_28;
  v17 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v20,
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v16 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v17 >= *(_QWORD *)(Time + 56)
          && v17 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v14 )
            break;
          items = v14->fields._items;
          v24 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)Time,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v16;
            sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 4), v16, v21, v22);
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B4D1EC(Time, v16);
  }
LABEL_20:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v27 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v27 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v28 = **(Il2CppObject ***)(Time + 184);
    v27 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v27, v28, Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v27;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v27, v30, v31);
  }
  if ( !v14 )
    goto LABEL_28;
  System_Collections_Generic_List_object___Sort_56106144(
    v14,
    v27,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v14;
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
  System_Collections_Generic_List_int__o *v11; // x21
  int64_t Time; // x0
  __int64 v13; // x1
  int64_t v14; // x22
  int v15; // w23
  int32_t v16; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_49BAEAA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    byte_49BAEAA = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_22;
  v14 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( (int)Time >= 1 )
  {
    v15 = Time;
    v16 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v16,
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time
        && *(_DWORD *)(Time + 28) == eventId
        && *(_DWORD *)(Time + 24) != 7
        && v14 >= *(_QWORD *)(Time + 56)
        && v14 <= *(_QWORD *)(Time + 72) )
      {
        if ( !v11 )
          break;
        v13 = *(unsigned int *)(Time + 16);
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
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v13;
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B4D1EC(Time, v13);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_object__o *v9; // x0
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *v12; // x21
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  Il2CppObject *Item; // x0
  int32_t result; // w0

  if ( (byte_49BAEB2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v7);
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    byte_49BAEB2 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_18;
  v12 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               Time,
               v15,
               (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Item )
      {
        if ( HIDWORD(Item[1].monitor) == eventId
          && (__int64)v12 >= (__int64)Item[3].monitor
          && (__int64)v12 <= (__int64)Item[4].klass )
        {
          result = (int32_t)Item[1].monitor;
          if ( (unsigned int)result <= 5 && ((1 << result) & 0x34) != 0 )
            return result;
        }
      }
      if ( v14 == ++v15 )
        return 2;
    }
LABEL_18:
    sub_1B4D1EC(Time, v11);
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
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v10; // x1
  int64_t v11; // x22
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  EventMissionEntity_o *result; // x0

  if ( (byte_49BAEB5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v7);
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    byte_49BAEB5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_17;
  v11 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         Time,
                                         v14,
                                         (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( result
        && result->fields.missionTargetId == eventId
        && v11 >= result->fields.startedAt
        && v11 <= result->fields.closedAt
        && result->fields.id == targetMissionId )
      {
        return result;
      }
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_17:
    sub_1B4D1EC(Time, v10);
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t Time; // x0
  const MethodInfo *v20; // x1
  int64_t v21; // x23
  int32_t Count; // w0
  int32_t v23; // w24
  int32_t i; // w25
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int64_t v27; // x26
  Il2CppObject *MasterData_object; // x27
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  int64_t v31; // x27
  int v32; // w29
  int v33; // w22
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Comparison_T__o *v38; // x19
  Il2CppObject *v39; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49BAEAF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v13);
    sub_1B4CF90(&NetworkManager_TypeInfo, v14);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B4CF90(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, v16);
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v17);
    byte_49BAEAF = 1;
  }
  entity = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_53;
  v21 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    for ( i = 0; i != v23; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_53;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        i,
                        (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_EventMissionEntity__get_Item__);
      if ( Time )
      {
        v27 = Time;
        if ( *(_DWORD *)(Time + 28) == eventId && *(_DWORD *)(Time + 24) == 2 && v21 >= *(_QWORD *)(Time + 56) )
        {
          if ( v21 <= *(_QWORD *)(Time + 64) )
            goto LABEL_39;
          if ( v21 > *(_QWORD *)(Time + 72) )
            continue;
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_53;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_49B57A5 )
          {
            sub_1B4CF90(&NetworkManager_TypeInfo, v20);
            byte_49B57A5 = 1;
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
                 *(_DWORD *)(v27 + 16),
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
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_53;
          Time = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Time,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_53;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            *(_DWORD *)(v27 + 28),
                            *(_DWORD *)(v27 + 16),
                            v29);
          if ( Time )
          {
            v30 = *(_QWORD *)(Time + 24);
            v31 = Time;
            if ( v30 )
            {
              v32 = v30 - 1;
              if ( (int)v30 >= 1 )
              {
                if ( !(_DWORD)v30 )
LABEL_54:
                  sub_1B4D1F4(Time, v20);
                v33 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v31 + 8LL * v33 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v20);
                  if ( (Time & 1) == 0 )
                    goto LABEL_44;
                  if ( v32 == v33 )
                    goto LABEL_39;
                  if ( (unsigned int)++v33 >= *(_DWORD *)(v31 + 24) )
                    goto LABEL_54;
                }
LABEL_53:
                sub_1B4D1EC(Time, v20);
              }
LABEL_39:
              if ( !v18 )
                goto LABEL_53;
              items = v18->fields._items;
              v35 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v18->fields._version;
              if ( !items )
                goto LABEL_53;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  (Il2CppObject *)v27,
                  *(const MethodInfo_35801DC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v37[4] = (Il2CppClass *)v27;
                sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 4), v27, v25, v26);
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
  v38 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 40LL);
  if ( !v38 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v39 = **(Il2CppObject ***)(Time + 184);
    v38 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v38, v39, Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v38;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)v38, v41, v42);
  }
  if ( !v18 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_56106144(
    v18,
    v38,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v18,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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

  if ( (byte_49BAEAD & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_MstMissionMaster___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49BAEAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MstMissionMaster___);
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
        sub_1B4D1F4(Instance, v5);
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
    sub_1B4D1EC(Instance, v5);
  }
  return v9;
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BAEB6 & 1) == 0 )
  {
    sub_1B4CF90(&EventMissionMaster___c_TypeInfo, v1);
    byte_49BAEB6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)EventMissionMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1B4D1EC(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B4D1EC(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}