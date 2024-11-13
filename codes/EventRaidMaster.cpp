void __fastcall EventRaidMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B162D5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaidMaster_TypeInfo, v1, v2);
    byte_4B162D5 = 1;
  }
  EventRaidMaster_TypeInfo->static_fields->OLD_RAID_DAY_COUNT = 7;
}


void __fastcall EventRaidMaster___ctor(EventRaidMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B162C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__, method, v2);
    byte_4B162C2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    148,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetCurrentDay(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  QuestReleaseEntity_array *RaidDeadQuestReleaseEntityList; // x21
  int64_t Time; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  int v19; // w27
  int64_t v20; // x22
  il2cpp_array_size_t v21; // w28
  int32_t v22; // w24
  int32_t v23; // w26
  int32_t ValueInt; // w23
  const MethodInfo *v25; // x3
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v27; // x25

  if ( (byte_4B162C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12, v13);
    byte_4B162C9 = 1;
  }
  RaidDeadQuestReleaseEntityList = EventRaidMaster__GetRaidDeadQuestReleaseEntityList(this, eventId, 0, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Time = NetworkManager__getTime(0LL);
  if ( !RaidDeadQuestReleaseEntityList )
LABEL_26:
    sub_1BCAA3C(Time, v17);
  v18 = *(_QWORD *)&RaidDeadQuestReleaseEntityList->max_length;
  v19 = v18 - 1;
  if ( (int)v18 < 1 )
  {
    return 0;
  }
  else
  {
    v20 = Time;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      Time = (int64_t)RaidDeadQuestReleaseEntityList->m_Items[v21];
      if ( !Time )
        goto LABEL_26;
      v23 = *(_DWORD *)(Time + 16);
      ValueInt = QuestReleaseEntity__getValueInt((QuestReleaseEntity_o *)Time, 0LL);
      Entity = EventRaidMaster__GetEntity(this, eventId, ValueInt, v25);
      if ( !Entity )
        return v22;
      v27 = Entity;
      Time = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Time )
        goto LABEL_26;
      Time = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Time, v23, 0, 0LL);
      if ( (Time & 1) == 0 )
        break;
      if ( v19 == v21 )
      {
        Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Time,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
        if ( !Time )
          goto LABEL_26;
        Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                          v27->fields.eventId,
                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !Time )
          goto LABEL_26;
        if ( v20 < *(_QWORD *)(Time + 96) )
          return ValueInt;
      }
      if ( v19 == v21 )
        return 0;
      ++v21;
      v22 = ValueInt;
      if ( v21 >= RaidDeadQuestReleaseEntityList->max_length )
        sub_1BCAA44(Time, v17);
    }
    if ( v20 >= v27->fields.startedAt )
      return ValueInt;
    else
      return v22;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetCurrentDayOld(
        EventRaidMaster_o *this,
        int32_t eventId,
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
  int64_t Time; // x0
  __int64 v16; // x1
  int64_t v17; // x21
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 methodPtr_low; // x9
  int32_t v31; // w21
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4B162CA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&EventRaidEntity_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    byte_4B162CA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&eventId);
  Time = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    sub_1BCAA3C(Time, v16);
  v17 = Time;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_18;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_18:
      v27 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_36;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1BCACFC(v28);
LABEL_36:
      sub_1BCAA3C(v28, v29);
    }
    if ( *(_DWORD *)(v28 + 16) == eventId && v17 >= *(_QWORD *)(v28 + 80) && v17 < *(_QWORD *)(v28 + 88) )
    {
      v31 = *(_DWORD *)(v28 + 20);
      goto LABEL_28;
    }
  }
  v31 = 0;
LABEL_28:
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_32:
    v35 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return v31;
}


