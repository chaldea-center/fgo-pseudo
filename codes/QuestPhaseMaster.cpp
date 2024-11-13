void __fastcall QuestPhaseMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct QuestPhaseMaster_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1674C & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_21760/*"movieFolder"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_21761/*"moviePlayType"*/, v10, v11);
    byte_4B1674C = 1;
  }
  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR = (struct System_String_o *)StringLiteral_21760/*"movieFolder"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestPhaseMaster_TypeInfo->static_fields,
    StringLiteral_21760/*"movieFolder"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_21761/*"moviePlayType"*/;
  static_fields = QuestPhaseMaster_TypeInfo->static_fields;
  static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_21761/*"moviePlayType"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B1673F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v7, v8);
    byte_4B1673F = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.isCached, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x0

  if ( (byte_4B16740 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__, method, v2);
    byte_4B16740 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v5 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v5 )
    sub_1BCAA3C(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v5,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  QuestPhaseEntity_o *v28; // x0
  const MethodInfo *v29; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v32; // x22
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4B16748 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&QuestPhaseEntity_TypeInfo, v15, v16);
    byte_4B16748 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
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
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                  Enumerator,
                                  *(_QWORD *)(v27 + 8));
    if ( !v28
      || (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v28->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (QuestPhaseEntity_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_1BCAA3C(v28, v29);
    }
    if ( v28->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v28,
                                                                                v29);
      v32 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_26;
        }
      }
    }
  }
  v32 = 0LL;
LABEL_26:
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_30:
    v36 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return v32;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1673D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    byte_4B1673D = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestPhaseMaster__GetIndividualityList(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdArray,
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
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_HashSet_int__o *v40; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_int__o *v52; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Func_object__bool__o *v57; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x20
  __int64 v67; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v70; // x1
  __int64 v71; // x20
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  QuestPhaseEntity_o *v80; // x0
  const MethodInfo *v81; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v83; // x1
  System_Int32_array *v84; // x21
  __int64 v85; // x8
  unsigned __int64 v86; // x28
  int32_t v87; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0

  if ( (byte_4B16743 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___, questIdArray, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_QuestPhaseEntity__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__, v32, v33);
    sub_1BCA7E0(&QuestPhaseMaster___c__DisplayClass11_0_TypeInfo, v34, v35);
    byte_4B16743 = 1;
  }
  v36 = sub_1BCAA2C(QuestPhaseMaster___c__DisplayClass11_0_TypeInfo, questIdArray, method, v3);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  v40 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_HashSet_int____ctor_54873236(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
  if ( !v36 )
    goto LABEL_53;
  *(_QWORD *)(v36 + 16) = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)v40, v43, v44, v45, v46, v47, v48);
  v52 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v49,
                                                    v50,
                                                    v51);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v53 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___);
  v57 = *(System_Func_object__bool__o **)(v36 + 24);
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)v53;
  if ( !v57 )
  {
    v57 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestPhaseEntity__bool__TypeInfo, v54, v55, v56);
    System_Func_object__bool____ctor(
      v57,
      (Il2CppObject *)v36,
      Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__,
      0LL);
    *(_QWORD *)(v36 + 24) = v57;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)v57, v59, v60, v61, v62, v63, v64);
  }
  v41 = System_Linq_Enumerable__Where_object_(
          v58,
          (System_Func_TSource__bool__o *)v57,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v41 )
    goto LABEL_53;
  klass = v41->klass;
  v66 = v41;
  v67 = *(unsigned __int16 *)(&v41->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v41->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v67;
      p_offset += 4;
      if ( !v67 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C1C7C0(v41, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0LL);
  }
  v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v66,
          *(_QWORD *)(p_method + 8));
  if ( !v71 )
    sub_1BCAA3C(0LL, v70);
  while ( 1 )
  {
    v72 = *(_QWORD *)v71;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v74 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_18;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_18:
      v75 = sub_1C1C7C0(v71, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8)) & 1) == 0 )
      break;
    v76 = *(_QWORD *)v71;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v78 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_25;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_25:
      v79 = sub_1C1C7C0(v71, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v80 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v71, *(_QWORD *)(v79 + 8));
    if ( !v80 )
      sub_1BCAA3C(0LL, v81);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v80, v81);
    v84 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1BCAA3C(0LL, v83);
    v85 = *(_QWORD *)&PrioredIndividuality->max_length;
    if ( (int)v85 >= 1 )
    {
      v86 = 0LL;
      do
      {
        if ( v86 >= (unsigned int)v85 )
          sub_1BCAA44(PrioredIndividuality, v83);
        if ( !v52 )
          sub_1BCAA3C(PrioredIndividuality, v83);
        v87 = v84->m_Items[v86 + 1];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v52,
                                                       v87,
                                                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v52->fields._items;
          v89 = Method_System_Collections_Generic_List_int__Add__;
          ++v52->fields._version;
          if ( !items )
            sub_1BCAA3C(PrioredIndividuality, v83);
          size = v52->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v52,
              v87,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          }
          else
          {
            v52->fields._size = size + 1;
            items->m_Items[size + 1] = v87;
          }
        }
        LODWORD(v85) = v84->max_length;
        ++v86;
      }
      while ( (__int64)v86 < (int)v85 );
    }
  }
  v91 = *(_QWORD *)v71;
  v92 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
  {
    v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
    {
      --v92;
      v93 += 4;
      if ( !v92 )
        goto LABEL_44;
    }
    v94 = v91 + 16LL * *v93 + 312;
  }
  else
  {
LABEL_44:
    v94 = sub_1C1C7C0(v71, System_IDisposable_TypeInfo, 0LL);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v94)(
                                                               v71,
                                                               *(_QWORD *)(v94 + 8));
  if ( !v52 )
LABEL_53:
    sub_1BCAA3C(v41, v42);
  return System_Collections_Generic_List_int___ToArray(
           v52,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseMaster__GetMapModelEntryAnimationName(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v8; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1674B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&questId, *(_QWORD *)&phase);
    byte_4B1674B = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1BCAA3C(0LL, v8);
  return QuestPhaseEntity__GetMapModelEntryAnimationName(entity, v8);
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
  const MethodInfo *v9; // x3
  bool v10; // w8
  System_String_o *result; // x0
  QuestPhaseEntity_o *v12; // x19
  QuestPhaseMaster_c *v13; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16745 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase);
    byte_4B16745 = 1;
  }
  entity = 0LL;
  v10 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0LL;
  if ( v10 )
  {
    v12 = entity;
    v13 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo, v8);
    if ( !v12 )
      sub_1BCAA3C(v13, v8);
    return QuestPhaseEntity__getScriptStr(
             v12,
             QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
             0LL,
             v9);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  QuestPhaseEntity_o *v10; // x19
  QuestPhaseMaster_c *v11; // x0

  if ( (byte_4B16746 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase);
    byte_4B16746 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v10 = Entity;
    v11 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo, v8);
      v11 = QuestPhaseMaster_TypeInfo;
    }
    LODWORD(Entity) = QuestPhaseEntity__getScriptIntParam(v10, v11->static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, 1, v9);
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
  __int64 v13; // x20
  QuestPhaseEntity_o *v14; // x0
  const MethodInfo *v15; // x1
  System_String_array *NextSceneParam; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16747 & 1) == 0 )
  {
    sub_1BCA7E0(&SpecifiedSceneInfo_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&questId);
    byte_4B16747 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v13 = 0LL;
  if ( v9 )
  {
    v13 = sub_1BCAA2C(SpecifiedSceneInfo_TypeInfo, v10, v11, v12);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v13, 0LL);
    if ( !v13
      || (*(_DWORD *)(v13 + 16) = eventId, (v14 = entity) == 0LL)
      || (*(_DWORD *)(v13 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v15), (v14 = entity) == 0LL) )
    {
      sub_1BCAA3C(v14, v15);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v15);
    *(_QWORD *)(v13 + 24) = NextSceneParam;
    sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)NextSceneParam, v17, v18, v19, v20, v21, v22);
  }
  return (SpecifiedSceneInfo_o *)v13;
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B1674A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21567/*"materialPlayUseUserQuestRoute"*/, *(_QWORD *)&questId, *(_QWORD *)&phase);
    byte_4B1674A = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1BCAA3C(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21567/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
}


