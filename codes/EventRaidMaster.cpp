void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E5B & 1) == 0 )
  {
    sub_B5D5C4(&EventRaidMaster_TypeInfo, v1, v2, v3);
    byte_42E8E5B = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E48 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8E48 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    147,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


int32_t __fastcall EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  int64_t Time; // x0
  __int64 v23; // x1
  __int64 v24; // x27
  il2cpp_array_size_t v25; // w22
  int32_t v26; // w24
  int32_t v27; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v29; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v31; // x25
  __int64 v32; // x0
  int64_t v34; // [xsp+8h] [xbp-58h]

  if ( (byte_42E8E4F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v18, v19, v20);
    byte_42E8E4F = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v34 = Time;
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_30:
    sub_B5D69C(Time, v23);
  v24 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  if ( (int)v24 < 1 )
  {
    return 0;
  }
  else
  {
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v25];
      if ( !Time )
        goto LABEL_30;
      v27 = *(_DWORD *)(Time + 16);
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v29);
      if ( !Entity )
        return v26;
      v31 = Entity;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Time = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_30;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v27, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( (_DWORD)v24 - 1 == v25 )
      {
        Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_30;
        Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Time,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_30;
        Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                          v31->fields.eventId,
                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_30;
        if ( v34 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( (int)++v25 >= (int)v24 )
        return 0;
      v26 = ValueInt;
      if ( v25 >= RaidDeadQuestReleaseEntityList->max_length )
      {
        v32 = sub_B5D6C8(Time);
        sub_B5D668(v32, 0LL);
      }
    }
    if ( v34 >= v31->fields.startedAt )
      return ValueInt;
    else
      return v26;
  }
}


int32_t __fastcall EventRaidMaster__GetCurrentDayOld(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int64_t Time; // x0
  __int64 v22; // x1
  int64_t v23; // x21
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x9
  int32_t v38; // w20
  int v39; // w8
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  int v45; // [xsp+0h] [xbp-40h]

  if ( (byte_42E8E50 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    byte_42E8E50 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_B5D69C(Time, v22);
  v23 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    if ( !v35 )
      goto LABEL_39;
    v37 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 300LL) < (unsigned int)v37
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * v37 - 8) != EventRaidEntity_TypeInfo )
    {
      v35 = sub_B5D990(v35);
LABEL_39:
      sub_B5D69C(v35, v36);
    }
    if ( *(_DWORD *)(v35 + 16) == eventId && v23 >= *(_QWORD *)(v35 + 80) && v23 < *(_QWORD *)(v35 + 88) )
    {
      v38 = *(_DWORD *)(v35 + 20);
      v39 = 90;
      goto LABEL_29;
    }
  }
  v39 = 88;
  v38 = 0;
LABEL_29:
  v45 = v39;
  v40 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_33:
    v43 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  if ( v45 == 88 )
    return 0;
  return v38;
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x19
  void *list; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v55; // x3
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x10
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  unsigned __int64 v64; // x10
  int32_t *v65; // x11
  __int64 v66; // x0
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x20
  Il2CppObject *v69; // x21
  struct EventRaidMaster___c_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7

  if ( (byte_42E8E51 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)currentEventRaidEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Comparison_EventRaidEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_EventRaidEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaidEntity__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_EventRaidEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__, v39, v40, v41);
    sub_B5D5C4(&EventRaidMaster___c_TypeInfo, v42, v43, v44);
    byte_42E8E51 = 1;
  }
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRaidEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_B5D69C(0LL, v48);
      while ( 1 )
      {
        klass = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v52 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v52;
            p_offset += 4;
            if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v49);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v56 = Enumerator->klass;
        if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
        {
          v57 = 0LL;
          v58 = &v56->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v58 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
              goto LABEL_17;
          }
          v59 = (__int64)&v56->vtable[*v58].method;
        }
        else
        {
LABEL_17:
          v59 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v55);
        }
        v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                                                                       Enumerator,
                                                                       *(_QWORD *)(v59 + 8));
        if ( !v60 )
          goto LABEL_46;
        v62 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v60->klass->_2.bitflags2 + 1) < (unsigned int)v62
          || (EventRaidEntity_c *)v60->klass->_2.typeHierarchy[v62 - 1] != EventRaidEntity_TypeInfo )
        {
          v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v60);
