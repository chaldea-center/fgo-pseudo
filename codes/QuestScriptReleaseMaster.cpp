void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389952 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
    byte_4389952 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    172,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_4389950 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
    byte_4389950 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_21FBCE4 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
}


int32_t __fastcall QuestScriptReleaseMaster__GetScriptQuestId(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        int32_t kind,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v13; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4389956 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4389956 = 1;
  }
  isOpen[0] = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v10);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v16; // x0
  QuestScriptReleaseEntity_o *v17; // x21
  __int64 v18; // x9
  const MethodInfo *v19; // x1
  int v20; // w8
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  int v26; // [xsp+0h] [xbp-50h]

  if ( (byte_4389957 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&QuestScriptReleaseEntity_TypeInfo);
    byte_4389957 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B7769C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v15 + 8));
    v17 = (QuestScriptReleaseEntity_o *)v16;
    if ( v16 )
    {
      v18 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v16)[18].monitor) < (unsigned int)v18
        || *((QuestScriptReleaseEntity_c **)(*v16)[12].monitor + v18 - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B77990(v16);
        goto LABEL_35;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v16[5],
             questId,
             (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v17, v19) )
      {
        v20 = 77;
        goto LABEL_25;
      }
    }
  }
  v17 = 0LL;
  v20 = 75;
LABEL_25:
  v26 = v20;
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  if ( v26 == 75 )
    return 0LL;
  return v17;
}


