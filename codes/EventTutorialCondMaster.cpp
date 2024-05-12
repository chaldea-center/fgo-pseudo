void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A6B5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
    byte_438A6B5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    167,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
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

  if ( (byte_438A6B3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
    byte_438A6B3 = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventTutorialCondEntity__o *__fastcall EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  EventTutorialCondEntity_c *v23; // x1
  __int64 v24; // x10
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0

  if ( (byte_438A6B8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&EventTutorialCondEntity_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
    byte_438A6B8 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( v22 )
    {
      v23 = EventTutorialCondEntity_TypeInfo;
      v24 = *(&EventTutorialCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (EventTutorialCondEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != EventTutorialCondEntity_TypeInfo )
      {
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v22);
LABEL_34:
        sub_B7769C(v22, v23);
      }
      if ( v22->fields.missionTargetId == evId
        && v22->fields.missionConditionDetailId == flgType
        && v22->fields.targetId == number )
      {
        if ( !v9 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v22,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
      }
    }
  }
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
        goto LABEL_30;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_30:
    v28 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v9;
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

  if ( (byte_438A6B4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
    byte_438A6B4 = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
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
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v11; // x8
  EventTutorialCondMaster_o *v12; // x22
  unsigned __int64 v13; // x24
  int32_t *v14; // x23
  EventTutorialCondMaster_o *v15; // x23
  unsigned __int64 v16; // x27
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v18; // x8
  unsigned __int64 v19; // x23
  int64_t v20; // x20
  int32_t v21; // w22
  __int64 v23; // x0
  TotalEventRaidEntity_o *v24; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438A6B7 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (EventTutorialCondMaster_o *)sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    byte_438A6B7 = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          v11 = *(_QWORD *)&condIds->max_length;
          if ( (int)v11 >= 1 )
          {
            v12 = this;
            v13 = 0LL;
            while ( 1 )
            {
              if ( v13 >= (unsigned int)v11 )
                goto LABEL_46;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_45;
              v14 = &condIds->m_Items[v13 + 1];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    MasterData_WarQuestSelectionMaster,
                                                    &entity,
                                                    eventId,
                                                    *v14,
                                                    0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v13 >= condIds->max_length )
                  goto LABEL_46;
                if ( !v12 )
                  goto LABEL_45;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v12,
                                                      &v24,
                                                      eventId,
                                                      *v14,
                                                      0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v24 )
                    goto LABEL_45;
                  if ( entity->fields.maxHp > v24->fields.totalDamage )
                  {
                    if ( v13 >= condIds->max_length )
                      goto LABEL_46;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          MasterData_WarQuestSelectionMaster,
                                                          eventId,
                                                          *v14,
                                                          0LL);
                    if ( !this )
                      goto LABEL_45;
                    v15 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_31:
              LODWORD(v11) = condIds->max_length;
              if ( (__int64)++v13 >= (int)v11 )
                return 0;
            }
            v16 = 0LL;
            while ( 1 )
            {
              if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
              }
              this = (EventTutorialCondMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v16 >= LODWORD(v15->fields._MasterName_k__BackingField) )
                break;
              if ( !this )
                goto LABEL_45;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *((_DWORD *)&v15->fields.list + v16),
                                                    0LL);
              if ( !this )
                goto LABEL_45;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_45;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields.m_firstChar == 1 )
                return 1;
              if ( (__int64)++v16 >= SLODWORD(v15->fields._MasterName_k__BackingField) )
                goto LABEL_31;
            }
LABEL_46:
            v23 = sub_B776C8(this);
            sub_B77668(v23, 0LL);
          }
          return 0;
        }
      }
    }
LABEL_45:
    sub_B7769C(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_45;
  v18 = *(_QWORD *)&condIds->max_length;
  if ( (int)v18 < 1 )
    return 0;
  v19 = 0LL;
  v20 = condValue;
  while ( 1 )
  {
    if ( v19 >= (unsigned int)v18 )
      goto LABEL_46;
    v21 = condIds->m_Items[v19 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v21, v20, 0, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v18) = condIds->max_length;
    if ( (__int64)++v19 >= (int)v18 )
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
  bool isEnableCondition; // w22
  const MethodInfo *v12; // x4
  EventTutorialCondMaster_o *v13; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  Il2CppObject *current; // x21
  bool v19; // w20
  bool v20; // w0
  int32_t klass; // w21
  bool Item; // w0
  int32_t v23; // w8
  int v24; // w19
  int v25; // w9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+0h] [xbp-B0h] BYREF
  int v28; // [xsp+2Ch] [xbp-84h]
  __int128 v29; // [xsp+30h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v30; // [xsp+40h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+50h] [xbp-60h] BYREF

  v10 = this;
  if ( (byte_438A6B6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
    this = (EventTutorialCondMaster_o *)sub_B775C4(&Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__);
    byte_438A6B6 = 1;
  }
  v30 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v31, 0, sizeof(v31));
  v29 = 0u;
  v28 = 0;
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
                                        v12);
  if ( !this )
    goto LABEL_26;
  v13 = this;
  if ( LODWORD(this->fields._MasterName_k__BackingField) )
  {
    v14 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B77694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v14,
      (const MethodInfo_2F74144 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    if ( v14 )
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v14,
        0,
        isEnableCondition,
        (const MethodInfo_2F74CC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
      v31.fields.current = v27.fields.current.fields.key;
      *(_OWORD *)&v31.fields.list = *(_OWORD *)&v27.fields.dictionary;
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v31,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
        if ( !v15 )
          break;
        current = v31.fields.current;
        if ( !v31.fields.current )
          sub_B7769C(v15, v16);
        v19 = EventTutorialCondMaster__isEnableCondition(
                (EventTutorialCondMaster_o *)v15,
                (int32_t)v31.fields.current[1].klass,
                HIDWORD(v31.fields.current[2].klass),
                (System_Int32_array *)v31.fields.current[2].monitor,
                0,
                v17);
        v20 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v14,
                (int32_t)current[2].klass,
                (const MethodInfo_2F74F68 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        klass = (int32_t)current[2].klass;
        if ( v20 )
        {
          Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
                   v14,
                   klass,
                   (const MethodInfo_2F74C30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v14,
            klass,
            v19 && Item,
            (const MethodInfo_2F74CC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v14,
            klass,
            v19,
            (const MethodInfo_2F74CC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      v27.fields.getEnumeratorRetType = 207;
      v28 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v31,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
      v28 = 0;
      System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
        &v27,
        v14,
        (const MethodInfo_2F75280 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
      v29 = *(_OWORD *)&v27.fields.dictionary;
      v30 = v27.fields.current;
      while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v29,
                (const MethodInfo_288442C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
      {
        if ( BYTE4(v30.fields.key) )
        {
          isEnableCondition = 1;
          v23 = 267;
          goto LABEL_18;
        }
      }
      isEnableCondition = 0;
      v23 = 265;
LABEL_18:
      v27.fields.getEnumeratorRetType = v23;
      v24 = ++v28;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v29,
        (const MethodInfo_288457C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      if ( !v24 )
        return 0;
      v25 = *((_DWORD *)&v27.fields.current.fields.value + v24 + 1);
      if ( v25 == 265 )
      {
        isEnableCondition = 0;
      }
      else if ( v25 != 267 )
      {
        return 0;
      }
      v28 = v24 - 1;
      return isEnableCondition;
    }
LABEL_26:
    sub_B7769C(this, *(_QWORD *)&evId);
  }
  return isEnableCondition;
}