LABEL_46:
          sub_B5D69C(v60, v61);
        }
        if ( v60->fields.missionTargetId == currentEventRaidEntity->fields.eventId
          && v60->fields.targetId == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v45 )
            sub_B5D69C(v60, EventRaidEntity_TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v45,
            v60,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRaidEntity__Add__);
        }
      }
      v63 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v64 = 0LL;
        v65 = &v63->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
        {
          ++v64;
          v65 += 4;
          if ( v64 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_30;
        }
        v66 = (__int64)&v63->vtable[*v65].method;
      }
      else
      {
LABEL_30:
        v66 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v55);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(
        Enumerator,
        *(_QWORD *)(v66 + 8));
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
        v69 = (Il2CppObject *)static_fields->__9;
        _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRaidEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__13_0,
          v69,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_EventRaidEntity___ctor__);
        v70 = EventRaidMaster___c_TypeInfo->static_fields;
        v70->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v70->__9__13_0,
          (System_Int32_array **)_9__13_0,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
      }
      if ( v45 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v45,
          (System_Comparison_T__o *)_9__13_0,
          (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v45,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_48:
    sub_B5D69C(list, v47);
  }
  if ( !v45 )
    goto LABEL_48;
  return (EventRaidEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v45,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42E8E46 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__, eventId, day, method);
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v7, v8, v9);
    byte_42E8E46 = 1;
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
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  EventRaidMaster___c__DisplayClass21_0_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x20

  if ( (byte_42E8E58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_EventRaidEntity___, eventId, groupIndex, method);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Predicate_EventRaidEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_EventRaidEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__, v16, v17, v18);
    sub_B5D5C4(&EventRaidMaster___c__DisplayClass21_0_TypeInfo, v19, v20, v21);
    byte_42E8E58 = 1;
  }
  v22 = (EventRaidMaster___c__DisplayClass21_0_o *)sub_B5D694(EventRaidMaster___c__DisplayClass21_0_TypeInfo);
  EventRaidMaster___c__DisplayClass21_0___ctor(v22, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  v22->fields.eventId = eventId;
  v22->fields.groupIndex = groupIndex;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v26,
                                    (const MethodInfo_1FC072C *)Method_System_Array_FindAll_EventRaidEntity___);
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  EventRaidMaster___c__DisplayClass14_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  BattleBuffData_BuffData_array *Entitys_WarQuestSelectionEntity; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20

  if ( (byte_42E8E52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_EventRaidEntity___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_EventRaidEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_EventRaidEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventRaidMaster___c__DisplayClass14_0_TypeInfo, v18, v19, v20);
    byte_42E8E52 = 1;
  }
  v21 = (EventRaidMaster___c__DisplayClass14_0_o *)sub_B5D694(EventRaidMaster___c__DisplayClass14_0_TypeInfo);
  EventRaidMaster___c__DisplayClass14_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.eventId = eventId;
  Entitys_WarQuestSelectionEntity = (BattleBuffData_BuffData_array *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                       (DataMasterBase_o *)this,
                                                                       (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventRaidEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_EventRaidEntity___ctor__);
  return (EventRaidEntity_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                    Entitys_WarQuestSelectionEntity,
                                    (System_Predicate_T__o *)v25,
                                    (const MethodInfo_1FC072C *)Method_System_Array_FindAll_EventRaidEntity___);
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
          sub_B5D69C(result, v4);
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
  __int64 v3; // x3
  EventRaidMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleBuffData_BuffData_array *EventRaidEntityArrayFromEventId; // x20
  EventRaidMaster___c_c *v19; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__22_0; // x21
  Il2CppObject *v22; // x22
  struct EventRaidMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  signed int max_length; // w24
  il2cpp_array_size_t v31; // w23
  BattleBuffData_BuffData_o *v32; // x21
  System_String_o *v33; // x22
  System_String_o *v34; // x0
  BattleBuffData_BuffData_o *v35; // x8
  __int64 v37; // x0

  v5 = this;
  if ( (byte_42E8E59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_EventRaidEntity___, (_DWORD)nowEventRaidEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Comparison_EventRaidEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_EventRaidEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, v12, v13, v14);
    this = (EventRaidMaster_o *)sub_B5D5C4(&EventRaidMaster___c_TypeInfo, v15, v16, v17);
    byte_42E8E59 = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_26;
  EventRaidEntityArrayFromEventId = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                                       v5,
                                                                       nowEventRaidEntity->fields.eventId,
                                                                       method);
  v19 = EventRaidMaster___c_TypeInfo;
  if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
    v19 = EventRaidMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRaidEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__22_0,
      v22,
      Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventRaidEntity___ctor__);
    v23 = EventRaidMaster___c_TypeInfo->static_fields;
    v23->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    EventRaidEntityArrayFromEventId,
    (System_Comparison_T__o *)_9__22_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_26;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v31 = 0;
  do
  {
    if ( (int)v31 >= max_length )
      return 0LL;
    if ( v31 >= EventRaidEntityArrayFromEventId->max_length )
      goto LABEL_25;
    v32 = EventRaidEntityArrayFromEventId->m_Items[v31];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v32 )
      goto LABEL_26;
    v33 = (System_String_o *)this;
    v34 = (System_String_o *)((__int64 (__fastcall *)(BattleBuffData_BuffData_o *, const char *))v32->klass[1]._1.gc_desc)(
                               v32,
                               v32->klass[1]._1.name);
    this = (EventRaidMaster_o *)System_String__op_Inequality(v33, v34, 0LL);
    ++v31;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v31 >= max_length )
    return 0LL;
  if ( v31 >= EventRaidEntityArrayFromEventId->max_length )
  {
LABEL_25:
    v37 = sub_B5D6C8(this);
    sub_B5D668(v37, 0LL);
  }
  v35 = EventRaidEntityArrayFromEventId->m_Items[v31];
  if ( !v35 )