EventRaidEntity_array *__fastcall EventRaidMaster__GetCurrentGroupListByEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *currentEventRaidEntity,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x8
  EventRaidEntity_c *v52; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v55; // x10
  __int64 size; // x11
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x2
  __int64 v63; // x3
  EventRaidMaster___c_c *v64; // x8
  System_Comparison_T__o *_9__13_0; // x20
  Il2CppObject *v66; // x21
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7

  if ( (byte_4B162CB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      currentEventRaidEntity,
      method);
    sub_1BCA7E0(&System_Comparison_EventRaidEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&EventRaidEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaidEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaidEntity__Sort__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaidEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRaidEntity___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRaidEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__, v26, v27);
    sub_1BCA7E0(&EventRaidMaster___c_TypeInfo, v28, v29);
    byte_4B162CB = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRaidEntity__TypeInfo,
                                                       currentEventRaidEntity,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRaidEntity___ctor__);
  if ( currentEventRaidEntity )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                     list,
                     (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
      if ( !Enumerator )
        sub_1BCAA3C(0LL, v33);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v36;
            p_offset += 4;
            if ( !v36 )
              goto LABEL_10;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_10:
          p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                Enumerator,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          break;
        v39 = Enumerator->klass;
        v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
        {
          v41 = &v39->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
          {
            --v40;
            v41 += 4;
            if ( !v40 )
              goto LABEL_17;
          }
          v42 = (__int64)&v39->vtable[*v41].method;
        }
        else
        {
LABEL_17:
          v42 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
        }
        v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                Enumerator,
                *(_QWORD *)(v42 + 8));
        v51 = v43;
        if ( !v43 )
          goto LABEL_47;
        v52 = EventRaidEntity_TypeInfo;
        methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 304LL) < (unsigned int)methodPtr_low
          || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
        {
          sub_1BCACFC(v43);
LABEL_47:
          sub_1BCAA3C(v43, v44);
        }
        if ( *(_DWORD *)(v43 + 16) == currentEventRaidEntity->fields.eventId
          && *(_DWORD *)(v43 + 24) == currentEventRaidEntity->fields.groupIndex )
        {
          if ( !v30 )
            sub_1BCAA3C(v43, EventRaidEntity_TypeInfo);
          items = v30->fields._items;
          v55 = Method_System_Collections_Generic_List_EventRaidEntity__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1BCAA3C(v43, v52);
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v43,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v57[4] = (Il2CppClass *)v51;
            sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), v51, v45, v46, v47, v48, v49, v50);
          }
        }
      }
      v58 = Enumerator->klass;
      v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v60 = &v58->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
        {
          --v59;
          v60 += 4;
          if ( !v59 )
            goto LABEL_33;
        }
        v61 = (__int64)&v58->vtable[*v60].method;
      }
      else
      {
LABEL_33:
        v61 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
      }
      list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                                 Enumerator,
                                                                 *(_QWORD *)(v61 + 8));
      v64 = EventRaidMaster___c_TypeInfo;
      if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v32);
        v64 = EventRaidMaster___c_TypeInfo;
      }
      _9__13_0 = (System_Comparison_T__o *)v64->static_fields->__9__13_0;
      if ( !_9__13_0 )
      {
        if ( !v64->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v64, v32);
          v64 = EventRaidMaster___c_TypeInfo;
        }
        v66 = (Il2CppObject *)v64->static_fields->__9;
        _9__13_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRaidEntity__TypeInfo, v32, v62, v63);
        System_Comparison_object____ctor(
          _9__13_0,
          v66,
          Method_EventRaidMaster___c__GetCurrentGroupListByEntity_b__13_0__,
          0LL);
        static_fields = EventRaidMaster___c_TypeInfo->static_fields;
        static_fields->__9__13_0 = (struct System_Comparison_EventRaidEntity__o *)_9__13_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
          (int64_t)_9__13_0,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
      }
      if ( v30 )
      {
        System_Collections_Generic_List_object___Sort_56244000(
          v30,
          _9__13_0,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventRaidEntity__Sort__);
        return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v30,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
      }
    }
