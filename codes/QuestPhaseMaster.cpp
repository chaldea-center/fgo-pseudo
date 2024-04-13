void __fastcall QuestPhaseMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct QuestPhaseMaster_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42ED24C & 1) == 0 )
  {
    sub_B5D5C4(&QuestPhaseMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_20850/*"movieFolder"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_20851/*"moviePlayType"*/, v11, v12, v13);
    byte_42ED24C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestPhaseMaster_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_20850/*"movieFolder"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20850/*"movieFolder"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = QuestPhaseMaster_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_20851/*"moviePlayType"*/;
  v16->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_20851/*"moviePlayType"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->MOVIE_QUEST_SCRIPT_TYPE_STR, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42ED23F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v8, v9, v10);
    byte_42ED23F = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isCached,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    70,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *v6; // x0

  if ( (byte_42ED240 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED240 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v6 = *(System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.isCached;
  if ( !v6 )
    sub_B5D69C(0LL, v5);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    v6,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestPhaseMaster__GetBranchQuestIds(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  QuestPhaseEntity_o *v34; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v38; // x22
  int v39; // w8
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  int v45; // [xsp+0h] [xbp-50h]

  if ( (byte_42ED248 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      phase,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&QuestPhaseEntity_TypeInfo, v19, v20, v21);
    byte_42ED248 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v24);
    }
    v34 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                  Enumerator,
                                  *(_QWORD *)(v33 + 8));
    if ( !v34
      || (v36 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1), *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36)
      || (QuestPhaseEntity_c *)v34->klass->_2.typeHierarchy[v36 - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_B5D69C(v34, v35);
    }
    if ( v34->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v34,
                                                                                v35);
      v38 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          v39 = 80;
          goto LABEL_26;
        }
      }
    }
  }
  v38 = 0LL;
  v39 = 78;
LABEL_26:
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
        goto LABEL_30;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_30:
    v43 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v24);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  if ( v45 == 78 )
    return 0LL;
  return v38;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42ED23D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__, questId, phase, method);
    byte_42ED23D = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestPhaseMaster__GetIndividualityList(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdArray,
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
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *PrioredIndividualitiesWithMatched; // x21
  System_Collections_Generic_List_int__o *v51; // x19
  System_Collections_Generic_List_int__o *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  int32_t *v60; // x0
  __int64 v61; // x1
  int32_t *v62; // x23
  __int64 v63; // x10
  _BOOL8 v64; // x0
  __int64 v65; // x1
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x25
  void *monitor; // x8
  unsigned __int64 v70; // x26
  int32_t v71; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v73; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v76; // x3
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  unsigned __int64 v78; // x10
  int32_t *v79; // x11
  __int64 v80; // x0
  __int64 v82; // x0
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_42ED243 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)questIdArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Value__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&QuestPhaseEntity_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    byte_42ED243 = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  if ( !Instance )
    goto LABEL_52;
  PrioredIndividualitiesWithMatched = (System_Collections_Generic_Dictionary_TKey__TValue__o *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
                                                                                                 (QuestBehaviorMaster_o *)Instance,
                                                                                                 questIdArray,
                                                                                                 0LL);
  v51 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v52 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v52,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v53);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v73 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v73;
        p_offset += 4;
        if ( v73 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_35:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v54);
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
          goto LABEL_12;
      }
      v59 = (__int64)&v56->vtable[*v58].method;
    }
    else
    {
LABEL_12:
      v59 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v76);
    }
    v60 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                       Enumerator,
                       *(_QWORD *)(v59 + 8));
    v62 = v60;
    if ( !v60
      || (v63 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v60 + 300LL) < (unsigned int)v63)
      || *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v60 + 200LL) + 8 * v63 - 8) != QuestPhaseEntity_TypeInfo )
    {
      sub_B5D69C(v60, v61);
    }
    if ( !v52 )
      sub_B5D69C(v60, v61);
    v64 = System_Collections_Generic_List_int___Contains(
            v52,
            v60[4],
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( v64 )
    {
      if ( !PrioredIndividualitiesWithMatched )
        sub_B5D69C(v64, v65);
      v66 = System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
              PrioredIndividualitiesWithMatched,
              v62[5] + 100 * v62[4],
              &value,
              (const MethodInfo_2F4F24C *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__);
      if ( v66 )
      {
        v68 = value.fields.value;
        if ( value.fields.value )
          goto LABEL_24;
      }
      else
      {
        v68 = (Il2CppObject *)*((_QWORD *)v62 + 7);
        if ( !v68 )
          sub_B5D69C(v66, v67);
LABEL_24:
        monitor = v68[1].monitor;
        if ( (int)monitor >= 1 )
        {
          v70 = 0LL;
          do
          {
            if ( v70 >= (unsigned int)monitor )
            {
              v82 = sub_B5D6C8(v66);
              sub_B5D668(v82, 0LL);
            }
            if ( !v51 )
              sub_B5D69C(v66, v67);
            v71 = *((_DWORD *)&v68[2].klass + v70);
            v66 = System_Collections_Generic_List_int___Contains(
                    v51,
                    v71,
                    (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( !v66 )
              System_Collections_Generic_List_int___Add(
                v51,
                v71,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            LODWORD(monitor) = v68[1].monitor;
            ++v70;
          }
          while ( (__int64)v70 < (int)monitor );
        }
      }
    }
  }
  v77 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v78 = 0LL;
    v79 = &v77->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      ++v78;
      v79 += 4;
      if ( v78 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_42;
    }
    v80 = (__int64)&v77->vtable[*v79].method;
  }
  else
  {
LABEL_42:
    v80 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v76);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(
                                Enumerator,
                                *(_QWORD *)(v80 + 8));
  if ( !v51 )
LABEL_52:
    sub_B5D69C(Instance, v49);
  return System_Collections_Generic_List_int___ToArray(
           v51,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42ED24B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, questId, phase, method);
    byte_42ED24B = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_B5D69C(0LL, v8);
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

  if ( (byte_42ED245 & 1) == 0 )
  {
    sub_B5D5C4(&QuestPhaseMaster_TypeInfo, questId, phase, method);
    byte_42ED245 = 1;
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
      sub_B5D69C(v13, v8);
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

  if ( (byte_42ED246 & 1) == 0 )
  {
    sub_B5D5C4(&QuestPhaseMaster_TypeInfo, questId, phase, method);
    byte_42ED246 = 1;
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42ED247 & 1) == 0 )
  {
    sub_B5D5C4(&SpecifiedSceneInfo_TypeInfo, eventId, questId, *(_QWORD *)&phase);
    byte_42ED247 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = sub_B5D694(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0LL);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0LL)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0LL) )
    {
      sub_B5D69C(v11, v12);
    }
    NextSceneParam = (System_Int32_array **)QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_B5D560((BattleServantConfConponent_o *)(v10 + 24), NextSceneParam, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_42ED24A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20687/*"materialPlayUseUserQuestRoute"*/, questId, phase, method);
    byte_42ED24A = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_B5D69C(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_20687/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
}


