void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41860AB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method);
    byte_41860AB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    171,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_41860A9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId);
    byte_41860A9 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v14; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41860AF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_41860AF = 1;
  }
  isOpen[0] = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v11);
  }
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, questId, 0LL);
  if ( kind == 3 )
    return ScriptQuestId;
  if ( QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, phaseCnt, kind, 0, v12) )
  {
    if ( !isOpen[0] )
      return 0;
    return ScriptQuestId;
  }
  if ( !QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, 0, kind, 0, v14) )
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
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v22; // x0
  QuestScriptReleaseEntity_o *v23; // x21
  __int64 v24; // x9
  const MethodInfo *v25; // x1
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-50h]

  if ( (byte_41860B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&QuestScriptReleaseEntity_TypeInfo, v9);
    byte_41860B0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B2C434(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v11);
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
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
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
      v21 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v12);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v21 + 8));
    v23 = (QuestScriptReleaseEntity_o *)v22;
    if ( v22 )
    {
      v24 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v22)[18].monitor) < (unsigned int)v24
        || *((QuestScriptReleaseEntity_c **)(*v22)[12].monitor + v24 - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B2C728(v22);
        goto LABEL_35;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v22[5],
             questId,
             (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v23, v25) )
      {
        v26 = 77;
        goto LABEL_25;
      }
    }
  }
  v23 = 0LL;
  v26 = 75;
