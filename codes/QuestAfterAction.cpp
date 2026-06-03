void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_4E7411E & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E7411E = 1;
  }
  LODWORD(QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime) = (struct QuestAfterAction_StaticFields)1056964608;
}


void QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BlankEarthQuestAfterAction_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  PlanetEarthQuestAfterAction_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_HashSet_T__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_Dictionary_object__object__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_HashSet_int__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_HashSet_int__o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  System_Collections_Generic_List_object__o *v73; // x20
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7

  if ( (byte_4E7411D & 1) == 0 )
  {
    sub_1D0F0B4(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_Action__TypeInfo);
    sub_1D0F0B4(&PlanetEarthQuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1D0F0B4(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4E7411D = 1;
  }
  v3 = (Il2CppObject *)sub_1D0F300(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_1D0F300(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (PlanetEarthQuestAfterAction_o *)sub_1D0F300(PlanetEarthQuestAfterAction_TypeInfo);
  PlanetEarthQuestAfterAction___ctor(v17, 0);
  this->fields._PlanetEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v17;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlanetEarthQuestAfterAction_k__BackingField,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v24,
    (const MethodInfo_35C7DCC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v24;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.commandTypeIds, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_35A7834 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v31;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.svtVoices, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  this->fields.tutorialSvtVoiceList = (struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v38;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.tutorialSvtVoiceList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v45,
    (const MethodInfo_3806B94 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.tutorialVoiceParamKeySet = (struct System_Collections_Generic_HashSet_string__o *)v45;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.tutorialVoiceParamKeySet,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1D0F300(System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v52,
    (const MethodInfo_3600C34 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.tutorialVoiceInfoByParam = (struct System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__o *)v52;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.tutorialVoiceInfoByParam,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v59,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.loadedTutorialVoiceSvtIdSet = v59;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadedTutorialVoiceSvtIdSet,
    (int32_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v66,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.loadedVoiceSvtIdSet = v66;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.loadedVoiceSvtIdSet,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.pendingVoiceLoadCallbackList = (struct System_Collections_Generic_List_Action__o *)v73;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.pendingVoiceLoadCallbackList,
    (int32_t)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3BACB6C *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void QuestAfterAction__AddLoadedTutorialVoiceSvtIds(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_int__o *svtIdEnumerable,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x20
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x8
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_HashSet_int__o *loadedTutorialVoiceSvtIdSet; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0

  v4 = this;
  if ( (byte_4E7411C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    this = (QuestAfterAction_o *)sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    byte_4E7411C = 1;
  }
  if ( !svtIdEnumerable )
    sub_1D0F30C(this, svtIdEnumerable);
  klass = svtIdEnumerable->klass;
  v6 = *(unsigned __int16 *)&svtIdEnumerable->klass->_2.rank;
  if ( *(_WORD *)&svtIdEnumerable->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_1CE5430(svtIdEnumerable, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v8)(
          svtIdEnumerable,
          *(_QWORD *)(v8 + 8));
  if ( !v10 )
    sub_1D0F30C(0, v9);
  while ( 1 )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_15;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_15:
      v14 = sub_1CE5430(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v10;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v17 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_22;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_22:
      v18 = sub_1CE5430(v10, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v19 = (*(unsigned int (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    loadedTutorialVoiceSvtIdSet = v4->fields.loadedTutorialVoiceSvtIdSet;
    if ( !loadedTutorialVoiceSvtIdSet )
      sub_1D0F30C(0, v19);
    System_Collections_Generic_HashSet_int___Add(
      loadedTutorialVoiceSvtIdSet,
      v19,
      (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v21 = *(_QWORD *)v10;
  v22 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_30;
    }
    v24 = v21 + 16LL * *v23 + 312;
  }
  else
  {
LABEL_30:
    v24 = sub_1CE5430(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
}


System_Collections_Generic_List_int__o *QuestAfterAction__BuildDistinctSvtIdList(
        System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *sourceVoiceInfoEnumerable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  System_Collections_Generic_HashSet_int__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x22
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4E7411B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E7411B = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !sourceVoiceInfoEnumerable )
    sub_1D0F30C(v5, v6);
  klass = sourceVoiceInfoEnumerable->klass;
  v8 = *(unsigned __int16 *)&sourceVoiceInfoEnumerable->klass->_2.rank;
  if ( *(_WORD *)&sourceVoiceInfoEnumerable->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v10 = sub_1CE5430(
            sourceVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v10)(
          sourceVoiceInfoEnumerable,
          *(_QWORD *)(v10 + 8));
  if ( !v12 )
    sub_1D0F30C(0, v11);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_15:
      v16 = sub_1CE5430(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_22:
      v20 = sub_1CE5430(v12, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    v22 = v21;
    if ( v21 )
    {
      v23 = *(unsigned int *)(v21 + 16);
      if ( (int)v23 >= 1 )
      {
        if ( !v4 )
          sub_1D0F30C(v21, v23);
        v24 = System_Collections_Generic_HashSet_int___Add(
                v4,
                v23,
                (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v24 )
        {
          if ( !v3 )
            sub_1D0F30C(v24, v25);
          v26 = *(unsigned int *)(v22 + 16);
          items = v3->fields._items;
          v28 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1D0F30C(v24, v26);
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v26,
              *(const MethodInfo_393F3EC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v26;
          }
        }
      }
    }
  }
  v30 = *(_QWORD *)v12;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_37;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_37:
    v33 = sub_1CE5430(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v12, *(_QWORD *)(v33 + 8));
  return v3;
}


System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *QuestAfterAction__BuildMergedPendingVoiceInfoList(
        System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *firstVoiceInfoEnumerable,
        System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *secondVoiceInfoEnumerable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_HashSet_int__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  Il2CppObject *v24; // x23
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  Il2CppObject *v57; // x22
  __int64 v58; // x1
  _BOOL8 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0

  if ( (byte_4E74117 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4E74117 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !firstVoiceInfoEnumerable )
    goto LABEL_82;
  klass = firstVoiceInfoEnumerable->klass;
  v10 = *(unsigned __int16 *)&firstVoiceInfoEnumerable->klass->_2.rank;
  if ( *(_WORD *)&firstVoiceInfoEnumerable->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v12 = sub_1CE5430(
            firstVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v12)(
          firstVoiceInfoEnumerable,
          *(_QWORD *)(v12 + 8));
  if ( !v14 )
    sub_1D0F30C(0, v13);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_15;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_15:
      v18 = sub_1CE5430(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v14;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v21 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_22;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_22:
      v22 = sub_1CE5430(v14, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    v24 = (Il2CppObject *)v23;
    if ( v23 )
    {
      v25 = *(unsigned int *)(v23 + 16);
      if ( (int)v25 >= 1 )
      {
        if ( !v6 )
          sub_1D0F30C(v23, v25);
        v26 = System_Collections_Generic_HashSet_int___Add(
                v6,
                v25,
                (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v26 )
        {
          if ( !v5 )
            sub_1D0F30C(v26, v27);
          items = v5->fields._items;
          v35 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1D0F30C(v26, v27);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v24,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v24;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v24, v28, v29, v30, v31, v32, v33);
          }
        }
      }
    }
  }
  v38 = *(_QWORD *)v14;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_37;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_37:
    v41 = sub_1CE5430(v14, System_IDisposable_TypeInfo, 0);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v14, *(_QWORD *)(v41 + 8));
  if ( !secondVoiceInfoEnumerable )
LABEL_82:
    sub_1D0F30C(v7, v8);
  v42 = secondVoiceInfoEnumerable->klass;
  v43 = *(unsigned __int16 *)&secondVoiceInfoEnumerable->klass->_2.rank;
  if ( *(_WORD *)&secondVoiceInfoEnumerable->klass->_2.rank )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c **)v44 - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_44;
    }
    v45 = (__int64)&v42->vtable[*v44];
  }
  else
  {
LABEL_44:
    v45 = sub_1CE5430(
            secondVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v45)(
          secondVoiceInfoEnumerable,
          *(_QWORD *)(v45 + 8));
  if ( !v47 )
    sub_1D0F30C(0, v46);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_51;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_51:
      v51 = sub_1CE5430(v47, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v54 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_58;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_58:
      v55 = sub_1CE5430(v47, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    v57 = (Il2CppObject *)v56;
    if ( v56 )
    {
      v58 = *(unsigned int *)(v56 + 16);
      if ( (int)v58 >= 1 )
      {
        if ( !v6 )
          sub_1D0F30C(v56, v58);
        v59 = System_Collections_Generic_HashSet_int___Add(
                v6,
                v58,
                (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v59 )
        {
          if ( !v5 )
            sub_1D0F30C(v59, v60);
          v67 = v5->fields._items;
          v68 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__;
          ++v5->fields._version;
          if ( !v67 )
            sub_1D0F30C(v59, v60);
          v69 = v5->fields._size;
          if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v57,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v70 = &v67->obj.klass + v69;
            v5->fields._size = v69 + 1;
            v70[4] = (Il2CppClass *)v57;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v70 + 4), (int32_t)v57, v61, v62, v63, v64, v65, v66);
          }
        }
      }
    }
  }
  v71 = *(_QWORD *)v47;
  v72 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      --v72;
      v73 += 4;
      if ( !v72 )
        goto LABEL_73;
    }
    v74 = v71 + 16LL * *v73 + 312;
  }
  else
  {
LABEL_73:
    v74 = sub_1CE5430(v47, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v74)(v47, *(_QWORD *)(v74 + 8));
  return (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v5;
}


System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *QuestAfterAction__BuildPendingTutorialVoiceInfoList(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *tutorialSvtVoiceList; // x20
  System_Collections_Generic_HashSet_int__o *loadedTutorialVoiceSvtIdSet; // x19

  if ( (byte_4E7410F & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E7410F = 1;
  }
  tutorialSvtVoiceList = this->fields.tutorialSvtVoiceList;
  loadedTutorialVoiceSvtIdSet = this->fields.loadedTutorialVoiceSvtIdSet;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__BuildPendingVoiceInfoListCore(
           (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)tutorialSvtVoiceList,
           loadedTutorialVoiceSvtIdSet,
           v2);
}


System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *QuestAfterAction__BuildPendingVoiceInfoList(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_HashSet_int__o *loadedVoiceSvtIdSet; // x19
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *v7; // x20

  if ( (byte_4E74110 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E74110 = 1;
  }
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    sub_1D0F30C(0, method);
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_35A8018 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  loadedVoiceSvtIdSet = this->fields.loadedVoiceSvtIdSet;
  v7 = (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)Values;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__BuildPendingVoiceInfoListCore(v7, loadedVoiceSvtIdSet, v5);
}


System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *QuestAfterAction__BuildPendingVoiceInfoListCore(
        System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *sourceVoiceInfoEnumerable,
        System_Collections_Generic_HashSet_int__o *loadedSvtIdSet,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_HashSet_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x23
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4E7411A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4E7411A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1D0F300(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_3800770 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !sourceVoiceInfoEnumerable )
    sub_1D0F30C(v7, v8);
  klass = sourceVoiceInfoEnumerable->klass;
  v10 = *(unsigned __int16 *)&sourceVoiceInfoEnumerable->klass->_2.rank;
  if ( *(_WORD *)&sourceVoiceInfoEnumerable->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v12 = sub_1CE5430(
            sourceVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v12)(
          sourceVoiceInfoEnumerable,
          *(_QWORD *)(v12 + 8));
  if ( !v14 )
    sub_1D0F30C(0, v13);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_15;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_15:
      v18 = sub_1CE5430(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v14;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v21 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_22;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_22:
      v22 = sub_1CE5430(v14, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    v24 = v23;
    if ( v23 )
    {
      v25 = *(unsigned int *)(v23 + 16);
      if ( (int)v25 >= 1 )
      {
        if ( !loadedSvtIdSet )
          sub_1D0F30C(v23, v25);
        v26 = System_Collections_Generic_HashSet_int___Contains(
                loadedSvtIdSet,
                v25,
                (const MethodInfo_3800E64 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( !v26 )
        {
          if ( !v6 )
            sub_1D0F30C(v26, v27);
          v28 = System_Collections_Generic_HashSet_int___Add(
                  v6,
                  *(_DWORD *)(v24 + 16),
                  (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__);
          if ( v28 )
          {
            if ( !v5 )
              sub_1D0F30C(v28, v29);
            items = v5->fields._items;
            v37 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1D0F30C(v28, v29);
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v24,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v24;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v39 + 4), v24, v30, v31, v32, v33, v34, v35);
            }
          }
        }
      }
    }
  }
  v40 = *(_QWORD *)v14;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_39;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_39:
    v43 = sub_1CE5430(v14, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v14, *(_QWORD *)(v43 + 8));
  return (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v5;
}


void QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (GrandQuestFolderBoardItem_o *)&this->fields.endAct;
  p_endAct->klass = 0;
  sub_1D0F058(p_endAct, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0);
}


bool QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t BlankEarthTargetWarId; // w8
  bool v5; // w19
  TerminalPramsManager_c *v6; // x0
  int32_t QuestId_k__BackingField; // w20
  _BOOL8 QuestAfterActionVals; // x0
  __int64 v9; // x1
  System_String_array *v10; // x8
  signed int v11; // w20
  unsigned int max_length; // w9
  int32_t result; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_array *questAfterAction; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E740E7 & 1) == 0 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1168/*"1"*/);
    byte_4E740E7 = 1;
  }
  questAfterAction = 0;
  result = 0;
  BlankEarthTargetWarId = this->fields.BlankEarthTargetWarId;
  v5 = 0;
  if ( BlankEarthTargetWarId <= 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E7132C )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E7132C = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
    if ( !byte_4E7132B )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
      byte_4E7132B = 1;
    }
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TerminalPramsManager_TypeInfo;
    }
    QuestAfterActionVals = QuestAfterAction__TryGetQuestAfterActionVals(
                             (QuestAfterAction_o *)v6,
                             &questAfterAction,
                             QuestId_k__BackingField,
                             v6->static_fields->_PhaseCnt_k__BackingField + 1,
                             v2);
    if ( QuestAfterActionVals )
    {
      v10 = questAfterAction;
      if ( !questAfterAction )
LABEL_25:
        sub_1D0F30C(QuestAfterActionVals, v9);
      v11 = 0;
      while ( 1 )
      {
        max_length = v10->max_length;
        v5 = v11 < (int)max_length;
        if ( v11 >= (int)max_length )
          break;
        if ( v11 >= max_length )
          goto LABEL_28;
        QuestAfterActionVals = System_Int32__TryParse(v10->m_Items[v11], &result, 0);
        if ( QuestAfterActionVals && result == 701 )
        {
          if ( !questAfterAction )
            goto LABEL_25;
          if ( (unsigned int)(v11 + 1) >= LODWORD(questAfterAction->max_length) )
LABEL_28:
            sub_1D0F314(QuestAfterActionVals);
          QuestAfterActionVals = System_String__op_Equality(
                                   questAfterAction->m_Items[v11 + 1],
                                   (System_String_o *)StringLiteral_1168/*"1"*/,
                                   0);
          if ( QuestAfterActionVals )
            break;
        }
        v10 = questAfterAction;
        v11 += 2;
        if ( !questAfterAction )
          goto LABEL_25;
      }
    }
    else
    {
      return 0;
    }
  }
  return v5;
}


void QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_c *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E740FE & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E740FE = 1;
  }
  v3 = QuestAfterAction_TypeInfo;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v3);
  this->fields.commandBuf = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v4, v5, v6, v7, v8, v9);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_4E740F3 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E740F3 = 1;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__CreateCommandBuf(QuestAfterAction_o *this, bool isBeforeAction, const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x21
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w19
  System_String_array *afterActionVals; // x23
  __int64 v11; // x1
  Il2CppObject *Instance; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v15; // x8
  const MethodInfo *v16; // x8
  int32_t invoker_method_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v18; // x8
  const MethodInfo *v19; // x8
  int32_t invoker_method; // w25
  TerminalPramsManager_c *v21; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v22; // x8
  const MethodInfo *v23; // x8
  int32_t MasterName_k__BackingField_high; // w24
  TerminalPramsManager_c *v25; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v26; // x8
  const MethodInfo *v27; // x8
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v29; // x0
  TerminalSceneComponent_c *v30; // x0
  TerminalPramsManager_c *v31; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x23
  int32_t v33; // w24
  int32_t v34; // w24
  System_String_o *lookup; // x24
  bool v36; // w24
  bool v37; // w23
  Il2CppObject *v38; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v40; // x23
  BalanceConfig_c *v41; // x0
  bool v42; // w8
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v44; // x0
  TerminalPramsManager_c *v45; // x0
  int32_t id; // w19
  bool v47; // w23
  TerminalPramsManager_c *v48; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  Il2CppObject *v51; // x23
  bool QuestEntity; // w0
  TerminalPramsManager_c *v53; // x0
  Il2CppObject *v54; // x23
  int32_t items_high; // w24
  Il2CppObject *v56; // x22
  int32_t v57; // w23
  TerminalPramsManager_c *v58; // x0
  Il2CppObject *v59; // x22
  int32_t v60; // w24
  TerminalPramsManager_c *v61; // x0
  TerminalPramsManager_c *v62; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v64; // x0
  Il2CppObject *v65; // x20
  TerminalPramsManager_c *v66; // x0
  bool IsOverwriteCommandNone; // w0
  il2cpp_array_size_t max_length; // x8
  __int64 v69; // x0
  unsigned int **p_commandBuf; // x22
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  int *commandBuf; // x8
  unsigned __int64 v78; // x24
  unsigned int v79; // w29
  __int64 v80; // x25
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  __int64 v87; // x8
  System_String_o *v88; // x1
  System_String_o **v89; // x26
  const MethodInfo *v90; // x4
  const MethodInfo *v91; // x2
  int v92; // w8
  bool v93; // w8
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // x27
  int32_t v96; // w27
  TerminalPramsManager_c *v97; // x0
  BalanceConfig_c *v98; // x8
  int32_t WarId_k__BackingField; // w28
  TerminalPramsManager_c *v100; // x0
  int32_t v101; // w28
  unsigned int v102; // w8
  const MethodInfo *v103; // x1
  System_Collections_Generic_List_int__o *Item; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v106; // x9
  __int64 size; // x10
  QuestAfterAction_o *v108; // x0
  const MethodInfo *v109; // x2
  System_String_c *v110; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v111; // x26
  unsigned __int64 v112; // x27
  System_String_Fields v113; // x8
  _QWORD *v114; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v116; // x26
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  unsigned int *v123; // x0
  TerminalPramsManager_c *v124; // x0
  Il2CppObject *v125; // x21
  TerminalPramsManager_c *v126; // x0
  BalanceConfig_c *v127; // x8
  int32_t v128; // w19
  int32_t v129; // w19
  TerminalPramsManager_c *v130; // x0
  TerminalPramsManager_c *v131; // x0
  BalanceConfig_c *v132; // x8
  int32_t v133; // w20
  TerminalPramsManager_c *v134; // x0
  TerminalPramsManager_c *v135; // x0
  TerminalPramsManager_c *v136; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v137; // x8
  ScrTerminalListTop_o *v138; // x20
  TerminalPramsManager_c *v139; // x0
  TerminalPramsManager_c *v140; // x0
  __int64 v141; // x0
  char v142; // [xsp+4h] [xbp-8Ch]
  OpeningMovieEntity_o *ent; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v144; // [xsp+10h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v146; // [xsp+20h] [xbp-70h] BYREF
  QuestEntity_o *v147; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4E740E6 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&bool_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_Command___TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_Command_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1D0F0B4(&GrandQuestViewSwitcher_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&ScrTerminalListTop_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16956/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_1D0F0B4(&StringLiteral_810/*","*/);
    byte_4E740E6 = 1;
  }
  v146 = 0;
  v147 = 0;
  v144 = 0;
  entity = 0;
  ent = 0;
  v4->fields.isLoadedVoice = 0;
  v4->fields.isSkippedNext = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_325C11C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E7132C )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E7132C = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_4E7132B )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_4E7132B = 1;
    }
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v7->static_fields->_PhaseCnt_k__BackingField;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    afterActionVals = QuestAfterAction__GetBeforeAction(QuestId_k__BackingField, PhaseCnt_k__BackingField + 1, v6);
    goto LABEL_244;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MasterData_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_412;
  if ( !klass->vtable._9_unknown.method )
    goto LABEL_92;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v15 = MasterData_object[2].fields.list->klass;
  if ( !v15 )
    goto LABEL_412;
  v16 = v15->vtable._9_unknown.method;
  if ( !v16 )
    goto LABEL_412;
  invoker_method_high = HIDWORD(v16->invoker_method);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4E7125B = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v18 = MasterData_object[2].fields.list->klass;
  if ( !v18 )
    goto LABEL_412;
  v19 = v18->vtable._9_unknown.method;
  if ( !v19 )
    goto LABEL_412;
  invoker_method = (int32_t)v19->invoker_method;
  if ( invoker_method >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E73E48 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73E48 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_QuestId_k__BackingField = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4E7125B )
    {
      sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
      byte_4E7125B = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v22 = MasterData_object[2].fields.list->klass;
    if ( !v22 )
      goto LABEL_412;
    v23 = v22->vtable._9_unknown.method;
    if ( !v23 )
      goto LABEL_412;
    if ( !Instance )
      goto LABEL_412;
    afterActionVals = (System_String_array *)v23->klass;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_412;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method,
                                                                        (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_412;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_412;
    goto LABEL_81;
  }
  if ( invoker_method_high >= 1 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E73E48 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73E48 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_QuestId_k__BackingField = 0;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4E7125B )
    {
      sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
      byte_4E7125B = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v26 = MasterData_object[2].fields.list->klass;
    if ( !v26 )
      goto LABEL_412;
    v27 = v26->vtable._9_unknown.method;
    if ( !v27 )
      goto LABEL_412;
    afterActionVals = (System_String_array *)v27->klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_412;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method_high,
                                                                        (const MethodInfo_3535B7C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_412;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_412;
LABEL_81:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_412;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !byte_4E73E4E )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73E4E = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    v29->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4E7125B )
    {
      sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
      byte_4E7125B = 1;
    }
    v30 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v30 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v30->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_412;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
    if ( afterActionVals )
      goto LABEL_244;
  }
LABEL_92:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E74123 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74123 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  if ( !v31->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16956/*"afterActionBk"*/, 0) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_73317788(
                                                                        (System_String_o *)StringLiteral_16956/*"afterActionBk"*/,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_412;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_412;
    v32 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_524;
    v33 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E73E48 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73E48 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v33;
    if ( LODWORD(v32->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_524;
    v34 = System_Int32__Parse((System_String_o *)v32->fields.list, 0);
    if ( !byte_4E73E4C )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73E4C = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v34;
    if ( LODWORD(v32->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_524;
    lookup = (System_String_o *)v32->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v36 = System_Boolean__Parse(lookup, 0);
    if ( !byte_4E74124 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E74124 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v36;
    if ( LODWORD(v32->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_524;
    v37 = System_Boolean__Parse((System_String_o *)v32->fields.seriazlier, 0);
    if ( !byte_4E74125 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E74125 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v37;
    if ( !byte_4E74126 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4E74126 = 1;
    }
    if ( !LODWORD(MasterData_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
    {
      if ( !Instance )
        goto LABEL_412;
      v38 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7132C )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7132C = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v38 )
        goto LABEL_412;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v38,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
      if ( QuestId )
      {
        v40 = QuestId;
        v41 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v41 = BalanceConfig_TypeInfo;
        }
        v42 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v41->static_fields->MainInterludeMapReturnWarIds,
                v40->fields.id,
                (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v42 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4E74127 )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            byte_4E74127 = 1;
          }
          v44 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v44 = TerminalPramsManager_TypeInfo;
          }
          v44->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4E74127 )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            byte_4E74127 = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v45->static_fields->_IsWarClear_k__BackingField = 1;
          id = v40->fields.id;
          if ( !byte_4E73E4E )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
            byte_4E73E4E = 1;
          }
          if ( !v45->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v45);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v45->static_fields->_WarId_k__BackingField = id;
          v47 = TerminalPramsManager__CheckIsOrdealCallWarClear(v40, 0);
          if ( !byte_4E74128 )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            byte_4E74128 = 1;
          }
          v48 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v48 = TerminalPramsManager_TypeInfo;
          }
          v48->static_fields->_IsOrdealCallWarClear_k__BackingField = v47;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E71891 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71891 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_412;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 HIDWORD(MasterData_object[2].fields.list->klass),
                 0);
  if ( !byte_4E74129 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74129 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(MasterData_object[2].fields.list[1].fields._blockReentrancyCount) )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4E73D01 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73D01 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !*((_BYTE *)&MasterData_object[2].fields.list[1].fields._blockReentrancyCount + 4) )
      goto LABEL_243;
  }
  if ( !Instance )
    goto LABEL_412;
  v51 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v51 )
    goto LABEL_412;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v51,
                  &entity,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
  afterActionVals = 0;
  if ( !QuestEntity )
    goto LABEL_244;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_412;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0) )
  {
LABEL_199:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E74123 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E74123 = 1;
    }
    v53 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v53 = TerminalPramsManager_TypeInfo;
    }
    if ( v53->static_fields->_IsPhaseClear_k__BackingField )
    {
      v54 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7132C )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7132C = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4E7132B )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4E7132B = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v54 )
        goto LABEL_412;
      afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                          (QuestPhaseDetailAddMaster_o *)v54,
                          items_high,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_244;
      v56 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7132C )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7132C = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v57 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4E7132B )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4E7132B = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v56 )
        goto LABEL_412;
      afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                          (QuestPhaseDetailMaster_o *)v56,
                          v57,
                          LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                          0);
      if ( afterActionVals )
        goto LABEL_244;
      v53 = TerminalPramsManager_TypeInfo;
    }
    if ( !v53->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v53);
    if ( !byte_4E74126 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E74126 = 1;
    }
    v58 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v58 = TerminalPramsManager_TypeInfo;
    }
    if ( v58->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v58->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v58);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
      afterActionVals = 0;
      if ( ((unsigned __int8)MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_412;
        afterActionVals = entity->fields.afterActionVals;
      }
      goto LABEL_244;
    }
    goto LABEL_243;
  }
  if ( !OpenEntity )
  {
LABEL_243:
    afterActionVals = 0;
    goto LABEL_244;
  }
  afterActionVals = 0;
  if ( WarReleaseEntity__IsOpen(OpenEntity, 0) )
    goto LABEL_199;
LABEL_244:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v59 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v60 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4E7132B )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4E7132B = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v59 )
    goto LABEL_412;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v59,
         v60,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0) )
  {
    goto LABEL_528;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v11);
  if ( !afterActionVals
    || IsOverwriteCommandNone
    || (max_length = afterActionVals->max_length, (int)max_length < 2)
    || (max_length & 1) != 0 )
  {
LABEL_528:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E7412A )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E7412A = 1;
    }
    v61 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v61 = TerminalPramsManager_TypeInfo;
    }
    if ( v61->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v61->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v61);
      if ( !byte_4E71D1E )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E71D1E = 1;
      }
      v62 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
      }
      v62->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4E73E4A )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
        byte_4E73E4A = 1;
      }
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = TerminalPramsManager_TypeInfo;
      }
      v62->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4E7412A )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
        byte_4E7412A = 1;
      }
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v62->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4E73E4E )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
        byte_4E73E4E = 1;
      }
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = TerminalPramsManager_TypeInfo;
      }
      v62->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4E7125B )
      {
        sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
        byte_4E7125B = 1;
      }
      v64 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v64 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v64->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_412;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v65 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4E71891 )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E71891 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v65 )
        goto LABEL_412;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v65,
             &v144,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_3535BC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v144;
        if ( !v144 )
          goto LABEL_412;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v144, 0);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7412B )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7412B = 1;
      }
      v66 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v66 = TerminalPramsManager_TypeInfo;
      }
      v66->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16956/*"afterActionBk"*/, 0);
    return;
  }
  v69 = sub_1D0F15C(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v69;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v4->fields.commandBuf, v69, v71, v72, v73, v74, v75, v76);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_412;
  v142 = 0;
  v78 = 0;
  v79 = 0;
  while ( (__int64)v78 < commandBuf[6] )
  {
    v80 = sub_1D0F300(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v80, 0);
    if ( v79 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_524;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        afterActionVals->m_Items[v79],
                                                                        0);
    if ( !v80 )
      goto LABEL_412;
    *(_DWORD *)(v80 + 16) = (_DWORD)MasterData_object;
    v87 = (int)v79 | 1LL;
    if ( (unsigned int)v87 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_524;
    v88 = afterActionVals->m_Items[v87];
    *(_QWORD *)(v80 + 24) = v88;
    v89 = (System_String_o **)(v80 + 24);
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v80 + 24), (int32_t)v88, v81, v82, v83, v84, v85, v86);
    QuestAfterAction__SetupCommandPreprocess(v4, (QuestAfterAction_Command_o *)v80, v78, 1, v90);
    if ( !v79 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v80 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( v4->fields.MapMoveBeforeFocusSpotId < 0 && *(_DWORD *)(v80 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v89;
      if ( !*v89 )
        goto LABEL_412;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0);
      if ( !MasterData_object )
        goto LABEL_412;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v92 = *(_DWORD *)(v80 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v92 != 700 )
    {
      if ( v92 == 703 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v89;
        if ( !*v89 )
          goto LABEL_412;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_65614680(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_810/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_412;
        if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 3 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              (System_String_o *)MasterData_object->fields._lookup,
                                                                              0);
          v93 = (int)MasterData_object > 0;
        }
        else
        {
          v93 = 0;
        }
        v4->fields.IsMoveBeforeFadeIn = v93;
        v4->fields.IsMoveToClassScore = 1;
        v92 = *(_DWORD *)(v80 + 16);
      }
      if ( v92 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v89;
        if ( !*v89 )
          goto LABEL_412;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_65614680(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_810/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_412;
        MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
        v95 = MasterData_object;
        if ( MasterName_k__BackingField )
        {
          if ( !(_DWORD)MasterName_k__BackingField )
            goto LABEL_524;
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              *(System_String_o **)&MasterData_object->fields.revision,
                                                                              0);
          if ( (int)MasterData_object >= 1 )
          {
            if ( SLODWORD(v95->fields._MasterName_k__BackingField) < 2 )
              v96 = 0;
            else
              v96 = System_Int32__Parse((System_String_o *)v95->fields.list, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            TerminalPramsManager__SetAutoResumeForFolder(v96, 0);
            if ( !byte_4E71891 )
            {
              sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
              byte_4E71891 = 1;
            }
            v97 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v97 = TerminalPramsManager_TypeInfo;
            }
            v98 = BalanceConfig_TypeInfo;
            WarId_k__BackingField = v97->static_fields->_WarId_k__BackingField;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v98 = BalanceConfig_TypeInfo;
            }
            if ( WarId_k__BackingField == v98->static_fields->OrdealCallWarId )
            {
              v4->fields.BlankEarthTargetWarId = v96;
              v142 = 1;
            }
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4E71891 )
            {
              sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
              byte_4E71891 = 1;
            }
            v100 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v100 = TerminalPramsManager_TypeInfo;
            }
            v101 = v100->static_fields->_WarId_k__BackingField;
            if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
            MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ScrTerminalListTop__IsGrandQuestWarId(
                                                                                v101,
                                                                                0);
            if ( ((unsigned __int8)MasterData_object & 1) != 0 )
            {
              if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
                                                                                  v96,
                                                                                  &ent,
                                                                                  1,
                                                                                  0);
              if ( ((unsigned __int8)MasterData_object & 1) != 0 )
                v4->fields.IsWaitFadeInForGrandQuestMovie = 1;
            }
          }
        }
        v92 = *(_DWORD *)(v80 + 16);
      }
      if ( v92 <= 208 )
      {
        if ( (unsigned int)(v92 - 100) < 0xF && ((0x7C1Fu >> (v92 - 100)) & 1) != 0 )
        {
          v11 = 0;
        }
        else
        {
          if ( (unsigned int)(v92 - 200) > 8 )
            goto LABEL_395;
          v11 = 1;
        }
      }
      else if ( v92 <= 550 )
      {
        if ( (unsigned int)(v92 - 400) < 0xD )
        {
          v11 = 2;
        }
        else
        {
          if ( v92 != 550 )
            goto LABEL_395;
          v11 = 3;
        }
      }
      else
      {
        v102 = v92 - 1000;
        if ( v102 >= 0xD || ((0x1C07u >> v102) & 1) == 0 )
          goto LABEL_395;
        v11 = 4;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
      if ( !MasterData_object )
        goto LABEL_412;
      Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                         v11,
                                                         (const MethodInfo_35C8700 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                          (QuestAfterAction_Command_o *)v80,
                                                                          v103);
      if ( !Item )
        goto LABEL_412;
      items = Item->fields._items;
      v106 = Method_System_Collections_Generic_List_int__Add__;
      ++Item->fields._version;
      if ( !items )
        goto LABEL_412;
      size = Item->fields._size;
      v11 = (unsigned int)MasterData_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          Item,
          (int32_t)MasterData_object,
          *(const MethodInfo_393F3EC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
      }
      else
      {
        Item->fields._size = size + 1;
        items->m_Items[size] = (int)MasterData_object;
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
LABEL_395:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v80, v91);
    if ( *(_DWORD *)(v80 + 16) == 102 )
    {
      v108 = (QuestAfterAction_o *)System_Int32__Parse(*v89, 0);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v108,
                                                                          (int32_t)v108,
                                                                          v109);
      if ( !MasterData_object )
        goto LABEL_412;
      v110 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v111 = MasterData_object;
      if ( (int)v110 >= 1 )
      {
        v112 = 0;
        while ( v112 < (unsigned int)v110 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_412;
          v11 = *((unsigned int *)&v111->fields.revision + v112);
          v113 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v114 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v113 )
            goto LABEL_412;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v113 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v11,
              *(const MethodInfo_393F3EC **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v113 + 4 * MasterName_k__BackingField_low + 32) = v11;
          }
          LODWORD(v110) = v111->fields._MasterName_k__BackingField;
          if ( (__int64)++v112 >= (int)v110 )
            goto LABEL_408;
        }
LABEL_524:
        sub_1D0F314(MasterData_object);
      }
    }
LABEL_408:
    v116 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_412;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1D0F1F0(
                                                                        v80,
                                                                        *(_QWORD *)(*(_QWORD *)v116 + 64LL));
    if ( !MasterData_object )
    {
      v141 = sub_1D0F330();
      sub_1D0F1DC(v141, 0);
    }
    if ( v78 >= v116[6] )
      goto LABEL_524;
    v123 = &v116[2 * v78];
    *((_QWORD *)v123 + 4) = v80;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v123 + 8), v80, v117, v118, v119, v120, v121, v122);
    commandBuf = (int *)*p_commandBuf;
    v79 += 2;
    ++v78;
    if ( !*p_commandBuf )
      goto LABEL_412;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E74123 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74123 = 1;
  }
  v124 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v124 = TerminalPramsManager_TypeInfo;
  }
  if ( v124->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v125 = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E7132C )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E7132C = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v125 )
      goto LABEL_412;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v125,
           &v147,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E71891 )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E71891 = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v127 = BalanceConfig_TypeInfo;
      v128 = v126->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v127 = BalanceConfig_TypeInfo;
      }
      if ( v128 == v127->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v147 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v146,
                                                                              v147->fields.spotId,
                                                                              (const MethodInfo_3535BC8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_452;
          if ( v146 )
          {
            v129 = (int32_t)v146[1].klass;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4E7412C )
            {
              sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
              byte_4E7412C = 1;
            }
            v130 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v130 = TerminalPramsManager_TypeInfo;
            }
            v130->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v129;
            goto LABEL_452;
          }
        }
