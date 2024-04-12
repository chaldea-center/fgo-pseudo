void __fastcall QuestPhaseMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct QuestPhaseMaster_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B48BE & 1) == 0 )
  {
    sub_B52984(&QuestPhaseMaster_TypeInfo);
    sub_B52984(&StringLiteral_20745/*"movieFolder"*/);
    sub_B52984(&StringLiteral_20746/*"moviePlayType"*/);
    byte_42B48BE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestPhaseMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_20745/*"movieFolder"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20745/*"movieFolder"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = QuestPhaseMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20746/*"moviePlayType"*/;
  v9->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_20746/*"moviePlayType"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->MOVIE_QUEST_SCRIPT_TYPE_STR, v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B48B1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
    byte_42B48B1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.isCached, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    70,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v4; // x0

  if ( (byte_42B48B2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
    byte_42B48B2 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v4 )
    sub_B52A5C(0LL, v3);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v4,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestPhaseMaster__GetBranchQuestIds(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
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
  QuestPhaseEntity_o *v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v23; // x22
  int v24; // w8
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-50h]

  if ( (byte_42B48BA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestPhaseEntity_TypeInfo);
    byte_42B48BA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
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
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                  Enumerator,
                                  *(_QWORD *)(v18 + 8));
    if ( !v19
      || (v21 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1), *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21)
      || (QuestPhaseEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_B52A5C(v19, v20);
    }
    if ( v19->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v19,
                                                                                v20);
      v23 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          v24 = 80;
          goto LABEL_26;
        }
      }
    }
  }
  v23 = 0LL;
  v24 = 78;
LABEL_26:
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
        goto LABEL_30;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_30:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 78 )
    return 0LL;
  return v23;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B48AF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
    byte_42B48AF = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestPhaseMaster__GetIndividualityList(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdArray,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *PrioredIndividualitiesWithMatched; // x21
  System_Collections_Generic_List_int__o *v8; // x19
  System_Collections_Generic_List_int__o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  int32_t *v17; // x0
  __int64 v18; // x1
  int32_t *v19; // x23
  __int64 v20; // x10
  _BOOL8 v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x25
  void *monitor; // x8
  unsigned __int64 v27; // x26
  int32_t v28; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  __int64 v39; // x0
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_42B48B5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestPhaseEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B48B5 = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !Instance )
    goto LABEL_52;
  PrioredIndividualitiesWithMatched = (System_Collections_Generic_Dictionary_TKey__TValue__o *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
                                                                                                 (QuestBehaviorMaster_o *)Instance,
                                                                                                 questIdArray,
                                                                                                 0LL);
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_35:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_12:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v17 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                       Enumerator,
                       *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17
      || (v20 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v20)
      || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v20 - 8) != QuestPhaseEntity_TypeInfo )
    {
      sub_B52A5C(v17, v18);
    }
    if ( !v9 )
      sub_B52A5C(v17, v18);
    v21 = System_Collections_Generic_List_int___Contains(
            v9,
            v17[4],
            (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v21 )
    {
      if ( !PrioredIndividualitiesWithMatched )
        sub_B52A5C(v21, v22);
      v23 = System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
              PrioredIndividualitiesWithMatched,
              v19[5] + 100 * v19[4],
              &value,
              (const MethodInfo_2F44E90 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__);
      if ( v23 )
      {
        v25 = value.fields.value;
        if ( value.fields.value )
          goto LABEL_24;
      }
      else
      {
        v25 = (Il2CppObject *)*((_QWORD *)v19 + 7);
        if ( !v25 )
          sub_B52A5C(v23, v24);
LABEL_24:
        monitor = v25[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v27 = 0LL;
          do
          {
            if ( v27 >= (unsigned int)monitor )
            {
              v39 = sub_B52A88(v23);
              sub_B52A28(v39, 0LL);
            }
            if ( !v8 )
              sub_B52A5C(v23, v24);
            v28 = *((_DWORD *)&v25[2].klass + v27);
            v23 = System_Collections_Generic_List_int___Contains(
                    v8,
                    v28,
                    (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( !v23 )
              System_Collections_Generic_List_int___Add(
                v8,
                v28,
                (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
            LODWORD(monitor) = v25[1].monitor;
            ++v27;
          }
          while ( (__int64)v27 < (int)monitor );
        }
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
        goto LABEL_42;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_42:
    v37 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                Enumerator,
                                *(_QWORD *)(v37 + 8));
  if ( !v8 )
LABEL_52:
    sub_B52A5C(Instance, v6);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall QuestPhaseMaster__GetMapModelEntryAnimationName(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v8; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B48BD & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B48BD = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_B52A5C(0LL, v8);
  return QuestPhaseEntity__GetMapModelEntryAnimationName(entity, v8);
}


System_String_o *__fastcall QuestPhaseMaster__GetMovieFolder(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w8
  System_String_o *result; // x0
  QuestPhaseEntity_o *v12; // x19
  QuestPhaseMaster_c *v13; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B48B7 & 1) == 0 )
  {
    sub_B52984(&QuestPhaseMaster_TypeInfo);
    byte_42B48B7 = 1;
  }
  entity = 0LL;
  v10 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0LL;
  if ( v10 )
  {
    v12 = entity;
    v13 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    }
    if ( !v12 )
      sub_B52A5C(v13, v8);
    return QuestPhaseEntity__getScriptStr(
             v12,
             QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
             0LL,
             v9);
  }
  return result;
}


int32_t __fastcall QuestPhaseMaster__GetMoviePlayType(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_42B48B8 & 1) == 0 )
  {
    sub_B52984(&QuestPhaseMaster_TypeInfo);
    byte_42B48B8 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v9 = Entity;
    v10 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v10 = QuestPhaseMaster_TypeInfo;
    }
    LODWORD(Entity) = QuestPhaseEntity__getScriptIntParam(v9, v10->static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, 1, v8);
  }
  return (int)Entity;
}


SpecifiedSceneInfo_o *__fastcall QuestPhaseMaster__GetSpecifiedSceneInfo(
        QuestPhaseMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  bool v9; // w0
  __int64 v10; // x20
  QuestPhaseEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Int32_array **NextSceneParam; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B48B9 & 1) == 0 )
  {
    sub_B52984(&SpecifiedSceneInfo_TypeInfo);
    byte_42B48B9 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = sub_B52A54(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0LL);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0LL)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0LL) )
    {
      sub_B52A5C(v11, v12);
    }
    NextSceneParam = (System_Int32_array **)QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_B52920((BattleServantConfConponent_o *)(v10 + 24), NextSceneParam, v14, v15, v16, v17, v18, v19);
  }
  return (SpecifiedSceneInfo_o *)v10;
}


bool __fastcall QuestPhaseMaster__IsAreaImproveQuest(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v5; // x1

  Entity = QuestPhaseMaster__GetEntity(this, questId, 1, v3);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsAreaImporveQuest(Entity, v5);
  return (char)Entity;
}


bool __fastcall QuestPhaseMaster__IsEnableMaterialPlayUseUserQuestRoute(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B48BC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20582/*"materialPlayUseUserQuestRoute"*/);
    byte_42B48BC = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_B52A5C(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_20582/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
}


