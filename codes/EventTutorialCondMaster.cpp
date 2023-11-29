void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9BF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__, method);
    byte_40F9BF3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    166,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTutorialCondEntity_o *__fastcall EventTutorialCondMaster__GetEntity(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F9BF1 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_40F9BF1 = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialCondEntity__o *__fastcall EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x0
  __int64 v28; // x10
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_40F9BF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&evId);
    sub_B16FFC(&EventTutorialCondEntity_TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo, v15);
    byte_40F9BF6 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo,
                                                                                                  *(_QWORD *)&evId,
                                                                                                  *(_QWORD *)&flgType,
                                                                                                  *(_QWORD *)&number,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
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
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v26 + 8));
    if ( v27 )
    {
      v28 = *(&EventTutorialCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (EventTutorialCondEntity_c *)v27->klass->_2.typeHierarchy[v28 - 1] != EventTutorialCondEntity_TypeInfo )
      {
        sub_B173C8(v27);
LABEL_34:
        sub_B170D4();
      }
      if ( v27->fields.missionTargetId == evId
        && v27->fields.missionConditionDetailId == flgType
        && v27->fields.targetId == number )
      {
        if ( !v16 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          v27,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
      }
    }
  }
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
        goto LABEL_30;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_30:
    v32 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__TryGetEntity(
        EventTutorialCondMaster_o *this,
        EventTutorialCondEntity_o **entity,
        int32_t eventId,
        int32_t flagType,
        int32_t num,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F9BF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__, entity);
    byte_40F9BF2 = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__isEnableCondition(
        EventTutorialCondMaster_o *this,
        int32_t eventId,
        int32_t condType,
        System_Int32_array *condIds,
        int32_t condValue,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WebViewManager_o *Instance; // x0
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v17; // x0
  __int64 v18; // x8
  EventTutorialCondMaster_o *v19; // x22
  unsigned __int64 v20; // x24
  int32_t *v21; // x23
  EventTutorialCondMaster_o *v22; // x23
  unsigned __int64 v23; // x27
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v25; // x8
  unsigned __int64 v26; // x23
  int64_t v27; // x20
  int32_t v28; // w22
  TotalEventRaidEntity_o *v30; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F9BF5 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    this = (EventTutorialCondMaster_o *)sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v14);
    byte_40F9BF5 = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
      v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v17 )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v17,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          v18 = *(_QWORD *)&condIds->max_length;
          if ( (int)v18 >= 1 )
          {
            v19 = this;
            v20 = 0LL;
            while ( 1 )
            {
              if ( v20 >= (unsigned int)v18 )
                goto LABEL_46;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_45;
              v21 = &condIds->m_Items[v20 + 1];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    MasterData_WarQuestSelectionMaster,
                                                    &entity,
                                                    eventId,
                                                    *v21,
                                                    0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v20 >= condIds->max_length )
                  goto LABEL_46;
                if ( !v19 )
                  goto LABEL_45;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v19,
                                                      &v30,
                                                      eventId,
                                                      *v21,
                                                      0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v30 )
                    goto LABEL_45;
                  if ( entity->fields.maxHp > v30->fields.totalDamage )
                  {
                    if ( v20 >= condIds->max_length )
                      goto LABEL_46;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          MasterData_WarQuestSelectionMaster,
                                                          eventId,
                                                          *v21,
                                                          0LL);
                    if ( !this )
                      goto LABEL_45;
                    v22 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_31:
              LODWORD(v18) = condIds->max_length;
              if ( (__int64)++v20 >= (int)v18 )
                return 0;
            }
            v23 = 0LL;
            while ( 1 )
            {
              if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
              }
              this = (EventTutorialCondMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v23 >= LODWORD(v22->fields._MasterName_k__BackingField) )
                break;
              if ( !this )
                goto LABEL_45;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *((_DWORD *)&v22->fields.list + v23),
                                                    0LL);
              if ( !this )
                goto LABEL_45;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_45;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields.m_firstChar == 1 )
                return 1;
              if ( (__int64)++v23 >= SLODWORD(v22->fields._MasterName_k__BackingField) )
                goto LABEL_31;
            }
LABEL_46:
            sub_B17100(this, *(_QWORD *)&eventId, *(_QWORD *)&condType);
            sub_B170A0();
          }
          return 0;
        }
      }
    }