LABEL_50:
    sub_1BCAA3C(list, v32);
  }
  if ( !v30 )
    goto LABEL_50;
  return (EventRaidEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v30,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventRaidEntity__ToArray__);
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
  __int64 v8; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B162C0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&day);
    sub_1BCA7E0(&EventRaidEntity_TypeInfo, v7, v8);
    byte_4B162C0 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo, *(_QWORD *)&eventId);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (EventRaidEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArray(
        EventRaidMaster_o *this,
        int32_t eventId,
        int32_t groupIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  System_Object_array *Entitys_object; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Predicate_object__o *v22; // x20

  if ( (byte_4B162D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId, *(_QWORD *)&groupIndex);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v7, v8);
    sub_1BCA7E0(&System_Predicate_EventRaidEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__, v11, v12);
    sub_1BCA7E0(&EventRaidMaster___c__DisplayClass21_0_TypeInfo, v13, v14);
    byte_4B162D2 = 1;
  }
  v15 = sub_1BCAA2C(EventRaidMaster___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&groupIndex, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_DWORD *)(v15 + 16) = eventId;
  *(_DWORD *)(v15 + 20) = groupIndex;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v22 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_EventRaidEntity__TypeInfo, v19, v20, v21);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_EventRaidMaster___c__DisplayClass21_0__GetEventRaidEntityArray_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v22,
                                    (const MethodInfo_300CF94 *)Method_System_Array_FindAll_EventRaidEntity___);
}


// local variable allocation has failed, the output may be wrong!
EventRaidEntity_array *__fastcall EventRaidMaster__GetEventRaidEntityArrayFromEventId(
        EventRaidMaster_o *this,
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
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Object_array *Entitys_object; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Predicate_object__o *v21; // x20

  if ( (byte_4B162CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_EventRaidEntity___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_EventRaidEntity___, v6, v7);
    sub_1BCA7E0(&System_Predicate_EventRaidEntity__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__, v10, v11);
    sub_1BCA7E0(&EventRaidMaster___c__DisplayClass14_0_TypeInfo, v12, v13);
    byte_4B162CC = 1;
  }
  v14 = sub_1BCAA2C(EventRaidMaster___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = eventId;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)this,
                     (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_EventRaidEntity___);
  v21 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_EventRaidEntity__TypeInfo, v18, v19, v20);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_EventRaidMaster___c__DisplayClass14_0__GetEventRaidEntityArrayFromEventId_b__0__,
    0LL);
  return (EventRaidEntity_array *)System_Array__FindAll_object_(
                                    Entitys_object,
                                    (System_Predicate_T__o *)v21,
                                    (const MethodInfo_300CF94 *)Method_System_Array_FindAll_EventRaidEntity___);
}


int64_t __fastcall EventRaidMaster__GetEventRaidTimeLimitAt(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v4; // x1
  __int64 v5; // x9
  int64_t v6; // x8
  int v7; // w10
  EventRaidEntity_o *v8; // x11
  __int64 timeLimitAt; // x11

  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    return 0LL;
  v5 = *(_QWORD *)&EventRaidEntityArrayFromEventId->max_length;
  if ( !v5 || (int)v5 < 1 )
    return 0LL;
  v6 = 0LL;
  v7 = 0;
  do
  {
    v8 = EventRaidEntityArrayFromEventId->m_Items[v7];
    if ( !v8 )
      sub_1BCAA3C(EventRaidEntityArrayFromEventId, v4);
    timeLimitAt = v8->fields.timeLimitAt;
    ++v7;
    if ( v6 <= timeLimitAt && timeLimitAt >= 1 )
      v6 = timeLimitAt;
  }
  while ( (_DWORD)v5 != v7 );
  return v6;
}


