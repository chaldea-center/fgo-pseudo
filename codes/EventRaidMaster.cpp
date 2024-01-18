void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188730 & 1) == 0 )
  {
    sub_B2C35C(&EventRaidMaster_TypeInfo, v1);
    byte_4188730 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418871D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__, method);
    byte_418871D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    146,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
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
  int64_t Time; // x0
  __int64 v13; // x1
  __int64 v14; // x27
  il2cpp_array_size_t v15; // w22
  int32_t v16; // w24
  int32_t v17; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v19; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v21; // x25
  __int64 v22; // x0
  int64_t v24; // [xsp+8h] [xbp-58h]

  if ( (byte_4188724 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v10);
    byte_4188724 = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v24 = Time;
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_30:
    sub_B2C434(Time, v13);
  v14 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  if ( (int)v14 < 1 )
  {
    return 0;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v15];
      if ( !Time )
        goto LABEL_30;
      v17 = *(_DWORD *)(Time + 16);
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v19);
      if ( !Entity )
        return v16;
      v21 = Entity;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_30;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v17, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( (_DWORD)v14 - 1 == v15 )
      {
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_30;
        Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Time,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_30;
        Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                          v21->fields.eventId,
                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_30;
        if ( v24 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( (int)++v15 >= (int)v14 )
        return 0;
      v16 = ValueInt;
      if ( v15 >= RaidDeadQuestReleaseEntityList->max_length )
      {
        v22 = sub_B2C460(Time);
        sub_B2C400(v22, 0LL);
      }
    }
    if ( v24 >= v21->fields.startedAt )
      return ValueInt;
    else
      return v16;
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
  __int64 v11; // x1
  int64_t v12; // x21
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x9
  int32_t v27; // w20
  int v28; // w8
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-40h]

  if ( (byte_4188725 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventRaidEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_4188725 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B2C434(Time, v11);
  v12 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_19:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_39;
    v26 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 300LL) < (unsigned int)v26
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * v26 - 8) != EventRaidEntity_TypeInfo )
    {
      v24 = sub_B2C728(v24);
LABEL_39:
      sub_B2C434(v24, v25);
    }
    if ( *(_DWORD *)(v24 + 16) == eventId && v12 >= *(_QWORD *)(v24 + 80) && v12 < *(_QWORD *)(v24 + 88) )
    {
      v27 = *(_DWORD *)(v24 + 20);
      v28 = 90;
      goto LABEL_29;
    }
  }
  v28 = 88;
  v27 = 0;
LABEL_29:
  v34 = v28;
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_33:
    v32 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( v34 == 88 )
    return 0;
  return v27;
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *list; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x20
  Il2CppObject *v42; // x21
  struct EventRaidMaster___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_4188726 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      currentEventRaidEntity);
    sub_B2C35C(&Method_System_Comparison_EventRaidEntity___ctor__, v5);
    sub_B2C35C(&System_Comparison_EventRaidEntity__TypeInfo, v6);
    sub_B2C35C(&EventRaidEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaidEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventRaidEntity__TypeInfo, v15);
    sub_B2C35C(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__, v16);
    sub_B2C35C(&EventRaidMaster___c_TypeInfo, v17);
    byte_4188726 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_B2C434(0LL, v21);
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v25 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v25;
            p_offset += 4;
            if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v29 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v30 = 0LL;
          v31 = &v29->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            ++v30;
            v31 += 4;
            if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          v32 = (__int64)&v29->vtable[*v31].method;
        }
        else
        {
LABEL_17:
          v32 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
        }
        v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                       Enumerator,
                                                                       *(_QWORD *)(v32 + 8));
        if ( !v33 )
          goto LABEL_46;
        v35 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v35
          || (EventRaidEntity_c *)v33->klass->_2.typeHierarchy[v35 - 1] != EventRaidEntity_TypeInfo )
        {
          v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v33);
