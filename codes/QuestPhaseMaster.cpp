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

  if ( (byte_418AEC2 & 1) == 0 )
  {
    sub_B2C35C(&QuestPhaseMaster_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_20586/*"movieFolder"*/, v8);
    sub_B2C35C(&StringLiteral_20587/*"moviePlayType"*/, v9);
    byte_418AEC2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestPhaseMaster_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_20586/*"movieFolder"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20586/*"movieFolder"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = QuestPhaseMaster_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_20587/*"moviePlayType"*/;
  v12->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_20587/*"moviePlayType"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->MOVIE_QUEST_SCRIPT_TYPE_STR, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418AEB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v4);
    byte_418AEB5 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isCached,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    69,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v4; // x0

  if ( (byte_418AEB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__, method);
    byte_418AEB6 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v4 )
    sub_B2C434(0LL, v3);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v4,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
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
  QuestPhaseEntity_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v28; // x22
  int v29; // w8
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  int v35; // [xsp+0h] [xbp-50h]

  if ( (byte_418AEBE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&QuestPhaseEntity_TypeInfo, v11);
    byte_418AEBE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
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
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
    }
    v24 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                  Enumerator,
                                  *(_QWORD *)(v23 + 8));
    if ( !v24
      || (v26 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1), *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v26)
      || (QuestPhaseEntity_c *)v24->klass->_2.typeHierarchy[v26 - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_B2C434(v24, v25);
    }
    if ( v24->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v24,
                                                                                0LL);
      v28 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          v29 = 80;
          goto LABEL_26;
        }
      }
    }
  }
  v28 = 0LL;
  v29 = 78;
LABEL_26:
  v35 = v29;
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_30:
    v33 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( v35 == 78 )
    return 0LL;
  return v28;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AEB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_418AEB3 = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, 0LL);
  return (QuestPhaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *PrioredIndividualitiesWithMatched; // x21
  System_Collections_Generic_List_int__o *v22; // x19
  System_Collections_Generic_List_int__o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int32_t *v31; // x0
  __int64 v32; // x1
  QuestPhaseEntity_o *v33; // x23
  __int64 v34; // x10
  int64_t QuestPhaseNo; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *p_obj; // x25
  void *monitor; // x8
  unsigned __int64 v40; // x26
  int32_t v41; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  __int64 v52; // x0
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_418AEB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdArray);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v15);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B2C35C(&QuestPhaseEntity_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418AEB9 = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !Instance )
    goto LABEL_52;
  PrioredIndividualitiesWithMatched = (System_Collections_Generic_Dictionary_TKey__TValue__o *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
                                                                                                 (QuestBehaviorMaster_o *)Instance,
                                                                                                 questIdArray,
                                                                                                 0LL);
  v22 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_35:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
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
          goto LABEL_12;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_12:
      v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v46);
    }
    v31 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                       Enumerator,
                       *(_QWORD *)(v30 + 8));
    v33 = (QuestPhaseEntity_o *)v31;
    if ( !v31
      || (v34 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) < (unsigned int)v34)
      || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * v34 - 8) != QuestPhaseEntity_TypeInfo )
    {
      sub_B2C434(v31, v32);
    }
    if ( !v23 )
      sub_B2C434(v31, v32);
    if ( System_Collections_Generic_List_int___Contains(
           v23,
           v31[4],
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      QuestPhaseNo = QuestPhaseEntity__GetQuestPhaseNo(v33, 0LL);
      if ( !PrioredIndividualitiesWithMatched )
        sub_B2C434(QuestPhaseNo, QuestPhaseNo);
      v36 = System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
              PrioredIndividualitiesWithMatched,
              QuestPhaseNo,
              &value,
              (const MethodInfo_2E4BC74 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__);
      if ( v36 )
      {
        p_obj = value.fields.value;
        if ( value.fields.value )
          goto LABEL_24;
      }
      else
      {
        p_obj = &v33->fields.individuality->obj;
        if ( !p_obj )
          sub_B2C434(v36, v37);
LABEL_24:
        monitor = p_obj[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v40 = 0LL;
          do
          {
            if ( v40 >= (unsigned int)monitor )
            {
              v52 = sub_B2C460(v36);
              sub_B2C400(v52, 0LL);
            }
            if ( !v22 )
              sub_B2C434(v36, v37);
            v41 = *((_DWORD *)&p_obj[2].klass + v40);
            v36 = System_Collections_Generic_List_int___Contains(
                    v22,
                    v41,
                    (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
            if ( !v36 )
              System_Collections_Generic_List_int___Add(
                v22,
                v41,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            LODWORD(monitor) = p_obj[1].monitor;
            ++v40;
          }
          while ( (__int64)v40 < (int)monitor );
        }
      }
    }
  }
  v47 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_42:
    v50 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v46);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                Enumerator,
                                *(_QWORD *)(v50 + 8));
  if ( !v22 )
LABEL_52:
    sub_B2C434(Instance, v20);
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseMaster__GetMapModelEntryAnimationName(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AEC1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, *(_QWORD *)&questId);
    byte_418AEC1 = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_B2C434(0LL, v8);
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
  __int64 v8; // x1
  bool v9; // w8
  System_String_o *result; // x0
  QuestPhaseEntity_o *v11; // x19
  QuestPhaseMaster_c *v12; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AEBB & 1) == 0 )
  {
    sub_B2C35C(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_418AEBB = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0LL;
  if ( v9 )
  {
    v11 = entity;
    v12 = QuestPhaseMaster_TypeInfo;
    if ( (BYTE3(QuestPhaseMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    }
    if ( !v11 )
      sub_B2C434(v12, v8);
    return QuestPhaseEntity__getScriptStr(
             v11,
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

  if ( (byte_418AEBC & 1) == 0 )
  {
    sub_B2C35C(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_418AEBC = 1;
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
  __int64 v10; // x19
  QuestPhaseEntity_o *v11; // x0
  __int64 v12; // x1
  System_Int32_array **NextSceneParam; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AEBD & 1) == 0 )
  {
    sub_B2C35C(&SpecifiedSceneInfo_TypeInfo, *(_QWORD *)&eventId);
    byte_418AEBD = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = sub_B2C42C(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0LL);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0LL)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, 0LL), (v11 = entity) == 0LL) )
    {
      sub_B2C434(v11, v12);
    }
    NextSceneParam = (System_Int32_array **)QuestPhaseEntity__GetNextSceneParam(entity, 0LL);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), NextSceneParam, v14, v15, v16, v17, v18, v19);
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
  __int64 v8; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418AEC0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20427/*"materialPlayUseUserQuestRoute"*/, *(_QWORD *)&questId);
    byte_418AEC0 = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_B2C434(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_20427/*"materialPlayUseUserQuestRoute"*/, 0, 0LL) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__IsHaveOverwriteEndScript(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestPhaseEntity_array *List; // x0
  __int64 v6; // x1
  int max_length; // w8
  QuestPhaseEntity_array *v8; // x19
  unsigned int v9; // w20
  __int64 v11; // x0

  if ( (byte_418AEBF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21361/*"overwriteEndScript"*/, *(_QWORD *)&questId);
    byte_418AEBF = 1;
  }
  List = QuestPhaseMaster__getList(this, questId, method);
  if ( !List )
LABEL_13:
    sub_B2C434(List, v6);
  max_length = List->max_length;
  v8 = List;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
    {
      v11 = sub_B2C460(List);
      sub_B2C400(v11, 0LL);
    }
    List = (QuestPhaseEntity_array *)v8->m_Items[v9];
    if ( !List )
      goto LABEL_13;
    List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                       (QuestPhaseEntity_o *)List,
                                       (System_String_o *)StringLiteral_21361/*"overwriteEndScript"*/,
                                       0LL);
    if ( List )
      return 1;
    max_length = v8->max_length;
    if ( (int)++v9 >= max_length )
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

  if ( (byte_418AEBA & 1) == 0 )
  {
    sub_B2C35C(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_418AEBA = 1;
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

  if ( (byte_418AEB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__, entity);
    byte_418AEB4 = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  const MethodInfo_2E66470 **v16; // x25
  int32_t v17; // w21
  int32_t v18; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x23
  __int64 v21; // x10
  int32_t missionTargetId; // w24
  const MethodInfo_2E66470 **v23; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  WarBoardEvalValueSquare_CalcEval_o *v27; // [xsp+10h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418AEB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&iQuestID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v12);
    sub_B2C35C(&QuestPhaseEntity_TypeInfo, v13);
    byte_418AEB7 = 1;
  }
  v27 = 0LL;
  value = 0LL;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v16 = (const MethodInfo_2E66470 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
      v17 = Count;
      v18 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 list,
                 v18,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
          v21 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == QuestPhaseEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
            if ( !list )
              break;
            missionTargetId = v20->fields.missionTargetId;
            if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)list,
                    missionTargetId,
                    &value,
                    *v16) )
            {
              v23 = v16;
              v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v24,
                (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
              value = (WarBoardEvalValueSquare_CalcEval_o *)v24;
              list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)list,
                missionTargetId,
                (WarBoardAIRoute_RouteData_o *)v24,
                (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v16 = v23;
            }
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)value;
            if ( !value )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
              v20,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
          }
        }
        if ( ++v18 >= v17 )
          goto LABEL_18;
      }
