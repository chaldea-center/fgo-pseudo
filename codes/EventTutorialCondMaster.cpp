void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418826E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__, method);
    byte_418826E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    166,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
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

  if ( (byte_418826C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418826C = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
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
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x0
  EventTutorialCondEntity_c *v32; // x1
  __int64 v33; // x10
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_4188271 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&evId);
    sub_B2C35C(&EventTutorialCondEntity_TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo, v15);
    byte_4188271 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
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
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
    }
    v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v30 + 8));
    if ( v31 )
    {
      v32 = EventTutorialCondEntity_TypeInfo;
      v33 = *(&EventTutorialCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v33
        || (EventTutorialCondEntity_c *)v31->klass->_2.typeHierarchy[v33 - 1] != EventTutorialCondEntity_TypeInfo )
      {
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v31);
LABEL_34:
        sub_B2C434(v31, v32);
      }
      if ( v31->fields.missionTargetId == evId
        && v31->fields.missionConditionDetailId == flgType
        && v31->fields.targetId == number )
      {
        if ( !v16 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          v31,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
      }
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_30:
    v37 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
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

  if ( (byte_418826D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__, entity);
    byte_418826D = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
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
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v16; // x8
  EventTutorialCondMaster_o *v17; // x22
  unsigned __int64 v18; // x24
  int32_t *v19; // x23
  EventTutorialCondMaster_o *v20; // x23
  unsigned __int64 v21; // x27
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v23; // x8
  unsigned __int64 v24; // x23
  int64_t v25; // x20
  int32_t v26; // w22
  __int64 v28; // x0
  TotalEventRaidEntity_o *v29; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4188270 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRaidMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v13);
    this = (EventTutorialCondMaster_o *)sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v14);
    byte_4188270 = 1;
  }
  v29 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          v16 = *(_QWORD *)&condIds->max_length;
          if ( (int)v16 >= 1 )
          {
            v17 = this;
            v18 = 0LL;
            while ( 1 )
            {
              if ( v18 >= (unsigned int)v16 )
                goto LABEL_46;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_45;
              v19 = &condIds->m_Items[v18 + 1];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    MasterData_WarQuestSelectionMaster,
                                                    &entity,
                                                    eventId,
                                                    *v19,
                                                    0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v18 >= condIds->max_length )
                  goto LABEL_46;
                if ( !v17 )
                  goto LABEL_45;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v17,
                                                      &v29,
                                                      eventId,
                                                      *v19,
                                                      0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v29 )
                    goto LABEL_45;
                  if ( entity->fields.maxHp > v29->fields.totalDamage )
                  {
                    if ( v18 >= condIds->max_length )
                      goto LABEL_46;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          MasterData_WarQuestSelectionMaster,
                                                          eventId,
                                                          *v19,
                                                          0LL);
                    if ( !this )
                      goto LABEL_45;
                    v20 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_31:
              LODWORD(v16) = condIds->max_length;
              if ( (__int64)++v18 >= (int)v16 )
                return 0;
            }
            v21 = 0LL;
            while ( 1 )
            {
              if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
              }
              this = (EventTutorialCondMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v21 >= LODWORD(v20->fields._MasterName_k__BackingField) )
                break;
              if ( !this )
                goto LABEL_45;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *((_DWORD *)&v20->fields.list + v21),
                                                    0LL);
              if ( !this )
                goto LABEL_45;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_45;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields.m_firstChar == 1 )
                return 1;
              if ( (__int64)++v21 >= SLODWORD(v20->fields._MasterName_k__BackingField) )
                goto LABEL_31;
            }
LABEL_46:
            v28 = sub_B2C460(this);
            sub_B2C400(v28, 0LL);
          }
          return 0;
        }
      }
    }
