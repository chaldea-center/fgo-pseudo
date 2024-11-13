void __fastcall EventMissionMaster___ctor(EventMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1622E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__, method, v2);
    byte_4B1622E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    134,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall EventMissionMaster__getAchivePanelNum(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_List_int__o *v19; // x20
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int32_t v22; // w21
  __int64 v23; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B16234 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, missionData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B16234 = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    missionData,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !missionData )
    goto LABEL_24;
  if ( missionData->fields._size >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
      UserId = NetworkManager__get_UserId(0LL);
      Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)missionData,
                                    v22,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
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
                                        v22,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)&Instance->fields._DispLog != 1 )
          {
            Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)missionData,
                                          v22,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionEntity__get_Item__);
            if ( !Instance )
              break;
            if ( !v19 )
              break;
            v21 = *(unsigned int *)&Instance->fields._DispLog;
            items = v19->fields._items;
            v27 = Method_System_Collections_Generic_List_int__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v19,
                v21,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v19->fields._size = size + 1;
              items->m_Items[size + 1] = v21;
            }
          }
        }
      }
      if ( ++v22 >= missionData->fields._size )
        return v19;
    }
LABEL_24:
    sub_1BCAA3C(Instance, v21);
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getClearMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        int32_t missionType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_object__o *v44; // x22
  const MethodInfo *v45; // x1
  int64_t list; // x0
  int32_t Count; // w0
  int64_t v48; // x2
  __int64 v49; // x3
  int32_t v50; // w24
  int32_t v51; // w25
  Il2CppObject *Item; // x0
  int64_t v53; // x26
  __int64 methodPtr_low; // x10
  __int64 v55; // x1
  Il2CppObject *MasterData_object; // x27
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x4
  EventMissionConditionEntity_array *MissionCondListHighPriority; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x20
  __int64 v69; // x28
  EventMissionMaster___c_c *v70; // x0
  System_Func_object__int__o *_9__13_1; // x27
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  int64_t v80; // x27
  __int64 v81; // x9
  int v82; // w20
  int v83; // w19
  __int64 v84; // x8
  int v85; // w8
  System_Comparison_T__o *v87; // x19
  Il2CppObject *v88; // x20
  struct EventMissionMaster___c_StaticFields *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  Il2CppObject *object; // [xsp+0h] [xbp-80h]
  int64_t Time; // [xsp+8h] [xbp-78h]
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B1623B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&missionType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___, v15, v16);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Func_EventMissionConditionEntity__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, v35, v36);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__, v37, v38);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v39, v40);
    byte_4B1623B = 1;
  }
  entity = 0LL;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0LL);
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_76;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v50 = Count;
    v51 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_76;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v51,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v53 = (int64_t)Item;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId
          && LODWORD(Item[1].monitor) == missionType
          && (missionType == 2
           || missionType == 5 && (__int64)Item[3].monitor <= Time && Time <= (__int64)Item[4].monitor) )
        {
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_76;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)list,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v55);
          list = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_76;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 list,
                 *(_DWORD *)(v53 + 16),
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
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            goto LABEL_76;
          list = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( missionType == 5
            && *(_QWORD *)(v53 + 56) <= Time
            && *(_QWORD *)(v53 + 64) < Time
            && Time <= *(_QWORD *)(v53 + 72) )
          {
            if ( !list )
              goto LABEL_76;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondListHighPriority(
                                            (EventMissionConditionMaster_o *)list,
                                            *(_DWORD *)(v53 + 28),
                                            *(_DWORD *)(v53 + 16),
                                            4,
                                            v66);
          }
          else
          {
            if ( !list )
              goto LABEL_76;
            MissionCondListHighPriority = EventMissionConditionMaster__getMissionCondList(
                                            (EventMissionConditionMaster_o *)list,
                                            *(_DWORD *)(v53 + 28),
                                            *(_DWORD *)(v53 + 16),
                                            v65);
          }
          v68 = (System_Collections_Generic_IEnumerable_TSource__o *)MissionCondListHighPriority;
          if ( MissionCondListHighPriority )
          {
            v69 = *(_QWORD *)&MissionCondListHighPriority->max_length;
            if ( v69 )
              break;
          }
        }
      }