LABEL_412:
        sub_1D0F30C(MasterData_object, v11);
      }
    }
  }
LABEL_452:
  if ( (v142 & 1) == 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E71D1E )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E71D1E = 1;
    }
    v131 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
    }
    v131->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4E73E4A )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
      byte_4E73E4A = 1;
    }
    if ( !v131->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v131);
      v131 = TerminalPramsManager_TypeInfo;
    }
    v131->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4E71891 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
      byte_4E71891 = 1;
    }
    if ( !v131->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v131);
      v131 = TerminalPramsManager_TypeInfo;
    }
    v132 = BalanceConfig_TypeInfo;
    v133 = v131->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v132 = BalanceConfig_TypeInfo;
    }
    v134 = TerminalPramsManager_TypeInfo;
    if ( v133 == v132->static_fields->OrdealCallWarId )
      goto LABEL_529;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E73D01 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73D01 = 1;
    }
    v134 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v134 = TerminalPramsManager_TypeInfo;
    }
    if ( v134->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_529:
      if ( !v134->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v134);
      if ( !byte_4E73CFA )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E73CFA = 1;
      }
      v135 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v135 = TerminalPramsManager_TypeInfo;
      }
      v135->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4E73D01 )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        v135 = TerminalPramsManager_TypeInfo;
        byte_4E73D01 = 1;
      }
      if ( !v135->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v135);
        v135 = TerminalPramsManager_TypeInfo;
      }
      if ( !v135->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v135->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v135);
        if ( !byte_4E73E4A )
        {
          sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
          byte_4E73E4A = 1;
        }
        v136 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v136 = TerminalPramsManager_TypeInfo;
        }
        v136->static_fields->_DispState_k__BackingField = 3;
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4E7125B )
    {
      sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
      byte_4E7125B = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v137 = MasterData_object[2].fields.list->klass;
    if ( !v137 )
      goto LABEL_412;
    v138 = *(ScrTerminalListTop_o **)&v137->_2.element_size;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E71891 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E71891 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v138 )
      goto LABEL_412;
    if ( ScrTerminalListTop__IsPlanetMapWarId(v138, HIDWORD(MasterData_object[2].fields.list->klass), 0) )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E73E4A )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E73E4A = 1;
      }
      v139 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v139 = TerminalPramsManager_TypeInfo;
      }
      v139->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E73E4D )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E73E4D = 1;
  }
  v140 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v140 = TerminalPramsManager_TypeInfo;
  }
  v140->static_fields->_SpotId_k__BackingField = -1;
}


void QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4E740E4 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_16956/*"afterActionBk"*/);
    byte_4E740E4 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16956/*"afterActionBk"*/, 0);
}


void QuestAfterAction__EnqueueVoiceLoadCallback(
        QuestAfterAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *pendingVoiceLoadCallbackList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4E74111 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Action__Add__);
    byte_4E74111 = 1;
  }
  if ( callback )
  {
    pendingVoiceLoadCallbackList = (System_Collections_Generic_List_object__o *)this->fields.pendingVoiceLoadCallbackList;
    if ( !pendingVoiceLoadCallbackList
      || (items = pendingVoiceLoadCallbackList->fields._items,
          v12 = Method_System_Collections_Generic_List_Action__Add__,
          ++pendingVoiceLoadCallbackList->fields._version,
          !items) )
    {
      sub_1D0F30C(pendingVoiceLoadCallbackList, callback);
    }
    size = pendingVoiceLoadCallbackList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        pendingVoiceLoadCallbackList,
        (Il2CppObject *)callback,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      pendingVoiceLoadCallbackList->fields._size = size + 1;
      v14[4] = (Il2CppClass *)callback;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)callback, (int32_t)method, v3, v4, v5, v6, v7);
    }
  }
}


void QuestAfterAction__ExecuteReservedCommandListBeforeFadeIn(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestAfterAction_Command__o *ReservedCommandListBeforeFadeIn_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *current; // x20
  int klass; // w8
  bool v12; // w0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4E74105 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___80345640);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_Command__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E74105 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ReservedCommandListBeforeFadeIn_k__BackingField = this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  if ( ReservedCommandListBeforeFadeIn_k__BackingField
    && ReservedCommandListBeforeFadeIn_k__BackingField->fields._size >= 1 )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    System_Collections_Generic_List_object____ctor_60144900(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)ReservedCommandListBeforeFadeIn_k__BackingField,
      (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___80345640);
    if ( !v4 )
      sub_1D0F30C(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v4,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
        if ( !v7 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v16,
            (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
          return;
        }
        current = v16.fields._current;
        if ( !v16.fields._current )
          sub_1D0F30C(v7, v8);
        klass = (int)v16.fields._current[1].klass;
        if ( klass != 1300 )
          break;
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v12 = QuestAfterAction__TryEventUiDisableCommand((QuestAfterAction_Command_o *)current, v8);
LABEL_21:
        if ( v12 )
        {
          v14 = (System_Collections_Generic_List_object__o *)this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
          if ( !v14 )
            sub_1D0F30C(0, v13);
          System_Collections_Generic_List_object___Remove(
            v14,
            current,
            (const MethodInfo_395D938 *)Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
        }
      }
      if ( klass == 1310 )
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v12 = QuestAfterAction__TryRaidUiDisableCommand((QuestAfterAction_Command_o *)current, 0, v9);
        goto LABEL_21;
      }
      if ( klass == 1312 )
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v12 = QuestAfterAction__TryRaidUiDisableCommand((QuestAfterAction_Command_o *)current, 1, v9);
        goto LABEL_21;
      }
    }
  }
}


bool QuestAfterAction__ExistsBlankEarthTutorialRankChangeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_Command_array *BlankEarthTutorialCommand; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  il2cpp_array_size_t max_length; // x8
  QuestAfterAction_Command_array *v6; // x19
  bool v7; // w20
  unsigned __int64 v8; // x21

  BlankEarthTutorialCommand = QuestAfterAction__GetBlankEarthTutorialCommand(this, method);
  if ( !BlankEarthTutorialCommand )
    sub_1D0F30C(0, v3);
  max_length = BlankEarthTutorialCommand->max_length;
  v6 = BlankEarthTutorialCommand;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1D0F314(BlankEarthTutorialCommand);
      BlankEarthTutorialCommand = (QuestAfterAction_Command_array *)QuestAfterAction__IsRankChangeCommand(
                                                                      (QuestAfterAction_o *)BlankEarthTutorialCommand,
                                                                      v6->m_Items[v8],
                                                                      v4);
      if ( ((unsigned __int8)BlankEarthTutorialCommand & 1) != 0 )
        break;
      LODWORD(max_length) = v6->max_length;
      v7 = (__int64)++v8 < (int)max_length;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return v7;
}


int32_t QuestAfterAction__ExtractCommandTargetId(QuestAfterAction_Command_o *command, const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x20
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v2 = command;
  if ( (byte_4E740E9 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1D0F0B4(&StringLiteral_810/*","*/);
    byte_4E740E9 = 1;
  }
  result = 0;
  if ( !v2 )
    goto LABEL_13;
  command = (QuestAfterAction_Command_o *)System_String__IsNullOrEmpty(v2->fields.param, 0);
  if ( ((unsigned __int8)command & 1) != 0 )
    return 0;
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( !param )
    goto LABEL_13;
  if ( System_String__Contains(v2->fields.param, (System_String_o *)StringLiteral_810/*","*/, 0) )
  {
    command = (QuestAfterAction_Command_o *)v2->fields.param;
    if ( command )
    {
      command = (QuestAfterAction_Command_o *)System_String__Split((System_String_o *)command, 0x2Cu, 0, 0);
      if ( command )
      {
        if ( !LODWORD(command->fields.param) )
          sub_1D0F314(command);
        param = command[1].klass;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1D0F30C(command, method);
  }
LABEL_12:
  System_Int32__TryParse((System_String_o *)param, &result, 0);
  return result;
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4E740F4 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    byte_4E740F4 = 1;
  }
  v5 = sub_1D0F300(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)commandEnumerable, v14, v15, v16, v17, v18, v19);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


void QuestAfterAction__FlushVoiceLoadCallbacks(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *pendingVoiceLoadCallbackList; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_Action__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E74112 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_Action___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Action___ctor___80304624);
    sub_1D0F0B4(&System_Collections_Generic_List_Action__TypeInfo);
    byte_4E74112 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pendingVoiceLoadCallbackList,
         (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_Action___) )
  {
    pendingVoiceLoadCallbackList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pendingVoiceLoadCallbackList;
    v4 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_Action__TypeInfo);
    System_Collections_Generic_List_object____ctor_60144900(
      v4,
      pendingVoiceLoadCallbackList,
      (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_Action___ctor___80304624);
    v7 = this->fields.pendingVoiceLoadCallbackList;
    if ( !v7 )
      goto LABEL_13;
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
    if ( !v4 )
LABEL_13:
      sub_1D0F30C(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      v4,
      (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      ActionExtensions__Call((System_Action_o *)v10.fields._current, 0);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
  }
}


QuestAfterAction_Command_array *QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  long double inited; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  unsigned int *v10; // x20
  __int64 v11; // x22
  unsigned __int64 v12; // x23
  __int64 v13; // x24
  unsigned int v14; // w25
  __int64 v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v30; // x0

  if ( (byte_4E740EA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1D0F0B4(&QuestAfterAction_Command___TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_Command_TypeInfo);
    byte_4E740EA = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v7 )
    {
      sub_1CE5198(Method_System_Array_Empty_QuestAfterAction_Command___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1CE513C(inited);
    return **(QuestAfterAction_Command_array ***)(v9 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1D0F15C(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_1D0F30C(IsNullOrEmpty, v4);
    }
    v10 = (unsigned int *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v11 = 0;
      v12 = 0;
      v13 = IsNullOrEmpty + 32;
      v14 = 1;
      do
      {
        v15 = sub_1D0F300(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v15, 0);
        if ( v14 - 1 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v14 - 1], 0);
        if ( !v15 )
          goto LABEL_25;
        *(_DWORD *)(v15 + 16) = IsNullOrEmpty;
        if ( v14 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        v22 = actionVals->m_Items[v14];
        *(_QWORD *)(v15 + 24) = v22;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v22, v16, v17, v18, v19, v20, v21);
        IsNullOrEmpty = sub_1D0F1F0(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v30 = sub_1D0F330();
          sub_1D0F1DC(v30, 0);
        }
        if ( v12 >= v10[6] )
LABEL_24:
          sub_1D0F314(IsNullOrEmpty);
        *(_QWORD *)(v13 + 8 * v12) = v15;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v13 + v11), v15, v23, v24, v25, v26, v27, v28);
        ++v12;
        v14 += 2;
        v11 += 8;
      }
      while ( (__int64)v12 < (int)v10[6] );
    }
  }
  return (QuestAfterAction_Command_array *)v10;
}


System_String_array *QuestAfterAction__GetAfterAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x1
  System_String_array *v10; // x22
  Il2CppObject *v12; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x19

  if ( (byte_4E74100 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_string___);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74100 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4E7132B )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4E7132B = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v10 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v8,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v10, v9) )
  {
    if ( v10 )
      return v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4E7132C )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            byte_4E7132C = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v12 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v14[6].klass;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1D0F30C(Instance, v6);
  }
  return 0;
}


System_String_array *QuestAfterAction__GetBeforeAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x1
  System_String_array *v10; // x22
  Il2CppObject *v12; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x19

  if ( (byte_4E740FF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_string___);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E740FF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4E7132B )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4E7132B = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v10 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v8,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v10, v9) )
  {
    if ( v10 )
      return v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4E7132C )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            byte_4E7132C = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v12 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v14[5].monitor;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1D0F30C(Instance, v6);
  }
  return 0;
}


QuestAfterAction_Command_array *QuestAfterAction__GetBlankEarthTutorialCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Array_o *v5; // x20
  __int64 v6; // x21
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  QuestAfterAction___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__object__o *_9__129_0; // x21
  Il2CppObject *v19; // x22
  struct QuestAfterAction___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_TSource__o *v28; // x0
  QuestAfterAction___c_c *v29; // x8
  System_Collections_Generic_List_object__o *v30; // x21
  System_Func_object__object__o *_9__129_1; // x22
  Il2CppObject *v32; // x23
  struct QuestAfterAction___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  QuestAfterAction_o *v41; // x0
  const MethodInfo *v42; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v43; // x0
  const MethodInfo *v44; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v45; // x0

  if ( (byte_4E74103 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1D0F0B4(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1D0F0B4(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1D0F0B4(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1D0F0B4(&Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB);
    sub_1D0F0B4(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_0__);
    sub_1D0F0B4(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_1__);
    sub_1D0F0B4(&QuestAfterAction___c_TypeInfo);
    byte_4E74103 = 1;
  }
  v3 = (System_Array_o *)sub_1D0F15C(EventTutorialMaster_OpenType___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB;
  v5 = v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_66261996(v3, v4, 0);
  v6 = sub_1D0F300(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v6, 0);
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = v5;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)v5, v9, v10, v11, v12, v13, v14);
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v6,
                             0);
  v16 = QuestAfterAction___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v16 = QuestAfterAction___c_TypeInfo;
  }
  _9__129_0 = (System_Func_object__object__o *)v16->static_fields->__9__129_0;
  if ( !_9__129_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = QuestAfterAction___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__129_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__129_0,
      v19,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_0__,
      0);
    static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    static_fields->__9__129_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__129_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__129_0,
      (int32_t)_9__129_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__129_0,
                                                               (const MethodInfo_3288F34 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v28 = System_Linq_Enumerable__ToList_object_(
          v27,
          (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_string___);
  v29 = QuestAfterAction___c_TypeInfo;
  v30 = (System_Collections_Generic_List_object__o *)v28;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v29 = QuestAfterAction___c_TypeInfo;
  }
  _9__129_1 = (System_Func_object__object__o *)v29->static_fields->__9__129_1;
  if ( !_9__129_1 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = QuestAfterAction___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__129_1 = (System_Func_object__object__o *)sub_1D0F300(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__129_1,
      v32,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_1__,
      0);
    v33 = QuestAfterAction___c_TypeInfo->static_fields;
    v33->__9__129_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__129_1;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v33->__9__129_1, (int32_t)_9__129_1, v34, v35, v36, v37, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__129_1,
                                                               (const MethodInfo_3288F34 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                        v40,
                                                        (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !v30 )
LABEL_18:
    sub_1D0F30C(v7, v8);
  System_Collections_Generic_List_object___AddRange(
    v30,
    v7,
    (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_string__AddRange__);
  v41 = (QuestAfterAction_o *)System_Collections_Generic_List_object___ToArray(
                                v30,
                                (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_string__ToArray__);
  v43 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v41,
                                                                                (System_String_array *)v41,
                                                                                v42);
  v45 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v43, v44);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                             (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetCommandType(QuestAfterAction_o *this, int32_t commandId, const MethodInfo *method)
{
  if ( commandId <= 208 )
  {
    if ( (unsigned int)(commandId - 100) >= 0xF || ((0x7C1Fu >> (commandId - 100)) & 1) == 0 )
    {
      if ( (unsigned int)(commandId - 200) <= 8 )
        return 1;
      return -1;
    }
    return 0;
  }
  else
  {
    if ( commandId > 550 )
    {
      if ( (unsigned int)(commandId - 1000) < 0xD )
        return dword_D69554[commandId - 1000];
      return -1;
    }
    if ( (unsigned int)(commandId - 400) >= 0xD )
    {
      if ( commandId == 550 )
        return 3;
      return -1;
    }
    return 2;
  }
}


SrcSpotBasePrefab_o *QuestAfterAction__GetLastDispSpot(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.lastDispSpot;
}


Il2CppObject *QuestAfterAction__GetMapComponent_object_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_32EA1F8 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1CE5198();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v11 )
    return 0;
  if ( !MapGameObject )
    sub_1D0F30C(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_32A8444 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *QuestAfterAction__GetMapGameObject(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo *method)
{
  QuestAfterAction_o *v8; // x22
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v11; // x23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_4E740FA & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1D0F0B4(&SrcSpotBasePrefab_TypeInfo);
    byte_4E740FA = 1;
  }
  if ( comType != 2 )
  {
    if ( comType == 1 )
    {
      if ( !state )
        goto LABEL_45;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subRoadRoot;
        if ( !this )
          goto LABEL_45;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mRoadRoot;
        if ( !this )
          goto LABEL_45;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0);
      if ( !transform )
        goto LABEL_45;
    }
    else
    {
      if ( comType )
      {
        v9 = 0;
        goto LABEL_35;
      }
      if ( !state )
        goto LABEL_45;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subSpotRoot;
        if ( !this )
          goto LABEL_45;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mSpotRoot;
        if ( !this )
          goto LABEL_45;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0);
      if ( !transform )
LABEL_45:
        sub_1D0F30C(this, *(_QWORD *)&comType);
    }
    goto LABEL_34;
  }
  if ( !state )
    goto LABEL_45;
  if ( state->fields.IsMapModel )
  {
    this = (QuestAfterAction_o *)QuestAfterAction_StateMain__get_SubGimmickRoot(state, 0);
    if ( !this )
      goto LABEL_45;
LABEL_30:
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v13);
    if ( !transform )
      goto LABEL_45;
LABEL_34:
    v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0);
    goto LABEL_35;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_45;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v12);
  if ( !v11 )
    goto LABEL_45;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v11, (System_String_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_35:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_45;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v14);
    }
    else
    {
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))state->klass->vtable._14_EndAnim.methodPtr)(
        state,
        state->klass->vtable._14_EndAnim.method);
    }
    return 0;
  }
  else
  {
    if ( !v9 )
      goto LABEL_45;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
  }
}


System_Int32_array *QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  System_Object_array *Instance; // x0
  __int64 name_low; // x1
  int max_length; // w8
  System_Object_array *v8; // x21
  unsigned int v9; // w23
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4E740EB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E740EB = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_3534E00 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v8 = Instance;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1D0F314(Instance);
      v10 = &v8->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v10[4], 0);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        name_low = LODWORD(v11->_1.name);
        items = v4->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            name_low,
            *(const MethodInfo_393F3EC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = name_low;
        }
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1D0F30C(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


QuestAfterAction_Command_array *QuestAfterAction__GetRaidUiSetupCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *EventID; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Array_o *v6; // x0
  System_RuntimeFieldHandle_o v7; // x1
  System_Array_o *v8; // x21
  __int64 v9; // x20
  TerminalPramsManager_c *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct TerminalSceneComponent_o *v17; // x8
  struct ScrTerminalMap_o *v18; // x8
  int32_t *p_currentMapId; // x8
  TerminalPramsManager_c *v20; // x0
  TerminalPramsManager_c *v21; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  QuestAfterAction___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__object__o *_9__128_0; // x21
  Il2CppObject *v26; // x22
  struct QuestAfterAction___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  QuestAfterAction_o *v35; // x0
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v37; // x0
  const MethodInfo *v38; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v39; // x0

  if ( (byte_4E74102 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1D0F0B4(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1D0F0B4(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1D0F0B4(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_1D0F0B4(&Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__128_0__);
    sub_1D0F0B4(&QuestAfterAction___c_TypeInfo);
    byte_4E74102 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  EventID = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    EventID = TerminalSceneComponent_TypeInfo;
  }
  mInstance = EventID->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_47;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_47;
  if ( mTerminalMap->fields.currentMapId >= 1 )
  {
    v6 = (System_Array_o *)sub_1D0F15C(EventTutorialMaster_OpenType___TypeInfo, 3);
    v7.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v8 = v6;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_66261996(v6, v7, 0);
    v9 = sub_1D0F300(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v9, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E71891 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E71891 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v10->static_fields->_WarId_k__BackingField, 0);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 24) = v8;
      *(_DWORD *)(v9 + 16) = (_DWORD)EventID;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)v8, v11, v12, v13, v14, v15, v16);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4E7125B )
      {
        sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
        byte_4E7125B = 1;
      }
      EventID = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        EventID = TerminalSceneComponent_TypeInfo;
      }
      v17 = EventID->static_fields->mInstance;
      if ( v17 )
      {
        v18 = v17->fields.mTerminalMap;
        if ( v18 )
        {
          p_currentMapId = &v18->fields.currentMapId;
          goto LABEL_40;
        }
      }
    }
LABEL_47:
    sub_1D0F30C(EventID, method);
  }
  v9 = sub_1D0F300(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v9, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E71891 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71891 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v20->static_fields->_WarId_k__BackingField, 0);
  if ( !v9 )
    goto LABEL_47;
  *(_DWORD *)(v9 + 16) = (_DWORD)EventID;
  *(_DWORD *)(v9 + 20) = 18;
  if ( !byte_4E71891 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71891 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  p_currentMapId = &v21->static_fields->_WarId_k__BackingField;
LABEL_40:
  *(_DWORD *)(v9 + 40) = *p_currentMapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v9,
                             0);
  v23 = QuestAfterAction___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v23 = QuestAfterAction___c_TypeInfo;
  }
  _9__128_0 = (System_Func_object__object__o *)v23->static_fields->__9__128_0;
  if ( !_9__128_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = QuestAfterAction___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__128_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__128_0, v26, Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__128_0__, 0);
    static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    static_fields->__9__128_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__128_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__128_0,
      (int32_t)_9__128_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v24,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__128_0,
                                                               (const MethodInfo_3288F34 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v35 = (QuestAfterAction_o *)System_Linq_Enumerable__ToArray_object_(
                                v34,
                                (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v37 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v35,
                                                                                (System_String_array *)v35,
                                                                                v36);
  v39 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v37, v38);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                             (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4E740F8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4E740F8 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    return fsm->fields.m_state;
  else
    return 0;
}


bool QuestAfterAction__HasAnyRequestedVoiceToLoad(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v3; // x0
  bool result; // w0

  if ( (byte_4E74114 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_4E74114 = 1;
  }
  result = 1;
  if ( !this->fields.isAfterActionVoiceLoadRequested || !QuestAfterAction__HasVoiceToLoad(this, method) )
  {
    if ( !this->fields.isTutorialVoiceLoadRequested )
      return 0;
    v3 = QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, method);
    if ( !System_Linq_Enumerable__Any_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v3,
            (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
      return 0;
  }
  return result;
}


bool QuestAfterAction__HasVoiceToLoad(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v3; // x0

  if ( (byte_4E74113 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_4E74113 = 1;
  }
  if ( this->fields.voiceLoadedRevision != this->fields.voiceRegisterRevision )
    return 1;
  v3 = QuestAfterAction__BuildPendingVoiceInfoList(this, method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
}


void QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  CStateManager_T__o *fsm; // x21
  QuestAfterAction_StateNone_o *v13; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  QuestAfterAction_StateMain_o *v17; // x22
  CStateManager_T__o *v18; // x21
  QuestAfterAction_StateAdditional_o *v19; // x22
  CStateManager_T__o *v20; // x20
  QuestAfterAction_StateInstant_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v29; // x21
  int v30; // w8
  System_Collections_Generic_List_int__o *v31; // x22
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_int__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Collections_Generic_List_QuestAfterAction_Command__o **p_ReservedCommandListBeforeFadeIn_k__BackingField; // x19
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4E740E5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1D0F0B4(&Method_CStateManager_QuestAfterAction__add__);
    sub_1D0F0B4(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_StateMain_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_StateNone_TypeInfo);
    byte_4E740E5 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1D0F300(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_34BF700 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (QuestAfterAction_StateNone_o *)sub_1D0F300(QuestAfterAction_StateNone_TypeInfo);
    QuestAfterAction_StateNone___ctor(v13, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_34BF7A8 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (QuestAfterAction_StateMain_o *)sub_1D0F300(QuestAfterAction_StateMain_TypeInfo);
    QuestAfterAction_StateMain___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_34BF7A8 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_1D0F300(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_34BF7A8 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_1D0F300(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_34BF7A8 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v22, v23, v24, v25, v26, v27);
  v28 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v28,
                                                                                (const MethodInfo_35C8994 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v28,
                                                                                  (const MethodInfo_35C8700 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v30 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v30;
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v29 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v29,
        v28,
        (Il2CppObject *)v31,
        (const MethodInfo_35C878C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v28;
  }
  while ( v28 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0) )
  {
LABEL_21:
    sub_1D0F30C(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.lastDispSpot, 0, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v45;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.invalidMapGimmickIdList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = 0;
  p_ReservedCommandListBeforeFadeIn_k__BackingField = &this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField - 8) = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)p_ReservedCommandListBeforeFadeIn_k__BackingField,
    0,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField - 32) = 0;
}


void QuestAfterAction__InvalidateVoiceLoadState(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t voiceRegisterRevision; // w8

  voiceRegisterRevision = this->fields.voiceRegisterRevision;
  this->fields.isLoadedVoice = 0;
  this->fields.voiceRegisterRevision = voiceRegisterRevision + 1;
}


bool QuestAfterAction__IsActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.commandBuf != 0;
}


bool QuestAfterAction__IsBlankEarthActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool IsExistTerminalTransition; // w0
  _DWORD *QuestInfo; // x0
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  TerminalPramsManager_c *v9; // x0
  int v10; // w19
  bool isFadeTransition; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E74101 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74101 = 1;
  }
  isFadeTransition = 0;
  if ( this->fields.commandBuf
    && (IsExistTerminalTransition = QuestAfterAction__IsExistTerminalTransition(this, &isFadeTransition, v2),
        !IsExistTerminalTransition || !isFadeTransition) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E73D01 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E73D01 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( v6->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      LOBYTE(QuestInfo) = 1;
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7132C )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7132C = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      if ( !Instance )
        sub_1D0F30C(v9, v7);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v9->static_fields->_QuestId_k__BackingField, 0);
      if ( QuestInfo )
      {
        v10 = QuestInfo[16];
        QuestInfo = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          QuestInfo = BalanceConfig_TypeInfo;
        }
        LOBYTE(QuestInfo) = v10 == *(_DWORD *)(*((_QWORD *)QuestInfo + 23) + 852LL);
      }
    }
  }
  else
  {
    LOBYTE(QuestInfo) = 0;
  }
  return (char)QuestInfo;
}


bool QuestAfterAction__IsCommandRaidUiDisableQuick(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        int32_t day,
        const MethodInfo *method)
{
  QuestAfterAction_o *v5; // x21
  int v6; // w20
  int32_t v7; // w22
  _BOOL4 v8; // w23
  _BOOL4 v10; // w8

  if ( !command )
    goto LABEL_14;
  if ( command->fields.id != 1312 )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_14:
    sub_1D0F30C(this, command);
  v5 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource)
    || (this = (QuestAfterAction_o *)System_Int32__Parse((System_String_o *)this->fields.invalidMapGimmickIdList, 0),
        LODWORD(v5->fields.m_CancellationTokenSource) <= 1) )
  {
    sub_1D0F314(this);
  }
  v6 = (int)this;
  v7 = System_Int32__Parse((System_String_o *)v5->fields._TitleInfoCtrlCallback_k__BackingField, 0);
  if ( SLODWORD(v5->fields.m_CancellationTokenSource) >= 3 )
  {
    v8 = System_Int32__Parse((System_String_o *)v5->fields._BlankEarthQuestAfterAction_k__BackingField, 0) > 0;
    if ( SLODWORD(v5->fields.m_CancellationTokenSource) >= 4 )
    {
      v10 = System_Int32__Parse((System_String_o *)v5->fields._PlanetEarthQuestAfterAction_k__BackingField, 0) > 0;
      return v10 || v8 || v6 == day || v7 == day;
    }
  }
  else
  {
    v8 = 0;
  }
  v10 = 0;
  return v10 || v8 || v6 == day || v7 == day;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4E740EE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4E740EE = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_35C8994 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_35C8700 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_393F764 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1D0F30C(commandTypeIds, *(_QWORD *)&commandType);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistSpotReveal(QuestAfterAction_o *this, int32_t spotId, const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x8
  QuestAfterAction_o *v4; // x19
  __int64 v6; // x22
  int max_length; // w9
  bool v8; // w21
  QuestAfterAction_Command_o *v9; // x9
  int32_t id; // w10

  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandBuf->max_length;
    v8 = (int)v6 < max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1D0F314(this);
    v9 = commandBuf->m_Items[v6];
    if ( v9 )
    {
      id = v9->fields.id;
      if ( id == 112 || id == 102 )
      {
        this = (QuestAfterAction_o *)System_Int32__Parse(v9->fields.param, 0);
        if ( (_DWORD)this == spotId )
          return v8;
        commandBuf = v4->fields.commandBuf;
      }
      ++v6;
      if ( commandBuf )
        continue;
    }
    sub_1D0F30C(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool QuestAfterAction__IsExistTerminalTransition(
        QuestAfterAction_o *this,
        bool *isFadeTransition,
        const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int max_length; // w8
  __int64 v6; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v8; // x20
  int32_t id; // w11
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  *isFadeTransition = 0;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  max_length = commandBuf->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  m_Items = commandBuf->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      goto LABEL_19;
    v8 = m_Items[v6];
    if ( !v8 )
      goto LABEL_18;
    id = v8->fields.id;
    if ( id == 701 )
      return 1;
    if ( id == 702 )
      break;
    if ( (int)++v6 >= max_length )
      return 0;
  }
  if ( !System_String__IsNullOrEmpty(v8->fields.param, 0) )
  {
    this = (QuestAfterAction_o *)v8->fields.param;
    if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_18:
      sub_1D0F30C(this, isFadeTransition);
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( !(_DWORD)m_CancellationTokenSource )
LABEL_19:
        sub_1D0F314(this);
      if ( System_Int32__TryParse((System_String_o *)this->fields.invalidMapGimmickIdList, &result, 0) )
        *isFadeTransition = result > 0;
    }
  }
  return 1;
}


bool QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4E740FD & 1) == 0 )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E740FD = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1D0F30C(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0);
}


bool QuestAfterAction__IsNoWaitCommand(QuestAfterAction_Command_o *cmd, const MethodInfo *method)
{
  int32_t id; // w20
  QuestAfterAction_Command_o *v3; // x19
  System_String_array *v4; // x0
  char v5; // w9
  System_String_array *v6; // x8
  int32_t v7; // w8
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-18h] BYREF

  v9 = 0;
  if ( !cmd )
    goto LABEL_36;
  id = cmd->fields.id;
  v3 = cmd;
  if ( id <= 403 )
  {
    if ( id > 205 )
    {
      if ( (id & 0xFFFFFFFE) != 0x192 )
        goto LABEL_15;
      LOBYTE(cmd) = 1;
      return (char)cmd;
    }
    LOBYTE(cmd) = 1;
    if ( (unsigned int)(id - 110) < 5 || (unsigned int)(id - 203) < 3 )
      return (char)cmd;
LABEL_15:
    if ( System_String__IsNullOrEmpty(v3->fields.param, 0) )
    {
LABEL_16:
      LOBYTE(cmd) = 0;
      return (char)cmd;
    }
    cmd = (QuestAfterAction_Command_o *)v3->fields.param;
    if ( !cmd )
      goto LABEL_36;
    v4 = System_String__Split((System_String_o *)cmd, 0x2Cu, 0, 0);
    v5 = id - 44;
    v6 = v4;
    cmd = 0;
    if ( (unsigned int)(id - 300) > 8 )
      return (char)cmd;
    if ( ((1 << v5) & 0xE8) != 0 )
    {
      if ( !v6 )
        goto LABEL_36;
      if ( SLODWORD(v6->max_length) < 5 || !System_Int32__TryParse(v6->m_Items[4], result, 0) )
        goto LABEL_16;
      v7 = result[0];
    }
    else
    {
      if ( ((1 << v5) & 7) != 0 )
      {
        if ( v6 )
        {
          if ( SLODWORD(v6->max_length) < 4 || !System_Int32__TryParse(v6->m_Items[3], &result[1], 0) )
            goto LABEL_16;
          v7 = result[1];
          goto LABEL_30;
        }
LABEL_36:
        sub_1D0F30C(cmd, method);
      }
      if ( id != 308 )
        return (char)cmd;
      if ( !v6 )
        goto LABEL_36;
      if ( SLODWORD(v6->max_length) < 6 || !System_Int32__TryParse(v6->m_Items[5], &v9, 0) )
        goto LABEL_16;
      v7 = v9;
    }
LABEL_30:
    LOBYTE(cmd) = v7 > 0;
    return (char)cmd;
  }
  if ( id <= 1200 )
  {
    LOBYTE(cmd) = 1;
    if ( (unsigned int)(id - 1010) < 3 || id == 1200 )
      return (char)cmd;
    goto LABEL_15;
  }
  LOBYTE(cmd) = 1;
  if ( id != 1300 && id != 1312 )
    goto LABEL_15;
  return (char)cmd;
}


bool QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFE) == 1010;
}


bool QuestAfterAction__IsOtherObjHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1000 || cmd == 1010;
}


bool QuestAfterAction__IsOverwriteCommandNone(System_String_array *actionCommand, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8

  if ( actionCommand )
  {
    max_length = actionCommand->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1D0F314(actionCommand);
      LOBYTE(actionCommand) = System_Int32__Parse(actionCommand->m_Items[0], 0) == 0;
    }
    else
    {
      LOBYTE(actionCommand) = 0;
    }
  }
  return (char)actionCommand;
}


bool QuestAfterAction__IsPlaying(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4E740F8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4E740F8 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4E740F8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4E740F8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    return 0;
  if ( fsm->fields.m_state == 1 )
    return 1;
  return fsm->fields.m_state == 2;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsRaidUiDisableQuickBySetUpCommand(
        QuestAfterAction_o *this,
        int32_t day,
        const MethodInfo *method)
{
  QuestAfterAction_Command_array *RaidUiSetupCommand; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct QuestAfterAction_Command_array *commandBuf; // x21
  QuestAfterAction_Command_array *v9; // x20
  il2cpp_array_size_t v10; // x8
  unsigned __int64 v11; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x21

  RaidUiSetupCommand = QuestAfterAction__GetRaidUiSetupCommand(this, *(const MethodInfo **)&day);
  commandBuf = this->fields.commandBuf;
  v9 = RaidUiSetupCommand;
  if ( commandBuf && (v10 = commandBuf->max_length, (int)v10 >= 1) )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        goto LABEL_17;
      RaidUiSetupCommand = (QuestAfterAction_Command_array *)QuestAfterAction__IsCommandRaidUiDisableQuick(
                                                               (QuestAfterAction_o *)RaidUiSetupCommand,
                                                               commandBuf->m_Items[v11],
                                                               day,
                                                               v7);
      if ( ((unsigned __int8)RaidUiSetupCommand & 1) != 0 )
        break;
      LODWORD(v10) = commandBuf->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_7;
    }
    LOBYTE(RaidUiSetupCommand) = 1;
  }
  else
  {
LABEL_7:
    if ( !v9 )
      sub_1D0F30C(RaidUiSetupCommand, v6);
    max_length = v9->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      while ( v13 < (unsigned int)max_length )
      {
        RaidUiSetupCommand = (QuestAfterAction_Command_array *)QuestAfterAction__IsCommandRaidUiDisableQuick(
                                                                 (QuestAfterAction_o *)RaidUiSetupCommand,
                                                                 v9->m_Items[v13],
                                                                 day,
                                                                 v7);
        if ( ((unsigned __int8)RaidUiSetupCommand & 1) == 0 )
        {
          LODWORD(max_length) = v9->max_length;
          if ( (__int64)++v13 < (int)max_length )
            continue;
        }
        return (unsigned __int8)RaidUiSetupCommand & 1;
      }
LABEL_17:
      sub_1D0F314(RaidUiSetupCommand);
    }
    LOBYTE(RaidUiSetupCommand) = 0;
  }
  return (unsigned __int8)RaidUiSetupCommand & 1;
}