// local variable allocation has failed, the output may be wrong!
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
  bool v10; // w20
  int v11; // w21

  if ( (byte_4B16749 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22626/*"overwriteEndScript"*/, *(_QWORD *)&questId, method);
    byte_4B16749 = 1;
  }
  List = QuestPhaseMaster__getList(this, questId, method);
  if ( !List )
    goto LABEL_12;
  max_length = List->max_length;
  v9 = List;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1BCAA44(List, v6);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22626/*"overwriteEndScript"*/,
                                         v7);
      if ( !List )
      {
        max_length = v9->max_length;
        v10 = ++v11 < max_length;
        if ( v11 < max_length )
          continue;
      }
      return v10;
    }
LABEL_12:
    sub_1BCAA3C(List, v6);
  }
  return v10;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__IsMoviePhase(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  QuestPhaseEntity_o *v10; // x19
  QuestPhaseMaster_c *v11; // x0

  if ( (byte_4B16744 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&phase);
    byte_4B16744 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v10 = Entity;
    v11 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo, v8);
      v11 = QuestPhaseMaster_TypeInfo;
    }
    LOBYTE(Entity) = QuestPhaseEntity__getScriptStr(v10, v11->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, v9) != 0LL;
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
  Il2CppObject *PK; // x2

  if ( (byte_4B1673E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B1673E = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
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
  System_Collections_Generic_List_QuestPhaseEntity__c **v24; // x28
  const MethodInfo_35A1428 **v25; // x25
  const MethodInfo_3207670 **v26; // x26
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  QuestPhaseEntity_c **v29; // x27
  void **v30; // x19
  int32_t v31; // w21
  int32_t v32; // w22
  Il2CppObject *Item; // x0
  int64_t v34; // x23
  __int64 methodPtr_low; // x10
  int32_t v36; // w24
  int64_t v37; // x2
  __int64 v38; // x3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  QuestPhaseEntity_c **v43; // x29
  void **v44; // x27
  const MethodInfo_3207670 **v45; // x19
  System_Collections_Generic_List_QuestPhaseEntity__c **v46; // x26
  System_Collections_Generic_List_object__o *v47; // x0
  const MethodInfo_35A1428 *v48; // x1
  const MethodInfo_35A1428 **v49; // x28
  Il2CppObject *v50; // x25
  Il2CppClass *klass; // x8
  _QWORD *v52; // x9
  __int64 klass_low; // x10
  void **v54; // x8
  System_Collections_Generic_List_object__o *v55; // x21
  int32_t v57; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v58; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v4 = iQuestID;
  if ( (byte_4B16741 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&iQuestID,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&QuestPhaseEntity_TypeInfo, v22, v23);
    byte_4B16741 = 1;
  }
  v58 = 0LL;
  value = 0LL;
  v24 = &System_Collections_Generic_List_QuestPhaseEntity__TypeInfo;
  v25 = (const MethodInfo_35A1428 **)&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__;
  v26 = (const MethodInfo_3207670 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v57 = v4;
    if ( !list )
      goto LABEL_28;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v29 = &QuestPhaseEntity_TypeInfo;
      v30 = &Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      v31 = Count;
      v32 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v32,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v34 = (int64_t)Item;
          methodPtr_low = LOBYTE((*v29)->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v29 )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
            if ( !list )
              break;
            v36 = *(_DWORD *)(v34 + 16);
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    v36,
                    &value,
                    *v26) )
            {
              v43 = v29;
              v44 = v30;
              v45 = v26;
              v46 = v24;
              v47 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(*v24, *(_QWORD *)&iQuestID, v37, v38);
              v48 = *v25;
              v49 = v25;
              v50 = (Il2CppObject *)v47;
              System_Collections_Generic_List_object____ctor(v47, v48);
              value = v50;
              list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                v36,
                v50,
                (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v25 = v49;
              v24 = v46;
              v26 = v45;
              v30 = v44;
              v29 = v43;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( !value )
              break;
            klass = value[1].klass;
            v52 = *v30;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              break;
            klass_low = SLODWORD(list[1].klass);
            if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)list,
                (Il2CppObject *)v34,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &klass->_1.image + klass_low;
              LODWORD(list[1].klass) = klass_low + 1;
              v54[4] = (void *)v34;
              sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v34, v37, v38, v39, v40, v41, v42);
            }
          }
        }
        if ( v31 == ++v32 )
          goto LABEL_21;
      }