LABEL_45:
    sub_B2C434(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_45;
  v23 = *(_QWORD *)&condIds->max_length;
  if ( (int)v23 < 1 )
    return 0;
  v24 = 0LL;
  v25 = condValue;
  while ( 1 )
  {
    if ( v24 >= (unsigned int)v23 )
      goto LABEL_46;
    v26 = condIds->m_Items[v24 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v26, v25, 0, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v23) = condIds->max_length;
    if ( (__int64)++v24 >= (int)v23 )
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
  EventTutorialCondMaster_o *v27; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v28; // x19
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x5
  Il2CppObject *current; // x21
  bool v33; // w20
  bool v34; // w0
  int32_t klass; // w21
  bool Item; // w0
  int32_t v37; // w8
  int v38; // w19
  int v39; // w9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+0h] [xbp-B0h] BYREF
  int v42; // [xsp+2Ch] [xbp-84h]
  __int128 v43; // [xsp+30h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v44; // [xsp+40h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+50h] [xbp-60h] BYREF

  v10 = this;
  if ( (byte_418826F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, *(_QWORD *)&evId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__, v23);
    this = (EventTutorialCondMaster_o *)sub_B2C35C(
                                          &Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__,
                                          v24);
    byte_418826F = 1;
  }
  v44 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v45, 0, sizeof(v45));
  v43 = 0u;
  v42 = 0;
  if ( !baseEntity )
    goto LABEL_26;
  isEnableCondition = EventTutorialCondMaster__isEnableCondition(
                        this,
                        baseEntity->fields.eventId,
                        baseEntity->fields.condType,
                        baseEntity->fields.condIds,
                        baseEntity->fields.condValue,
                        method);
  this = (EventTutorialCondMaster_o *)EventTutorialCondMaster__GetEventTutorialCondEntity(
                                        v10,
                                        evId,
                                        flgType,
                                        number,
                                        v26);
  if ( !this )
    goto LABEL_26;
  v27 = this;
  if ( LODWORD(this->fields._MasterName_k__BackingField) )
  {
    v28 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v28,
      (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    if ( v28 )
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v28,
        0,
        isEnableCondition,
        (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v41,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v27,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
      v45.fields.current = v41.fields.current.fields.key;
      *(_OWORD *)&v45.fields.list = *(_OWORD *)&v41.fields.dictionary;
      while ( 1 )
      {
        v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v45,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
        if ( !v29 )
          break;
        current = v45.fields.current;
        if ( !v45.fields.current )
          sub_B2C434(v29, v30);
        v33 = EventTutorialCondMaster__isEnableCondition(
                (EventTutorialCondMaster_o *)v29,
                (int32_t)v45.fields.current[1].klass,
                HIDWORD(v45.fields.current[2].klass),
                (System_Int32_array *)v45.fields.current[2].monitor,
                0,
                v31);
        v34 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v28,
                (int32_t)current[2].klass,
                (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        klass = (int32_t)current[2].klass;
        if ( v34 )
        {
          Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
                   v28,
                   klass,
                   (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v28,
            klass,
            v33 && Item,
            (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v28,
            klass,
            v33,
            (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      v41.fields.getEnumeratorRetType = 207;
      v42 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v45,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
      v42 = 0;
      System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
        &v41,
        v28,
        (const MethodInfo_2E1D198 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
      v43 = *(_OWORD *)&v41.fields.dictionary;
      v44 = v41.fields.current;
      while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v43,
                (const MethodInfo_2566B54 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
      {
        if ( BYTE4(v44.fields.key) )
        {
          isEnableCondition = 1;
          v37 = 267;
          goto LABEL_18;
        }
      }
      isEnableCondition = 0;
      v37 = 265;
LABEL_18:
      v41.fields.getEnumeratorRetType = v37;
      v38 = ++v42;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v43,
        (const MethodInfo_2566CA4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      if ( !v38 )
        return 0;
      v39 = *((_DWORD *)&v41.fields.current.fields.value + v38 + 1);
      if ( v39 == 265 )
      {
        isEnableCondition = 0;
      }
      else if ( v39 != 267 )
      {
        return 0;
      }
      v42 = v38 - 1;
      return isEnableCondition;
    }
LABEL_26:
    sub_B2C434(this, *(_QWORD *)&evId);
  }
  return isEnableCondition;
}