LABEL_67:
      if ( ++v51 == v50 )
        goto LABEL_68;
    }
    v70 = EventMissionMaster___c_TypeInfo;
    if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v45);
      v70 = EventMissionMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__int__o *)v70->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70, v45);
        v70 = EventMissionMaster___c_TypeInfo;
      }
      object = (Il2CppObject *)v70->static_fields->__9;
      _9__13_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_EventMissionConditionEntity__int__TypeInfo,
                                                 v45,
                                                 v48,
                                                 v49);
      System_Func_object__int____ctor(
        _9__13_1,
        object,
        Method_EventMissionMaster___c__getClearMasterMissionList_b__13_1__,
        0LL);
      static_fields = EventMissionMaster___c_TypeInfo->static_fields;
      static_fields->__9__13_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__13_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__13_1,
        (int64_t)_9__13_1,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v68,
                                                                 (System_Func_TSource__TKey__o *)_9__13_1,
                                                                 (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    list = (int64_t)System_Linq_Enumerable__ToArray_object_(
                      v79,
                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventMissionConditionEntity___);
    if ( !list )
      goto LABEL_76;
    v80 = list;
    if ( !(unsigned int)*(_QWORD *)(list + 24) )
LABEL_77:
      sub_1BCAA44(list, v45);
    v81 = *(_QWORD *)(list + 32);
    if ( !v81 )
      goto LABEL_76;
    if ( (int)v69 < 1 )
      goto LABEL_67;
    v82 = *(_DWORD *)(v81 + 36);
    v83 = 1;
    list = 1LL;
    while ( 1 )
    {
      v84 = *(_QWORD *)(v80 + 8LL * (v83 - 1) + 32);
      if ( !v84 )
        goto LABEL_76;
      if ( *(_DWORD *)(v84 + 20) == 4 )
      {
        if ( v82 != *(_DWORD *)(v84 + 36) )
        {
          v82 = *(_DWORD *)(v84 + 36);
          if ( (list & 1) != 0 )
            goto LABEL_25;
LABEL_60:
          list = EventMissionConditionEntity__getMissionProgress(
                   *(EventMissionConditionEntity_o **)(v80 + 8LL * (v83 - 1) + 32),
                   v45);
          v85 = ((_DWORD)v69 == v83) & (unsigned __int8)list;
          goto LABEL_61;
        }
        if ( (list & 1) != 0 )
          goto LABEL_60;
        v85 = 0;
        list = 0LL;
      }
      else
      {
        v85 = 0;
      }
LABEL_61:
      if ( v83 >= (int)v69 || (v85 & 1) != 0 )
      {
        if ( !v85 )
          goto LABEL_67;
LABEL_25:
        if ( v44 )
        {
          items = v44->fields._items;
          v62 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v44->fields._version;
          if ( items )
          {
            size = v44->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v44,
                (Il2CppObject *)v53,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = &items->obj.klass + size;
              v44->fields._size = size + 1;
              v64[4] = (Il2CppClass *)v53;
              sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), v53, v48, v49, v57, v58, v59, v60);
            }
            goto LABEL_67;
          }
        }
LABEL_76:
        sub_1BCAA3C(list, v45);
      }
      if ( (unsigned int)v83++ >= *(_DWORD *)(v80 + 24) )
        goto LABEL_77;
    }
  }
