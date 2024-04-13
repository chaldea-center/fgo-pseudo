void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F38 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6F38 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    172,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_42E6F36 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      scriptId,
      phase,
      *(_QWORD *)&id);
    byte_42E6F36 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestScriptReleaseMaster__GetScriptQuestId(
        QuestScriptReleaseMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        int32_t kind,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v16; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E6F3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, questId, phaseCnt, *(_QWORD *)&kind);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E6F3C = 1;
  }
  isOpen[0] = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  ScriptQuestId = QuestMaster__getScriptQuestId((QuestMaster_o *)Instance, questId, 0LL);
  if ( kind == 3 )
    return ScriptQuestId;
  if ( QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, phaseCnt, kind, 0, v14) )
  {
    if ( !isOpen[0] )
      return 0;
    return ScriptQuestId;
  }
  if ( !QuestScriptReleaseMaster__IsOpenPhase(this, isOpen, ScriptQuestId, 0, kind, 0, v16) )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v33; // x0
  QuestScriptReleaseEntity_o *v34; // x21
  __int64 v35; // x9
  const MethodInfo *v36; // x1
  int v37; // w8
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  int v43; // [xsp+0h] [xbp-50h]

  if ( (byte_42E6F3D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      questId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&QuestScriptReleaseEntity_TypeInfo, v18, v19, v20);
    byte_42E6F3D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B5D69C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v32 + 8));
    v34 = (QuestScriptReleaseEntity_o *)v33;
    if ( v33 )
    {
      v35 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v33)[18].monitor) < (unsigned int)v35
        || *((QuestScriptReleaseEntity_c **)(*v33)[12].monitor + v35 - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D990(v33);
        goto LABEL_35;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v33[5],
             questId,
             (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v34, v36) )
      {
        v37 = 77;
        goto LABEL_25;
      }
    }
  }
  v34 = 0LL;
  v37 = 75;