LABEL_25:
      sub_B2C434(list, *(_QWORD *)&iQuestID);
    }
LABEL_18:
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_25;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)list,
                                                                                       iQuestID,
                                                                                       &v27,
                                                                                       (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_25;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
      (System_Collections_Generic_IEnumerable_T__o *)v27,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v25 )
  {
    goto LABEL_25;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_31180780(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdList,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x8
  signed int max_length; // w9
  unsigned int v33; // w10
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  __int64 v39; // x0

  if ( (byte_418AEB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdList);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v11);
    sub_B2C35C(&QuestPhaseEntity_TypeInfo, v12);
    byte_418AEB8 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
LABEL_5:
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
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    if ( v28
      && (v30 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) >= (unsigned int)v30) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v30 - 8) == QuestPhaseEntity_TypeInfo )
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v28;
      else
        v31 = 0LL;
      if ( !questIdList )
LABEL_45:
        sub_B2C434(v28, v29);
    }
    else
    {
      v31 = 0LL;
      if ( !questIdList )
        goto LABEL_45;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        if ( v33 >= max_length )
        {
          v39 = sub_B2C460(v28);
          sub_B2C400(v39, 0LL);
        }
        if ( !v31 )
          sub_B2C434(v28, v29);
        if ( v31->fields.missionTargetId == questIdList->m_Items[v33 + 1] )
          break;
        if ( (int)++v33 >= max_length )
          goto LABEL_5;
      }
      if ( !v13 )
        sub_B2C434(v28, v29);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        v31,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
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
        goto LABEL_39;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_39:
    v37 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v37 + 8));
  if ( !v13 )
LABEL_47:
    sub_B2C434(list, v14);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}