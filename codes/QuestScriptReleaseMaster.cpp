void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4212EB6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method);
    byte_4212EB6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    171,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptReleaseEntity_o *__fastcall QuestScriptReleaseMaster__GetEntity(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4212EB4 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId);
    byte_4212EB4 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266A024 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestScriptReleaseMaster__GetScriptQuestId(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v13; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4212EBA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4212EBA = 1;
  }
  isOpen[0] = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, questId, 0LL);
  if ( kind == 3 )
    return ScriptQuestId;
  if ( QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, phaseCnt, kind, 0, v11) )
  {
    if ( !isOpen[0] )
      return 0;
    return ScriptQuestId;
  }
  if ( !QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, 0, kind, 0, v13) )
    return ScriptQuestId;
  result = 0;
  if ( isOpen[0] )
    return ScriptQuestId;
  return result;
}


// local variable allocation has failed, the output may be wrong!
QuestScriptReleaseEntity_o *__fastcall QuestScriptReleaseMaster__GetTargetIdEntity(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v20; // x0
  QuestScriptReleaseEntity_o *v21; // x21
  __int64 v22; // x9
  const MethodInfo *v23; // x1
  int v24; // w8
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-50h]

  if ( (byte_4212EBB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&QuestScriptReleaseEntity_TypeInfo, v9);
    byte_4212EBB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B0D97C(list);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v19 + 8));
    v21 = (QuestScriptReleaseEntity_o *)v20;
    if ( v20 )
    {
      v22 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v20)[18].monitor) < (unsigned int)v22
        || *((QuestScriptReleaseEntity_c **)(*v20)[12].monitor + v22 - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B0DC70(v20);
        goto LABEL_35;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v20[5],
             questId,
             (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v21, v23) )
      {
        v24 = 77;
        goto LABEL_25;
      }
    }
  }
  v21 = 0LL;
  v24 = 75;
LABEL_25:
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
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v30 == 75 )
    return 0LL;
  return v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__IsMaterialCondTypeQuestClearOnly(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        bool isMainInterlude,
        System_Collections_Generic_List_QuestScriptReleaseEntity__o **questScriptReleaseEnt,
        int32_t *checkCnt,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool v23; // w20
  System_String_array *v24; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lookup; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x24
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x24
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x24
  System_String_o *v61; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x24
  unsigned __int64 v64; // x10
  int32_t *p_offset; // x11
  __int64 v66; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *v67; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x24
  unsigned __int64 v69; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v70; // x11
  __int64 v71; // x0
  __int64 v72; // x10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x1
  int32_t version; // w8
  __int64 v76; // x0
  __int64 v77; // x0
  int i; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v80; // [xsp+18h] [xbp-58h] BYREF
  int32_t v81; // [xsp+1Ch] [xbp-54h] BYREF

  v80 = scriptPhase;
  v81 = scriptQuestId;
  if ( (byte_4212EB7 & 1) == 0 )
  {
    sub_B0D8A4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&scriptQuestId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v12);
    sub_B0D8A4(&QuestScriptReleaseEntity_TypeInfo, v13);
    sub_B0D8A4(&string___TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v15);
    byte_4212EB7 = 1;
  }
  *checkCnt = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&scriptQuestId,
                                                                                                  *(_QWORD *)&scriptPhase);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)questScriptReleaseEnt,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v24 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v81, 0LL);
    if ( !v24 )
      goto LABEL_59;
    v32 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D964(lookup, v24->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_60:
        v77 = sub_B0D99C();
        sub_B0D948(v77, 0LL);
      }
    }
    if ( !v24->max_length )
      goto LABEL_58;
    v24->m_Items[0] = (System_String_o *)v32;
    sub_B0D840((BattleServantConfConponent_o *)v24->m_Items, v32, v26, v27, v28, v29, v30, v31);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1232/*":"*/;
    if ( StringLiteral_1232/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D964(StringLiteral_1232/*":"*/, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v39 = (System_Int32_array **)StringLiteral_1232/*":"*/;
    }
    else
    {
      v39 = 0LL;
    }
    if ( v24->max_length <= 1 )
      goto LABEL_58;
    v24->m_Items[1] = (System_String_o *)v39;
    sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v80, 0LL);
    v46 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D964(lookup, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v24->max_length <= 2 )
      goto LABEL_58;
    v24->m_Items[2] = (System_String_o *)v46;
    sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[2], v46, v40, v41, v42, v43, v44, v45);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1232/*":"*/;
    if ( StringLiteral_1232/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D964(StringLiteral_1232/*":"*/, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v53 = (System_Int32_array **)StringLiteral_1232/*":"*/;
    }
    else
    {
      v53 = 0LL;
    }
    if ( v24->max_length <= 3 )
    {
LABEL_58:
      v76 = sub_B0D9A8(lookup);
      sub_B0D948(v76, 0LL);
    }
    v24->m_Items[3] = (System_String_o *)v53;
    sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&i, 0LL);
    v60 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D964(lookup, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v24->max_length <= 4 )
      goto LABEL_58;
    v24->m_Items[4] = (System_String_o *)v60;
    sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[4], v60, v54, v55, v56, v57, v58, v59);
    v61 = System_String__Concat_43930028(v24, 0LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_59:
      sub_B0D97C(lookup);
    klass = lookup->klass;
    v63 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v64 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v64;
        p_offset += 4;
        if ( v64 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v66 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v66 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v66)(
            v63,
            v61,
            *(_QWORD *)(v66 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_59;
    v67 = lookup->klass;
    v68 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v69 = 0LL;
      v70 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v67->_1.interfaceOffsets->offset;
      while ( *(v70 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v69;
        v70 += 2;
        if ( v69 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v71 = (__int64)(&v67->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v70);
    }
    else
    {
LABEL_37:
      v71 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v71)(v68, v61, *(_QWORD *)(v71 + 8));
    if ( lookup
      && (v72 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v72) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v72 - 1] == QuestScriptReleaseEntity_TypeInfo )
        v73 = lookup;
      else
        v73 = 0LL;
      if ( isMainInterlude )
      {
LABEL_42:
        if ( !v73 )
          goto LABEL_59;
        if ( (v73->fields._version & 0x20) != 0 )
          goto LABEL_51;
        continue;
      }
    }
    else
    {
      v73 = 0LL;
      if ( isMainInterlude )
        goto LABEL_42;
    }
    if ( !v73 )
      goto LABEL_59;
    if ( (v73->fields._version & 0x20) == 0 )
    {
LABEL_51:
      ++*checkCnt;
      version = v73->fields._version;
      if ( (version & 8) != 0 )
      {
        v23 = 0;
        if ( (version & 0x10) == 0 && LODWORD(v73->fields._syncRoot) == 1 )
        {
          lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*questScriptReleaseEnt;
          if ( !*questScriptReleaseEnt )
            goto LABEL_59;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lookup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
          v23 = 1;
        }
      }
    }
  }
  return v23;
}


bool __fastcall QuestScriptReleaseMaster__IsOpenMaterial(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        bool isMainInterlude,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, scriptQuestId, 0, 3, isMainInterlude, v5);
}