EventRaidEntity_o *__fastcall EventRaidMaster__GetNextSubGroupEntity(
        EventRaidMaster_o *this,
        EventRaidEntity_o *nowEventRaidEntity,
        const MethodInfo *method)
{
  EventRaidMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  EventRaidMaster___c_c *v15; // x8
  System_Object_array *v16; // x20
  System_Comparison_T__o *_9__22_0; // x21
  Il2CppObject *v18; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int max_length; // w24
  il2cpp_array_size_t v27; // w23
  Il2CppObject *v28; // x21
  EventRaidMaster_o *v29; // x22
  System_String_o *v30; // x0
  Il2CppObject *v31; // x8

  v4 = this;
  if ( (byte_4B162D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_EventRaidEntity___, nowEventRaidEntity, method);
    sub_1BCA7E0(&System_Comparison_EventRaidEntity__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, v7, v8);
    this = (EventRaidMaster_o *)sub_1BCA7E0(&EventRaidMaster___c_TypeInfo, v9, v10);
    byte_4B162D3 = 1;
  }
  if ( !nowEventRaidEntity )
    goto LABEL_23;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      v4,
                                      nowEventRaidEntity->fields.eventId,
                                      method);
  v15 = EventRaidMaster___c_TypeInfo;
  v16 = (System_Object_array *)EventRaidEntityArrayFromEventId;
  if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v12);
    v15 = EventRaidMaster___c_TypeInfo;
  }
  _9__22_0 = (System_Comparison_T__o *)v15->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = EventRaidMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__22_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRaidEntity__TypeInfo, v12, v13, v14);
    System_Comparison_object____ctor(_9__22_0, v18, Method_EventRaidMaster___c__GetNextSubGroupEntity_b__22_0__, 0LL);
    static_fields = EventRaidMaster___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = (struct System_Comparison_EventRaidEntity__o *)_9__22_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
      (int64_t)_9__22_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Array__Sort_object__49153980(
    v16,
    _9__22_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_EventRaidEntity___);
  if ( !v16 )
    goto LABEL_23;
  max_length = v16->max_length;
  v27 = 0;
  do
  {
    if ( (max_length & ~(max_length >> 31)) == v27 )
      return 0LL;
    if ( v27 >= v16->max_length )
      goto LABEL_24;
    v28 = v16->m_Items[v27];
    this = (EventRaidMaster_o *)((__int64 (__fastcall *)(EventRaidEntity_o *, Il2CppMethodPointer))nowEventRaidEntity->klass->vtable._4_get_PrimaryKey.method)(
                                  nowEventRaidEntity,
                                  nowEventRaidEntity->klass->vtable._5_CreatePrimaryKey.methodPtr);
    if ( !v28 )
      goto LABEL_23;
    v29 = this;
    v30 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v28->klass->vtable[4].method)(
                               v28,
                               v28->klass->vtable[5].methodPtr);
    this = (EventRaidMaster_o *)System_String__op_Inequality((System_String_o *)v29, v30, 0LL);
    ++v27;
  }
  while ( ((unsigned __int8)this & 1) != 0 );
  if ( (int)v27 >= max_length )
    return 0LL;
  if ( v27 >= v16->max_length )
LABEL_24:
    sub_1BCAA44(this, nowEventRaidEntity);
  v31 = v16->m_Items[v27];
  if ( !v31 )