LABEL_46:
          sub_B2C434(v33, v34);
        }
        if ( v33->fields.missionTargetId == currentEventRaidEntity->fields.eventId
          && v33->fields.targetId == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v18 )
            sub_B2C434(v33, EventRaidEntity_TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            v33,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRaidEntity__Add__);
        }
      }
      v36 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v37 = 0LL;
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_30;
        }
        v39 = (__int64)&v36->vtable[*v38].method;
      }
      else
      {
LABEL_30:
        v39 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
        Enumerator,
        *(_QWORD *)(v39 + 8));
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
        v42 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRaidEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__13_0,
          v42,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRaidEntity___ctor__);
        v43 = EventRaidMaster___c_TypeInfo->static_fields;
        v43->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v43->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
      }
      if ( v18 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
          (System_Comparison_T__o *)_9__13_0,
          (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_48:
    sub_B2C434(list, v20);
  }
  if ( !v18 )
    goto LABEL_48;
  return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
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

  if ( (byte_418871B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventRaidEntity_TypeInfo, v7);
    byte_418871B = 1;
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
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventRaidMaster___c__DisplayClass21_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x20

  if ( (byte_418872D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v7);
    sub_B2C35C(&Method_System_Predicate_EventRaidEntity___ctor__, v8);
    sub_B2C35C(&System_Predicate_EventRaidEntity__TypeInfo, v9);
    sub_B2C35C(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__, v10);
    sub_B2C35C(&EventRaidMaster___c__DisplayClass21_0_TypeInfo, v11);
    byte_418872D = 1;
  }
  v12 = (EventRaidMaster___c__DisplayClass21_0_o *)sub_B2C42C(EventRaidMaster___c__DisplayClass21_0_TypeInfo);
  EventRaidMaster___c__DisplayClass21_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  v12->fields.eventId = eventId;
  v12->fields.groupIndex = groupIndex;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v16,
                                    (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_EventRaidEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventRaidMaster___c__DisplayClass14_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4188727 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v5);
    sub_B2C35C(&Method_System_Predicate_EventRaidEntity___ctor__, v6);
    sub_B2C35C(&System_Predicate_EventRaidEntity__TypeInfo, v7);
    sub_B2C35C(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__, v8);
    sub_B2C35C(&EventRaidMaster___c__DisplayClass14_0_TypeInfo, v9);
    byte_4188727 = 1;
  }
  v10 = (EventRaidMaster___c__DisplayClass14_0_o *)sub_B2C42C(EventRaidMaster___c__DisplayClass14_0_TypeInfo);
  EventRaidMaster___c__DisplayClass14_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.eventId = eventId;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v14,
                                    (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_EventRaidEntity___);
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
          sub_B2C434(result, v4);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData_BuffData_array *EventRaidEntityArrayFromEventId; // x20
  EventRaidMaster___c_c *v10; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x21
  Il2CppObject *v13; // x22
  struct EventRaidMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  signed int max_length; // w24
  il2cpp_array_size_t v22; // w23
  BattleBuffData_BuffData_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  BattleBuffData_BuffData_o *v26; // x8
  __int64 v28; // x0

  v4 = this;
  if ( (byte_418872E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_EventRaidEntity___, nowEventRaidEntity);
    sub_B2C35C(&Method_System_Comparison_EventRaidEntity___ctor__, v5);
    sub_B2C35C(&System_Comparison_EventRaidEntity__TypeInfo, v6);
    sub_B2C35C(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, v7);
    this = (EventRaidMaster_o *)sub_B2C35C(&EventRaidMaster___c_TypeInfo, v8);
    byte_418872E = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_26;
  EventRaidEntityArrayFromEventId = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                                       v4,
                                                                       nowEventRaidEntity->fields.eventId,
                                                                       method);
  v10 = EventRaidMaster___c_TypeInfo;
  if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v10 = EventRaidMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v13,
      Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRaidEntity___ctor__);
    v14 = EventRaidMaster___c_TypeInfo->static_fields;
    v14->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRaidEntityArrayFromEventId,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_26;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v22 = 0;
  do
  {
    if ( (int)v22 >= max_length )
      return 0LL;
    if ( v22 >= EventRaidEntityArrayFromEventId->max_length )
      goto LABEL_25;
    v23 = EventRaidEntityArrayFromEventId->m_Items[v22];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v23 )
      goto LABEL_26;
    v24 = (System_String_o *)this;
    v25 = (System_String_o *)((__int64 (__fastcall *)(BattleBuffData_BuffData_o *, const char *))v23->klass[1]._1.gc_desc)(
                               v23,
                               v23->klass[1]._1.name);
    this = (EventRaidMaster_o *)System_String__op_Inequality(v24, v25, 0LL);
    ++v22;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v22 >= max_length )
    return 0LL;
  if ( v22 >= EventRaidEntityArrayFromEventId->max_length )
  {
LABEL_25:
    v28 = sub_B2C460(this);
    sub_B2C400(v28, 0LL);
  }
  v26 = EventRaidEntityArrayFromEventId->m_Items[v22];
  if ( !v26 )
