void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FACE2 & 1) == 0 )
  {
    sub_B16FFC(&EventRaidMaster_TypeInfo, v1);
    byte_40FACE2 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FACCF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__, method);
    byte_40FACCF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    146,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  __int64 v12; // x27
  il2cpp_array_size_t v13; // w22
  int32_t v14; // w24
  QuestReleaseEntity_o *v15; // x0
  int32_t questId; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v18; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v20; // x25
  clsQuestCheck_o *v21; // x0
  WarEntity_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t Time; // [xsp+8h] [xbp-58h]

  if ( (byte_40FACD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v10);
    byte_40FACD6 = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_30:
    sub_B170D4();
  v12 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  if ( (int)v12 < 1 )
  {
    return 0;
  }
  else
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = RaidDeadQuestReleaseEntityList->m_Items[v13];
      if ( !v15 )
        goto LABEL_30;
      questId = v15->fields.questId;
      ValueInt = QuestReleaseEntity__getValueInt(v15, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v18);
      if ( !Entity )
        return v14;
      v20 = Entity;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      v21 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !v21 )
        goto LABEL_30;
      v22 = (WarEntity_o *)clsQuestCheck__IsQuestClear(v21, questId, 0, 0LL);
      if ( ((unsigned __int8)v22 & 1) == 0 )
        break;
      if ( (_DWORD)v12 - 1 == v13 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_30;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_30;
        v22 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                v20->fields.eventId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v22 )
          goto LABEL_30;
        if ( Time < *(_QWORD *)&v22->fields.eventId )
          return ValueInt;
      }
      if ( (int)++v13 >= (int)v12 )
        return 0;
      v14 = ValueInt;
      if ( v13 >= RaidDeadQuestReleaseEntityList->max_length )
      {
        sub_B17100(v22, v23, v24);
        sub_B170A0();
      }
    }
    if ( Time >= v20->fields.startedAt )
      return ValueInt;
    else
      return v14;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetCurrentDayOld(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x0
  int64_t v11; // x21
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x9
  int32_t v23; // w20
  int v24; // w8
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-40h]

  if ( (byte_40FACD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRaidEntity_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40FACD7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B170D4();
  v11 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_19:
      v20 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_39;
    v22 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 300LL) < (unsigned int)v22
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * v22 - 8) != EventRaidEntity_TypeInfo )
    {
      sub_B173C8(v21);
LABEL_39:
      sub_B170D4();
    }
    if ( *(_DWORD *)(v21 + 16) == eventId && v11 >= *(_QWORD *)(v21 + 80) && v11 < *(_QWORD *)(v21 + 88) )
    {
      v23 = *(_DWORD *)(v21 + 20);
      v24 = 90;
      goto LABEL_29;
    }
  }
  v24 = 88;
  v23 = 0;