LABEL_28:
      sub_1BCAA3C(list, *(_QWORD *)&iQuestID);
    }
LABEL_21:
    v4 = v57;
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(*v24, *(_QWORD *)&iQuestID, method, v3);
  System_Collections_Generic_List_object____ctor(v55, *v25);
  list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v4,
                                                             &v58,
                                                             *v26);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v55 )
      goto LABEL_28;
    System_Collections_Generic_List_object___AddRange(
      v55,
      (System_Collections_Generic_IEnumerable_T__o *)v58,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v55 )
  {
    goto LABEL_28;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v55,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_40238472(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdList,
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
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 methodPtr_low; // x10
  int64_t v44; // x8
  signed int max_length; // w9
  int v46; // w10
  struct System_Object_array *items; // x9
  _QWORD *v48; // x10
  __int64 size; // x11
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4B16742 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdList, method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&QuestPhaseEntity_TypeInfo, v20, v21);
    byte_4B16742 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestPhaseEntity__TypeInfo,
                                                       questIdList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    if ( v35
      && (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) == QuestPhaseEntity_TypeInfo )
        v44 = v35;
      else
        v44 = 0LL;
      if ( !questIdList )
LABEL_48:
        sub_1BCAA3C(v35, v36);
    }
    else
    {
      v44 = 0LL;
      if ( !questIdList )
        goto LABEL_48;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( max_length == v46 )
          sub_1BCAA44(v35, v36);
        if ( !v44 )
          sub_1BCAA3C(v35, v36);
        if ( *(_DWORD *)(v44 + 16) == questIdList->m_Items[v46 + 1] )
          break;
        if ( max_length == ++v46 )
          goto LABEL_5;
      }
      if ( !v22 )
        sub_1BCAA3C(v35, v36);
      items = v22->fields._items;
      v48 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1BCAA3C(v35, v36);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v44,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v50[4] = (Il2CppClass *)v44;
        sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), v44, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_42;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_42:
    v54 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                             Enumerator,
                                                             *(_QWORD *)(v54 + 8));
  if ( !v22 )
LABEL_51:
    sub_1BCAA3C(list, v23);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v22,
                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


void __fastcall QuestPhaseMaster___c__DisplayClass11_0___ctor(
        QuestPhaseMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseMaster___c__DisplayClass11_0___GetIndividualityList_b__0(
        QuestPhaseMaster___c__DisplayClass11_0_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  QuestPhaseMaster___c__DisplayClass11_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1674D & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass11_0_o *)sub_1BCA7E0(
                                                         &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                         x,
                                                         method);
    byte_4B1674D = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass11_0_o *)v4->fields.hashQuestId) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}