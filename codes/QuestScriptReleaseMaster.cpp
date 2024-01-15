void __fastcall QuestScriptReleaseMaster___ctor(QuestScriptReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8257 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__, method);
    byte_40F8257 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    171,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string___ctor__);
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

  if ( (byte_40F8255 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__,
      *(_QWORD *)&scriptId);
    byte_40F8255 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&id);
  return (QuestScriptReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x6
  int32_t ScriptQuestId; // w22
  const MethodInfo *v14; // x6
  int32_t result; // w0
  bool isOpen[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F825B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F825B = 1;
  }
  isOpen[0] = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  ScriptQuestId = QuestMaster__getScriptQuestId(MasterData_WarQuestSelectionMaster, questId, 0LL);
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

  if ( (byte_40F825C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&QuestScriptReleaseEntity_TypeInfo, v9);
    byte_40F825C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_35:
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_B173C8(v20);
        goto LABEL_35;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             v20[5],
             questId,
             (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___)
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
    v28 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v23; // x2
  bool v24; // w20
  System_String_array *v25; // x23
  System_String_o *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x24
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x24
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x24
  System_String_o *v57; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v60; // x24
  unsigned __int64 v61; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v64; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v65; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v66; // x24
  unsigned __int64 v67; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v68; // x11
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x10
  __int64 v72; // x1
  int v73; // w8
  int i; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v77; // [xsp+18h] [xbp-58h] BYREF
  int32_t v78; // [xsp+1Ch] [xbp-54h] BYREF

  v77 = scriptPhase;
  v78 = scriptQuestId;
  if ( (byte_40F8258 & 1) == 0 )
  {
    sub_B16FFC(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      *(_QWORD *)&scriptQuestId);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v12);
    sub_B16FFC(&QuestScriptReleaseEntity_TypeInfo, v13);
    sub_B16FFC(&string___TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v15);
    byte_40F8258 = 1;
  }
  *checkCnt = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&scriptQuestId,
                                                                                                  *(_QWORD *)&scriptPhase,
                                                                                                  isMainInterlude,
                                                                                                  questScriptReleaseEnt);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  *questScriptReleaseEnt = (System_Collections_Generic_List_QuestScriptReleaseEntity__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)questScriptReleaseEnt,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = 1;
  for ( i = 1; i != 0x7FFFFFFF; ++i )
  {
    v25 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v23);
    v26 = System_Int32__ToString((int32_t)&v78, 0LL);
    if ( !v25 )
      goto LABEL_59;
    v34 = (System_Int32_array **)v26;
    if ( v26 )
    {
      v26 = (System_String_o *)sub_B170BC(v26, v25->obj.klass->_1.element_class);
      if ( !v26 )
      {
LABEL_60:
        sub_B170F4(v26);
        sub_B170A0();
      }
    }
    if ( !v25->max_length )
      goto LABEL_58;
    v25->m_Items[0] = (System_String_o *)v34;
    sub_B16F98((BattleServantConfConponent_o *)v25->m_Items, v34, v28, v29, v30, v31, v32, v33);
    v26 = (System_String_o *)StringLiteral_1223/*":"*/;
    if ( StringLiteral_1223/*":"*/ )
    {
      v26 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v25->obj.klass->_1.element_class);
      if ( !v26 )
        goto LABEL_60;
      v27 = (System_Int32_array **)StringLiteral_1223/*":"*/;
    }
    else
    {
      v27 = 0LL;
    }
    if ( v25->max_length <= 1 )
      goto LABEL_58;
    v25->m_Items[1] = (System_String_o *)v27;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[1], v27, v28, v35, v36, v37, v38, v39);
    v26 = System_Int32__ToString((int32_t)&v77, 0LL);
    v45 = (System_Int32_array **)v26;
    if ( v26 )
    {
      v26 = (System_String_o *)sub_B170BC(v26, v25->obj.klass->_1.element_class);
      if ( !v26 )
        goto LABEL_60;
    }
    if ( v25->max_length <= 2 )
      goto LABEL_58;
    v25->m_Items[2] = (System_String_o *)v45;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[2], v45, v28, v40, v41, v42, v43, v44);
    v26 = (System_String_o *)StringLiteral_1223/*":"*/;
    if ( StringLiteral_1223/*":"*/ )
    {
      v26 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v25->obj.klass->_1.element_class);
      if ( !v26 )
        goto LABEL_60;
      v27 = (System_Int32_array **)StringLiteral_1223/*":"*/;
    }
    else
    {
      v27 = 0LL;
    }
    if ( v25->max_length <= 3 )
    {
LABEL_58:
      sub_B17100(v26, v27, v28);
      sub_B170A0();
    }
    v25->m_Items[3] = (System_String_o *)v27;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[3], v27, v28, v46, v47, v48, v49, v50);
    v26 = System_Int32__ToString((int32_t)&i, 0LL);
    v56 = (System_Int32_array **)v26;
    if ( v26 )
    {
      v26 = (System_String_o *)sub_B170BC(v26, v25->obj.klass->_1.element_class);
      if ( !v26 )
        goto LABEL_60;
    }
    if ( v25->max_length <= 4 )
      goto LABEL_58;
    v25->m_Items[4] = (System_String_o *)v56;
    sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[4], v56, v28, v51, v52, v53, v54, v55);
    v57 = System_String__Concat_43823856(v25, 0LL);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_59:
      sub_B170D4();
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
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v60,
            v57,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v64 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !v64 )
      goto LABEL_59;
    v65 = v64->klass;
    v66 = v64;
    if ( *(_WORD *)&v64->klass->_2.bitflags1 )
    {
      v67 = 0LL;
      v68 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v65->_1.interfaceOffsets->offset;
      while ( *(v68 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v67;
        v68 += 2;
        if ( v67 >= *(unsigned __int16 *)&v64->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v69 = (__int64)&v65->vtable[*(_DWORD *)v68 + 2].method;
    }
    else
    {
LABEL_37:
      v69 = sub_AAFEF8(v64, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v70 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v69)(
            v66,
            v57,
            *(_QWORD *)(v69 + 8));
    if ( v70
      && (v71 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)v70 + 300LL) >= (unsigned int)v71) )
    {
      if ( *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v70 + 200LL) + 8 * v71 - 8) == QuestScriptReleaseEntity_TypeInfo )
        v72 = v70;
      else
        v72 = 0LL;
      if ( isMainInterlude )
      {
LABEL_42:
        if ( !v72 )
          goto LABEL_59;
        if ( (*(_BYTE *)(v72 + 28) & 0x20) != 0 )
          goto LABEL_51;
        continue;
      }
    }
    else
    {
      v72 = 0LL;
      if ( isMainInterlude )
        goto LABEL_42;
    }
    if ( !v72 )
      goto LABEL_59;
    if ( (*(_BYTE *)(v72 + 28) & 0x20) == 0 )
    {
LABEL_51:
      ++*checkCnt;
      v73 = *(_DWORD *)(v72 + 28);
      if ( (v73 & 8) != 0 )
      {
        v24 = 0;
        if ( (v73 & 0x10) == 0 && *(_DWORD *)(v72 + 32) == 1 )
        {
          if ( !*questScriptReleaseEnt )
            goto LABEL_59;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*questScriptReleaseEnt,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v72,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
          v24 = 1;
        }
      }
    }
  }
  return v24;
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
  __int64 v23; // x2
  const MethodInfo *v24; // x5
  bool v25; // w0
  System_String_array *v26; // x22
  System_String_o *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x25
  _BOOL4 v36; // w19
  bool v37; // w21
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x23
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x23
  System_String_o *v60; // x22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v63; // x23
  unsigned __int64 v64; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v67; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v68; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v69; // x23
  unsigned __int64 v70; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x2
  __int64 v75; // x10
  __int64 v76; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v79; // x1
  UserQuestMaster_o *v80; // x23
  int64_t UserId; // x0
  char v83; // [xsp+10h] [xbp-60h]
  int v84; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v85; // [xsp+18h] [xbp-58h] BYREF
  int32_t v86; // [xsp+1Ch] [xbp-54h] BYREF
  System_RuntimeFieldHandle_o v87; // 0:w1.4

  v85 = scriptPhase;
  v86 = scriptQuestId;
  if ( (byte_40F8259 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, isOpen);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v14);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&QuestScriptReleaseEntity_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&string___TypeInfo, v19);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5,
      v20);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v21);
    byte_40F8259 = 1;
  }
  v84 = 0;
  v22 = (System_Array_o *)sub_B17014(int___TypeInfo, 7LL, *(_QWORD *)&scriptQuestId);
  v87.fields.value = Field__PrivateImplementationDetails__AC238F709F8D4D4B646DA2EAEAC6061E1259849E571FA48771C830AD44CB9BD5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v22, v87, 0LL);
  if ( (System_Array__IndexOf_int_(
          (System_Int32_array *)v22,
          scriptQuestId,
          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) & 0x80000000) != 0 )
  {
    v84 = 1;
    v26 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v23);
    v27 = System_Int32__ToString((int32_t)&v86, 0LL);
    if ( !v26 )
      goto LABEL_72;
    v83 = 0;
    v35 = (System_Int32_array **)v27;
    v36 = kind == 3 && isMainInterlude;
    v37 = kind != 3 || isMainInterlude;
    while ( 1 )
    {
      if ( v35 )
      {
        v27 = (System_String_o *)sub_B170BC(v35, v26->obj.klass->_1.element_class);
        if ( !v27 )
        {
LABEL_73:
          sub_B170F4(v27);
          sub_B170A0();
        }
      }
      if ( !v26->max_length )
        goto LABEL_71;
      v26->m_Items[0] = (System_String_o *)v35;
      sub_B16F98((BattleServantConfConponent_o *)v26->m_Items, v35, v29, v30, v31, v32, v33, v34);
      v27 = (System_String_o *)StringLiteral_1223/*":"*/;
      if ( StringLiteral_1223/*":"*/ )
      {
        v27 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_73;
        v28 = (System_Int32_array **)StringLiteral_1223/*":"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v26->max_length <= 1 )
        goto LABEL_71;
      v26->m_Items[1] = (System_String_o *)v28;
      sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[1], v28, v29, v38, v39, v40, v41, v42);
      v27 = System_Int32__ToString((int32_t)&v85, 0LL);
      v48 = (System_Int32_array **)v27;
      if ( v27 )
      {
        v27 = (System_String_o *)sub_B170BC(v27, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_73;
      }
      if ( v26->max_length <= 2 )
        goto LABEL_71;
      v26->m_Items[2] = (System_String_o *)v48;
      sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[2], v48, v29, v43, v44, v45, v46, v47);
      v27 = (System_String_o *)StringLiteral_1223/*":"*/;
      if ( StringLiteral_1223/*":"*/ )
      {
        v27 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_73;
        v28 = (System_Int32_array **)StringLiteral_1223/*":"*/;
      }
      else
      {
        v28 = 0LL;
      }
      if ( v26->max_length <= 3 )
      {
LABEL_71:
        sub_B17100(v27, v28, v29);
        sub_B170A0();
      }
      v26->m_Items[3] = (System_String_o *)v28;
      sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[3], v28, v29, v49, v50, v51, v52, v53);
      v27 = System_Int32__ToString((int32_t)&v84, 0LL);
      v59 = (System_Int32_array **)v27;
      if ( v27 )
      {
        v27 = (System_String_o *)sub_B170BC(v27, v26->obj.klass->_1.element_class);
        if ( !v27 )
          goto LABEL_73;
      }
      if ( v26->max_length <= 4 )
        goto LABEL_71;
      v26->m_Items[4] = (System_String_o *)v59;
      sub_B16F98((BattleServantConfConponent_o *)&v26->m_Items[4], v59, v29, v54, v55, v56, v57, v58);
      v60 = System_String__Concat_43823856(v26, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_72;
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
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v63,
              v60,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
      {
        v25 = v83;
        *isOpen = 1;
        return v25;
      }
      v67 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !v67 )
        goto LABEL_72;
      v68 = v67->klass;
      v69 = v67;
      if ( *(_WORD *)&v67->klass->_2.bitflags1 )
      {
        v70 = 0LL;
        v71 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v68->_1.interfaceOffsets->offset;
        while ( *(v71 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v70;
          v71 += 2;
          if ( v70 >= *(unsigned __int16 *)&v67->klass->_2.bitflags1 )
            goto LABEL_39;
        }
        v72 = (__int64)&v68->vtable[*(_DWORD *)v71 + 2].method;
      }
      else
      {
LABEL_39:
        v72 = sub_AAFEF8(v67, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
      }
      v73 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v72)(
              v69,
              v60,
              *(_QWORD *)(v72 + 8));
      if ( v73
        && (v75 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)v73 + 300LL) >= (unsigned int)v75) )
      {
        if ( *(QuestScriptReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v73 + 200LL) + 8 * v75 - 8) == QuestScriptReleaseEntity_TypeInfo )
          v76 = v73;
        else
          v76 = 0LL;
        if ( v36 )
        {
LABEL_44:
          if ( !v76 )
            goto LABEL_72;
          if ( (*(_BYTE *)(v76 + 28) & 0x20) == 0 )
            goto LABEL_54;
        }
      }
      else
      {
        v76 = 0LL;
        if ( v36 )
          goto LABEL_44;
      }
      if ( v37 )
        goto LABEL_58;
      if ( !v76 )
        goto LABEL_72;
      if ( (*(_BYTE *)(v76 + 28) & 0x20) == 0 )
      {
LABEL_58:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_72;
        MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
        if ( !v76 )
          goto LABEL_72;
        if ( (*(_DWORD *)(v76 + 28) & (1 << kind)) != 0 )
        {
          v80 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
          if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v76, v79) )
          {
            if ( *(_DWORD *)(v76 + 32) != 1 )
              goto LABEL_70;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( v80 )
            {
              if ( UserQuestMaster__IsQuestResetAndQuestClearIds(v80, UserId, *(System_Int32_array **)(v76 + 40), 0LL) )
              {
                v25 = 1;
                *isOpen = 1;
                return v25;
              }
LABEL_70:
              v25 = 1;
              *isOpen = 0;
              return v25;
            }
LABEL_72:
            sub_B170D4();
          }
          v83 = 1;
        }
      }