LABEL_68:
  list = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v45);
    list = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v87 = *(System_Comparison_T__o **)(*(_QWORD *)(list + 184) + 72LL);
  if ( !v87 )
  {
    if ( !*(_DWORD *)(list + 224) )
    {
      j_il2cpp_runtime_class_init_0(list, v45);
      list = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v88 = **(Il2CppObject ***)(list + 184);
    v87 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v45, v48, v49);
    System_Comparison_object____ctor(v87, v88, Method_EventMissionMaster___c__getClearMasterMissionList_b__13_0__, 0LL);
    v89 = EventMissionMaster___c_TypeInfo->static_fields;
    v89->__9__13_0 = (struct System_Comparison_EventMissionEntity__o *)v87;
    sub_1BCA784((PartyOrganizationUtility_o *)&v89->__9__13_0, (int64_t)v87, v90, v91, v92, v93, v94, v95);
  }
  if ( !v44 )
    goto LABEL_76;
  System_Collections_Generic_List_object___Sort_56244000(
    v44,
    v87,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v44,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getCompleteMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x19
  __int64 v29; // x1
  int64_t Time; // x0
  int64_t v31; // x1
  int64_t v32; // x22
  int32_t Count; // w0
  int64_t v34; // x2
  __int64 v35; // x3
  int32_t v36; // w23
  int32_t v37; // w24
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Comparison_T__o *v47; // x20
  Il2CppObject *v48; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B16233 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, v24, v25);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v26, v27);
    byte_4B16233 = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v36 = Count;
    v37 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v37,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v31 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 6
          && v32 >= *(_QWORD *)(Time + 56)
          && v32 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v28 )
            break;
          items = v28->fields._items;
          v44 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v28->fields._version;
          if ( !items )
            break;
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)Time,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v31;
            sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v31, v34, v35, v38, v39, v40, v41);
          }
        }
      }
      if ( v36 == ++v37 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCAA3C(Time, v31);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v31);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v47 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 24LL);
  if ( !v47 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time, v31);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v48 = **(Il2CppObject ***)(Time + 184);
    v47 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v31, v34, v35);
    System_Comparison_object____ctor(v47, v48, Method_EventMissionMaster___c__getCompleteMissionList_b__5_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Comparison_EventMissionEntity__o *)v47;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( !v28 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56244000(
    v28,
    v47,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v28,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getDailyEventMissionNum(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 v21; // x1
  int64_t Time; // x0
  int64_t v23; // x1
  int64_t v24; // x22
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B1623C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    byte_4B1623C = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v24 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v27,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v23 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && v24 >= *(_QWORD *)(Time + 56)
          && v24 < *(_QWORD *)(Time + 64) )
        {
          if ( !v20 )
            break;
          items = v20->fields._items;
          v36 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v20->fields._version;
          if ( !items )
            break;
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              (Il2CppObject *)Time,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v23, v28, v29, v30, v31, v32, v33);
          }
        }
      }
      if ( v26 == ++v27 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1BCAA3C(Time, v23);
  }
LABEL_21:
  if ( v20 )
    return v20->fields._size;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getDailyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x19
  __int64 v29; // x1
  int64_t Time; // x0
  int64_t v31; // x1
  int64_t v32; // x22
  int32_t Count; // w0
  int64_t v34; // x2
  __int64 v35; // x3
  int32_t v36; // w23
  int32_t v37; // w24
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Comparison_T__o *v47; // x20
  Il2CppObject *v48; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B16236 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, v24, v25);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v26, v27);
    byte_4B16236 = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v36 = Count;
    v37 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v37,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v31 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 3
          && v32 >= *(_QWORD *)(Time + 56)
          && v32 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v28 )
            break;
          items = v28->fields._items;
          v44 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v28->fields._version;
          if ( !items )
            break;
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)Time,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v31;
            sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v31, v34, v35, v38, v39, v40, v41);
          }
        }
      }
      if ( v36 == ++v37 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCAA3C(Time, v31);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v31);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v47 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 32LL);
  if ( !v47 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time, v31);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v48 = **(Il2CppObject ***)(Time + 184);
    v47 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v31, v34, v35);
    System_Comparison_object____ctor(v47, v48, Method_EventMissionMaster___c__getDailyMasterMissionList_b__8_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMissionEntity__o *)v47;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( !v28 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56244000(
    v28,
    v47,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v28,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x19
  __int64 v29; // x1
  int64_t Time; // x0
  int64_t v31; // x1
  int64_t v32; // x22
  int32_t Count; // w0
  int64_t v34; // x2
  __int64 v35; // x3
  int32_t v36; // w23
  int32_t v37; // w24
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Comparison_T__o *v47; // x20
  Il2CppObject *v48; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B1622F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getEventMissionList_b__1_0__, v24, v25);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v26, v27);
    byte_4B1622F = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v36 = Count;
    v37 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v37,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v31 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 24) != 7
          && *(_DWORD *)(Time + 28) == eventId
          && v32 >= *(_QWORD *)(Time + 56)
          && v32 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v28 )
            break;
          items = v28->fields._items;
          v44 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v28->fields._version;
          if ( !items )
            break;
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)Time,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v31;
            sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v31, v34, v35, v38, v39, v40, v41);
          }
        }
      }
      if ( v36 == ++v37 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCAA3C(Time, v31);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v31);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v47 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 8LL);
  if ( !v47 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time, v31);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v48 = **(Il2CppObject ***)(Time + 184);
    v47 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v31, v34, v35);
    System_Comparison_object____ctor(v47, v48, Method_EventMissionMaster___c__getEventMissionList_b__1_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Comparison_EventMissionEntity__o *)v47;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( !v28 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56244000(
    v28,
    v47,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v28,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39908356(
        EventMissionMaster_o *this,
        System_Collections_Generic_List_int__o *idList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v35; // x2
  __int64 v36; // x3
  int32_t v37; // w22
  int32_t v38; // w23
  Il2CppObject *v39; // x24
  __int64 methodPtr_low; // x10
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Comparison_T__o *v49; // x20
  Il2CppObject *v50; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B16230 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getEventMissionList_b__2_0__, v26, v27);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v28, v29);
    byte_4B16230 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       idList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  NetworkManager__getTime(0LL);
  list = this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v37 = Count;
    v38 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v38,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v39 = (Il2CppObject *)list;
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
                           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v30 )
              break;
            items = v30->fields._items;
            v46 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
            ++v30->fields._version;
            if ( !items )
              break;
            size = v30->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v30,
                v39,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v48[4] = (Il2CppClass *)v39;
              sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v39, v35, v36, v41, v42, v43, v44);
            }
          }
        }
      }
      if ( v37 == ++v38 )
        goto LABEL_21;
    }