bool __fastcall QuestPhaseMaster__IsHaveOverwriteEndScript(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestPhaseEntity_array *List; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int max_length; // w8
  QuestPhaseEntity_array *v10; // x19
  unsigned int v11; // w20
  __int64 v13; // x0

  if ( (byte_42ED249 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21642/*"overwriteEndScript"*/, questId, (_DWORD)method, v3);
    byte_42ED249 = 1;
  }
  List = QuestPhaseMaster__getList(this, questId, method);
  if ( !List )
LABEL_13:
    sub_B5D69C(List, v7);
  max_length = List->max_length;
  v10 = List;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
    {
      v13 = sub_B5D6C8(List);
      sub_B5D668(v13, 0LL);
    }
    List = (QuestPhaseEntity_array *)v10->m_Items[v11];
    if ( !List )
      goto LABEL_13;
    List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                       (QuestPhaseEntity_o *)List,
                                       (System_String_o *)StringLiteral_21642/*"overwriteEndScript"*/,
                                       v8);
    if ( List )
      return 1;
    max_length = v10->max_length;
    if ( (int)++v11 >= max_length )
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

  if ( (byte_42ED244 & 1) == 0 )
  {
    sub_B5D5C4(&QuestPhaseMaster_TypeInfo, questId, phase, method);
    byte_42ED244 = 1;
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

  if ( (byte_42ED23E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&phase);
    byte_42ED23E = 1;
  }
  PK = QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  const MethodInfo_2F33DE8 **v35; // x25
  int32_t v36; // w21
  int32_t v37; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x23
  __int64 v40; // x10
  int32_t missionTargetId; // w24
  const MethodInfo_2F33DE8 **v42; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x21
  WarBoardEvalValueSquare_CalcEval_o *v46; // [xsp+10h] [xbp-60h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42ED241 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      iQuestID,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&QuestPhaseEntity_TypeInfo, v30, v31, v32);
    byte_42ED241 = 1;
  }
  v46 = 0LL;
  value = 0LL;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_25;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              list,
              (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v35 = (const MethodInfo_2F33DE8 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
      v36 = Count;
      v37 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 list,
                 v37,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
          v40 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v40
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[v40 - 1] == QuestPhaseEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
            if ( !list )
              break;
            missionTargetId = v39->fields.missionTargetId;
            if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)list,
                    missionTargetId,
                    &value,
                    *v35) )
            {
              v42 = v35;
              v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                v43,
                (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
              value = (WarBoardEvalValueSquare_CalcEval_o *)v43;
              list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)list,
                missionTargetId,
                (WarBoardAIRoute_RouteData_o *)v43,
                (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v35 = v42;
            }
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)value;
            if ( !value )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
              v39,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
          }
        }
        if ( ++v37 >= v36 )
          goto LABEL_18;
      }