bool QuestAfterAction__IsRankChangeCommand(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  bool v5; // w8
  bool v6; // w0
  bool v7; // w0
  int32_t v8; // w1
  BalanceConfig_c *v9; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E74104 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    this = (QuestAfterAction_o *)sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4E74104 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !command )
    goto LABEL_20;
  if ( command->fields.id != 560 || System_String__IsNullOrEmpty(command->fields.param, 0) )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_20:
    sub_1D0F30C(this, command);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 3 )
    return 0;
  v5 = System_Int32__TryParse(
         (System_String_o *)this->fields._BlankEarthQuestAfterAction_k__BackingField,
         &result[1],
         0);
  v6 = 0;
  if ( v5 && result[1] == 1 )
  {
    if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
      sub_1D0F314(0);
    v7 = System_Int32__TryParse((System_String_o *)v4->fields._TitleInfoCtrlCallback_k__BackingField, result, 0);
    v8 = result[0];
    if ( result[0] >= 1 && v7 )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
        v8 = result[0];
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v9->static_fields->BlankEarthRankChangeEventUiIds,
             v8,
             (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        return 1;
      }
    }
    return 0;
  }
  return v6;
}


bool QuestAfterAction__IsRemainFadeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  bool result; // w0
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int32_t commandIdx; // w8
  int32_t max_length; // w9
  __int64 v6; // x10
  int v7; // w11

  if ( this->fields.IsMoveBeforeFadeIn )
    return 1;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  commandIdx = this->fields.commandIdx;
  max_length = commandBuf->max_length;
  if ( commandIdx >= max_length )
    return 0;
  v6 = (__int64)&commandBuf->m_Items[commandIdx];
  result = 1;
  while ( 1 )
  {
    if ( commandIdx >= (unsigned int)max_length )
      sub_1D0F314(1);
    if ( !*(_QWORD *)v6 )
      sub_1D0F30C(1, method);
    v7 = *(_DWORD *)(*(_QWORD *)v6 + 16LL);
    if ( v7 == 405 || v7 == 520 )
      break;
    ++commandIdx;
    v6 += 8;
    if ( commandIdx >= max_length )
      return 0;
  }
  return result;
}


bool QuestAfterAction__IsSetUpCommandHasHideRaidUi(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_Command_array *RaidUiSetupCommand; // x0
  __int64 v4; // x1
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int v6; // w8
  __int64 v7; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v9; // x11
  int32_t id; // w11
  int max_length; // w9
  int v12; // w10
  QuestAfterAction_Command_o *v13; // x8
  int32_t v14; // w11
  bool v15; // w8

  RaidUiSetupCommand = QuestAfterAction__GetRaidUiSetupCommand(this, method);
  commandBuf = this->fields.commandBuf;
  if ( commandBuf && (v6 = commandBuf->max_length, v6 >= 1) )
  {
    v7 = 0;
    m_Items = commandBuf->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_20;
      v9 = m_Items[v7];
      if ( !v9 )
        goto LABEL_21;
      id = v9->fields.id;
      if ( id == 1310 || id == 1312 )
        return 1;
      if ( (int)++v7 >= v6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( !RaidUiSetupCommand )
LABEL_21:
      sub_1D0F30C(RaidUiSetupCommand, v4);
    max_length = RaidUiSetupCommand->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( max_length != v12 )
      {
        v13 = RaidUiSetupCommand->m_Items[v12];
        if ( !v13 )
          goto LABEL_21;
        v14 = v13->fields.id;
        v15 = 1;
        if ( v14 == 1310 || v14 == 1312 )
          return v15;
        if ( max_length == ++v12 )
          return 0;
      }
LABEL_20:
      sub_1D0F314(RaidUiSetupCommand);
    }
    return 0;
  }
}


bool QuestAfterAction__IsSpotChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (unsigned int)(cmd - 110) < 3;
}


bool QuestAfterAction__IsSpotDispCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 102 || cmd == 112;
}


bool QuestAfterAction__IsSpotGrayCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 101 || cmd == 111;
}


bool QuestAfterAction__IsSpotHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 100 || cmd == 110;
}


void QuestAfterAction__LoadTerminalTransitionInfo(QuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v3; // x1
  TerminalTransitionInfo_o *v4; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v6; // x19
  DataManager_o *v7; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v9; // x23
  EventMissionActionInfo_o *v10; // x21
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  struct TerminalTransitionInfo_o *v29; // x8
  EventMissionActionEntity_o *v30; // x0
  EventMissionActionEntity_o *v31; // x23
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x23
  TerminalPramsManager_c *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E740EF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1D0F0B4(&EventMissionActionInfo_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E740EF = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0);
  if ( !TerminalTransitionInfoData )
    return;
  v4 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v6 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v6 )
    goto LABEL_67;
  if ( v6->fields._TransitionInfo_k__BackingField )
    return;
  if ( v4->fields.missionId < 1 )
  {
    if ( v4->fields.shopId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v4->fields.shopId,
                 (const MethodInfo_3535B7C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v12[1].monitor,
                (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod((EventEntity_o *)v13, 0, 0) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v12[1].klass,
                                  0);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_1D0F30C(v14, v15);
          if ( LODWORD(v44.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4E7412D )
            {
              sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
              byte_4E7412D = 1;
            }
            v17 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v17 = TerminalPramsManager_TypeInfo;
            }
            v17->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0);
            TransitionInfo_k__BackingField = v6->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1D0F30C(0, v18);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v29 = v6->fields._TransitionInfo_k__BackingField;
            if ( !v29 )
              sub_1D0F30C(v27, v28);
            v29->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v7 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v4->fields.missionId,
                                              5,
                                              4,
                                              0);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v9 = EntityFromIdProgressTypeAndActionType;
      v10 = (EventMissionActionInfo_o *)sub_1D0F300(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_47079272(v10, v9, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v30 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v4->fields.missionId,
              5,
              4,
              0);
      if ( !v30 )
        return;
      v31 = v30;
      v10 = (EventMissionActionInfo_o *)sub_1D0F300(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v31, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v7,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v32 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v4->fields.missionId,
            (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v32 )
    {
      v33 = v32;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v33[1].monitor),
                                (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4E7412D )
        {
          sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
          byte_4E7412D = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v34->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0);
        if ( v10 )
        {
          Master_object = (char *)v6->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v10->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)(Master_object + 32),
              (int32_t)vals,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            v42 = v6->fields._TransitionInfo_k__BackingField;
            if ( v42 )
            {
              v42->fields.optionId = v10->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1D0F30C(Master_object, v3);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v6, 0);
    }
  }
}


void QuestAfterAction__LoadTutorialVoiceIfNeeded(
        QuestAfterAction_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  QuestAfterAction__RequestVoiceLoad(this, 0, 1, finishCallback, v3);
}


void QuestAfterAction__LoadVoice(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  QuestAfterAction__RequestVoiceLoad(this, 1, 0, endAct, v3);
}


void QuestAfterAction__LoadVoiceIfNeeded(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  QuestAfterAction__RequestVoiceLoad(this, 1, 0, endAct, v3);
}


void QuestAfterAction__LoadVoice_37468116(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v16; // x28
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Action_o **v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t items; // w0
  System_String_o *VoiceAssetName_44173044; // x19
  Il2CppObject *v32; // x20
  System_Action_o *v33; // x22

  while ( 1 )
  {
    if ( (byte_4E74108 & 1) == 0 )
    {
      sub_1D0F0B4(&System_Action_TypeInfo);
      sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1D0F0B4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1D0F0B4(&Method_QuestAfterAction___c__DisplayClass150_0__LoadVoice_b__0__);
      sub_1D0F0B4(&QuestAfterAction___c__DisplayClass150_0_TypeInfo);
      byte_4E74108 = 1;
    }
    v7 = sub_1D0F300(QuestAfterAction___c__DisplayClass150_0_TypeInfo);
    QuestAfterAction___c__DisplayClass150_0___ctor((QuestAfterAction___c__DisplayClass150_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = this;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
    *(_QWORD *)(v7 + 24) = svtVInfos;
    v16 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 24);
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)svtVInfos, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v7 + 32) = endAct;
    v23 = (System_Action_o **)(v7 + 32);
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)endAct, v24, v25, v26, v27, v28, v29);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 24),
            (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v23, 0);
        return;
      }
LABEL_17:
      sub_1D0F30C(Instance, v9);
    }
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    if ( LODWORD(Instance->fields._items) )
      break;
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v16;
    endAct = *v23;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  items = (int32_t)Instance->fields._items;
  *(_DWORD *)(v7 + 40) = items;
  VoiceAssetName_44173044 = ServantVoiceEntity__getVoiceAssetName_44173044(items, 0);
  v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v33 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass150_0__LoadVoice_b__0__, 0);
  if ( !v32 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v32, VoiceAssetName_44173044, v33, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4E740FC & 1) == 0 )
  {
    sub_1D0F0B4(&SrcSpotBasePrefab_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E740FC = 1;
  }
  if ( comType )
  {
    if ( comType == 1 )
    {
      return srcLineSprite__GetGobjName(id, 0);
    }
    else if ( comType == 2 )
    {
      return MapGimmickComponent__GetGobjName(id, *(const MethodInfo **)&comType);
    }
    else
    {
      return (System_String_o *)StringLiteral_1/*""*/;
    }
  }
  else
  {
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    return SrcSpotBasePrefab__GetGobjName(id, 0);
  }
}


void QuestAfterAction__MarkRequestedVoiceLoadCompleted(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t voiceRegisterRevision; // w8
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v4; // x0

  if ( (byte_4E74116 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_4E74116 = 1;
  }
  if ( this->fields.isAfterActionVoiceLoadRequested && !QuestAfterAction__HasVoiceToLoad(this, method) )
  {
    voiceRegisterRevision = this->fields.voiceRegisterRevision;
    this->fields.isLoadedVoice = 1;
    this->fields.isAfterActionVoiceLoadRequested = 0;
    this->fields.voiceLoadedRevision = voiceRegisterRevision;
  }
  if ( this->fields.isTutorialVoiceLoadRequested )
  {
    v4 = QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, method);
    if ( !System_Linq_Enumerable__Any_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v4,
            (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
      this->fields.isTutorialVoiceLoadRequested = 0;
  }
}


void QuestAfterAction__OnEnd(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAct; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v7; // w9
  struct System_Collections_Generic_List_QuestAfterAction_Command__o **p_ReservedCommandListBeforeFadeIn_k__BackingField; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E740F6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4E740F6 = 1;
  }
  endAct = this->fields.endAct;
  this->fields.isKeepingMainStateButFinished = 1;
  *(_QWORD *)&this->fields.ActionMapTargetType = -1;
  ActionExtensions__Call(endAct, 0);
  screenCollider = (UnityEngine_Collider_o *)this->fields.screenCollider;
  if ( !screenCollider
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0),
        (invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList) == 0) )
  {
    sub_1D0F30C(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = 0;
  p_ReservedCommandListBeforeFadeIn_k__BackingField = &this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField + 8) = 0;
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField - 8) = 0;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)p_ReservedCommandListBeforeFadeIn_k__BackingField,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4E740F1 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1D0F0B4(&Method_QuestAfterAction___c__DisplayClass93_0__Play_b__0__);
    sub_1D0F0B4(&QuestAfterAction___c__DisplayClass93_0_TypeInfo);
    byte_4E740F1 = 1;
  }
  v5 = sub_1D0F300(QuestAfterAction___c__DisplayClass93_0_TypeInfo);
  QuestAfterAction___c__DisplayClass93_0___ctor((QuestAfterAction___c__DisplayClass93_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1D0F30C(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass93_0__Play_b__0__, 0);
  this->fields.endAct = v14;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v21);
  else
    ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Action_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *v39; // x1

  if ( (byte_4E740F2 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1D0F0B4(&Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__0__);
    sub_1D0F0B4(&Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__1__);
    sub_1D0F0B4(&QuestAfterAction___c__DisplayClass94_0_TypeInfo);
    byte_4E740F2 = 1;
  }
  v7 = sub_1D0F300(QuestAfterAction___c__DisplayClass94_0_TypeInfo);
  QuestAfterAction___c__DisplayClass94_0___ctor((QuestAfterAction___c__DisplayClass94_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
    (int32_t)CommandBuf,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1D0F30C(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v30 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v30;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__1__,
    0);
  v39 = QuestAfterAction__WaitWhileMainStateFinished(this, v37, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_73344676((UnityEngine_MonoBehaviour_o *)this, v39, 0);
}


void QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Action_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4E740F5 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__97_0__);
    byte_4E740F5 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
      (int32_t)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__97_0__, 0);
    this->fields.endAct = v11;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    QuestAfterAction__SetState(this, 3, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__RequestMapChange(
        QuestAfterAction_o *this,
        int32_t cType,
        int32_t cTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4E740FB & 1) == 0 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E740FB = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E71D1E )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71D1E = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.subRootGimmickP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1D0F30C(v9, v7);
  ScrTerminalMap__RequestMapChange(v9, 0, -1, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__RequestVoiceLoad(
        QuestAfterAction_o *this,
        bool includeAfterAction,
        bool includeTutorial,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  QuestAfterAction__EnqueueVoiceLoadCallback(this, callback, (const MethodInfo *)includeTutorial);
  if ( includeAfterAction )
    this->fields.isAfterActionVoiceLoadRequested = 1;
  if ( includeTutorial )
    this->fields.isTutorialVoiceLoadRequested = 1;
  if ( !this->fields.isLoadingVoice )
  {
    if ( QuestAfterAction__HasAnyRequestedVoiceToLoad(this, v8) )
    {
      QuestAfterAction__StartLoadVoicePipeline(this, v9);
    }
    else
    {
      QuestAfterAction__MarkRequestedVoiceLoadCompleted(this, v9);
      QuestAfterAction__FlushVoiceLoadCallbacks(this, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestAfterAction__ResolveVoiceRegisterIndex(
        QuestAfterAction_o *this,
        int32_t baseIndex,
        bool overwriteVoiceIndex,
        const MethodInfo *method)
{
  int32_t v5; // w19
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0

  v5 = baseIndex;
  if ( (byte_4E74119 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__ContainsKey__);
    byte_4E74119 = 1;
  }
  if ( !overwriteVoiceIndex )
  {
    svtVoices = this->fields.svtVoices;
    if ( !svtVoices )
LABEL_8:
      sub_1D0F30C(svtVoices, *(_QWORD *)&baseIndex);
    while ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
              v5,
              (const MethodInfo_35A83FC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__ContainsKey__) )
    {
      svtVoices = this->fields.svtVoices;
      ++v5;
      if ( !svtVoices )
        goto LABEL_8;
    }
  }
  return v5;
}


void QuestAfterAction__RunTerminalTutorialCommandPreloadPipeline(
        QuestAfterAction_o *this,
        int32_t mapId,
        int32_t eventId,
        bool includeBlankEarthTutorial,
        bool isPlanetMap,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventTutorialMaster_EventTutorialArgs__o *v9; // x1
  const MethodInfo *v10; // x3

  v9 = EventTutorialMaster__BuildTerminalTutorialPreloadArgs(mapId, eventId, includeBlankEarthTutorial, isPlanetMap, 0);
  QuestAfterAction__RunTutorialCommandPreloadPipeline(
    this,
    (System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__o *)v9,
    finishCallback,
    v10);
}


void QuestAfterAction__RunTutorialCommandPreloadPipeline(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__o *tutorialArgsEnumerable,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  EventTutorialMaster_EventTutorialArgs_o *v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  const MethodInfo *v27; // x4

  if ( (byte_4E7410E & 1) == 0 )
  {
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    byte_4E7410E = 1;
  }
  if ( tutorialArgsEnumerable )
  {
    klass = tutorialArgsEnumerable->klass;
    v8 = *(unsigned __int16 *)&tutorialArgsEnumerable->klass->_2.rank;
    if ( *(_WORD *)&tutorialArgsEnumerable->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_8;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v10 = sub_1CE5430(
              tutorialArgsEnumerable,
              System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__TypeInfo,
              0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__o *, _QWORD))v10)(
            tutorialArgsEnumerable,
            *(_QWORD *)(v10 + 8));
    if ( !v12 )
      sub_1D0F30C(0, v11);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_16;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_16:
        v16 = sub_1CE5430(v12, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      v17 = *(_QWORD *)v12;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_23;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_23:
        v20 = sub_1CE5430(
                v12,
                System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__TypeInfo,
                0);
      }
      v21 = (EventTutorialMaster_EventTutorialArgs_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v20)(
                                                         v12,
                                                         *(_QWORD *)(v20 + 8));
      if ( v21 )
        QuestAfterAction__SetupTutorialCommandPreprocess(this, v21, v22);
    }
    v23 = *(_QWORD *)v12;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_31;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_31:
      v26 = sub_1CE5430(v12, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v12, *(_QWORD *)(v26 + 8));
    QuestAfterAction__RequestVoiceLoad(this, 0, 1, finishCallback, v27);
  }
  else
  {
    ActionExtensions__Call(finishCallback, 0);
  }
}


void QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  int32_t id; // w8
  int v6; // w8
  unsigned int v7; // w8
  unsigned int v8; // w8
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20

  v4 = this;
  if ( (byte_4E740ED & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E740ED = 1;
  }
  if ( v4->fields.ActionMapTargetType == -1 )
  {
    if ( !com )
      goto LABEL_42;
    id = com->fields.id;
    if ( id > 307 )
    {
      if ( id > 500 )
      {
        if ( id == 510 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)com->fields.param;
          if ( this )
          {
            this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
            if ( this )
            {
              m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
              if ( m_CancellationTokenSource >= 2 )
              {
                TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields._TitleInfoCtrlCallback_k__BackingField;
LABEL_29:
                SpotId = System_Int32__Parse(TitleInfoCtrlCallback_k__BackingField, 0);
LABEL_30:
                v4->fields.ActionMapTargetId = SpotId;
                return;
              }
LABEL_27:
              if ( !m_CancellationTokenSource )
                sub_1D0F314(this);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1D0F30C(this, com);
        }
        if ( id == 550 )
        {
          v6 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v6;
          goto LABEL_24;
        }
LABEL_41:
        SpotId = -1;
        v4->fields.ActionMapTargetType = -1;
        goto LABEL_30;
      }
      if ( (unsigned int)(id - 400) > 0xC )
      {
        if ( id == 500 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              if ( this )
              {
                SpotId = QuestEntity__getSpotId((QuestEntity_o *)this, 0);
                goto LABEL_30;
              }
            }
          }
          goto LABEL_42;
        }
        goto LABEL_41;
      }
LABEL_18:
      v6 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v8 = id - 100;
      if ( v8 > 0xD || ((1 << v8) & 0x3C1F) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 9 )
        goto LABEL_22;
      v7 = id - 300;
      if ( v7 > 7 )
        goto LABEL_41;
      if ( ((1 << v7) & 0x21) == 0 )
      {
        if ( ((1 << v7) & 0x42) == 0 )
        {
          if ( ((1 << v7) & 0x84) == 0 )
            goto LABEL_41;
          goto LABEL_18;
        }
LABEL_22:
        v6 = 1;
        goto LABEL_23;
      }
    }
    v4->fields.ActionMapTargetType = 0;
LABEL_24:
    this = (QuestAfterAction_o *)com->fields.param;
    if ( this )
    {
      this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
      if ( this )
      {
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        goto LABEL_27;
      }
    }
    goto LABEL_42;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4E740F9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4E740F9 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1D0F30C(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_34BF834 *)Method_CStateManager_QuestAfterAction__setState__);
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__SetupCommandPreprocess(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        int32_t commandIndex,
        bool overwriteVoiceIndex,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t voiceRegisterRevision; // w8
  QuestAfterAction_VoiceInfo_o *voiceInfo; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E7410A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__set_Item__);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E7410A = 1;
  }
  voiceInfo = 0;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( QuestAfterAction__TryCreateVoiceInfo(command, &voiceInfo, *(const MethodInfo **)&commandIndex) )
  {
    v10 = QuestAfterAction__ResolveVoiceRegisterIndex(this, commandIndex, overwriteVoiceIndex, v9);
    if ( !this->fields.svtVoices )
      sub_1D0F30C(v10, v11);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices,
      v10,
      (Il2CppObject *)voiceInfo,
      (const MethodInfo_35A81F4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__set_Item__);
    voiceRegisterRevision = this->fields.voiceRegisterRevision;
    this->fields.isLoadedVoice = 0;
    this->fields.voiceRegisterRevision = voiceRegisterRevision + 1;
  }
}


void QuestAfterAction__SetupCommandPreprocess_37469060(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  QuestAfterAction_Command_array *CommandBuf; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  il2cpp_array_size_t max_length; // x8
  QuestAfterAction_Command_array *v9; // x20
  unsigned __int64 v10; // x21

  if ( (byte_4E7410B & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E7410B = 1;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
  if ( !CommandBuf )
    sub_1D0F30C(0, v6);
  max_length = CommandBuf->max_length;
  v9 = CommandBuf;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1D0F314(CommandBuf);
      QuestAfterAction__SetupCommandPreprocess(this, v9->m_Items[v10], v10, 0, v7);
      LODWORD(max_length) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)max_length );
  }
}


void QuestAfterAction__SetupTutorialCommandPreprocess(
        QuestAfterAction_o *this,
        EventTutorialMaster_EventTutorialArgs_o *tutorialArgs,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *AvailableTutorialArray; // x20
  QuestAfterAction___c_c *v6; // x0
  System_Func_object__object__o *_9__154_0; // x21
  Il2CppObject *v8; // x22
  struct QuestAfterAction___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  QuestAfterAction___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__object__o *_9__154_1; // x22
  Il2CppObject *v20; // x23
  struct QuestAfterAction___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  const MethodInfo *v30; // x1
  System_String_array *v31; // x20
  QuestAfterAction_Command_array *CommandBuf; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  il2cpp_array_size_t max_length; // x8
  QuestAfterAction_Command_array *v36; // x20
  unsigned __int64 v37; // x21

  if ( (byte_4E7410C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Concat_string___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1D0F0B4(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_0__);
    sub_1D0F0B4(&Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_1__);
    sub_1D0F0B4(&QuestAfterAction___c_TypeInfo);
    byte_4E7410C = 1;
  }
  if ( tutorialArgs )
  {
    AvailableTutorialArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                                    tutorialArgs,
                                                                                    0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)AvailableTutorialArray, 0) )
    {
      v6 = QuestAfterAction___c_TypeInfo;
      if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
        v6 = QuestAfterAction___c_TypeInfo;
      }
      _9__154_0 = (System_Func_object__object__o *)v6->static_fields->__9__154_0;
      if ( !_9__154_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = QuestAfterAction___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__154_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
        System_Func_object__object____ctor(
          _9__154_0,
          v8,
          Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_0__,
          0);
        static_fields = QuestAfterAction___c_TypeInfo->static_fields;
        static_fields->__9__154_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__154_0;
        sub_1D0F058(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__154_0,
          (int32_t)_9__154_0,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      v16 = System_Linq_Enumerable__SelectMany_object__object_(
              AvailableTutorialArray,
              (System_Func_TSource__IEnumerable_TResult___o *)_9__154_0,
              (const MethodInfo_3288F34 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
      v17 = QuestAfterAction___c_TypeInfo;
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
      if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
        v17 = QuestAfterAction___c_TypeInfo;
      }
      _9__154_1 = (System_Func_object__object__o *)v17->static_fields->__9__154_1;
      if ( !_9__154_1 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = QuestAfterAction___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v17->static_fields->__9;
        _9__154_1 = (System_Func_object__object__o *)sub_1D0F300(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
        System_Func_object__object____ctor(
          _9__154_1,
          v20,
          Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_1__,
          0);
        v21 = QuestAfterAction___c_TypeInfo->static_fields;
        v21->__9__154_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__154_1;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v21->__9__154_1, (int32_t)_9__154_1, v22, v23, v24, v25, v26, v27);
      }
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                   AvailableTutorialArray,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__154_1,
                                                                   (const MethodInfo_3288F34 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
      v29 = System_Linq_Enumerable__Concat_object_(
              v18,
              v28,
              (const MethodInfo_326C084 *)Method_System_Linq_Enumerable_Concat_string___);
      v31 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v29,
                                     (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_string___);
      if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
      CommandBuf = QuestAfterAction__GenerateCommandBuf(v31, v30);
      if ( !CommandBuf )
        sub_1D0F30C(0, v33);
      max_length = CommandBuf->max_length;
      v36 = CommandBuf;
      if ( (int)max_length >= 1 )
      {
        v37 = 0;
        do
        {
          if ( v37 >= (unsigned int)max_length )
            sub_1D0F314(CommandBuf);
          QuestAfterAction__SetupTutorialCommandPreprocess_37469892(this, v36->m_Items[v37], v34);
          LODWORD(max_length) = v36->max_length;
          ++v37;
        }
        while ( (__int64)v37 < (int)max_length );
      }
    }
  }
}


void QuestAfterAction__SetupTutorialCommandPreprocess_37469892(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_o **v4; // x19
  const MethodInfo *v5; // x2
  System_String_o *AvailableRandomVoice; // x0
  System_String_o *v7; // x22
  int32_t v8; // w23
  QuestAfterAction_VoiceInfo_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  int32_t svtId; // [xsp+Ch] [xbp-34h] BYREF

  v4 = (QuestAfterAction_o **)this;
  if ( (byte_4E7410D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__set_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    this = (QuestAfterAction_o *)sub_1D0F0B4(&QuestAfterAction_VoiceInfo_TypeInfo);
    byte_4E7410D = 1;
  }
  svtId = 0;
  if ( !command )
    goto LABEL_17;
  if ( command->fields.id == 800 && !System_String__IsNullOrEmpty(command->fields.param, 0) )
  {
    this = v4[32];
    if ( !this )
      goto LABEL_17;
    if ( !System_Collections_Generic_HashSet_object___Contains(
            (System_Collections_Generic_HashSet_T__o *)this,
            (Il2CppObject *)command->fields.param,
            (const MethodInfo_3807288 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
    {
      AvailableRandomVoice = QuestAfterAction_Command__GetAvailableRandomVoice(command, &svtId, v5);
      if ( AvailableRandomVoice )
      {
        v7 = AvailableRandomVoice;
        this = v4[32];
        if ( this )
        {
          System_Collections_Generic_HashSet_object___Add(
            (System_Collections_Generic_HashSet_T__o *)this,
            (Il2CppObject *)command->fields.param,
            (const MethodInfo_3807D78 *)Method_System_Collections_Generic_HashSet_string__Add__);
          v8 = svtId;
          v9 = (QuestAfterAction_VoiceInfo_o *)sub_1D0F300(QuestAfterAction_VoiceInfo_TypeInfo);
          QuestAfterAction_VoiceInfo___ctor(v9, v8, v7, 0);
          this = v4[33];
          if ( this )
          {
            System_Collections_Generic_Dictionary_object__object___set_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)command->fields.param,
              (Il2CppObject *)v9,
              (const MethodInfo_36015D0 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__set_Item__);
            this = v4[31];
            if ( this )
            {
              m_CachedPtr = this->fields.m_CachedPtr;
              v17 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( m_CachedPtr )
              {
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v9,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                }
                else
                {
                  v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v19 + 32) = v9;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)v9, v10, v11, v12, v13, v14, v15);
                }
                return;
              }
            }
          }
        }
LABEL_17:
        sub_1D0F30C(this, command);
      }
    }
  }
}


void QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void QuestAfterAction__StartLoadVoicePipeline(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_object__o *v16; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v17; // x22
  const MethodInfo *v18; // x1
  _BOOL4 isAfterActionVoiceLoadRequested; // w8
  System_Collections_Generic_List_int__o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1

  if ( (byte_4E74115 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction___c__DisplayClass167_0__StartLoadVoicePipeline_b__0__);
    sub_1D0F0B4(&QuestAfterAction___c__DisplayClass167_0_TypeInfo);
    byte_4E74115 = 1;
  }
  v3 = sub_1D0F300(QuestAfterAction___c__DisplayClass167_0_TypeInfo);
  QuestAfterAction___c__DisplayClass167_0___ctor((QuestAfterAction___c__DisplayClass167_0_o *)v3, 0);
  if ( !v3 )
    sub_1D0F30C(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !this->fields.isLoadingVoice )
  {
    if ( this->fields.isAfterActionVoiceLoadRequested )
    {
      v14 = (System_Collections_Generic_List_object__o *)QuestAfterAction__BuildPendingVoiceInfoList(this, v12);
    }
    else
    {
      v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    }
    if ( this->fields.isTutorialVoiceLoadRequested )
    {
      v16 = (System_Collections_Generic_List_object__o *)QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, v13);
    }
    else
    {
      v16 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    }
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    v17 = QuestAfterAction__BuildMergedPendingVoiceInfoList(
            (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v14,
            (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v16,
            v15);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      isAfterActionVoiceLoadRequested = this->fields.isAfterActionVoiceLoadRequested;
      this->fields.isLoadingVoice = 1;
      if ( isAfterActionVoiceLoadRequested )
        this->fields.isLoadedVoice = 0;
      if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
      v20 = QuestAfterAction__BuildDistinctSvtIdList(
              (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v16,
              v18);
      *(_QWORD *)(v3 + 24) = v20;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v20, v21, v22, v23, v24, v25, v26);
      v27 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v3,
        Method_QuestAfterAction___c__DisplayClass167_0__StartLoadVoicePipeline_b__0__,
        0);
      QuestAfterAction__LoadVoice_37468116(this, v17, v27, v28);
    }
    else
    {
      QuestAfterAction__MarkRequestedVoiceLoadCompleted(this, v18);
      QuestAfterAction__FlushVoiceLoadCallbacks(this, v29);
    }
  }
}


bool QuestAfterAction__TryCreateVoiceInfo(
        QuestAfterAction_Command_o *command,
        QuestAfterAction_VoiceInfo_o **voiceInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_String_o *AvailableRandomVoice; // x0
  int32_t v14; // w21
  System_String_o *v15; // x20
  QuestAfterAction_VoiceInfo_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t svtId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E74118 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_VoiceInfo_TypeInfo);
    byte_4E74118 = 1;
  }
  svtId = 0;
  *voiceInfo = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)voiceInfo, 0, (int32_t)method, v3, v4, v5, v6, v7);
  if ( !command )
    sub_1D0F30C(v10, v11);
  if ( command->fields.id == 800 )
  {
    AvailableRandomVoice = QuestAfterAction_Command__GetAvailableRandomVoice(command, &svtId, v12);
    if ( AvailableRandomVoice )
    {
      v14 = svtId;
      v15 = AvailableRandomVoice;
      v16 = (QuestAfterAction_VoiceInfo_o *)sub_1D0F300(QuestAfterAction_VoiceInfo_TypeInfo);
      QuestAfterAction_VoiceInfo___ctor(v16, v14, v15, 0);
      *voiceInfo = v16;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)voiceInfo, (int32_t)v16, v17, v18, v19, v20, v21, v22);
      LOBYTE(AvailableRandomVoice) = 1;
    }
  }
  else
  {
    LOBYTE(AvailableRandomVoice) = 0;
  }
  return (char)AvailableRandomVoice;
}


bool QuestAfterAction__TryEventUiDisableCommand(QuestAfterAction_Command_o *command, const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_o *v3; // x20
  int32_t v4; // w19
  bool v5; // w21
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  struct ScrTerminalListTop_o *mTerminalList; // x9
  UnityEngine_Object_o *mTitleInfo; // x20
  struct System_String_o *param; // x9
  QuestAfterAction_Command_o *v11; // x20
  char v12; // w8
  unsigned __int64 v13; // x22
  QuestAfterAction_Command_c *klass; // x9

  v2 = command;
  if ( (byte_4E74106 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E74106 = 1;
  }
  if ( !v2 )
    goto LABEL_40;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_40;
  command = (QuestAfterAction_Command_o *)System_String__Split((System_String_o *)command, 0x2Cu, 0, 0);
  if ( !command )
    goto LABEL_40;
  v3 = command;
  if ( !LODWORD(command->fields.param) )
LABEL_41:
    sub_1D0F314(command);
  v4 = System_Int32__Parse((System_String_o *)command[1].klass, 0);
  v5 = SLODWORD(v3->fields.param) >= 2 && System_Int32__Parse((System_String_o *)v3[1].monitor, 0) > 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( mInstance && (mTerminalList = mInstance->fields.mTerminalList) != 0 )
    mTitleInfo = (UnityEngine_Object_o *)mTerminalList->fields.mTitleInfo;
  else
    mTitleInfo = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  command = (QuestAfterAction_Command_o *)UnityEngine_Object__op_Equality(mTitleInfo, 0, 0);
  if ( ((unsigned __int8)command & 1) != 0 )
    goto LABEL_38;
  if ( !mTitleInfo
    || (command = (QuestAfterAction_Command_o *)TitleInfoControl__GetEnableEventUiObjectList(
                                                  (TitleInfoControl_o *)mTitleInfo,
                                                  0,
                                                  0)) == 0 )
  {
LABEL_40:
    sub_1D0F30C(command, method);
  }
  param = command->fields.param;
  v11 = command;
  if ( (int)param >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)param )
        goto LABEL_41;
      command = (QuestAfterAction_Command_o *)*((_QWORD *)&v11[1].klass + v13);
      if ( v5 )
        break;
      if ( !command )
        goto LABEL_40;
      klass = command[2].klass;
      if ( !klass )
        goto LABEL_40;
      if ( v4 == LODWORD(klass->_1.name) )
        goto LABEL_34;
LABEL_36:
      LODWORD(param) = v11->fields.param;
      if ( (__int64)++v13 >= (int)param )
        return v12 & 1;
    }
    if ( !command )
      goto LABEL_40;
LABEL_34:
    command = (QuestAfterAction_Command_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)command, 0);
    if ( !command )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)command, 0, 0);
    v12 = 1;
    goto LABEL_36;
  }
LABEL_38:
  v12 = 0;
  return v12 & 1;
}


bool QuestAfterAction__TryGetQuestAfterActionVals(
        QuestAfterAction_o *this,
        System_String_array **questAfterAction,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  Il2CppObject *Instance; // x21
  QuestPhaseDetailAddMaster_o *MasterData_object; // x0
  System_String_array *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_array *v21; // x8
  TerminalPramsManager_c *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppClass *klass; // x1
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E740E8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E740E8 = 1;
  }
  entity = 0;
  *questAfterAction = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)questAfterAction, 0, questId, phase, (System_String_o *)method, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E74123 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E74123 = 1;
  }
  MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
  {
    if ( !Instance )
      goto LABEL_36;
    MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !MasterData_object )
      goto LABEL_36;
    v14 = QuestPhaseDetailAddMaster__GetAfterAction(MasterData_object, questId, phase, 0);
    if ( !v14 )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !MasterData_object )
        goto LABEL_36;
      v14 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)MasterData_object, questId, phase, 0);
    }
    *questAfterAction = v14;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)questAfterAction, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  v21 = *questAfterAction;
  if ( !*questAfterAction )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E74126 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E74126 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    if ( !v22->static_fields->_IsQuestClear_k__BackingField )
      goto LABEL_32;
    if ( !v22->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v22);
    MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
    {
LABEL_32:
      v21 = *questAfterAction;
      if ( !*questAfterAction )
        return 0;
      goto LABEL_33;
    }
    if ( Instance )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MasterData_object )
      {
        MasterData_object = (QuestPhaseDetailAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                             &entity,
                                                             questId,
                                                             (const MethodInfo_3535BC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)MasterData_object & 1) == 0 )
          goto LABEL_32;
        if ( entity )
        {
          klass = entity[6].klass;
          *questAfterAction = (System_String_array *)klass;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)questAfterAction, (int32_t)klass, v23, v24, v25, v26, v27, v28);
          goto LABEL_32;
        }
      }
    }
