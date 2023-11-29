void __fastcall QuestPhaseMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct QuestPhaseMaster_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FD53E & 1) == 0 )
  {
    sub_B16FFC(&QuestPhaseMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_20501, v8);
    sub_B16FFC(&StringLiteral_20502, v9);
    byte_40FD53E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestPhaseMaster_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_20501;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20501;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = QuestPhaseMaster_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_20502;
  v12->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_20502;
  sub_B16F98((BattleServantConfConponent_o *)&v12->MOVIE_QUEST_SCRIPT_TYPE_STR, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FD531 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v7);
    byte_40FD531 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.isCached,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    69,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v3; // x0

  if ( (byte_40FD532 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__, method);
    byte_40FD532 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v3 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v3 )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v3,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestPhaseMaster__GetBranchQuestIds(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  QuestPhaseEntity_o *v22; // x0
  __int64 v23; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v25; // x22
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-50h]

  if ( (byte_40FD53A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&QuestPhaseEntity_TypeInfo, v11);
    byte_40FD53A = 1;
  }
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v21 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                  Enumerator,
                                  *(_QWORD *)(v21 + 8));
    if ( !v22
      || (v23 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1), *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v23)
      || (QuestPhaseEntity_c *)v22->klass->_2.typeHierarchy[v23 - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_B170D4();
    }
    if ( v22->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v22,
                                                                                0LL);
      v25 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          v26 = 80;
          goto LABEL_26;
        }
      }
    }
  }
  v25 = 0LL;
  v26 = 78;
