void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4C7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
    byte_42AE4C7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    172,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_42AE4C5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
    byte_42AE4C5 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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

  if ( (byte_42AE4CB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE4CB = 1;
  }
  isOpen[0] = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v10);
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
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o **v17; // x0
  QuestScriptReleaseEntity_o *v18; // x21
  __int64 v19; // x9
  const MethodInfo *v20; // x1
  int v21; // w8
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v27; // [xsp+0h] [xbp-50h]

  if ( (byte_42AE4CC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestScriptReleaseEntity_TypeInfo);
    byte_42AE4CC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
    sub_B52A5C(list, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
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
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                                                  Enumerator,
                                                                  *(_QWORD *)(v16 + 8));
    v18 = (QuestScriptReleaseEntity_o *)v17;
    if ( v17 )
    {
      v19 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( BYTE4((*v17)[18].monitor) < (unsigned int)v19
        || *((QuestScriptReleaseEntity_c **)(*v17)[12].monitor + v19 - 1) != QuestScriptReleaseEntity_TypeInfo )
      {
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B52D50(v17);
        goto LABEL_35;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v17[5],
             questId,
             (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___)
        && QuestScriptReleaseEntity__IsOpen(v18, v20) )
      {
        v21 = 77;
        goto LABEL_25;
      }
    }
  }
  v18 = 0LL;
  v21 = 75;