bool __fastcall QuestScriptReleaseMaster__IsMaterialCondTypeQuestClearOnly(
        QuestScriptReleaseMaster_o *this,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        bool isMainInterlude,
        System_Collections_Generic_List_QuestScriptReleaseEntity__o **questScriptReleaseEnt,
        int32_t *checkCnt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool v17; // w20
  System_String_array *v18; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lookup; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x24
  System_String_o *v56; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x24
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 v61; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *v62; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x24
  unsigned __int64 v64; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v65; // x11
  __int64 v66; // x0
  __int64 v67; // x10
  int32_t version; // w8
  __int64 v70; // x0
  __int64 v71; // x0
  int i; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v74; // [xsp+18h] [xbp-58h] BYREF
  int32_t v75; // [xsp+1Ch] [xbp-54h] BYREF

  v74 = scriptPhase;
  v75 = scriptQuestId;
  if ( (byte_4389953 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_B775C4(&QuestScriptReleaseEntity_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389953 = 1;
  }
  *checkCnt = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)questScriptReleaseEnt,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v18 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v75, 0LL);
    if ( !v18 )
      goto LABEL_59;
    v27 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77684(lookup, v18->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_60:
        v71 = sub_B776BC();
        sub_B77668(v71, 0LL);
      }
    }
    if ( !v18->max_length )
      goto LABEL_58;
    v18->m_Items[0] = (System_String_o *)v27;
    sub_B77560((BattleServantConfConponent_o *)v18->m_Items, v27, v21, v22, v23, v24, v25, v26);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1252/*":"*/;
    if ( StringLiteral_1252/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77684(StringLiteral_1252/*":"*/, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v34 = (System_Int32_array **)StringLiteral_1252/*":"*/;
    }
    else
    {
      v34 = 0LL;
    }
    if ( v18->max_length <= 1 )
      goto LABEL_58;
    v18->m_Items[1] = (System_String_o *)v34;
    sub_B77560((BattleServantConfConponent_o *)&v18->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v74, 0LL);
    v41 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77684(lookup, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v18->max_length <= 2 )
      goto LABEL_58;
    v18->m_Items[2] = (System_String_o *)v41;
    sub_B77560((BattleServantConfConponent_o *)&v18->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1252/*":"*/;
    if ( StringLiteral_1252/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77684(StringLiteral_1252/*":"*/, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v48 = (System_Int32_array **)StringLiteral_1252/*":"*/;
    }
    else
    {
      v48 = 0LL;
    }
    if ( v18->max_length <= 3 )
    {
LABEL_58:
      v70 = sub_B776C8(lookup);
      sub_B77668(v70, 0LL);
    }
    v18->m_Items[3] = (System_String_o *)v48;
    sub_B77560((BattleServantConfConponent_o *)&v18->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&i, 0LL);
    v55 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77684(lookup, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v18->max_length <= 4 )
      goto LABEL_58;
    v18->m_Items[4] = (System_String_o *)v55;
    sub_B77560((BattleServantConfConponent_o *)&v18->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
    v56 = System_String__Concat_44982964(v18, 0LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_59:
      sub_B7769C(lookup, v20);
    klass = lookup->klass;
    v58 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v59 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v59;
        p_offset += 4;
        if ( v59 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v61 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v61 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v61)(
            v58,
            v56,
            *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_59;
    v62 = lookup->klass;
    v63 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v64 = 0LL;
      v65 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v62->_1.interfaceOffsets->offset;
      while ( *(v65 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v64;
        v65 += 2;
        if ( v64 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v66 = (__int64)(&v62->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v65);
    }
    else
    {
LABEL_37:
      v66 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v66)(v63, v56, *(_QWORD *)(v66 + 8));
    if ( lookup
      && (v67 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v67) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v67 - 1] == QuestScriptReleaseEntity_TypeInfo )
        v20 = lookup;
      else
        v20 = 0LL;
      if ( isMainInterlude )
      {
LABEL_42:
        if ( !v20 )
          goto LABEL_59;
        if ( (v20->fields._version & 0x20) != 0 )
          goto LABEL_51;
        continue;
      }
    }
    else
    {
      v20 = 0LL;
      if ( isMainInterlude )
        goto LABEL_42;
    }
    if ( !v20 )
      goto LABEL_59;
    if ( (v20->fields._version & 0x20) == 0 )
    {
LABEL_51:
      ++*checkCnt;
      version = v20->fields._version;
      if ( (version & 8) != 0 )
      {
        v17 = 0;
        if ( (version & 0x10) == 0 && LODWORD(v20->fields._syncRoot) == 1 )
        {
          lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*questScriptReleaseEnt;
          if ( !*questScriptReleaseEnt )
            goto LABEL_59;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lookup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
          v17 = 1;
        }
      }
    }
  }
  return v17;
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
  System_Array_o *v13; // x25
  const MethodInfo *v14; // x5
  bool v15; // w0
  System_String_array *v16; // x22
  DataManager_o *lookup; // x0
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x25
  _BOOL4 v26; // w19
  bool v27; // w21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x23
  System_String_o *v56; // x22
  DataManager_c *klass; // x8
  DataManager_o *v58; // x23
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 v61; // x0
  DataManager_c *v62; // x8
  DataManager_o *v63; // x23
  unsigned __int64 v64; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v65; // x11
  __int64 v66; // x0
  __int64 v67; // x10
  DataManager_o *v68; // x22
  UserQuestMaster_o *v69; // x23
  __int64 v71; // x0
  __int64 v72; // x0
  char v73; // [xsp+10h] [xbp-60h]
  int v74; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v75; // [xsp+18h] [xbp-58h] BYREF
  int32_t v76; // [xsp+1Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v77; // 0:w1.4

  v75 = scriptPhase;
  v76 = scriptQuestId;
  if ( (byte_4389954 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&QuestScriptReleaseEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389954 = 1;
  }
  v74 = 0;
  v13 = (System_Array_o *)sub_B775DC(int___TypeInfo, 7LL);
  v77.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v13, v77, 0LL);
  if ( (System_Array__IndexOf_int_(
          (System_Int32_array *)v13,
          scriptQuestId,
          (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v74 = 1;
    v16 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v76, 0LL);
    if ( !v16 )
      goto LABEL_72;
    v73 = 0;
    v25 = (System_Int32_array **)lookup;
    v26 = kind == 3 && isMainInterlude;
    v27 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( v25 )
      {
        lookup = (DataManager_o *)sub_B77684(v25, v16->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_73:
          v72 = sub_B776BC();
          sub_B77668(v72, 0LL);
        }
      }
      if ( !v16->max_length )
        goto LABEL_71;
      v16->m_Items[0] = (System_String_o *)v25;
      sub_B77560((BattleServantConfConponent_o *)v16->m_Items, v25, v19, v20, v21, v22, v23, v24);
      lookup = (DataManager_o *)StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B77684(StringLiteral_1252/*":"*/, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v34 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v34 = 0LL;
      }
      if ( v16->max_length <= 1 )
        goto LABEL_71;
      v16->m_Items[1] = (System_String_o *)v34;
      sub_B77560((BattleServantConfConponent_o *)&v16->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v75, 0LL);
      v41 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B77684(lookup, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v16->max_length <= 2 )
        goto LABEL_71;
      v16->m_Items[2] = (System_String_o *)v41;
      sub_B77560((BattleServantConfConponent_o *)&v16->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
      lookup = (DataManager_o *)StringLiteral_1252/*":"*/;
      if ( StringLiteral_1252/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B77684(StringLiteral_1252/*":"*/, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v48 = (System_Int32_array **)StringLiteral_1252/*":"*/;
      }
      else
      {
        v48 = 0LL;
      }
      if ( v16->max_length <= 3 )
      {
LABEL_71:
        v71 = sub_B776C8(lookup);
        sub_B77668(v71, 0LL);
      }
      v16->m_Items[3] = (System_String_o *)v48;
      sub_B77560((BattleServantConfConponent_o *)&v16->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v74, 0LL);
      v55 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B77684(lookup, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v16->max_length <= 4 )
        goto LABEL_71;
      v16->m_Items[4] = (System_String_o *)v55;
      sub_B77560((BattleServantConfConponent_o *)&v16->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
      v56 = System_String__Concat_44982964(v16, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      klass = lookup->klass;
      v58 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v59 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v59;
          p_offset += 4;
          if ( v59 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v61 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v61 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v61)(v58, v56, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      {
        v15 = v73;
        *isOpen = 1;
        return v15;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v62 = lookup->klass;
      v63 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v64 = 0LL;
        v65 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v62->_1.interfaceOffsets->offset;
        while ( *(v65 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v64;
          v65 += 2;
          if ( v64 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_39;
        }
        v66 = (__int64)(&v62->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v65);
      }
      else
      {
LABEL_39:
        v66 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v66)(
                                  v63,
                                  v56,
                                  *(_QWORD *)(v66 + 8));
      if ( lookup
        && (v67 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
            *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v67) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v67 - 1] == QuestScriptReleaseEntity_TypeInfo )
          v68 = lookup;
        else
          v68 = 0LL;
        if ( v26 )
        {
LABEL_44:
          if ( !v68 )
            goto LABEL_72;
          if ( (BYTE4(v68->fields.datalist) & 0x20) == 0 )
            goto LABEL_54;
        }
      }
      else
      {
        v68 = 0LL;
        if ( v26 )
          goto LABEL_44;
      }
      if ( v27 )
        goto LABEL_58;
      if ( !v68 )
        goto LABEL_72;
      if ( (BYTE4(v68->fields.datalist) & 0x20) == 0 )
      {
LABEL_58:
        lookup = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    lookup,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v68 )
          goto LABEL_72;
        if ( (HIDWORD(v68->fields.datalist) & (1 << kind)) != 0 )
        {
          v69 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v68, v18) )
          {
            if ( LODWORD(v68->fields.lookup) != 1 )
              goto LABEL_70;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v69 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v69,
                     (int64_t)lookup,
                     (System_Int32_array *)v68->fields.masterDataBytes,
                     0LL) )
              {
                v15 = 1;
                *isOpen = 1;
                return v15;
              }
LABEL_70:
              v15 = 1;
              *isOpen = 0;
              return v15;
            }
LABEL_72:
            sub_B7769C(lookup, v18);
          }
          v73 = 1;
        }
      }
LABEL_54:
      ++v74;
      v16 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v76, 0LL);
      v25 = (System_Int32_array **)lookup;
      if ( !v16 )
        goto LABEL_72;
    }
  }
  return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v14);
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
  System_String_array *v8; // x21
  QuestScriptReleaseEntity_o *lookup; // x0
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int v17; // w26
  System_Int32_array **v18; // x23
  char v19; // w25
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
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
  System_Int32_array **v47; // x22
  System_String_o *v48; // x21
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v50; // x22
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 v53; // x0
  QuestScriptReleaseEntity_c *v54; // x8
  QuestScriptReleaseEntity_o *v55; // x22
  unsigned __int64 v56; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v57; // x11
  __int64 v58; // x0
  __int64 v59; // x10
  bool v60; // w8
  bool result; // w0
  __int64 v62; // x0
  __int64 v63; // x0
  int v65; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v66; // [xsp+18h] [xbp-58h] BYREF
  int32_t v67; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = kind;
  v66 = scriptPhase;
  v67 = scriptQuestId;
  if ( (byte_4389955 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&QuestScriptReleaseEntity_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_4389955 = 1;
  }
  v65 = 1;
  v8 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v67, 0LL);
  if ( !v8 )
LABEL_45:
    sub_B7769C(lookup, v10);
  v17 = 1 << v6;
  v18 = (System_Int32_array **)lookup;
  v19 = 0;
  while ( 1 )
  {
    if ( v18 )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B77684(v18, v8->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_50:
        v63 = sub_B776BC();
        sub_B77668(v63, 0LL);
      }
    }
    if ( !v8->max_length )
      goto LABEL_49;
    v8->m_Items[0] = (System_String_o *)v18;
    sub_B77560((BattleServantConfConponent_o *)v8->m_Items, v18, v11, v12, v13, v14, v15, v16);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1252/*":"*/;
    if ( StringLiteral_1252/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B77684(StringLiteral_1252/*":"*/, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v26 = (System_Int32_array **)StringLiteral_1252/*":"*/;
    }
    else
    {
      v26 = 0LL;
    }
    if ( v8->max_length <= 1 )
      goto LABEL_49;
    v8->m_Items[1] = (System_String_o *)v26;
    sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v66, 0LL);
    v33 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B77684(lookup, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v8->max_length <= 2 )
      goto LABEL_49;
    v8->m_Items[2] = (System_String_o *)v33;
    sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1252/*":"*/;
    if ( StringLiteral_1252/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B77684(StringLiteral_1252/*":"*/, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v40 = (System_Int32_array **)StringLiteral_1252/*":"*/;
    }
    else
    {
      v40 = 0LL;
    }
    if ( v8->max_length <= 3 )
    {
LABEL_49:
      v62 = sub_B776C8(lookup);
      sub_B77668(v62, 0LL);
    }
    v8->m_Items[3] = (System_String_o *)v40;
    sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v65, 0LL);
    v47 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B77684(lookup, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v8->max_length <= 4 )
      goto LABEL_49;
    v8->m_Items[4] = (System_String_o *)v47;
    sub_B77560((BattleServantConfConponent_o *)&v8->m_Items[4], v47, v41, v42, v43, v44, v45, v46);
    v48 = System_String__Concat_44982964(v8, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    klass = lookup->klass;
    v50 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v51 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v51;
        p_offset += 4;
        if ( v51 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v53 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v53)(
            v50,
            v48,
            *(_QWORD *)(v53 + 8)) & 1) == 0 )
    {
      v60 = 0;
      goto LABEL_48;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    v54 = lookup->klass;
    v55 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      v57 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v54->_1.interfaceOffsets->offset;
      while ( *(v57 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v56;
        v57 += 2;
        if ( v56 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v58 = (__int64)(&v54->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v57);
    }
    else
    {
LABEL_37:
      v58 = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v58)(
                                             v55,
                                             v48,
                                             *(_QWORD *)(v58 + 8));
    if ( !lookup )
      goto LABEL_45;
    v59 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v59
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v59 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_45;
    }
    if ( (lookup->fields.flag & v17) != 0 )
    {
      v19 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v10) )
        break;
    }
    ++v65;
    v8 = (System_String_array *)sub_B775DC(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v67, 0LL);
    v18 = (System_Int32_array **)lookup;
    if ( !v8 )
      goto LABEL_45;
  }
  v60 = 1;
LABEL_48:
  result = v19 & 1;
  *isOpen = v60;
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

  if ( (byte_4389951 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
    byte_4389951 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}