LABEL_25:
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
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v12);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v32 == 75 )
    return 0LL;
  return v23;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x24
  System_String_o *v62; // x23
  __int64 v63; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x24
  unsigned __int64 v66; // x10
  int32_t *p_offset; // x11
  __int64 v68; // x0
  __int64 v69; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *v70; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v71; // x24
  unsigned __int64 v72; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v73; // x11
  __int64 v74; // x0
  __int64 v75; // x10
  int32_t version; // w8
  __int64 v78; // x0
  __int64 v79; // x0
  int i; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v82; // [xsp+18h] [xbp-58h] BYREF
  int32_t v83; // [xsp+1Ch] [xbp-54h] BYREF

  v82 = scriptPhase;
  v83 = scriptQuestId;
  if ( (byte_41860AC & 1) == 0 )
  {
    sub_B2C35C(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&scriptQuestId);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v12);
    sub_B2C35C(&QuestScriptReleaseEntity_TypeInfo, v13);
    sub_B2C35C(&string___TypeInfo, v14);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v15);
    byte_41860AC = 1;
  }
  *checkCnt = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v16;
  sub_B2C2F8(
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
    v24 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v83, 0LL);
    if ( !v24 )
      goto LABEL_59;
    v33 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C41C(lookup, v24->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_60:
        v79 = sub_B2C454();
        sub_B2C400(v79, 0LL);
      }
    }
    if ( !v24->max_length )
      goto LABEL_58;
    v24->m_Items[0] = (System_String_o *)v33;
    sub_B2C2F8((BattleServantConfConponent_o *)v24->m_Items, v33, v27, v28, v29, v30, v31, v32);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1225/*":"*/;
    if ( StringLiteral_1225/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C41C(StringLiteral_1225/*":"*/, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v40 = (System_Int32_array **)StringLiteral_1225/*":"*/;
    }
    else
    {
      v40 = 0LL;
    }
    if ( v24->max_length <= 1 )
      goto LABEL_58;
    v24->m_Items[1] = (System_String_o *)v40;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[1], v40, v34, v35, v36, v37, v38, v39);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v82, 0LL);
    v47 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C41C(lookup, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v24->max_length <= 2 )
      goto LABEL_58;
    v24->m_Items[2] = (System_String_o *)v47;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[2], v47, v41, v42, v43, v44, v45, v46);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1225/*":"*/;
    if ( StringLiteral_1225/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C41C(StringLiteral_1225/*":"*/, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v54 = (System_Int32_array **)StringLiteral_1225/*":"*/;
    }
    else
    {
      v54 = 0LL;
    }
    if ( v24->max_length <= 3 )
    {
LABEL_58:
      v78 = sub_B2C460(lookup);
      sub_B2C400(v78, 0LL);
    }
    v24->m_Items[3] = (System_String_o *)v54;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[3], v54, v48, v49, v50, v51, v52, v53);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&i, 0LL);
    v61 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C41C(lookup, v24->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v24->max_length <= 4 )
      goto LABEL_58;
    v24->m_Items[4] = (System_String_o *)v61;
    sub_B2C2F8((BattleServantConfConponent_o *)&v24->m_Items[4], v61, v55, v56, v57, v58, v59, v60);
    v62 = System_String__Concat_44385656(v24, 0LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_59:
      sub_B2C434(lookup, v26);
    klass = lookup->klass;
    v65 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v66 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v66;
        p_offset += 4;
        if ( v66 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v68 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v68 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v63);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v68)(
            v65,
            v62,
            *(_QWORD *)(v68 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_59;
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
          goto LABEL_37;
      }
      v74 = (__int64)(&v70->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v73);
    }
    else
    {
LABEL_37:
      v74 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v69);
    }
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v74)(v71, v62, *(_QWORD *)(v74 + 8));
    if ( lookup
      && (v75 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v75) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v75 - 1] == QuestScriptReleaseEntity_TypeInfo )
        v26 = lookup;
      else
        v26 = 0LL;
      if ( isMainInterlude )
      {
LABEL_42:
        if ( !v26 )
          goto LABEL_59;
        if ( (v26->fields._version & 0x20) != 0 )
          goto LABEL_51;
        continue;
      }
    }
    else
    {
      v26 = 0LL;
      if ( isMainInterlude )
        goto LABEL_42;
    }
    if ( !v26 )
      goto LABEL_59;
    if ( (v26->fields._version & 0x20) == 0 )
    {
LABEL_51:
      ++*checkCnt;
      version = v26->fields._version;
      if ( (version & 8) != 0 )
      {
        v23 = 0;
        if ( (version & 0x10) == 0 && LODWORD(v26->fields._syncRoot) == 1 )
        {
          lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*questScriptReleaseEnt;
          if ( !*questScriptReleaseEnt )
            goto LABEL_59;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lookup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
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
  const MethodInfo *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x25
  _BOOL4 v35; // w19
  bool v36; // w21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x23
  System_String_o *v65; // x22
  __int64 v66; // x3
  DataManager_c *klass; // x8
  DataManager_o *v68; // x23
  unsigned __int64 v69; // x10
  int32_t *p_offset; // x11
  __int64 v71; // x0
  __int64 v72; // x3
  DataManager_c *v73; // x8
  DataManager_o *v74; // x23
  unsigned __int64 v75; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v76; // x11
  __int64 v77; // x0
  __int64 v78; // x10
  DataManager_o *v79; // x22
  UserQuestMaster_o *v80; // x23
  __int64 v82; // x0
  __int64 v83; // x0
  char v84; // [xsp+10h] [xbp-60h]
  int v85; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v86; // [xsp+18h] [xbp-58h] BYREF
  int32_t v87; // [xsp+1Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v88; // 0:w1.4

  v86 = scriptPhase;
  v87 = scriptQuestId;
  if ( (byte_41860AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, isOpen);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v14);
    sub_B2C35C(&int___TypeInfo, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&QuestScriptReleaseEntity_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&string___TypeInfo, v19);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v20);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v21);
    byte_41860AD = 1;
  }
  v85 = 0;
  v22 = (System_Array_o *)sub_B2C374(int___TypeInfo, 7LL);
  v88.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v22, v88, 0LL);
  if ( (System_Array__IndexOf_int_(
          (System_Int32_array *)v22,
          scriptQuestId,
          (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v85 = 1;
    v25 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v87, 0LL);
    if ( !v25 )
      goto LABEL_72;
    v84 = 0;
    v34 = (System_Int32_array **)lookup;
    v35 = kind == 3 && isMainInterlude;
    v36 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( v34 )
      {
        lookup = (DataManager_o *)sub_B2C41C(v34, v25->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_73:
          v83 = sub_B2C454();
          sub_B2C400(v83, 0LL);
        }
      }
      if ( !v25->max_length )
        goto LABEL_71;
      v25->m_Items[0] = (System_String_o *)v34;
      sub_B2C2F8((BattleServantConfConponent_o *)v25->m_Items, v34, v28, v29, v30, v31, v32, v33);
      lookup = (DataManager_o *)StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v43 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v43 = 0LL;
      }
      if ( v25->max_length <= 1 )
        goto LABEL_71;
      v25->m_Items[1] = (System_String_o *)v43;
      sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[1], v43, v37, v38, v39, v40, v41, v42);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v86, 0LL);
      v50 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B2C41C(lookup, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v25->max_length <= 2 )
        goto LABEL_71;
      v25->m_Items[2] = (System_String_o *)v50;
      sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
      lookup = (DataManager_o *)StringLiteral_1225/*":"*/;
      if ( StringLiteral_1225/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v57 = (System_Int32_array **)StringLiteral_1225/*":"*/;
      }
      else
      {
        v57 = 0LL;
      }
      if ( v25->max_length <= 3 )
      {
LABEL_71:
        v82 = sub_B2C460(lookup);
        sub_B2C400(v82, 0LL);
      }
      v25->m_Items[3] = (System_String_o *)v57;
      sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v85, 0LL);
      v64 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B2C41C(lookup, v25->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v25->max_length <= 4 )
        goto LABEL_71;
      v25->m_Items[4] = (System_String_o *)v64;
      sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
      v65 = System_String__Concat_44385656(v25, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      klass = lookup->klass;
      v68 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v69 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v69;
          p_offset += 4;
          if ( v69 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v71 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v71 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v66);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v71)(v68, v65, *(_QWORD *)(v71 + 8)) & 1) == 0 )
      {
        v24 = v84;
        *isOpen = 1;
        return v24;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v73 = lookup->klass;
      v74 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v75 = 0LL;
        v76 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v73->_1.interfaceOffsets->offset;
        while ( *(v76 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v75;
          v76 += 2;
          if ( v75 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_39;
        }
        v77 = (__int64)(&v73->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v76);
      }
      else
      {
LABEL_39:
        v77 = sub_AC5258(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v72);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v77)(
                                  v74,
                                  v65,
                                  *(_QWORD *)(v77 + 8));
      if ( lookup
        && (v78 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
            *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v78) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v78 - 1] == QuestScriptReleaseEntity_TypeInfo )
          v79 = lookup;
        else
          v79 = 0LL;
        if ( v35 )
        {
LABEL_44:
          if ( !v79 )
            goto LABEL_72;
          if ( (BYTE4(v79->fields.datalist) & 0x20) == 0 )
            goto LABEL_54;
        }
      }
      else
      {
        v79 = 0LL;
        if ( v35 )
          goto LABEL_44;
      }
      if ( v36 )
        goto LABEL_58;
      if ( !v79 )
        goto LABEL_72;
      if ( (BYTE4(v79->fields.datalist) & 0x20) == 0 )
      {
LABEL_58:
        lookup = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    lookup,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v79 )
          goto LABEL_72;
        if ( (HIDWORD(v79->fields.datalist) & (1 << kind)) != 0 )
        {
          v80 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v79, v27) )
          {
            if ( LODWORD(v79->fields.lookup) != 1 )
              goto LABEL_70;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v80 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v80,
                     (int64_t)lookup,
                     (System_Int32_array *)v79->fields.masterDataBytes,
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
            sub_B2C434(lookup, v27);
          }
          v84 = 1;
        }
      }