LABEL_23:
    sub_1BCAA3C(this, nowEventRaidEntity);
  if ( nowEventRaidEntity->fields.subGroupIndex == HIDWORD(v31[1].monitor) )
    return (EventRaidEntity_o *)v16->m_Items[v27];
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
  System_Collections_Generic_Dictionary_int__int__o *v25; // x21
  QuestReleaseEntity_array *Instance; // x0
  __int64 v27; // x1
  System_Int32_array *QuestIdListByGroupId; // x22
  __int64 v29; // x8
  QuestReleaseMaster_o *v30; // x23
  unsigned __int64 v31; // x26
  int32_t v32; // w24
  int max_length; // w9
  int v34; // w10
  QuestReleaseEntity_o *v35; // x8
  int32_t v36; // w25
  EventRaidEntity_c *v37; // x0
  int32_t i; // w22
  __int64 v39; // x1
  int32_t Item; // w23

  RaidGorupMax = raidCountMax;
  if ( (byte_4B162D1 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&raidCountMax);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&EventRaidEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B162D1 = 1;
  }
  if ( (RaidGorupMax & 0x80000000) != 0 )
    RaidGorupMax = EventRaidMaster__GetRaidGorupMax(this, eventId, *(const MethodInfo **)&raidCountMax);
  if ( RaidGorupMax < 1 )
    return 0;
  v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               *(_QWORD *)&eventId,
                                                               *(_QWORD *)&raidCountMax,
                                                               method);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v25,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_40;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = (QuestReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (QuestReleaseEntity_array *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  if ( !QuestIdListByGroupId )
    goto LABEL_40;
  v29 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = (QuestReleaseMaster_o *)Instance;
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v29 )
        sub_1BCAA44(Instance, v27);
      if ( !v30 )
        break;
      v32 = QuestIdListByGroupId->m_Items[v31 + 1];
      Instance = QuestReleaseMaster__getListByQuestID(v30, v32, 0LL);
      if ( !Instance )
        break;
      max_length = Instance->max_length;
      if ( max_length >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          v35 = Instance->m_Items[v34];
          if ( !v35 )
            goto LABEL_40;
          if ( v35->fields.type == 71 )
            break;
          if ( max_length == ++v34 )
            goto LABEL_24;
        }
        Instance = (QuestReleaseEntity_array *)QuestReleaseEntity__getValueInt(Instance->m_Items[v34], 0LL);
        if ( !v25 )
          break;
        v36 = (int)Instance;
        Instance = (QuestReleaseEntity_array *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                 v25,
                                                 (int32_t)Instance,
                                                 (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_Dictionary_int__int___Add(
            v25,
            v36,
            v32,
            (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
LABEL_24:
      LODWORD(v29) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v31 >= (int)v29 )
        goto LABEL_25;
    }
LABEL_40:
    sub_1BCAA3C(Instance, v27);
  }
LABEL_25:
  v37 = EventRaidEntity_TypeInfo;
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo, v27);
    v37 = EventRaidEntity_TypeInfo;
  }
  for ( i = v37->static_fields->SUB_GROUP_INDEX_START; i <= RaidGorupMax; ++i )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v27);
    Instance = (QuestReleaseEntity_array *)CondType__IsOpen(71, eventId, i, 0, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    if ( !v25 )
      goto LABEL_40;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            v25,
            i,
            (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
      break;
    Item = System_Collections_Generic_Dictionary_int__int___get_Item(
             v25,
             i,
             (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v39);
    if ( !CondType__IsQuestClear_38310172(Item, -1, 0, 0LL) )
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
  System_Collections_Generic_List_int__o *v20; // x19
  EventRaidMaster_o *v21; // x0
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseEntityList; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B162C8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v18, v19);
    byte_4B162C8 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    *(_QWORD *)&condType,
                                                    *(_QWORD *)&day);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(v21, eventId, condType, day, v22);
  if ( !QuestReleaseEntityList )
    sub_1BCAA3C(0LL, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestReleaseEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__MoveNext__);
    if ( !v25 )
      break;
    if ( !v33.fields._current )
      sub_1BCAA3C(v25, v26);
    if ( !v20 )
      sub_1BCAA3C(v25, v26);
    klass_low = LODWORD(v33.fields._current[1].klass);
    items = v20->fields._items;
    v29 = Method_System_Collections_Generic_List_int__Add__;
    ++v20->fields._version;
    if ( !items )
      sub_1BCAA3C(v25, klass_low);
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v20,
        klass_low,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v20->fields._size = size + 1;
      items->m_Items[size + 1] = klass_low;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestReleaseEntity__Dispose__);
  return v20;
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
  void *Instance; // x0
  Il2CppObject *v27; // x1
  System_Int32_array *QuestIdListByGroupId; // x23
  Il2CppObject *MasterData_object; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x22
  int64_t v34; // x2
  __int64 v35; // x3
  __int64 v36; // x8
  unsigned __int64 v37; // x26
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Comparison_T__o *v46; // x19
  Il2CppObject *v47; // x20
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  QuestReleaseEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B162C4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_QuestReleaseEntity__TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestReleaseEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, v22, v23);
    sub_1BCA7E0(&EventRaidMaster___c_TypeInfo, v24, v25);
    byte_4B162C4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_31;
  QuestIdListByGroupId = QuestGroupMaster__GetQuestIdListByGroupId((QuestGroupMaster_o *)Instance, eventId, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestReleaseEntity__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestReleaseEntity___ctor__);
  if ( !QuestIdListByGroupId )
    goto LABEL_31;
  v36 = *(_QWORD *)&QuestIdListByGroupId->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      if ( v37 >= (unsigned int)v36 )
        sub_1BCAA44(Instance, v27);
      if ( !MasterData_object )
        break;
      Instance = (void *)QuestReleaseMaster__TryGetEntity(
                           (QuestReleaseMaster_o *)MasterData_object,
                           &entity,
                           QuestIdListByGroupId->m_Items[v37 + 1],
                           condType,
                           eventId,
                           day,
                           0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( day < 1 )
          goto LABEL_35;
        Instance = entity;
        if ( !entity )
          break;
        Instance = (void *)QuestReleaseEntity__getValueInt(entity, 0LL);
        if ( (_DWORD)Instance == day )
        {
LABEL_35:
          if ( !v33 )
            break;
          v27 = (Il2CppObject *)entity;
          items = v33->fields._items;
          v43 = Method_System_Collections_Generic_List_QuestReleaseEntity__Add__;
          ++v33->fields._version;
          if ( !items )
            break;
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              v27,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v33->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v27, v34, v35, v38, v39, v40, v41);
          }
        }
      }
      LODWORD(v36) = QuestIdListByGroupId->max_length;
      if ( (__int64)++v37 >= (int)v36 )
        goto LABEL_21;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v27);
  }