bool __fastcall QuestScriptReleaseMaster__IsOpenPhase(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        bool isMainInterlude,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Array_o *v22; // x25
  const MethodInfo *v23; // x5
  bool v24; // w0
  System_String_array *v25; // x22
  DataManager_o *lookup; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x25
  _BOOL4 v34; // w19
  bool v35; // w21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x23
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x23
  System_String_o *v64; // x22
  DataManager_c *klass; // x8
  DataManager_o *v66; // x23
  unsigned __int64 v67; // x10
  int32_t *p_offset; // x11
  __int64 v69; // x0
  DataManager_c *v70; // x8
  DataManager_o *v71; // x23
  unsigned __int64 v72; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v73; // x11
  __int64 v74; // x0
  __int64 v75; // x10
  DataManager_o *v76; // x22
  const MethodInfo *v77; // x1
  UserQuestMaster_o *v78; // x23
  __int64 v80; // x0
  __int64 v81; // x0
  char v82; // [xsp+10h] [xbp-60h]
  int v83; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v84; // [xsp+18h] [xbp-58h] BYREF
  int32_t v85; // [xsp+1Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v86; // 0:w1.4

  v84 = scriptPhase;
  v85 = scriptQuestId;
  if ( (byte_4212EB8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, isOpen);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v14);
    sub_B0D8A4(&int___TypeInfo, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&QuestScriptReleaseEntity_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&string___TypeInfo, v19);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v20);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v21);
    byte_4212EB8 = 1;
  }
  v83 = 0;
  v22 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 7LL);
  v86.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v22, v86, 0LL);
  if ( (System_Array__IndexOf_int_(
          (System_Int32_array *)v22,
          scriptQuestId,
          (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v83 = 1;
    v25 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v85, 0LL);
    if ( !v25 )
      goto LABEL_72;
    v82 = 0;
    v33 = (System_Int32_array **)lookup;
    v34 = kind == 3 && isMainInterlude;
    v35 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( v33 )
      {
        lookup = (DataManager_o *)sub_B0D964(v33, v25->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_73:
          v81 = sub_B0D99C();
          sub_B0D948(v81, 0LL);
        }
      }
      if ( !v25->max_length )
        goto LABEL_71;
      v25->m_Items[0] = (System_String_o *)v33;
      sub_B0D840((BattleServantConfConponent_o *)v25->m_Items, v33, v27, v28, v29, v30, v31, v32);
      lookup = (DataManager_o *)StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v42 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v42 = 0LL;
      }
      if ( v25->max_length <= 1 )
        goto LABEL_71;
      v25->m_Items[1] = (System_String_o *)v42;
      sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[1], v42, v36, v37, v38, v39, v40, v41);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v84, 0LL);
      v49 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B0D964(lookup, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v25->max_length <= 2 )
        goto LABEL_71;
      v25->m_Items[2] = (System_String_o *)v49;
      sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[2], v49, v43, v44, v45, v46, v47, v48);
      lookup = (DataManager_o *)StringLiteral_1232/*":"*/;
      if ( StringLiteral_1232/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B0D964(StringLiteral_1232/*":"*/, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v56 = (System_Int32_array **)StringLiteral_1232/*":"*/;
      }
      else
      {
        v56 = 0LL;
      }
      if ( v25->max_length <= 3 )
      {
LABEL_71:
        v80 = sub_B0D9A8(lookup);
        sub_B0D948(v80, 0LL);
      }
      v25->m_Items[3] = (System_String_o *)v56;
      sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[3], v56, v50, v51, v52, v53, v54, v55);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v83, 0LL);
      v63 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B0D964(lookup, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v25->max_length <= 4 )
        goto LABEL_71;
      v25->m_Items[4] = (System_String_o *)v63;
      sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[4], v63, v57, v58, v59, v60, v61, v62);
      v64 = System_String__Concat_43930028(v25, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      klass = lookup->klass;
      v66 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v67 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v67;
          p_offset += 4;
          if ( v67 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v69 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v69 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v69)(v66, v64, *(_QWORD *)(v69 + 8)) & 1) == 0 )
      {
        v24 = v82;
        *isOpen = 1;
        return v24;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v70 = lookup->klass;
      v71 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v72 = 0LL;
        v73 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v70->_1.interfaceOffsets->offset;
        while ( *(v73 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v72;
          v73 += 2;
          if ( v72 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_39;
        }
        v74 = (__int64)(&v70->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v73);
      }
      else
      {
LABEL_39:
        v74 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v74)(
                                  v71,
                                  v64,
                                  *(_QWORD *)(v74 + 8));
      if ( lookup
        && (v75 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
            *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v75) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v75 - 1] == QuestScriptReleaseEntity_TypeInfo )
          v76 = lookup;
        else
          v76 = 0LL;
        if ( v34 )
        {
LABEL_44:
          if ( !v76 )
            goto LABEL_72;
          if ( (BYTE4(v76->fields.datalist) & 0x20) == 0 )
            goto LABEL_54;
        }
      }
      else
      {
        v76 = 0LL;
        if ( v34 )
          goto LABEL_44;
      }
      if ( v35 )
        goto LABEL_58;
      if ( !v76 )
        goto LABEL_72;
      if ( (BYTE4(v76->fields.datalist) & 0x20) == 0 )
      {
LABEL_58:
        lookup = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    lookup,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v76 )
          goto LABEL_72;
        if ( (HIDWORD(v76->fields.datalist) & (1 << kind)) != 0 )
        {
          v78 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v76, v77) )
          {
            if ( LODWORD(v76->fields.lookup) != 1 )
              goto LABEL_70;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v78 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v78,
                     (int64_t)lookup,
                     (System_Int32_array *)v76->fields.masterDataBytes,
                     0LL) )
              {
                v24 = 1;
                *isOpen = 1;
                return v24;
              }
