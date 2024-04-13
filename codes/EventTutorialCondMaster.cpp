void __fastcall EventTutorialCondMaster___ctor(EventTutorialCondMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84B3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E84B3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    167,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string___ctor__);
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

  if ( (byte_42E84B1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__,
      eventId,
      flagType,
      *(_QWORD *)&num);
    byte_42E84B1 = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&idx);
  return (EventTutorialCondEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventTutorialCondEntity__o *__fastcall EventTutorialCondMaster__GetEventTutorialCondEntity(
        EventTutorialCondMaster_o *this,
        int32_t evId,
        int32_t flgType,
        int32_t number,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x0
  EventTutorialCondEntity_c *v46; // x1
  __int64 v47; // x10
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0

  if ( (byte_42E84B6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      evId,
      flgType,
      *(_QWORD *)&number);
    sub_B5D5C4(&EventTutorialCondEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo, v27, v28, v29);
    byte_42E84B6 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTutorialCondEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTutorialCondEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v31);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v44 + 8));
    if ( v45 )
    {
      v46 = EventTutorialCondEntity_TypeInfo;
      v47 = *(&EventTutorialCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v47
        || (EventTutorialCondEntity_c *)v45->klass->_2.typeHierarchy[v47 - 1] != EventTutorialCondEntity_TypeInfo )
      {
        v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v45);
LABEL_34:
        sub_B5D69C(v45, v46);
      }
      if ( v45->fields.missionTargetId == evId
        && v45->fields.missionConditionDetailId == flgType
        && v45->fields.targetId == number )
      {
        if ( !v30 )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          v45,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTutorialCondEntity__Add__);
      }
    }
  }
  v48 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_30:
    v51 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
  return (System_Collections_Generic_List_EventTutorialCondEntity__o *)v30;
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

  if ( (byte_42E84B2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&flagType);
    byte_42E84B2 = 1;
  }
  PK = EventTutorialCondEntity__CreatePK(eventId, flagType, num, idx, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventTutorialCondMaster__EventTutorialCondEntity__string__TryGetEntity__);
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
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v26; // x8
  EventTutorialCondMaster_o *v27; // x22
  unsigned __int64 v28; // x24
  int32_t *v29; // x23
  EventTutorialCondMaster_o *v30; // x23
  unsigned __int64 v31; // x27
  struct System_String_o *MasterName_k__BackingField; // x8
  __int64 v33; // x8
  unsigned __int64 v34; // x23
  int64_t v35; // x20
  int32_t v36; // w22
  __int64 v38; // x0
  TotalEventRaidEntity_o *v39; // [xsp+0h] [xbp-60h] BYREF
  EventRaidEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E84B5 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, eventId, condType, condIds);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v19, v20, v21);
    this = (EventTutorialCondMaster_o *)sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v22, v23, v24);
    byte_42E84B5 = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  if ( condType == 27 )
  {
    this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
      this = (EventTutorialCondMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (EventTutorialCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
        if ( condIds )
        {
          v26 = *(_QWORD *)&condIds->max_length;
          if ( (int)v26 >= 1 )
          {
            v27 = this;
            v28 = 0LL;
            while ( 1 )
            {
              if ( v28 >= (unsigned int)v26 )
                goto LABEL_46;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_45;
              v29 = &condIds->m_Items[v28 + 1];
              this = (EventTutorialCondMaster_o *)EventRaidMaster__TryGetEntity(
                                                    MasterData_WarQuestSelectionMaster,
                                                    &entity,
                                                    eventId,
                                                    *v29,
                                                    0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( v28 >= condIds->max_length )
                  goto LABEL_46;
                if ( !v27 )
                  goto LABEL_45;
                this = (EventTutorialCondMaster_o *)TotalEventRaidMaster__TryGetEntity(
                                                      (TotalEventRaidMaster_o *)v27,
                                                      &v39,
                                                      eventId,
                                                      *v29,
                                                      0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !entity || !v39 )
                    goto LABEL_45;
                  if ( entity->fields.maxHp > v39->fields.totalDamage )
                  {
                    if ( v28 >= condIds->max_length )
                      goto LABEL_46;
                    this = (EventTutorialCondMaster_o *)EventRaidMaster__GetRaidAliveQuestIds(
                                                          MasterData_WarQuestSelectionMaster,
                                                          eventId,
                                                          *v29,
                                                          0LL);
                    if ( !this )
                      goto LABEL_45;
                    v30 = this;
                    if ( SLODWORD(this->fields._MasterName_k__BackingField) >= 1 )
                      break;
                  }
                }
              }
LABEL_31:
              LODWORD(v26) = condIds->max_length;
              if ( (__int64)++v28 >= (int)v26 )
                return 0;
            }
            v31 = 0LL;
            while ( 1 )
            {
              if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
              }
              this = (EventTutorialCondMaster_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( v31 >= LODWORD(v30->fields._MasterName_k__BackingField) )
                break;
              if ( !this )
                goto LABEL_45;
              this = (EventTutorialCondMaster_o *)QuestTree__GetQuestInfo(
                                                    (QuestTree_o *)this,
                                                    *((_DWORD *)&v30->fields.list + v31),
                                                    0LL);
              if ( !this )
                goto LABEL_45;
              MasterName_k__BackingField = this[1].fields._MasterName_k__BackingField;
              if ( !MasterName_k__BackingField )
                goto LABEL_45;
              if ( *(_DWORD *)&MasterName_k__BackingField->fields.m_firstChar == 1 )
                return 1;
              if ( (__int64)++v31 >= SLODWORD(v30->fields._MasterName_k__BackingField) )
                goto LABEL_31;
            }
LABEL_46:
            v38 = sub_B5D6C8(this);
            sub_B5D668(v38, 0LL);
          }
          return 0;
        }
      }
    }