LABEL_36:
    sub_1D0F30C(MasterData_object, v11);
  }
LABEL_33:
  max_length = v21->max_length;
  if ( (int)max_length >= 2 )
    return (max_length & 1) == 0;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__TryRaidUiDisableCommand(
        QuestAfterAction_Command_o *command,
        bool isQuick,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v4; // x20
  QuestAfterAction_Command_o *v5; // x22
  int v6; // w21
  bool v7; // w20
  bool v8; // w24
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct TitleInfoControl_o *mTitleInfo; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct TitleInfoEventItemControl_o *eventRaidUIControl; // x8
  int32_t v16; // w21
  char v17; // w25
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x10
  Il2CppObject *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  TerminalPramsManager_c *v23; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  struct System_Int32_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  int32_t v37; // [xsp+4h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+40h] [xbp-80h] BYREF

  v4 = command;
  if ( (byte_4E74107 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_1D0F0B4(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_4E74107 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  if ( !v4 )
    goto LABEL_75;
  command = (QuestAfterAction_Command_o *)v4->fields.param;
  if ( !command )
    goto LABEL_75;
  command = (QuestAfterAction_Command_o *)System_String__Split((System_String_o *)command, 0x2Cu, 0, 0);
  if ( !command )
    goto LABEL_75;
  v5 = command;
  if ( !LODWORD(command->fields.param)
    || (command = (QuestAfterAction_Command_o *)System_Int32__Parse((System_String_o *)command[1].klass, 0),
        LODWORD(v5->fields.param) <= 1) )
  {
    sub_1D0F314(command);
  }
  v6 = (int)command;
  v37 = System_Int32__Parse((System_String_o *)v5[1].monitor, 0);
  if ( SLODWORD(v5->fields.param) < 3 )
  {
    v7 = 0;
LABEL_11:
    v8 = 0;
    goto LABEL_13;
  }
  v7 = System_Int32__Parse(*(System_String_o **)&v5[1].fields.id, 0) > 0;
  if ( SLODWORD(v5->fields.param) < 4 )
    goto LABEL_11;
  v8 = System_Int32__Parse(v5[1].fields.param, 0) > 0;
LABEL_13:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( mInstance && (mTerminalList = mInstance->fields.mTerminalList) != 0 )
    mTitleInfo = mTerminalList->fields.mTitleInfo;
  else
    mTitleInfo = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  command = (QuestAfterAction_Command_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mTitleInfo, 0, 0);
  if ( ((unsigned __int8)command & 1) != 0 )
    goto LABEL_71;
  if ( !mTitleInfo || (command = (QuestAfterAction_Command_o *)mTitleInfo->fields.mRaidStatusList) == 0 )
LABEL_75:
    sub_1D0F30C(command, isQuick);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
  v40 = v38;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    if ( !v13 )
      break;
    if ( v7 )
    {
      if ( !v40.fields._current )
        sub_1D0F30C(v13, v14);
      goto LABEL_35;
    }
    if ( !v40.fields._current )
      sub_1D0F30C(v13, v14);
    if ( v6 == LODWORD(v40.fields._current[9].monitor) )
LABEL_35:
      TitleInfoEventRaidStatusComponent__FrameOut(
        (TitleInfoEventRaidStatusComponent_o *)v40.fields._current,
        0,
        isQuick,
        0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
  eventRaidUIControl = mTitleInfo->fields.eventRaidUIControl;
  if ( !eventRaidUIControl )
  {
LABEL_71:
    v17 = 0;
    return v17 & 1;
  }
  command = (QuestAfterAction_Command_o *)eventRaidUIControl->fields.mEventInfoGroups;
  if ( !command )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v39 = v38;
  v16 = 0;
  v17 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
  {
    current = v39.fields._current;
    if ( v39.fields._current
      && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
          v39.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (TitleInfoEventRaidBossComponent_c *)v39.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
        v20 = v39.fields._current;
      else
        v20 = 0;
    }
    else
    {
      v20 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
    if ( v21 )
    {
      if ( v8 )
        goto LABEL_52;
      if ( !v20 )
        sub_1D0F30C(v21, v22);
      if ( v37 == LODWORD(v20[23].klass) )
      {
LABEL_52:
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        if ( !v20 )
          sub_1D0F30C(v23, v22);
        static_fields = v23->static_fields;
        nonFrameInBossHpUiIndex = static_fields->nonFrameInBossHpUiIndex;
        if ( !nonFrameInBossHpUiIndex )
          sub_1D0F30C(0, v22);
        klass_low = LODWORD(v20[23].klass);
        items = nonFrameInBossHpUiIndex->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++nonFrameInBossHpUiIndex->fields._version;
        if ( !items )
          sub_1D0F30C(nonFrameInBossHpUiIndex, klass_low);
        size = nonFrameInBossHpUiIndex->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            nonFrameInBossHpUiIndex,
            klass_low,
            *(const MethodInfo_393F3EC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          static_fields = TerminalPramsManager_TypeInfo->static_fields;
        }
        else
        {
          nonFrameInBossHpUiIndex->fields._size = size + 1;
          items->m_Items[size] = klass_low;
        }
        RaidBossHpForceHideGroupIndexList = static_fields->RaidBossHpForceHideGroupIndexList;
        if ( !RaidBossHpForceHideGroupIndexList )
          sub_1D0F30C(0, klass_low);
        v31 = RaidBossHpForceHideGroupIndexList->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++RaidBossHpForceHideGroupIndexList->fields._version;
        if ( !v31 )
          sub_1D0F30C(RaidBossHpForceHideGroupIndexList, klass_low);
        v33 = RaidBossHpForceHideGroupIndexList->fields._size;
        if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            RaidBossHpForceHideGroupIndexList,
            v16,
            *(const MethodInfo_393F3EC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          RaidBossHpForceHideGroupIndexList->fields._size = v33 + 1;
          v31->m_Items[v33] = v16;
        }
        if ( v8 )
        {
          if ( !current )
            sub_1D0F30C(RaidBossHpForceHideGroupIndexList, klass_low);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
          if ( !gameObject )
            sub_1D0F30C(0, v35);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          TitleInfoEventRaidBossComponent__PlayFrameOutBoss((TitleInfoEventRaidBossComponent_o *)v20, isQuick, 0);
        }
        v17 = 1;
      }
    }
    ++v16;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  return v17 & 1;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4E740F0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_CStateManager_QuestAfterAction__update__);
    byte_4E740F0 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_34BF810 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4E740F7 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction__WaitWhileMainStateFinished_d__100_TypeInfo);
    byte_4E740F7 = 1;
  }
  v5 = sub_1D0F300(QuestAfterAction__WaitWhileMainStateFinished_d__100_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__100___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__100_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1D0F30C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestAfterAction___PlaySpecifiedActionInstantly_b__97_0(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  this->fields.endAct = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.endAct, 0, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf, 0, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4E740EC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4E740EC = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1D0F30C(0, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BlankEarthQuestAfterAction_o *QuestAfterAction__get_BlankEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._BlankEarthQuestAfterAction_k__BackingField;
}


bool QuestAfterAction__get_IsAfterFadeInPlay(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields._IsAfterFadeInPlay_k__BackingField;
}


bool QuestAfterAction__get_IsMoveToAnyScene(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.IsMoveToEventRewardShop || this->fields.IsMoveToClassScore;
}


bool QuestAfterAction__get_IsRequestedStopBgm(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.isRequestedStopBgm;
}


BlankEarthQuestAfterAction_o *QuestAfterAction__get_PlanetEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._PlanetEarthQuestAfterAction_k__BackingField;
}


System_Collections_Generic_List_QuestAfterAction_Command__o *QuestAfterAction__get_ReservedCommandListBeforeFadeIn(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
}


QuestAfterAction_TitleInfoControlCallback_o *QuestAfterAction__get_TitleInfoCtrlCallback(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._TitleInfoCtrlCallback_k__BackingField;
}


void QuestAfterAction__releaseVoice(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *VoiceAssetName_44173044; // x20
  struct System_Collections_Generic_List_Action__o *pendingVoiceLoadCallbackList; // x8
  int32_t size; // w2
  int v11; // w9
  struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *tutorialSvtVoiceList; // x8
  int32_t v13; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4E74109 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_string__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor___80345688);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1D0F0B4(&SoundManager_TypeInfo);
    byte_4E74109 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_24;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             svtVoices,
             (const MethodInfo_35A8018 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_60144900(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor___80345688);
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    v5,
    (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v16.fields._current )
      sub_1D0F30C(v6, v7);
    VoiceAssetName_44173044 = ServantVoiceEntity__getVoiceAssetName_44173044((int32_t)v16.fields._current[1].klass, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_44173044, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtVoices,
    (const MethodInfo_35A8390 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.loadedVoiceSvtIdSet;
  if ( !svtVoices )
    goto LABEL_24;
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)svtVoices,
    (const MethodInfo_3800E04 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  pendingVoiceLoadCallbackList = this->fields.pendingVoiceLoadCallbackList;
  this->fields.isLoadingVoice = 0;
  *(_QWORD *)&this->fields.voiceRegisterRevision = 0;
  if ( !pendingVoiceLoadCallbackList )
    goto LABEL_24;
  size = pendingVoiceLoadCallbackList->fields._size;
  v11 = pendingVoiceLoadCallbackList->fields._version + 1;
  pendingVoiceLoadCallbackList->fields._size = 0;
  pendingVoiceLoadCallbackList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)pendingVoiceLoadCallbackList->fields._items, 0, size, 0);
  tutorialSvtVoiceList = this->fields.tutorialSvtVoiceList;
  this->fields.isLoadedVoice = 0;
  if ( !tutorialSvtVoiceList )
    goto LABEL_24;
  v13 = tutorialSvtVoiceList->fields._size;
  v14 = tutorialSvtVoiceList->fields._version + 1;
  tutorialSvtVoiceList->fields._size = 0;
  tutorialSvtVoiceList->fields._version = v14;
  if ( v13 >= 1 )
    System_Array__Clear((System_Array_o *)tutorialSvtVoiceList->fields._items, 0, v13, 0);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.tutorialVoiceParamKeySet;
  if ( !svtVoices
    || (System_Collections_Generic_HashSet_object___Clear(
          (System_Collections_Generic_HashSet_T__o *)svtVoices,
          (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_string__Clear__),
        (svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.tutorialVoiceInfoByParam) == 0)
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)svtVoices,
          (const MethodInfo_360176C *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__Clear__),
        (svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.loadedTutorialVoiceSvtIdSet) == 0) )
  {
LABEL_24:
    sub_1D0F30C(svtVoices, method);
  }
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)svtVoices,
    (const MethodInfo_3800E04 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  *(_WORD *)&this->fields.isAfterActionVoiceLoadRequested = 0;
}


void QuestAfterAction__set_IsAfterFadeInPlay(QuestAfterAction_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsAfterFadeInPlay_k__BackingField = value;
}


void QuestAfterAction__set_IsRequestedStopBgm(QuestAfterAction_o *this, bool value, const MethodInfo *method)
{
  this->fields.isRequestedStopBgm = value;
}


void QuestAfterAction__set_ReservedCommandListBeforeFadeIn(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_Command__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = value;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._ReservedCommandListBeforeFadeIn_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestAfterAction_Command___ctor(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *QuestAfterAction_Command__GetAvailableRandomVoice(
        QuestAfterAction_Command_o *this,
        int32_t *svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Item; // x25
  void *param; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x22
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  System_Random_o *v11; // x22
  __int64 size; // x1
  int32_t v13; // w24
  int v14; // w8
  void *v15; // x25
  __int64 v16; // x8
  __int64 v17; // x8
  int32_t v18; // w1
  _BOOL8 v19; // x0
  int v20; // w8
  void *v21; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4E7411F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string___ctor___80331160);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1D0F0B4(&System_Random_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16314/*"_"*/);
    byte_4E7411F = 1;
  }
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0;
  Item = 0;
  if ( !System_String__IsNullOrEmpty(this->fields.param, 0) )
  {
    param = this->fields.param;
    if ( !param )
      goto LABEL_42;
    param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0);
    if ( !param )
      goto LABEL_42;
    v8 = (System_Collections_Generic_IEnumerable_T__o *)param;
    if ( *((int *)param + 6) > 1 )
    {
      param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( param )
      {
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)param,
                              (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
        v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_object____ctor_60144900(
          v10,
          v8,
          (const MethodInfo_395BD04 *)Method_System_Collections_Generic_List_string___ctor___80331160);
        result = 0;
        v11 = (System_Random_o *)sub_1D0F300(System_Random_TypeInfo);
        System_Random___ctor(v11, 0);
        if ( v10 )
        {
          if ( v11 )
          {
            size = (unsigned int)v10->fields._size;
            while ( 1 )
            {
              v13 = ((__int64 (__fastcall *)(System_Random_o *, __int64, const MethodInfo *))v11->klass->vtable._7_Next.methodPtr)(
                      v11,
                      size,
                      v11->klass->vtable._7_Next.method);
              result = 0;
              param = System_Collections_Generic_List_object___get_Item(
                        v10,
                        v13,
                        (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !param )
                break;
              param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
              if ( !param )
                break;
              v14 = *((_DWORD *)param + 6);
              v15 = param;
              if ( v14 == 3 )
              {
                v19 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0);
                if ( *((_DWORD *)v15 + 6) <= 2u )
                  goto LABEL_43;
                param = System_String__Concat_65601036(
                          *((System_String_o **)v15 + 5),
                          (System_String_o *)StringLiteral_16314/*"_"*/,
                          *((System_String_o **)v15 + 6),
                          0);
                if ( !MasterData_object )
                  break;
                v18 = result;
                Item = (Il2CppObject *)param;
              }
              else
              {
                if ( v14 != 2 )
                  goto LABEL_30;
                result = 0;
                Item = System_Collections_Generic_List_object___get_Item(
                         v10,
                         v13,
                         (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_string__get_Item__);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4E7125B )
                {
                  sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                  byte_4E7125B = 1;
                }
                param = TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  param = TerminalSceneComponent_TypeInfo;
                }
                v16 = **((_QWORD **)param + 23);
                if ( !v16 )
                  break;
                v17 = *(_QWORD *)(v16 + 464);
                if ( !v17 )
                  break;
                param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v17 + 40), 0);
                if ( !MasterData_object )
                  break;
                v18 = (int)param;
              }
              if ( VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     v18,
                     (System_String_o *)Item,
                     0,
                     -1,
                     -1,
                     0,
                     0) )
              {
                *svtId = result;
                return (System_String_o *)Item;
              }
LABEL_30:
              System_Collections_Generic_List_object___RemoveAt(
                v10,
                v13,
                (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
              size = (unsigned int)v10->fields._size;
              if ( !(_DWORD)size )
              {
                Item = 0;
                *svtId = 0;
                return (System_String_o *)Item;
              }
            }
          }
        }
      }
LABEL_42:
      sub_1D0F30C(param, v5);
    }
    param = this->fields.param;
    if ( !param )
      goto LABEL_42;
    param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
    if ( !param )
      goto LABEL_42;
    v20 = *((_DWORD *)param + 6);
    v21 = param;
    if ( v20 != 3 )
    {
      if ( v20 == 2 )
        return this->fields.param;
      return 0;
    }
    v19 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0);
    if ( *((_DWORD *)v21 + 6) <= 2u )
LABEL_43:
      sub_1D0F314(v19);
    return System_String__Concat_65601036(
             *((System_String_o **)v21 + 5),
             (System_String_o *)StringLiteral_16314/*"_"*/,
             *((System_String_o **)v21 + 6),
             0);
  }
  return (System_String_o *)Item;
}


System_String_o *QuestAfterAction_Command__GetBgmName(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  bool v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4E74121 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1D0F0B4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E74121 = 1;
  }
  result = 0;
  entity = 0;
  v3 = 0;
  if ( this->fields.id == 851 )
  {
    v4 = System_Int32__TryParse(this->fields.param, &result, 0);
    v3 = 0;
    if ( v4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3535BC8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1D0F30C(Instance, v6);
      }
      return 0;
    }
  }
  return v3;
}


int32_t QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o **v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( this->fields.id != 800 )
    return 0;
  v3 = (System_String_o **)str;
  if ( !str || (v3 = (System_String_o **)System_String__Split(str, 0x5Fu, 0, 0)) == 0 )
    sub_1D0F30C(v3, str);
  if ( *((_DWORD *)v3 + 6) != 3 )
    return 0;
  result = 0;
  if ( System_Int32__TryParse(v3[4], &result, 0) )
    return result;
  else
    return 0;
}


System_String_o *QuestAfterAction_Command__GetVoiceId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  QuestAfterAction_Command_o *v4; // x20
  int param; // w8

  v3 = str;
  v4 = this;
  if ( (byte_4E74120 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1D0F0B4(&StringLiteral_16314/*"_"*/);
    byte_4E74120 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0)) == 0 )
      sub_1D0F30C(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_65601036(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16314/*"_"*/,
               *(System_String_o **)&this[1].fields.id,
               0);
  }
  return 0;
}


void QuestAfterAction_StateAdditional___ctor(QuestAfterAction_StateAdditional_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateAdditionalBase___ctor(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateAdditionalBase__begin(
        QuestAfterAction_StateAdditionalBase_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, method);
  ((void (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    0,
    this->klass->vtable._12_set_CommandIndex.method);
}


QuestAfterAction_Command_array *QuestAfterAction_StateAdditionalBase__get_CommandBuf(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1D0F30C(this, method);
  return that->fields.temporaryCommandBuf;
}


int32_t QuestAfterAction_StateAdditionalBase__get_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandIndex_k__BackingField;
}


void QuestAfterAction_StateAdditionalBase__onEnd(
        QuestAfterAction_StateAdditionalBase_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *screenCollider; // x0
  __int64 v5; // x1
  struct QuestAfterAction_o *that; // x8

  screenCollider = (struct QuestAfterAction_o *)((__int64 (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
                                                  this,
                                                  0,
                                                  this->klass->vtable._12_set_CommandIndex.method);
  that = this->fields.that;
  if ( !that
    || (screenCollider = (struct QuestAfterAction_o *)that->fields.screenCollider) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 0, 0),
        (screenCollider = this->fields.that) == 0) )
  {
    sub_1D0F30C(screenCollider, v5);
  }
  QuestAfterAction__CallEndAct(screenCollider, 0);
}


void QuestAfterAction_StateAdditionalBase__set_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandIndex_k__BackingField = value;
}


void QuestAfterAction_StateInstant___ctor(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateInstant__EndAnim(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  if ( !this->fields.completed )
  {
    QuestAfterAction_StateMain__EndAnim((QuestAfterAction_StateMain_o *)this, method);
    ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, struct QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
      this,
      this->fields.that,
      this->klass->vtable._13_UpdateAnim.method);
  }
}


bool QuestAfterAction_StateInstant__IsUsableCommand(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  if ( (byte_4E7413D & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E7413D = 1;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__IsNoWaitCommand(cmd, 0);
}


void QuestAfterAction_StateInstant__UpdateAnim(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  if ( !this->fields.completed )
    QuestAfterAction_StateMain__UpdateAnim((QuestAfterAction_StateMain_o *)this, that, method);
}


void QuestAfterAction_StateInstant__begin(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateInstant_c *klass; // x8

  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, method);
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    0,
    this->klass->vtable._12_set_CommandIndex.method);
  klass = this->klass;
  this->fields.completed = 0;
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, QuestAfterAction_o *, const MethodInfo *))klass->vtable._13_UpdateAnim.methodPtr)(
    this,
    that,
    klass->vtable._13_UpdateAnim.method);
}


void QuestAfterAction_StateInstant__onEnd(
        QuestAfterAction_StateInstant_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  this->fields.completed = 1;
  QuestAfterAction_StateAdditionalBase__onEnd((QuestAfterAction_StateAdditionalBase_o *)this, 0, method);
}


void QuestAfterAction_StateInstant__update(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateMain___ctor(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain__EndAnim(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  int v4; // w0
  int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v4 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._11_get_CommandIndex.methodPtr)(
         this,
         klass->vtable._11_get_CommandIndex.method);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    (unsigned int)(v4 + 1),
    this->klass->vtable._12_set_CommandIndex.method);
  v5 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
         this,
         this->klass->vtable._11_get_CommandIndex.method);
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
         this,
         this->klass->vtable._10_get_CommandBuf.method);
  if ( !v6 )
    sub_1D0F30C(0, v7);
  if ( v5 >= *(_DWORD *)(v6 + 24) )
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, const MethodInfo *))this->klass->vtable._15_onEnd.methodPtr)(
      this,
      1,
      this->klass->vtable._15_onEnd.method);
}


void QuestAfterAction_StateMain__FadeRoad(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_Command_o *command,
        int32_t fadeState,
        int32_t fadeEndDispType,
        const MethodInfo *method)
{
  __int64 v9; // x21
  void *param; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_o **v18; // x23
  int32_t v19; // w22
  _BOOL4 v20; // w24
  float v21; // s8
  Il2CppObject *MapComponent_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *v29; // x23
  srcLineSprite_o *v30; // x22
  System_Action_o *v31; // x0
  System_Action_o *v32; // x23

  if ( (byte_4E74133 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__0__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__1__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
    byte_4E74133 = 1;
  }
  v9 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 24) = this;
  *(_DWORD *)(v9 + 16) = fadeEndDispType;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  if ( !command )
    goto LABEL_24;
  param = command->fields.param;
  if ( !param )
    goto LABEL_24;
  param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0);
  if ( !param )
    goto LABEL_24;
  v18 = (System_String_o **)param;
  if ( !*((_DWORD *)param + 6) )
    sub_1D0F314(param);
  v19 = System_Int32__Parse(*((System_String_o **)param + 4), 0);
  if ( *((int *)v18 + 6) >= 2 )
  {
    v21 = System_Single__Parse(v18[5], 0) * 0.001;
    v20 = *((int *)v18 + 6) >= 3 && System_Int32__Parse(v18[6], 0) > 0;
  }
  else
  {
    v20 = 0;
    v21 = 0.5;
  }
  if ( this->fields.IsMapModel )
  {
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
    return;
  }
  param = this->fields.that;
  if ( !param )
    goto LABEL_24;
  MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                          (QuestAfterAction_o *)param,
                          1,
                          v19,
                          this,
                          (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
  *(_QWORD *)(v9 + 32) = MapComponent_object;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)MapComponent_object, v23, v24, v25, v26, v27, v28);
  v29 = *(UnityEngine_Object_o **)(v9 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v29, 0, 0) )
  {
    v30 = *(srcLineSprite_o **)(v9 + 32);
    v31 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    v32 = v31;
    if ( v20 )
    {
      System_Action___ctor(
        v31,
        (Il2CppObject *)v9,
        Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__0__,
        0);
      if ( v30 )
      {
        srcLineSprite__SetState(v30, fadeState, v32, v21, 0);
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
          this,
          this->klass->vtable._14_EndAnim.method);
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
          this,
          this->fields.that,
          this->klass->vtable._13_UpdateAnim.method);
        return;
      }
LABEL_24:
      sub_1D0F30C(param, v11);
    }
    System_Action___ctor(
      v31,
      (Il2CppObject *)v9,
      Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__1__,
      0);
    if ( !v30 )
      goto LABEL_24;
    srcLineSprite__SetState(v30, fadeState, v32, v21, 0);
  }
}


void QuestAfterAction_StateMain__ForceEndAnim(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
         this,
         klass->vtable._10_get_CommandBuf.method,
         method);
  if ( !v6 )
    sub_1D0F30C(0, v7);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    *(unsigned int *)(v6 + 24),
    this->klass->vtable._12_set_CommandIndex.method);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, bool, const MethodInfo *))this->klass->vtable._15_onEnd.methodPtr)(
    this,
    deleteKey,
    this->klass->vtable._15_onEnd.method);
}


bool QuestAfterAction_StateMain__IsUsableCommand(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  return 1;
}