LABEL_26:
  v32 = v26;
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_30:
    v30 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v32 == 78 )
    return 0LL;
  return v25;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FD52F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_40FD52F = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, 0LL);
  return (QuestPhaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestPhaseMaster__GetIndividualityList(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdArray,
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
  __int64 v18; // x1
  WebViewManager_o *Instance; // x0
  QuestBehaviorMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *PrioredIndividualitiesWithMatched; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_int__o *v31; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int32_t *v38; // x0
  QuestPhaseEntity_o *v39; // x23
  __int64 v40; // x10
  int64_t QuestPhaseNo; // x1
  _BOOL8 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *p_obj; // x25
  void *monitor; // x8
  unsigned __int64 v47; // x26
  int32_t v48; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_40FD535 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdArray);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v15);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B16FFC(&QuestPhaseEntity_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FD535 = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (QuestBehaviorMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  PrioredIndividualitiesWithMatched = (System_Collections_Generic_Dictionary_TKey__TValue__o *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
                                                                                                 MasterData_WarQuestSelectionMaster,
                                                                                                 questIdArray,
                                                                                                 0LL);
  v26 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v22,
                                                    v23,
                                                    v24,
                                                    v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor_49346956(
    v31,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
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
      v50 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v50;
        p_offset += 4;
        if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_35:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_12:
      v37 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                       Enumerator,
                       *(_QWORD *)(v37 + 8));
    v39 = (QuestPhaseEntity_o *)v38;
    if ( !v38
      || (v40 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v38 + 300LL) < (unsigned int)v40)
      || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v38 + 200LL) + 8 * v40 - 8) != QuestPhaseEntity_TypeInfo )
    {
      sub_B170D4();
    }
    if ( !v31 )
      sub_B170D4();
    if ( System_Collections_Generic_List_int___Contains(
           v31,
           v38[4],
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      QuestPhaseNo = QuestPhaseEntity__GetQuestPhaseNo(v39, 0LL);
      if ( !PrioredIndividualitiesWithMatched )
        sub_B170D4();
      v42 = System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
              PrioredIndividualitiesWithMatched,
              QuestPhaseNo,
              &value,
              (const MethodInfo_2E05544 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__);
      if ( v42 )
      {
        p_obj = value.fields.value;
        if ( value.fields.value )
          goto LABEL_24;
      }
      else
      {
        p_obj = &v39->fields.individuality->obj;
        if ( !p_obj )
          sub_B170D4();
LABEL_24:
        monitor = p_obj[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v47 = 0LL;
          do
          {
            if ( v47 >= (unsigned int)monitor )
            {
              sub_B17100(v42, v43, v44);
              sub_B170A0();
            }
            if ( !v26 )
              sub_B170D4();
            v48 = *((_DWORD *)&p_obj[2].klass + v47);
            v42 = System_Collections_Generic_List_int___Contains(
                    v26,
                    v48,
                    (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( !v42 )
              System_Collections_Generic_List_int___Add(
                v26,
                v48,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            LODWORD(monitor) = p_obj[1].monitor;
            ++v47;
          }
          while ( (__int64)v47 < (int)monitor );
        }
      }
    }
  }
  v53 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_42:
    v56 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(Enumerator, *(_QWORD *)(v56 + 8));
  if ( !v26 )
LABEL_52:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseMaster__GetMapModelEntryAnimationName(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD53D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, *(_QWORD *)&questId);
    byte_40FD53D = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1;
  if ( !entity )
    sub_B170D4();
  return QuestPhaseEntity__GetMapModelEntryAnimationName(entity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseMaster__GetMovieFolder(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool v8; // w8
  System_String_o *result; // x0
  QuestPhaseEntity_o *v10; // x19
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD537 & 1) == 0 )
  {
    sub_B16FFC(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_40FD537 = 1;
  }
  entity = 0LL;
  v8 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0LL;
  if ( v8 )
  {
    v10 = entity;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    }
    if ( !v10 )
      sub_B170D4();
    return QuestPhaseEntity__getScriptStr(
             v10,
             QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
             0LL,
             0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseMaster__GetMoviePlayType(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v8; // x19
  QuestPhaseMaster_c *v9; // x0

  if ( (byte_40FD538 & 1) == 0 )
  {
    sub_B16FFC(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_40FD538 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v8 = Entity;
    v9 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v9 = QuestPhaseMaster_TypeInfo;
    }
    LODWORD(Entity) = QuestPhaseEntity__getScriptIntParam(v8, v9->static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, 1, 0LL);
  }
  return (int)Entity;
}


// local variable allocation has failed, the output may be wrong!
SpecifiedSceneInfo_o *__fastcall QuestPhaseMaster__GetSpecifiedSceneInfo(
        QuestPhaseMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  bool v9; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x19
  System_Int32_array **NextSceneParam; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD539 & 1) == 0 )
  {
    sub_B16FFC(&SpecifiedSceneInfo_TypeInfo, *(_QWORD *)&eventId);
    byte_40FD539 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v14 = 0LL;
  if ( v9 )
  {
    v14 = sub_B170CC(SpecifiedSceneInfo_TypeInfo, v10, v11, v12, v13);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v14, 0LL);
    if ( !v14
      || (*(_DWORD *)(v14 + 16) = eventId, !entity)
      || (*(_DWORD *)(v14 + 20) = QuestPhaseEntity__GetNextSceneId(entity, 0LL), !entity) )
    {
      sub_B170D4();
    }
    NextSceneParam = (System_Int32_array **)QuestPhaseEntity__GetNextSceneParam(entity, 0LL);
    *(_QWORD *)(v14 + 24) = NextSceneParam;
    sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), NextSceneParam, v16, v17, v18, v19, v20, v21);
  }
  return (SpecifiedSceneInfo_o *)v14;
}


bool __fastcall QuestPhaseMaster__IsAreaImproveQuest(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestPhaseEntity_o *Entity; // x0

  Entity = QuestPhaseMaster__GetEntity(this, questId, 1, v3);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsAreaImporveQuest(Entity, 0LL);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__IsEnableMaterialPlayUseUserQuestRoute(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD53C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20344, *(_QWORD *)&questId);
    byte_40FD53C = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_B170D4();
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_20344, 0, 0LL) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__IsHaveOverwriteEndScript(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestPhaseEntity_array *List; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  QuestPhaseEntity_array *v9; // x19
  unsigned int v10; // w20
  QuestPhaseEntity_o *v11; // x0

  if ( (byte_40FD53B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21271, *(_QWORD *)&questId);
    byte_40FD53B = 1;
  }
  List = QuestPhaseMaster__getList(this, questId, method);
  if ( !List )
LABEL_13:
    sub_B170D4();
  max_length = List->max_length;
  v9 = List;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      sub_B17100(List, v6, v7);
      sub_B170A0();
    }
    v11 = v9->m_Items[v10];
    if ( !v11 )
      goto LABEL_13;
    List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(v11, (System_String_o *)StringLiteral_21271, 0LL);
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

  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsInvisibleConnectAndLoad(Entity, 0LL);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__IsMoviePhase(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  QuestPhaseEntity_o *v8; // x19
  QuestPhaseMaster_c *v9; // x0

  if ( (byte_40FD536 & 1) == 0 )
  {
    sub_B16FFC(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_40FD536 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v8 = Entity;
    v9 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v9 = QuestPhaseMaster_TypeInfo;
    }
    LOBYTE(Entity) = QuestPhaseEntity__getScriptStr(v8, v9->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, 0LL) != 0LL;
  }
  return (char)Entity;
}


bool __fastcall QuestPhaseMaster__TryGetEntity(
        QuestPhaseMaster_o *this,
        QuestPhaseEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FD530 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__, entity);
    byte_40FD530 = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  const MethodInfo_2DEB0E0 **v18; // x25
  int32_t v19; // w21
  int32_t v20; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x23
  __int64 v24; // x10
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v25; // x0
  int32_t missionTargetId; // w24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  const MethodInfo_2DEB0E0 **v31; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x25
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v35; // x0
  WarBoardEvalValueSquare_CalcEval_o *v37; // [xsp+10h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FD533 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&iQuestID);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v14);
    sub_B16FFC(&QuestPhaseEntity_TypeInfo, v15);
    byte_40FD533 = 1;
  }
  v37 = 0LL;
  value = 0LL;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v18 = (const MethodInfo_2DEB0E0 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
      v19 = Count;
      v20 = 0;
      while ( 1 )
      {
        v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !v21 )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v21,
                 v20,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
          v24 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == QuestPhaseEntity_TypeInfo )
          {
            v25 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **)&this->fields.isCached;
            if ( !v25 )
              break;
            missionTargetId = v23->fields.missionTargetId;
            if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                    v25,
                    missionTargetId,
                    &value,
                    *v18) )
            {
              v31 = v18;
              v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v27, v28, v29, v30);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v32,
                (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
              value = (WarBoardEvalValueSquare_CalcEval_o *)v32;
              v33 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o **)&this->fields.isCached;
              if ( !v33 )
                break;
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                v33,
                missionTargetId,
                (WarBoardAIRoute_RouteData_o *)v32,
                (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v18 = v31;
            }
            if ( !value )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
              v23,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
          }
        }
        if ( ++v20 >= v19 )
          goto LABEL_18;
      }