LABEL_21:
  if ( !day )
  {
    Instance = EventRaidMaster___c_TypeInfo;
    if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v27);
      Instance = EventRaidMaster___c_TypeInfo;
    }
    v46 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 8LL);
    if ( !v46 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v27);
        Instance = EventRaidMaster___c_TypeInfo;
      }
      v47 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v46 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestReleaseEntity__TypeInfo, v27, v34, v35);
      System_Comparison_object____ctor(v46, v47, Method_EventRaidMaster___c__GetQuestReleaseEntityList_b__5_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Comparison_QuestReleaseEntity__o *)v46;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)v46, v49, v50, v51, v52, v53, v54);
    }
    if ( !v33 )
      goto LABEL_31;
    System_Collections_Generic_List_object___Sort_56244000(
      v33,
      v46,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Sort__);
  }
  return (System_Collections_Generic_List_QuestReleaseEntity__o *)v33;
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

  if ( (byte_4B162C5 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_List_int__ToArray__,
                                  *(_QWORD *)&eventId,
                                  *(_QWORD *)&day);
    byte_4B162C5 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 27, day, v4);
  if ( !QuestIdList )
    sub_1BCAA3C(0LL, v8);
  return System_Collections_Generic_List_int___ToArray(
           QuestIdList,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v8; // x2
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v10; // x1

  if ( (byte_4B162C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId, *(_QWORD *)&day);
    this = (EventRaidMaster_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8);
    byte_4B162C6 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 28, day, v4);
  if ( !QuestIdList )
    sub_1BCAA3C(0LL, v10);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4B162C3 & 1) == 0 )
  {
    this = (EventRaidMaster_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__,
                                  *(_QWORD *)&eventId,
                                  *(_QWORD *)&day);
    byte_4B162C3 = 1;
  }
  QuestReleaseEntityList = EventRaidMaster__GetQuestReleaseEntityList(this, eventId, 28, day, v4);
  if ( !QuestReleaseEntityList )
    sub_1BCAA3C(0LL, v8);
  return (QuestReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       (System_Collections_Generic_List_object__o *)QuestReleaseEntityList,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetRaidGorupMax(EventRaidMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  EventRaidEntity_c *v15; // x1
  System_Collections_Generic_IEnumerator_T__o *v16; // x19
  int monitor; // w21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B162CE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&EventRaidEntity_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    byte_4B162CE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v16 = Enumerator;
  monitor = 0x80000000;
  while ( 1 )
  {
    if ( !v16 )
      goto LABEL_34;
    klass = v16->klass;
    v19 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v16,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = v16->klass;
    v23 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_17;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_17:
      v25 = sub_1C1C7C0(v16, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                  v16,
                                                                  *(_QWORD *)(v25 + 8));
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v26);
    v15 = EventRaidEntity_TypeInfo;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Enumerator->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (EventRaidEntity_c *)Enumerator->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRaidEntity_TypeInfo )
    {
      sub_1BCACFC(Enumerator);
LABEL_34:
      sub_1BCAA3C(Enumerator, v15);
    }
    if ( LODWORD(Enumerator[1].klass) == eventId && monitor < SLODWORD(Enumerator[1].monitor) )
      monitor = (int)Enumerator[1].monitor;
  }
  v28 = v16->klass;
  v29 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1C1C7C0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
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
  __int64 v8; // x2
  System_Collections_Generic_List_int__o *QuestIdList; // x0
  __int64 v10; // x1

  if ( (byte_4B162C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&eventId, *(_QWORD *)&groupIndex);
    this = (EventRaidMaster_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8);
    byte_4B162C7 = 1;
  }
  QuestIdList = EventRaidMaster__GetQuestIdList(this, eventId, 71, groupIndex, v4);
  if ( !QuestIdList )
    sub_1BCAA3C(0LL, v10);
  if ( QuestIdList->fields._size < 1 )
    return 0;
  else
    return System_Collections_Generic_List_int___get_Item(
             QuestIdList,
             0,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaidMaster__GetStartRaidGroupIndex(
        EventRaidMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EventRaidEntity_array *Instance; // x0
  __int64 v10; // x1
  System_Object_array *Entitys_object; // x20
  const MethodInfo *v12; // x2
  int max_length; // w9
  int v14; // w10
  int32_t groupIndex; // w8
  Il2CppObject *v16; // x11
  int v17; // w12
  int v18; // w13
  EventRaidEntity_o *v19; // x14

  if ( (byte_4B162D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_TotalEventRaidEntity___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B162D4 = 1;
  }
  Instance = (EventRaidEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (EventRaidEntity_array *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  if ( !Instance )
    goto LABEL_25;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_TotalEventRaidEntity___);
  Instance = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, v12);
  if ( !Entitys_object )
    goto LABEL_25;
  max_length = Entitys_object->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    groupIndex = 0;
    while ( 1 )
    {
      if ( v14 == max_length )
LABEL_26:
        sub_1BCAA44(Instance, v10);
      v16 = Entitys_object->m_Items[v14];
      if ( !v16 )
        break;
      if ( LODWORD(v16[1].klass) == eventId )
      {
        if ( !Instance )
          break;
        v17 = Instance->max_length;
        if ( v17 >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v17 == v18 )
              goto LABEL_26;
            v19 = Instance->m_Items[v18];
            if ( !v19 )
              goto LABEL_25;
            if ( HIDWORD(v16[1].klass) == v19->fields.day )
              break;
            if ( v17 == ++v18 )
              goto LABEL_21;
          }
          if ( groupIndex < v19->fields.groupIndex )
            groupIndex = v19->fields.groupIndex;
        }
      }
LABEL_21:
      if ( ++v14 == max_length )
        return groupIndex;
    }
LABEL_25:
    sub_1BCAA3C(Instance, v10);
  }
  return 0;
}