LABEL_26:
    sub_B2C434(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == v26->fields.param )
    return (EventRaidEntity_o *)EventRaidEntityArrayFromEventId->m_Items[v22];
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  void *Instance; // x0
  __int64 v18; // x1
  System_Int32_array *QuestIdListByGroupId; // x22
  __int64 v20; // x8
  QuestReleaseMaster_o *v21; // x23
  unsigned __int64 v22; // x26
  int32_t v23; // w24
  int v24; // w8
  __int64 v25; // x9
  char *v26; // x10
  int32_t v27; // w25
  EventRaidEntity_c *v28; // x0
  int32_t i; // w22
  int32_t Item; // w23
  __int64 v32; // x0

  RaidGorupMax = raidCountMax;
  if ( (byte_418872C & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B2C35C(&EventRaidEntity_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418872C = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_43;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_43;
  v20 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = (QuestReleaseMaster_o *)Instance;
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
      {
        v32 = sub_B2C460(Instance);
        sub_B2C400(v32, 0LL);
      }
      if ( !v21 )
        break;
      v23 = QuestIdListByGroupId->m_Items[v22 + 1];
      Instance = QuestReleaseMaster__getListByQuestID(v21, v23, 0LL);
      if ( !Instance )
        break;
      v24 = *((_DWORD *)Instance + 6);
      if ( v24 >= 1 )
      {
        v25 = 0LL;
        v26 = (char *)Instance + 32;
        while ( 1 )
        {
          Instance = *(void **)&v26[8 * v25];
          if ( !Instance )
            goto LABEL_43;
          if ( *((_DWORD *)Instance + 5) == 71 )
            break;
          if ( (int)++v25 >= v24 )
            goto LABEL_24;
        }
        Instance = (void *)QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
        if ( !v16 )
          break;
        v27 = (int)Instance;
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             v16,
                             (int32_t)Instance,
                             (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v16,
            v27,
            v23,
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v20) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_25;
    }
LABEL_43:
    sub_B2C434(Instance, v18);
  }
LABEL_25:
  v28 = EventRaidEntity_TypeInfo;
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
    v28 = EventRaidEntity_TypeInfo;
  }
  for ( i = v28->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (void *)CondType__IsOpen(71, eventId, i, 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v16 )
      goto LABEL_43;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v16,
            i,
            (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v16,
             i,
             (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25746984(Item, -1, 0, 0LL) )
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
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188723 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4188723 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v15, eventId, condType, day, v16);
  if ( !QuestReleaseEntityList )
    sub_B2C434(0LL, v18);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestReleaseEntityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v22.fields.current )
      sub_B2C434(v19, v20);
    if ( !v14 )
      sub_B2C434(v19, v20);
    System_Collections_Generic_List_int___Add(
      v14,
      (int32_t)v22.fields.current[1].klass,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
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
  void *Instance; // x0
  __int64 v19; // x1
  System_Int32_array *QuestIdListByGroupId; // x23
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  __int64 v23; // x8
  unsigned __int64 v24; // x26
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v27; // x20
  struct EventRaidMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v36; // x0
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418871F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_QuestReleaseEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_QuestReleaseEntity__TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, v16);
    sub_B2C35C(&EventRaidMaster___c_TypeInfo, v17);
    byte_418871F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_30;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_30;
  v23 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v23 )
      {
        v36 = sub_B2C460(Instance);
        sub_B2C400(v36, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           QuestIdListByGroupId->m_Items[v24 + 1],
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
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      LODWORD(v23) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_18;
    }
LABEL_30:
    sub_B2C434(Instance, v19);
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
      v27 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v27,
        Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_QuestReleaseEntity___ctor__);
      v28 = EventRaidMaster___c_TypeInfo->static_fields;
      v28->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v28->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    if ( !v22 )
      goto LABEL_30;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v22;
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
  __int64 v8; // x1

  if ( (byte_4188720 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, *(_QWORD *)&eventId);
    byte_4188720 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_B2C434(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v9; // x1

  if ( (byte_4188721 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_4188721 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_B2C434(0LL, v9);
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
  __int64 v8; // x1

  if ( (byte_418871E & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B2C35C(
                                  &Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__,
                                  *(_QWORD *)&eventId);
    byte_418871E = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_B2C434(0LL, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestReleaseEntityList,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  EventRaidEntity_c *v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *v13; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0

  if ( (byte_4188729 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventRaidEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4188729 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v13 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_33;
    klass = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AC5258(v13, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_9:
      v18 = sub_AC5258(v13, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                                                  v13,
                                                                  *(_QWORD *)(v18 + 8));
    if ( !Enumerator )
      sub_B2C434(0LL, v19);
    v11 = EventRaidEntity_TypeInfo;
    v20 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (EventRaidEntity_c *)Enumerator->klass->_2.typeHierarchy[v20 - 1] != EventRaidEntity_TypeInfo )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B2C728(Enumerator);
LABEL_33:
      sub_B2C434(Enumerator, v11);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v26 = v13->klass;
  if ( *(_WORD *)&v13->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_29:
    v29 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
  return monitor & ~(monitor >> 31);
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
  __int64 v9; // x1

  if ( (byte_4188722 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId);
    this = (EventRaidMaster_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    byte_4188722 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_B2C434(0LL, v9);
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
  void *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  const MethodInfo *v10; // x2
  int max_length; // w9
  unsigned int v12; // w10
  int32_t v13; // w8
  WarQuestSelectionEntity_o *v14; // x11
  int v15; // w12
  unsigned int v16; // w13
  __int64 v17; // x14
  __int64 v19; // x0

  if ( (byte_418872F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418872F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v10);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_26;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
LABEL_25:
        v19 = sub_B2C460(Instance);
        sub_B2C400(v19, 0LL);
      }
      v14 = Entitys_WarQuestSelectionEntity->m_Items[v12];
      if ( !v14 )
        break;
      if ( v14->fields.warId == eventId )
      {
        if ( !Instance )
          break;
        v15 = *((_DWORD *)Instance + 6);
        if ( v15 >= 1 )
        {
          v16 = 0;
          while ( 1 )
          {
            if ( v16 >= v15 )
              goto LABEL_25;
            v17 = *((_QWORD *)Instance + (int)v16 + 4);
            if ( !v17 )
              goto LABEL_26;
            if ( v14->fields.questId == *(_DWORD *)(v17 + 20) )
              break;
            if ( (int)++v16 >= v15 )
              goto LABEL_21;
          }
          if ( v13 < *(_DWORD *)(v17 + 24) )
            v13 = *(_DWORD *)(v17 + 24);
        }
      }
LABEL_21:
      if ( (int)++v12 >= max_length )
        return v13;
    }
LABEL_26:
    sub_B2C434(Instance, v8);
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
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v13; // w19
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  _DWORD *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0

  if ( (byte_418872B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, EventRaidEntityBase);
    sub_B2C35C(&EventRaidEntity_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_418872B = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  v13 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_11:
      v17 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                      Enumerator,
                      *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_37;
    v20 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 300LL) < (unsigned int)v20
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * v20 - 8) != EventRaidEntity_TypeInfo )
    {
      v18 = (_DWORD *)sub_B2C728(v18);
LABEL_37:
      sub_B2C434(v18, v19);
    }
    if ( v18[4] == EventRaidEntityBase->fields.eventId
      && v18[6] == EventRaidEntityBase->fields.groupIndex
      && v18[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v13;
    }
  }
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_31:
    v29 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v13;
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
  BattleBuffData_BuffData_array *EventRaidEntityArray; // x20
  EventRaidMaster___c_c *v11; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x21
  Il2CppObject *v14; // x22
  struct EventRaidMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x0
  __int64 v23; // x1
  int max_length; // w8
  unsigned int v25; // w9
  BattleBuffData_BuffData_o *v26; // x10
  __int64 v27; // x0

  if ( (byte_418872A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_EventRaidEntity___, eventRaidEntityBase);
    sub_B2C35C(&Method_System_Comparison_EventRaidEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventRaidEntity__TypeInfo, v7);
    sub_B2C35C(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, v8);
    sub_B2C35C(&EventRaidMaster___c_TypeInfo, v9);
    byte_418872A = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArray(
                                                              this,
                                                              eventRaidEntityBase->fields.eventId,
                                                              eventRaidEntityBase->fields.groupIndex,
                                                              v3);
    v11 = EventRaidMaster___c_TypeInfo;
    if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v11 = EventRaidMaster___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__18_0,
        v14,
        Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRaidEntity___ctor__);
      v15 = EventRaidMaster___c_TypeInfo->static_fields;
      v15->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v15->__9__18_0,
        (System_Int32_array **)_9__18_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      EventRaidEntityArray,
      (System_Comparison_T__o *)_9__18_0,
      (const MethodInfo_23CBA5C *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !EventRaidEntityArray )
      goto LABEL_24;
    max_length = EventRaidEntityArray->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0;
      v22 = 0LL;
      while ( 1 )
      {
        if ( v25 >= max_length )
        {
          v27 = sub_B2C460(v22);
          sub_B2C400(v27, 0LL);
        }
        v26 = EventRaidEntityArray->m_Items[v25];
        if ( !v26 )
          break;
        if ( v26->fields.param == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( *(_QWORD *)&v26->fields.ratioRangeHigh == eventRaidEntityBase->fields.startedAt )
            return v22;
          v22 = (unsigned int)(v22 + 1);
        }
        if ( (int)++v25 >= max_length )
          goto LABEL_21;
      }
LABEL_24:
      sub_B2C434(v22, v23);
    }
  }
LABEL_21:
  LODWORD(v22) = 0;
  return v22;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4188728 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&eventId);
    byte_4188728 = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_16:
    sub_B2C434(EventRaidEntityArrayFromEventId, v6);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v8 = EventRaidEntityArrayFromEventId;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v13 = sub_B2C460(EventRaidEntityArrayFromEventId);
      sub_B2C400(v13, 0LL);
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
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_418871C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&EventRaidEntity_TypeInfo, v9);
    byte_418871C = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRaidMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B56 & 1) == 0 )
  {
    sub_B2C35C(&EventRaidMaster___c_TypeInfo, v1);
    byte_4184B56 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRaidMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaidMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}