LABEL_29:
    sub_1BCAA3C(list, v32);
  }
LABEL_21:
  list = EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v32);
    list = EventMissionMaster___c_TypeInfo;
  }
  v49 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v49 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v32);
      list = EventMissionMaster___c_TypeInfo;
    }
    v50 = (Il2CppObject *)**((_QWORD **)list + 23);
    v49 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v32, v35, v36);
    System_Comparison_object____ctor(v49, v50, Method_EventMissionMaster___c__getEventMissionList_b__2_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_EventMissionEntity__o *)v49;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v49, v52, v53, v54, v55, v56, v57);
  }
  if ( !v30 )
    goto LABEL_29;
  System_Collections_Generic_List_object___Sort_56244000(
    v30,
    v49,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v30,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


EventMissionEntity_array *__fastcall EventMissionMaster__getEventMissionList_39909124(
        EventMissionMaster_o *this,
        System_Int32_array *idList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x21
  Il2CppObject *v17; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x22
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
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16231 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, idList, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v14, v15);
    byte_4B16231 = 1;
  }
  entity = 0LL;
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       idList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                                                           (System_Collections_ObjectModel_Collection_T__o *)list,
                                                                                           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !idList )
    goto LABEL_19;
  v19 = *(_QWORD *)&idList->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v19 )
        sub_1BCAA44(list, v17);
      list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                               &entity,
                                                                                               idList->m_Items[v20 + 1],
                                                                                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        v17 = entity;
        if ( !entity )
          goto LABEL_19;
        if ( LODWORD(entity[1].monitor) != 7 )
        {
          if ( !v16 )
            goto LABEL_19;
          items = v16->fields._items;
          v28 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            goto LABEL_19;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v17,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v17;
            sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v17, v21, v22, v23, v24, v25, v26);
          }
        }
      }
      LODWORD(v19) = idList->max_length;
    }
    while ( (__int64)++v20 < (int)v19 );
  }
  if ( !v16 )
LABEL_19:
    sub_1BCAA3C(list, v17);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v16,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getExtraMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x20
  __int64 v31; // x1
  int64_t Time; // x0
  __int64 v33; // x1
  int64_t v34; // x22
  int32_t Count; // w0
  int64_t v36; // x2
  __int64 v37; // x3
  int32_t v38; // w23
  int32_t v39; // w24
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x25
  __int64 methodPtr_low; // x10
  __int64 v46; // x1
  Il2CppObject *MasterData_object; // x26
  UserEventMissionEntity_o *Entity; // x0
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Comparison_T__o *v53; // x19
  Il2CppObject *v54; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7

  if ( (byte_4B16238 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v10, v11);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, v26, v27);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v28, v29);
    byte_4B16238 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v34 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v38 = Count;
    v39 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v39,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v44 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 4
          && v34 >= *(_QWORD *)(Time + 56) )
        {
          if ( v34 <= *(_QWORD *)(Time + 64) )
            goto LABEL_40;
          if ( v34 <= *(_QWORD *)(Time + 72) )
          {
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              break;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Time,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v46);
            Time = NetworkManager__get_UserId(0LL);
            if ( !MasterData_object )
              break;
            Entity = UserEventMissionMaster__GetEntity(
                       (UserEventMissionMaster_o *)MasterData_object,
                       Time,
                       *(_DWORD *)(v44 + 16),
                       0LL);
            if ( Entity )
            {
              Time = UserEventMissionEntity__isClearMission(Entity, 0LL);
              if ( (Time & 1) != 0 )
              {
LABEL_40:
                if ( !v30 )
                  break;
                items = v30->fields._items;
                v50 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
                ++v30->fields._version;
                if ( !items )
                  break;
                size = v30->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v30,
                    (Il2CppObject *)v44,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v52 = &items->obj.klass + size;
                  v30->fields._size = size + 1;
                  v52[4] = (Il2CppClass *)v44;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), v44, v36, v37, v40, v41, v42, v43);
                }
              }
            }
          }
        }
      }
      if ( v38 == ++v39 )
        goto LABEL_29;
    }