LABEL_70:
              v24 = 1;
              *isOpen = 0;
              return v24;
            }
LABEL_72:
            sub_B0D97C(lookup);
          }
          v82 = 1;
        }
      }
LABEL_54:
      ++v83;
      v25 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v85, 0LL);
      v33 = (System_Int32_array **)lookup;
      if ( !v25 )
        goto LABEL_72;
    }
  }
  return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v23);
}


bool __fastcall QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        const MethodInfo *method)
{
  char v6; // w22
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_array *v11; // x21
  QuestScriptReleaseEntity_o *lookup; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int v19; // w26
  System_Int32_array **v20; // x23
  char v21; // w25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x22
  System_String_o *v50; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v52; // x22
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 v55; // x0
  QuestScriptReleaseEntity_c *v56; // x8
  QuestScriptReleaseEntity_o *v57; // x22
  unsigned __int64 v58; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v59; // x11
  __int64 v60; // x0
  const MethodInfo *v61; // x1
  __int64 v62; // x10
  bool v63; // w8
  bool result; // w0
  __int64 v65; // x0
  __int64 v66; // x0
  int v68; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v69; // [xsp+18h] [xbp-58h] BYREF
  int32_t v70; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = kind;
  v69 = scriptPhase;
  v70 = scriptQuestId;
  if ( (byte_4212EB9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, isOpen);
    sub_B0D8A4(&QuestScriptReleaseEntity_TypeInfo, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v10);
    byte_4212EB9 = 1;
  }
  v68 = 1;
  v11 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v70, 0LL);
  if ( !v11 )