void QuestAfterAction_StateMain__StartMapGimmick(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_o *v2; // x19
  struct QuestAfterAction_o *that; // x8
  __int64 v4; // x8
  QuestAfterAction_StateMain_o *v5; // x20
  unsigned __int64 v6; // x22
  struct QuestAfterAction_o *v7; // x8
  int32_t v8; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8

  v2 = this;
  if ( (byte_4E74132 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4E74132 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v4 = *(_QWORD *)&this->fields.IsAnimDoing;
  v5 = this;
  if ( (int)v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1D0F314(this);
      v7 = v2->fields.that;
      if ( !v7 )
        break;
      this = (QuestAfterAction_StateMain_o *)v7->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v8 = *((_DWORD *)&v5->fields.waitTime + v6);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v8,
        (const MethodInfo_39408E8 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_37821212(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)MapComponent_object, 1, 0);
        }
      }
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_1D0F30C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v22; // x21
  QuestAfterAction_Command_o *v23; // x21
  BlankEarthQuestAfterAction_o *v24; // x23
  System_Action_o *v25; // x24
  const MethodInfo *v26; // x5
  BlankEarthQuestAfterAction_o *v27; // x23
  System_Action_o *v28; // x24
  const MethodInfo *v29; // x5
  const MethodInfo *v30; // x4
  long double inited; // q0
  int id; // w8
  QuestAfterAction_Command_o *v33; // x0
  bool v34; // w1
  __int64 v35; // x24
  int32_t v36; // w21
  int32_t v37; // w23
  int32_t v38; // w22
  __int64 v39; // x8
  __int64 v40; // x23
  float v41; // s0
  __int64 v42; // x19
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x22
  int32_t v50; // w20
  int32_t v51; // w21
  BgmManager_c *v52; // x0
  float v53; // s0
  float masterVolume; // s1
  float v55; // s0
  __int64 v56; // x8
  ScrTerminalListTop_o *v57; // x22
  float v58; // s8
  float v59; // s9
  __int64 v60; // x8
  ScrTerminalListTop_o *v61; // x22
  System_Action_o *v62; // x23
  __int64 v63; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x23
  __int64 v71; // x8
  __int64 v72; // x22
  int32_t v73; // w21
  bool v74; // w24
  bool v75; // w26
  System_String_o *v76; // x19
  System_String_o *v77; // x20
  System_String_o *v78; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v80; // x23
  __int64 v81; // x20
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 v88; // x8
  QuestAfterAction_o *v89; // x22
  Il2CppObject *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  UnityEngine_Object_o *v97; // x19
  SrcSpotBasePrefab_o *v98; // x19
  System_Action_o *v99; // x21
  int32_t v100; // w1
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x19
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v109; // x0
  __int64 v110; // x21
  int32_t v111; // w8
  __int64 v112; // x21
  int32_t v113; // w20
  int32_t v114; // w22
  __int64 v115; // x20
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  __int64 v122; // x8
  QuestAfterAction_o *v123; // x22
  Il2CppObject *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  UnityEngine_Object_o *v131; // x19
  ModelLineComponent_o *v132; // x19
  System_Action_o *v133; // x21
  int32_t v134; // w1
  __int64 v135; // x8
  __int64 v136; // x22
  _BOOL4 v137; // w23
  float v138; // s0
  TerminalSceneComponent_c *v139; // x0
  TerminalSceneComponent_o *mInstance; // x22
  __int64 v141; // x22
  GrandQuestFolderBoardItem_o *v142; // x22
  System_Collections_Generic_List_object__o *v143; // x23
  System_Collections_Generic_List_object__o *v144; // t1
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  __int64 v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x8
  __int64 v155; // x8
  PlayMakerFSM_o *v156; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v158; // x8
  __int64 v159; // x8
  QuestBoardListViewManager_o *v160; // x21
  System_Action_o *v161; // x22
  Il2CppObject *v162; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v163; // x0
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  TerminalSceneComponent_c *v170; // x0
  __int64 v171; // x8
  float v172; // s0
  __int64 v173; // x23
  float v174; // s0
  float v175; // s8
  int32_t v176; // w22
  __int64 v177; // x8
  ScrTerminalMap_o *v178; // x24
  float v179; // s0
  float v180; // s9
  float v181; // s0
  const MethodInfo_3A88EAC *v182; // x2
  int v183; // w8
  float v184; // s10
  float v185; // s9
  float v186; // s11
  MapCamera_o *v187; // x20
  __int64 v188; // x8
  float v189; // s0
  __int64 v190; // x21
  int32_t v191; // w0
  int32_t v192; // w20
  float v193; // s8
  int32_t v194; // w19
  __int64 v195; // x20
  int32_t v196; // w2
  int32_t v197; // w3
  System_String_o *v198; // x4
  int32_t v199; // w5
  int64_t v200; // x6
  System_String_o *v201; // x7
  __int64 v202; // x23
  int32_t v203; // w21
  Il2CppObject *v204; // x0
  __int64 *v205; // x24
  int32_t v206; // w2
  int32_t v207; // w3
  System_String_o *v208; // x4
  int32_t v209; // w5
  int64_t v210; // x6
  System_String_o *v211; // x7
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v213; // x22
  int32_t v214; // w2
  int32_t v215; // w3
  System_String_o *v216; // x4
  int32_t v217; // w5
  int64_t v218; // x6
  System_String_o *v219; // x7
  const MethodInfo *v220; // x2
  int v221; // w21
  __int64 v222; // x8
  NetworkManager_ResultCallbackFunc_o *v223; // x21
  Il2CppObject *Request_object; // x20
  int32_t v225; // w21
  System_String_o *param; // x21
  _QWORD *v227; // x0
  System_Reflection_MethodBase_o *v228; // x0
  __int64 v229; // x21
  int v230; // w22
  int32_t v231; // w21
  __int64 v232; // x8
  bool v233; // w2
  bool v234; // w3
  int32_t v235; // w1
  __int64 v236; // x22
  int v237; // w23
  float v238; // s8
  int32_t v239; // w21
  System_Collections_Generic_Dictionary_int__object__o *v240; // x20
  __int64 v241; // x8
  __int64 v242; // x8
  __int64 v243; // x8
  System_String_o *v244; // x20
  System_String_o *v245; // x21
  SeManager_c *v246; // x0
  float DEFAULT_VOLUME; // s8
  System_String_o *v248; // x19
  System_String_o *v249; // x20
  System_String_o *v250; // x20
  Il2CppObject *v251; // x21
  System_Action_o *v252; // x23
  System_String_o *v253; // x19
  System_String_o *v254; // x20
  System_String_o *v255; // x20
  Il2CppObject *v256; // x21
  System_Action_o *v257; // x23
  __int64 v258; // x23
  int32_t v259; // w2
  int32_t v260; // w3
  System_String_o *v261; // x4
  int32_t v262; // w5
  int64_t v263; // x6
  System_String_o *v264; // x7
  System_String_array *v265; // x20
  int32_t v266; // w1
  int v267; // w8
  __int64 v268; // x23
  int32_t v269; // w2
  int32_t v270; // w3
  System_String_o *v271; // x4
  int32_t v272; // w5
  int64_t v273; // x6
  System_String_o *v274; // x7
  System_String_array *v275; // x20
  int32_t v276; // w1
  int v277; // w8
  System_String_o *v278; // x19
  System_String_o *v279; // x20
  __int64 v280; // x22
  int32_t v281; // w21
  bool v282; // w23
  __int64 v283; // x8
  int v284; // w9
  __int64 v285; // x8
  __int64 v286; // x8
  __int64 v287; // x8
  __int64 v288; // x22
  int v289; // w23
  bool v290; // w21
  int v291; // w23
  __int64 v292; // x21
  float v293; // s0
  float v294; // s8
  float v295; // s0
  MapCamera_o *v296; // x19
  float v297; // s0
  float v298; // s9
  int32_t v299; // w20
  __int64 v300; // x23
  float v301; // s0
  float v302; // s9
  float v303; // s0
  float v304; // s10
  float v305; // s0
  float v306; // s11
  float v307; // s0
  float v308; // s8
  int32_t v309; // w19
  __int64 v310; // x8
  float v311; // s8
  const MethodInfo_3A88EAC *v312; // x2
  float v313; // s10
  float v314; // s9
  float v315; // s11
  MapCamera_o *v316; // x20
  System_Action_o *v317; // x21
  MapCamera_o *v318; // x0
  float v319; // s0 OVERLAPPED
  float v320; // s1
  float v321; // s2
  float v322; // s3
  int32_t v323; // w1
  __int64 v324; // x8
  __int64 v325; // x21
  int32_t v326; // w20
  __int64 v327; // x8
  __int64 v328; // x21
  int32_t v329; // w0
  int32_t v330; // w20
  System_String_o *v331; // x21
  TerminalPramsManager_c *v332; // x0
  TerminalPramsManager_c *v333; // x0
  BalanceConfig_c *v334; // x0
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v336; // x20
  __int64 v337; // x8
  ScrTerminalMap_o *v338; // x23
  __int64 v339; // x8
  ScrTerminalMap_o *v340; // x20
  UnityEngine_GameObject_o *v341; // x22
  System_Action_o *v342; // x23
  __int64 v343; // x22
  QuestAfterAction_o *v344; // x21
  Il2CppObject *v345; // x21
  QuestAfterAction_o *v346; // x23
  UnityEngine_Object_o *MapGameObject; // x23
  float v348; // s9
  float v349; // s8
  float v350; // s10
  __int64 v351; // x21
  float v352; // s0
  QuestAfterAction_o *v353; // x20
  float v354; // s8
  Il2CppObject *v355; // x20
  _BOOL4 v356; // w23
  QuestAfterAction_o *v357; // x21
  QuestAfterAction_o *v358; // x23
  int32_t v359; // w2
  int32_t v360; // w1
  QuestAfterAction_o *v361; // x0
  __int64 v362; // x8
  __int64 v363; // x22
  int32_t v364; // w21
  bool v365; // w22
  int32_t v366; // w21
  TerminalPramsManager_c *v367; // x0
  QuestAfterAction_o *v368; // x20
  Il2CppObject *v369; // x20
  TerminalPramsManager_c *v370; // x0
  __int64 v371; // x8
  __int64 v372; // x22
  int32_t v373; // w21
  bool v374; // w22
  __int64 v375; // x8
  __int64 v376; // x22
  int32_t v377; // w21
  bool v378; // w22
  __int64 v379; // x21
  QuestAfterAction_o *v380; // x20
  Il2CppObject *v381; // x20
  UIWidget_o *v382; // x20
  __int64 v383; // x23
  int32_t v384; // w2
  int32_t v385; // w3
  System_String_o *v386; // x4
  int32_t v387; // w5
  int64_t v388; // x6
  System_String_o *v389; // x7
  __int64 v390; // x20
  __int64 v391; // x8
  __int64 v392; // x21
  int32_t v393; // w22
  bool v394; // w26
  bool v395; // w27
  __int64 v396; // x20
  int32_t v397; // w2
  int32_t v398; // w3
  System_String_o *v399; // x4
  int32_t v400; // w5
  int64_t v401; // x6
  System_String_o *v402; // x7
  __int64 v403; // x8
  QuestAfterAction_o *v404; // x22
  Il2CppObject *v405; // x0
  int32_t v406; // w2
  int32_t v407; // w3
  System_String_o *v408; // x4
  int32_t v409; // w5
  int64_t v410; // x6
  System_String_o *v411; // x7
  UnityEngine_Object_o *v412; // x19
  MapGimmickComponent_o *v413; // x19
  System_Action_o *v414; // x21
  TerminalSceneComponent_o *v415; // x19
  TerminalSceneComponent_o *v416; // x0
  System_Action_o *v417; // x1
  float v418; // s0
  __int64 v419; // x20
  int32_t v420; // w2
  int32_t v421; // w3
  System_String_o *v422; // x4
  int32_t v423; // w5
  int64_t v424; // x6
  System_String_o *v425; // x7
  System_String_array *v426; // x0
  __int64 *v427; // x21
  int32_t v428; // w2
  int32_t v429; // w3
  System_String_o *v430; // x4
  int32_t v431; // w5
  int64_t v432; // x6
  System_String_o *v433; // x7
  __int64 v434; // x8
  __int64 v435; // x9
  QuestAfterAction_o *v436; // x21
  Il2CppObject *v437; // x0
  int32_t v438; // w2
  int32_t v439; // w3
  System_String_o *v440; // x4
  int32_t v441; // w5
  int64_t v442; // x6
  System_String_o *v443; // x7
  UnityEngine_Object_o *v444; // x19
  MapGimmickComponent_o *v445; // x19
  System_Action_o *v446; // x0
  intptr_t *v447; // x8
  System_Action_o *v448; // x21
  QuestAfterAction_o *v449; // x21
  QuestAfterAction_o *v450; // x23
  UnityEngine_Object_o *v451; // x23
  __int64 v452; // x8
  float v453; // s0
  float v454; // s11
  int32_t v455; // w23
  int32_t v456; // w2
  int32_t v457; // w3
  System_String_o *v458; // x4
  int32_t v459; // w5
  int64_t v460; // x6
  System_String_o *v461; // x7
  __int64 v462; // x8
  QuestAfterAction_o *v463; // x22
  Il2CppObject *v464; // x0
  __int64 v465; // x19
  int32_t v466; // w2
  int32_t v467; // w3
  System_String_o *v468; // x4
  int32_t v469; // w5
  int64_t v470; // x6
  System_String_o *v471; // x7
  UnityEngine_Object_o *v472; // x21
  bool v473; // w0
  bool v474; // w22
  int32_t v475; // w1
  float v476; // s0
  QuestAfterAction_o *v477; // x24
  UnityEngine_Object_o *v478; // x24
  const MethodInfo_3A88EAC *v479; // x2
  float v480; // s10
  float v481; // s8
  float v482; // s9
  __int64 v483; // x8
  int v484; // w8
  MapCamera_o *v485; // x20
  float v486; // s0
  float v487; // s0
  QuestAfterAction_o *v488; // x24
  UnityEngine_Object_o *v489; // x24
  __int64 v490; // x8
  System_String_o *v491; // x24
  QuestAfterAction_o *v492; // x24
  UnityEngine_Object_o *v493; // x24
  float v494; // s8
  float v495; // s9
  float v496; // s10
  __int64 v497; // x8
  __int64 v498; // x21
  QuestAfterAction_o *v499; // x22
  Il2CppObject *v500; // x22
  QuestAfterAction_o *v501; // x22
  UnityEngine_Object_o *v502; // x21
  intptr_t v503; // x8
  __int64 v504; // x22
  QuestAfterAction_o *v505; // x21
  Il2CppObject *v506; // x21
  System_Action_o *v507; // x22
  int32_t v508; // w2
  int32_t v509; // w3
  System_String_o *v510; // x4
  int32_t v511; // w5
  int64_t v512; // x6
  System_String_o *v513; // x7
  GrandQuestFolderBoardItem_o *v514; // x0
  __int64 v515; // x1
  __int64 v516; // x20
  int32_t v517; // w2
  int32_t v518; // w3
  System_String_o *v519; // x4
  int32_t v520; // w5
  int64_t v521; // x6
  System_String_o *v522; // x7
  __int64 v523; // x8
  QuestAfterAction_o *v524; // x22
  Il2CppObject *v525; // x0
  int32_t v526; // w2
  int32_t v527; // w3
  System_String_o *v528; // x4
  int32_t v529; // w5
  int64_t v530; // x6
  System_String_o *v531; // x7
  UnityEngine_Object_o *v532; // x19
  __int64 v533; // x23
  int32_t v534; // w2
  int32_t v535; // w3
  System_String_o *v536; // x4
  int32_t v537; // w5
  int64_t v538; // x6
  System_String_o *v539; // x7
  __int64 v540; // x20
  QuestAfterAction_o *v541; // x22
  Il2CppObject *v542; // x0
  __int64 *v543; // x19
  int32_t v544; // w2
  int32_t v545; // w3
  System_String_o *v546; // x4
  int32_t v547; // w5
  int64_t v548; // x6
  System_String_o *v549; // x7
  UnityEngine_Object_o *v550; // x21
  SrcSpotBasePrefab_o *v551; // x21
  System_Action_o *v552; // x22
  QuestAfterAction_o *v553; // x22
  intptr_t v554; // x8
  int32_t v555; // w1
  SrcSpotBasePrefab_o *v556; // x0
  QuestAfterAction_o *v557; // x22
  UnityEngine_Object_o *v558; // x21
  intptr_t v559; // x8
  _BOOL4 v560; // w23
  QuestAfterAction_o *v561; // x22
  UnityEngine_Object_o *v562; // x21
  intptr_t v563; // x8
  __int64 v564; // x20
  int32_t v565; // w2
  int32_t v566; // w3
  System_String_o *v567; // x4
  int32_t v568; // w5
  int64_t v569; // x6
  System_String_o *v570; // x7
  __int64 v571; // x8
  QuestAfterAction_o *v572; // x22
  Il2CppObject *v573; // x0
  int32_t v574; // w2
  int32_t v575; // w3
  System_String_o *v576; // x4
  int32_t v577; // w5
  int64_t v578; // x6
  System_String_o *v579; // x7
  UnityEngine_Object_o *v580; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v582; // x22
  UnityEngine_Object_o *v583; // x21
  intptr_t m_CachedPtr; // x8
  int32_t v585; // w2
  int32_t v586; // w3
  __int64 v587; // x20
  int32_t v588; // w2
  int32_t v589; // w3
  System_String_o *v590; // x4
  int32_t v591; // w5
  int64_t v592; // x6
  System_String_o *v593; // x7
  __int64 v594; // x8
  QuestAfterAction_o *v595; // x22
  Il2CppObject *v596; // x0
  int32_t v597; // w2
  int32_t v598; // w3
  System_String_o *v599; // x4
  int32_t v600; // w5
  int64_t v601; // x6
  System_String_o *v602; // x7
  UnityEngine_Object_o *v603; // x19
  _BOOL4 v604; // w23
  QuestAfterAction_o *v605; // x22
  UnityEngine_Object_o *v606; // x21
  QuestAfterAction_StateMain_o *v607; // x0
  QuestAfterAction_Command_o *v608; // x1
  int32_t v609; // w1
  Il2CppObject *v610; // x3
  __int64 v611; // x8
  __int64 v612; // x8
  __int64 v613; // x8
  __int64 v614; // x22
  unsigned __int64 v615; // x24
  __int64 v616; // x8
  QuestAfterAction_TitleInfoControlParam_o *v617; // x21
  __int64 v618; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v619; // x22
  System_Action_o *v620; // x20
  int32_t v621; // s0
  int v622; // s1
  int v623; // s2
  System_Action_o *v624; // x19
  bool v625; // w0
  TerminalPramsManager_c *v626; // x0
  TerminalPramsManager_c *v627; // x0
  __int64 v628; // x8
  TerminalPramsManager_c *v629; // x0
  SceneJumpInfo_o *v630; // x21
  __int64 v631; // x8
  __int64 v632; // x8
  TerminalPramsManager_c *v633; // x0
  TerminalPramsManager_c *v634; // x0
  Il2CppObject *v635; // x21
  System_Action_o *v636; // x23
  __int64 v637; // x8
  __int64 v638; // x8
  UnityEngine_Object_o *v639; // x22
  int v640; // w25
  int v641; // w26
  _BOOL8 v642; // x0
  __int64 v643; // x1
  TerminalPramsManager_c *v644; // x0
  __int64 v645; // x8
  System_Collections_IEnumerable_o **monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v647; // x23
  QuestAfterAction_StateMain___c_c *v648; // x8
  System_Func_object__bool__o *_9__16_35; // x24
  Il2CppObject *v650; // x25
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v652; // w2
  int32_t v653; // w3
  System_String_o *v654; // x4
  int32_t v655; // w5
  int64_t v656; // x6
  System_String_o *v657; // x7
  char v658; // w23
  __int64 v659; // x8
  _QWORD *v660; // x8
  int32_t v661; // w24
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppObject *v664; // x25
  _BOOL8 v665; // x0
  __int64 v666; // x1
  TerminalPramsManager_c *v667; // x0
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  _BOOL8 v669; // x0
  __int64 v670; // x1
  TitleInfoEventItemControl_o *v671; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v673; // x1
  __int64 v674; // x0
  __int64 v675; // x1
  Il2CppObject *v676; // x21
  Il2CppClass *v677; // x8
  QuestAfterAction_StateMain_c *v678; // x8
  int v679; // w0
  Il2CppObject *v680; // x21
  Il2CppObject *v681; // x21
  Il2CppClass *v682; // x8
  Il2CppObject *v683; // x0
  int32_t v684; // w2
  int32_t v685; // w3
  System_String_o *v686; // x4
  int32_t v687; // w5
  int64_t v688; // x6
  System_String_o *v689; // x7
  UnityEngine_Object_o *v690; // x22
  MapGimmickComponent_o *v691; // x21
  System_Action_o *v692; // x0
  System_Action_o *v693; // x22
  MapGimmickComponent_o *v694; // x0
  System_Action_o *v695; // x2
  Il2CppObject *v696; // x0
  MapGimmickComponent_o **v697; // x22
  int32_t v698; // w2
  int32_t v699; // w3
  System_String_o *v700; // x4
  int32_t v701; // w5
  int64_t v702; // x6
  System_String_o *v703; // x7
  UnityEngine_Object_o *v704; // x24
  MapGimmickComponent_o *v705; // x24
  System_Action_o *v706; // x0
  System_String_o *v707; // x20
  System_Action_o *v708; // x21
  float v709; // s10
  float v710; // s9
  float v711; // s8
  System_String_o *v712; // x24
  __int64 v713; // x20
  int32_t v714; // w2
  int32_t v715; // w3
  System_String_o *v716; // x4
  int32_t v717; // w5
  int64_t v718; // x6
  System_String_o *v719; // x7
  __int64 v720; // x8
  QuestAfterAction_o *v721; // x22
  Il2CppObject *v722; // x0
  int32_t v723; // w2
  int32_t v724; // w3
  System_String_o *v725; // x4
  int32_t v726; // w5
  int64_t v727; // x6
  System_String_o *v728; // x7
  UnityEngine_Object_o *v729; // x19
  srcLineSprite_o *v730; // x19
  System_Action_o *v731; // x21
  float v732; // s0
  int32_t v733; // w1
  __int64 v734; // x20
  int32_t v735; // w2
  int32_t v736; // w3
  System_String_o *v737; // x4
  int32_t v738; // w5
  int64_t v739; // x6
  System_String_o *v740; // x7
  __int64 v741; // x8
  QuestAfterAction_o *v742; // x22
  Il2CppObject *v743; // x0
  int32_t v744; // w2
  int32_t v745; // w3
  System_String_o *v746; // x4
  int32_t v747; // w5
  int64_t v748; // x6
  System_String_o *v749; // x7
  UnityEngine_Object_o *v750; // x19
  __int64 v751; // x20
  int32_t v752; // w2
  int32_t v753; // w3
  System_String_o *v754; // x4
  int32_t v755; // w5
  int64_t v756; // x6
  System_String_o *v757; // x7
  __int64 v758; // x8
  QuestAfterAction_o *v759; // x22
  Il2CppObject *v760; // x0
  int32_t v761; // w2
  int32_t v762; // w3
  System_String_o *v763; // x4
  int32_t v764; // w5
  int64_t v765; // x6
  System_String_o *v766; // x7
  UnityEngine_Object_o *v767; // x19
  UnityEngine_Object_o *v768; // x21
  int v769; // w9
  UnityEngine_Object_o *v770; // x21
  UnityEngine_Object_o *v771; // x21
  __int64 v772; // x8
  ScrTerminalMap_o *v773; // x21
  System_Action_o *v774; // x23
  MapCamera_o *v775; // x20
  int32_t v776; // w0
  int32_t v777; // w23
  SceneJumpInfo_o *v778; // x22
  System_Action_o *v779; // x20
  MapGimmickComponent_o *v780; // x0
  float v781; // s0 OVERLAPPED
  float v782; // s1
  float v783; // s2
  float v784; // s3
  int32_t v785; // w1
  System_Action_o *v786; // x2
  __int64 v787; // x8
  float v788; // s0 OVERLAPPED
  float v789; // s1
  System_Nullable_Vector3__o v790; // x0
  float v791; // s2
  float v792; // s0 OVERLAPPED
  float v793; // s1
  System_Nullable_Vector3__o v794; // x0
  float v795; // s2
  MapCamera_o *v796; // x20
  __int64 v797; // x8
  MapCamera_o *v798; // x0
  float v799; // s0 OVERLAPPED
  float v800; // s1
  float v801; // s2
  int v802; // w8
  MapCamera_o *v803; // x20
  __int64 v804; // x8
  float v805; // s3
  __int64 v806; // x8
  __int64 v807; // x8
  ScrTerminalMap_o *v808; // x22
  float v809; // s0
  float v810; // s9
  float v811; // s0
  float x; // s10
  float y; // s9
  float z; // s11
  float v815; // s8
  int32_t v816; // w21
  System_Action_o *v817; // x22
  float v818; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_Vector3__o v820; // x1 OVERLAPPED
  System_Nullable_float__o v821; // x3
  float v822; // s0
  MapCamera_o *v823; // x0
  float v824; // s0
  System_Nullable_float__o v825; // x0
  System_Action_o *v826; // x21
  System_Nullable_Vector3__o v827; // x1 OVERLAPPED
  System_Nullable_float__o v828; // x3
  float v829; // s0
  MapCamera_o *v830; // x0
  int32_t v831; // w4
  MapCamera_o *v832; // x20
  float v833; // s0
  System_Nullable_float__o v834; // x0
  float v835; // s0
  System_Nullable_float__o v836; // x0
  float v837; // s0
  System_Nullable_float__o v838; // x0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-160h]
  int32_t v840; // [xsp+48h] [xbp-128h]
  float sec; // [xsp+4Ch] [xbp-124h]
  bool seca; // [xsp+4Ch] [xbp-124h]
  System_Collections_Generic_List_Enumerator_object__o v843; // [xsp+50h] [xbp-120h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v845; // [xsp+70h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v846; // [xsp+90h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+A8h] [xbp-C8h] BYREF
  int32_t v848; // [xsp+B4h] [xbp-BCh] BYREF
  int32_t v849[2]; // [xsp+B8h] [xbp-B8h] BYREF
  __int64 v850; // [xsp+C0h] [xbp-B0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-A8h] BYREF
  Il2CppObject *entity; // [xsp+D0h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+D8h] [xbp-98h] BYREF
  bool isQuickUpdate[4]; // [xsp+ECh] [xbp-84h] BYREF
  System_Nullable_Vector3__o v855; // 0:x0.16
  System_Nullable_Vector3__o v856; // 0:x0.16
  System_Nullable_Vector3__o v857; // 0:x0.16
  UnityEngine_Vector3_o v858; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v859; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v860; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v862; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v863; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v864; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v865; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v866; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v867; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v868; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v869; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v870; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v871; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v873; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v874; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v875; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v876; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v877; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v878; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E74130 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&BgmManager_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_1D0F0B4(&FSUtility_TypeInfo);
    sub_1D0F0B4(&System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Nullable_Vector3___ctor__);
    sub_1D0F0B4(&Method_System_Nullable_float___ctor__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1D0F0B4(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1D0F0B4(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1D0F0B4(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&SceneJumpInfo_TypeInfo);
    sub_1D0F0B4(&SeManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1D0F0B4(&SoundManager_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_1D0F0B4(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_87/*"\r\n"*/);
    sub_1D0F0B4(&StringLiteral_1377/*"30101"*/);
    sub_1D0F0B4(&StringLiteral_10978/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1D0F0B4(&StringLiteral_1378/*"30102"*/);
    sub_1D0F0B4(&StringLiteral_1303/*"10703"*/);
    sub_1D0F0B4(&StringLiteral_810/*","*/);
    sub_1D0F0B4(&StringLiteral_3327/*"CAPTER WAIT"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_20229/*"gevINFOBAR_BACK"*/);
    sub_1D0F0B4(&StringLiteral_1118/*"0"*/);
    byte_4E74130 = 1;
  }
  isQuickUpdate[0] = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)result = 0;
  entity = 0;
  *(_QWORD *)v849 = 0;
  v850 = 0;
  v848 = 0;
  value = 0;
  memset(&v846, 0, sizeof(v846));
  memset(&v845, 0, sizeof(v845));
  v5 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_1330;
  *(_QWORD *)(v5 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (__int64 *)(v5 + 24);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)that, v15, v16, v17, v18, v19, v20);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
              this,
              this->klass->vtable._10_get_CommandBuf.method);
  if ( !updated )
    return;
  if ( !*v14 )
    goto LABEL_1330;
  if ( *(_BYTE *)(*v14 + 168) )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
    if ( *v14 )
    {
      *(_BYTE *)(*v14 + 168) = 0;
      return;
    }
LABEL_1330:
    sub_1D0F30C(updated, v7);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v22 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
          this,
          klass->vtable._10_get_CommandBuf.method);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
              this,
              this->klass->vtable._11_get_CommandIndex.method);
  if ( !v22 )
    goto LABEL_1330;
  if ( (unsigned int)updated >= *(_DWORD *)(v22 + 24) )
    goto LABEL_1331;
  v23 = *(QuestAfterAction_Command_o **)(v22 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, const MethodInfo *))this->klass->vtable._9_IsUsableCommand.methodPtr)(
              this,
              v23,
              this->klass->vtable._9_IsUsableCommand.method);
  if ( (updated & 1) == 0 )
  {
LABEL_1230:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
    return;
  }
  isQuickUpdate[0] = 0;
  if ( !*v14 )
    goto LABEL_1330;
  v24 = *(BlankEarthQuestAfterAction_o **)(*v14 + 56);
  v25 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !v24 )
    goto LABEL_1330;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v24, v7, v23, v25, isQuickUpdate, v26);
  if ( (updated & 1) == 0 )
  {
    if ( !*v14 )
      goto LABEL_1330;
    v27 = *(BlankEarthQuestAfterAction_o **)(*v14 + 48);
    v28 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
    if ( !v27 )
      goto LABEL_1330;
    updated = BlankEarthQuestAfterAction__UpdateAnim(v27, v7, v23, v28, isQuickUpdate, v29);
    if ( (updated & 1) == 0 )
    {
      if ( !v23 )
        goto LABEL_1330;
      id = v23->fields.id;
      if ( id > 540 )
      {
        if ( id > 850 )
        {
          if ( id <= 1100 )
          {
            if ( id == 851 )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4E7125B )
              {
                sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                byte_4E7125B = 1;
              }
              v139 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v139 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v139->static_fields->mInstance;
              updated = (__int64)QuestAfterAction_Command__GetBgmName(v23, 0);
              if ( !mInstance )
                goto LABEL_1330;
              TerminalSceneComponent__playBgm(mInstance, (System_String_o *)updated, 0, 0.0, 0);
              if ( !*v14 )
                goto LABEL_1330;
              *(_BYTE *)(*v14 + 192) = 0;
              goto LABEL_21;
            }
            if ( id == 900 )
            {
              v138 = (float)System_Int32__Parse(v23->fields.param, 0) / 1000.0;
              if ( v138 <= 0.0 )
                goto LABEL_21;
              this->fields.waitTime = v138;
              this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
              return;
            }
            if ( id != 1100 )
              goto LABEL_21;
            v42 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            System_Object___ctor((Il2CppObject *)v42, 0);
            if ( !v42 )
              goto LABEL_1330;
            *(_QWORD *)(v42 + 24) = v5;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v42 + 24), v5, v43, v44, v45, v46, v47, v48);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v49 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v49 + 24) > 1u )
              {
                v50 = updated;
                v51 = System_Int32__Parse(*(System_String_o **)(v49 + 40), 0);
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                if ( !byte_4E722D4 )
                {
                  sub_1D0F0B4(&BgmManager_TypeInfo);
                  byte_4E722D4 = 1;
                }
                v52 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v52 = BgmManager_TypeInfo;
                }
                v53 = -1.0;
                masterVolume = v52->static_fields->masterVolume;
                *(float *)(v42 + 20) = masterVolume;
                if ( *(int *)(v49 + 24) >= 3 )
                {
                  v53 = System_Single__Parse(*(System_String_o **)(v49 + 48), 0);
                  masterVolume = *(float *)(v42 + 20);
                }
                v55 = v53 * masterVolume;
                *(float *)(v42 + 16) = v55;
                if ( v55 > -1.0 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4E7125B )
                  {
                    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                    byte_4E7125B = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v56 = **(_QWORD **)(updated + 184);
                  if ( !v56 )
                    goto LABEL_1330;
                  v57 = *(ScrTerminalListTop_o **)(v56 + 256);
                  v58 = *(float *)(v42 + 16);
                  v59 = *(float *)(v42 + 20);
                  updated = (__int64)QuestAfterAction_TypeInfo;
                  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                  if ( !v57 )
                    goto LABEL_1330;
                  ScrTerminalListTop__StartEasingBgmMasterVolume(
                    v57,
                    v59,
                    v58,
                    QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                    2,
                    0,
                    0);
                }
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4E7125B )
                {
                  sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                  byte_4E7125B = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v60 = **(_QWORD **)(updated + 184);
                if ( !v60 )
                  goto LABEL_1330;
                v61 = *(ScrTerminalListTop_o **)(v60 + 256);
                v62 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v62,
                  (Il2CppObject *)v42,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
                  0);
                if ( !v61 )
                  goto LABEL_1330;
                ScrTerminalListTop__StartEventEffect(v61, v50, v51, v62, 0, 0);
                return;
              }
            }
            goto LABEL_1331;
          }
          if ( id > 1300 )
          {
            if ( id <= 1310 )
            {
              if ( id != 1301 )
              {
                if ( id != 1310 )
                  goto LABEL_21;
                if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                v33 = v23;
                v34 = 0;
                goto LABEL_183;
              }
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1330;
              v280 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v281 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                v282 = *(int *)(v280 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v280 + 40), 0) > 0;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4E7125B )
                {
                  sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                  byte_4E7125B = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v611 = **(_QWORD **)(updated + 184);
                if ( !v611 )
                  goto LABEL_1330;
                v612 = *(_QWORD *)(v611 + 256);
                if ( !v612 )
                  goto LABEL_1330;
                updated = *(_QWORD *)(v612 + 128);
                if ( !updated )
                  goto LABEL_1330;
                updated = (__int64)TitleInfoControl__GetEnableEventUiObjectList((TitleInfoControl_o *)updated, 1, 0);
                if ( !updated )
                  goto LABEL_1330;
                v613 = *(_QWORD *)(updated + 24);
                v614 = updated;
                if ( (int)v613 < 1 )
                  goto LABEL_21;
                v615 = 0;
                while ( 1 )
                {
                  if ( v615 >= (unsigned int)v613 )
                    goto LABEL_1331;
                  updated = *(_QWORD *)(v614 + 32 + 8 * v615);
                  if ( v282 )
                    break;
                  if ( !updated )
                    goto LABEL_1330;
                  v616 = *(_QWORD *)(updated + 64);
                  if ( !v616 )
                    goto LABEL_1330;
                  if ( v281 == *(_DWORD *)(v616 + 16) )
                    goto LABEL_887;
LABEL_889:
                  LODWORD(v613) = *(_DWORD *)(v614 + 24);
                  if ( (__int64)++v615 >= (int)v613 )
                    goto LABEL_21;
                }
                if ( !updated )
                  goto LABEL_1330;
LABEL_887:
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)updated, 0);
                if ( !updated )
                  goto LABEL_1330;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)updated, 1, 0);
                goto LABEL_889;
              }
              goto LABEL_1331;
            }
            if ( id != 1311 )
            {
              if ( id != 1312 )
                goto LABEL_21;
              if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
              v34 = 1;
              v33 = v23;
LABEL_183:
              updated = QuestAfterAction__TryRaidUiDisableCommand(v33, v34, 0);
              if ( (updated & 1) != 0 )
                goto LABEL_21;
LABEL_184:
              v141 = *v14;
              if ( !*v14 )
                goto LABEL_1330;
              v144 = *(System_Collections_Generic_List_object__o **)(v141 + 224);
              v142 = (GrandQuestFolderBoardItem_o *)(v141 + 224);
              v143 = v144;
              if ( !v144 )
              {
                v143 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v143,
                  (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
              }
              v142->klass = (GrandQuestFolderBoardItem_c *)v143;
              sub_1D0F058(v142, (int32_t)v143, v101, v102, v103, v104, v105, v106);
              if ( !*v14 )
                goto LABEL_1330;
              updated = *(_QWORD *)(*v14 + 224);
              if ( !updated )
                goto LABEL_1330;
              v151 = *(_QWORD *)(updated + 16);
              v152 = Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__;
              ++*(_DWORD *)(updated + 28);
              if ( !v151 )
                goto LABEL_1330;
              v153 = *(int *)(updated + 24);
              if ( (unsigned int)v153 >= *(_DWORD *)(v151 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)updated,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
              }
              else
              {
                v154 = v151 + 8 * v153;
                *(_DWORD *)(updated + 24) = v153 + 1;
                *(_QWORD *)(v154 + 32) = v23;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)(v154 + 32),
                  (int32_t)v23,
                  v145,
                  v146,
                  v147,
                  v148,
                  v149,
                  v150);
              }
              goto LABEL_21;
            }
            updated = (__int64)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              updated = (__int64)TerminalPramsManager_TypeInfo;
            }
            v283 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 880LL);
            if ( !v283 )
              goto LABEL_1330;
            v284 = *(_DWORD *)(v283 + 28) + 1;
            *(_DWORD *)(v283 + 24) = 0;
            *(_DWORD *)(v283 + 28) = v284;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v285 = **(_QWORD **)(updated + 184);
            if ( !v285 )
              goto LABEL_1330;
            v286 = *(_QWORD *)(v285 + 256);
            if ( !v286 )
              goto LABEL_1330;
            v287 = *(_QWORD *)(v286 + 128);
            if ( !v287 )
              goto LABEL_1330;
            updated = *(_QWORD *)(v287 + 328);
            if ( !updated )
              goto LABEL_1330;
            (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)updated + 440LL))(
              updated,
              *(_QWORD *)(*(_QWORD *)updated + 448LL),
              inited);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v288 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1331;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(_DWORD *)(v288 + 24) <= 1u )
              goto LABEL_1331;
            v289 = updated;
            v840 = System_Int32__Parse(*(System_String_o **)(v288 + 40), 0);
            if ( *(int *)(v288 + 24) >= 3 )
            {
              v290 = System_Int32__Parse(*(System_String_o **)(v288 + 48), 0) > 0;
              if ( *(int *)(v288 + 24) >= 4 )
              {
                seca = System_Int32__Parse(*(System_String_o **)(v288 + 56), 0) > 0;
                goto LABEL_1009;
              }
            }
            else
            {
              v290 = 0;
            }
            seca = 0;
LABEL_1009:
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v637 = **(_QWORD **)(updated + 184);
            if ( !v637 )
              goto LABEL_1330;
            v638 = *(_QWORD *)(v637 + 256);
            if ( !v638 )
              goto LABEL_1330;
            v639 = *(UnityEngine_Object_o **)(v638 + 128);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v639, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v639 )
                goto LABEL_1330;
              updated = (__int64)v639[14].monitor;
              if ( !updated )
                goto LABEL_1330;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v843,
                (System_Collections_Generic_List_object__o *)updated,
                (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
              v640 = 0;
              v846 = v843;
LABEL_1023:
              v641 = v640;
              while ( 1 )
              {
                v642 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v846,
                         (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
                if ( !v642 )
                  break;
                if ( v290 )
                {
                  if ( !v846.fields._current )
                    sub_1D0F30C(v642, v643);
LABEL_1030:
                  v640 = 1;
                  TitleInfoEventRaidStatusComponent__SetEntryAnim(
                    (TitleInfoEventRaidStatusComponent_o *)v846.fields._current,
                    0);
                  goto LABEL_1023;
                }
                if ( !v846.fields._current )
                  sub_1D0F30C(v642, v643);
                if ( v289 == LODWORD(v846.fields._current[9].monitor) )
                  goto LABEL_1030;
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v846,
                (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
              if ( (v640 & 1) != 0 )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4E741A4 )
                {
                  sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                  byte_4E741A4 = 1;
                }
                v644 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v644 = TerminalPramsManager_TypeInfo;
                }
                if ( v644->static_fields->_RemainingRaidHpData_k__BackingField )
                {
                  if ( !v644->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v644);
                  if ( !byte_4E741A4 )
                  {
                    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                    byte_4E741A4 = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  v645 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL);
                  if ( !v645 )
                    goto LABEL_1330;
                  *(_BYTE *)(v645 + 64) = 1;
                }
              }
              monitor = (System_Collections_IEnumerable_o **)v639[15].monitor;
              if ( monitor )
              {
                v647 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                              monitor[9],
                                                                              (const MethodInfo_327EA84 *)Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
                v648 = QuestAfterAction_StateMain___c_TypeInfo;
                if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                  v648 = QuestAfterAction_StateMain___c_TypeInfo;
                }
                _9__16_35 = (System_Func_object__bool__o *)v648->static_fields->__9__16_35;
                if ( !_9__16_35 )
                {
                  if ( !v648->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v648);
                    v648 = QuestAfterAction_StateMain___c_TypeInfo;
                  }
                  v650 = (Il2CppObject *)v648->static_fields->__9;
                  _9__16_35 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    _9__16_35,
                    v650,
                    Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
                    0);
                  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                  static_fields->__9__16_35 = (struct System_Func_TitleInfoEventRaidBossComponent__bool__o *)_9__16_35;
                  sub_1D0F058(
                    (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_35,
                    (int32_t)_9__16_35,
                    v652,
                    v653,
                    v654,
                    v655,
                    v656,
                    v657);
                }
                updated = System_Linq_Enumerable__Any_object__52817792(
                            v647,
                            (System_Func_TSource__bool__o *)_9__16_35,
                            (const MethodInfo_325EF80 *)Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
                v658 = updated;
                if ( (updated & 1) != 0 && ((v641 ^ 1) & 1) != 0 )
                {
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4E741A4 )
                  {
                    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                    byte_4E741A4 = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  if ( *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL) )
                  {
                    if ( !*(_DWORD *)(updated + 224) )
                      j_il2cpp_runtime_class_init_0(updated);
                    if ( !byte_4E741A4 )
                    {
                      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                      byte_4E741A4 = 1;
                    }
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      updated = (__int64)TerminalPramsManager_TypeInfo;
                    }
                    v659 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL);
                    if ( !v659 )
                      goto LABEL_1330;
                    *(_BYTE *)(v659 + 64) = 1;
                  }
                }
                v660 = v639[15].monitor;
                if ( !v660 )
                  goto LABEL_1330;
                updated = v660[9];
                if ( !updated )
                  goto LABEL_1330;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v843,
                  (System_Collections_Generic_List_object__o *)updated,
                  (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
                v845 = v843;
                v661 = 0;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v845,
                          (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
                {
                  current = v845.fields._current;
                  if ( v845.fields._current
                    && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
                        v845.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
                  {
                    if ( (TitleInfoEventRaidBossComponent_c *)v845.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
                      v664 = v845.fields._current;
                    else
                      v664 = 0;
                  }
                  else
                  {
                    v664 = 0;
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  v665 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v664, 0, 0);
                  if ( v665 )
                  {
                    if ( seca )
                      goto LABEL_1087;
                    if ( !v664 )
                      sub_1D0F30C(v665, v666);
                    if ( v840 == LODWORD(v664[23].klass) )
                    {
LABEL_1087:
                      v667 = TerminalPramsManager_TypeInfo;
                      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                        v667 = TerminalPramsManager_TypeInfo;
                      }
                      RaidBossHpForceHideGroupIndexList = v667->static_fields->RaidBossHpForceHideGroupIndexList;
                      if ( !RaidBossHpForceHideGroupIndexList )
                        sub_1D0F30C(0, v666);
                      v669 = System_Collections_Generic_List_int___Remove(
                               RaidBossHpForceHideGroupIndexList,
                               v661,
                               (const MethodInfo_39408E8 *)Method_System_Collections_Generic_List_int__Remove__);
                      if ( (v658 & 1) != 0 )
                      {
                        v671 = (TitleInfoEventItemControl_o *)v639[15].monitor;
                        if ( !v671 )
                          sub_1D0F30C(0, v670);
                        TitleInfoEventItemControl__SetEventGroupIdx(v671, v661, 1, 0);
                      }
                      else
                      {
                        if ( !current )
                          sub_1D0F30C(v669, v670);
                        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
                        if ( !gameObject )
                          sub_1D0F30C(0, v673);
                        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                        if ( !v664 )
                          sub_1D0F30C(v674, v675);
                        TitleInfoEventRaidBossComponent__PlayFrameInBoss((TitleInfoEventRaidBossComponent_o *)v664, 0);
                      }
                    }
                  }
                  ++v661;
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v845,
                  (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
              }
            }
            goto LABEL_21;
          }
          if ( id != 1200 )
          {
            if ( id != 1300 )
              goto LABEL_21;
            if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
            updated = QuestAfterAction__TryEventUiDisableCommand(v23, 0);
            if ( (updated & 1) != 0 )
              goto LABEL_21;
            goto LABEL_184;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1330;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1330;
          v229 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1331;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(_DWORD *)(v229 + 24) <= 1u )
            goto LABEL_1331;
          v230 = updated;
          v231 = System_Int32__Parse(*(System_String_o **)(v229 + 40), 0);
          if ( v230 == 2 )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v632 = **(_QWORD **)(updated + 184);
            if ( !v632 )
              goto LABEL_1330;
            updated = *(_QWORD *)(v632 + 256);
            if ( !updated )
              goto LABEL_1330;
            v233 = 1;
            v235 = v231;
          }
          else
          {
            if ( v230 != 1 )
            {
              if ( v230 )
                goto LABEL_21;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4E7125B )
              {
                sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                byte_4E7125B = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v232 = **(_QWORD **)(updated + 184);
              if ( !v232 )
                goto LABEL_1330;
              updated = *(_QWORD *)(v232 + 256);
              if ( !updated )
                goto LABEL_1330;
              v233 = 1;
              v234 = 1;
              v235 = v231;
LABEL_983:
              ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v235, v233, v234, 0);
              goto LABEL_21;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v631 = **(_QWORD **)(updated + 184);
            if ( !v631 )
              goto LABEL_1330;
            updated = *(_QWORD *)(v631 + 256);
            if ( !updated )
              goto LABEL_1330;
            v235 = v231;
            v233 = 0;
          }
          v234 = 0;
          goto LABEL_983;
        }
        if ( id > 604 )
        {
          if ( id > 800 )
          {
            if ( id == 801 )
            {
              param = v23->fields.param;
              v227 = Method_QuestAfterAction_StateMain_UpdateAnim__;
              if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
                v227 = (_QWORD *)sub_1D0F0CC(Method_QuestAfterAction_StateMain_UpdateAnim__);
              v228 = (System_Reflection_MethodBase_o *)sub_1D0F098(v227, v227[4]);
              OverwriteAssetSoundName__PlaySe(v228, param, 0, 0);
            }
            else if ( id == 850 )
            {
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__stopBgm(0);
              if ( !*v14 )
                goto LABEL_1330;
              *(_BYTE *)(*v14 + 192) = 1;
            }
            goto LABEL_21;
          }
          switch ( id )
          {
            case 700:
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1330;
              v112 = updated;
              if ( !*(_DWORD *)(updated + 24) )
                goto LABEL_1331;
              v113 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v112 + 24) >= 2 )
                v114 = System_Int32__Parse(*(System_String_o **)(v112 + 40), 0) + 1;
              else
                v114 = 0;
              v630 = (SceneJumpInfo_o *)sub_1D0F300(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_42856744(v630, (System_String_o *)StringLiteral_1/*""*/, v113, v114, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              v609 = 72;
              v610 = (Il2CppObject *)v630;
              goto LABEL_1229;
            case 701:
              if ( !System_String__op_Equality(v23->fields.param, (System_String_o *)StringLiteral_1118/*"0"*/, 0) )
                goto LABEL_21;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4E741A1 )
              {
                sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                byte_4E741A1 = 1;
              }
              v332 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v332 = TerminalPramsManager_TypeInfo;
              }
              if ( v332->static_fields->_IsTransOrdealCall_k__BackingField )
                goto LABEL_21;
              if ( !v332->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v332);
              if ( !byte_4E741A2 )
              {
                sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                byte_4E741A2 = 1;
              }
              v333 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v333 = TerminalPramsManager_TypeInfo;
              }
              v333->static_fields->_IsTransOrdealCall_k__BackingField = 1;
              v334 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v334 = BalanceConfig_TypeInfo;
              }
              TerminalPramsManager__SetAutoResumeByWarId(v334->static_fields->OrdealCallWarId, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
              return;
            case 702:
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)System_String__Split_65614680(
                                   (System_String_o *)updated,
                                   (System_String_o *)StringLiteral_810/*","*/,
                                   0,
                                   0);
              if ( !updated )
                goto LABEL_1330;
              v324 = *(_QWORD *)(updated + 24);
              v325 = updated;
              if ( !v324 )
                goto LABEL_984;
              if ( !(_DWORD)v324 )
                goto LABEL_1331;
              if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
                goto LABEL_21;
              if ( *(int *)(v325 + 24) < 2 )