int32_t __fastcall EventRaidMaster__GetSubGroupMax(
        EventRaidMaster_o *this,
        EventRaidEntity_o *EventRaidEntityBase,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v16; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  _DWORD *v25; // x0
  __int64 v26; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B162D0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      EventRaidEntityBase,
      method);
    sub_1BCA7E0(&EventRaidEntity_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    byte_4B162D0 = 1;
  }
  if ( !EventRaidEntityBase )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, EventRaidEntityBase);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v14);
  v16 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_18:
      v24 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                      Enumerator,
                      *(_QWORD *)(v24 + 8));
    if ( !v25 )
      goto LABEL_38;
    methodPtr_low = LOBYTE(EventRaidEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(EventRaidEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != EventRaidEntity_TypeInfo )
    {
      sub_1BCACFC(v25);
LABEL_38:
      sub_1BCAA3C(v25, v26);
    }
    if ( v25[4] == EventRaidEntityBase->fields.eventId
      && v25[6] == EventRaidEntityBase->fields.groupIndex
      && v25[7] == EventRaidEntityBase->fields.subGroupIndex )
    {
      ++v16;
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_32:
    v31 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v16;
}


int32_t __fastcall EventRaidMaster__GetSubGroupNow(
        EventRaidMaster_o *this,
        EventRaidEntity_o *eventRaidEntityBase,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  EventRaidEntity_array *EventRaidEntityArray; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  EventRaidMaster___c_c *v16; // x8
  System_Object_array *v17; // x20
  System_Comparison_T__o *_9__18_0; // x21
  Il2CppObject *v19; // x22
  struct EventRaidMaster___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x0
  __int64 v28; // x1
  int max_length; // w8
  int v30; // w9
  Il2CppObject *v31; // x10

  if ( (byte_4B162CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_EventRaidEntity___, eventRaidEntityBase, method);
    sub_1BCA7E0(&System_Comparison_EventRaidEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, v8, v9);
    sub_1BCA7E0(&EventRaidMaster___c_TypeInfo, v10, v11);
    byte_4B162CF = 1;
  }
  if ( eventRaidEntityBase )
  {
    EventRaidEntityArray = EventRaidMaster__GetEventRaidEntityArray(
                             this,
                             eventRaidEntityBase->fields.eventId,
                             eventRaidEntityBase->fields.groupIndex,
                             v3);
    v16 = EventRaidMaster___c_TypeInfo;
    v17 = (System_Object_array *)EventRaidEntityArray;
    if ( !EventRaidMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRaidMaster___c_TypeInfo, v13);
      v16 = EventRaidMaster___c_TypeInfo;
    }
    _9__18_0 = (System_Comparison_T__o *)v16->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, v13);
        v16 = EventRaidMaster___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__18_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventRaidEntity__TypeInfo, v13, v14, v15);
      System_Comparison_object____ctor(_9__18_0, v19, Method_EventRaidMaster___c__GetSubGroupNow_b__18_0__, 0LL);
      static_fields = EventRaidMaster___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = (struct System_Comparison_EventRaidEntity__o *)_9__18_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__18_0,
        (int64_t)_9__18_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    System_Array__Sort_object__49153980(
      v17,
      _9__18_0,
      (const MethodInfo_2EE07BC *)Method_System_Array_Sort_EventRaidEntity___);
    if ( !v17 )
      goto LABEL_22;
    max_length = v17->max_length;
    if ( max_length >= 1 )
    {
      v30 = 0;
      v27 = 0LL;
      while ( 1 )
      {
        if ( max_length == v30 )
          sub_1BCAA44(v27, v28);
        v31 = v17->m_Items[v30];
        if ( !v31 )
          break;
        if ( HIDWORD(v31[1].monitor) == eventRaidEntityBase->fields.subGroupIndex )
        {
          if ( v31[5].klass == (Il2CppClass *)eventRaidEntityBase->fields.startedAt )
            return v27;
          v27 = (unsigned int)(v27 + 1);
        }
        if ( max_length == ++v30 )
          goto LABEL_19;
      }
LABEL_22:
      sub_1BCAA3C(v27, v28);
    }
  }