bool __fastcall QuestPhaseMaster__IsHaveOverwriteEndScript(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestPhaseEntity_array *List; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int max_length; // w8
  QuestPhaseEntity_array *v9; // x19
  unsigned int v10; // w20
  __int64 v12; // x0

  if ( (byte_42B48BB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21531/*"overwriteEndScript"*/);
    byte_42B48BB = 1;
  }
  List = QuestPhaseMaster__getList(this, questId, method);
  if ( !List )
LABEL_13:
    sub_B52A5C(List, v6);
  max_length = List->max_length;
  v9 = List;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      v12 = sub_B52A88(List);
      sub_B52A28(v12, 0LL);
    }
    List = (QuestPhaseEntity_array *)v9->m_Items[v10];
    if ( !List )
      goto LABEL_13;
    List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                       (QuestPhaseEntity_o *)List,
                                       (System_String_o *)StringLiteral_21531/*"overwriteEndScript"*/,
                                       v7);
    if ( List )
      return 1;
    max_length = v9->max_length;
    if ( (int)++v10 >= max_length )
      return 0;
  }
}


bool __fastcall QuestPhaseMaster__IsInvisibleConnectAndLoad(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v5; // x1

  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsInvisibleConnectAndLoad(Entity, v5);
  return (char)Entity;
}