LABEL_26:
    sub_B5D69C(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == v35->fields.param )
    return (EventRaidEntity_o *)EventRaidEntityArrayFromEventId->m_Items[v31];
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_Collections_Generic_Dictionary_int__int__o *v34; // x21
  void *Instance; // x0
  __int64 v36; // x1
  System_Int32_array *QuestIdListByGroupId; // x22
  __int64 v38; // x8
  QuestReleaseMaster_o *v39; // x23
  unsigned __int64 v40; // x26
  int32_t v41; // w24
  int v42; // w8
  __int64 v43; // x9
  char *v44; // x10
  int32_t v45; // w25
  EventRaidEntity_c *v46; // x0
  int32_t i; // w22
  int32_t Item; // w23
  __int64 v50; // x0

  RaidGorupMax = raidCountMax;
  if ( (byte_42E8E57 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventId, raidCountMax, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42E8E57 = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v34 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v34,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_43;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_43;
  v38 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v38 >= 1 )
  {
    v39 = (QuestReleaseMaster_o *)Instance;
    v40 = 0LL;
    while ( 1 )
    {
      if ( v40 >= (unsigned int)v38 )
      {
        v50 = sub_B5D6C8(Instance);
        sub_B5D668(v50, 0LL);
      }
      if ( !v39 )
        break;
      v41 = QuestIdListByGroupId->m_Items[v40 + 1];
      Instance = QuestReleaseMaster__getListByQuestID(v39, v41, 0LL);
      if ( !Instance )
        break;
      v42 = *((_DWORD *)Instance + 6);
      if ( v42 >= 1 )
      {
        v43 = 0LL;
        v44 = (char *)Instance + 32;
        while ( 1 )
        {
          Instance = *(void **)&v44[8 * v43];
          if ( !Instance )
            goto LABEL_43;
          if ( *((_DWORD *)Instance + 5) == 71 )
            break;
          if ( (int)++v43 >= v42 )
            goto LABEL_24;
        }
        Instance = (void *)QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Instance, 0LL);
        if ( !v34 )
          break;
        v45 = (int)Instance;
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             v34,
                             (int32_t)Instance,
                             (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v34,
            v45,
            v41,
            (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v38) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v40 >= (int)v38 )
        goto LABEL_25;
    }
LABEL_43:
    sub_B5D69C(Instance, v36);
  }
LABEL_25:
  v46 = EventRaidEntity_TypeInfo;
  if ( (BYTE3(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo);
    v46 = EventRaidEntity_TypeInfo;
  }
  for ( i = v46->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Instance = (void *)CondType__IsOpen(71, eventId, i, 0, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v34 )
      goto LABEL_43;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v34,
            i,
            (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v34,
             i,
             (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsQuestClear_25877652(Item, -1, 0, 0LL) )
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  EventRaidMaster_o *v27; // x0
  const MethodInfo *v28; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8E4E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__,
      eventId,
      condType,
      *(_QWORD *)&day);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42E8E4E = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v27, eventId, condType, day, v28);
  if ( !QuestReleaseEntityList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)QuestReleaseEntityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v31 )
      break;
    if ( !v34.fields.current )
      sub_B5D69C(v31, v32);
    if ( !v26 )
      sub_B5D69C(v31, v32);
    System_Collections_Generic_List_int___Add(
      v26,
      (int32_t)v34.fields.current[1].klass,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v26;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestReleaseEntity__o *__fastcall EventRaidMaster__GetQuestReleaseEntityList(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t condType,
        int32_t day,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  void *Instance; // x0
  __int64 v39; // x1
  System_Int32_array *QuestIdListByGroupId; // x23
  QuestReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x22
  __int64 v43; // x8
  unsigned __int64 v44; // x26
  struct EventRaidMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x19
  Il2CppObject *v47; // x20
  struct EventRaidMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v56; // x0
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8E4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_QuestReleaseEntity___ctor__, eventId, condType, *(_QWORD *)&day);
    sub_B5D5C4(&System_Comparison_QuestReleaseEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, v32, v33, v34);
    sub_B5D5C4(&EventRaidMaster___c_TypeInfo, v35, v36, v37);
    byte_42E8E4A = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_30;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_30;
  v43 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    while ( 1 )
    {
      if ( v44 >= (unsigned int)v43 )
      {
        v56 = sub_B5D6C8(Instance);
        sub_B5D668(v56, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &entity,
                           QuestIdListByGroupId->m_Items[v44 + 1],
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
          if ( !v42 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v42,
            (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Add__);
        }
      }
      LODWORD(v43) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v44 >= (int)v43 )
        goto LABEL_18;
    }
LABEL_30:
    sub_B5D69C(Instance, v39);
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
      v47 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_QuestReleaseEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v47,
        Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_QuestReleaseEntity___ctor__);
      v48 = EventRaidMaster___c_TypeInfo->static_fields;
      v48->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)_9__5_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v48->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    if ( !v42 )
      goto LABEL_30;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v42;
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

  if ( (byte_42E8E4B & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, eventId, day, method);
    byte_42E8E4B = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_B5D69C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventRaidMaster__GetRaidDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v11; // x1

  if ( (byte_42E8E4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, eventId, day, method);
    this = (EventRaidMaster_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8, v9);
    byte_42E8E4C = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_B5D69C(0LL, v11);
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

  if ( (byte_42E8E49 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_B5D5C4(
                                  &Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__,
                                  eventId,
                                  day,
                                  method);
    byte_42E8E49 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_B5D69C(0LL, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)QuestReleaseEntityList,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  EventRaidEntity_c *v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *v22; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0

  if ( (byte_42E8E54 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    byte_42E8E54 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v22 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v22 )
      goto LABEL_33;
    klass = v22->klass;
    if ( *(_WORD *)&v22->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_22:
      p_method = sub_AF54C0(v22, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v22,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = v22->klass;
    if ( *(_WORD *)&v22->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_9:
      v27 = sub_AF54C0(v22, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                  v22,
                                                                  *(_QWORD *)(v27 + 8));
    if ( !Enumerator )
      sub_B5D69C(0LL, v28);
    v20 = EventRaidEntity_TypeInfo;
    v29 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Enumerator->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (EventRaidEntity_c *)Enumerator->klass->_2.typeHierarchy[v29 - 1] != EventRaidEntity_TypeInfo )
    {
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)sub_B5D990(Enumerator);
LABEL_33:
      sub_B5D69C(Enumerator, v20);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v35 = v22->klass;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_29:
    v38 = sub_AF54C0(v22, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v22, *(_QWORD *)(v38 + 8));
  return monitor & ~(monitor >> 31);
}


int32_t __fastcall EventRaidMaster__GetRaidGroupDeadQuestId(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v11; // x1

  if ( (byte_42E8E4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, eventId, groupIndex, method);
    this = (EventRaidMaster_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8, v9);
    byte_42E8E4D = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_B5D69C(0LL, v11);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *Instance; // x0
  __int64 v13; // x1
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x20
  const MethodInfo *v15; // x2
  int max_length; // w9
  unsigned int v17; // w10
  int32_t v18; // w8
  WarQuestSelectionEntity_o *v19; // x11
  int v20; // w12
  unsigned int v21; // w13
  __int64 v22; // x14
  __int64 v24; // x0

  if ( (byte_42E8E5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E8E5A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_26;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v15);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_26;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
LABEL_25:
        v24 = sub_B5D6C8(Instance);
        sub_B5D668(v24, 0LL);
      }
      v19 = Entitys_WarQuestSelectionEntity->m_Items[v17];
      if ( !v19 )
        break;
      if ( v19->fields.warId == eventId )
      {
        if ( !Instance )
          break;
        v20 = *((_DWORD *)Instance + 6);
        if ( v20 >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( v21 >= v20 )
              goto LABEL_25;
            v22 = *((_QWORD *)Instance + (int)v21 + 4);
            if ( !v22 )
              goto LABEL_26;
            if ( v19->fields.questId == *(_DWORD *)(v22 + 20) )
              break;
            if ( (int)++v21 >= v20 )
              goto LABEL_21;
          }
          if ( v18 < *(_DWORD *)(v22 + 24) )
            v18 = *(_DWORD *)(v22 + 24);
        }
      }
LABEL_21:
      if ( (int)++v17 >= max_length )
        return v18;
    }
LABEL_26:
    sub_B5D69C(Instance, v13);
  }
  return 0;
}


int32_t __fastcall EventRaidMaster__GetSubGroupMax(
        EventRaidMaster_o *this,
        EventRaidEntity_o *EventRaidEntityBase,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  int32_t v22; // w19
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  _DWORD *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0

  if ( (byte_42E8E56 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)EventRaidEntityBase,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    byte_42E8E56 = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  v22 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_24;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_24:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_11:
      v26 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v27 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                      Enumerator,
                      *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_37;
    v29 = *(&EventRaidEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v29
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v29 - 8) != EventRaidEntity_TypeInfo )
    {
      v27 = (_DWORD *)sub_B5D990(v27);
LABEL_37:
      sub_B5D69C(v27, v28);
    }
    if ( v27[4] == EventRaidEntityBase->fields.eventId
      && v27[6] == EventRaidEntityBase->fields.groupIndex
      && v27[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v22;
    }
  }
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_31:
    v38 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return v22;
}


int32_t __fastcall EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleBuffData_BuffData_array *EventRaidEntityArray; // x20
  EventRaidMaster___c_c *v19; // x8
  struct EventRaidMaster___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x21
  Il2CppObject *v22; // x22
  struct EventRaidMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0
  __int64 v31; // x1
  int max_length; // w8
  unsigned int v33; // w9
  BattleBuffData_BuffData_o *v34; // x10
  __int64 v35; // x0

  if ( (byte_42E8E55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_EventRaidEntity___, (_DWORD)eventRaidEntityBase, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Comparison_EventRaidEntity___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_EventRaidEntity__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, v12, v13, v14);
    sub_B5D5C4(&EventRaidMaster___c_TypeInfo, v15, v16, v17);
    byte_42E8E55 = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = (BattleBuffData_BuffData_array *)EventRaidMaster__GetEventRaidEntityArray(
                                                              this,
                                                              eventRaidEntityBase->fields.eventId,
                                                              eventRaidEntityBase->fields.groupIndex,
                                                              v3);
    v19 = EventRaidMaster___c_TypeInfo;
    if ( (BYTE3(EventRaidMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo);
      v19 = EventRaidMaster___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRaidEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__18_0,
        v22,
        Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_EventRaidEntity___ctor__);
      v23 = EventRaidMaster___c_TypeInfo->static_fields;
      v23->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v23->__9__18_0,
        (System_Int32_array **)_9__18_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    System_Array__Sort_BattleBuffData_BuffData_(
      EventRaidEntityArray,
      (System_Comparison_T__o *)_9__18_0,
      (const MethodInfo_1AC8530 *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !EventRaidEntityArray )
      goto LABEL_24;
    max_length = EventRaidEntityArray->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0;
      v30 = 0LL;
      while ( 1 )
      {
        if ( v33 >= max_length )
        {
          v35 = sub_B5D6C8(v30);
          sub_B5D668(v35, 0LL);
        }
        v34 = EventRaidEntityArray->m_Items[v33];
        if ( !v34 )
          break;
        if ( v34->fields.param == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( *(_QWORD *)&v34->fields.ratioRangeHigh == eventRaidEntityBase->fields.startedAt )
            return v30;
          v30 = (unsigned int)(v30 + 1);
        }
        if ( (int)++v33 >= max_length )
          goto LABEL_21;
      }
LABEL_24:
      sub_B5D69C(v30, v31);
    }
  }
LABEL_21:
  LODWORD(v30) = 0;
  return v30;
}


bool __fastcall EventRaidMaster__IsEventRaidAliveAny(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v7; // x1
  int max_length; // w8
  EventRaidEntity_array *v9; // x20
  unsigned int v10; // w22
  EventRaidEntity_o *v11; // x8
  int64_t day; // x21
  __int64 v14; // x0

  if ( (byte_42E8E53 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42E8E53 = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
LABEL_16:
    sub_B5D69C(EventRaidEntityArrayFromEventId, v7);
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v9 = EventRaidEntityArrayFromEventId;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      v14 = sub_B5D6C8(EventRaidEntityArrayFromEventId);
      sub_B5D668(v14, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42E8E47 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&day);
    sub_B5D5C4(&EventRaidEntity_TypeInfo, v9, v10, v11);
    byte_42E8E47 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRaidMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5646 & 1) == 0 )
  {
    sub_B5D5C4(&EventRaidMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5646 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRaidMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRaidMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRaidMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}