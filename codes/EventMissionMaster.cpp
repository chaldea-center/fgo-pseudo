void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B371DA & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, method);
    byte_4B371DA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    134,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
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

  if ( (byte_4B371E0 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionData);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v7);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B371E0 = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_28;
  if ( missionData->fields._size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v15);
        byte_4B31D77 = 1;
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
                                    (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
                                        (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v14,
                                          (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1BD36B4(Instance, v13);
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
  System_Collections_Generic_List_object__o *v23; // x23
  const MethodInfo *v24; // x1
  __int64 list; // x0
  int32_t Count; // w0
  int32_t v27; // w25
  int32_t v28; // w26
  Il2CppObject *Item; // x0
  int64_t v30; // x27
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x28
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
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  __int64 v47; // x29
  EventMissionMaster___c_c *v48; // x0
  System_Func_object__int__o *_9__13_1; // x28
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  __int64 v58; // x28
  __int64 v59; // x9
  int v60; // w20
  int v61; // w19
  __int64 v62; // x8
  int v63; // w8
  System_Comparison_T__o *v65; // x19
  Il2CppObject *v66; // x20
  struct EventMissionMaster___c_StaticFields *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  int64_t Time; // [xsp+8h] [xbp-78h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B371E7 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v9);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v10);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v11);
    sub_1BD3458(&System_Func_EventMissionConditionEntity__int__TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v17);
    sub_1BD3458(&NetworkManager_TypeInfo, v18);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BD3458(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v20);
    sub_1BD3458(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v21);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v22);
    byte_4B371E7 = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_80;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      list = (__int64)this->fields.list;
      if ( !list )
        goto LABEL_80;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v28,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v30 = (int64_t)Item;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_80;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B31D77 )
          {
            sub_1BD3458(&NetworkManager_TypeInfo, v24);
            byte_4B31D77 = 1;
          }
          list = (__int64)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            list = (__int64)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_80;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL),
                 *(_DWORD *)(v30 + 16),
                 0LL) )
          {
            list = (__int64)entity;
            if ( entity )
            {
              list = UserEventMissionEntity__isClearMission(entity, 0LL);
              if ( (list & 1) == 0 )
                goto LABEL_71;
              goto LABEL_29;
            }
            goto LABEL_80;
          }
          list = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_80;
          list = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && *(_QWORD *)(v30 + 56) <= Time
            && *(_QWORD *)(v30 + 64) < Time
            && Time <= *(_QWORD *)(v30 + 72) )
          {
            if ( !list )
              goto LABEL_80;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            *(_DWORD *)(v30 + 28),
                                            *(_DWORD *)(v30 + 16),
                                            4,
                                            v44);
          }
          else
          {
            if ( !list )
              goto LABEL_80;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            *(_DWORD *)(v30 + 28),
                                            *(_DWORD *)(v30 + 16),
                                            v43);
          }
          v46 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            v47 = *(_QWORD *)&MissionCondListHighPriority->max_length;
            if ( v47 )
              break;
          }
        }
      }
