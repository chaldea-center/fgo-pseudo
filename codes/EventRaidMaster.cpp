void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  if ( (byte_42B0450 & 1) == 0 )
  {
    sub_B52984(&EventRaidMaster_TypeInfo);
    byte_42B0450 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B043D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
    byte_42B043D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    147,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


int32_t __fastcall EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  int64_t Time; // x0
  __int64 v8; // x1
  __int64 v9; // x27
  il2cpp_array_size_t v10; // w22
  int32_t v11; // w24
  int32_t v12; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v14; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v16; // x25
  __int64 v17; // x0
  int64_t v19; // [xsp+8h] [xbp-58h]

  if ( (byte_42B0444 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_42B0444 = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v19 = Time;
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_30:
    sub_B52A5C(Time, v8);
  v9 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  if ( (int)v9 < 1 )
  {
    return 0;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v10];
      if ( !Time )
        goto LABEL_30;
      v12 = *(_DWORD *)(Time + 16);
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v14);
      if ( !Entity )
        return v11;
      v16 = Entity;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_30;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v12, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( (_DWORD)v9 - 1 == v10 )
      {
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_30;
        Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Time,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_30;
        Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                          v16->fields.eventId,
                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_30;
        if ( v19 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( (int)++v10 >= (int)v9 )
        return 0;
      v11 = ValueInt;
      if ( v10 >= RaidDeadQuestReleaseEntityList->max_length )
      {
        v17 = sub_B52A88(Time);
        sub_B52A28(v17, 0LL);
      }
    }
    if ( v19 >= v16->fields.startedAt )
      return ValueInt;
    else
      return v11;
  }
}


int32_t __fastcall EventRaidMaster__GetCurrentDayOld(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  int64_t v7; // x21
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x9
  int32_t v22; // w20
  int v23; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-40h]

  if ( (byte_42B0445 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventRaidEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B0445 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B52A5C(Time, v6);
  v7 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_19:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_39;
    v21 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v21
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v21 - 8) != EventRaidEntity_TypeInfo )
    {
      v19 = sub_B52D50(v19);
LABEL_39:
      sub_B52A5C(v19, v20);
    }
    if ( *(_DWORD *)(v19 + 16) == eventId && v7 >= *(_QWORD *)(v19 + 80) && v7 < *(_QWORD *)(v19 + 88) )
    {
      v22 = *(_DWORD *)(v19 + 20);
      v23 = 90;
      goto LABEL_29;
    }
  }
  v23 = 88;
  v22 = 0;