LABEL_29:
  v30 = v24;
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_33:
    v28 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 88 )
    return 0;
  return v23;
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x0
  __int64 v32; // x10
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  EventRaidMaster___c_c *v41; // x0
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x20
  Il2CppObject *v44; // x21
  struct EventRaidMaster___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_40FACD8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      currentEventRaidEntity);
    sub_B16FFC(&Method_System_Comparison_EventRaidEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_EventRaidEntity__TypeInfo, v8);
    sub_B16FFC(&EventRaidEntity_TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaidEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_EventRaidEntity__TypeInfo, v17);
    sub_B16FFC(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__, v18);
    sub_B16FFC(&EventRaidMaster___c_TypeInfo, v19);
    byte_40FACD8 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRaidEntity__TypeInfo,
                                                                                                  currentEventRaidEntity,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                     list,
                     (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_B170D4();
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v24 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v24;
            p_offset += 4;
            if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v27 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v28 = 0LL;
          v29 = &v27->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            ++v28;
            v29 += 4;
            if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          v30 = (__int64)&v27->vtable[*v29].method;
        }
        else
        {
LABEL_17:
          v30 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                       Enumerator,
                                                                       *(_QWORD *)(v30 + 8));
        if ( !v31 )
          goto LABEL_46;
        v32 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v32
          || (EventRaidEntity_c *)v31->klass->_2.typeHierarchy[v32 - 1] != EventRaidEntity_TypeInfo )
        {
          sub_B173C8(v31);
LABEL_46:
          sub_B170D4();
        }
        if ( v31->fields.missionTargetId == currentEventRaidEntity->fields.eventId
          && v31->fields.targetId == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v20 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v20,
            v31,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRaidEntity__Add__);
        }
      }
      v33 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        v35 = &v33->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
        {
          ++v34;
          v35 += 4;
          if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_30;
        }
        v36 = (__int64)&v33->vtable[*v35].method;
      }
      else
      {
LABEL_30:
        v36 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
        Enumerator,
        *(_QWORD *)(v36 + 8));
      v41 = EventRaidMaster___c_TypeInfo;
      if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
        v41 = EventRaidMaster___c_TypeInfo;
      }
      static_fields = v41->static_fields;
      _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                               System_Comparison_EventRaidEntity__TypeInfo,
                                                                               v37,
                                                                               v38,
                                                                               v39,
                                                                               v40);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__13_0,
          v44,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRaidEntity___ctor__);
        v45 = EventRaidMaster___c_TypeInfo->static_fields;
        v45->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v45->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      if ( v20 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v20,
          (System_Comparison_T__o *)_9__13_0,
          (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_48:
    sub_B170D4();
  }
  if ( !v20 )
    goto LABEL_48;
  return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t CurrentDay; // w0
  const MethodInfo *v6; // x3
  EventRaidEntity_o *Entity; // x1
  const MethodInfo *v8; // x2

  CurrentDay = EventRaidMaster__GetCurrentDay(this, eventId, method);
  Entity = EventRaidMaster__GetEntity(this, eventId, CurrentDay, v6);
  return EventRaidMaster__GetCurrentGroupListByEntity(this, Entity, v8);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_o *__fastcall EventRaidMaster__GetEntity(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_40FACCD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRaidEntity_TypeInfo, v7);
    byte_40FACCD = 1;
  }
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  }
  PK = EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventRaidMaster___c__DisplayClass21_0_o *v13; // x22
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x20

  if ( (byte_40FACDF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v8);
    sub_B16FFC(&Method_System_Predicate_EventRaidEntity___ctor__, v9);
    sub_B16FFC(&System_Predicate_EventRaidEntity__TypeInfo, v10);
    sub_B16FFC(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__, v11);
    sub_B16FFC(&EventRaidMaster___c__DisplayClass21_0_TypeInfo, v12);
    byte_40FACDF = 1;
  }
  v13 = (EventRaidMaster___c__DisplayClass21_0_o *)sub_B170CC(
                                                     EventRaidMaster___c__DisplayClass21_0_TypeInfo,
                                                     *(_QWORD *)&eventId,
                                                     *(_QWORD *)&groupIndex,
                                                     method,
                                                     v4);
  EventRaidMaster___c__DisplayClass21_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.eventId = eventId;
  v13->fields.groupIndex = groupIndex;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_EventRaidEntity__TypeInfo,
                                                                   v15,
                                                                   v16,
                                                                   v17,
                                                                   v18);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v19,
                                    (const MethodInfo_2044520 *)Method_System_Array_FindAll_EventRaidEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventRaidMaster___c__DisplayClass14_0_o *v12; // x21
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20

  if ( (byte_40FACD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v7);
    sub_B16FFC(&Method_System_Predicate_EventRaidEntity___ctor__, v8);
    sub_B16FFC(&System_Predicate_EventRaidEntity__TypeInfo, v9);
    sub_B16FFC(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__, v10);
    sub_B16FFC(&EventRaidMaster___c__DisplayClass14_0_TypeInfo, v11);
    byte_40FACD9 = 1;
  }
  v12 = (EventRaidMaster___c__DisplayClass14_0_o *)sub_B170CC(
                                                     EventRaidMaster___c__DisplayClass14_0_TypeInfo,
                                                     *(_QWORD *)&eventId,
                                                     method,
                                                     v3,
                                                     v4);
  EventRaidMaster___c__DisplayClass14_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.eventId = eventId;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_EventRaidEntity__TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16,
                                                                   v17);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v18,
                                    (const MethodInfo_2044520 *)Method_System_Array_FindAll_EventRaidEntity___);
}