LABEL_19:
  LODWORD(v27) = 0;
  return v27;
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
  bool v9; // w22
  int v10; // w23
  EventRaidEntity_o *v11; // x8
  int64_t day; // x21

  if ( (byte_4B162CD & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B162CD = 1;
  }
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(this, eventId, method);
  if ( !EventRaidEntityArrayFromEventId )
    goto LABEL_14;
  max_length = EventRaidEntityArrayFromEventId->max_length;
  v8 = EventRaidEntityArrayFromEventId;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1BCAA44(EventRaidEntityArrayFromEventId, v6);
      v11 = v8->m_Items[v10];
      if ( !v11 )
        break;
      day = v11->fields.day;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
      EventRaidEntityArrayFromEventId = (EventRaidEntity_array *)CondType__IsOpen(27, eventId, day, 0, 0LL, 0LL);
      if ( ((unsigned __int8)EventRaidEntityArrayFromEventId & 1) == 0 )
      {
        max_length = v8->max_length;
        v9 = ++v10 < max_length;
        if ( v10 < max_length )
          continue;
      }
      return v9;
    }
LABEL_14:
    sub_1BCAA3C(EventRaidEntityArrayFromEventId, v6);
  }
  return v9;
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
  __int64 v10; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B162C1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&EventRaidEntity_TypeInfo, v9, v10);
    byte_4B162C1 = 1;
  }
  if ( !EventRaidEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRaidEntity_TypeInfo, entity);
  PK = (Il2CppObject *)EventRaidEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventRaidMaster__EventRaidEntity__string__TryGetEntity__);
}


void __fastcall EventRaidMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B162D6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRaidMaster___c_TypeInfo, v1, v2);
    byte_4B162D6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventRaidMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventRaidMaster___c_TypeInfo->static_fields->__9 = (struct EventRaidMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRaidMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
  return (_DWORD)this - QuestReleaseEntity__getValueInt(b, 0LL);
}


int32_t __fastcall EventRaidMaster___c___GetSubGroupNow_b__18_0(
        EventRaidMaster___c_o *this,
        EventRaidEntity_o *a,
        EventRaidEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return a->fields.eventId == this->fields.eventId && a->fields.groupIndex == this->fields.groupIndex;
}