LABEL_45:
    sub_B5D69C(this, *(_QWORD *)&eventId);
  }
  if ( !condIds )
    goto LABEL_45;
  v33 = *(_QWORD *)&condIds->max_length;
  if ( (int)v33 < 1 )
    return 0;
  v34 = 0LL;
  v35 = condValue;
  while ( 1 )
  {
    if ( v34 >= (unsigned int)v33 )
      goto LABEL_46;
    v36 = condIds->m_Items[v34 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventTutorialCondMaster_o *)CondType__IsOpen(condType, v36, v35, 0, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    LODWORD(v33) = condIds->max_length;
    if ( (__int64)++v34 >= (int)v33 )
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  bool isEnableCondition; // w22
  const MethodInfo *v54; // x4
  EventTutorialCondMaster_o *v55; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v56; // x19
  _BOOL8 v57; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x5
  Il2CppObject *current; // x21
  bool v61; // w20
  bool v62; // w0
  int32_t klass; // w21
  bool Item; // w0
  int32_t v65; // w8
  int v66; // w19
  int v67; // w9
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+0h] [xbp-B0h] BYREF
  int v70; // [xsp+2Ch] [xbp-84h]
  __int128 v71; // [xsp+30h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v72; // [xsp+40h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+50h] [xbp-60h] BYREF

  v10 = this;
  if ( (byte_42E84B4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__,
      evId,
      flgType,
      *(_QWORD *)&number);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__get_Current__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__, v47, v48, v49);
    this = (EventTutorialCondMaster_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_EventTutorialCondEntity__get_Count__,
                                          v50,
                                          v51,
                                          v52);
    byte_42E84B4 = 1;
  }
  v72 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v73, 0, sizeof(v73));
  v71 = 0u;
  v70 = 0;
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
                                        v54);
  if ( !this )
    goto LABEL_26;
  v55 = this;
  if ( LODWORD(this->fields._MasterName_k__BackingField) )
  {
    v56 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    System_Collections_Generic_Dictionary_int__bool____ctor(
      v56,
      (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    if ( v56 )
    {
      System_Collections_Generic_Dictionary_int__bool___set_Item(
        v56,
        0,
        isEnableCondition,
        (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v69,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v55,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventTutorialCondEntity__GetEnumerator__);
      v73.fields.current = v69.fields.current.fields.key;
      *(_OWORD *)&v73.fields.list = *(_OWORD *)&v69.fields.dictionary;
      while ( 1 )
      {
        v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v73,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__MoveNext__);
        if ( !v57 )
          break;
        current = v73.fields.current;
        if ( !v73.fields.current )
          sub_B5D69C(v57, v58);
        v61 = EventTutorialCondMaster__isEnableCondition(
                (EventTutorialCondMaster_o *)v57,
                (int32_t)v73.fields.current[1].klass,
                HIDWORD(v73.fields.current[2].klass),
                (System_Int32_array *)v73.fields.current[2].monitor,
                0,
                v59);
        v62 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                v56,
                (int32_t)current[2].klass,
                (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
        klass = (int32_t)current[2].klass;
        if ( v62 )
        {
          Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
                   v56,
                   klass,
                   (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v56,
            klass,
            v61 && Item,
            (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v56,
            klass,
            v61,
            (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      v69.fields.getEnumeratorRetType = 207;
      v70 = 1;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v73,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventTutorialCondEntity__Dispose__);
      v70 = 0;
      System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
        &v69,
        v56,
        (const MethodInfo_2F03AB0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
      v71 = *(_OWORD *)&v69.fields.dictionary;
      v72 = v69.fields.current;
      while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v71,
                (const MethodInfo_289DCBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
      {
        if ( BYTE4(v72.fields.key) )
        {
          isEnableCondition = 1;
          v65 = 267;
          goto LABEL_18;
        }
      }
      isEnableCondition = 0;
      v65 = 265;
LABEL_18:
      v69.fields.getEnumeratorRetType = v65;
      v66 = ++v70;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v71,
        (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      if ( !v66 )
        return 0;
      v67 = *((_DWORD *)&v69.fields.current.fields.value + v66 + 1);
      if ( v67 == 265 )
      {
        isEnableCondition = 0;
      }
      else if ( v67 != 267 )
      {
        return 0;
      }
      v70 = v66 - 1;
      return isEnableCondition;
    }
LABEL_26:
    sub_B5D69C(this, *(_QWORD *)&evId);
  }
  return isEnableCondition;
}