int64_t __fastcall EventRaidMaster__GetEventRaidTimeLimitAt(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x9
  int64_t v5; // x8
  __int64 v6; // x10
  int64_t v7; // x8
  __int64 v8; // x11
  int64_t v9; // x11

  result = (int64_t)EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( result )
  {
    v4 = *(_QWORD *)(result + 24);
    v5 = result;
    if ( v4 && (int)v4 >= 1 )
    {
      v6 = 0LL;
      result = 0LL;
      v7 = v5 + 32;
      do
      {
        v8 = *(_QWORD *)(v7 + 8 * v6);
        if ( !v8 )
          sub_B170D4();
        v9 = *(_QWORD *)(v8 + 96);
        ++v6;
        if ( result <= v9 && v9 >= 1 )
          result = v9;
      }
      while ( (int)v6 < (int)v4 );
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


EventRaidEntity_o *__fastcall EventRaidMaster__GetNextSubGroupEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *nowEventRaidEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleBuffData_BuffData_array *EventRaidEntityArrayFromEventId; // x20
  EventRaidMaster___c_c *v14; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x21
  Il2CppObject *v17; // x22
  struct EventRaidMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  signed int max_length; // w24
  il2cpp_array_size_t v29; // w23
  BattleBuffData_BuffData_o *v30; // x21
  __int64 v31; // x0
  System_String_o *v32; // x22
  System_String_o *v33; // x0
  BattleBuffData_BuffData_o *v34; // x8

  if ( (byte_40FACE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_EventRaidEntity___, nowEventRaidEntity);
    sub_B16FFC(&Method_System_Comparison_EventRaidEntity___ctor__, v5);
    sub_B16FFC(&System_Comparison_EventRaidEntity__TypeInfo, v6);
    sub_B16FFC(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, v7);
    sub_B16FFC(&EventRaidMaster___c_TypeInfo, v8);
    byte_40FACE0 = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_26;
  EventRaidEntityArrayFromEventId = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                                       this,
                                                                       nowEventRaidEntity->fields.eventId,
                                                                       method);
  v14 = EventRaidMaster___c_TypeInfo;
  if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v14 = EventRaidMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventRaidEntity__TypeInfo,
                                                                           v9,
                                                                           v10,
                                                                           v11,
                                                                           v12);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v17,
      Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRaidEntity___ctor__);
    v18 = EventRaidMaster___c_TypeInfo->static_fields;
    v18->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRaidEntityArrayFromEventId,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_26;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v29 = 0;
  do
  {
    if ( (int)v29 >= max_length )
      return 0LL;
    if ( v29 >= EventRaidEntityArrayFromEventId->max_length )
      goto LABEL_25;
    v30 = EventRaidEntityArrayFromEventId->m_Items[v29];
    v31 = ((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
            nowEventRaidEntity,
            nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v30 )
      goto LABEL_26;
    v32 = (System_String_o *)v31;
    v33 = (System_String_o *)((__int64 (__fastcall *)(BattleBuffData_BuffData_o *, const char *))v30->klass[1]._1.gc_desc)(
                               v30,
                               v30->klass[1]._1.name);
    v25 = System_String__op_Inequality(v32, v33, 0LL);
    ++v29;
  }
  while ( v25 );
  if ( (int)v29 >= max_length )
    return 0LL;
  if ( v29 >= EventRaidEntityArrayFromEventId->max_length )
  {
LABEL_25:
    sub_B17100(v25, v26, v27);
    sub_B170A0();
  }
  v34 = EventRaidEntityArrayFromEventId->m_Items[v29];
  if ( !v34 )
LABEL_26:
    sub_B170D4();
  if ( nowEventRaidEntity->fields.subGroupIndex == v34->fields.param )
    return (EventRaidEntity_o *)EventRaidEntityArrayFromEventId->m_Items[v29];
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetNowGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t raidCountMax,
        const MethodInfo *method)
{
  __int64 v4; // x4
  int32_t RaidGorupMax; // w20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__int__o *v17; // x21
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x22
  WebViewManager_o *v21; // x0
  int64_t ListByQuestID; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  QuestReleaseMaster_o *v26; // x23
  unsigned __int64 v27; // x26
  int32_t v28; // w24
  int v29; // w8
  __int64 v30; // x9
  int64_t *v31; // x10
  int32_t ValueInt; // w0
  int32_t v33; // w25
  EventRaidEntity_c *v34; // x0
  int32_t i; // w22
  int32_t Item; // w23

  RaidGorupMax = raidCountMax;
  if ( (byte_40FACDE & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_B16FFC(&EventRaidEntity_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FACDE = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               *(_QWORD *)&eventId,
                                                               *(_QWORD *)&raidCountMax,
                                                               method,
                                                               v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(MasterData_WarQuestSelectionMaster, eventId, 1, 0LL);
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_43;
  ListByQuestID = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)v21,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_43;
  v25 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = (QuestReleaseMaster_o *)ListByQuestID;
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
      {
        sub_B17100(ListByQuestID, v23, v24);
        sub_B170A0();
      }
      if ( !v26 )
        break;
      v28 = QuestIdListByGroupId->m_Items[v27 + 1];
      ListByQuestID = (int64_t)QuestReleaseMaster__getListByQuestID(v26, v28, 0LL);
      if ( !ListByQuestID )
        break;
      v29 = *(_DWORD *)(ListByQuestID + 24);
      if ( v29 >= 1 )
      {
        v30 = 0LL;
        v31 = (int64_t *)(ListByQuestID + 32);
        while ( 1 )
        {
          ListByQuestID = v31[v30];
          if ( !ListByQuestID )
            goto LABEL_43;
          if ( *(_DWORD *)(ListByQuestID + 20) == 71 )
            break;
          if ( (int)++v30 >= v29 )
            goto LABEL_24;
        }
        ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)ListByQuestID, 0LL);
        if ( !v17 )
          break;
        v33 = ValueInt;
        ListByQuestID = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                          v17,
                          ValueInt,
                          (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( (ListByQuestID & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v17,
            v33,
            v28,
            (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v25) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_25;
    }
LABEL_43:
    sub_B170D4();
  }
LABEL_25:
  v34 = EventRaidEntity_TypeInfo;
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
    v34 = EventRaidEntity_TypeInfo;
  }
  for ( i = v34->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(71, eventId, i, 0, 0LL) )
      break;
    if ( !v17 )
      goto LABEL_43;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v17,
            i,
            (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v17,
             i,
             (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25438860(Item, -1, 0, 0LL) )
      break;
  }
  return i;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventRaidMaster__GetQuestIdList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x19
  EventRaidMaster_o *v15; // x0
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FACD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_40FACD5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    *(_QWORD *)&condType,
                                                    *(_QWORD *)&day,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v15, eventId, condType, day, v16);
  if ( !QuestReleaseEntityList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestReleaseEntityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B170D4();
    if ( !v14 )
      sub_B170D4();
    System_Collections_Generic_List_int___Add(
      v14,
      (int32_t)v19.fields.current[1].klass,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall EventRaidMaster__GetQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *QuestIdListByGroupId; // x23
  WebViewManager_o *v21; // x0
  QuestReleaseMaster_o *v22; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  __int64 ValueInt; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x8
  unsigned __int64 v34; // x26
  EventRaidMaster___c_c *v35; // x0
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v38; // x20
  struct EventRaidMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FACD1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_QuestReleaseEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_QuestReleaseEntity__TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, v16);
    sub_B16FFC(&EventRaidMaster___c_TypeInfo, v17);
    byte_40FACD1 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId(MasterData_WarQuestSelectionMaster, eventId, 1, 0LL);
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_30;
  v22 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v21,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_30;
  v33 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)v33 )
      {
        sub_B17100(ValueInt, v29, v30);
        sub_B170A0();
      }
      if ( !v22 )
        break;
      ValueInt = QuestReleaseMaster__TryGetEntity(
                   v22,
                   &entity,
                   QuestIdListByGroupId->m_Items[v34 + 1],
                   condType,
                   eventId,
                   day,
                   0LL);
      if ( (ValueInt & 1) != 0 )
      {
        if ( day < 1 )
          goto LABEL_15;
        if ( !entity )
          break;
        ValueInt = QuestReleaseEntity__getValueInt(entity, 0LL);
        if ( (_DWORD)ValueInt == day )
        {
LABEL_15:
          if ( !v27 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      LODWORD(v33) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v34 >= (int)v33 )
        goto LABEL_18;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_18:
  if ( !day )
  {
    v35 = EventRaidMaster___c_TypeInfo;
    if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v35 = EventRaidMaster___c_TypeInfo;
    }
    static_fields = v35->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_QuestReleaseEntity__TypeInfo,
                                                                            v29,
                                                                            v30,
                                                                            v31,
                                                                            v32);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v38,
        Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
      v39 = EventRaidMaster___c_TypeInfo->static_fields;
      v39->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v39->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    if ( !v27 )
      goto LABEL_30;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v27;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventRaidMaster__GetRaidAliveQuestIds(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0

  if ( (byte_40FACD2 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&eventId);
    byte_40FACD2 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *QuestIdList; // x0

  if ( (byte_40FACD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_40FACD3 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_B170D4();
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return QuestIdList->fields._items->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
QuestReleaseEntity_array *__fastcall EventRaidMaster__GetRaidDeadQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0

  if ( (byte_40FACD0 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B16FFC(
                                  &Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__,
                                  *(_QWORD *)&eventId);
    byte_40FACD0 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_B170D4();
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestReleaseEntityList,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int v11; // w21
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  _DWORD *v16; // x0
  __int64 v17; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_40FACDB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B16FFC(&EventRaidEntity_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_40FACDB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v11 = 0x80000000;
  while ( 1 )
  {
    if ( !Enumerator )
      goto LABEL_33;
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_9:
      v15 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_B170D4();
    v17 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v17
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v17 - 8) != EventRaidEntity_TypeInfo )
    {
      sub_B173C8(v16);
LABEL_33:
      sub_B170D4();
    }
    if ( v16[4] == eventId && v11 < v16[6] )
      v11 = v16[6];
  }
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v11 & ~(v11 >> 31);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGroupDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *QuestIdList; // x0

  if ( (byte_40FACD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_40FACD4 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_B170D4();
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return QuestIdList->fields._items->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetStartRaidGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  const MethodInfo *v10; // x2
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w9
  unsigned int v15; // w10
  int32_t groupIndex; // w8
  WarQuestSelectionEntity_o *v17; // x11
  int v18; // w12
  unsigned int v19; // w13
  EventRaidEntity_o *v20; // x14

  if ( (byte_40FACE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FACE1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      MasterData_WarQuestSelectionMaster,
                                      (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v10);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_26;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    groupIndex = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
LABEL_25:
        sub_B17100(EventRaidEntityArrayFromEventId, v12, v13);
        sub_B170A0();
      }
      v17 = Entitys_WarQuestSelectionEntity->m_Items[v15];
      if ( !v17 )
        break;
      if ( v17->fields.warId == eventId )
      {
        if ( !EventRaidEntityArrayFromEventId )
          break;
        v18 = EventRaidEntityArrayFromEventId->max_length;
        if ( v18 >= 1 )
        {
          v19 = 0;
          while ( 1 )
          {
            if ( v19 >= v18 )
              goto LABEL_25;
            v20 = EventRaidEntityArrayFromEventId->m_Items[v19];
            if ( !v20 )
              goto LABEL_26;
            if ( v17->fields.questId == v20->fields.day )
              break;
            if ( (int)++v19 >= v18 )
              goto LABEL_21;
          }
          if ( groupIndex < v20->fields.groupIndex )
            groupIndex = v20->fields.groupIndex;
        }
      }
LABEL_21:
      if ( (int)++v15 >= max_length )
        return groupIndex;
    }
LABEL_26:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall EventRaidMaster__GetSubGroupMax(
        EventRaidMaster_o *this,
        EventRaidEntity_o *EventRaidEntityBase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v11; // w19
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  _DWORD *v16; // x0
  __int64 v17; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_40FACDD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, EventRaidEntityBase);
    sub_B16FFC(&EventRaidEntity_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_40FACDD = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  v11 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_11:
      v15 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_37;
    v17 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v17
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v17 - 8) != EventRaidEntity_TypeInfo )
    {
      sub_B173C8(v16);
LABEL_37:
      sub_B170D4();
    }
    if ( v16[4] == EventRaidEntityBase->fields.eventId
      && v16[6] == EventRaidEntityBase->fields.groupIndex
      && v16[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v11;
    }
  }
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_31:
    v25 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v11;
}


int32_t __fastcall EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BattleBuffData_BuffData_array *EventRaidEntityArray; // x20
  EventRaidMaster___c_c *v15; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x21
  Il2CppObject *v18; // x22
  struct EventRaidMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  int max_length; // w8
  unsigned int v29; // w9
  __int64 v30; // x0
  BattleBuffData_BuffData_o *v31; // x10

  if ( (byte_40FACDC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_EventRaidEntity___, eventRaidEntityBase);
    sub_B16FFC(&Method_System_Comparison_EventRaidEntity___ctor__, v6);
    sub_B16FFC(&System_Comparison_EventRaidEntity__TypeInfo, v7);
    sub_B16FFC(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, v8);
    sub_B16FFC(&EventRaidMaster___c_TypeInfo, v9);
    byte_40FACDC = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArray(
                                                              this,
                                                              eventRaidEntityBase->fields.eventId,
                                                              eventRaidEntityBase->fields.groupIndex,
                                                              v3);
    v15 = EventRaidMaster___c_TypeInfo;
    if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v15 = EventRaidMaster___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                             System_Comparison_EventRaidEntity__TypeInfo,
                                                                             v10,
                                                                             v11,
                                                                             v12,
                                                                             v13);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__18_0,
        v18,
        Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_EventRaidEntity___ctor__);
      v19 = EventRaidMaster___c_TypeInfo->static_fields;
      v19->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v19->__9__18_0,
        (System_Int32_array **)_9__18_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      EventRaidEntityArray,
      (System_Comparison_T__o *)_9__18_0,
      (const MethodInfo_2506BD4 *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !EventRaidEntityArray )
      goto LABEL_24;
    max_length = EventRaidEntityArray->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0;
      v30 = 0LL;
      while ( 1 )
      {
        if ( v29 >= max_length )
        {
          sub_B17100(v30, v26, v27);
          sub_B170A0();
        }
        v31 = EventRaidEntityArray->m_Items[v29];
        if ( !v31 )
          break;
        if ( v31->fields.param == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( *(_QWORD *)&v31->fields.ratioRangeHigh == eventRaidEntityBase->fields.startedAt )
            return v30;
          v30 = (unsigned int)(v30 + 1);
        }
        if ( (int)++v29 >= max_length )
          goto LABEL_21;
      }
LABEL_24:
      sub_B170D4();
    }
  }
LABEL_21:
  LODWORD(v30) = 0;
  return v30;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaidMaster__IsEventRaidAliveAny(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  EventRaidEntity_array *v9; // x20
  unsigned int v10; // w22
  EventRaidEntity_o *v11; // x8
  int64_t day; // x21

  if ( (byte_40FACDA & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    byte_40FACDA = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_16:
    sub_B170D4();
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v9 = EventRaidEntityArrayFromEventId;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      sub_B17100(EventRaidEntityArrayFromEventId, v6, v7);
      sub_B170A0();
    }
    v11 = v9->m_Items[v10];
    if ( !v11 )
      goto LABEL_16;
    day = v11->fields.day;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EventRaidEntityArrayFromEventId = (EventRaidEntity_array *)CondType__IsOpen(27, eventId, day, 0, 0LL);
    if ( ((unsigned __int8)EventRaidEntityArrayFromEventId & 1) != 0 )
      return 1;
    max_length = v9->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRaidMaster__TryGetEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_40FACCE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&EventRaidEntity_TypeInfo, v9);
    byte_40FACCE = 1;
  }
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  }
  PK = EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7022 & 1) == 0 )
  {
    sub_B16FFC(&EventRaidMaster___c_TypeInfo, v1);
    byte_40F7022 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventRaidMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventRaidMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventRaidMaster___c___ctor(EventRaidMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetCurrentGroupListByEntity_b__13_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.day - b->fields.day;
}


int32_t __fastcall EventRaidMaster___c___GetNextSubGroupEntity_b__22_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  int32_t groupIndex; // w8
  int32_t v5; // w9
  int32_t result; // w0
  int32_t subGroupIndex; // w8
  int32_t v8; // w9

  if ( !a || !b )
    sub_B170D4();
  groupIndex = a->fields.groupIndex;
  v5 = b->fields.groupIndex;
  result = groupIndex - v5;
  if ( groupIndex == v5 )
  {
    subGroupIndex = a->fields.subGroupIndex;
    v8 = b->fields.subGroupIndex;
    result = subGroupIndex - v8;
    if ( subGroupIndex == v8 )
      return LODWORD(a->fields.startedAt) - LODWORD(b->fields.startedAt);
  }
  return result;
}


int32_t __fastcall EventRaidMaster___c___GetQuestReleaseEntityList_b__5_0(
        EventRaidMaster___c_o *this,
        QuestReleaseEntity_o *a,
        QuestReleaseEntity_o *b,
        const MethodInfo *method)
{
  int32_t ValueInt; // w0

  if ( !a || (ValueInt = QuestReleaseEntity__getValueInt(a, 0LL), !b) )
    sub_B170D4();
  return ValueInt - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return LODWORD(a->fields.startedAt) - LODWORD(b->fields.startedAt);
}


void __fastcall EventRaidMaster___c__DisplayClass14_0___ctor(
        EventRaidMaster___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRaidMaster___c__DisplayClass14_0___GetEventRaidEntityArrayFromEventId_b__0(
        EventRaidMaster___c__DisplayClass14_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.eventId == this->fields.eventId;
}


void __fastcall EventRaidMaster___c__DisplayClass21_0___ctor(
        EventRaidMaster___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRaidMaster___c__DisplayClass21_0___GetEventRaidEntityArray_b__0(
        EventRaidMaster___c__DisplayClass21_0_o *this,
        EventRaidEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}