LABEL_54:
      ++v84;
      v26 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v74);
      v27 = System_Int32__ToString((int32_t)&v86, 0LL);
      v35 = (System_Int32_array **)v27;
      if ( !v26 )
        goto LABEL_72;
    }
  }
  return QuestScriptReleaseMaster__IsOpenPhaseForSuperBoss(this, isOpen, scriptQuestId, scriptPhase, kind, v24);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_array *v11; // x21
  System_String_o *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int v20; // w26
  System_Int32_array **v21; // x23
  char v22; // w25
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x22
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_o *v45; // x21
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v48; // x22
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v52; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v53; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v54; // x22
  unsigned __int64 v55; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v56; // x11
  __int64 v57; // x0
  QuestScriptReleaseEntity_o *v58; // x0
  const MethodInfo *v59; // x1
  __int64 v60; // x2
  __int64 v61; // x10
  bool v62; // w8
  bool result; // w0
  int v65; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v66; // [xsp+18h] [xbp-58h] BYREF
  int32_t v67; // [xsp+1Ch] [xbp-54h] BYREF

  v6 = kind;
  v66 = scriptPhase;
  v67 = scriptQuestId;
  if ( (byte_40F825A & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, isOpen);
    sub_B16FFC(&QuestScriptReleaseEntity_TypeInfo, v8);
    sub_B16FFC(&string___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v10);
    byte_40F825A = 1;
  }
  v65 = 1;
  v11 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, *(_QWORD *)&scriptQuestId);
  v12 = System_Int32__ToString((int32_t)&v67, 0LL);
  if ( !v11 )
