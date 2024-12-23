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
  __int64 v9; // x1
  int64_t v10; // x1
  struct QuestPhaseMaster_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B6712D & 1) == 0 )
  {
    sub_1BE4ACC(&QuestPhaseMaster_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_21832/*"movieFolder"*/, v8);
    sub_1BE4ACC(&StringLiteral_21833/*"moviePlayType"*/, v9);
    byte_4B6712D = 1;
  }
  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR = (struct System_String_o *)StringLiteral_21832/*"movieFolder"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestPhaseMaster_TypeInfo->static_fields,
    StringLiteral_21832/*"movieFolder"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_21833/*"moviePlayType"*/;
  static_fields = QuestPhaseMaster_TypeInfo->static_fields;
  static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_21833/*"moviePlayType"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B67120 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v4);
    byte_4B67120 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.isCached, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    75,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x0

  if ( (byte_4B67121 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__, method);
    byte_4B67121 = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v4 )
    sub_1BE4D28(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestPhaseEntity_o *v23; // x0
  const MethodInfo *v24; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v27; // x22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B67129 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&QuestPhaseEntity_TypeInfo, v11);
    byte_4B67129 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                  Enumerator,
                                  *(_QWORD *)(v22 + 8));
    if ( !v23
      || (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (QuestPhaseEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_1BE4D28(v23, v24);
    }
    if ( v23->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v23,
                                                                                v24);
      v27 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_26;
        }
      }
    }
  }
  v27 = 0LL;
LABEL_26:
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
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B6711E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4B6711E = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31FDB1C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
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
  __int64 v19; // x1
  __int64 v20; // x21
  System_Collections_Generic_HashSet_int__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v31; // x0
  System_Func_object__bool__o *v32; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v45; // x1
  __int64 v46; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  QuestPhaseEntity_o *v55; // x0
  const MethodInfo *v56; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v58; // x1
  System_Int32_array *v59; // x21
  __int64 v60; // x8
  unsigned __int64 v61; // x28
  int32_t v62; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0

  if ( (byte_4B67124 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___, questIdArray);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___, v5);
    sub_1BE4ACC(&System_Func_QuestPhaseEntity__bool__TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor___77088720, v7);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BE4ACC(&Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__, v18);
    sub_1BE4ACC(&QuestPhaseMaster___c__DisplayClass11_0_TypeInfo, v19);
    byte_4B67124 = 1;
  }
  v20 = sub_1BE4D18(QuestPhaseMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_55177052(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_349EF5C *)Method_System_Collections_Generic_HashSet_int___ctor___77088720);
  if ( !v20 )
    goto LABEL_53;
  *(_QWORD *)(v20 + 16) = v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)v21, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___);
  v32 = *(System_Func_object__bool__o **)(v20 + 24);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
  if ( !v32 )
  {
    v32 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)v20,
      Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__,
      0LL);
    *(_QWORD *)(v20 + 24) = v32;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)v32, v34, v35, v36, v37, v38, v39);
  }
  v22 = System_Linq_Enumerable__Where_object_(
          v33,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v22 )
    goto LABEL_53;
  klass = v22->klass;
  v41 = v22;
  v42 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C36AAC(v22, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0LL);
  }
  v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v41,
          *(_QWORD *)(p_method + 8));
  if ( !v46 )
    sub_1BE4D28(0LL, v45);
  while ( 1 )
  {
    v47 = *(_QWORD *)v46;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_18;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_18:
      v50 = sub_1C36AAC(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = *(_QWORD *)v46;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v53 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_25;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_25:
      v54 = sub_1C36AAC(v46, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v55 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
    if ( !v55 )
      sub_1BE4D28(0LL, v56);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v55, v56);
    v59 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1BE4D28(0LL, v58);
    v60 = *(_QWORD *)&PrioredIndividuality->max_length;
    if ( (int)v60 >= 1 )
    {
      v61 = 0LL;
      do
      {
        if ( v61 >= (unsigned int)v60 )
          sub_1BE4D30(PrioredIndividuality, v58);
        if ( !v30 )
          sub_1BE4D28(PrioredIndividuality, v58);
        v62 = v59->m_Items[v61 + 1];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v30,
                                                       v62,
                                                       (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v30->fields._items;
          v64 = Method_System_Collections_Generic_List_int__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1BE4D28(PrioredIndividuality, v58);
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v30,
              v62,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v30->fields._size = size + 1;
            items->m_Items[size + 1] = v62;
          }
        }
        LODWORD(v60) = v59->max_length;
        ++v61;
      }
      while ( (__int64)v61 < (int)v60 );
    }
  }
  v66 = *(_QWORD *)v46;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_44;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_44:
    v69 = sub_1C36AAC(v46, System_IDisposable_TypeInfo, 0LL);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(
                                                               v46,
                                                               *(_QWORD *)(v69 + 8));
  if ( !v30 )
LABEL_53:
    sub_1BE4D28(v22, v23);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4B6712C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, *(_QWORD *)&questId);
    byte_4B6712C = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1BE4D28(0LL, v8);
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

  if ( (byte_4B67126 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4B67126 = 1;
  }
  entity = 0LL;
  v10 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0LL;
  if ( v10 )
  {
    v12 = entity;
    v13 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v12 )
      sub_1BE4D28(v13, v8);
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
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_4B67127 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4B67127 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v9 = Entity;
    v10 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
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
  System_String_array *NextSceneParam; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B67128 & 1) == 0 )
  {
    sub_1BE4ACC(&SpecifiedSceneInfo_TypeInfo, *(_QWORD *)&eventId);
    byte_4B67128 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = sub_1BE4D18(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0LL);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0LL)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0LL) )
    {
      sub_1BE4D28(v11, v12);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)NextSceneParam, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4B6712B & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21639/*"materialPlayUseUserQuestRoute"*/, *(_QWORD *)&questId);
    byte_4B6712B = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1BE4D28(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21639/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
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

  if ( (byte_4B6712A & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22704/*"overwriteEndScript"*/, *(_QWORD *)&questId);
    byte_4B6712A = 1;
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
        sub_1BE4D30(List, v6);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22704/*"overwriteEndScript"*/,
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
    sub_1BE4D28(List, v6);
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
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_4B67125 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4B67125 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v9 = Entity;
    v10 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *PK; // x2

  if ( (byte_4B6711F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__, entity);
    byte_4B6711F = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_QuestPhaseEntity__c **v14; // x28
  const MethodInfo_35EB9F0 **v15; // x25
  const MethodInfo_3251FF4 **v16; // x26
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  QuestPhaseEntity_c **v19; // x27
  void **v20; // x19
  int32_t v21; // w21
  int32_t v22; // w22
  Il2CppObject *Item; // x0
  int64_t v24; // x23
  __int64 methodPtr_low; // x10
  int32_t v26; // w24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  QuestPhaseEntity_c **v33; // x29
  void **v34; // x27
  const MethodInfo_3251FF4 **v35; // x19
  System_Collections_Generic_List_QuestPhaseEntity__c **v36; // x26
  System_Collections_Generic_List_object__o *v37; // x0
  const MethodInfo_35EB9F0 *v38; // x1
  const MethodInfo_35EB9F0 **v39; // x28
  Il2CppObject *v40; // x25
  Il2CppClass *klass; // x8
  _QWORD *v42; // x9
  __int64 klass_low; // x10
  void **v44; // x8
  System_Collections_Generic_List_object__o *v45; // x21
  int32_t v47; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v48; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_4B67122 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&iQuestID);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v12);
    sub_1BE4ACC(&QuestPhaseEntity_TypeInfo, v13);
    byte_4B67122 = 1;
  }
  v48 = 0LL;
  value = 0LL;
  v14 = &System_Collections_Generic_List_QuestPhaseEntity__TypeInfo;
  v15 = (const MethodInfo_35EB9F0 **)&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__;
  v16 = (const MethodInfo_3251FF4 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v47 = v3;
    if ( !list )
      goto LABEL_28;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v19 = &QuestPhaseEntity_TypeInfo;
      v20 = &Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      v21 = Count;
      v22 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v22,
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v24 = (int64_t)Item;
          methodPtr_low = LOBYTE((*v19)->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v19 )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
            if ( !list )
              break;
            v26 = *(_DWORD *)(v24 + 16);
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    v26,
                    &value,
                    *v16) )
            {
              v33 = v19;
              v34 = v20;
              v35 = v16;
              v36 = v14;
              v37 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(*v14);
              v38 = *v15;
              v39 = v15;
              v40 = (Il2CppObject *)v37;
              System_Collections_Generic_List_object____ctor(v37, v38);
              value = v40;
              list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                v26,
                v40,
                (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v15 = v39;
              v14 = v36;
              v16 = v35;
              v20 = v34;
              v19 = v33;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( !value )
              break;
            klass = value[1].klass;
            v42 = *v20;
            ++HIDWORD(value[1].monitor);
            if ( !klass )
              break;
            klass_low = SLODWORD(list[1].klass);
            if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)list,
                (Il2CppObject *)v24,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &klass->_1.image + klass_low;
              LODWORD(list[1].klass) = klass_low + 1;
              v44[4] = (void *)v24;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 4), v24, v27, v28, v29, v30, v31, v32);
            }
          }
        }
        if ( v21 == ++v22 )
          goto LABEL_21;
      }