LABEL_25:
  v43 = v37;
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_29:
    v41 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  if ( v43 == 75 )
    return 0LL;
  return v34;
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool v35; // w20
  System_String_array *v36; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lookup; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x24
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x24
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x24
  System_String_o *v74; // x23
  __int64 v75; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x24
  unsigned __int64 v78; // x10
  int32_t *p_offset; // x11
  __int64 v80; // x0
  __int64 v81; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *v82; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x24
  unsigned __int64 v84; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v85; // x11
  __int64 v86; // x0
  __int64 v87; // x10
  int32_t version; // w8
  __int64 v90; // x0
  __int64 v91; // x0
  int i; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v94; // [xsp+18h] [xbp-58h] BYREF
  int32_t v95; // [xsp+1Ch] [xbp-54h] BYREF

  v94 = scriptPhase;
  v95 = scriptQuestId;
  if ( (byte_42E6F39 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      scriptQuestId,
      scriptPhase,
      isMainInterlude);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&QuestScriptReleaseEntity_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&string___TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v25, v26, v27);
    byte_42E6F39 = 1;
  }
  *checkCnt = 0;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)questScriptReleaseEnt,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v36 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v95, 0LL);
    if ( !v36 )
      goto LABEL_59;
    v45 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D684(lookup, v36->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_60:
        v91 = sub_B5D6BC();
        sub_B5D668(v91, 0LL);
      }
    }
    if ( !v36->max_length )
      goto LABEL_58;
    v36->m_Items[0] = (System_String_o *)v45;
    sub_B5D560((BattleServantConfConponent_o *)v36->m_Items, v45, v39, v40, v41, v42, v43, v44);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1245/*":"*/;
    if ( StringLiteral_1245/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D684(StringLiteral_1245/*":"*/, v36->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v52 = (System_Int32_array **)StringLiteral_1245/*":"*/;
    }
    else
    {
      v52 = 0LL;
    }
    if ( v36->max_length <= 1 )
      goto LABEL_58;
    v36->m_Items[1] = (System_String_o *)v52;
    sub_B5D560((BattleServantConfConponent_o *)&v36->m_Items[1], v52, v46, v47, v48, v49, v50, v51);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v94, 0LL);
    v59 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D684(lookup, v36->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v36->max_length <= 2 )
      goto LABEL_58;
    v36->m_Items[2] = (System_String_o *)v59;
    sub_B5D560((BattleServantConfConponent_o *)&v36->m_Items[2], v59, v53, v54, v55, v56, v57, v58);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1245/*":"*/;
    if ( StringLiteral_1245/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D684(StringLiteral_1245/*":"*/, v36->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v66 = (System_Int32_array **)StringLiteral_1245/*":"*/;
    }
    else
    {
      v66 = 0LL;
    }
    if ( v36->max_length <= 3 )
    {
LABEL_58:
      v90 = sub_B5D6C8(lookup);
      sub_B5D668(v90, 0LL);
    }
    v36->m_Items[3] = (System_String_o *)v66;
    sub_B5D560((BattleServantConfConponent_o *)&v36->m_Items[3], v66, v60, v61, v62, v63, v64, v65);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&i, 0LL);
    v73 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D684(lookup, v36->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v36->max_length <= 4 )
      goto LABEL_58;
    v36->m_Items[4] = (System_String_o *)v73;
    sub_B5D560((BattleServantConfConponent_o *)&v36->m_Items[4], v73, v67, v68, v69, v70, v71, v72);
    v74 = System_String__Concat_44657912(v36, 0LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_59:
      sub_B5D69C(lookup, v38);
    klass = lookup->klass;
    v77 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v78 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v78;
        p_offset += 4;
        if ( v78 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v80 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v80 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v75);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v80)(
            v77,
            v74,
            *(_QWORD *)(v80 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_59;
    v82 = lookup->klass;
    v83 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v84 = 0LL;
      v85 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v82->_1.interfaceOffsets->offset;
      while ( *(v85 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v84;
        v85 += 2;
        if ( v84 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v86 = (__int64)(&v82->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v85);
    }
    else
    {
LABEL_37:
      v86 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v81);
    }
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v86)(v83, v74, *(_QWORD *)(v86 + 8));
    if ( lookup
      && (v87 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v87) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v87 - 1] == QuestScriptReleaseEntity_TypeInfo )
        v38 = lookup;
      else
        v38 = 0LL;
      if ( isMainInterlude )
      {
LABEL_42:
        if ( !v38 )
          goto LABEL_59;
        if ( (v38->fields._version & 0x20) != 0 )
          goto LABEL_51;
        continue;
      }
    }
    else
    {
      v38 = 0LL;
      if ( isMainInterlude )
        goto LABEL_42;
    }
    if ( !v38 )
      goto LABEL_59;
    if ( (v38->fields._version & 0x20) == 0 )
    {
LABEL_51:
      ++*checkCnt;
      version = v38->fields._version;
      if ( (version & 8) != 0 )
      {
        v35 = 0;
        if ( (version & 0x10) == 0 && LODWORD(v38->fields._syncRoot) == 1 )
        {
          lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*questScriptReleaseEnt;
          if ( !*questScriptReleaseEnt )
            goto LABEL_59;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lookup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
          v35 = 1;
        }
      }
    }
  }
  return v35;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__IsOpenPhase(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        bool isMainInterlude,
        const MethodInfo *method)
{
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  System_Array_o *v40; // x25
  const MethodInfo *v41; // x5
  bool v42; // w0
  System_String_array *v43; // x22
  DataManager_o *lookup; // x0
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x25
  _BOOL4 v53; // w19
  bool v54; // w21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x23
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x23
  System_String_o *v83; // x22
  __int64 v84; // x3
  DataManager_c *klass; // x8
  DataManager_o *v86; // x23
  unsigned __int64 v87; // x10
  int32_t *p_offset; // x11
  __int64 v89; // x0
  __int64 v90; // x3
  DataManager_c *v91; // x8
  DataManager_o *v92; // x23
  unsigned __int64 v93; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v94; // x11
  __int64 v95; // x0
  __int64 v96; // x10
  DataManager_o *v97; // x22
  UserQuestMaster_o *v98; // x23
  __int64 v100; // x0
  __int64 v101; // x0
  char v102; // [xsp+10h] [xbp-60h]
  int v103; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v104; // [xsp+18h] [xbp-58h] BYREF
  int32_t v105; // [xsp+1Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v106; // 0:w1.4

  v104 = scriptPhase;
  v105 = scriptQuestId;
  if ( (byte_42E6F3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)isOpen, scriptQuestId, *(_QWORD *)&scriptPhase);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&int___TypeInfo, v19, v20, v21);
    sub_B5D5C4(&NetworkManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&QuestScriptReleaseEntity_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&string___TypeInfo, v31, v32, v33);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v34,
      v35,
      v36);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v37, v38, v39);
    byte_42E6F3A = 1;
  }
  v103 = 0;
  v40 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 7LL);
  v106.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v40, v106, 0LL);
  if ( (System_Array__IndexOf_int_(
          (System_Int32_array *)v40,
          scriptQuestId,
          (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v103 = 1;
    v43 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v105, 0LL);
    if ( !v43 )
      goto LABEL_72;
    v102 = 0;
    v52 = (System_Int32_array **)lookup;
    v53 = kind == 3 && isMainInterlude;
    v54 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( v52 )
      {
        lookup = (DataManager_o *)sub_B5D684(v52, v43->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_73:
          v101 = sub_B5D6BC();
          sub_B5D668(v101, 0LL);
        }
      }
      if ( !v43->max_length )
        goto LABEL_71;
      v43->m_Items[0] = (System_String_o *)v52;
      sub_B5D560((BattleServantConfConponent_o *)v43->m_Items, v52, v46, v47, v48, v49, v50, v51);
      lookup = (DataManager_o *)StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v43->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v61 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v61 = 0LL;
      }
      if ( v43->max_length <= 1 )
        goto LABEL_71;
      v43->m_Items[1] = (System_String_o *)v61;
      sub_B5D560((BattleServantConfConponent_o *)&v43->m_Items[1], v61, v55, v56, v57, v58, v59, v60);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v104, 0LL);
      v68 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B5D684(lookup, v43->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v43->max_length <= 2 )
        goto LABEL_71;
      v43->m_Items[2] = (System_String_o *)v68;
      sub_B5D560((BattleServantConfConponent_o *)&v43->m_Items[2], v68, v62, v63, v64, v65, v66, v67);
      lookup = (DataManager_o *)StringLiteral_1245/*":"*/;
      if ( StringLiteral_1245/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B5D684(StringLiteral_1245/*":"*/, v43->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v75 = (System_Int32_array **)StringLiteral_1245/*":"*/;
      }
      else
      {
        v75 = 0LL;
      }
      if ( v43->max_length <= 3 )
      {
LABEL_71:
        v100 = sub_B5D6C8(lookup);
        sub_B5D668(v100, 0LL);
      }
      v43->m_Items[3] = (System_String_o *)v75;
      sub_B5D560((BattleServantConfConponent_o *)&v43->m_Items[3], v75, v69, v70, v71, v72, v73, v74);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v103, 0LL);
      v82 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B5D684(lookup, v43->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v43->max_length <= 4 )
        goto LABEL_71;
      v43->m_Items[4] = (System_String_o *)v82;
      sub_B5D560((BattleServantConfConponent_o *)&v43->m_Items[4], v82, v76, v77, v78, v79, v80, v81);
      v83 = System_String__Concat_44657912(v43, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      klass = lookup->klass;
      v86 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v87 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v87;
          p_offset += 4;
          if ( v87 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v89 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v89 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v84);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v89)(v86, v83, *(_QWORD *)(v89 + 8)) & 1) == 0 )
      {
        v42 = v102;
        *isOpen = 1;
        return v42;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v91 = lookup->klass;
      v92 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v93 = 0LL;
        v94 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v91->_1.interfaceOffsets->offset;
        while ( *(v94 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v93;
          v94 += 2;
          if ( v93 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_39;
        }
        v95 = (__int64)(&v91->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v94);
      }
      else
      {
LABEL_39:
        v95 = sub_AF54C0(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v90);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v95)(
                                  v92,
                                  v83,
                                  *(_QWORD *)(v95 + 8));
      if ( lookup
        && (v96 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
            *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v96) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v96 - 1] == QuestScriptReleaseEntity_TypeInfo )
          v97 = lookup;
        else
          v97 = 0LL;
        if ( v53 )
        {
LABEL_44:
          if ( !v97 )
            goto LABEL_72;
          if ( (BYTE4(v97->fields.datalist) & 0x20) == 0 )
            goto LABEL_54;
        }
      }
      else
      {
        v97 = 0LL;
        if ( v53 )
          goto LABEL_44;
      }
      if ( v54 )
        goto LABEL_58;
      if ( !v97 )
        goto LABEL_72;
      if ( (BYTE4(v97->fields.datalist) & 0x20) == 0 )
      {
LABEL_58:
        lookup = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    lookup,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v97 )
          goto LABEL_72;
        if ( (HIDWORD(v97->fields.datalist) & (1 << kind)) != 0 )
        {
          v98 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v97, v45) )
          {
            if ( LODWORD(v97->fields.lookup) != 1 )
              goto LABEL_70;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v98 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v98,
                     (int64_t)lookup,
                     (System_Int32_array *)v97->fields.masterDataBytes,
                     0LL) )
              {
                v42 = 1;
                *isOpen = 1;
                return v42;
              }