LABEL_29:
  v29 = v23;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_33:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 88 )
    return 0;
  return v22;
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *list; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x20
  Il2CppObject *v29; // x21
  struct EventRaidMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42B0446 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_EventRaidEntity___ctor__);
    sub_B52984(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_B52984(&EventRaidEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaidEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventRaidEntity__TypeInfo);
    sub_B52984(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__);
    sub_B52984(&EventRaidMaster___c_TypeInfo);
    byte_42B0446 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_B52A5C(0LL, v8);
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v12 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v12;
            p_offset += 4;
            if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v16 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v17 = 0LL;
          v18 = &v16->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            ++v17;
            v18 += 4;
            if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          v19 = (__int64)&v16->vtable[*v18].method;
        }
        else
        {
LABEL_17:
          v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
        }
        v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                       Enumerator,
                                                                       *(_QWORD *)(v19 + 8));
        if ( !v20 )
          goto LABEL_46;
        v22 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (EventRaidEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != EventRaidEntity_TypeInfo )
        {
          v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_46:
          sub_B52A5C(v20, v21);
        }
        if ( v20->fields.missionTargetId == currentEventRaidEntity->fields.eventId
          && v20->fields.targetId == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v5 )
            sub_B52A5C(v20, EventRaidEntity_TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v20,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventRaidEntity__Add__);
        }
      }
      v23 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v24 = 0LL;
        v25 = &v23->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
        {
          ++v24;
          v25 += 4;
          if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_30;
        }
        v26 = (__int64)&v23->vtable[*v25].method;
      }
      else
      {
LABEL_30:
        v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
        Enumerator,
        *(_QWORD *)(v26 + 8));
      list = EventRaidMaster___c_TypeInfo;
      if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
        list = EventRaidMaster___c_TypeInfo;
      }
      static_fields = (struct EventRaidMaster___c_StaticFields *)*((_QWORD *)list + 23);
      _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
        {
          j_il2cpp_runtime_class_init_0(list);
          static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        }
        v29 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRaidEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__13_0,
          v29,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          (const MethodInfo_2483370 *)Method_System_Comparison_EventRaidEntity___ctor__);
        v30 = EventRaidMaster___c_TypeInfo->static_fields;
        v30->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v30->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      if ( v5 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
          (System_Comparison_T__o *)_9__13_0,
          (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_48:
    sub_B52A5C(list, v7);
  }
  if ( !v5 )
    goto LABEL_48;
  return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
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
  System_String_o *PK; // x1

  if ( (byte_42B043B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
    sub_B52984(&EventRaidEntity_TypeInfo);
    byte_42B043B = 1;
  }
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
  }
  PK = EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  EventRaidMaster___c__DisplayClass21_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x20

  if ( (byte_42B044D & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_B52984(&Method_DataMasterBase_getEntitys_EventRaidEntity___);
    sub_B52984(&Method_System_Predicate_EventRaidEntity___ctor__);
    sub_B52984(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_B52984(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__);
    sub_B52984(&EventRaidMaster___c__DisplayClass21_0_TypeInfo);
    byte_42B044D = 1;
  }
  v7 = (EventRaidMaster___c__DisplayClass21_0_o *)sub_B52A54(EventRaidMaster___c__DisplayClass21_0_TypeInfo);
  EventRaidMaster___c__DisplayClass21_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.eventId = eventId;
  v7->fields.groupIndex = groupIndex;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v11,
                                    (const MethodInfo_201AB88 *)Method_System_Array_FindAll_EventRaidEntity___);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidMaster___c__DisplayClass14_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42B0447 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_FindAll_EventRaidEntity___);
    sub_B52984(&Method_DataMasterBase_getEntitys_EventRaidEntity___);
    sub_B52984(&Method_System_Predicate_EventRaidEntity___ctor__);
    sub_B52984(&System_Predicate_EventRaidEntity__TypeInfo);
    sub_B52984(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__);
    sub_B52984(&EventRaidMaster___c__DisplayClass14_0_TypeInfo);
    byte_42B0447 = 1;
  }
  v5 = (EventRaidMaster___c__DisplayClass14_0_o *)sub_B52A54(EventRaidMaster___c__DisplayClass14_0_TypeInfo);
  EventRaidMaster___c__DisplayClass14_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.eventId = eventId;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_201AB88 *)Method_System_Array_FindAll_EventRaidEntity___);
}