LABEL_45:
    sub_B170D4();
  v20 = 1 << v6;
  v21 = (System_Int32_array **)v12;
  v22 = 0;
  while ( 1 )
  {
    if ( v21 )
    {
      v12 = (System_String_o *)sub_B170BC(v21, v11->obj.klass->_1.element_class);
      if ( !v12 )
      {
LABEL_50:
        sub_B170F4(v12);
        sub_B170A0();
      }
    }
    if ( !v11->max_length )
      goto LABEL_49;
    v11->m_Items[0] = (System_String_o *)v21;
    sub_B16F98((BattleServantConfConponent_o *)v11->m_Items, v21, v14, v15, v16, v17, v18, v19);
    v12 = (System_String_o *)StringLiteral_1223/*":"*/;
    if ( StringLiteral_1223/*":"*/ )
    {
      v12 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v11->obj.klass->_1.element_class);
      if ( !v12 )
        goto LABEL_50;
      v13 = (System_Int32_array **)StringLiteral_1223/*":"*/;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v11->max_length <= 1 )
      goto LABEL_49;
    v11->m_Items[1] = (System_String_o *)v13;
    sub_B16F98((BattleServantConfConponent_o *)&v11->m_Items[1], v13, v14, v23, v24, v25, v26, v27);
    v12 = System_Int32__ToString((int32_t)&v66, 0LL);
    v33 = (System_Int32_array **)v12;
    if ( v12 )
    {
      v12 = (System_String_o *)sub_B170BC(v12, v11->obj.klass->_1.element_class);
      if ( !v12 )
        goto LABEL_50;
    }
    if ( v11->max_length <= 2 )
      goto LABEL_49;
    v11->m_Items[2] = (System_String_o *)v33;
    sub_B16F98((BattleServantConfConponent_o *)&v11->m_Items[2], v33, v14, v28, v29, v30, v31, v32);
    v12 = (System_String_o *)StringLiteral_1223/*":"*/;
    if ( StringLiteral_1223/*":"*/ )
    {
      v12 = (System_String_o *)sub_B170BC(StringLiteral_1223/*":"*/, v11->obj.klass->_1.element_class);
      if ( !v12 )
        goto LABEL_50;
      v13 = (System_Int32_array **)StringLiteral_1223/*":"*/;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v11->max_length <= 3 )
    {
LABEL_49:
      sub_B17100(v12, v13, v14);
      sub_B170A0();
    }
    v11->m_Items[3] = (System_String_o *)v13;
    sub_B16F98((BattleServantConfConponent_o *)&v11->m_Items[3], v13, v14, v34, v35, v36, v37, v38);
    v12 = System_Int32__ToString((int32_t)&v65, 0LL);
    v44 = (System_Int32_array **)v12;
    if ( v12 )
    {
      v12 = (System_String_o *)sub_B170BC(v12, v11->obj.klass->_1.element_class);
      if ( !v12 )
        goto LABEL_50;
    }
    if ( v11->max_length <= 4 )
      goto LABEL_49;
    v11->m_Items[4] = (System_String_o *)v44;
    sub_B16F98((BattleServantConfConponent_o *)&v11->m_Items[4], v44, v14, v39, v40, v41, v42, v43);
    v45 = System_String__Concat_43823856(v11, 0LL);
    lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
      goto LABEL_45;
    klass = lookup->klass;
    v48 = lookup;
    if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
          goto LABEL_29;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_29:
      p_method = sub_AAFEF8(
                   lookup,
                   System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                   0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
            v48,
            v45,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
    {
      v62 = 0;
      goto LABEL_48;
    }
    v52 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !v52 )
      goto LABEL_45;
    v53 = v52->klass;
    v54 = v52;
    if ( *(_WORD *)&v52->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      v56 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v53->_1.interfaceOffsets->offset;
      while ( *(v56 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v55;
        v56 += 2;
        if ( v55 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v57 = (__int64)&v53->vtable[*(_DWORD *)v56 + 2].method;
    }
    else
    {
LABEL_37:
      v57 = sub_AAFEF8(v52, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v58 = (QuestScriptReleaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v57)(
                                          v54,
                                          v45,
                                          *(_QWORD *)(v57 + 8));
    if ( !v58 )
      goto LABEL_45;
    v61 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v58->klass->_2.bitflags2 + 1) < (unsigned int)v61
      || (QuestScriptReleaseEntity_c *)v58->klass->_2.typeHierarchy[v61 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      goto LABEL_45;
    }
    if ( (v58->fields.flag & v20) != 0 )
    {
      v22 = 1;
      if ( QuestScriptReleaseEntity__IsOpen(v58, v59) )
        break;
    }
    ++v65;
    v11 = (System_String_array *)sub_B17014(string___TypeInfo, 5LL, v60);
    v12 = System_Int32__ToString((int32_t)&v67, 0LL);
    v21 = (System_Int32_array **)v12;
    if ( !v11 )
      goto LABEL_45;
  }
  v62 = 1;
LABEL_48:
  result = v22 & 1;
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

  if ( (byte_40F8256 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40F8256 = 1;
  }
  PK = QuestScriptReleaseEntity__CreatePK(scriptId, phase, id, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestScriptReleaseMaster__QuestScriptReleaseEntity__string__TryGetEntity__);
}