LABEL_71:
      if ( ++v28 == v27 )
        goto LABEL_72;
    }
    v48 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
      v48 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v48->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v48->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_EventMissionConditionEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0LL);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__13_1,
        (int64_t)_9__13_1,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v46,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_2F5A740 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (__int64)System_Linq_Enumerable__ToArray_object_(
                      v57,
                      (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_80;
    v58 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_81:
      sub_1BD36BC(list, v24);
    v59 = *(_QWORD *)(list + 32);
    if ( !v59 )
      goto LABEL_80;
    if ( (int)v47 < 1 )
      goto LABEL_71;
    v60 = *(_DWORD *)(v59 + 36);
    v61 = 1;
    list = 1LL;
    while ( 1 )
    {
      v62 = *(_QWORD *)(v58 + 8LL * (v61 - 1) + 32);
      if ( !v62 )
        goto LABEL_80;
      if ( *(_DWORD *)(v62 + 20) == 4 )
      {
        if ( v60 != *(_DWORD *)(v62 + 36) )
        {
          v60 = *(_DWORD *)(v62 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_29;
LABEL_64:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v58 + 8LL * (v61 - 1) + 32),
                   v24);
          v63 = ((_DWORD)v47 == v61) & (unsigned __int8)list;
          goto LABEL_65;
        }
        if ( (list & 1) != 0 )
          goto LABEL_64;
        v63 = 0;
        list = 0LL;
      }
      else
      {
        v63 = 0;
      }
LABEL_65:
      if ( v61 >= (int)v47 || (v63 & 1) != 0 )
      {
        if ( !v63 )
          goto LABEL_71;
LABEL_29:
        if ( v23 )
        {
          items = v23->fields._items;
          v40 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v23->fields._version;
          if ( items )
          {
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                (Il2CppObject *)v30,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v30;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v42 + 4), v30, v33, v34, v35, v36, v37, v38);
            }
            goto LABEL_71;
          }
        }
LABEL_80:
        sub_1BD36B4(list, v24);
      }
      if ( (unsigned int)v61++ >= *(_DWORD *)(v58 + 24) )
        goto LABEL_81;
    }
  }
LABEL_72:
  list = (__int64)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = (__int64)EventMissionMaster___c_TypeInfo;
  }
  v65 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v65 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = (__int64)EventMissionMaster___c_TypeInfo;
    }
    v66 = **(Il2CppObject ***)(list + 184);
    v65 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v65, v66, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0LL);
    v67 = EventMissionMaster___c_TypeInfo->static_fields;
    v67->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v65;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v67->__9__13_0, (int64_t)v65, v68, v69, v70, v71, v72, v73);
  }
  if ( !v23 )
    goto LABEL_80;
  System_Collections_Generic_List_object___Sort_56371284(
    v23,
    v65,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v23,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B371DF & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    sub_1BD3458(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v14);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v15);
    byte_4B371DF = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v31 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Time,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v18;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v33 + 4), v18, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BD36B4(Time, v18);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v34 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v35 = **(Il2CppObject ***)(Time + 184);
    v34 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v34;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56371284(
    v16,
    v34,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B371E8 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v9);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v10);
    sub_1BD3458(&NetworkManager_TypeInfo, v11);
    byte_4B371E8 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v15 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v27 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)Time,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v14;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v29 + 4), v14, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1BD36B4(Time, v14);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B371E2 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    sub_1BD3458(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, v14);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v15);
    byte_4B371E2 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v31 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Time,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v18;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v33 + 4), v18, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BD36B4(Time, v18);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v34 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v35 = **(Il2CppObject ***)(Time + 184);
    v34 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v34;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56371284(
    v16,
    v34,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B371DB & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    sub_1BD3458(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v14);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v15);
    byte_4B371DB = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v19 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v31 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)Time,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v18;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v33 + 4), v18, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BD36B4(Time, v18);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v34 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v35 = **(Il2CppObject ***)(Time + 184);
    v34 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v34;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56371284(
    v16,
    v34,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39987000(
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
  System_Comparison_T__o *v35; // x20
  Il2CppObject *v36; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B371DC & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v13);
    sub_1BD3458(&NetworkManager_TypeInfo, v14);
    sub_1BD3458(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v15);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v16);
    byte_4B371DC = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                           (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v17 )
              break;
            items = v17->fields._items;
            v32 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v23,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v23;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v23, v25, v26, v27, v28, v29, v30);
            }
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_21;
    }
LABEL_29:
    sub_1BD36B4(list, v18);
  }