int64_t __fastcall EventRaidMaster__GetEventRaidTimeLimitAt(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x1
  __int64 v5; // x9
  int64_t v6; // x8
  __int64 v7; // x10
  int64_t v8; // x8
  __int64 v9; // x11
  int64_t v10; // x11

  result = (int64_t)EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( result )
  {
    v5 = *(_QWORD *)(result + 24);
    v6 = result;
    if ( v5 && (int)v5 >= 1 )
    {
      v7 = 0LL;
      result = 0LL;
      v8 = v6 + 32;
      do
      {
        v9 = *(_QWORD *)(v8 + 8 * v7);
        if ( !v9 )
          sub_B52A5C(result, v4);
        v10 = *(_QWORD *)(v9 + 96);
        ++v7;
        if ( result <= v10 && v10 >= 1 )
          result = v10;
      }
      while ( (int)v7 < (int)v5 );
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
  EventRaidMaster_o *v4; // x20
  BattleBuffData_BuffData_array *EventRaidEntityArrayFromEventId; // x20
  EventRaidMaster___c_c *v6; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x21
  Il2CppObject *v9; // x22
  struct EventRaidMaster___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  signed int max_length; // w24
  il2cpp_array_size_t v18; // w23
  BattleBuffData_BuffData_o *v19; // x21
  System_String_o *v20; // x22
  System_String_o *v21; // x0
  BattleBuffData_BuffData_o *v22; // x8
  __int64 v24; // x0

  v4 = this;
  if ( (byte_42B044E & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Sort_EventRaidEntity___);
    sub_B52984(&Method_System_Comparison_EventRaidEntity___ctor__);
    sub_B52984(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_B52984(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__);
    this = (EventRaidMaster_o *)sub_B52984(&EventRaidMaster___c_TypeInfo);
    byte_42B044E = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_26;
  EventRaidEntityArrayFromEventId = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                                       v4,
                                                                       nowEventRaidEntity->fields.eventId,
                                                                       method);
  v6 = EventRaidMaster___c_TypeInfo;
  if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v6 = EventRaidMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v9,
      Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventRaidEntity___ctor__);
    v10 = EventRaidMaster___c_TypeInfo->static_fields;
    v10->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRaidEntityArrayFromEventId,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_26;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v18 = 0;
  do
  {
    if ( (int)v18 >= max_length )
      return 0LL;
    if ( v18 >= EventRaidEntityArrayFromEventId->max_length )
      goto LABEL_25;
    v19 = EventRaidEntityArrayFromEventId->m_Items[v18];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v19 )
      goto LABEL_26;
    v20 = (System_String_o *)this;
    v21 = (System_String_o *)((__int64 (__fastcall *)(BattleBuffData_BuffData_o *, const char *))v19->klass[1]._1.gc_desc)(
                               v19,
                               v19->klass[1]._1.name);
    this = (EventRaidMaster_o *)System_String__op_Inequality(v20, v21, 0LL);
    ++v18;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v18 >= max_length )
    return 0LL;
  if ( v18 >= EventRaidEntityArrayFromEventId->max_length )
  {
LABEL_25:
    v24 = sub_B52A88(this);
    sub_B52A28(v24, 0LL);
  }
  v22 = EventRaidEntityArrayFromEventId->m_Items[v18];
  if ( !v22 )
LABEL_26:
    sub_B52A5C(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == v22->fields.param )
    return (EventRaidEntity_o *)EventRaidEntityArrayFromEventId->m_Items[v18];
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
  int32_t RaidGorupMax; // w20
  System_Collections_Generic_Dictionary_int__int__o *v7; // x21
  void *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *QuestIdListByGroupId; // x22
  __int64 v11; // x8
  QuestReleaseMaster_o *v12; // x23
  unsigned __int64 v13; // x26
  int32_t v14; // w24
  int v15; // w8
  __int64 v16; // x9
  char *v17; // x10
  int32_t v18; // w25
  EventRaidEntity_c *v19; // x0
  int32_t i; // w22
  int32_t Item; // w23
  __int64 v23; // x0

  RaidGorupMax = raidCountMax;
  if ( (byte_42B044C & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&EventRaidEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B044C = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v7,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_43;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_43;
  v11 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = (QuestReleaseMaster_o *)Instance;
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
      {
        v23 = sub_B52A88(Instance);
        sub_B52A28(v23, 0LL);
      }
      if ( !v12 )
        break;
      v14 = QuestIdListByGroupId->m_Items[v13 + 1];
      Instance = QuestReleaseMaster__getListByQuestID(v12, v14, 0LL);
      if ( !Instance )
        break;
      v15 = *((_DWORD *)Instance + 6);
      if ( v15 >= 1 )
      {
        v16 = 0LL;
        v17 = (char *)Instance + 32;
        while ( 1 )
        {
          Instance = *(void **)&v17[8 * v16];
          if ( !Instance )
            goto LABEL_43;
          if ( *((_DWORD *)Instance + 5) == 71 )
            break;
          if ( (int)++v16 >= v15 )
            goto LABEL_24;
        }
        Instance = (void *)QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
        if ( !v7 )
          break;
        v18 = (int)Instance;
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             v7,
                             (int32_t)Instance,
                             (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v7,
            v18,
            v14,
            (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v11) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_25;
    }
LABEL_43:
    sub_B52A5C(Instance, v9);
  }
LABEL_25:
  v19 = EventRaidEntity_TypeInfo;
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
    v19 = EventRaidEntity_TypeInfo;
  }
  for ( i = v19->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (void *)CondType__IsOpen(71, eventId, i, 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v7 )
      goto LABEL_43;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v7,
            i,
            (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v7,
             i,
             (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25987760(Item, -1, 0, 0LL) )
      break;
  }
  return i;
}


System_Collections_Generic_List_int__o *__fastcall EventRaidMaster__GetQuestIdList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x19
  EventRaidMaster_o *v9; // x0
  const MethodInfo *v10; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0443 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B0443 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v9, eventId, condType, day, v10);
  if ( !QuestReleaseEntityList )
    sub_B52A5C(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestReleaseEntityList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v13 )
      break;
    if ( !v16.fields.current )
      sub_B52A5C(v13, v14);
    if ( !v8 )
      sub_B52A5C(v13, v14);
    System_Collections_Generic_List_int___Add(
      v8,
      (int32_t)v16.fields.current[1].klass,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v8;
}


System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall EventRaidMaster__GetQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *QuestIdListByGroupId; // x23
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v17; // x20
  struct EventRaidMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v26; // x0
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B043F & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_QuestReleaseEntity___ctor__);
    sub_B52984(&System_Comparison_QuestReleaseEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__);
    sub_B52984(&EventRaidMaster___c_TypeInfo);
    byte_42B043F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_30;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_30;
  v13 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v26 = sub_B52A88(Instance);
        sub_B52A28(v26, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           QuestIdListByGroupId->m_Items[v14 + 1],
                           condType,
                           eventId,
                           day,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( day < 1 )
          goto LABEL_15;
        Instance = entity;
        if ( !entity )
          break;
        Instance = (void *)QuestReleaseEntity__getValueInt(entity, 0LL);
        if ( (_DWORD)Instance == day )
        {
LABEL_15:
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      LODWORD(v13) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_18;
    }
LABEL_30:
    sub_B52A5C(Instance, v9);
  }
LABEL_18:
  if ( !day )
  {
    Instance = EventRaidMaster___c_TypeInfo;
    if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      Instance = EventRaidMaster___c_TypeInfo;
    }
    static_fields = (struct EventRaidMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v17,
        Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
      v18 = EventRaidMaster___c_TypeInfo->static_fields;
      v18->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v18->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    if ( !v12 )
      goto LABEL_30;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v12,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v12;
}


System_Int32_array *__fastcall EventRaidMaster__GetRaidAliveQuestIds(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_42B0440 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_42B0440 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_B52A5C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventRaidMaster__GetRaidDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_42B0441 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_42B0441 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_B52A5C(0LL, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return QuestIdList->fields._items->m_Items[1];
}


QuestReleaseEntity_array *__fastcall EventRaidMaster__GetRaidDeadQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v8; // x1

  if ( (byte_42B043E & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B52984(&Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
    byte_42B043E = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_B52A5C(0LL, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestReleaseEntityList,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  EventRaidEntity_c *v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IEnumerator_T__o *v9; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0

  if ( (byte_42B0449 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventRaidEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B0449 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v9 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_33;
    klass = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AEB880(v9, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v9,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_9:
      v14 = sub_AEB880(v9, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                                                                  v9,
                                                                  *(_QWORD *)(v14 + 8));
    if ( !Enumerator )
      sub_B52A5C(0LL, v15);
    v7 = EventRaidEntity_TypeInfo;
    v16 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (EventRaidEntity_c *)Enumerator->klass->_2.typeHierarchy[v16 - 1] != EventRaidEntity_TypeInfo )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B52D50(Enumerator);
LABEL_33:
      sub_B52A5C(Enumerator, v7);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v22 = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_AEB880(v9, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(v9, *(_QWORD *)(v25 + 8));
  return monitor & ~(monitor >> 31);
}


int32_t __fastcall EventRaidMaster__GetRaidGroupDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v8; // x1

  if ( (byte_42B0442 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (EventRaidMaster_o *)sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_42B0442 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_B52A5C(0LL, v8);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return QuestIdList->fields._items->m_Items[1];
}


int32_t __fastcall EventRaidMaster__GetStartRaidGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  const MethodInfo *v8; // x2
  int max_length; // w9
  unsigned int v10; // w10
  int32_t v11; // w8
  WarQuestSelectionEntity_o *v12; // x11
  int v13; // w12
  unsigned int v14; // w13
  __int64 v15; // x14
  __int64 v17; // x0

  if ( (byte_42B044F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B52984(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B044F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v8);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_26;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
LABEL_25:
        v17 = sub_B52A88(Instance);
        sub_B52A28(v17, 0LL);
      }
      v12 = Entitys_WarQuestSelectionEntity->m_Items[v10];
      if ( !v12 )
        break;
      if ( v12->fields.warId == eventId )
      {
        if ( !Instance )
          break;
        v13 = *((_DWORD *)Instance + 6);
        if ( v13 >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            if ( v14 >= v13 )
              goto LABEL_25;
            v15 = *((_QWORD *)Instance + (int)v14 + 4);
            if ( !v15 )
              goto LABEL_26;
            if ( v12->fields.questId == *(_DWORD *)(v15 + 20) )
              break;
            if ( (int)++v14 >= v13 )
              goto LABEL_21;
          }
          if ( v11 < *(_DWORD *)(v15 + 24) )
            v11 = *(_DWORD *)(v15 + 24);
        }
      }
LABEL_21:
      if ( (int)++v10 >= max_length )
        return v11;
    }
LABEL_26:
    sub_B52A5C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall EventRaidMaster__GetSubGroupMax(
        EventRaidMaster_o *this,
        EventRaidEntity_o *EventRaidEntityBase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v9; // w19
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  _DWORD *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0

  if ( (byte_42B044B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventRaidEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B044B = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  v9 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_11:
      v13 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v14 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                      Enumerator,
                      *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_37;
    v16 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 300LL) < (unsigned int)v16
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * v16 - 8) != EventRaidEntity_TypeInfo )
    {
      v14 = (_DWORD *)sub_B52D50(v14);
LABEL_37:
      sub_B52A5C(v14, v15);
    }
    if ( v14[4] == EventRaidEntityBase->fields.eventId
      && v14[6] == EventRaidEntityBase->fields.groupIndex
      && v14[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v9;
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
    v25 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v9;
}


int32_t __fastcall EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleBuffData_BuffData_array *EventRaidEntityArray; // x20
  EventRaidMaster___c_c *v7; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x21
  Il2CppObject *v10; // x22
  struct EventRaidMaster___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int max_length; // w8
  unsigned int v21; // w9
  BattleBuffData_BuffData_o *v22; // x10
  __int64 v23; // x0

  if ( (byte_42B044A & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Sort_EventRaidEntity___);
    sub_B52984(&Method_System_Comparison_EventRaidEntity___ctor__);
    sub_B52984(&System_Comparison_EventRaidEntity__TypeInfo);
    sub_B52984(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__);
    sub_B52984(&EventRaidMaster___c_TypeInfo);
    byte_42B044A = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArray(
                                                              this,
                                                              eventRaidEntityBase->fields.eventId,
                                                              eventRaidEntityBase->fields.groupIndex,
                                                              v3);
    v7 = EventRaidMaster___c_TypeInfo;
    if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v7 = EventRaidMaster___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__18_0,
        v10,
        Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_EventRaidEntity___ctor__);
      v11 = EventRaidMaster___c_TypeInfo->static_fields;
      v11->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v11->__9__18_0,
        (System_Int32_array **)_9__18_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      EventRaidEntityArray,
      (System_Comparison_T__o *)_9__18_0,
      (const MethodInfo_1A33468 *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !EventRaidEntityArray )
      goto LABEL_24;
    max_length = EventRaidEntityArray->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      v18 = 0LL;
      while ( 1 )
      {
        if ( v21 >= max_length )
        {
          v23 = sub_B52A88(v18);
          sub_B52A28(v23, 0LL);
        }
        v22 = EventRaidEntityArray->m_Items[v21];
        if ( !v22 )
          break;
        if ( v22->fields.param == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( *(_QWORD *)&v22->fields.ratioRangeHigh == eventRaidEntityBase->fields.startedAt )
            return v18;
          v18 = (unsigned int)(v18 + 1);
        }
        if ( (int)++v21 >= max_length )
          goto LABEL_21;
      }
LABEL_24:
      sub_B52A5C(v18, v19);
    }
  }
LABEL_21:
  LODWORD(v18) = 0;
  return v18;
}


bool __fastcall EventRaidMaster__IsEventRaidAliveAny(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v6; // x1
  int max_length; // w8
  EventRaidEntity_array *v8; // x20
  unsigned int v9; // w22
  EventRaidEntity_o *v10; // x8
  int64_t day; // x21
  __int64 v13; // x0

  if ( (byte_42B0448 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42B0448 = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_16:
    sub_B52A5C(EventRaidEntityArrayFromEventId, v6);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v8 = EventRaidEntityArrayFromEventId;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v13 = sub_B52A88(EventRaidEntityArrayFromEventId);
      sub_B52A28(v13, 0LL);
    }
    v10 = v8->m_Items[v9];
    if ( !v10 )
      goto LABEL_16;
    day = v10->fields.day;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    EventRaidEntityArrayFromEventId = (EventRaidEntity_array *)CondType__IsOpen(27, eventId, day, 0, 0LL);
    if ( ((unsigned __int8)EventRaidEntityArrayFromEventId & 1) != 0 )
      return 1;
    max_length = v8->max_length;
    if ( (int)++v9 >= max_length )
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
  System_String_o *PK; // x2

  if ( (byte_42B043C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
    sub_B52984(&EventRaidEntity_TypeInfo);
    byte_42B043C = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventRaidMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD954 & 1) == 0 )
  {
    sub_B52984(&EventRaidMaster___c_TypeInfo);
    byte_42AD954 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRaidMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaidMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
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
  if ( !a || (this = (EventRaidMaster___c_o *)QuestReleaseEntity__getValueInt(a, 0LL), !b) )
    sub_B52A5C(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}