LABEL_70:
              v42 = 1;
              *isOpen = 0;
              return v42;
            }
LABEL_72:
            sub_B5D69C(lookup, v45);
          }
          v102 = 1;
        }
      }
LABEL_54:
      ++v103;
      v43 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v105, 0LL);
      v52 = (System_Int32_array **)lookup;
      if ( !v43 )
        goto LABEL_72;
    }
  }
  return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v41);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(
        QuestScriptReleaseMaster_o *this,
        bool *isOpen,
        int32_t scriptQuestId,
        int32_t scriptPhase,
        int32_t kind,
        const MethodInfo *method)
{
  char v6; // w22
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_array *v17; // x21
  QuestScriptReleaseEntity_o *lookup; // x0
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w26
  System_Int32_array **v27; // x23
  char v28; // w25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_String_o *v57; // x21
  __int64 v58; // x3
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v60; // x22
  unsigned __int64 v61; // x10
  int32_t *p_offset; // x11
  __int64 v63; // x0
  __int64 v64; // x3
  QuestScriptReleaseEntity_c *v65; // x8
  QuestScriptReleaseEntity_o *v66; // x22
  unsigned __int64 v67; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v68; // x11
  __int64 v69; // x0
  __int64 v70; // x10
  bool v71; // w8
  bool result; // w0
  __int64 v73; // x0
  __int64 v74; // x0
  int v76; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v77; // [xsp+18h] [xbp-58h] BYREF
  int32_t v78; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = kind;
  v77 = scriptPhase;
  v78 = scriptQuestId;
  if ( (byte_42E6F3B & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      (_DWORD)isOpen,
      scriptQuestId,
      *(_QWORD *)&scriptPhase);
    sub_B5D5C4(&QuestScriptReleaseEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v14, v15, v16);
    byte_42E6F3B = 1;
  }
  v76 = 1;
  v17 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v78, 0LL);
  if ( !v17 )