LABEL_25:
      sub_B5D69C(list, *(_QWORD *)&iQuestID);
    }
LABEL_18:
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_25;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                                                                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)list,
                                                                                       iQuestID,
                                                                                       &v46,
                                                                                       (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_25;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v44,
      (System_Collections_Generic_IEnumerable_T__o *)v46,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v44 )
  {
    goto LABEL_25;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v44,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_34218440(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdList,
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
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x8
  signed int max_length; // w9
  unsigned int v50; // w10
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  __int64 v56; // x0

  if ( (byte_42ED242 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)questIdList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&QuestPhaseEntity_TypeInfo, v27, v28, v29);
    byte_42ED242 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_47;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
LABEL_5:
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
    v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
            Enumerator,
            *(_QWORD *)(v44 + 8));
    if ( v45
      && (v47 = *(&QuestPhaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v45 + 300LL) >= (unsigned int)v47) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v45 + 200LL) + 8 * v47 - 8) == QuestPhaseEntity_TypeInfo )
        v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v45;
      else
        v48 = 0LL;
      if ( !questIdList )
LABEL_45:
        sub_B5D69C(v45, v46);
    }
    else
    {
      v48 = 0LL;
      if ( !questIdList )
        goto LABEL_45;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v50 = 0;
      while ( 1 )
      {
        if ( v50 >= max_length )
        {
          v56 = sub_B5D6C8(v45);
          sub_B5D668(v56, 0LL);
        }
        if ( !v48 )
          sub_B5D69C(v45, v46);
        if ( v48->fields.missionTargetId == questIdList->m_Items[v50 + 1] )
          break;
        if ( (int)++v50 >= max_length )
          goto LABEL_5;
      }
      if ( !v30 )
        sub_B5D69C(v45, v46);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v30,
        v48,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    }
  }
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_39:
    v54 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v54 + 8));
  if ( !v30 )
LABEL_47:
    sub_B5D69C(list, v31);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}