LABEL_984:
                v326 = 0;
              else
                v326 = System_Int32__Parse(*(System_String_o **)(v325 + 40), 0);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              TerminalPramsManager__SetAutoResumeForFolder(v326, 0);
              if ( !byte_4E74051 )
              {
                sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                byte_4E74051 = 1;
              }
              v633 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v633 = TerminalPramsManager_TypeInfo;
              }
              if ( v633->static_fields->_DispState_k__BackingField == 3 )
              {
                if ( !v633->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v633);
                if ( !byte_4E741A3 )
                {
                  sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                  byte_4E741A3 = 1;
                }
                v634 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v634 = TerminalPramsManager_TypeInfo;
                }
                v634->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
              }
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
              goto LABEL_1230;
            case 703:
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              *(_BYTE *)(updated + 195) = 0;
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)System_String__Split_65614680(
                                   (System_String_o *)updated,
                                   (System_String_o *)StringLiteral_810/*","*/,
                                   0,
                                   0);
              if ( !updated )
                goto LABEL_1330;
              v327 = *(_QWORD *)(updated + 24);
              v328 = updated;
              if ( !v327 )
                goto LABEL_865;
              if ( !(_DWORD)v327 )
                goto LABEL_1331;
              v329 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( v329 < 1 )
              {
LABEL_865:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1330;
                v609 = 91;
                v610 = 0;
                goto LABEL_1229;
              }
              v330 = v329;
              if ( *(int *)(v328 + 24) > 1 )
              {
                v776 = System_Int32__Parse(*(System_String_o **)(v328 + 40), 0);
                v331 = (System_String_o *)StringLiteral_1/*""*/;
                if ( v776 >= 1 )
                {
                  v777 = 1;
                  goto LABEL_1227;
                }
              }
              else
              {
                v331 = (System_String_o *)StringLiteral_1/*""*/;
              }
              v777 = 0;
LABEL_1227:
              v778 = (SceneJumpInfo_o *)sub_1D0F300(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_42856744(v778, v331, v330, v777, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              v609 = 91;
              v610 = (Il2CppObject *)v778;
LABEL_1229:
              AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v609, 1, v610, 0);
              break;
            default:
              if ( id != 800 )
                goto LABEL_21;
              value = 0;
              updated = System_String__IsNullOrEmpty(v23->fields.param, 0);
              if ( (updated & 1) != 0 )
                goto LABEL_337;
              if ( !*v14 )
                goto LABEL_1330;
              updated = *(_QWORD *)(*v14 + 264);
              if ( !updated )
                goto LABEL_1330;
              updated = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                          (System_Collections_Generic_Dictionary_object__object__o *)updated,
                          (Il2CppObject *)v23->fields.param,
                          &value,
                          (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TryGetValue__);
              if ( value )
                goto LABEL_340;
LABEL_337:
              if ( !*v14 )
                goto LABEL_1330;
              v240 = *(System_Collections_Generic_Dictionary_int__object__o **)(*v14 + 240);
              updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
                          this,
                          this->klass->vtable._11_get_CommandIndex.method);
              if ( !v240 )
                goto LABEL_1330;
              System_Collections_Generic_Dictionary_int__object___TryGetValue(
                v240,
                updated,
                &value,
                (const MethodInfo_35A9994 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
              if ( !value )
                goto LABEL_1230;
LABEL_340:
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4E7125B )
              {
                sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                byte_4E7125B = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v241 = **(_QWORD **)(updated + 184);
              if ( !v241 )
                goto LABEL_1330;
              if ( !*(_QWORD *)(v241 + 464) )
                goto LABEL_358;
              if ( !*(_DWORD *)(updated + 224) )
                j_il2cpp_runtime_class_init_0(updated);
              if ( !byte_4E7125B )
              {
                sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                byte_4E7125B = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v242 = **(_QWORD **)(updated + 184);
              if ( !v242 )
                goto LABEL_1330;
              v243 = *(_QWORD *)(v242 + 464);
              if ( !v243 )
                goto LABEL_1330;
              updated = *(unsigned int *)(v243 + 48);
              if ( (_DWORD)updated )
                goto LABEL_360;
LABEL_358:
              if ( !value )
                goto LABEL_1330;
              updated = LODWORD(value[1].klass);
LABEL_360:
              if ( (int)updated < 1 )
              {
                if ( !value )
                  goto LABEL_1330;
                v707 = (System_String_o *)value[1].monitor;
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__playVoice(v707, 0, 0);
              }
              else
              {
                updated = (__int64)ServantVoiceEntity__getVoiceAssetName_44173044(updated, 0);
                if ( !value )
                  goto LABEL_1330;
                v244 = (System_String_o *)updated;
                v245 = (System_String_o *)value[1].monitor;
                v246 = SeManager_TypeInfo;
                if ( !SeManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                  v246 = SeManager_TypeInfo;
                }
                DEFAULT_VOLUME = v246->static_fields->DEFAULT_VOLUME;
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__playVoice_42894660(v244, v245, DEFAULT_VOLUME, 0, 0, 0);
              }
              goto LABEL_1230;
          }
          goto LABEL_1230;
        }
        switch ( id )
        {
          case 600:
            v76 = (System_String_o *)StringLiteral_1/*""*/;
            v77 = System_String__Concat_65562772((System_String_o *)StringLiteral_10978/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v78 = LocalizationManager__Get(v77, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v80 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v80,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
              0);
            if ( !Instance )
              goto LABEL_1330;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v76,
              v78,
              v80,
              210,
              0,
              0,
              0,
              1,
              0,
              0,
              0,
              0,
              0.0,
              0,
              0);
            return;
          case 601:
            v268 = StringLiteral_1/*""*/;
            updated = sub_1D0F15C(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1330;
            v275 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              break;
            v276 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(updated + 32), v276, v269, v270, v271, v272, v273, v274);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split_65615820((System_String_o *)updated, v275, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v277 = *(_DWORD *)(updated + 24);
            if ( v277 <= 0 )
              goto LABEL_1230;
            v278 = *(System_String_o **)(updated + 32);
            if ( v277 == 1 )
            {
              v279 = *(System_String_o **)(updated + 32);
              v278 = (System_String_o *)v268;
            }
            else
            {
              v279 = *(System_String_o **)(updated + 40);
            }
            v635 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v636 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v636,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
              0);
            if ( !v635 )
              goto LABEL_1330;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)v635,
              v278,
              v279,
              v636,
              210,
              0,
              0,
              0,
              1,
              0,
              1,
              0,
              0,
              0.0,
              0,
              0);
            return;
          case 602:
            v253 = (System_String_o *)StringLiteral_1/*""*/;
            v254 = System_String__Concat_65562772((System_String_o *)StringLiteral_10978/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v255 = LocalizationManager__Get(v254, 0);
            v256 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v257 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v257,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
              0);
            if ( !v256 )
              goto LABEL_1330;
            onClickOkSeKind = 0;
            goto LABEL_1004;
          case 603:
            v258 = StringLiteral_1/*""*/;
            updated = sub_1D0F15C(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1330;
            v265 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              break;
            v266 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(updated + 32), v266, v259, v260, v261, v262, v263, v264);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split_65615820((System_String_o *)updated, v265, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v267 = *(_DWORD *)(updated + 24);
            if ( v267 <= 0 )
              goto LABEL_1230;
            v253 = *(System_String_o **)(updated + 32);
            if ( v267 == 1 )
            {
              v255 = *(System_String_o **)(updated + 32);
              v253 = (System_String_o *)v258;
            }
            else
            {
              v255 = *(System_String_o **)(updated + 40);
            }
            v256 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v257 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v257,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0);
            if ( !v256 )
              goto LABEL_1330;
            onClickOkSeKind = 1;
LABEL_1004:
            CommonUI__OpenNotificationDialog_32088184(
              (CommonUI_o *)v256,
              v253,
              v255,
              v257,
              40.0,
              -162.5,
              210,
              0,
              0,
              0,
              1,
              28,
              onClickOkSeKind,
              0,
              1,
              0,
              0);
            return;
          case 604:
            v248 = (System_String_o *)StringLiteral_1/*""*/;
            v249 = System_String__Concat_65562772((System_String_o *)StringLiteral_10978/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v250 = LocalizationManager__Get(v249, 0);
            v251 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v252 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v252,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
              0);
            if ( !v251 )
              goto LABEL_1330;
            CommonUI__OpenNotificationDialog_32088184(
              (CommonUI_o *)v251,
              v248,
              v250,
              v252,
              30.0,
              -162.5,
              210,
              0,
              0,
              0,
              1,
              30,
              0,
              0,
              1,
              0,
              0);
            return;
          default:
            if ( id != 560 )
              goto LABEL_21;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v135 = *(_QWORD *)(updated + 24);
            v136 = updated;
            if ( v135 )
            {
              if ( !(_DWORD)v135 )
                break;
              v137 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0;
            }
            else
            {
              v137 = 0;
            }
            v617 = (QuestAfterAction_TitleInfoControlParam_o *)sub_1D0F300(QuestAfterAction_TitleInfoControlParam_TypeInfo);
            QuestAfterAction_TitleInfoControlParam___ctor(v617, 0);
            if ( *(int *)(v136 + 24) < 2 )
              goto LABEL_899;
            updated = System_Int32__Parse(*(System_String_o **)(v136 + 40), 0);
            if ( (int)updated < 1 )
              goto LABEL_899;
            if ( *(_DWORD *)(v136 + 24) <= 1u )
              break;
            updated = System_Int32__Parse(*(System_String_o **)(v136 + 40), 0);
            if ( !v617 )
              goto LABEL_1330;
            v617->fields._TargetId_k__BackingField = updated;
LABEL_899:
            if ( *(int *)(v136 + 24) <= 2 )
              goto LABEL_904;
            updated = System_Int32__Parse(*(System_String_o **)(v136 + 48), 0);
            if ( (int)updated < 1 )
              goto LABEL_904;
            if ( *(_DWORD *)(v136 + 24) > 2u )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v136 + 48), 0);
              if ( !v617 )
                goto LABEL_1330;
              v617->fields._TargetType_k__BackingField = updated;
LABEL_904:
              v618 = *v14;
              if ( !*v14 )
                goto LABEL_1330;
              v619 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v618 + 40);
              if ( v137 )
              {
                if ( !v619 )
                  goto LABEL_1330;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  *(QuestAfterAction_TitleInfoControlCallback_o **)(v618 + 40),
                  v617,
                  0,
                  0);
                goto LABEL_21;
              }
              v620 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(v620, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !v619 )
                goto LABEL_1330;
              QuestAfterAction_TitleInfoControlCallback__Start(v619, v617, v620, 0);
              return;
            }
            break;
        }
LABEL_1331:
        sub_1D0F314(updated);
      }
      if ( id > 352 )
      {
        if ( id > 501 )
        {
          if ( id <= 520 )
          {
            if ( id == 510 )
            {
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1330;
              v236 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v237 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                v238 = 0.5;
                if ( *(int *)(v236 + 24) >= 2 )
                {
                  v239 = System_Int32__Parse(*(System_String_o **)(v236 + 40), 0);
                  if ( *(int *)(v236 + 24) >= 3 )
                    v238 = System_Single__Parse(*(System_String_o **)(v236 + 48), 0);
                }
                else
                {
                  v239 = v237;
                  v237 = -1;
                }
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1330;
                MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                        (QuestAfterAction_o *)updated,
                                        0,
                                        v239,
                                        this,
                                        (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0, 0) )
                {
                  if ( v237 >= 1 )
                  {
                    updated = *v14;
                    if ( !*v14 )
                      goto LABEL_1330;
                    v336 = QuestAfterAction__GetMapComponent_object_(
                             (QuestAfterAction_o *)updated,
                             0,
                             v237,
                             this,
                             (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v336, 0, 0) )
                    {
                      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      if ( !byte_4E7125B )
                      {
                        sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                        byte_4E7125B = 1;
                      }
                      updated = (__int64)TerminalSceneComponent_TypeInfo;
                      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        updated = (__int64)TerminalSceneComponent_TypeInfo;
                      }
                      v337 = **(_QWORD **)(updated + 184);
                      if ( !v337 )
                        goto LABEL_1330;
                      if ( !v336 )
                        goto LABEL_1330;
                      v338 = *(ScrTerminalMap_o **)(v337 + 264);
                      updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v336, 0);
                      if ( !v338 )
                        goto LABEL_1330;
                      ScrTerminalMap__SetPlayerIcon(v338, (UnityEngine_GameObject_o *)updated, 0);
                    }
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4E7125B )
                  {
                    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                    byte_4E7125B = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v339 = **(_QWORD **)(updated + 184);
                  if ( !v339 )
                    goto LABEL_1330;
                  if ( !MapComponent_object )
                    goto LABEL_1330;
                  v340 = *(ScrTerminalMap_o **)(v339 + 264);
                  v341 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0);
                  v342 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                  System_Action___ctor(v342, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v340 )
                    goto LABEL_1330;
                  ScrTerminalMap__MovePlayerIcon(v340, v341, v239, v342, v238, 0);
                }
                return;
              }
            }
            else
            {
              if ( id != 520 )
                goto LABEL_21;
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1330;
              v107 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                DEFAULT_FADE_TIME = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
                if ( DEFAULT_FADE_TIME <= 0.0 )
                {
                  v109 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v109 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v109->static_fields->DEFAULT_FADE_TIME;
                }
                result[1] = 0;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4E7125B )
                {
                  sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                  byte_4E7125B = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v110 = **(_QWORD **)(updated + 184);
                if ( *(int *)(v107 + 24) >= 2 )
                {
                  updated = System_Int32__TryParse(*(System_String_o **)(v107 + 40), &result[1], 0);
                  if ( (updated & 1) != 0 )
                  {
                    if ( !v110 )
                      goto LABEL_1330;
                    v111 = result[1];
                    *(float *)(v110 + 412) = DEFAULT_FADE_TIME;
                    *(_DWORD *)(v110 + 476) = v111;
                  }
                  else
                  {
                    v111 = result[1];
                  }
                  if ( v111 == 3 && *(int *)(v107 + 24) >= 5 )
                  {
                    updated = System_Single__TryParse(*(System_String_o **)(v107 + 48), (float *)result, 0);
                    if ( (updated & 1) != 0 )
                    {
                      if ( *(_DWORD *)(v107 + 24) <= 3u )
                        goto LABEL_1331;
                      updated = System_Single__TryParse(*(System_String_o **)(v107 + 56), (float *)&v850 + 1, 0);
                      if ( (updated & 1) != 0 )
                      {
                        if ( *(_DWORD *)(v107 + 24) <= 4u )
                          goto LABEL_1331;
                        updated = System_Single__TryParse(*(System_String_o **)(v107 + 64), (float *)&v850, 0);
                        if ( (updated & 1) != 0 )
                        {
                          if ( !v110 )
                            goto LABEL_1330;
                          v622 = HIDWORD(v850);
                          v621 = result[0];
                          v623 = v850;
                          *(_DWORD *)(v110 + 492) = 1065353216;
                          *(_DWORD *)(v110 + 480) = v621;
                          *(_DWORD *)(v110 + 484) = v622;
                          *(_DWORD *)(v110 + 488) = v623;
                        }
                      }
                    }
                  }
                }
                if ( !*v14 )
                  goto LABEL_1330;
                *(_BYTE *)(*v14 + 216) = 1;
                v624 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v624,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
                  0);
                if ( !v110 )
                  goto LABEL_1330;
                v416 = (TerminalSceneComponent_o *)v110;
                v418 = DEFAULT_FADE_TIME;
                v417 = v624;
LABEL_923:
                TerminalSceneComponent__Fadein_MapDisp(v416, v418, v417, 0);
                return;
              }
            }
          }
          else
          {
            if ( id == 530 )
            {
              v195 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
              System_Object___ctor((Il2CppObject *)v195, 0);
              if ( !v195 )
                goto LABEL_1330;
              *(_QWORD *)(v195 + 32) = v5;
              v202 = v195 + 32;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v195 + 32), v5, v196, v197, v198, v199, v200, v201);
              v203 = System_Int32__Parse(v23->fields.param, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)updated,
                                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestMaster___);
              if ( !updated )
                goto LABEL_1330;
              v204 = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                       v203,
                       (const MethodInfo_3535B7C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              *(_QWORD *)(v195 + 16) = v204;
              v205 = (__int64 *)(v195 + 16);
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v195 + 16), (int32_t)v204, v206, v207, v208, v209, v210, v211);
              updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !updated )
                goto LABEL_1330;
              QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v203, 0);
              *(_QWORD *)(v195 + 24) = QuestInfo;
              v213 = v195 + 24;
              sub_1D0F058(
                (GrandQuestFolderBoardItem_o *)(v195 + 24),
                (int32_t)QuestInfo,
                v214,
                v215,
                v216,
                v217,
                v218,
                v219);
              if ( !*(_QWORD *)(v195 + 24) )
                goto LABEL_1330;
              if ( *(_DWORD *)(*(_QWORD *)(v195 + 24) + 32LL) == 1 )
              {
                updated = *v205;
                if ( !*v205 )
                  goto LABEL_1330;
                if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
                {
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4E73E48 )
                  {
                    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                    byte_4E73E48 = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v203;
                  if ( !*(_QWORD *)v213 )
                    goto LABEL_1330;
                  v221 = *(_DWORD *)(*(_QWORD *)v213 + 44LL);
                  if ( !byte_4E73E4C )
                  {
                    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                    byte_4E73E4C = 1;
                  }
                  if ( !*(_DWORD *)(updated + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(updated);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v221;
                  if ( !*(_QWORD *)v202 )
                    goto LABEL_1330;
                  v222 = *(_QWORD *)(*(_QWORD *)v202 + 24LL);
                  if ( !v222 )
                    goto LABEL_1330;
                  *(_BYTE *)(v222 + 197) = 1;
                  v223 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
                  NetworkManager_ResultCallbackFunc___ctor(
                    v223,
                    (Il2CppObject *)v195,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                    0);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Request_object = NetworkManager__getRequest_object_(
                                     v223,
                                     (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                  if ( !byte_4E7132C )
                  {
                    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                    byte_4E7132C = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  v225 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
                  if ( !byte_4E7132B )
                  {
                    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                    byte_4E7132B = 1;
                  }
                  if ( !*(_DWORD *)(updated + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(updated);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  if ( !Request_object )
                    goto LABEL_1330;
                  BattleSetupScenarioRequest__beginRequest(
                    (BattleSetupScenarioRequest_o *)Request_object,
                    v225,
                    *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
                    0);
                }
              }
              else
              {
                QuestAfterAction_StateMain__ForceEndAnim(this, 1, v220);
              }
              return;
            }
            if ( id != 540 )
              goto LABEL_21;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v35 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              v36 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v35 + 24) >= 2 )
              {
                if ( System_Int32__TryParse(*(System_String_o **)(v35 + 40), &v849[1], 0) )
                  v38 = v849[1];
                else
                  v38 = -1;
                if ( *(int *)(v35 + 24) >= 3 )
                {
                  if ( System_Int32__TryParse(*(System_String_o **)(v35 + 48), v849, 0) )
                    v37 = v849[0];
                  else
                    v37 = -1;
                  if ( *(int *)(v35 + 24) >= 4 )
                  {
                    v625 = System_Int32__TryParse(*(System_String_o **)(v35 + 56), &v848, 0);
                    if ( v848 >= 1 && v625 )
                    {
                      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      if ( !byte_4E741A0 )
                      {
                        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                        byte_4E741A0 = 1;
                      }
                      v626 = TerminalPramsManager_TypeInfo;
                      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                        v626 = TerminalPramsManager_TypeInfo;
                      }
                      v626->static_fields->_IsFirstFadeMap_k__BackingField = 1;
                    }
                  }
                }
                else
                {
                  v37 = -1;
                }
              }
              else
              {
                v37 = -1;
                v38 = -1;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4E71D1E )
              {
                sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                byte_4E71D1E = 1;
              }
              v627 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v627 = TerminalPramsManager_TypeInfo;
              }
              v627->static_fields->_IsAutoResume_k__BackingField = 1;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4E7125B )
              {
                sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                byte_4E7125B = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v628 = **(_QWORD **)(updated + 184);
              if ( !v628 )
                goto LABEL_1330;
              updated = *(_QWORD *)(v628 + 264);
              if ( !updated )
                goto LABEL_1330;
              if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v36, v38, v37, 0) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4E71D1E )
                {
                  sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                  byte_4E71D1E = 1;
                }
                v629 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v629 = TerminalPramsManager_TypeInfo;
                }
                v629->static_fields->_IsAutoResume_k__BackingField = 0;
                goto LABEL_21;
              }
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
              updated = *v14;
              if ( !*v14 )
                goto LABEL_1330;
              QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, 0);
              return;
            }
          }
          goto LABEL_1331;
        }
        switch ( id )
        {
          case 400:
            v63 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v63, 0);
            if ( !v63 )
              goto LABEL_1330;
            *(_QWORD *)(v63 + 24) = v5;
            v70 = v63 + 24;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v63 + 24), v5, v64, v65, v66, v67, v68, v69);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v71 = *(_QWORD *)(updated + 24);
            v72 = updated;
            if ( v71 )
            {
              if ( !(_DWORD)v71 )
                goto LABEL_1331;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              v73 = updated;
              if ( *(int *)(v72 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v72 + 40), 0);
                v74 = (int)updated < 1;
                if ( *(int *)(v72 + 24) < 3 )
                {
                  v75 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v72 + 48), 0);
                  v75 = (int)updated > 0;
                }
                goto LABEL_1128;
              }
            }
            else
            {
              v73 = 0;
            }
            v75 = 0;
            v74 = 1;
LABEL_1128:
            if ( !*(_QWORD *)v70 )
              goto LABEL_1330;
            updated = *(_QWORD *)(*(_QWORD *)v70 + 24LL);
            if ( !updated )
              goto LABEL_1330;
            v683 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v73,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v63 + 16) = v683;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v63 + 16), (int32_t)v683, v684, v685, v686, v687, v688, v689);
            v690 = *(UnityEngine_Object_o **)(v63 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v690, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v691 = *(MapGimmickComponent_o **)(v63 + 16);
            if ( !v691 )
              goto LABEL_1330;
            v691->fields.isForceNotActive = v75;
            v692 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            v693 = v692;
            if ( v74 )
            {
              System_Action___ctor(
                v692,
                (Il2CppObject *)v63,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0);
              v475 = 2;
              v694 = v691;
              v695 = v693;
LABEL_1237:
              MapGimmickComponent__SetState(v694, v475, v695, 0);
              return;
            }
            System_Action___ctor(
              v692,
              (Il2CppObject *)v63,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0);
            MapGimmickComponent__SetState(v691, 2, v693, 0);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v787 = *(_QWORD *)(v63 + 24);
            if ( !v787 )
              goto LABEL_1330;
            goto LABEL_1242;
          case 401:
            v383 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v383, 0);
            if ( !v383 )
              goto LABEL_1330;
            *(_QWORD *)(v383 + 24) = v5;
            v390 = v383 + 24;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v383 + 24), v5, v384, v385, v386, v387, v388, v389);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v391 = *(_QWORD *)(updated + 24);
            v392 = updated;
            if ( v391 )
            {
              if ( !(_DWORD)v391 )
                goto LABEL_1331;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              v393 = updated;
              if ( *(int *)(v392 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v392 + 40), 0);
                v394 = (int)updated < 1;
                if ( *(int *)(v392 + 24) < 3 )
                {
                  v395 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v392 + 48), 0);
                  v395 = (int)updated > 0;
                }
                goto LABEL_1138;
              }
            }
            else
            {
              v393 = 0;
            }
            v395 = 0;
            v394 = 1;
LABEL_1138:
            if ( !*(_QWORD *)v390 )
              goto LABEL_1330;
            updated = *(_QWORD *)(*(_QWORD *)v390 + 24LL);
            if ( !updated )
              goto LABEL_1330;
            v696 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v393,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v383 + 16) = v696;
            v697 = (MapGimmickComponent_o **)(v383 + 16);
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v383 + 16), (int32_t)v696, v698, v699, v700, v701, v702, v703);
            v704 = *(UnityEngine_Object_o **)(v383 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v704, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v705 = *v697;
            if ( !*v697 )
              goto LABEL_1330;
            v705->fields.isForceLoop = v395;
            v705->fields.isForceNotActive = 0;
            if ( *(int *)(v392 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v392 + 56), 0);
              if ( !*v697 )
                goto LABEL_1330;
              MapGimmickComponent__SetUseAnimNum(*v697, updated, 1, 0);
              v705 = *v697;
            }
            v706 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            v448 = v706;
            if ( v394 )
            {
              System_Action___ctor(
                v706,
                (Il2CppObject *)v383,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0);
              if ( !v705 )
                goto LABEL_1330;
              v475 = 3;
              v694 = v705;
LABEL_1236:
              v695 = v448;
              goto LABEL_1237;
            }
            System_Action___ctor(
              v706,
              (Il2CppObject *)v383,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0);
            if ( !v705 )
              goto LABEL_1330;
            MapGimmickComponent__SetState(v705, 3, v448, 0);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v787 = *(_QWORD *)v390;
            if ( !*(_QWORD *)v390 )
              goto LABEL_1330;
LABEL_1242:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
              this,
              *(_QWORD *)(v787 + 24),
              this->klass->vtable._13_UpdateAnim.method);
            return;
          case 402:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v371 = *(_QWORD *)(updated + 24);
            v372 = updated;
            if ( v371 )
            {
              if ( !(_DWORD)v371 )
                goto LABEL_1331;
              v373 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v372 + 24) >= 2 )
              {
                v374 = System_Int32__Parse(*(System_String_o **)(v372 + 40), 0) > 0;
                goto LABEL_1110;
              }
            }
            else
            {
              v373 = 0;
            }
            v374 = 0;
LABEL_1110:
            updated = *v14;
            if ( !*v14 )
              goto LABEL_1330;
            v680 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v373,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v680, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v680 )
                goto LABEL_1330;
              BYTE1(v680[6].monitor) = v374;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v680, 0, 0);
              m_CachedPtr = (intptr_t)v680[7].klass;
              if ( !m_CachedPtr )
                goto LABEL_1330;
LABEL_1200:
              *(_DWORD *)(m_CachedPtr + 16) = 0;
              goto LABEL_21;
            }
            return;
          case 403:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v375 = *(_QWORD *)(updated + 24);
            v376 = updated;
            if ( v375 )
            {
              if ( !(_DWORD)v375 )
                goto LABEL_1331;
              v377 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v376 + 24) >= 2 )
              {
                v378 = System_Int32__Parse(*(System_String_o **)(v376 + 40), 0) > 0;
                goto LABEL_1119;
              }
            }
            else
            {
              v377 = 0;
            }
            v378 = 0;
LABEL_1119:
            updated = *v14;
            if ( !*v14 )
              goto LABEL_1330;
            v681 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v377,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v681, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v681 )
                goto LABEL_1330;
              LOBYTE(v681[6].monitor) = v378;
              BYTE1(v681[6].monitor) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v681, 1, 0);
              v682 = v681[7].klass;
              if ( !v682 )
                goto LABEL_1330;
              LODWORD(v682->_1.name) = 1;
              goto LABEL_21;
            }
            return;
          case 404:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v351 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_1230;
            v352 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
            if ( !*(_DWORD *)(v351 + 24) )
              goto LABEL_1331;
            v353 = (QuestAfterAction_o *)*v14;
            v354 = v352;
            updated = System_Int32__Parse(*(System_String_o **)(v351 + 32), 0);
            if ( !v353 )
              goto LABEL_1330;
            v355 = QuestAfterAction__GetMapComponent_object_(
                     v353,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v355, 0, 0) )
              return;
            v356 = *(int *)(v351 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v351 + 72), 0) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v807 = **(_QWORD **)(updated + 184);
            if ( !v807 )
              goto LABEL_1330;
            if ( *(_DWORD *)(v351 + 24) <= 1u )
              goto LABEL_1331;
            v808 = *(ScrTerminalMap_o **)(v807 + 264);
            v809 = System_Single__Parse(*(System_String_o **)(v351 + 40), 0);
            if ( *(_DWORD *)(v351 + 24) <= 2u )
              goto LABEL_1331;
            v810 = v809;
            v811 = System_Single__Parse(*(System_String_o **)(v351 + 48), 0);
            if ( !v808 )
              goto LABEL_1330;
            v875 = ScrTerminalMap__LocalPosFromCoord(v808, v810, v811, 0.0, 0.0, 0);
            if ( *(_DWORD *)(v351 + 24) <= 4u )
              goto LABEL_1331;
            x = v875.fields.x;
            y = v875.fields.y;
            z = v875.fields.z;
            v815 = v354 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v351 + 64), 0);
            v816 = updated;
            if ( v356 )
            {
              if ( !v355 )
                goto LABEL_1330;
              v876.fields.x = x;
              v876.fields.y = y;
              v876.fields.z = z;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v355, v876, v815, updated, 0, 0);
              goto LABEL_1230;
            }
            v817 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(v817, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v355 )
              goto LABEL_1330;
            v780 = (MapGimmickComponent_o *)v355;
            v781 = x;
            v782 = y;
            v783 = z;
            v784 = v815;
            v785 = v816;
            v786 = v817;
LABEL_1304:
            MapGimmickComponent__SetMoveAnim(v780, *(UnityEngine_Vector3_o *)&v781, v784, v785, v786, 0);
            return;
          case 405:
            v396 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v396, 0);
            if ( !v396 )
              goto LABEL_1330;
            *(_QWORD *)(v396 + 24) = v5;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v396 + 24), v5, v397, v398, v399, v400, v401, v402);
            v403 = *(_QWORD *)(v396 + 24);
            if ( !v403 )
              goto LABEL_1330;
            v404 = *(QuestAfterAction_o **)(v403 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v404 )
              goto LABEL_1330;
            v405 = QuestAfterAction__GetMapComponent_object_(
                     v404,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v396 + 16) = v405;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v396 + 16), (int32_t)v405, v406, v407, v408, v409, v410, v411);
            v412 = *(UnityEngine_Object_o **)(v396 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v412, 0, 0) )
              return;
            v413 = *(MapGimmickComponent_o **)(v396 + 16);
            v414 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v414,
              (Il2CppObject *)v396,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0);
            if ( !v413 )
              goto LABEL_1330;
            MapGimmickComponent__SetState(v413, 3, v414, 0);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v415 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v415 )
              goto LABEL_1330;
            v416 = v415;
            v417 = 0;
            v418 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_923;
          case 406:
            v419 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v419, 0);
            if ( !v419 )
              goto LABEL_1330;
            *(_QWORD *)(v419 + 32) = v5;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v419 + 32), v5, v420, v421, v422, v423, v424, v425);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            v426 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            *(_QWORD *)(v419 + 24) = v426;
            v427 = (__int64 *)(v419 + 24);
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v419 + 24), (int32_t)v426, v428, v429, v430, v431, v432, v433);
            v434 = *(_QWORD *)(v419 + 32);
            if ( !v434 )
              goto LABEL_1330;
            v435 = *v427;
            if ( !*v427 )
              goto LABEL_1330;
            if ( !*(_DWORD *)(v435 + 24) )
              goto LABEL_1331;
            v436 = *(QuestAfterAction_o **)(v434 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v435 + 32), 0);
            if ( !v436 )
              goto LABEL_1330;
            v437 = QuestAfterAction__GetMapComponent_object_(
                     v436,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v419 + 16) = v437;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v419 + 16), (int32_t)v437, v438, v439, v440, v441, v442, v443);
            v444 = *(UnityEngine_Object_o **)(v419 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v444, 0, 0) )
              return;
            v445 = *(MapGimmickComponent_o **)(v419 + 16);
            v446 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            v447 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v448 = v446;
            goto LABEL_680;
          case 407:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v379 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1331;
            v380 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v380 )
              goto LABEL_1330;
            v381 = QuestAfterAction__GetMapComponent_object_(
                     v380,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v381, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v381 )
              goto LABEL_1330;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v381, 0);
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_32A86A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v379 + 24) <= 1u )
              goto LABEL_1331;
            v382 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v379 + 40), &color, 0);
            if ( !v382 )
              goto LABEL_1330;
            UIWidget__set_color(v382, color, 0);
            goto LABEL_1230;
          case 408:
            v419 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v419, 0);
            if ( !v419 )
              goto LABEL_1330;
            *(_QWORD *)(v419 + 24) = v5;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v419 + 24), v5, v456, v457, v458, v459, v460, v461);
            v462 = *(_QWORD *)(v419 + 24);
            if ( !v462 )
              goto LABEL_1330;
            v463 = *(QuestAfterAction_o **)(v462 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v463 )
              goto LABEL_1330;
            v464 = QuestAfterAction__GetMapComponent_object_(
                     v463,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v419 + 16) = v464;
            v465 = v419 + 16;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v419 + 16), (int32_t)v464, v466, v467, v468, v469, v470, v471);
            v472 = *(UnityEngine_Object_o **)(v419 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v472, 0, 0) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v465 || !updated )
              goto LABEL_1330;
            v473 = QuestTree__CheckMapGimmickCond_37821212(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v465 + 112LL),
                     0);
            v445 = *(MapGimmickComponent_o **)v465;
            v474 = v473;
            v446 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            v448 = v446;
            if ( v474 )
            {
              v447 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_680:
              System_Action___ctor(v446, (Il2CppObject *)v419, *v447, 0);
              if ( !v445 )
                goto LABEL_1330;
              v475 = 3;
            }
            else
            {
              System_Action___ctor(
                v446,
                (Il2CppObject *)v419,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0);
              if ( !v445 )
                goto LABEL_1330;
              v475 = 2;
            }
            v694 = v445;
            goto LABEL_1236;
          case 409:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v362 = *(_QWORD *)(updated + 24);
            v363 = updated;
            if ( v362 )
            {
              if ( !(_DWORD)v362 )
                goto LABEL_1331;
              v364 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v363 + 24) >= 2 )
              {
                v365 = System_Int32__Parse(*(System_String_o **)(v363 + 40), 0) > 0;
                goto LABEL_1101;
              }
            }
            else
            {
              v364 = 0;
            }
            v365 = 0;