LABEL_21:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    list = EventMissionMaster___c_TypeInfo;
  }
  v35 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventMissionMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)list + 23);
    v35 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v35, v36, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v35;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v35, v38, v39, v40, v41, v42, v43);
  }
  if ( !v17 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_56371284(
    v17,
    v35,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v17,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39987768(
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
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B371DD & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList);
    sub_1BD3458(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v9);
    byte_4B371DD = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                           (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                           (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_19;
  v13 = *(_QWORD *)&idList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1BD36BC(list, v11);
      list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                               &entity,
                                                                                               idList->m_Items[v14 + 1],
                                                                                               (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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
          v22 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              v11,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      LODWORD(v13) = idList->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !v10 )
LABEL_19:
    sub_1BD36B4(list, v11);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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
  int64_t v20; // x23
  int32_t Count; // w0
  int32_t v22; // w24
  int32_t v23; // w25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x26
  __int64 methodPtr_low; // x10
  UserEventMissionEntity_o *Entity; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Comparison_T__o *v37; // x19
  Il2CppObject *v38; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UserEventMissionMaster_o *MasterData_object; // [xsp+8h] [xbp-68h]

  if ( (byte_4B371E4 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v7);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12);
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BD3458(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, v15);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v16);
    byte_4B371E4 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_41;
  v20 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v30 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 4
          && v20 >= *(_QWORD *)(Time + 56) )
        {
          if ( v20 <= *(_QWORD *)(Time + 64) )
            goto LABEL_44;
          if ( v20 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_object = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)Time,
                                                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B31D77 )
            {
              sub_1BD3458(&NetworkManager_TypeInfo, v19);
              byte_4B31D77 = 1;
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
                       MasterData_object,
                       *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                       *(_DWORD *)(v30 + 16),
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_44:
                if ( !v17 )
                  break;
                items = v17->fields._items;
                v34 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
                ++v17->fields._version;
                if ( !items )
                  break;
                size = v17->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v17,
                    (Il2CppObject *)v30,
                    *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = &items->obj.klass + size;
                  v17->fields._size = size + 1;
                  v36[4] = (Il2CppClass *)v30;
                  sub_1BD33FC((PartyOrganizationUtility_o *)(v36 + 4), v30, v24, v25, v26, v27, v28, v29);
                }
              }
            }
          }
        }
      }
      if ( v22 == ++v23 )
        goto LABEL_33;
    }
LABEL_41:
    sub_1BD36B4(Time, v19);
  }