bool __fastcall QuestPhaseMaster__IsMoviePhase(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_42B48B6 & 1) == 0 )
  {
    sub_B52984(&QuestPhaseMaster_TypeInfo);
    byte_42B48B6 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v9 = Entity;
    v10 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v10 = QuestPhaseMaster_TypeInfo;
    }
    LOBYTE(Entity) = QuestPhaseEntity__getScriptStr(v9, v10->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, v8) != 0LL;
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__TryGetEntity(
        QuestPhaseMaster_o *this,
        QuestPhaseEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B48B0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
    byte_42B48B0 = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  const MethodInfo_2F29A2C **v7; // x25
  int32_t v8; // w21
  int32_t v9; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x23
  __int64 v12; // x10
  int32_t missionTargetId; // w24
  const MethodInfo_2F29A2C **v14; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  WarBoardEvalValueSquare_CalcEval_o *v18; // [xsp+10h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B48B3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    sub_B52984(&QuestPhaseEntity_TypeInfo);
    byte_42B48B3 = 1;
  }
  v18 = 0LL;
  value = 0LL;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v7 = (const MethodInfo_2F29A2C **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
      v8 = Count;
      v9 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 list,
                 v9,
                 (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
          v12 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v12
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[v12 - 1] == QuestPhaseEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
            if ( !list )
              break;
            missionTargetId = v11->fields.missionTargetId;
            if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)list,
                    missionTargetId,
                    &value,
                    *v7) )
            {
              v14 = v7;
              v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v15,
                (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
              value = (WarBoardEvalValueSquare_CalcEval_o *)v15;
              list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)list,
                missionTargetId,
                (WarBoardAIRoute_RouteData_o *)v15,
                (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v7 = v14;
            }
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)value;
            if ( !value )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
              v11,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
          }
        }
        if ( ++v9 >= v8 )
          goto LABEL_18;
      }
LABEL_25:
      sub_B52A5C(list, *(_QWORD *)&iQuestID);
    }
LABEL_18:
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_25;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)list,
                                                                                       iQuestID,
                                                                                       &v18,
                                                                                       (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_25;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
      (System_Collections_Generic_IEnumerable_T__o *)v18,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v16 )
  {
    goto LABEL_25;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_34106676(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
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
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x8
  signed int max_length; // w9
  unsigned int v25; // w10
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  __int64 v31; // x0

  if ( (byte_42B48B4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    sub_B52984(&QuestPhaseEntity_TypeInfo);
    byte_42B48B4 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
LABEL_5:
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
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
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( v20
      && (v22 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v20 + 300LL) >= (unsigned int)v22) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v20 + 200LL) + 8 * v22 - 8) == QuestPhaseEntity_TypeInfo )
        v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
      else
        v23 = 0LL;
      if ( !questIdList )
LABEL_45:
        sub_B52A5C(v20, v21);
    }
    else
    {
      v23 = 0LL;
      if ( !questIdList )
        goto LABEL_45;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= max_length )
        {
          v31 = sub_B52A88(v20);
          sub_B52A28(v31, 0LL);
        }
        if ( !v23 )
          sub_B52A5C(v20, v21);
        if ( v23->fields.missionTargetId == questIdList->m_Items[v25 + 1] )
          break;
        if ( (int)++v25 >= max_length )
          goto LABEL_5;
      }
      if ( !v5 )
        sub_B52A5C(v20, v21);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v23,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
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
        goto LABEL_39;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_39:
    v29 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v29 + 8));
  if ( !v5 )
LABEL_47:
    sub_B52A5C(list, v6);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}