LABEL_37:
    sub_1BCAA3C(Time, v33);
  }
LABEL_29:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v33);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v53 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 48LL);
  if ( !v53 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time, v33);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v54 = **(Il2CppObject ***)(Time + 184);
    v53 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v33, v36, v37);
    System_Comparison_object____ctor(v53, v54, Method_EventMissionMaster___c__getExtraMissionList_b__10_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Comparison_EventMissionEntity__o *)v53;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__10_0, (int64_t)v53, v56, v57, v58, v59, v60, v61);
  }
  if ( !v30 )
    goto LABEL_37;
  System_Collections_Generic_List_object___Sort_56244000(
    v30,
    v53,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v30;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionEntity__o *__fastcall EventMissionMaster__getLimitedMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x19
  __int64 v27; // x1
  int64_t Time; // x0
  int64_t v29; // x1
  int64_t v30; // x22
  int32_t Count; // w0
  int64_t v32; // x2
  __int64 v33; // x3
  int32_t v34; // w23
  int32_t v35; // w24
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x20
  Il2CppObject *v46; // x21
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B16239 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, v22, v23);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v24, v25);
    byte_4B16239 = 1;
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v30 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v34 = Count;
    v35 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v35,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v29 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 5
          && v30 >= *(_QWORD *)(Time + 56)
          && v30 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v42 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)Time,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v29;
            sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), v29, v32, v33, v36, v37, v38, v39);
          }
        }
      }
      if ( v34 == ++v35 )
        goto LABEL_22;
    }
LABEL_30:
    sub_1BCAA3C(Time, v29);
  }