LABEL_1101:
            updated = *v14;
            if ( !*v14 )
              goto LABEL_1330;
            v676 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v364,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v676, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v676 )
                goto LABEL_1330;
              LOBYTE(v676[6].monitor) = v365;
              BYTE1(v676[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v676, 1, 0);
              v677 = v676[7].klass;
              if ( !v677 )
                goto LABEL_1330;
              LODWORD(v677->_1.name) = 1;
              v678 = this->klass;
              this->fields.IsAnimDoing = 0;
              v679 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v678->vtable._11_get_CommandIndex.methodPtr)(
                       this,
                       v678->vtable._11_get_CommandIndex.method);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
                this,
                (unsigned int)(v679 + 1),
                this->klass->vtable._12_set_CommandIndex.method);
              goto LABEL_22;
            }
            return;
          case 410:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v343 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1230;
            v449 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v449 )
              goto LABEL_1330;
            v345 = QuestAfterAction__GetMapComponent_object_(
                     v449,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v345, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v343 + 24) <= 1u )
              goto LABEL_1331;
            v450 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v343 + 40), 0);
            if ( !v450 )
              goto LABEL_1330;
            v359 = updated;
            v361 = v450;
            v360 = 0;
            goto LABEL_648;
          case 411:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v343 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1230;
            v344 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v344 )
              goto LABEL_1330;
            v345 = QuestAfterAction__GetMapComponent_object_(
                     v344,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v345, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v343 + 24) <= 1u )
              goto LABEL_1331;
            v346 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v343 + 40), 0);
            if ( !v346 )
              goto LABEL_1330;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v346, 2, updated, this, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
            if ( *(_DWORD *)(v343 + 24) <= 2u )
              goto LABEL_1331;
            v348 = LocalPosition.fields.x;
            v349 = LocalPosition.fields.y;
            v350 = LocalPosition.fields.z;
            goto LABEL_662;
          case 412:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v343 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1230;
            v357 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v357 )
              goto LABEL_1330;
            v345 = QuestAfterAction__GetMapComponent_object_(
                     v357,
                     2,
                     updated,
                     this,
                     (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v345, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v343 + 24) <= 1u )
              goto LABEL_1331;
            v358 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v343 + 40), 0);
            if ( !v358 )
              goto LABEL_1330;
            v359 = updated;
            v360 = 1;
            v361 = v358;
LABEL_648:
            v451 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v361, v360, v359, this, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v451, 0, 0) )
              return;
            v862 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v451, 0);
            v348 = v862.fields.x;
            v349 = v862.fields.y;
            v350 = v862.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_661;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v452 = **(_QWORD **)(updated + 184);
            if ( !v452 )
              goto LABEL_1330;
            updated = *(_QWORD *)(v452 + 264);
            if ( !updated )
              goto LABEL_1330;
            v863.fields.x = v348;
            v863.fields.y = v349;
            v863.fields.z = v350;
            v864 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v863, 0);
            v348 = v864.fields.x;
            v349 = v864.fields.y;
            v350 = v864.fields.z;
LABEL_661:
            if ( *(_DWORD *)(v343 + 24) <= 2u )
              goto LABEL_1331;
LABEL_662:
            v453 = System_Single__Parse(*(System_String_o **)(v343 + 48), 0) * 0.001;
            if ( v453 >= 0.0 )
              v454 = v453;
            else
              v454 = 0.5;
            if ( *(_DWORD *)(v343 + 24) <= 3u )
              goto LABEL_1331;
            v455 = System_Int32__Parse(*(System_String_o **)(v343 + 56), 0);
            if ( *(int *)(v343 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v343 + 64), 0);
              if ( (int)updated >= 1 )
              {
                if ( !v345 )
                  goto LABEL_1330;
                v865.fields.x = v348;
                v865.fields.y = v349;
                v865.fields.z = v350;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v345, v865, v454, v455, 0, 0);
                goto LABEL_21;
              }
            }
            v779 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(v779, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v345 )
              goto LABEL_1330;
            v780 = (MapGimmickComponent_o *)v345;
            v781 = v348;
            v782 = v349;
            v783 = v350;
            v784 = v454;
            v785 = v455;
            v786 = v779;
            goto LABEL_1304;
          default:
            if ( id == 500 )
            {
              v366 = System_Int32__Parse(v23->fields.param, 0);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4E7419E )
              {
                sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                byte_4E7419E = 1;
              }
              v367 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v367 = TerminalPramsManager_TypeInfo;
              }
              v367->static_fields->_AfterActionFocusQuestId_k__BackingField = v366;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !updated )
                goto LABEL_1330;
              if ( DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                     &entity,
                     v366,
                     (const MethodInfo_3535BC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              {
                updated = (__int64)entity;
                if ( !entity )
                  goto LABEL_1330;
                v368 = (QuestAfterAction_o *)*v14;
                updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
                if ( !v368 )
                  goto LABEL_1330;
                v369 = QuestAfterAction__GetMapComponent_object_(
                         v368,
                         0,
                         updated,
                         this,
                         (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v369, 0, 0);
                if ( (updated & 1) != 0 )
                {
                  if ( !v369 )
                    goto LABEL_1330;
                  SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v369, 0, 0);
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4E7419F )
                  {
                    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
                    byte_4E7419F = 1;
                  }
                  v370 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v370 = TerminalPramsManager_TypeInfo;
                  }
                  v370->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
                }
              }
            }
            else
            {
              if ( id != 501 )
                goto LABEL_21;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4E7125B )
              {
                sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                byte_4E7125B = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v155 = **(_QWORD **)(updated + 184);
              if ( !v155 )
                goto LABEL_1330;
              updated = *(_QWORD *)(v155 + 256);
              if ( !updated )
                goto LABEL_1330;
              updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
              if ( !updated )
                goto LABEL_1330;
              v156 = (PlayMakerFSM_o *)updated;
              ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
              if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3327/*"CAPTER WAIT"*/, 0) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4E7125B )
                {
                  sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                  byte_4E7125B = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v158 = **(_QWORD **)(updated + 184);
                if ( !v158 )
                  goto LABEL_1330;
                v159 = *(_QWORD *)(v158 + 256);
                if ( !v159 )
                  goto LABEL_1330;
                v160 = *(QuestBoardListViewManager_o **)(v159 + 320);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                  updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                }
                v161 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
                if ( !v161 )
                {
                  if ( !*(_DWORD *)(updated + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(updated);
                    updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                  }
                  v162 = **(Il2CppObject ***)(updated + 184);
                  v161 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                  System_Action___ctor(v161, v162, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
                  v163 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                  v163->__9__16_22 = v161;
                  sub_1D0F058(
                    (GrandQuestFolderBoardItem_o *)&v163->__9__16_22,
                    (int32_t)v161,
                    v164,
                    v165,
                    v166,
                    v167,
                    v168,
                    v169);
                }
                if ( !v160 )
                  goto LABEL_1330;
                QuestBoardListViewManager__SetMode(v160, 4, v161, 0, 0, 0, 0);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4E7125B )
                {
                  sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                  byte_4E7125B = 1;
                }
                v170 = TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v170 = TerminalSceneComponent_TypeInfo;
                }
                updated = (__int64)v170->static_fields->mInstance;
                if ( !updated )
                  goto LABEL_1330;
                TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
                PlayMakerFSM__SendEvent(v156, (System_String_o *)StringLiteral_20229/*"gevINFOBAR_BACK"*/, 0);
              }
            }
            goto LABEL_1230;
        }
      }
      if ( id <= 208 )
      {
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v115 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              System_Object___ctor((Il2CppObject *)v115, 0);
              if ( !v115 )
                goto LABEL_1330;
              *(_QWORD *)(v115 + 24) = v5;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v115 + 24), v5, v116, v117, v118, v119, v120, v121);
              v122 = *(_QWORD *)(v115 + 24);
              if ( !v122 )
                goto LABEL_1330;
              v123 = *(QuestAfterAction_o **)(v122 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v123 )
                goto LABEL_1330;
              v124 = QuestAfterAction__GetMapComponent_object_(
                       v123,
                       1,
                       updated,
                       this,
                       (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v115 + 16) = v124;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v115 + 16), (int32_t)v124, v125, v126, v127, v128, v129, v130);
              v131 = *(UnityEngine_Object_o **)(v115 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v131, 0, 0) )
              {
                v132 = *(ModelLineComponent_o **)(v115 + 16);
                v133 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v133,
                  (Il2CppObject *)v115,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0);
                if ( !v132 )
                  goto LABEL_1330;
                v134 = 2;
                goto LABEL_852;
              }
            }
            else
            {
              v734 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              System_Object___ctor((Il2CppObject *)v734, 0);
              if ( !v734 )
                goto LABEL_1330;
              *(_QWORD *)(v734 + 24) = v5;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v734 + 24), v5, v735, v736, v737, v738, v739, v740);
              v741 = *(_QWORD *)(v734 + 24);
              if ( !v741 )
                goto LABEL_1330;
              v742 = *(QuestAfterAction_o **)(v741 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v742 )
                goto LABEL_1330;
              v743 = QuestAfterAction__GetMapComponent_object_(
                       v742,
                       1,
                       updated,
                       this,
                       (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v734 + 16) = v743;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v734 + 16), (int32_t)v743, v744, v745, v746, v747, v748, v749);
              v750 = *(UnityEngine_Object_o **)(v734 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v750, 0, 0) )
              {
                v730 = *(srcLineSprite_o **)(v734 + 16);
                v731 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v731,
                  (Il2CppObject *)v734,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0);
                if ( !v730 )
                  goto LABEL_1330;
                v732 = -1.0;
                v733 = 2;
                goto LABEL_1188;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v587 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              System_Object___ctor((Il2CppObject *)v587, 0);
              if ( !v587 )
                goto LABEL_1330;
              *(_QWORD *)(v587 + 24) = v5;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v587 + 24), v5, v588, v589, v590, v591, v592, v593);
              v594 = *(_QWORD *)(v587 + 24);
              if ( !v594 )
                goto LABEL_1330;
              v595 = *(QuestAfterAction_o **)(v594 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v595 )
                goto LABEL_1330;
              v596 = QuestAfterAction__GetMapComponent_object_(
                       v595,
                       1,
                       updated,
                       this,
                       (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v587 + 16) = v596;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v587 + 16), (int32_t)v596, v597, v598, v599, v600, v601, v602);
              v603 = *(UnityEngine_Object_o **)(v587 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v603, 0, 0) )
              {
                v132 = *(ModelLineComponent_o **)(v587 + 16);
                v133 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v133,
                  (Il2CppObject *)v587,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0);
                if ( !v132 )
                  goto LABEL_1330;
                v134 = 3;
                goto LABEL_852;
              }
            }
            else
            {
              v751 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              System_Object___ctor((Il2CppObject *)v751, 0);
              if ( !v751 )
                goto LABEL_1330;
              *(_QWORD *)(v751 + 24) = v5;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v751 + 24), v5, v752, v753, v754, v755, v756, v757);
              v758 = *(_QWORD *)(v751 + 24);
              if ( !v758 )
                goto LABEL_1330;
              v759 = *(QuestAfterAction_o **)(v758 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v759 )
                goto LABEL_1330;
              v760 = QuestAfterAction__GetMapComponent_object_(
                       v759,
                       1,
                       updated,
                       this,
                       (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v751 + 16) = v760;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v751 + 16), (int32_t)v760, v761, v762, v763, v764, v765, v766);
              v767 = *(UnityEngine_Object_o **)(v751 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v767, 0, 0) )
              {
                v730 = *(srcLineSprite_o **)(v751 + 16);
                v731 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v731,
                  (Il2CppObject *)v751,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0);
                if ( !v730 )
                  goto LABEL_1330;
                v732 = -1.0;
                v733 = 3;
                goto LABEL_1188;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v564 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              System_Object___ctor((Il2CppObject *)v564, 0);
              if ( !v564 )
                goto LABEL_1330;
              *(_QWORD *)(v564 + 24) = v5;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v564 + 24), v5, v565, v566, v567, v568, v569, v570);
              v571 = *(_QWORD *)(v564 + 24);
              if ( !v571 )
                goto LABEL_1330;
              v572 = *(QuestAfterAction_o **)(v571 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v572 )
                goto LABEL_1330;
              v573 = QuestAfterAction__GetMapComponent_object_(
                       v572,
                       1,
                       updated,
                       this,
                       (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v564 + 16) = v573;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v564 + 16), (int32_t)v573, v574, v575, v576, v577, v578, v579);
              v580 = *(UnityEngine_Object_o **)(v564 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v580, 0, 0) )
              {
                v132 = *(ModelLineComponent_o **)(v564 + 16);
                v133 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v133,
                  (Il2CppObject *)v564,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0);
                if ( !v132 )
                  goto LABEL_1330;
                v134 = 4;
LABEL_852:
                ModelLineComponent__SetState(v132, v134, v133, 0);
              }
            }
            else
            {
              v713 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              System_Object___ctor((Il2CppObject *)v713, 0);
              if ( !v713 )
                goto LABEL_1330;
              *(_QWORD *)(v713 + 24) = v5;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v713 + 24), v5, v714, v715, v716, v717, v718, v719);
              v720 = *(_QWORD *)(v713 + 24);
              if ( !v720 )
                goto LABEL_1330;
              v721 = *(QuestAfterAction_o **)(v720 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v721 )
                goto LABEL_1330;
              v722 = QuestAfterAction__GetMapComponent_object_(
                       v721,
                       1,
                       updated,
                       this,
                       (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v713 + 16) = v722;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v713 + 16), (int32_t)v722, v723, v724, v725, v726, v727, v728);
              v729 = *(UnityEngine_Object_o **)(v713 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v729, 0, 0) )
              {
                v730 = *(srcLineSprite_o **)(v713 + 16);
                v731 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v731,
                  (Il2CppObject *)v713,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0);
                if ( !v730 )
                  goto LABEL_1330;
                v732 = -1.0;
                v733 = 4;
LABEL_1188:
                srcLineSprite__SetState(v730, v733, v731, v732, 0);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v582 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v582 )
              goto LABEL_1330;
            if ( IsMapModel )
            {
              v583 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v582,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v583, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v583 )
                goto LABEL_1330;
              ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v583, 0, 0);
              m_CachedPtr = (intptr_t)v583[3].klass;
              if ( !m_CachedPtr )
                goto LABEL_1330;
            }
            else
            {
              v770 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v582,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v770, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v770 )
                goto LABEL_1330;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v770, 0, 0);
              m_CachedPtr = v770[5].fields.m_CachedPtr;
              if ( !m_CachedPtr )
                goto LABEL_1330;
            }
            goto LABEL_1200;
          case 204:
            v560 = this->fields.IsMapModel;
            v561 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v561 )
              goto LABEL_1330;
            if ( v560 )
            {
              v562 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v561,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v562, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v562 )
                goto LABEL_1330;
              ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v562, 1, 0);
              ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v562, 0, 0);
              v563 = (intptr_t)v562[3].klass;
              if ( !v563 )
                goto LABEL_1330;
            }
            else
            {
              v768 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v561,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v768, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v768 )
                goto LABEL_1330;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v768, 1, 0);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v768, 0, 0);
              v563 = v768[5].fields.m_CachedPtr;
              if ( !v563 )
                goto LABEL_1330;
            }
            v769 = 2;
            goto LABEL_1207;
          case 205:
            v604 = this->fields.IsMapModel;
            v605 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v605 )
              goto LABEL_1330;
            if ( v604 )
            {
              v606 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v605,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v606, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v606 )
                goto LABEL_1330;
              ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v606, 1, 0);
              ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v606, 1, 0);
              v563 = (intptr_t)v606[3].klass;
              if ( !v563 )
                goto LABEL_1330;
            }
            else
            {
              v771 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v605,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v771, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v771 )
                goto LABEL_1330;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v771, 1, 0);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v771, 1, 0);
              v563 = v771[5].fields.m_CachedPtr;
              if ( !v563 )
                goto LABEL_1330;
            }
            v769 = 1;
LABEL_1207:
            *(_DWORD *)(v563 + 16) = v769;
            goto LABEL_21;
          case 206:
            v585 = 5;
            v607 = this;
            v608 = v23;
            v586 = 0;
            goto LABEL_864;
          case 207:
            v585 = 6;
            v586 = 2;
            goto LABEL_863;
          case 208:
            v585 = 7;
            v586 = 1;
LABEL_863:
            v607 = this;
            v608 = v23;
LABEL_864:
            QuestAfterAction_StateMain__FadeRoad(v607, v608, v585, v586, v30);
            return;
          default:
            switch ( id )
            {
              case 'd':
                v81 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
                System_Object___ctor((Il2CppObject *)v81, 0);
                if ( !v81 )
                  goto LABEL_1330;
                *(_QWORD *)(v81 + 24) = v5;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v81 + 24), v5, v82, v83, v84, v85, v86, v87);
                v88 = *(_QWORD *)(v81 + 24);
                if ( !v88 )
                  goto LABEL_1330;
                v89 = *(QuestAfterAction_o **)(v88 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v89 )
                  goto LABEL_1330;
                v90 = QuestAfterAction__GetMapComponent_object_(
                        v89,
                        0,
                        updated,
                        this,
                        (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                *(_QWORD *)(v81 + 16) = v90;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v81 + 16), (int32_t)v90, v91, v92, v93, v94, v95, v96);
                v97 = *(UnityEngine_Object_o **)(v81 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality(v97, 0, 0) )
                  return;
                v98 = *(SrcSpotBasePrefab_o **)(v81 + 16);
                v99 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v99,
                  (Il2CppObject *)v81,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
                  0);
                if ( !v98 )
                  goto LABEL_1330;
                v100 = 2;
                goto LABEL_789;
              case 'e':
                v516 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
                System_Object___ctor((Il2CppObject *)v516, 0);
                if ( !v516 )
                  goto LABEL_1330;
                *(_QWORD *)(v516 + 24) = v5;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v516 + 24), v5, v517, v518, v519, v520, v521, v522);
                v523 = *(_QWORD *)(v516 + 24);
                if ( !v523 )
                  goto LABEL_1330;
                v524 = *(QuestAfterAction_o **)(v523 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v524 )
                  goto LABEL_1330;
                v525 = QuestAfterAction__GetMapComponent_object_(
                         v524,
                         0,
                         updated,
                         this,
                         (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                *(_QWORD *)(v516 + 16) = v525;
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)(v516 + 16),
                  (int32_t)v525,
                  v526,
                  v527,
                  v528,
                  v529,
                  v530,
                  v531);
                v532 = *(UnityEngine_Object_o **)(v516 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality(v532, 0, 0) )
                  return;
                v98 = *(SrcSpotBasePrefab_o **)(v516 + 16);
                v99 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v99,
                  (Il2CppObject *)v516,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
                  0);
                if ( !v98 )
                  goto LABEL_1330;
                v100 = 3;
LABEL_789:
                SrcSpotBasePrefab__SetState(v98, v100, v99, 0);
                return;
              case 'f':
                v533 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
                System_Object___ctor((Il2CppObject *)v533, 0);
                if ( !v533 )
                  goto LABEL_1330;
                *(_QWORD *)(v533 + 24) = v5;
                v540 = v533 + 24;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v533 + 24), v5, v534, v535, v536, v537, v538, v539);
                if ( !*(_QWORD *)(v533 + 24) )
                  goto LABEL_1330;
                v541 = *(QuestAfterAction_o **)(*(_QWORD *)(v533 + 24) + 24LL);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v541 )
                  goto LABEL_1330;
                v542 = QuestAfterAction__GetMapComponent_object_(
                         v541,
                         0,
                         updated,
                         this,
                         (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                *(_QWORD *)(v533 + 16) = v542;
                v543 = (__int64 *)(v533 + 16);
                sub_1D0F058(
                  (GrandQuestFolderBoardItem_o *)(v533 + 16),
                  (int32_t)v542,
                  v544,
                  v545,
                  v546,
                  v547,
                  v548,
                  v549);
                v550 = *(UnityEngine_Object_o **)(v533 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality(v550, 0, 0) )
                  return;
                v551 = *(SrcSpotBasePrefab_o **)(v533 + 16);
                v552 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(
                  v552,
                  (Il2CppObject *)v533,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
                  0);
                if ( !v551 )
                  goto LABEL_1330;
                SrcSpotBasePrefab__SetState(v551, 4, v552, 0);
                if ( !*(_QWORD *)v540 )
                  goto LABEL_1330;
                updated = *(_QWORD *)(*(_QWORD *)v540 + 24LL);
                if ( !updated )
                  goto LABEL_1330;
                v515 = *v543;
                *(_QWORD *)(updated + 184) = *v543;
                v514 = (GrandQuestFolderBoardItem_o *)(updated + 184);
                goto LABEL_800;
              case 'g':
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1330;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1330;
                v504 = updated;
                if ( *(int *)(updated + 24) <= 1 )
                  goto LABEL_1230;
                v505 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( !v505 )
                  goto LABEL_1330;
                v506 = QuestAfterAction__GetMapComponent_object_(
                         v505,
                         0,
                         updated,
                         this,
                         (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v506, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( *(_DWORD *)(v504 + 24) <= 1u )
                  goto LABEL_1331;
                updated = System_Int32__Parse(*(System_String_o **)(v504 + 40), 0);
                if ( !v506 )
                  goto LABEL_1330;
                LODWORD(v506[14].klass) = updated;
                v507 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
                System_Action___ctor(v507, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v506, 5, v507, 0);
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1330;
                *(_QWORD *)(updated + 184) = v506;
                v514 = (GrandQuestFolderBoardItem_o *)(updated + 184);
                LODWORD(v515) = (_DWORD)v506;
LABEL_800:
                sub_1D0F058(v514, v515, v508, v509, v510, v511, v512, v513);
                return;
              case 'n':
                v557 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v557 )
                  goto LABEL_1330;
                v558 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v557,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v558, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v558 )
                  goto LABEL_1330;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v558, 0, 0);
                v559 = v558[9].fields.m_CachedPtr;
                if ( !v559 )
                  goto LABEL_1330;
                *(_DWORD *)(v559 + 20) = 0;
                v556 = (SrcSpotBasePrefab_o *)v558;
                v555 = 0;
                goto LABEL_816;
              case 'o':
                v501 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v501 )
                  goto LABEL_1330;
                v502 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v501,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v502, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v502 )
                  goto LABEL_1330;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v502, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v502, 0, 0);
                v503 = v502[9].fields.m_CachedPtr;
                if ( !v503 )
                  goto LABEL_1330;
                *(_DWORD *)(v503 + 20) = 2;
                goto LABEL_808;
              case 'p':
                v553 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v553 )
                  goto LABEL_1330;
                v502 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v553,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v502, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v502 )
                  goto LABEL_1330;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v502, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v502, 1, 0);
                v554 = v502[9].fields.m_CachedPtr;
                if ( !v554 )
                  goto LABEL_1330;
                *(_DWORD *)(v554 + 20) = 1;
LABEL_808:
                v555 = 1;
                v556 = (SrcSpotBasePrefab_o *)v502;
LABEL_816:
                SrcSpotBasePrefab__SetTouchType(v556, v555, 0);
                goto LABEL_21;
              case 'q':
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1330;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1330;
                v498 = updated;
                if ( *(int *)(updated + 24) <= 1 )
                  goto LABEL_1230;
                v499 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( !v499 )
                  goto LABEL_1330;
                v500 = QuestAfterAction__GetMapComponent_object_(
                         v499,
                         0,
                         updated,
                         this,
                         (const MethodInfo_32EA1F8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v500, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( *(_DWORD *)(v498 + 24) <= 1u )
                  goto LABEL_1331;
                updated = System_Int32__Parse(*(System_String_o **)(v498 + 40), 0);
                if ( !v500 )
                  goto LABEL_1330;
                LODWORD(v500[14].klass) = updated;
                SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v500, 1, 0);
                break;
              default:
                goto LABEL_21;
            }
            goto LABEL_21;
        }
      }
      switch ( id )
      {
        case 300:
        case 305:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1330;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1330;
          v39 = *(_QWORD *)(updated + 24);
          v40 = updated;
          if ( (int)v39 <= 0 )
            goto LABEL_1230;
          if ( (int)v39 > 2 )
          {
            v486 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
            v39 = *(_QWORD *)(v40 + 24);
            v41 = v486 * 0.001;
          }
          else
          {
            v41 = 0.5;
          }
          sec = v41;
          if ( (int)v39 >= 2 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
            v39 = *(_QWORD *)(v40 + 24);
            v176 = updated;
          }
          else
          {
            v176 = 15;
          }
          if ( !(_DWORD)v39 )
            goto LABEL_1331;
          v488 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 32), 0);
          if ( !v488 )
            goto LABEL_1330;
          v489 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v488, 0, updated, this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v489, 0, 0) )
            return;
          v869 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v489, 0);
          v480 = v869.fields.x;
          v481 = v869.fields.y;
          v482 = v869.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_729;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4E7125B )
          {
            sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
            byte_4E7125B = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v490 = **(_QWORD **)(updated + 184);
          if ( !v490 )
            goto LABEL_1330;
          updated = *(_QWORD *)(v490 + 264);
          if ( !updated )
            goto LABEL_1330;
          v870.fields.x = v480;
          v870.fields.y = v481;
          v870.fields.z = v482;
          v871 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v870, 0);
          v480 = v871.fields.x;
          v481 = v871.fields.y;
          v482 = v871.fields.z;
LABEL_729:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          updated = FSUtility__IsUnderVista(0);
          if ( (updated & 1) != 0 )
            goto LABEL_1249;
          if ( !*(_DWORD *)(v40 + 24) )
            goto LABEL_1331;
          v491 = *(System_String_o **)(v40 + 32);
          updated = System_String__op_Equality(v491, (System_String_o *)StringLiteral_1303/*"10703"*/, 0);
          if ( (updated & 1) != 0 )
          {
            v481 = v481 + -50.0;
          }
          else
          {
            updated = System_String__op_Equality(v491, (System_String_o *)StringLiteral_1377/*"30101"*/, 0);
            if ( (updated & 1) != 0 )
              v481 = v481 + -50.0;
          }
LABEL_1249:
          v484 = *(_DWORD *)(v40 + 24);
          if ( v23->fields.id != 305 )
          {
LABEL_1250:
            if ( v484 < 4 )
              goto LABEL_1251;
            updated = System_Int32__Parse(*(System_String_o **)(v40 + 56), 0);
            v797 = *v14;
            if ( !*v14 )
              goto LABEL_1330;
            v796 = *(MapCamera_o **)(v797 + 152);
            if ( (int)updated < 1 )
              goto LABEL_1253;
            if ( !v796 )
              goto LABEL_1330;
            v798 = *(MapCamera_o **)(v797 + 152);
            v799 = v480;
            v800 = v481;
            v801 = v482;
            goto LABEL_1279;
          }
LABEL_702:
          if ( v484 < 4 )
          {
LABEL_1251:
            if ( !*v14 )
              goto LABEL_1330;
            v796 = *(MapCamera_o **)(*v14 + 152);
LABEL_1253:
            v317 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(v317, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v796 )
              goto LABEL_1330;
            v318 = v796;
            v319 = v480;
            v320 = v481;
            v321 = v482;
LABEL_1272:
            v322 = sec;
LABEL_1273:
            v323 = v176;
LABEL_1274:
            MapCamera__StartAutoMove(v318, *(UnityEngine_Vector3_o *)&v319, v322, v323, v317, 0);
            return;
          }
          if ( v484 == 4 )
          {
            if ( !*v14 )
              goto LABEL_1330;
            v485 = *(MapCamera_o **)(*v14 + 152);
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v40 + 64), 0);
            if ( !*v14 )
              goto LABEL_1330;
            v485 = *(MapCamera_o **)(*v14 + 152);
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v790.fields.hasValue = &v843;
              v788 = v480;
              v789 = v481;
              *(_QWORD *)&v790.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v791 = v482;
              *(_OWORD *)&v843.fields._list = 0u;
LABEL_1308:
              System_Nullable_Vector3____ctor(v790, *(UnityEngine_Vector3_o *)&v788, v479);
              if ( *(_DWORD *)(v40 + 24) <= 3u )
                goto LABEL_1331;
              v818 = System_Single__Parse(*(System_String_o **)(v40 + 56), 0);
              p_size = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                p_size,
                v818,
                (const MethodInfo_3A869E8 *)Method_System_Nullable_float___ctor__);
              if ( !v485 )
                goto LABEL_1330;
              v820 = *(System_Nullable_Vector3__o *)&v843.fields._list;
              v821 = size;
              v822 = sec;
              v823 = v485;
LABEL_1311:
              MapCamera__StartAutoWork(v823, v822, v820, v821, v176, 0, 0);
              goto LABEL_1230;
            }
          }
          *(_QWORD *)&v794.fields.hasValue = &v843;
          v792 = v480;
          v793 = v481;
          *(_QWORD *)&v794.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v795 = v482;
          *(_OWORD *)&v843.fields._list = 0u;
          goto LABEL_1313;
        case 301:
        case 306:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1330;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1330;
          v188 = *(_QWORD *)(updated + 24);
          v40 = updated;
          if ( (int)v188 <= 0 )
            goto LABEL_1230;
          if ( (int)v188 > 2 )
          {
            v487 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
            v188 = *(_QWORD *)(v40 + 24);
            v189 = v487 * 0.001;
          }
          else
          {
            v189 = 0.5;
          }
          sec = v189;
          if ( (int)v188 >= 2 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
            v188 = *(_QWORD *)(v40 + 24);
            v176 = updated;
          }
          else
          {
            v176 = 15;
          }
          if ( !(_DWORD)v188 )
            goto LABEL_1331;
          v492 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 32), 0);
          if ( !v492 )
            goto LABEL_1330;
          v493 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v492, 1, updated, this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v493, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( this->fields.IsMapModel )
          {
            if ( !v493 )
              goto LABEL_1330;
            updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v493,
                                 (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( !updated )
              goto LABEL_1330;
            Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
            v494 = Position.fields.x;
            v495 = Position.fields.y;
            v496 = Position.fields.z;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v497 = **(_QWORD **)(updated + 184);
            if ( !v497 )
              goto LABEL_1330;
            updated = *(_QWORD *)(v497 + 264);
            if ( !updated )
              goto LABEL_1330;
            v873.fields.x = v494;
            v873.fields.y = v495;
            v873.fields.z = v496;
            v874 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, v873, 0);
          }
          else
          {
            v874 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v493, 0);
          }
          v709 = v874.fields.x;
          v710 = v874.fields.y;
          v711 = v874.fields.z;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          updated = FSUtility__IsUnderVista(0);
          if ( (updated & 1) != 0 )
            goto LABEL_1261;
          if ( !*(_DWORD *)(v40 + 24) )
            goto LABEL_1331;
          v712 = *(System_String_o **)(v40 + 32);
          updated = System_String__op_Equality(v712, (System_String_o *)StringLiteral_1303/*"10703"*/, 0);
          if ( (updated & 1) != 0 )
          {
            v710 = v710 + -95.0;
          }
          else
          {
            updated = System_String__op_Equality(v712, (System_String_o *)StringLiteral_1378/*"30102"*/, 0);
            if ( (updated & 1) != 0 )
              v710 = v710 + 45.0;
          }
LABEL_1261:
          v802 = *(_DWORD *)(v40 + 24);
          if ( v23->fields.id == 306 )
          {
            if ( v802 >= 4 )
            {
              if ( v802 == 4 )
              {
                if ( !*v14 )
                  goto LABEL_1330;
                v485 = *(MapCamera_o **)(*v14 + 152);
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v40 + 64), 0);
                if ( !*v14 )
                  goto LABEL_1330;
                v485 = *(MapCamera_o **)(*v14 + 152);
                if ( (int)updated >= 1 )
                {
                  *(_OWORD *)&v843.fields._list = 0u;
                  *(_QWORD *)&v790.fields.hasValue = &v843;
                  v788 = v709;
                  *(_QWORD *)&v790.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                  v789 = v710;
                  v791 = v711;
                  goto LABEL_1308;
                }
              }
              *(_OWORD *)&v843.fields._list = 0u;
              *(_QWORD *)&v794.fields.hasValue = &v843;
              v792 = v709;
              *(_QWORD *)&v794.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v793 = v710;
              v795 = v711;
LABEL_1313:
              System_Nullable_Vector3____ctor(v794, *(UnityEngine_Vector3_o *)&v792, v479);
              if ( *(_DWORD *)(v40 + 24) <= 3u )
                goto LABEL_1331;
              v824 = System_Single__Parse(*(System_String_o **)(v40 + 56), 0);
              v825 = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                v825,
                v824,
                (const MethodInfo_3A869E8 *)Method_System_Nullable_float___ctor__);
              v826 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(v826, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !v485 )
                goto LABEL_1330;
              v827 = *(System_Nullable_Vector3__o *)&v843.fields._list;
              v828 = size;
              v829 = sec;
              v830 = v485;
              goto LABEL_1316;
            }
          }
          else if ( v802 >= 4 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v40 + 56), 0);
            v804 = *v14;
            if ( !*v14 )
              goto LABEL_1330;
            v803 = *(MapCamera_o **)(v804 + 152);
            if ( (int)updated >= 1 )
            {
              if ( !v803 )
                goto LABEL_1330;
              v798 = *(MapCamera_o **)(v804 + 152);
              v799 = v709;
              v800 = v710;
              v801 = v711;
LABEL_1279:
              v805 = sec;
LABEL_1280:
              MapCamera__StartAutoMove(v798, *(UnityEngine_Vector3_o *)&v799, v805, v176, 0, 0);
              goto LABEL_1230;
            }