LABEL_25:
  v27 = v21;
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v27 == 75 )
    return 0LL;
  return v18;
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
  __int64 v57; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *klass; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x24
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 v62; // x0
  __int64 v63; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__c *v64; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x24
  unsigned __int64 v66; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v67; // x11
  __int64 v68; // x0
  __int64 v69; // x10
  int32_t version; // w8
  __int64 v72; // x0
  __int64 v73; // x0
  int i; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v76; // [xsp+18h] [xbp-58h] BYREF
  int32_t v77; // [xsp+1Ch] [xbp-54h] BYREF

  v76 = scriptPhase;
  v77 = scriptQuestId;
  if ( (byte_42AE4C8 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_B52984(&QuestScriptReleaseEntity_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42AE4C8 = 1;
  }
  *checkCnt = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v10;
  sub_B52920(
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
    v18 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v77, 0LL);
    if ( !v18 )
      goto LABEL_59;
    v27 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A44(lookup, v18->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_60:
        v73 = sub_B52A7C();
        sub_B52A28(v73, 0LL);
      }
    }
    if ( !v18->max_length )
      goto LABEL_58;
    v18->m_Items[0] = (System_String_o *)v27;
    sub_B52920((BattleServantConfConponent_o *)v18->m_Items, v27, v21, v22, v23, v24, v25, v26);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1240/*":"*/;
    if ( StringLiteral_1240/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A44(StringLiteral_1240/*":"*/, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v34 = (System_Int32_array **)StringLiteral_1240/*":"*/;
    }
    else
    {
      v34 = 0LL;
    }
    if ( v18->max_length <= 1 )
      goto LABEL_58;
    v18->m_Items[1] = (System_String_o *)v34;
    sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&v76, 0LL);
    v41 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A44(lookup, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v18->max_length <= 2 )
      goto LABEL_58;
    v18->m_Items[2] = (System_String_o *)v41;
    sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)StringLiteral_1240/*":"*/;
    if ( StringLiteral_1240/*":"*/ )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A44(StringLiteral_1240/*":"*/, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
      v48 = (System_Int32_array **)StringLiteral_1240/*":"*/;
    }
    else
    {
      v48 = 0LL;
    }
    if ( v18->max_length <= 3 )
    {
LABEL_58:
      v72 = sub_B52A88(lookup);
      sub_B52A28(v72, 0LL);
    }
    v18->m_Items[3] = (System_String_o *)v48;
    sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Int32__ToString((int32_t)&i, 0LL);
    v55 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A44(lookup, v18->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_60;
    }
    if ( v18->max_length <= 4 )
      goto LABEL_58;
    v18->m_Items[4] = (System_String_o *)v55;
    sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
    v56 = System_String__Concat_44648440(v18, 0LL);
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_59:
      sub_B52A5C(lookup, v20);
    klass = lookup->klass;
    v59 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v60;
        p_offset += 4;
        if ( v60 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v62 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v62 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v57);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v62)(
            v59,
            v56,
            *(_QWORD *)(v62 + 8)) & 1) == 0 )
      break;
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_59;
    v64 = lookup->klass;
    v65 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v66 = 0LL;
      v67 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v64->_1.interfaceOffsets->offset;
      while ( *(v67 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v66;
        v67 += 2;
        if ( v66 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v68 = (__int64)(&v64->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v67);
    }
    else
    {
LABEL_37:
      v68 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v63);
    }
    lookup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *, System_String_o *, _QWORD))v68)(v65, v56, *(_QWORD *)(v68 + 8));
    if ( lookup
      && (v69 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v69) )
    {
      if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v69 - 1] == QuestScriptReleaseEntity_TypeInfo )
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
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
  __int64 v57; // x3
  DataManager_c *klass; // x8
  DataManager_o *v59; // x23
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 v62; // x0
  __int64 v63; // x3
  DataManager_c *v64; // x8
  DataManager_o *v65; // x23
  unsigned __int64 v66; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v67; // x11
  __int64 v68; // x0
  __int64 v69; // x10
  DataManager_o *v70; // x22
  UserQuestMaster_o *v71; // x23
  __int64 v73; // x0
  __int64 v74; // x0
  char v75; // [xsp+10h] [xbp-60h]
  int v76; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v77; // [xsp+18h] [xbp-58h] BYREF
  int32_t v78; // [xsp+1Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v79; // 0:w1.4

  v77 = scriptPhase;
  v78 = scriptQuestId;
  if ( (byte_42AE4C9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_int___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestScriptReleaseEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42AE4C9 = 1;
  }
  v76 = 0;
  v13 = (System_Array_o *)sub_B5299C(int___TypeInfo, 7LL);
  v79.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v13, v79, 0LL);
  if ( (System_Array__IndexOf_int_(
          (System_Int32_array *)v13,
          scriptQuestId,
          (const MethodInfo_201BBC8 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v76 = 1;
    v16 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v78, 0LL);
    if ( !v16 )
      goto LABEL_72;
    v75 = 0;
    v25 = (System_Int32_array **)lookup;
    v26 = kind == 3 && isMainInterlude;
    v27 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( v25 )
      {
        lookup = (DataManager_o *)sub_B52A44(v25, v16->obj.klass->_1.element_class);
        if ( !lookup )
        {
LABEL_73:
          v74 = sub_B52A7C();
          sub_B52A28(v74, 0LL);
        }
      }
      if ( !v16->max_length )
        goto LABEL_71;
      v16->m_Items[0] = (System_String_o *)v25;
      sub_B52920((BattleServantConfConponent_o *)v16->m_Items, v25, v19, v20, v21, v22, v23, v24);
      lookup = (DataManager_o *)StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v34 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v34 = 0LL;
      }
      if ( v16->max_length <= 1 )
        goto LABEL_71;
      v16->m_Items[1] = (System_String_o *)v34;
      sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v77, 0LL);
      v41 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B52A44(lookup, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v16->max_length <= 2 )
        goto LABEL_71;
      v16->m_Items[2] = (System_String_o *)v41;
      sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
      lookup = (DataManager_o *)StringLiteral_1240/*":"*/;
      if ( StringLiteral_1240/*":"*/ )
      {
        lookup = (DataManager_o *)sub_B52A44(StringLiteral_1240/*":"*/, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
        v48 = (System_Int32_array **)StringLiteral_1240/*":"*/;
      }
      else
      {
        v48 = 0LL;
      }
      if ( v16->max_length <= 3 )
      {
LABEL_71:
        v73 = sub_B52A88(lookup);
        sub_B52A28(v73, 0LL);
      }
      v16->m_Items[3] = (System_String_o *)v48;
      sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v76, 0LL);
      v55 = (System_Int32_array **)lookup;
      if ( lookup )
      {
        lookup = (DataManager_o *)sub_B52A44(lookup, v16->obj.klass->_1.element_class);
        if ( !lookup )
          goto LABEL_73;
      }
      if ( v16->max_length <= 4 )
        goto LABEL_71;
      v16->m_Items[4] = (System_String_o *)v55;
      sub_B52920((BattleServantConfConponent_o *)&v16->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
      v56 = System_String__Concat_44648440(v16, 0LL);
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      klass = lookup->klass;
      v59 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v60 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v60;
          p_offset += 4;
          if ( v60 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        v62 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_31:
        v62 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v57);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v62)(v59, v56, *(_QWORD *)(v62 + 8)) & 1) == 0 )
      {
        v15 = v75;
        *isOpen = 1;
        return v15;
      }
      lookup = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
      v64 = lookup->klass;
      v65 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v66 = 0LL;
        v67 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v64->_1.interfaceOffsets->offset;
        while ( *(v67 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v66;
          v67 += 2;
          if ( v66 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_39;
        }
        v68 = (__int64)(&v64->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v67);
      }
      else
      {
LABEL_39:
        v68 = sub_AEB880(
                lookup,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                2LL,
                v63);
      }
      lookup = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v68)(
                                  v65,
                                  v56,
                                  *(_QWORD *)(v68 + 8));
      if ( lookup
        && (v69 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
            *(&lookup->klass->_2.bitflags2 + 1) >= (unsigned int)v69) )
      {
        if ( (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v69 - 1] == QuestScriptReleaseEntity_TypeInfo )
          v70 = lookup;
        else
          v70 = 0LL;
        if ( v26 )
        {
LABEL_44:
          if ( !v70 )
            goto LABEL_72;
          if ( (BYTE4(v70->fields.datalist) & 0x20) == 0 )
            goto LABEL_54;
        }
      }
      else
      {
        v70 = 0LL;
        if ( v26 )
          goto LABEL_44;
      }
      if ( v27 )
        goto LABEL_58;
      if ( !v70 )
        goto LABEL_72;
      if ( (BYTE4(v70->fields.datalist) & 0x20) == 0 )
      {
LABEL_58:
        lookup = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !lookup )
          goto LABEL_72;
        lookup = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    lookup,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v70 )
          goto LABEL_72;
        if ( (HIDWORD(v70->fields.datalist) & (1 << kind)) != 0 )
        {
          v71 = (UserQuestMaster_o *)lookup;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v70, v18) )
          {
            if ( LODWORD(v70->fields.lookup) != 1 )
              goto LABEL_70;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            lookup = (DataManager_o *)NetworkManager__get_UserId(0LL);
            if ( v71 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(
                     v71,
                     (int64_t)lookup,
                     (System_Int32_array *)v70->fields.masterDataBytes,
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
            sub_B52A5C(lookup, v18);
          }
          v75 = 1;
        }
      }