LABEL_45:
    sub_B170D4();
  }
  if ( !condIds )
    goto LABEL_45;
  v25 = *(_QWORD *)&condIds->max_length;
  if ( (int)v25 < 1 )
    return 0;
  v26 = 0LL;
  v27 = condValue;
  while ( 1 )
  {
    if ( v26 >= (unsigned int)v25 )
      goto LABEL_46;
    v28 = condIds->m_Items[v26 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v28, v27, 0, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v25) = condIds->max_length;
    if ( (__int64)++v26 >= (int)v25 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTutorialCondMaster__isEnableExtCondition(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        EventTutorialEntity_o *baseEntity,
        const MethodInfo *method)
{
  EventTutorialCondMaster_o *v10; // x23
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
  __int64 v24; // x1
  bool isEnableCondition; // w22
  const MethodInfo *v26; // x4
  System_Collections_Generic_List_EventTutorialCondEntity__o *EventTutorialCondEntity; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v32; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v33; // x19
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x5
  Il2CppObject *current; // x21
  bool v37; // w20
  bool v38; // w0
  int32_t klass; // w21
  bool Item; // w0
  int32_t v41; // w8
  int v42; // w19
  int v43; // w9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+0h] [xbp-B0h] BYREF
  int v46; // [xsp+2Ch] [xbp-84h]
  __int128 v47; // [xsp+30h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v48; // [xsp+40h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+50h] [xbp-60h] BYREF

  v10 = this;
  if ( (byte_40F9BF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&evId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__, v23);
    this = (EventTutorialCondMaster_o *)sub_B16FFC(
                                          &Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__,
                                          v24);
    byte_40F9BF4 = 1;
  }
  v48 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v49, 0, sizeof(v49));
  v47 = 0u;
  v46 = 0;
  if ( !baseEntity )
    goto LABEL_26;
  isEnableCondition = EventTutorialCondMaster__isEnableCondition(
                        this,
                        baseEntity->fields.eventId,
                        baseEntity->fields.condType,
                        baseEntity->fields.condIds,
                        baseEntity->fields.condValue,
                        method);
  EventTutorialCondEntity = EventTutorialCondMaster__GetEventTutorialCondEntity(v10, evId, flgType, number, v26);
  if ( !EventTutorialCondEntity )
    goto LABEL_26;
  v32 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTutorialCondEntity;
  if ( EventTutorialCondEntity->fields._size )
  {
    v33 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                  System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                  v28,
                                                                  v29,
                                                                  v30,
                                                                  v31);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v33,
      (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    if ( v33 )
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v33,
        0,
        isEnableCondition,
        (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v32,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
      v49.fields.current = v45.fields.current.fields.key;
      *(_OWORD *)&v49.fields.list = *(_OWORD *)&v45.fields.dictionary;
      while ( 1 )
      {
        v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v49,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
        if ( !v34 )
          break;
        current = v49.fields.current;
        if ( !v49.fields.current )
          sub_B170D4();
        v37 = EventTutorialCondMaster__isEnableCondition(
                (EventTutorialCondMaster_o *)v34,
                (int32_t)v49.fields.current[1].klass,
                HIDWORD(v49.fields.current[2].klass),
                (System_Int32_array *)v49.fields.current[2].monitor,
                0,
                v35);
        v38 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v33,
                (int32_t)current[2].klass,
                (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        klass = (int32_t)current[2].klass;
        if ( v38 )
        {
          Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
                   v33,
                   klass,
                   (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v33,
            klass,
            v37 && Item,
            (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v33,
            klass,
            v37,
            (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      v45.fields.getEnumeratorRetType = 207;
      v46 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v49,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
      v46 = 0;
      System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
        &v45,
        v33,
        (const MethodInfo_2DD5C0C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
      v47 = *(_OWORD *)&v45.fields.dictionary;
      v48 = v45.fields.current;
      while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v47,
                (const MethodInfo_2724684 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
      {
        if ( BYTE4(v48.fields.key) )
        {
          isEnableCondition = 1;
          v41 = 267;
          goto LABEL_18;
        }
      }
      isEnableCondition = 0;
      v41 = 265;
LABEL_18:
      v45.fields.getEnumeratorRetType = v41;
      v42 = ++v46;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v47,
        (const MethodInfo_27247D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      if ( !v42 )
        return 0;
      v43 = *((_DWORD *)&v45.fields.current.fields.value + v42 + 1);
      if ( v43 == 265 )
      {
        isEnableCondition = 0;
      }
      else if ( v43 != 267 )
      {
        return 0;
      }
      v46 = v42 - 1;
      return isEnableCondition;
    }
LABEL_26:
    sub_B170D4();
  }
  return isEnableCondition;
}