LABEL_22:
  Time = (int64_t)EventMissionMaster___c_TypeInfo;
  if ( !EventMissionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v29);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v45 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 56LL);
  if ( !v45 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time, v29);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v46 = **(Il2CppObject ***)(Time + 184);
    v45 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v29, v32, v33);
    System_Comparison_object____ctor(v45, v46, Method_EventMissionMaster___c__getLimitedMissionList_b__11_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMissionEntity__o *)v45;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__11_0, (int64_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v26 )
    goto LABEL_30;
  System_Collections_Generic_List_object___Sort_56244000(
    v26,
    v45,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionEntity__o *)v26;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventMissionMaster__getMissionIdListByEvent(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x21
  __int64 v21; // x1
  int64_t Time; // x0
  __int64 v23; // x1
  int64_t v24; // x22
  int v25; // w23
  int32_t v26; // w24
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10

  if ( (byte_4B16232 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    byte_4B16232 = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_24;
  v24 = Time;
  Time = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Time >= 1 )
  {
    v25 = Time;
    v26 = 0;
    while ( 1 )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        break;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        v26,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) != 7
          && v24 >= *(_QWORD *)(Time + 56)
          && v24 <= *(_QWORD *)(Time + 72) )
        {
          if ( !v20 )
            break;
          v23 = *(unsigned int *)(Time + 16);
          items = v20->fields._items;
          v29 = Method_System_Collections_Generic_List_int__Add__;
          ++v20->fields._version;
          if ( !items )
            break;
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v20,
              v23,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v20->fields._size = size + 1;
            items->m_Items[size + 1] = v23;
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(Time, v23);
  }
LABEL_22:
  if ( !v20 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventMissionMaster__getMissionType(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x0
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *v20; // x21
  int32_t Count; // w0
  int32_t v22; // w22
  int32_t v23; // w23
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10
  int32_t result; // w0

  if ( (byte_4B1623A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    byte_4B1623A = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_20;
  v20 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                          Time,
                          v23,
                          (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && Item[7] == eventId
          && (__int64)v20 >= *((_QWORD *)Item + 7)
          && (__int64)v20 <= *((_QWORD *)Item + 8) )
        {
          result = Item[6];
          if ( (unsigned int)result <= 5 && ((1 << result) & 0x34) != 0 )
            return result;
        }
      }
      if ( v22 == ++v23 )
        return 2;
    }
LABEL_20:
    sub_1BCAA3C(Time, v19);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *Time; // x0
  __int64 v14; // x1
  int64_t v15; // x22
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  EventMissionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1623D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&targetMissionId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    byte_4B1623D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = (System_Collections_ObjectModel_Collection_T__o *)NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_19;
  v15 = (int64_t)Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      Time = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Time )
        break;
      result = (EventMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                         Time,
                                         v18,
                                         (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventMissionEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionEntity_TypeInfo
          && result->fields.missionTargetId == eventId
          && v15 >= result->fields.startedAt
          && v15 <= result->fields.closedAt
          && result->fields.id == targetMissionId )
        {
          return result;
        }
      }
      if ( v17 == ++v18 )
        return 0LL;
    }
LABEL_19:
    sub_1BCAA3C(Time, v14);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventMissionEntity_array *__fastcall EventMissionMaster__getWeeklyMasterMissionList(
        EventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x21
  __int64 v35; // x1
  int64_t Time; // x0
  const MethodInfo *v37; // x1
  int64_t v38; // x22
  int32_t Count; // w0
  int64_t v40; // x2
  __int64 v41; // x3
  int32_t v42; // w23
  int32_t i; // w24
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x25
  __int64 methodPtr_low; // x10
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x26
  const MethodInfo *v52; // x3
  __int64 v53; // x8
  int64_t v54; // x26
  int v55; // w27
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Comparison_T__o *v60; // x19
  Il2CppObject *v61; // x20
  struct EventMissionMaster___c_StaticFields *static_fields; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int v70; // [xsp+4h] [xbp-6Ch]
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16237 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Comparison_EventMissionEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v12, v13);
    sub_1BCA7E0(&EventMissionEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__Sort__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionEntity___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, v30, v31);
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v32, v33);
    byte_4B16237 = 1;
  }
  entity = 0LL;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_51;
  v38 = Time;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v42 = Count;
    for ( i = 0; i != v42; ++i )
    {
      Time = (int64_t)this->fields.list;
      if ( !Time )
        goto LABEL_51;
      Time = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)Time,
                        i,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Time )
      {
        v48 = Time;
        methodPtr_low = LOBYTE(EventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Time + 304LL) >= (unsigned int)methodPtr_low
          && *(EventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)Time + 200LL) + 8 * methodPtr_low - 8) == EventMissionEntity_TypeInfo
          && *(_DWORD *)(Time + 28) == eventId
          && *(_DWORD *)(Time + 24) == 2
          && v38 >= *(_QWORD *)(Time + 56) )
        {
          if ( v38 <= *(_QWORD *)(Time + 64) )
            goto LABEL_37;
          if ( v38 > *(_QWORD *)(Time + 72) )
            continue;
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_51;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Time,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50);
          Time = NetworkManager__get_UserId(0LL);
          if ( !MasterData_object )
            goto LABEL_51;
          if ( UserEventMissionMaster__TryGetEntity(
                 (UserEventMissionMaster_o *)MasterData_object,
                 &entity,
                 Time,
                 *(_DWORD *)(v48 + 16),
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
          Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_51;
          Time = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Time,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
          if ( !Time )
            goto LABEL_51;
          Time = (int64_t)EventMissionConditionMaster__getMissionCondList(
                            (EventMissionConditionMaster_o *)Time,
                            *(_DWORD *)(v48 + 28),
                            *(_DWORD *)(v48 + 16),
                            v52);
          if ( Time )
          {
            v53 = *(_QWORD *)(Time + 24);
            v54 = Time;
            if ( v53 )
            {
              v70 = v53 - 1;
              if ( (int)v53 >= 1 )
              {
                if ( !(_DWORD)v53 )
LABEL_52:
                  sub_1BCAA44(Time, v37);
                v55 = 0;
                while ( 1 )
                {
                  Time = *(_QWORD *)(v54 + 8LL * v55 + 32);
                  if ( !Time )
                    break;
                  Time = EventMissionConditionEntity__getMissionProgress((EventMissionConditionEntity_o *)Time, v37);
                  if ( (Time & 1) == 0 )
                    goto LABEL_42;
                  if ( v70 == v55 )
                    goto LABEL_37;
                  if ( (unsigned int)++v55 >= *(_DWORD *)(v54 + 24) )
                    goto LABEL_52;
                }
LABEL_51:
                sub_1BCAA3C(Time, v37);
              }
LABEL_37:
              if ( !v34 )
                goto LABEL_51;
              items = v34->fields._items;
              v57 = Method_System_Collections_Generic_List_EventMissionEntity__Add__;
              ++v34->fields._version;
              if ( !items )
                goto LABEL_51;
              size = v34->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v34,
                  (Il2CppObject *)v48,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
              }
              else
              {
                v59 = &items->obj.klass + size;
                v34->fields._size = size + 1;
                v59[4] = (Il2CppClass *)v48;
                sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), v48, v40, v41, v44, v45, v46, v47);
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
    j_il2cpp_runtime_class_init_0(EventMissionMaster___c_TypeInfo, v37);
    Time = (int64_t)EventMissionMaster___c_TypeInfo;
  }
  v60 = *(System_Comparison_T__o **)(*(_QWORD *)(Time + 184) + 40LL);
  if ( !v60 )
  {
    if ( !*(_DWORD *)(Time + 224) )
    {
      j_il2cpp_runtime_class_init_0(Time, v37);
      Time = (int64_t)EventMissionMaster___c_TypeInfo;
    }
    v61 = **(Il2CppObject ***)(Time + 184);
    v60 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMissionEntity__TypeInfo, v37, v40, v41);
    System_Comparison_object____ctor(v60, v61, Method_EventMissionMaster___c__getWeeklyMasterMissionList_b__9_0__, 0LL);
    static_fields = EventMissionMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMissionEntity__o *)v60;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)v60, v63, v64, v65, v66, v67, v68);
  }
  if ( !v34 )
    goto LABEL_51;
  System_Collections_Generic_List_object___Sort_56244000(
    v34,
    v60,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMissionEntity__Sort__);
  return (EventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v34,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMissionEntity__ToArray__);
}