LABEL_54:
      ++v76;
      v16 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
      lookup = (DataManager_o *)System_Int32__ToString((int32_t)&v78, 0LL);
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
  __int64 v49; // x3
  QuestScriptReleaseEntity_c *klass; // x8
  QuestScriptReleaseEntity_o *v51; // x22
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  QuestScriptReleaseEntity_c *v56; // x8
  QuestScriptReleaseEntity_o *v57; // x22
  unsigned __int64 v58; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v59; // x11
  __int64 v60; // x0
  __int64 v61; // x10
  bool v62; // w8
  bool result; // w0
  __int64 v64; // x0
  __int64 v65; // x0
  int v67; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v68; // [xsp+18h] [xbp-58h] BYREF
  int32_t v69; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = kind;
  v68 = scriptPhase;
  v69 = scriptQuestId;
  if ( (byte_42AE4CA & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&QuestScriptReleaseEntity_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42AE4CA = 1;
  }
  v67 = 1;
  v8 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
  lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v69, 0LL);
  if ( !v8 )
LABEL_45:
    sub_B52A5C(lookup, v10);
  v17 = 1 << v6;
  v18 = (System_Int32_array **)lookup;
  v19 = 0;
  while ( 1 )
  {
    if ( v18 )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B52A44(v18, v8->obj.klass->_1.element_class);
      if ( !lookup )
      {
LABEL_50:
        v65 = sub_B52A7C();
        sub_B52A28(v65, 0LL);
      }
    }
    if ( !v8->max_length )
      goto LABEL_49;
    v8->m_Items[0] = (System_String_o *)v18;
    sub_B52920((BattleServantConfConponent_o *)v8->m_Items, v18, v11, v12, v13, v14, v15, v16);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1240/*":"*/;
    if ( StringLiteral_1240/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B52A44(StringLiteral_1240/*":"*/, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v26 = (System_Int32_array **)StringLiteral_1240/*":"*/;
    }
    else
    {
      v26 = 0LL;
    }
    if ( v8->max_length <= 1 )
      goto LABEL_49;
    v8->m_Items[1] = (System_String_o *)v26;
    sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v68, 0LL);
    v33 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B52A44(lookup, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v8->max_length <= 2 )
      goto LABEL_49;
    v8->m_Items[2] = (System_String_o *)v33;
    sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
    lookup = (QuestScriptReleaseEntity_o *)StringLiteral_1240/*":"*/;
    if ( StringLiteral_1240/*":"*/ )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B52A44(StringLiteral_1240/*":"*/, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
      v40 = (System_Int32_array **)StringLiteral_1240/*":"*/;
    }
    else
    {
      v40 = 0LL;
    }
    if ( v8->max_length <= 3 )
    {
LABEL_49:
      v64 = sub_B52A88(lookup);
      sub_B52A28(v64, 0LL);
    }
    v8->m_Items[3] = (System_String_o *)v40;
    sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[3], v40, v34, v35, v36, v37, v38, v39);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v67, 0LL);
    v47 = (System_Int32_array **)lookup;
    if ( lookup )
    {
      lookup = (QuestScriptReleaseEntity_o *)sub_B52A44(lookup, v8->obj.klass->_1.element_class);
      if ( !lookup )
        goto LABEL_50;
    }
    if ( v8->max_length <= 4 )
      goto LABEL_49;
    v8->m_Items[4] = (System_String_o *)v47;
    sub_B52920((BattleServantConfConponent_o *)&v8->m_Items[4], v47, v41, v42, v43, v44, v45, v46);
    v48 = System_String__Concat_44648440(v8, 0LL);
    lookup = (QuestScriptReleaseEntity_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    klass = lookup->klass;
    v51 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v52 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v52;
        p_offset += 4;
        if ( v52 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_29:
      v54 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              0LL,
              v49);
    }
    if ( ((*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v54)(
            v51,
            v48,
            *(_QWORD *)(v54 + 8)) & 1) == 0 )
    {
      v62 = 0;
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
      v60 = sub_AEB880(
              lookup,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v55);
    }
    lookup = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(QuestScriptReleaseEntity_o *, System_String_o *, _QWORD))v60)(
                                             v57,
                                             v48,
                                             *(_QWORD *)(v60 + 8));
    if ( !lookup )
      goto LABEL_45;
    v61 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&lookup->klass->_2.bitflags2 + 1) < (unsigned int)v61
      || (QuestScriptReleaseEntity_c *)lookup->klass->_2.typeHierarchy[v61 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_45;
    }
    if ( (lookup->fields.flag & v17) != 0 )
    {
      v19 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(lookup, v10) )
        break;
    }
    ++v67;
    v8 = (System_String_array *)sub_B5299C(string___TypeInfo, 5LL);
    lookup = (QuestScriptReleaseEntity_o *)System_Int32__ToString((int32_t)&v69, 0LL);
    v18 = (System_Int32_array **)lookup;
    if ( !v8 )
      goto LABEL_45;
  }
  v62 = 1;
LABEL_48:
  result = v19 & 1;
  *isOpen = v62;
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

  if ( (byte_42AE4C6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
    byte_42AE4C6 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}