LABEL_1270:
            v317 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(v317, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v803 )
              goto LABEL_1330;
            v318 = v803;
            v319 = v709;
            v320 = v710;
            v321 = v711;
            goto LABEL_1272;
          }
          if ( !*v14 )
            goto LABEL_1330;
          v803 = *(MapCamera_o **)(*v14 + 152);
          goto LABEL_1270;
        case 302:
        case 307:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1330;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1330;
          v171 = *(_QWORD *)(updated + 24);
          v40 = updated;
          if ( (int)v171 <= 0 )
            goto LABEL_1230;
          if ( (int)v171 > 2 )
          {
            v476 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
            v171 = *(_QWORD *)(v40 + 24);
            v172 = v476 * 0.001;
          }
          else
          {
            v172 = 0.5;
          }
          sec = v172;
          if ( (int)v171 >= 2 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
            v171 = *(_QWORD *)(v40 + 24);
            v176 = updated;
          }
          else
          {
            v176 = 15;
          }
          if ( !(_DWORD)v171 )
            goto LABEL_1331;
          v477 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 32), 0);
          if ( !v477 )
            goto LABEL_1330;
          v478 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v477, 2, updated, this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v478, 0, 0) )
            return;
          v866 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v478, 0);
          v480 = v866.fields.x;
          v481 = v866.fields.y;
          v482 = v866.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_701;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4E7125B )
          {
            sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
            byte_4E7125B = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v483 = **(_QWORD **)(updated + 184);
          if ( !v483 )
            goto LABEL_1330;
          updated = *(_QWORD *)(v483 + 264);
          if ( !updated )
            goto LABEL_1330;
          v867.fields.x = v480;
          v867.fields.y = v481;
          v867.fields.z = v482;
          v868 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v867, 0);
          v480 = v868.fields.x;
          v481 = v868.fields.y;
          v482 = v868.fields.z;
LABEL_701:
          v484 = *(_DWORD *)(v40 + 24);
          if ( v23->fields.id == 307 )
            goto LABEL_702;
          goto LABEL_1250;
        case 303:
        case 308:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1330;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1330;
          v173 = updated;
          if ( *(int *)(updated + 24) < 4 )
            goto LABEL_1230;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4E7419D )
          {
            sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
            byte_4E7419D = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
            goto LABEL_1230;
          if ( *(_DWORD *)(v173 + 24) <= 2u )
            goto LABEL_1331;
          v174 = System_Single__Parse(*(System_String_o **)(v173 + 48), 0) * 0.001;
          v175 = v174 >= 0.0 ? v174 : 0.5;
          if ( *(_DWORD *)(v173 + 24) <= 3u )
            goto LABEL_1331;
          v176 = System_Int32__Parse(*(System_String_o **)(v173 + 56), 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4E7125B )
          {
            sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
            byte_4E7125B = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v177 = **(_QWORD **)(updated + 184);
          if ( !v177 )
            goto LABEL_1330;
          if ( !*(_DWORD *)(v173 + 24) )
            goto LABEL_1331;
          v178 = *(ScrTerminalMap_o **)(v177 + 264);
          v179 = System_Single__Parse(*(System_String_o **)(v173 + 32), 0);
          if ( *(_DWORD *)(v173 + 24) <= 1u )
            goto LABEL_1331;
          v180 = v179;
          v181 = System_Single__Parse(*(System_String_o **)(v173 + 40), 0);
          if ( !v178 )
            goto LABEL_1330;
          v858 = ScrTerminalMap__LocalPosFromCoord(v178, v180, v181, 0.0, 0.0, 0);
          v183 = *(_DWORD *)(v173 + 24);
          v184 = v858.fields.x;
          v185 = v858.fields.y;
          v186 = v858.fields.z;
          if ( v23->fields.id == 308 )
          {
            if ( v183 >= 5 )
            {
              if ( v183 == 5 )
              {
                if ( !*v14 )
                  goto LABEL_1330;
                v187 = *(MapCamera_o **)(*v14 + 152);
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v173 + 72), 0);
                if ( !*v14 )
                  goto LABEL_1330;
                v187 = *(MapCamera_o **)(*v14 + 152);
                if ( (int)updated >= 1 )
                {
                  *(_QWORD *)&v856.fields.hasValue = &v843;
                  v877.fields.x = v184;
                  v877.fields.y = v185;
                  *(_QWORD *)&v856.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                  v877.fields.z = v186;
                  *(_OWORD *)&v843.fields._list = 0u;
                  System_Nullable_Vector3____ctor(v856, v877, v182);
                  if ( *(_DWORD *)(v173 + 24) <= 4u )
                    goto LABEL_1331;
                  v835 = System_Single__Parse(*(System_String_o **)(v173 + 64), 0);
                  v836 = (System_Nullable_float__o)&size;
                  size = 0;
                  System_Nullable_float____ctor(
                    v836,
                    v835,
                    (const MethodInfo_3A869E8 *)Method_System_Nullable_float___ctor__);
                  if ( !v187 )
                    goto LABEL_1330;
                  v820 = *(System_Nullable_Vector3__o *)&v843.fields._list;
                  v821 = size;
                  v823 = v187;
                  v822 = v175;
                  goto LABEL_1311;
                }
              }
              *(_QWORD *)&v857.fields.hasValue = &v843;
              v878.fields.x = v184;
              v878.fields.y = v185;
              *(_QWORD *)&v857.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v878.fields.z = v186;
              *(_OWORD *)&v843.fields._list = 0u;
              System_Nullable_Vector3____ctor(v857, v878, v182);
              if ( *(_DWORD *)(v173 + 24) <= 4u )
                goto LABEL_1331;
              v837 = System_Single__Parse(*(System_String_o **)(v173 + 64), 0);
              v838 = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                v838,
                v837,
                (const MethodInfo_3A869E8 *)Method_System_Nullable_float___ctor__);
              v826 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(v826, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !v187 )
                goto LABEL_1330;
              v827 = *(System_Nullable_Vector3__o *)&v843.fields._list;
              v828 = size;
              v830 = v187;
              v829 = v175;
LABEL_1316:
              v831 = v176;
              goto LABEL_1317;
            }
          }
          else if ( v183 >= 5 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v173 + 64), 0);
            v806 = *v14;
            if ( !*v14 )
              goto LABEL_1330;
            v775 = *(MapCamera_o **)(v806 + 152);
            if ( (int)updated >= 1 )
            {
              if ( !v775 )
                goto LABEL_1330;
              v798 = *(MapCamera_o **)(v806 + 152);
              v799 = v184;
              v800 = v185;
              v801 = v186;
              v805 = v175;
              goto LABEL_1280;
            }
LABEL_1222:
            v317 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(v317, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v775 )
              goto LABEL_1330;
            v318 = v775;
            v319 = v184;
            v320 = v185;
            v321 = v186;
            v322 = v175;
            goto LABEL_1273;
          }
          if ( !*v14 )
            goto LABEL_1330;
          v775 = *(MapCamera_o **)(*v14 + 152);
          goto LABEL_1222;
        case 304:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1330;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1330;
          v291 = *(_DWORD *)(updated + 24);
          v292 = updated;
          if ( v291 <= 1 )
            goto LABEL_1230;
          v293 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(_DWORD *)(v292 + 24) <= 1u )
            goto LABEL_1331;
          v294 = v293;
          v295 = System_Single__Parse(*(System_String_o **)(v292 + 40), 0);
          if ( !*v14 )
            goto LABEL_1330;
          v296 = *(MapCamera_o **)(*v14 + 152);
          v297 = v295 * 0.001;
          if ( v297 >= 0.0 )
            v298 = v297;
          else
            v298 = 0.5;
          if ( v291 < 3 )
          {
            v299 = 5;
          }
          else
          {
            if ( *(_DWORD *)(v292 + 24) <= 2u )
              goto LABEL_1331;
            v299 = System_Int32__Parse(*(System_String_o **)(v292 + 48), 0);
          }
          v708 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
          System_Action___ctor(
            v708,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
            0);
          if ( !v296 )
            goto LABEL_1330;
          MapCamera__StartAutoZoom(v296, v294, v298, v299, v708, 0);
          return;
        default:
          if ( id != 350 )
          {
            if ( (unsigned int)(id - 351) > 1 )
              goto LABEL_21;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1330;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1330;
            v300 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_1230;
            v301 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(_DWORD *)(v300 + 24) <= 1u )
              goto LABEL_1331;
            v302 = v301;
            v303 = System_Single__Parse(*(System_String_o **)(v300 + 40), 0);
            if ( *(_DWORD *)(v300 + 24) <= 2u )
              goto LABEL_1331;
            v304 = v303;
            v305 = System_Single__Parse(*(System_String_o **)(v300 + 48), 0);
            if ( *(_DWORD *)(v300 + 24) <= 3u )
              goto LABEL_1331;
            v306 = v305;
            v307 = System_Single__Parse(*(System_String_o **)(v300 + 56), 0);
            if ( *(_DWORD *)(v300 + 24) <= 4u )
              goto LABEL_1331;
            v308 = v307;
            v309 = System_Int32__Parse(*(System_String_o **)(v300 + 64), 0);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4E7125B )
            {
              sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
              byte_4E7125B = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v310 = **(_QWORD **)(updated + 184);
            if ( !v310 )
              goto LABEL_1330;
            updated = *(_QWORD *)(v310 + 264);
            if ( !updated )
              goto LABEL_1330;
            v859.fields.y = v304;
            v859.fields.z = v306;
            v311 = v308 * 0.001;
            v859.fields.x = v302;
            v860 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v859, 0);
            v313 = v860.fields.x;
            v314 = v860.fields.y;
            v315 = v860.fields.z;
            if ( v23->fields.id != 352 || *(int *)(v300 + 24) < 6 )
            {
              if ( !*v14 )
                goto LABEL_1330;
              v316 = *(MapCamera_o **)(*v14 + 152);
              v317 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(
                v317,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
                0);
              if ( !v316 )
                goto LABEL_1330;
              v318 = v316;
              v319 = v313;
              v320 = v314;
              v321 = v315;
              v322 = v311;
              v323 = v309;
              goto LABEL_1274;
            }
            if ( !*v14 )
              goto LABEL_1330;
            v832 = *(MapCamera_o **)(*v14 + 152);
            *(_QWORD *)&v855.fields.hasValue = &v843;
            *(_QWORD *)&v855.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            *(_OWORD *)&v843.fields._list = 0u;
            System_Nullable_Vector3____ctor(v855, v860, v312);
            if ( *(_DWORD *)(v300 + 24) <= 5u )
              goto LABEL_1331;
            v833 = System_Single__Parse(*(System_String_o **)(v300 + 72), 0);
            v834 = (System_Nullable_float__o)&size;
            size = 0;
            System_Nullable_float____ctor(v834, v833, (const MethodInfo_3A869E8 *)Method_System_Nullable_float___ctor__);
            v826 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(
              v826,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
              0);
            if ( !v832 )
              goto LABEL_1330;
            v827 = *(System_Nullable_Vector3__o *)&v843.fields._list;
            v828 = size;
            v830 = v832;
            v829 = v311;
            v831 = v309;
LABEL_1317:
            MapCamera__StartAutoWork(v830, v829, v827, v828, v831, v826, 0);
            return;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1330;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1330;
          v190 = updated;
          if ( *(int *)(updated + 24) > 0 )
          {
            v191 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( v191 >= 1 )
            {
              v192 = v191;
              v193 = 0.5;
              if ( *(int *)(v190 + 24) > 1 )
              {
                v194 = System_Int32__Parse(*(System_String_o **)(v190 + 40), 0);
                if ( *(int *)(v190 + 24) >= 3 )
                  v193 = System_Single__Parse(*(System_String_o **)(v190 + 48), 0) * 0.001;
              }
              else
              {
                v194 = 15;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4E7125B )
              {
                sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
                byte_4E7125B = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v772 = **(_QWORD **)(updated + 184);
              if ( !v772 )
                goto LABEL_1330;
              v773 = *(ScrTerminalMap_o **)(v772 + 264);
              v774 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
              System_Action___ctor(
                v774,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                0);
              if ( !v773 )
                goto LABEL_1330;
              ScrTerminalMap__RequestMapMove_38402172(v773, v192, v193, v194, v774, 0);
              return;
            }
          }
          goto LABEL_1230;
      }
    }
  }
  if ( isQuickUpdate[0] )
  {
LABEL_21:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
LABEL_22:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
      this,
      *v14,
      this->klass->vtable._13_UpdateAnim.method);
  }
}


void QuestAfterAction_StateMain__Wait(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8

  if ( this->fields.waitTime > 0.0
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.waitStartTime) >= this->fields.waitTime )
  {
    klass = this->klass;
    this->fields.waitTime = 0.0;
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._14_EndAnim.methodPtr)(
      this,
      klass->vtable._14_EndAnim.method);
  }
}


void QuestAfterAction_StateMain__begin(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v11; // x1
  struct QuestAfterAction_o *v12; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4E7412F & 1) == 0 )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7412F = 1;
  }
  this->fields.that = that;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0 )
LABEL_14:
    sub_1D0F30C(screenCollider, v11);
  this->fields.IsMapModel = ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)screenCollider, 0);
}


void QuestAfterAction_StateMain__end(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


QuestAfterAction_Command_array *QuestAfterAction_StateMain__get_CommandBuf(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1D0F30C(this, method);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1D0F30C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4E7412E & 1) == 0 )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7412E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_1D0F30C(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__onEnd(QuestAfterAction_StateMain_o *this, bool deleteKey, const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1
  struct UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2; // x9
  __int64 v9; // x8
  int v10; // w9

  if ( (byte_4E74131 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16956/*"afterActionBk"*/);
    byte_4E74131 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16956/*"afterActionBk"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_21;
  TerminalSceneComponent__ClearTransitionInfo(mInstance, 0);
  QuestAfterAction_StateMain__StartMapGimmick(this, v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E741A2 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E741A2 = 1;
  }
  mInstance = (TerminalSceneComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    mInstance = (TerminalSceneComponent_o *)TerminalPramsManager_TypeInfo;
  }
  TUTORIAL_MENU_ARROW_POS2 = mInstance->fields.TUTORIAL_MENU_ARROW_POS2;
  v9 = *(_QWORD *)(*(_QWORD *)&TUTORIAL_MENU_ARROW_POS2 + 880LL);
  *(_BYTE *)(*(_QWORD *)&TUTORIAL_MENU_ARROW_POS2 + 584LL) = 0;
  if ( !v9
    || (v10 = *(_DWORD *)(v9 + 28) + 1,
        *(_DWORD *)(v9 + 24) = 0,
        *(_DWORD *)(v9 + 28) = v10,
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0) )
  {
LABEL_21:
    sub_1D0F30C(mInstance, deleteKey);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, 0);
}


void QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1D0F30C(this, value);
  that->fields.commandIdx = value;
}


void QuestAfterAction_StateMain__update(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
    this,
    that,
    this->klass->vtable._13_UpdateAnim.method);
  QuestAfterAction_StateMain__Wait(this, v4);
}


void QuestAfterAction_StateMain___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E74134 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E74134 = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestAfterAction_StateMain___c___ctor(QuestAfterAction_StateMain___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_22(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_26(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_27; // x21
  Il2CppObject *v8; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E74135 & 1) == 0 )
  {
    sub_1D0F0B4(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&ScriptManager_TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E74135 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E71891 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71891 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4E7132C = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4E7132B )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4E7132B = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v5 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v2->static_fields->_PhaseCnt_k__BackingField;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v5 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_27 = v5->static_fields->__9__16_27;
  if ( !_9__16_27 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1D0F300(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_27,
      (int32_t)_9__16_27,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_27,
    0,
    0,
    -1,
    0,
    0,
    0,
    0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__16_28; // x19
  Il2CppObject *v5; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v18; // x1

  if ( (byte_4E74136 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&ScriptManager_TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E74136 = 1;
  }
  v3 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v3 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_28 = v3->static_fields->__9__16_28;
  if ( !_9__16_28 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_28,
      (int32_t)_9__16_28,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4E7132B )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4E7132B = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_1D0F30C(SelectRouteArray, v18);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_28(
        QuestAfterAction_StateMain___c_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4E74137 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&ScriptManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16956/*"afterActionBk"*/);
    sub_1D0F0B4(&StringLiteral_16009/*"["*/);
    sub_1D0F0B4(&StringLiteral_16262/*"]"*/);
    sub_1D0F0B4(&StringLiteral_13911/*"TerminalTransitionInfoMissionId"*/);
    byte_4E74137 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_65601036(
                         (System_String_o *)StringLiteral_16009/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16262/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_32C03D4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16956/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13911/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4E71D1E )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71D1E = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v8);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


bool QuestAfterAction_StateMain___c___UpdateAnim_b__16_35(
        QuestAfterAction_StateMain___c_o *this,
        TitleInfoEventRaidBossComponent_o *eventRaidBossComponent,
        const MethodInfo *method)
{
  if ( !eventRaidBossComponent )
    sub_1D0F30C(this, 0);
  return eventRaidBossComponent->fields.isStartedFrameIn;
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__10(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__11(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__12(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__23(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_0_o *v3; // x19

  that = this->fields.that;
  if ( !that
    || (that->fields._IsAfterFadeInPlay_k__BackingField = 0,
        v3 = this,
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)this->fields.__4__this) == 0)
    || (((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          this->klass[1]._1.implementedInterfaces),
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_0_o *, struct QuestAfterAction_o *, void *))this->klass[1]._1.properties)(
    this,
    v3->fields.that,
    this->klass[1]._1.methods);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__30(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__31(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__32(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__33(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__9(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_1___UpdateAnim_b__0(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 0,
        SrcSpotBasePrefab__SetTouchType(spot, 0, 0),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1D0F30C(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__13(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1D0F30C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__14(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals10; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals10 = this->fields.CS___8__locals10) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)CS___8__locals10->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_10_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__15(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1D0F30C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__16(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals11; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals11 = this->fields.CS___8__locals11) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)CS___8__locals11->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_11_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_12___UpdateAnim_b__17(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals12 = this->fields.CS___8__locals12) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)CS___8__locals12->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_12_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_13___UpdateAnim_b__18(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v22; // x8
  UnityEngine_Color_o *v23; // x20
  float v24; // s0
  UITweener_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4E74138 & 1) == 0 )
  {
    sub_1D0F0B4(&EventDelegate_Callback_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4E74138 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v3 = sub_1D0F300(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_32A86A8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_32A835C *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( LODWORD(paramsStr->max_length) <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(paramsStr->m_Items[1], &color, 0);
  if ( !*v14
    || ((*v14)[8] = *(UnityEngine_Color_o *)((char *)&v12[6].klass + 4), !*v14)
    || ((*v14)[9] = color, (v22 = this->fields.paramsStr) == 0) )
  {
LABEL_18:
    sub_1D0F30C(mapGimmick, v5);
  }
  if ( LODWORD(v22->max_length) <= 2 )
LABEL_19:
    sub_1D0F314(mapGimmick);
  v23 = *v14;
  v24 = System_Single__Parse(v22->m_Items[2], 0);
  if ( !v23 )
    goto LABEL_18;
  v23[3].fields.b = v24;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0);
  v25 = *(UITweener_o **)(v3 + 16);
  v26 = (EventDelegate_Callback_o *)sub_1D0F300(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0);
  if ( !v25 )
    goto LABEL_18;
  UITweener__SetOnFinished(v25, v26, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_14___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4E74139 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E74139 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_73359484(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_1D0F30C(_4__this, v5);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__20(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals15 = this->fields.CS___8__locals15) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__21(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals15 = this->fields.CS___8__locals15) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  QuestEntity_o *questEntity; // x0
  void *image; // x8
  ScrTerminalListTop_o *v6; // x20
  int32_t name_high; // w21
  int namespaze; // w24
  System_Action_o *_9__25; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  clsQuestCheck_o *v16; // x19
  QuestAfterAction_StateMain___c_c *v17; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v19; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4E7413A & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_1D0F0B4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_1D0F0B4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E7413A = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4E7125B )
    {
      sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
      byte_4E7125B = 1;
    }
    questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    image = questEntity[1].klass->_1.image;
    if ( image )
    {
      v6 = (ScrTerminalListTop_o *)*((_QWORD *)image + 32);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E7132C )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        byte_4E7132C = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4E7132B )
      {
        sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4E7132B = 1;
      }
      if ( !questEntity[1].fields.type )
      {
        j_il2cpp_runtime_class_init_0(questEntity);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      namespaze = (int)questEntity[1].klass->_1.namespaze;
      _9__25 = this->fields.__9__25;
      if ( !_9__25 )
      {
        _9__25 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.__9__25, (int32_t)_9__25, v10, v11, v12, v13, v14, v15);
      }
      if ( v6 )
      {
        ScrTerminalListTop__StartWindowMessage_38079044(v6, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_1D0F30C(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v16 = (clsQuestCheck_o *)questEntity;
  v17 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v17 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v17->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v19, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_26,
      (int32_t)_9__16_26,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v16 )
    goto LABEL_34;
  clsQuestCheck__PlayQuestStartAction(v16, _9__16_26, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v5; // x8
  UnityEngine_GameObject_c *v6; // x8
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v9; // x0
  bool HasFlag; // w0
  TerminalPramsManager_c *v11; // x8
  TerminalPramsManager_c *v12; // x0
  int32_t SpotId; // w21
  struct MapControl_QuestInfo_o *questInfo; // x8
  int32_t klass_high; // w21
  int32_t questId; // w22
  UnityEngine_GameObject_c *v17; // x8
  bool Effect; // w21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x8
  TerminalPramsManager_c *v20; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v22; // x8
  ScrTerminalListTop_o *v23; // x19
  int32_t m_CachedPtr_high; // w21

  if ( (byte_4E7413B & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16956/*"afterActionBk"*/);
    sub_1D0F0B4(&StringLiteral_13911/*"TerminalTransitionInfoMissionId"*/);
    byte_4E7413B = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = _4__this->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_105;
  _4__this = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_105;
  if ( !ScrTerminalMap__IsAllMaskActive(_4__this, 0) )
    goto LABEL_21;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = _4__this->fields.subRootGimmickP->klass;
  if ( !v5 || (_4__this = *(ScrTerminalMap_o **)&v5->_2.static_fields_size) == 0 )
LABEL_105:
    sub_1D0F30C(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = _4__this->fields.subRootGimmickP->klass;
  if ( !v6 )
    goto LABEL_105;
  _4__this = *(ScrTerminalMap_o **)&v6->_2.element_size;
  if ( !_4__this )
    goto LABEL_105;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4E741A5 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4E741A5 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4E7132C = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v9->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0);
  v11 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E7132C )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E7132C = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v12->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4E741A6 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E741A6 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v11->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v11);
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  TerminalPramsManager__Save_SaveData(0);
  if ( !byte_4E71891 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71891 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  questInfo = this->fields.questInfo;
  if ( !questInfo )
    goto LABEL_105;
  klass_high = HIDWORD(_4__this->fields.subRootGimmickP->klass);
  questId = questInfo->fields.questId;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(klass_high, questId, 0, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16956/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13911/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v17 = _4__this->fields.subRootGimmickP->klass;
  if ( !v17 )
    goto LABEL_105;
  _4__this = *(ScrTerminalMap_o **)&v17->_2.element_size;
  if ( !_4__this )
    goto LABEL_105;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0);
  if ( !byte_4E741A7 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E741A7 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(_4__this->fields.subRootGimmickP[7].klass) = Effect;
  CS___8__locals16 = this->fields.CS___8__locals16;
  if ( !CS___8__locals16 )
    goto LABEL_105;
  _4__this = (ScrTerminalMap_o *)CS___8__locals16->fields.__4__this;
  if ( !_4__this )
    goto LABEL_105;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppClass **))_4__this->klass[1]._1.nestedTypes)(
    _4__this,
    _4__this->klass[1]._1.implementedInterfaces);
  if ( !byte_4E71891 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E71891 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v20->static_fields->_WarId_k__BackingField;
  if ( !byte_4E7412B )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
    byte_4E7412B = 1;
  }
  if ( !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4E7125B )
  {
    sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7125B = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v22 = _4__this->fields.subRootGimmickP->klass;
  if ( !v22 )
    goto LABEL_105;
  v23 = *(ScrTerminalListTop_o **)&v22->_2.element_size;
  if ( !byte_4E7132C )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E7132C = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_4E7132B )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4E7132B = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_105;
  ScrTerminalListTop__RequestBattleSecnario(
    v23,
    m_CachedPtr_high,
    LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1,
    0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_17___UpdateAnim_b__34(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c__DisplayClass16_17_o *v2; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_0_c *klass; // x8
  ScrTerminalListTop_o *v4; // x20
  float defaultBgmVolume; // s8
  float bgmVolume; // s9
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals17; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *v8; // x8

  v2 = this;
  if ( (byte_4E7413C & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
    byte_4E7413C = 1;
  }
  if ( v2->fields.bgmVolume > -1.0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4E7125B )
    {
      sub_1D0F0B4(&TerminalSceneComponent_TypeInfo);
      byte_4E7125B = 1;
    }
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = this[5].fields.CS___8__locals17->klass;
    if ( !klass )
      goto LABEL_20;
    v4 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
    bgmVolume = v2->fields.bgmVolume;
    defaultBgmVolume = v2->fields.defaultBgmVolume;
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)QuestAfterAction_TypeInfo;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    if ( !v4 )
LABEL_20:
      sub_1D0F30C(this, method);
    ScrTerminalListTop__StartEasingBgmMasterVolume(
      v4,
      bgmVolume,
      defaultBgmVolume,
      QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
      2,
      0,
      0);
  }
  CS___8__locals17 = v2->fields.CS___8__locals17;
  if ( !CS___8__locals17 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)CS___8__locals17->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)((__int64 (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                                                  this,
                                                                  this->klass[1]._1.implementedInterfaces);
  v8 = v2->fields.CS___8__locals17;
  if ( !v8 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, struct QuestAfterAction_o *, void *))this->klass[1]._1.properties)(
    this,
    v8->fields.that,
    this->klass[1]._1.methods);
}


void QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_2___UpdateAnim_b__1(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 2,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0),
        (CS___8__locals2 = this->fields.CS___8__locals2) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals2->fields.__4__this) == 0 )
  {
    sub_1D0F30C(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_3___UpdateAnim_b__2(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals3; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 1,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0),
        (CS___8__locals3 = this->fields.CS___8__locals3) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals3->fields.__4__this) == 0 )
  {
    sub_1D0F30C(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_4___UpdateAnim_b__3(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 0, (CS___8__locals4 = this->fields.CS___8__locals4) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)CS___8__locals4->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_4_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_5___UpdateAnim_b__4(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 0, (CS___8__locals5 = this->fields.CS___8__locals5) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)CS___8__locals5->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_5_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_6___UpdateAnim_b__5(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 2, (CS___8__locals6 = this->fields.CS___8__locals6) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)CS___8__locals6->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_6_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_7___UpdateAnim_b__6(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 2, (CS___8__locals7 = this->fields.CS___8__locals7) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)CS___8__locals7->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_7_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_8___UpdateAnim_b__7(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 1, (CS___8__locals8 = this->fields.CS___8__locals8) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)CS___8__locals8->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_8_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_9___UpdateAnim_b__8(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 1, (CS___8__locals9 = this->fields.CS___8__locals9) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)CS___8__locals9->fields.__4__this) == 0 )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_9_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass22_0___ctor(
        QuestAfterAction_StateMain___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass22_0___FadeRoad_b__0(
        QuestAfterAction_StateMain___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0 )
    sub_1D0F30C(this, method);
  mMapCtrl_SpotRoadInfo->fields.dispType = this->fields.fadeEndDispType;
}


void QuestAfterAction_StateMain___c__DisplayClass22_0___FadeRoad_b__1(
        QuestAfterAction_StateMain___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = this->fields.fadeEndDispType,
        (this = (QuestAfterAction_StateMain___c__DisplayClass22_0_o *)this->fields.__4__this) == 0) )
  {
    sub_1D0F30C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass22_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateNone___ctor(QuestAfterAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateNone__begin(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateNone__end(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateNone__update(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_TitleInfoControlCallback___ctor(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_TitleInfoControlCallback__End(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *end; // x8
  GrandQuestFolderBoardItem_o *p_end; // x19

  p_end = (GrandQuestFolderBoardItem_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t))end->fields.invoke_impl)(end->fields.method_code, end->fields.method);
  p_end->klass = 0;
  sub_1D0F058(p_end, 0, v2, v3, v4, v5, v6, v7);
}


bool QuestAfterAction_TitleInfoControlCallback__HasStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  return this->fields.start != 0;
}


void QuestAfterAction_TitleInfoControlCallback__SetStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_QuestAfterAction_TitleInfoControlParam__o *startCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.start = startCallback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3, v4, v5, v6, v7);
}


void QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        QuestAfterAction_TitleInfoControlParam_o *titleInfoControlParam,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *end; // x8
  struct System_Action_o **p_end; // x22
  const MethodInfo *v13; // x1
  struct System_Action_QuestAfterAction_TitleInfoControlParam__o *start; // x8

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t, System_Action_o *, const MethodInfo *))end->fields.invoke_impl)(
      end->fields.method_code,
      end->fields.method,
      endCallback,
      method);
  this->fields.end = endCallback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)p_end,
    (int32_t)endCallback,
    (int32_t)endCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  start = this->fields.start;
  if ( start )
    ((void (__fastcall *)(intptr_t, QuestAfterAction_TitleInfoControlParam_o *, intptr_t))start->fields.invoke_impl)(
      start->fields.method_code,
      titleInfoControlParam,
      start->fields.method);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v13);
}


void QuestAfterAction_TitleInfoControlParam___ctor(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestAfterAction_TitleInfoControlParam__get_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


int32_t QuestAfterAction_TitleInfoControlParam__get_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetType_k__BackingField;
}


void QuestAfterAction_TitleInfoControlParam__set_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void QuestAfterAction_TitleInfoControlParam__set_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetType_k__BackingField = value;
}


void QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  QuestAfterAction_VoiceInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)v6, (int32_t)vName, v7, v8, v9, v10, v11, v12);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *v2; // x21
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v23; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  QuestAfterAction_Command_o *v30; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *v46; // [xsp+18h] [xbp-38h]

  v46 = this;
  v2 = this;
  if ( (byte_4E74143 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)sub_1D0F0B4(&QuestAfterAction_TypeInfo);
    byte_4E74143 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v2->fields.commandEnumerable;
    v2->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_1D0F30C(this, method);
    klass = commandEnumerable->klass;
    v7 = *(unsigned __int16 *)&commandEnumerable->klass->_2.rank;
    if ( *(_WORD *)&commandEnumerable->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1CE5430(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v9)(
            commandEnumerable,
            *(_QWORD *)(v9 + 8));
    v46->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, v10, v11, v12, v13, v14, v15, v16);
    v2 = v46;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_34:
    sub_1D0F30C(this, method);
  while ( 1 )
  {
    v18 = _7__wrap1->klass;
    v19 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_1CE5430(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v21)(
            _7__wrap1,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96____m__Finally1(v46, v22);
      v46->fields.__7__wrap1 = 0;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, 0, v39, v40, v41, v42, v43, v44);
      return 0;
    }
    v23 = v46->fields.__7__wrap1;
    if ( !v23 )
      sub_1D0F30C(v46, v22);
    v24 = v23->klass;
    v25 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v26 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_26;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_26:
      v27 = sub_1CE5430(
              v46->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v28 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v27)(
            v23,
            *(_QWORD *)(v27 + 8));
    v30 = (QuestAfterAction_Command_o *)v28;
    if ( !v28 )
      sub_1D0F30C(0, v29);
    if ( !_4__this )
      sub_1D0F30C(v28, v29);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v28 + 16), 0);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v30, 0);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v46->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_34;
  }
  v46->fields.__2__current = v30;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v46->fields.__2__current, (int32_t)v30, v33, v34, v35, v36, v37, v38);
  result = 1;
  v46->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *v10; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4E74145 & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    byte_4E74145 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)sub_1D0F300(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v10->fields.__4__this, (int32_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v10->fields.commandEnumerable,
    (int32_t)_3__commandEnumerable,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
}


QuestAfterAction_Command_o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96____m__Finally1(this, method);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4E74144 & 1) == 0 )
  {
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    byte_4E74144 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1CE5430(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestAfterAction__WaitWhileMainStateFinished_d__100___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__100_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestAfterAction__WaitWhileMainStateFinished_d__100__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__100_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1D0F30C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0);
  }
  return 0;
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__100__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__100_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__100__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__100_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__100_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__100__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__100_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestAfterAction__WaitWhileMainStateFinished_d__100__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__100_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7413E & 1) == 0 )
  {
    sub_1D0F0B4(&QuestAfterAction___c_TypeInfo);
    byte_4E7413E = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(QuestAfterAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)QuestAfterAction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestAfterAction___c___ctor(QuestAfterAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__129_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__129_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetAfterActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetRaidUiSetupCommand_b__128_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___SetupTutorialCommandPreprocess_b__154_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___SetupTutorialCommandPreprocess_b__154_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetAfterActionVals(x, 0);
}


void QuestAfterAction___c__DisplayClass150_0___ctor(
        QuestAfterAction___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass150_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass150_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction___c__DisplayClass150_0_o *v2; // x19
  struct QuestAfterAction_o *_4__this; // x8

  v2 = this;
  if ( (byte_4E7413F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_int__Add__);
    this = (QuestAfterAction___c__DisplayClass150_0_o *)sub_1D0F0B4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4E7413F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (QuestAfterAction___c__DisplayClass150_0_o *)_4__this->fields.loadedVoiceSvtIdSet) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.loadingSvtId,
          (const MethodInfo_3801974 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (QuestAfterAction___c__DisplayClass150_0_o *)v2->fields.svtVInfos) == 0)
    || (System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)this,
          0,
          (const MethodInfo_395DBE4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (this = (QuestAfterAction___c__DisplayClass150_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1D0F30C(this, method);
  }
  QuestAfterAction__LoadVoice_37468116((QuestAfterAction_o *)this, v2->fields.svtVInfos, v2->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass167_0___ctor(
        QuestAfterAction___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass167_0___StartLoadVoicePipeline_b__0(
        QuestAfterAction___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction___c__DisplayClass167_0_o *v2; // x19
  struct QuestAfterAction_o *_4__this; // x8
  QuestAfterAction_o *v4; // x8

  v2 = this;
  if ( (byte_4E74140 & 1) == 0 )
  {
    this = (QuestAfterAction___c__DisplayClass167_0_o *)sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_int___);
    byte_4E74140 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.isLoadingVoice = 0;
  if ( System_Linq_Enumerable__Any_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.tutorialLoadedSvtIdList,
         (const MethodInfo_325CB7C *)Method_System_Linq_Enumerable_Any_int___) )
  {
    this = (QuestAfterAction___c__DisplayClass167_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_13;
    QuestAfterAction__AddLoadedTutorialVoiceSvtIds(
      (QuestAfterAction_o *)this,
      (System_Collections_Generic_IEnumerable_int__o *)v2->fields.tutorialLoadedSvtIdList,
      0);
  }
  this = (QuestAfterAction___c__DisplayClass167_0_o *)v2->fields.__4__this;
  if ( !this
    || (QuestAfterAction__MarkRequestedVoiceLoadCompleted((QuestAfterAction_o *)this, 0),
        (this = (QuestAfterAction___c__DisplayClass167_0_o *)v2->fields.__4__this) == 0)
    || (this = (QuestAfterAction___c__DisplayClass167_0_o *)QuestAfterAction__HasAnyRequestedVoiceToLoad(
                                                              (QuestAfterAction_o *)this,
                                                              0),
        (v4 = v2->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_1D0F30C(this, method);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
    QuestAfterAction__StartLoadVoicePipeline(v4, 0);
  else
    QuestAfterAction__FlushVoiceLoadCallbacks(v4, 0);
}


void QuestAfterAction___c__DisplayClass93_0___ctor(
        QuestAfterAction___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass93_0___Play_b__0(
        QuestAfterAction___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E74141 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4E74141 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass94_0___ctor(
        QuestAfterAction___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass94_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *_4__this; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4E74142 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4E74142 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(_4__this + 176), 0, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 10) = 0,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(_4__this + 80), 0, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1D0F30C(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void QuestAfterAction___c__DisplayClass94_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, method);
  QuestAfterAction__SetState(_4__this, 2, 0);
}