bool __fastcall EventMissionMaster__isActiveCompMission(EventMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  void *v10; // x20
  bool v11; // w21
  int v12; // w22
  __int64 v13; // x8

  if ( (byte_4B16235 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B16235 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_14;
  v9 = *((_DWORD *)Instance + 6);
  v10 = Instance;
  v11 = v9 > 0;
  if ( v9 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v9 )
        sub_1BCAA44(Instance, v7);
      v13 = *((_QWORD *)v10 + v12 + 4);
      if ( !v13 )
        break;
      Instance = EventMissionMaster__getCompleteMissionList(this, *(_DWORD *)(v13 + 20), v8);
      if ( !Instance )
        break;
      if ( !*((_QWORD *)Instance + 3) )
      {
        v9 = *((_DWORD *)v10 + 6);
        v11 = ++v12 < v9;
        if ( v12 < v9 )
          continue;
      }
      return v11;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v7);
  }
  return v11;
}


void __fastcall EventMissionMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1623E & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionMaster___c_TypeInfo, v1, v2);
    byte_4B1623E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMissionMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMissionMaster___c_TypeInfo->static_fields->__9 = (struct EventMissionMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMissionMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getClearMasterMissionList_b__13_1(
        EventMissionMaster___c_o *this,
        EventMissionConditionEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1BCAA3C(this, 0LL);
  return value->fields.condGroup;
}


int32_t __fastcall EventMissionMaster___c___getCompleteMissionList_b__5_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getDailyMasterMissionList_b__8_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__1_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getEventMissionList_b__2_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionMaster___c___getExtraMissionList_b__10_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getLimitedMissionList_b__11_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}


int32_t __fastcall EventMissionMaster___c___getWeeklyMasterMissionList_b__9_0(
        EventMissionMaster___c_o *this,
        EventMissionEntity_o *a,
        EventMissionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.dispNo - b->fields.dispNo;
}