LABEL_54:
      ++v85;
      v25 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v87, 0LL);
      v34 = (System_Int32_array **)lookup;
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
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w26
  System_Int32_array **v21; // x23
  char v22; // w25
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x22
  System_String_o *v51; // x21
  __int64 v52; // x3
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v54; // x22
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 v57; // x0
  __int64 v58; // x3
  QuestScriptReleaseEntity_c *v59; // x8
  QuestScriptReleaseEntity_o *v60; // x22
  unsigned __int64 v61; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v62; // x11
  __int64 v63; // x0
  __int64 v64; // x10
  bool v65; // w8
  bool result; // w0
  __int64 v67; // x0
  __int64 v68; // x0
  int v70; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v71; // [xsp+18h] [xbp-58h] BYREF
  int32_t v72; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = kind;
  v71 = scriptPhase;
  v72 = scriptQuestId;
  if ( (byte_41860AE & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, isOpen);
    sub_B2C35C(&QuestScriptReleaseEntity_TypeInfo, v8);
    sub_B2C35C(&string___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v10);
    byte_41860AE = 1;
  }
  v70 = 1;
  v11 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v72, 0LL);
  if ( !v11 )
LABEL_45:
    sub_B2C434(lookup, v13);
  v20 = 1 << v6;
  v21 = (System_Int32_array **)lookup;
  v22 = 0;
  while ( 1 )
  {
    if ( v21 )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B2C41C(v21, v11->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_50:
        v68 = sub_B2C454();
        sub_B2C400(v68, 0LL);
      }
    }
    if ( !v11->max_length )
      goto LABEL_49;
    v11->m_Items[0] = (System_String_o *)v21;
    sub_B2C2F8((BattleServantConfConponent_o *)v11->m_Items, v21, v14, v15, v16, v17, v18, v19);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1225/*":"*/;
    if ( StringLiteral_1225/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v29 = (System_Int32_array **)StringLiteral_1225/*":"*/;
    }
    else
    {
      v29 = 0LL;
    }
    if ( v11->max_length <= 1 )
      goto LABEL_49;
    v11->m_Items[1] = (System_String_o *)v29;
    sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[1], v29, v23, v24, v25, v26, v27, v28);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v71, 0LL);
    v36 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B2C41C(lookup, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v11->max_length <= 2 )
      goto LABEL_49;
    v11->m_Items[2] = (System_String_o *)v36;
    sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[2], v36, v30, v31, v32, v33, v34, v35);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1225/*":"*/;
    if ( StringLiteral_1225/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B2C41C(StringLiteral_1225/*":"*/, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v43 = (System_Int32_array **)StringLiteral_1225/*":"*/;
    }
    else
    {
      v43 = 0LL;
    }
    if ( v11->max_length <= 3 )
    {
LABEL_49:
      v67 = sub_B2C460(lookup);
      sub_B2C400(v67, 0LL);
    }
    v11->m_Items[3] = (System_String_o *)v43;
    sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[3], v43, v37, v38, v39, v40, v41, v42);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v70, 0LL);
    v50 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B2C41C(lookup, v11->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v11->max_length <= 4 )
      goto LABEL_49;
    v11->m_Items[4] = (System_String_o *)v50;
    sub_B2C2F8((BattleServantConfConponent_o *)&v11->m_Items[4], v50, v44, v45, v46, v47, v48, v49);
    v51 = System_String__Concat_44385656(v11, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    klass = lookup->klass;
    v54 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v55;
        p_offset += 4;
        if ( v55 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v57 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v57 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v52);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v57)(
            v54,
            v51,
            *(_QWORD *)(v57 + 8)) & 1) == 0 )
    {
      v65 = 0;
      goto LABEL_48;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    v59 = lookup->klass;
    v60 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v61 = 0LL;
      v62 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v59->_1.interfaceOffsets->offset;
      while ( *(v62 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v61;
        v62 += 2;
        if ( v61 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v63 = (__int64)(&v59->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v62);
    }
    else
    {
LABEL_37:
      v63 = sub_AC5258(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v58);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v63)(
                                             v60,
                                             v51,
                                             *(_QWORD *)(v63 + 8));
    if ( !lookup )
      goto LABEL_45;
    v64 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v64
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v64 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_45;
    }
    if ( (lookup->fields.flag & v20) != 0 )
    {
      v22 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v13) )
        break;
    }
    ++v70;
    v11 = (System_String_array *)sub_B2C374(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v72, 0LL);
    v21 = (System_Int32_array **)lookup;
    if ( !v11 )
      goto LABEL_45;
  }
  v65 = 1;
LABEL_48:
  result = v22 & 1;
  *isOpen = v65;
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

  if ( (byte_41860AA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_41860AA = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}