LABEL_28:
      sub_1BE4D28(list, *(_QWORD *)&iQuestID);
    }
LABEL_21:
    v3 = v47;
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v45 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(*v14);
  System_Collections_Generic_List_object____ctor(v45, *v15);
  list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v48,
                                                             *v16);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_28;
    System_Collections_Generic_List_object___AddRange(
      v45,
      (System_Collections_Generic_IEnumerable_T__o *)v48,
      (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v45 )
  {
    goto LABEL_28;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v45,
                                     (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_40455672(
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
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 methodPtr_low; // x10
  int64_t v35; // x8
  signed int max_length; // w9
  int v37; // w10
  struct System_Object_array *items; // x9
  _QWORD *v39; // x10
  __int64 size; // x11
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0

  if ( (byte_4B67123 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdList);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v11);
    sub_1BE4ACC(&QuestPhaseEntity_TypeInfo, v12);
    byte_4B67123 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v16);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    if ( v26
      && (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) == QuestPhaseEntity_TypeInfo )
        v35 = v26;
      else
        v35 = 0LL;
      if ( !questIdList )
LABEL_48:
        sub_1BE4D28(v26, v27);
    }
    else
    {
      v35 = 0LL;
      if ( !questIdList )
        goto LABEL_48;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( max_length == v37 )
          sub_1BE4D30(v26, v27);
        if ( !v35 )
          sub_1BE4D28(v26, v27);
        if ( *(_DWORD *)(v35 + 16) == questIdList->m_Items[v37 + 1] )
          break;
        if ( max_length == ++v37 )
          goto LABEL_5;
      }
      if ( !v13 )
        sub_1BE4D28(v26, v27);
      items = v13->fields._items;
      v39 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1BE4D28(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v35,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v35;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v41 + 4), v35, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_42;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_42:
    v45 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                             Enumerator,
                                                             *(_QWORD *)(v45 + 8));
  if ( !v13 )
LABEL_51:
    sub_1BE4D28(list, v14);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v13,
                                     (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
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
  if ( (byte_4B6712E & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass11_0_o *)sub_1BE4ACC(
                                                         &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                         x);
    byte_4B6712E = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass11_0_o *)v4->fields.hashQuestId) == 0LL )
    sub_1BE4D28(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}