LABEL_45:
    sub_B5D69C(lookup, v19);
  v26 = 1 << v6;
  v27 = (System_Int32_array **)lookup;
  v28 = 0;
  while ( 1 )
  {
    if ( v27 )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B5D684(v27, v17->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_50:
        v74 = sub_B5D6BC();
        sub_B5D668(v74, 0LL);
      }
    }
    if ( !v17->max_length )
      goto LABEL_49;
    v17->m_Items[0] = (System_String_o *)v27;
    sub_B5D560((BattleServantConfConponent_o *)v17->m_Items, v27, v20, v21, v22, v23, v24, v25);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1245/*":"*/;
    if ( StringLiteral_1245/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v35 = (System_Int32_array **)StringLiteral_1245/*":"*/;
    }
    else
    {
      v35 = 0LL;
    }
    if ( v17->max_length <= 1 )
      goto LABEL_49;
    v17->m_Items[1] = (System_String_o *)v35;
    sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v77, 0LL);
    v42 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v17->max_length <= 2 )
      goto LABEL_49;
    v17->m_Items[2] = (System_String_o *)v42;
    sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1245/*":"*/;
    if ( StringLiteral_1245/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B5D684(StringLiteral_1245/*":"*/, v17->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v49 = (System_Int32_array **)StringLiteral_1245/*":"*/;
    }
    else
    {
      v49 = 0LL;
    }
    if ( v17->max_length <= 3 )
    {
LABEL_49:
      v73 = sub_B5D6C8(lookup);
      sub_B5D668(v73, 0LL);
    }
    v17->m_Items[3] = (System_String_o *)v49;
    sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v76, 0LL);
    v56 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B5D684(lookup, v17->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v17->max_length <= 4 )
      goto LABEL_49;
    v17->m_Items[4] = (System_String_o *)v56;
    sub_B5D560((BattleServantConfConponent_o *)&v17->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
    v57 = System_String__Concat_44657912(v17, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    klass = lookup->klass;
    v60 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v61 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v61;
        p_offset += 4;
        if ( v61 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v63 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v63 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v58);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v63)(
            v60,
            v57,
            *(_QWORD *)(v63 + 8)) & 1) == 0 )
    {
      v71 = 0;
      goto LABEL_48;
    }
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    v65 = lookup->klass;
    v66 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v67 = 0LL;
      v68 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v65->_1.interfaceOffsets->offset;
      while ( *(v68 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v67;
        v68 += 2;
        if ( v67 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v69 = (__int64)(&v65->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v68);
    }
    else
    {
LABEL_37:
      v69 = sub_AF54C0(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v64);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v69)(
                                             v66,
                                             v57,
                                             *(_QWORD *)(v69 + 8));
    if ( !lookup )
      goto LABEL_45;
    v70 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v70
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v70 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_45;
    }
    if ( (lookup->fields.flag & v26) != 0 )
    {
      v28 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v19) )
        break;
    }
    ++v76;
    v17 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v78, 0LL);
    v27 = (System_Int32_array **)lookup;
    if ( !v17 )
      goto LABEL_45;
  }
  v71 = 1;
LABEL_48:
  result = v28 & 1;
  *isOpen = v71;
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

  if ( (byte_42E6F37 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      scriptId,
      *(_QWORD *)&phase);
    byte_42E6F37 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}