LABEL_45:
    sub_B0D97C(lookup);
  v19 = 1 << v6;
  v20 = (System_Int32_array **)lookup;
  v21 = 0;
  while ( 1 )
  {
    if ( v20 )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B0D964(v20, v11->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_50:
        v66 = sub_B0D99C();
        sub_B0D948(v66, 0LL);
      }
    }
    if ( !v11->max_length )
      goto LABEL_49;
    v11->m_Items[0] = (System_String_o *)v20;
    sub_B0D840((BattleServantConfConponent_o *)v11->m_Items, v20, v13, v14, v15, v16, v17, v18);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1232/*":"*/;
    if ( StringLiteral_1232/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B0D964(StringLiteral_1232/*":"*/, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v28 = (System_Int32_array **)StringLiteral_1232/*":"*/;
    }
    else
    {
      v28 = 0LL;
    }
    if ( v11->max_length <= 1 )
      goto LABEL_49;
    v11->m_Items[1] = (System_String_o *)v28;
    sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[1], v28, v22, v23, v24, v25, v26, v27);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v69, 0LL);
    v35 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B0D964(lookup, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v11->max_length <= 2 )
      goto LABEL_49;
    v11->m_Items[2] = (System_String_o *)v35;
    sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1232/*":"*/;
    if ( StringLiteral_1232/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B0D964(StringLiteral_1232/*":"*/, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v42 = (System_Int32_array **)StringLiteral_1232/*":"*/;
    }
    else
    {
      v42 = 0LL;
    }
    if ( v11->max_length <= 3 )
    {
LABEL_49:
      v65 = sub_B0D9A8(lookup);
      sub_B0D948(v65, 0LL);
    }
    v11->m_Items[3] = (System_String_o *)v42;
    sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[3], v42, v36, v37, v38, v39, v40, v41);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v68, 0LL);
    v49 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B0D964(lookup, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v11->max_length <= 4 )
      goto LABEL_49;
    v11->m_Items[4] = (System_String_o *)v49;
    sub_B0D840((BattleServantConfConponent_o *)&v11->m_Items[4], v49, v43, v44, v45, v46, v47, v48);
    v50 = System_String__Concat_43930028(v11, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    klass = lookup->klass;
    v52 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v53;
        p_offset += 4;
        if ( v53 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v55 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v55)(
            v52,
            v50,
            *(_QWORD *)(v55 + 8)) & 1) == 0 )
    {
      v63 = 0;
      goto LABEL_48;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    v56 = lookup->klass;
    v57 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v56->_1.interfaceOffsets->offset;
      while ( *(v59 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v58;
        v59 += 2;
        if ( v58 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v60 = (__int64)(&v56->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v59);
    }
    else
    {
LABEL_37:
      v60 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v60)(
                                             v57,
                                             v50,
                                             *(_QWORD *)(v60 + 8));
    if ( !lookup )
      goto LABEL_45;
    v62 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v62
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v62 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_45;
    }
    if ( (lookup->fields.flag & v19) != 0 )
    {
      v21 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v61) )
        break;
    }
    ++v68;
    v11 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v70, 0LL);
    v20 = (System_Int32_array **)lookup;
    if ( !v11 )
      goto LABEL_45;
  }
  v63 = 1;
LABEL_48:
  result = v21 & 1;
  *isOpen = v63;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__TryGetEntity(
        QuestScriptReleaseMaster_o *this,
        QuestScriptReleaseEntity_o **entity,
        int32_t scriptId,
        int32_t phase,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4212EB5 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4212EB5 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}