LABEL_25:
      sub_B170D4();
    }
LABEL_18:
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestPhaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&iQuestID,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  v35 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **)&this->fields.isCached;
  if ( !v35 )
    goto LABEL_25;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         v35,
         iQuestID,
         &v37,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__) )
  {
    if ( !v34 )
      goto LABEL_25;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
      (System_Collections_Generic_IEnumerable_T__o *)v37,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v34 )
  {
    goto LABEL_25;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_31198068(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdList,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x8
  signed int max_length; // w9
  unsigned int v32; // w10
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0

  if ( (byte_40FD534 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdList);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v13);
    sub_B16FFC(&QuestPhaseEntity_TypeInfo, v14);
    byte_40FD534 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestPhaseEntity__TypeInfo,
                                                                                                  questIdList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
LABEL_5:
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
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    if ( v26
      && (v29 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v26 + 300LL) >= (unsigned int)v29) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * v29 - 8) == QuestPhaseEntity_TypeInfo )
        v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26;
      else
        v30 = 0LL;
      if ( !questIdList )
LABEL_45:
        sub_B170D4();
    }
    else
    {
      v30 = 0LL;
      if ( !questIdList )
        goto LABEL_45;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( v32 >= max_length )
        {
          sub_B17100(v26, v27, v28);
          sub_B170A0();
        }
        if ( !v30 )
          sub_B170D4();
        if ( v30->fields.missionTargetId == questIdList->m_Items[v32 + 1] )
          break;
        if ( (int)++v32 >= max_length )
          goto LABEL_5;
      }
      if ( !v15 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        v30,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
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
        goto LABEL_39;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_39:
    v36 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( !v15 )
LABEL_47:
    sub_B170D4();
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}