LABEL_33:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v37 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 48LL);
  if ( !v37 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v38 = **(Il2CppObject ***)(Time + 184);
    v37 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v37, v38, Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v37;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__10_0, (int64_t)v37, v40, v41, v42, v43, v44, v45);
  }
  if ( !v17 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_56371284(
    v17,
    v37,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Comparison_T__o *v33; // x20
  Il2CppObject *v34; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B371E5 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v11);
    sub_1BD3458(&NetworkManager_TypeInfo, v12);
    sub_1BD3458(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, v13);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v14);
    byte_4B371E5 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v30 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)Time,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v17;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v32 + 4), v17, v22, v23, v24, v25, v26, v27);
          }
        }
      }
      if ( v20 == ++v21 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BD36B4(Time, v17);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v33 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v33 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v34 = **(Il2CppObject ***)(Time + 184);
    v33 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v33, v34, Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v33;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__11_0, (int64_t)v33, v36, v37, v38, v39, v40, v41);
  }
  if ( !v15 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56371284(
    v15,
    v33,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
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

  if ( (byte_4B371DE & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BD3458(&NetworkManager_TypeInfo, v11);
    byte_4B371DE = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v15 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
    sub_1BD36B4(Time, v14);
  }
LABEL_22:
  if ( !v12 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_35A5824 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B371E6 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v7);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v8);
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    byte_4B371E6 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v13 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                          (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1BD36B4(Time, v12);
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

  if ( (byte_4B371E9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v8);
    sub_1BD3458(&NetworkManager_TypeInfo, v9);
    byte_4B371E9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_19;
  v12 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                         (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    sub_1BD36B4(Time, v11);
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
  System_Collections_Generic_List_object__o *v19; // x22
  int64_t Time; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x23
  int32_t Count; // w0
  int32_t v24; // w24
  int32_t i; // w25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x26
  __int64 methodPtr_low; // x10
  Il2CppObject *MasterData_object; // x27
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  int64_t v37; // x27
  int v38; // w21
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Comparison_T__o *v43; // x19
  Il2CppObject *v44; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int v53; // [xsp+4h] [xbp-6Ch]
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B371E3 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&System_Comparison_EventMissionEntity__TypeInfo, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8);
    sub_1BD3458(&EventMissionEntity_TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v13);
    sub_1BD3458(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v14);
    sub_1BD3458(&NetworkManager_TypeInfo, v15);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BD3458(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, v17);
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v18);
    byte_4B371E3 = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_55;
  v22 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    for ( i = 0; i != v24; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_55;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        i,
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v32 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 2
          && v22 >= *(_QWORD *)(Time + 56) )
        {
          if ( v22 <= *(_QWORD *)(Time + 64) )
            goto LABEL_41;
          if ( v22 > *(_QWORD *)(Time + 72) )
            continue;
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_55;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4B31D77 )
          {
            sub_1BD3458(&NetworkManager_TypeInfo, v21);
            byte_4B31D77 = 1;
          }
          Time = (int64_t)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Time = (int64_t)NetworkManager_TypeInfo;
          }
          if ( !MasterData_object )
            goto LABEL_55;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(Time + 184) + 64LL),
                 *(_DWORD *)(v32 + 16),
                 0LL) )
          {
            Time = (int64_t)entity;
            if ( !entity )
              goto LABEL_55;
            Time = UserEventMissionEntity__isClearMission(entity, 0LL);
            if ( (Time & 1) == 0 )
              continue;
            goto LABEL_41;
          }
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_55;
          Time = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Time,
                            (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_55;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            *(_DWORD *)(v32 + 28),
                            *(_DWORD *)(v32 + 16),
                            v35);
          if ( Time )
          {
            v36 = *(_QWORD *)(Time + 24);
            v37 = Time;
            if ( v36 )
            {
              v53 = v36 - 1;
              if ( (int)v36 >= 1 )
              {
                if ( !(_DWORD)v36 )
LABEL_56:
                  sub_1BD36BC(Time, v21);
                v38 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v37 + 8LL * v38 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v21);
                  if ( (Time & 1) == 0 )
                    goto LABEL_46;
                  if ( v53 == v38 )
                    goto LABEL_41;
                  if ( (unsigned int)++v38 >= *(_DWORD *)(v37 + 24) )
                    goto LABEL_56;
                }
LABEL_55:
                sub_1BD36B4(Time, v21);
              }
LABEL_41:
              if ( !v19 )
                goto LABEL_55;
              items = v19->fields._items;
              v40 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                goto LABEL_55;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v32,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
              }
              else
              {
                v42 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v42[4] = (Il2CppClass *)v32;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v42 + 4), v32, v26, v27, v28, v29, v30, v31);
              }
            }
          }
        }
      }
LABEL_46:
      ;
    }
  }
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 40LL);
  if ( !v43 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v44 = **(Il2CppObject ***)(Time + 184);
    v43 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMissionEntity__TypeInfo);
    System_Comparison_object____ctor(v43, v44, Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v43;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v19 )
    goto LABEL_55;
  System_Collections_Generic_List_object___Sort_56371284(
    v19,
    v43,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v19,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
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

  if ( (byte_4B371E1 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_MstMissionMaster___, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B371E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_MstMissionMaster___);
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
        sub_1BD36BC(Instance, v5);
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
    sub_1BD36B4(Instance, v5);
  }
  return v9;
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B371EA & 1) == 0 )
  {
    sub_1BD3458(&EventMissionMaster___c_TypeInfo, v1);
    byte_4B371EA = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(EventMissionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)EventMissionMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1BD36B4(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BD36B4(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}