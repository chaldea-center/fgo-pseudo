void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_596D191 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D191 = 1;
  }
  LODWORD(QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime) = (struct QuestAfterAction_StaticFields)1056964608;
}


void QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_TitleInfoControlCallback_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  BlankEarthQuestAfterAction_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  PlanetEarthQuestAfterAction_o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__c *v31; // x0
  System_Collections_Generic_Dictionary_int__object__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_object__o *v39; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_HashSet_object__o *v46; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_Dictionary_object__object__o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_HashSet_int__o *v60; // x20
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_Collections_Generic_HashSet_int__o *v67; // x20
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Collections_Generic_List_object__o *v74; // x20
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7

  if ( (byte_596D190 & 1) == 0 )
  {
    sub_2213A60(&BlankEarthQuestAfterAction_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Action__TypeInfo);
    sub_2213A60(&PlanetEarthQuestAfterAction_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_2213A60(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_596D190 = 1;
  }
  v3 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_2213CCC(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  QuestAfterAction_TitleInfoControlCallback___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_2213CCC(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (PlanetEarthQuestAfterAction_o *)sub_2213CCC(PlanetEarthQuestAfterAction_TypeInfo);
  PlanetEarthQuestAfterAction___ctor(v17, 0);
  this->fields._PlanetEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PlanetEarthQuestAfterAction_k__BackingField,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v24,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commandTypeIds,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo;
  this->fields.MapMoveBeforeFocusSpotId = -1;
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(v31);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.svtVoices, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  this->fields.tutorialSvtVoiceList = (struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialSvtVoiceList,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v46,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.tutorialVoiceParamKeySet = (struct System_Collections_Generic_HashSet_string__o *)v46;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialVoiceParamKeySet,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v53,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.tutorialVoiceInfoByParam = (struct System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__o *)v53;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialVoiceInfoByParam,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v60,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.loadedTutorialVoiceSvtIdSet = v60;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedTutorialVoiceSvtIdSet,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v67,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.loadedVoiceSvtIdSet = v67;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedVoiceSvtIdSet,
    (int32_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.pendingVoiceLoadCallbackList = (struct System_Collections_Generic_List_Action__o *)v74;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pendingVoiceLoadCallbackList,
    (int32_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void QuestAfterAction__AddLoadedTutorialVoiceSvtIds(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_int__o *svtIdEnumerable,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
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
  __int64 v25; // [xsp+18h] [xbp-38h]

  v4 = this;
  if ( (byte_596D18F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    this = (QuestAfterAction_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_596D18F = 1;
  }
  if ( !svtIdEnumerable )
    sub_2213CDC(this, svtIdEnumerable);
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
    v8 = sub_224BC3C(svtIdEnumerable, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v9 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v8)(
         svtIdEnumerable,
         *(_QWORD *)(v8 + 8));
  v25 = v9;
  while ( 1 )
  {
    if ( !v25 )
      sub_2213CDC(v9, v10);
    v11 = *(_QWORD *)v25;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_16:
      v14 = sub_224BC3C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v25, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v25;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v17 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_23;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_23:
      v18 = sub_224BC3C(v25, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v19 = (*(unsigned int (__fastcall **)(__int64, _QWORD))v18)(v25, *(_QWORD *)(v18 + 8));
    loadedTutorialVoiceSvtIdSet = v4->fields.loadedTutorialVoiceSvtIdSet;
    if ( !loadedTutorialVoiceSvtIdSet )
      sub_2213CDC(0, v19);
    v9 = System_Collections_Generic_HashSet_int___Add(
           loadedTutorialVoiceSvtIdSet,
           v19,
           (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v21 = *(_QWORD *)v25;
  v22 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_31;
    }
    v24 = v21 + 16LL * *v23 + 312;
  }
  else
  {
LABEL_31:
    v24 = sub_224BC3C(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v24)(v25, *(_QWORD *)(v24 + 8));
}


System_Collections_Generic_List_int__o *QuestAfterAction__BuildDistinctSvtIdList(
        System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *sourceVoiceInfoEnumerable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  System_Collections_Generic_HashSet_int__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 i; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x21
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v37; // [xsp+18h] [xbp-48h]

  if ( (byte_596D18E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596D18E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !sourceVoiceInfoEnumerable )
    sub_2213CDC(v5, v6);
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
    v10 = sub_224BC3C(
            sourceVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v10)(
          sourceVoiceInfoEnumerable,
          *(_QWORD *)(v10 + 8));
  v37 = v11;
  if ( !v11 )
    sub_2213CDC(v11, v12);
  for ( i = v11; ; i = v37 )
  {
    v14 = *(_QWORD *)i;
    v15 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_16:
      v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v37 )
      sub_2213CDC(v18, v19);
    v20 = *(_QWORD *)v37;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_24:
      v23 = sub_224BC3C(v37, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v37, *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( v24 )
    {
      v26 = *(unsigned int *)(v24 + 16);
      if ( (int)v26 >= 1 )
      {
        if ( !v4 )
          sub_2213CDC(v24, v26);
        v27 = System_Collections_Generic_HashSet_int___Add(
                v4,
                v26,
                (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v27 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v28 = *(unsigned int *)(v25 + 16),
                v30 = Method_System_Collections_Generic_List_int__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v27, v28);
          }
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v28,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = v28;
          }
        }
      }
    }
  }
  if ( v37 )
  {
    v32 = *(_QWORD *)v37;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_42;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_42:
      v35 = sub_224BC3C(v37, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v37, *(_QWORD *)(v35 + 8));
  }
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
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 i; // x22
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 j; // x21
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  Il2CppObject *v61; // x21
  __int64 v62; // x1
  _BOOL8 v63; // x0
  __int64 v64; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v80; // [xsp+18h] [xbp-58h]
  __int64 v81; // [xsp+18h] [xbp-58h]

  if ( (byte_596D18A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_596D18A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !firstVoiceInfoEnumerable )
    goto LABEL_94;
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
    v12 = sub_224BC3C(
            firstVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v12)(
          firstVoiceInfoEnumerable,
          *(_QWORD *)(v12 + 8));
  v80 = v13;
  if ( !v13 )
    sub_2213CDC(v13, v14);
  for ( i = v13; ; i = v80 )
  {
    v16 = *(_QWORD *)i;
    v17 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_16:
      v19 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(i, *(_QWORD *)(v19 + 8));
    if ( (v7 & 1) == 0 )
      break;
    if ( !v80 )
      sub_2213CDC(v7, v8);
    v20 = *(_QWORD *)v80;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v22 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_24:
      v23 = sub_224BC3C(v80, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v80, *(_QWORD *)(v23 + 8));
    v25 = (Il2CppObject *)v24;
    if ( v24 )
    {
      v26 = *(unsigned int *)(v24 + 16);
      if ( (int)v26 >= 1 )
      {
        if ( !v6 )
          sub_2213CDC(v24, v26);
        v27 = System_Collections_Generic_HashSet_int___Add(
                v6,
                v26,
                (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v27 )
        {
          if ( !v5
            || (items = v5->fields._items,
                v36 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__,
                ++v5->fields._version,
                !items) )
          {
            sub_2213CDC(v27, v28);
          }
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v25,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v25;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v25, v29, v30, v31, v32, v33, v34);
          }
        }
      }
    }
  }
  if ( v80 )
  {
    v39 = *(_QWORD *)v80;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v80 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v80 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_42;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_42:
      v42 = sub_224BC3C(v80, System_IDisposable_TypeInfo, 0);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v80, *(_QWORD *)(v42 + 8));
  }
  if ( !secondVoiceInfoEnumerable )
LABEL_94:
    sub_2213CDC(v7, v8);
  v43 = secondVoiceInfoEnumerable->klass;
  v44 = *(unsigned __int16 *)&secondVoiceInfoEnumerable->klass->_2.rank;
  if ( *(_WORD *)&secondVoiceInfoEnumerable->klass->_2.rank )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c **)v45 - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_50;
    }
    v46 = (__int64)&v43->vtable[*v45];
  }
  else
  {
LABEL_50:
    v46 = sub_224BC3C(
            secondVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v46)(
          secondVoiceInfoEnumerable,
          *(_QWORD *)(v46 + 8));
  v81 = v47;
  if ( !v47 )
    sub_2213CDC(v47, v48);
  for ( j = v47; ; j = v81 )
  {
    v50 = *(_QWORD *)j;
    v51 = *(unsigned __int16 *)(*(_QWORD *)j + 302LL);
    if ( *(_WORD *)(*(_QWORD *)j + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_58;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_58:
      v53 = sub_224BC3C(j, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(j, *(_QWORD *)(v53 + 8));
    if ( (v54 & 1) == 0 )
      break;
    if ( !v81 )
      sub_2213CDC(v54, v55);
    v56 = *(_QWORD *)v81;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v58 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_66;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_66:
      v59 = sub_224BC3C(v81, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v81, *(_QWORD *)(v59 + 8));
    v61 = (Il2CppObject *)v60;
    if ( v60 )
    {
      v62 = *(unsigned int *)(v60 + 16);
      if ( (int)v62 >= 1 )
      {
        if ( !v6 )
          sub_2213CDC(v60, v62);
        v63 = System_Collections_Generic_HashSet_int___Add(
                v6,
                v62,
                (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v63 )
        {
          if ( !v5
            || (v71 = v5->fields._items,
                v72 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__,
                ++v5->fields._version,
                !v71) )
          {
            sub_2213CDC(v63, v64);
          }
          v73 = v5->fields._size;
          if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v61,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v71->obj.klass + v73;
            v5->fields._size = v73 + 1;
            v74[4] = (Il2CppClass *)v61;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)v61, v65, v66, v67, v68, v69, v70);
          }
        }
      }
    }
  }
  if ( v81 )
  {
    v75 = *(_QWORD *)v81;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_84;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_84:
      v78 = sub_224BC3C(v81, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v78)(v81, *(_QWORD *)(v78 + 8));
  }
  return (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v5;
}


System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *QuestAfterAction__BuildPendingTutorialVoiceInfoList(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *tutorialSvtVoiceList; // x20
  System_Collections_Generic_HashSet_int__o *loadedTutorialVoiceSvtIdSet; // x19

  if ( (byte_596D182 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D182 = 1;
  }
  tutorialSvtVoiceList = this->fields.tutorialSvtVoiceList;
  loadedTutorialVoiceSvtIdSet = this->fields.loadedTutorialVoiceSvtIdSet;
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, method, v2);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_Generic_HashSet_int__o *loadedVoiceSvtIdSet; // x19
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *v8; // x20

  if ( (byte_596D183 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D183 = 1;
  }
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    sub_2213CDC(0, method);
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  loadedVoiceSvtIdSet = this->fields.loadedVoiceSvtIdSet;
  v8 = (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)Values;
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v5, v6);
  return QuestAfterAction__BuildPendingVoiceInfoListCore(v8, loadedVoiceSvtIdSet, v6);
}


System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *QuestAfterAction__BuildPendingVoiceInfoListCore(
        System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *sourceVoiceInfoEnumerable,
        System_Collections_Generic_HashSet_int__o *loadedSvtIdSet,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_HashSet_int__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 i; // x22
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x22
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v48; // [xsp+18h] [xbp-58h]

  if ( (byte_596D18D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_596D18D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !sourceVoiceInfoEnumerable )
    sub_2213CDC(v7, v8);
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
    v12 = sub_224BC3C(
            sourceVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v12)(
          sourceVoiceInfoEnumerable,
          *(_QWORD *)(v12 + 8));
  v48 = v13;
  if ( !v13 )
    sub_2213CDC(v13, v14);
  for ( i = v13; ; i = v48 )
  {
    v16 = *(_QWORD *)i;
    v17 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_16:
      v19 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(i, *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v48 )
      sub_2213CDC(v20, v21);
    v22 = *(_QWORD *)v48;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__c **)v24 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_24;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_24:
      v25 = sub_224BC3C(v48, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v48, *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( v26 )
    {
      v28 = *(unsigned int *)(v26 + 16);
      if ( (int)v28 >= 1 )
      {
        if ( !loadedSvtIdSet )
          sub_2213CDC(v26, v28);
        v29 = System_Collections_Generic_HashSet_int___Contains(
                loadedSvtIdSet,
                v28,
                (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( !v29 )
        {
          if ( !v6 )
            sub_2213CDC(v29, v30);
          v31 = System_Collections_Generic_HashSet_int___Add(
                  v6,
                  *(_DWORD *)(v27 + 16),
                  (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          if ( v31 )
          {
            if ( !v5
              || (items = v5->fields._items,
                  v40 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__,
                  ++v5->fields._version,
                  !items) )
            {
              sub_2213CDC(v31, v32);
            }
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v27,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v27;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), v27, v33, v34, v35, v36, v37, v38);
            }
          }
        }
      }
    }
  }
  if ( v48 )
  {
    v43 = *(_QWORD *)v48;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_44;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_44:
      v46 = sub_224BC3C(v48, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v48, *(_QWORD *)(v46 + 8));
  }
  return (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v5;
}


void QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (MissionNaviTransitionBoardItem_o *)&this->fields.endAct;
  p_endAct->klass = 0;
  sub_2213A04(p_endAct, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0);
}


bool QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  int32_t BlankEarthTargetWarId; // w8
  bool v6; // w19
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w20
  _BOOL8 QuestAfterActionVals; // x0
  __int64 v10; // x1
  System_String_array *v11; // x8
  signed int v12; // w21
  unsigned int max_length; // w9
  int32_t result; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_array *questAfterAction; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596D15A & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1248/*"1"*/);
    byte_596D15A = 1;
  }
  BlankEarthTargetWarId = this->fields.BlankEarthTargetWarId;
  v6 = 0;
  questAfterAction = 0;
  result = 0;
  if ( BlankEarthTargetWarId <= 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_596A92D = 1;
    }
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, method, v2);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestAfterActionVals = QuestAfterAction__TryGetQuestAfterActionVals(
                             (QuestAfterAction_o *)v7,
                             &questAfterAction,
                             QuestId_k__BackingField,
                             v7->static_fields->_PhaseCnt_k__BackingField + 1,
                             v3);
    if ( QuestAfterActionVals )
    {
      v11 = questAfterAction;
      if ( !questAfterAction )
LABEL_25:
        sub_2213CDC(QuestAfterActionVals, v10);
      v12 = 0;
      while ( 1 )
      {
        max_length = v11->max_length;
        v6 = v12 < (int)max_length;
        if ( v12 >= (int)max_length )
          break;
        if ( v12 >= max_length )
          goto LABEL_28;
        QuestAfterActionVals = System_Int32__TryParse(v11->m_Items[v12], &result, 0);
        if ( QuestAfterActionVals && result == 701 )
        {
          if ( !questAfterAction )
            goto LABEL_25;
          if ( (unsigned int)(v12 + 1) >= LODWORD(questAfterAction->max_length) )
LABEL_28:
            sub_2213CE4(QuestAfterActionVals);
          QuestAfterActionVals = System_String__op_Equality(
                                   questAfterAction->m_Items[v12 + 1],
                                   (System_String_o *)StringLiteral_1248/*"1"*/,
                                   0);
          if ( QuestAfterActionVals )
            break;
        }
        v11 = questAfterAction;
        v12 += 2;
        if ( !questAfterAction )
          goto LABEL_25;
      }
    }
    else
    {
      return 0;
    }
  }
  return v6;
}


void QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  QuestAfterAction_c *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596D171 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D171 = 1;
  }
  v4 = QuestAfterAction_TypeInfo;
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, method, v2);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v4);
  this->fields.commandBuf = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.commandBuf, 0, v5, v6, v7, v8, v9, v10);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_596D166 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D166 = 1;
  }
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, actionVals, method);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_array *afterActionVals; // x23
  Il2CppObject *Instance; // x22
  __int64 Master_object; // x0
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x8
  int32_t v18; // w24
  __int64 v19; // x8
  __int64 v20; // x8
  int32_t v21; // w25
  TerminalPramsManager_c *v22; // x0
  TerminalSceneComponent_c *v23; // x8
  int v24; // w10
  __int64 v25; // x8
  __int64 v26; // x8
  int32_t v27; // w24
  __int64 v28; // x2
  TerminalPramsManager_c *v29; // x0
  TerminalSceneComponent_c *v30; // x8
  int v31; // w10
  __int64 v32; // x8
  __int64 v33; // x8
  int32_t v34; // w24
  int32_t v35; // w19
  TerminalPramsManager_c *v36; // x0
  int v37; // w9
  TerminalSceneComponent_c *v38; // x0
  TerminalPramsManager_c *v39; // x0
  __int64 v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  int32_t v43; // w24
  __int64 v44; // x1
  __int64 v45; // x2
  int32_t v46; // w24
  unsigned int v47; // w8
  System_String_o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  bool v51; // w24
  bool v52; // w23
  int v53; // w9
  __int64 v54; // x2
  Il2CppObject *MasterData_object; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v57; // x23
  BalanceConfig_c *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  bool v61; // w8
  long double v62; // q0
  int v63; // w9
  bool v64; // w0
  __int64 v65; // x2
  Il2CppObject *v66; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  __int64 v68; // x2
  Il2CppObject *v69; // x23
  bool QuestEntity; // w0
  __n128 inited; // q0
  TerminalPramsManager_c *v72; // x0
  __int64 v73; // x2
  Il2CppObject *v74; // x23
  int32_t v75; // w24
  __int64 v76; // x1
  __int64 v77; // x2
  Il2CppObject *v78; // x22
  long double v79; // q0
  int32_t v80; // w23
  __int64 v81; // x2
  Il2CppObject *v82; // x22
  int32_t v83; // w24
  __int64 v84; // x2
  TerminalPramsManager_c *v85; // x0
  TerminalPramsManager_c *v86; // x0
  int v87; // w9
  int v88; // w9
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v90; // x8
  TerminalSceneComponent_c *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x2
  Il2CppObject *v95; // x20
  __int64 v96; // x2
  TerminalPramsManager_c *v97; // x0
  il2cpp_array_size_t max_length; // x8
  __int64 v99; // x0
  unsigned int **p_commandBuf; // x22
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  __int64 v107; // x2
  int *commandBuf; // x8
  unsigned __int64 v109; // x24
  unsigned int v110; // w20
  __int64 v111; // x25
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  unsigned int v118; // w9
  __int64 v119; // x8
  System_String_o *v120; // x1
  System_String_o **v121; // x26
  const MethodInfo *v122; // x4
  const MethodInfo *v123; // x2
  int v124; // w8
  bool v125; // w8
  __int64 v126; // x8
  __int64 v127; // x27
  int32_t v128; // w27
  unsigned int v129; // w8
  const MethodInfo *v130; // x1
  __int64 v131; // x2
  System_Collections_Generic_List_int__o *Item; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v134; // x9
  __int64 size; // x10
  QuestAfterAction_o *v136; // x0
  const MethodInfo *v137; // x2
  __int64 v138; // x8
  __int64 v139; // x26
  unsigned __int64 v140; // x27
  __int64 v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  unsigned int *v144; // x26
  __int64 v145; // x1
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  unsigned int *v152; // x0
  __int64 v153; // x1
  __int64 v154; // x2
  TerminalPramsManager_c *v155; // x0
  BalanceConfig_c *v156; // x8
  int32_t WarId_k__BackingField; // w28
  TerminalPramsManager_c *v158; // x0
  int32_t v159; // w28
  TerminalPramsManager_c *v160; // x0
  __int64 v161; // x2
  Il2CppObject *v162; // x21
  TerminalPramsManager_c *v163; // x0
  BalanceConfig_c *v164; // x8
  int32_t v165; // w19
  long double v166; // q0
  unsigned int klass; // w21
  TerminalPramsManager_c *v168; // x0
  TerminalPramsManager_c *v169; // x0
  int v170; // w9
  int v171; // w9
  BalanceConfig_c *v172; // x8
  int32_t v173; // w20
  TerminalPramsManager_c *v174; // x0
  int v175; // w9
  TerminalPramsManager_c *v176; // x0
  __int64 v177; // x8
  ScrTerminalListTop_o *v178; // x20
  bool IsPlanetMapWarId; // w8
  TerminalPramsManager_c *v180; // x0
  __int64 v181; // x0
  char v182; // [xsp+4h] [xbp-8Ch]
  OpeningMovieEntity_o *ent; // [xsp+8h] [xbp-88h] BYREF
  Il2CppObject *v184; // [xsp+10h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  Il2CppObject *v186; // [xsp+20h] [xbp-70h] BYREF
  QuestEntity_o *v187; // [xsp+28h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_596D159 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&QuestAfterAction_Command___TypeInfo);
    sub_2213A60(&QuestAfterAction_Command_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_WarMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&GrandQuestViewSwitcher_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&ScrTerminalListTop_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_17409/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_2213A60(&StringLiteral_869/*","*/);
    byte_596D159 = 1;
  }
  v186 = 0;
  v187 = 0;
  entity = 0;
  v184 = 0;
  ent = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1;
  v4->fields.isLoadedVoice = 0;
  v4->fields.isSkippedNext = 0;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_38653BC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_596A92D = 1;
    }
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      v7 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v7->static_fields->_PhaseCnt_k__BackingField;
    if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v5, v6);
    afterActionVals = QuestAfterAction__GetBeforeAction(QuestId_k__BackingField, PhaseCnt_k__BackingField + 1, v6);
    goto LABEL_217;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Master_object = (__int64)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
    Master_object = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v15 = **(_QWORD **)(Master_object + 184);
  if ( !v15 )
    goto LABEL_493;
  if ( *(_QWORD *)(v15 + 472) )
  {
    if ( !*(_DWORD *)(Master_object + 228) )
      j_il2cpp_runtime_class_init_0(Master_object, v10, v11);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Master_object = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
      Master_object = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v16 = **(_QWORD **)(Master_object + 184);
    if ( !v16 )
      goto LABEL_493;
    v17 = *(_QWORD *)(v16 + 472);
    if ( !v17 )
      goto LABEL_493;
    v18 = *(_DWORD *)(v17 + 20);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      Master_object = (__int64)TerminalSceneComponent_TypeInfo;
      byte_596A090 = 1;
    }
    if ( !*(_DWORD *)(Master_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v10, v11);
      Master_object = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v19 = **(_QWORD **)(Master_object + 184);
    if ( !v19 )
      goto LABEL_493;
    v20 = *(_QWORD *)(v19 + 472);
    if ( !v20 )
      goto LABEL_493;
    v21 = *(_DWORD *)(v20 + 16);
    if ( v21 < 1 )
    {
      if ( v18 < 1 )
        goto LABEL_93;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
      if ( !byte_596AEF7 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596AEF7 = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v30 = TerminalSceneComponent_TypeInfo;
      v31 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
      v29->static_fields->_QuestId_k__BackingField = 0;
      if ( !v31 )
        j_il2cpp_runtime_class_init_0(v30, v10, v11);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Master_object = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
        Master_object = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v32 = **(_QWORD **)(Master_object + 184);
      if ( !v32 )
        goto LABEL_493;
      v33 = *(_QWORD *)(v32 + 472);
      if ( !v33 )
        goto LABEL_493;
      afterActionVals = *(System_String_array **)(v33 + 32);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_493;
      Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 v18,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_493;
      v34 = *(_DWORD *)(Master_object + 24);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_493;
      Master_object = (__int64)WarMaster__getByEventId((WarMaster_o *)Master_object, v34, 0);
      if ( !Master_object )
        goto LABEL_493;
    }
    else
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
      if ( !byte_596AEF7 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596AEF7 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v23 = TerminalSceneComponent_TypeInfo;
      v24 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
      v22->static_fields->_QuestId_k__BackingField = 0;
      if ( !v24 )
        j_il2cpp_runtime_class_init_0(v23, v10, v11);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      Master_object = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
        Master_object = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v25 = **(_QWORD **)(Master_object + 184);
      if ( !v25 )
        goto LABEL_493;
      v26 = *(_QWORD *)(v25 + 472);
      if ( !v26 )
        goto LABEL_493;
      if ( !Instance )
        goto LABEL_493;
      afterActionVals = *(System_String_array **)(v26 + 32);
      Master_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_object )
        goto LABEL_493;
      Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 v21,
                                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_493;
      v27 = *(_DWORD *)(Master_object + 28);
      Master_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_object )
        goto LABEL_493;
      Master_object = (__int64)WarMaster__getByEventId((WarMaster_o *)Master_object, v27, 0);
      if ( !Master_object )
        goto LABEL_493;
    }
    v35 = *(_DWORD *)(Master_object + 16);
    if ( !byte_596AEFA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEFA = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v28);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v37 = (unsigned __int8)byte_596A090;
    v36->static_fields->_WarId_k__BackingField = v35;
    if ( !v37 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v38 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v28);
      v38 = TerminalSceneComponent_TypeInfo;
    }
    Master_object = (__int64)v38->static_fields->mInstance;
    if ( !Master_object )
      goto LABEL_493;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)Master_object, 0, 0);
    if ( afterActionVals )
      goto LABEL_217;
  }
LABEL_93:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
  if ( !byte_596D193 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D193 = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    v39 = TerminalPramsManager_TypeInfo;
  }
  if ( !v39->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, 0) )
  {
    Master_object = (__int64)UnityEngine_PlayerPrefs__GetString_83398240((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, 0);
    if ( !Master_object )
      goto LABEL_493;
    Master_object = (__int64)System_String__Split((System_String_o *)Master_object, 0x2Cu, 0, 0);
    if ( !Master_object )
      goto LABEL_493;
    v40 = Master_object;
    if ( !*(_DWORD *)(Master_object + 24) )
      goto LABEL_494;
    v43 = System_Int32__Parse(*(System_String_o **)(Master_object + 32), 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
    if ( !byte_596AEF7 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEF7 = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL) = v43;
    if ( (*(_DWORD *)(v40 + 24) & 0xFFFFFFFE) == 0 )
      goto LABEL_494;
    v46 = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
    if ( !byte_596AEF9 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596AEF9 = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v44, v45);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    v47 = *(_DWORD *)(v40 + 24);
    *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 24LL) = v46;
    if ( v47 <= 2 )
      goto LABEL_494;
    v48 = *(System_String_o **)(v40 + 48);
    if ( !*(_DWORD *)(qword_5984328 + 228) )
      j_il2cpp_runtime_class_init_0(qword_5984328, v44, v45);
    v51 = System_Boolean__Parse(v48, 0);
    if ( !byte_596D194 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D194 = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49, v50);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_object + 184) + 101LL) = v51;
    if ( (*(_DWORD *)(v40 + 24) & 0xFFFFFFFC) == 0 )
      goto LABEL_494;
    v52 = System_Boolean__Parse(*(System_String_o **)(v40 + 56), 0);
    if ( !byte_596D195 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D195 = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    v53 = (unsigned __int8)byte_596D196;
    *(_BYTE *)(*(_QWORD *)(Master_object + 184) + 102LL) = v52;
    if ( !v53 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      byte_596D196 = 1;
    }
    if ( !*(_DWORD *)(Master_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v10, v11);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Master_object + 184) + 101LL) )
    {
      if ( !Instance )
        goto LABEL_493;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v54);
      if ( !byte_596A92E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92E = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v54);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !MasterData_object )
        goto LABEL_493;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)MasterData_object,
                  *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL),
                  0);
      if ( QuestId )
      {
        v57 = QuestId;
        v58 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v11);
          v58 = BalanceConfig_TypeInfo;
        }
        v61 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v58->static_fields->MainInterludeMapReturnWarIds,
                v57->fields.id,
                (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
        v63 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
        if ( v61 )
        {
          if ( !v63 )
            *(__n128 *)&v62 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v59, v60);
          sub_2909658(0, 0, v62);
        }
        else
        {
          if ( !v63 )
            *(__n128 *)&v62 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v59, v60);
          sub_2909658(1, 0, v62);
          sub_255F89C((unsigned int)v57->fields.id, 0);
          v64 = TerminalPramsManager__CheckIsOrdealCallWarClear(v57, 0);
          sub_29096B8(v64, 0);
        }
      }
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  v66 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v65);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  Master_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v65);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v66 )
    goto LABEL_493;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)v66,
                 *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 4LL),
                 0);
  if ( !byte_596D199 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D199 = 1;
  }
  Master_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Master_object + 184) + 91LL) )
  {
    if ( !*(_DWORD *)(Master_object + 228) )
      j_il2cpp_runtime_class_init_0(Master_object, v10, v11);
    if ( !byte_596CDF6 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDF6 = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(Master_object + 184) + 92LL) )
      goto LABEL_216;
  }
  if ( !Instance )
    goto LABEL_493;
  v69 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v68);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  Master_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v68);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v69 )
    goto LABEL_493;
  QuestEntity = QuestMaster__TryGetQuestEntity(
                  (QuestMaster_o *)v69,
                  &entity,
                  *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL),
                  0);
  afterActionVals = 0;
  if ( !QuestEntity )
    goto LABEL_217;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_493;
  if ( !QuestEntity__IsOpenByTime(entity, 0, 0) )
  {
    if ( OpenEntity )
    {
      afterActionVals = 0;
      if ( !WarReleaseEntity__IsOpen(OpenEntity, 0) )
        goto LABEL_217;
      goto LABEL_184;
    }
LABEL_216:
    afterActionVals = 0;
    goto LABEL_217;
  }
LABEL_184:
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
  if ( !byte_596D193 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D193 = 1;
  }
  v72 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    v72 = TerminalPramsManager_TypeInfo;
  }
  if ( v72->static_fields->_IsPhaseClear_k__BackingField )
  {
    v74 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v73);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v73);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    v75 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL);
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      byte_596A92D = 1;
    }
    if ( !*(_DWORD *)(Master_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v10, v73);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v74 )
      goto LABEL_493;
    afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                        (QuestPhaseDetailAddMaster_o *)v74,
                        v75,
                        *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 24LL) + 1,
                        0);
    if ( afterActionVals )
      goto LABEL_217;
    v78 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v79 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v76, v77);
    v80 = sub_2909608(0, v79);
    Master_object = sub_2909718(0);
    if ( !v78 )
      goto LABEL_493;
    afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                        (QuestPhaseDetailMaster_o *)v78,
                        v80,
                        (int)Master_object + 1,
                        0);
    if ( afterActionVals )
      goto LABEL_217;
    v72 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v72->_2.cctor_finished + 1) )
    inited = j_il2cpp_runtime_class_init_0(v72, v10, v11);
  afterActionVals = 0;
  if ( (sub_29095B8(0, *(long double *)&inited) & 1) != 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    Master_object = TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
    afterActionVals = 0;
    if ( (Master_object & 1) == 0 )
    {
      if ( !entity )
        goto LABEL_493;
      afterActionVals = entity->fields.afterActionVals;
    }
  }
LABEL_217:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  v82 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v81);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  Master_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v81);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  v83 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !*(_DWORD *)(Master_object + 228) )
  {
    j_il2cpp_runtime_class_init_0(Master_object, v10, v81);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v82 )
    goto LABEL_493;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v82,
         v83,
         *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 24LL) + 1,
         7,
         0) )
  {
    goto LABEL_498;
  }
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v10, v84);
  if ( QuestAfterAction__IsOverwriteCommandNone(afterActionVals, (const MethodInfo *)v10)
    || !afterActionVals
    || (max_length = afterActionVals->max_length, (int)max_length < 2)
    || (max_length & 1) != 0 )
  {
LABEL_498:
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v84);
    if ( !byte_596D19A )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D19A = 1;
    }
    v85 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v84);
      v85 = TerminalPramsManager_TypeInfo;
    }
    if ( v85->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !*(&v85->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v85, v10, v84);
      if ( !byte_596ABDE )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596ABDE = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v84);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v87 = (unsigned __int8)byte_596CEB4;
      v86->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !v87 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
        byte_596CEB4 = 1;
      }
      if ( !*(&v86->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v86, v10, v84);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v88 = (unsigned __int8)byte_596D19A;
      v86->static_fields->_DispState_k__BackingField = 2;
      if ( !v88 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
        byte_596D19A = 1;
      }
      if ( !*(&v86->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v86, v10, v84);
        v86 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v86->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_596AEFA )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
        byte_596AEFA = 1;
      }
      if ( !*(&v86->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v86, v10, v84);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v90 = TerminalSceneComponent_TypeInfo;
      v86->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !*(&v90->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v90, v10, v84);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      v91 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v84);
        v91 = TerminalSceneComponent_TypeInfo;
      }
      Master_object = (__int64)v91->static_fields->mInstance;
      if ( !Master_object )
        goto LABEL_493;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)Master_object, 0, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v92, v93);
      v95 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_596A743 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A743 = 1;
      }
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v94);
        Master_object = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !v95 )
        goto LABEL_493;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v95,
             &v184,
             *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 4LL),
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        Master_object = (__int64)v184;
        if ( !v184 )
          goto LABEL_493;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v184, 0);
      }
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v96);
      if ( !byte_596D19B )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596D19B = 1;
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v96);
        v97 = TerminalPramsManager_TypeInfo;
      }
      v97->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, 0);
    return;
  }
  v99 = sub_2213B20(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v99;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.commandBuf, v99, v101, v102, v103, v104, v105, v106);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_493;
  v182 = 0;
  v109 = 0;
  v110 = 0;
  while ( (__int64)v109 < commandBuf[6] )
  {
    v111 = sub_2213CCC(QuestAfterAction_Command_TypeInfo);
    QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v111, 0);
    if ( v110 >= LODWORD(afterActionVals->max_length) )
      goto LABEL_494;
    Master_object = System_Int32__Parse(afterActionVals->m_Items[v110], 0);
    if ( !v111 )
      goto LABEL_493;
    v118 = afterActionVals->max_length;
    *(_DWORD *)(v111 + 16) = Master_object;
    v119 = (int)v110 | 1LL;
    if ( (unsigned int)v119 >= v118 )
      goto LABEL_494;
    v120 = afterActionVals->m_Items[v119];
    *(_QWORD *)(v111 + 24) = v120;
    v121 = (System_String_o **)(v111 + 24);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v111 + 24), (int32_t)v120, v112, v113, v114, v115, v116, v117);
    QuestAfterAction__SetupCommandPreprocess(v4, (QuestAfterAction_Command_o *)v111, v109, 1, v122);
    if ( !v110 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v111 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( v4->fields.MapMoveBeforeFocusSpotId < 0 && *(_DWORD *)(v111 + 16) == 350 )
    {
      Master_object = (__int64)*v121;
      if ( !*v121 )
        goto LABEL_493;
      Master_object = (__int64)System_String__Split((System_String_o *)Master_object, 0x2Cu, 0, 0);
      if ( !Master_object )
        goto LABEL_493;
      if ( *(int *)(Master_object + 24) >= 4 )
      {
        Master_object = System_Int32__Parse(*(System_String_o **)(Master_object + 56), 0);
        v4->fields.MapMoveBeforeFocusSpotId = Master_object;
      }
    }
    v124 = *(_DWORD *)(v111 + 16);
    if ( !v4->fields.IsMoveToEventRewardShop && v124 == 700 )
    {
      v4->fields.IsMoveToEventRewardShop = 1;
LABEL_306:
      v124 = *(_DWORD *)(v111 + 16);
      goto LABEL_322;
    }
    if ( v124 == 703 )
    {
      Master_object = (__int64)*v121;
      if ( !*v121 )
        goto LABEL_493;
      Master_object = (__int64)System_String__Split_75708724(
                                 (System_String_o *)Master_object,
                                 (System_String_o *)StringLiteral_869/*","*/,
                                 0,
                                 0);
      if ( !Master_object )
        goto LABEL_493;
      if ( *(int *)(Master_object + 24) >= 3 )
      {
        Master_object = System_Int32__Parse(*(System_String_o **)(Master_object + 48), 0);
        v125 = (int)Master_object > 0;
      }
      else
      {
        v125 = 0;
      }
      v4->fields.IsMoveBeforeFadeIn = v125;
      v124 = *(_DWORD *)(v111 + 16);
      v4->fields.IsMoveToClassScore = 1;
    }
    if ( v124 == 702 )
    {
      Master_object = (__int64)*v121;
      if ( !*v121 )
        goto LABEL_493;
      Master_object = (__int64)System_String__Split_75708724(
                                 (System_String_o *)Master_object,
                                 (System_String_o *)StringLiteral_869/*","*/,
                                 0,
                                 0);
      if ( !Master_object )
        goto LABEL_493;
      v126 = *(_QWORD *)(Master_object + 24);
      v127 = Master_object;
      if ( v126 )
      {
        if ( !(_DWORD)v126 )
          goto LABEL_494;
        Master_object = System_Int32__Parse(*(System_String_o **)(Master_object + 32), 0);
        if ( (int)Master_object >= 1 )
        {
          if ( *(int *)(v127 + 24) < 2 )
            v128 = 0;
          else
            v128 = System_Int32__Parse(*(System_String_o **)(v127 + 40), 0);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v123);
          TerminalPramsManager__SetAutoResumeForFolder(v128, 0);
          if ( !byte_596A743 )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596A743 = 1;
          }
          v155 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v153, v154);
            v155 = TerminalPramsManager_TypeInfo;
          }
          v156 = BalanceConfig_TypeInfo;
          WarId_k__BackingField = v155->static_fields->_WarId_k__BackingField;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v153, v154);
            v156 = BalanceConfig_TypeInfo;
          }
          if ( WarId_k__BackingField == v156->static_fields->OrdealCallWarId )
          {
            v4->fields.BlankEarthTargetWarId = v128;
            v182 = 1;
          }
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v153, v154);
          if ( !byte_596A743 )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596A743 = 1;
          }
          v158 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v153, v154);
            v158 = TerminalPramsManager_TypeInfo;
          }
          v159 = v158->static_fields->_WarId_k__BackingField;
          if ( !*(&ScrTerminalListTop_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo, v153, v154);
          Master_object = ScrTerminalListTop__IsGrandQuestWarId(v159, 0);
          if ( (Master_object & 1) != 0 )
          {
            if ( !*(&GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo, v10, v123);
            Master_object = GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(v128, &ent, 1, 0);
            if ( (Master_object & 1) != 0 )
              v4->fields.IsWaitFadeInForGrandQuestMovie = 1;
          }
        }
      }
      goto LABEL_306;
    }
LABEL_322:
    if ( v124 <= 208 )
    {
      if ( (unsigned int)(v124 - 100) < 0xF && ((0x7C1Fu >> (v124 - 100)) & 1) != 0 )
      {
        v10 = 0;
      }
      else
      {
        if ( (unsigned int)(v124 - 209) < 0xFFFFFFF7 )
          goto LABEL_344;
        v10 = 1;
      }
    }
    else if ( (unsigned int)v124 <= 0x226 )
    {
      if ( (unsigned int)(v124 - 413) > 0xFFFFFFF2 )
      {
        v10 = 2;
      }
      else
      {
        if ( v124 != 550 )
          goto LABEL_344;
        v10 = 3;
      }
    }
    else
    {
      v129 = v124 - 1000;
      if ( v129 >= 0xD || ((0x1C07u >> v129) & 1) == 0 )
        goto LABEL_344;
      v10 = 4;
    }
    Master_object = (__int64)v4->fields.commandTypeIds;
    if ( !Master_object )
      goto LABEL_493;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Master_object,
                                                       v10,
                                                       (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v130, v131);
    Master_object = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v111, v130);
    if ( !Item )
      goto LABEL_493;
    items = Item->fields._items;
    v134 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_493;
    size = Item->fields._size;
    v10 = (unsigned int)Master_object;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        Master_object,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = Master_object;
    }
LABEL_344:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v111, v123);
    if ( *(_DWORD *)(v111 + 16) == 102 )
    {
      v136 = (QuestAfterAction_o *)System_Int32__Parse(*v121, 0);
      Master_object = (__int64)QuestAfterAction__GetMapGimmickId(v136, (int32_t)v136, v137);
      if ( !Master_object )
        goto LABEL_493;
      v138 = *(_QWORD *)(Master_object + 24);
      v139 = Master_object;
      if ( (int)v138 >= 1 )
      {
        v140 = 0;
        while ( v140 < (unsigned int)v138 )
        {
          Master_object = (__int64)v4->fields.invalidMapGimmickIdList;
          if ( !Master_object )
            goto LABEL_493;
          v141 = *(_QWORD *)(Master_object + 16);
          v10 = *(unsigned int *)(v139 + 32 + 4 * v140);
          v142 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(Master_object + 28);
          if ( !v141 )
            goto LABEL_493;
          v143 = *(int *)(Master_object + 24);
          if ( (unsigned int)v143 >= *(_DWORD *)(v141 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Master_object,
              v10,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          }
          else
          {
            *(_DWORD *)(Master_object + 24) = v143 + 1;
            *(_DWORD *)(v141 + 4 * v143 + 32) = v10;
          }
          LODWORD(v138) = *(_DWORD *)(v139 + 24);
          if ( (__int64)++v140 >= (int)v138 )
            goto LABEL_357;
        }
LABEL_494:
        sub_2213CE4(Master_object);
      }
    }
LABEL_357:
    v144 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_493;
    Master_object = sub_2213BB4(v111, *(_QWORD *)(*(_QWORD *)v144 + 64LL));
    if ( !Master_object )
    {
      v181 = sub_2213D00(0, v145);
      sub_2213BA0(v181, 0);
    }
    if ( v109 >= v144[6] )
      goto LABEL_494;
    v152 = &v144[2 * v109];
    *((_QWORD *)v152 + 4) = v111;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v152 + 8), v111, v146, v147, v148, v149, v150, v151);
    commandBuf = (int *)*p_commandBuf;
    v110 += 2;
    ++v109;
    if ( !*p_commandBuf )
      goto LABEL_493;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
  if ( !byte_596D193 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D193 = 1;
  }
  v160 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
    v160 = TerminalPramsManager_TypeInfo;
  }
  if ( v160->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v107);
    v162 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v161);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v161);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v162 )
      goto LABEL_493;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v162,
           &v187,
           *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL),
           0) )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
      if ( !byte_596A743 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A743 = 1;
      }
      v163 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
        v163 = TerminalPramsManager_TypeInfo;
      }
      v164 = BalanceConfig_TypeInfo;
      v165 = v163->static_fields->_WarId_k__BackingField;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v107);
        v164 = BalanceConfig_TypeInfo;
      }
      if ( v165 == v164->static_fields->OrdealCallWarId )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v107);
        Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v187 && Master_object )
        {
          Master_object = DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &v186,
                            v187->fields.spotId,
                            (const MethodInfo_3F10B80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (Master_object & 1) == 0 )
            goto LABEL_421;
          if ( v186 )
          {
            klass = (unsigned int)v186[1].klass;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v166 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
            sub_2909768(klass, 0, v166);
            goto LABEL_421;
          }
        }
LABEL_493:
        sub_2213CDC(Master_object, v10);
      }
    }
  }
LABEL_421:
  v168 = TerminalPramsManager_TypeInfo;
  if ( (v182 & 1) == 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
    if ( !byte_596ABDE )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596ABDE = 1;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
      v169 = TerminalPramsManager_TypeInfo;
    }
    v170 = (unsigned __int8)byte_596CEB4;
    v169->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !v170 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v169 = TerminalPramsManager_TypeInfo;
      byte_596CEB4 = 1;
    }
    if ( !*(&v169->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v169, v10, v107);
      v169 = TerminalPramsManager_TypeInfo;
    }
    v171 = (unsigned __int8)byte_596A743;
    v169->static_fields->_DispState_k__BackingField = 2;
    if ( !v171 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v169 = TerminalPramsManager_TypeInfo;
      byte_596A743 = 1;
    }
    if ( !*(&v169->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v169, v10, v107);
      v169 = TerminalPramsManager_TypeInfo;
    }
    v172 = BalanceConfig_TypeInfo;
    v173 = v169->static_fields->_WarId_k__BackingField;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10, v107);
      v172 = BalanceConfig_TypeInfo;
      v169 = TerminalPramsManager_TypeInfo;
    }
    if ( v173 == v172->static_fields->OrdealCallWarId )
      goto LABEL_499;
    if ( !*(&v169->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v169, v10, v107);
    if ( !byte_596CDF6 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDF6 = 1;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
      v169 = TerminalPramsManager_TypeInfo;
    }
    if ( v169->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_499:
      if ( !*(&v169->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v169, v10, v107);
      if ( !byte_596CDEF )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CDEF = 1;
      }
      v174 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
        v174 = TerminalPramsManager_TypeInfo;
      }
      v175 = (unsigned __int8)byte_596CDF6;
      v174->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !v175 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        v174 = TerminalPramsManager_TypeInfo;
        byte_596CDF6 = 1;
      }
      if ( !*(&v174->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v174, v10, v107);
        v174 = TerminalPramsManager_TypeInfo;
      }
      if ( !v174->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !*(&v174->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v174, v10, v107);
        if ( !byte_596CEB4 )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596CEB4 = 1;
        }
        v176 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
          v176 = TerminalPramsManager_TypeInfo;
        }
        v176->static_fields->_DispState_k__BackingField = 3;
      }
    }
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v107);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Master_object = (__int64)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v107);
      Master_object = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v177 = **(_QWORD **)(Master_object + 184);
    if ( !v177 )
      goto LABEL_493;
    v178 = *(ScrTerminalListTop_o **)(v177 + 256);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v178 )
      goto LABEL_493;
    IsPlanetMapWarId = ScrTerminalListTop__IsPlanetMapWarId(
                         v178,
                         *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 4LL),
                         0);
    v168 = TerminalPramsManager_TypeInfo;
    if ( IsPlanetMapWarId )
    {
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
      if ( !byte_596CEB4 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CEB4 = 1;
      }
      v168 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
        v168 = TerminalPramsManager_TypeInfo;
      }
      v168->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !*(&v168->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v168, v10, v107);
  if ( !byte_596A15A )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A15A = 1;
  }
  v180 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
    v180 = TerminalPramsManager_TypeInfo;
  }
  v180->static_fields->_SpotId_k__BackingField = -1;
}


void QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_596D157 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17409/*"afterActionBk"*/);
    byte_596D157 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, 0);
}


void QuestAfterAction__EnqueueVoiceLoadCallback(
        QuestAfterAction_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestAfterAction_o *v9; // x20
  System_Collections_Generic_List_object__o *pendingVoiceLoadCallbackList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_596D184 & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_2213A60(&Method_System_Collections_Generic_List_Action__Add__);
    byte_596D184 = 1;
  }
  if ( callback )
  {
    pendingVoiceLoadCallbackList = (System_Collections_Generic_List_object__o *)v9->fields.pendingVoiceLoadCallbackList;
    if ( !pendingVoiceLoadCallbackList
      || (items = pendingVoiceLoadCallbackList->fields._items,
          v12 = Method_System_Collections_Generic_List_Action__Add__,
          ++pendingVoiceLoadCallbackList->fields._version,
          !items) )
    {
      sub_2213CDC(this, callback);
    }
    size = pendingVoiceLoadCallbackList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        pendingVoiceLoadCallbackList,
        (Il2CppObject *)callback,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      pendingVoiceLoadCallbackList->fields._size = size + 1;
      v14[4] = (Il2CppClass *)callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(v14 + 4),
        (int32_t)callback,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
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

  if ( (byte_596D178 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___91680904);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_Command__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D178 = 1;
  }
  ReservedCommandListBeforeFadeIn_k__BackingField = this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  memset(&v16, 0, sizeof(v16));
  if ( ReservedCommandListBeforeFadeIn_k__BackingField
    && ReservedCommandListBeforeFadeIn_k__BackingField->fields._size >= 1 )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)ReservedCommandListBeforeFadeIn_k__BackingField,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___91680904);
    if ( !v4 )
      sub_2213CDC(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v4,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
        if ( !v7 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v16,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
          return;
        }
        current = v16.fields._current;
        if ( !v16.fields._current )
          sub_2213CDC(v7, v8);
        klass = (int)v16.fields._current[1].klass;
        if ( klass != 1300 )
          break;
        if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v8, v9);
        v12 = QuestAfterAction__TryEventUiDisableCommand((QuestAfterAction_Command_o *)current, v8);
LABEL_21:
        if ( v12 )
        {
          v14 = (System_Collections_Generic_List_object__o *)this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
          if ( !v14 )
            sub_2213CDC(0, v13);
          System_Collections_Generic_List_object___Remove(
            v14,
            current,
            (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
        }
      }
      if ( klass == 1310 )
      {
        if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v8, v9);
        v12 = QuestAfterAction__TryRaidUiDisableCommand((QuestAfterAction_Command_o *)current, 0, v9);
        goto LABEL_21;
      }
      if ( klass == 1312 )
      {
        if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v8, v9);
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
    sub_2213CDC(0, v3);
  max_length = BlankEarthTutorialCommand->max_length;
  v6 = BlankEarthTutorialCommand;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(BlankEarthTutorialCommand);
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
  if ( (byte_596D15C & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_2213A60(&StringLiteral_869/*","*/);
    byte_596D15C = 1;
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
  if ( System_String__Contains(v2->fields.param, (System_String_o *)StringLiteral_869/*","*/, 0) )
  {
    command = (QuestAfterAction_Command_o *)v2->fields.param;
    if ( command )
    {
      command = (QuestAfterAction_Command_o *)System_String__Split((System_String_o *)command, 0x2Cu, 0, 0);
      if ( command )
      {
        if ( !LODWORD(command->fields.param) )
          sub_2213CE4(command);
        param = command[1].klass;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_2213CDC(command, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596D167 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    byte_596D167 = 1;
  }
  v5 = sub_2213CCC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)commandEnumerable, v14, v15, v16, v17, v18, v19);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


void QuestAfterAction__FlushVoiceLoadCallbacks(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Action__o *pendingVoiceLoadCallbackList; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_Action__o *v8; // x8
  int32_t size; // w2
  int v10; // w9
  __int64 v11; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596D185 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_Action___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action___ctor___91637848);
    sub_2213A60(&System_Collections_Generic_List_Action__TypeInfo);
    byte_596D185 = 1;
  }
  pendingVoiceLoadCallbackList = this->fields.pendingVoiceLoadCallbackList;
  memset(&v13, 0, sizeof(v13));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)pendingVoiceLoadCallbackList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_Action___) )
  {
    v4 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pendingVoiceLoadCallbackList;
    v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Action__TypeInfo);
    System_Collections_Generic_List_object____ctor_71841080(
      v5,
      v4,
      (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_Action___ctor___91637848);
    v8 = this->fields.pendingVoiceLoadCallbackList;
    if ( !v8 )
      goto LABEL_13;
    size = v8->fields._size;
    v10 = v8->fields._version + 1;
    v8->fields._size = 0;
    v8->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v8->fields._items, 0, size, 0);
    if ( !v5 )
LABEL_13:
      sub_2213CDC(v6, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      v5,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
    v11 = 0;
    v12 = &v13;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      ActionExtensions__Call((System_Action_o *)v13.fields._current, 0);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
  }
}


QuestAfterAction_Command_array *QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  long double v6; // q0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  unsigned int *v11; // x20
  unsigned __int64 v12; // x23
  MissionNaviTransitionBoardItem_o *v13; // x21
  unsigned int v14; // w25
  __int64 v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  unsigned int max_length; // w8
  System_String_o *v23; // x1
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v32; // x0

  if ( (byte_596D15D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_2213A60(&QuestAfterAction_Command___TypeInfo);
    sub_2213A60(&QuestAfterAction_Command_TypeInfo);
    byte_596D15D = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v7 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v8 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v8 )
    {
      sub_224B964(Method_System_Array_Empty_QuestAfterAction_Command___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v6);
    if ( !*(_DWORD *)(v9 + 228) )
      *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v9, v4, v5);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v6);
    return **(QuestAfterAction_Command_array ***)(v10 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_2213B20(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_2213CDC(IsNullOrEmpty, v4);
    }
    v11 = (unsigned int *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v12 = 0;
      v13 = (MissionNaviTransitionBoardItem_o *)(IsNullOrEmpty + 32);
      v14 = 1;
      do
      {
        v15 = sub_2213CCC(QuestAfterAction_Command_TypeInfo);
        QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v15, 0);
        if ( v14 - 1 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v14 - 1], 0);
        if ( !v15 )
          goto LABEL_25;
        max_length = actionVals->max_length;
        *(_DWORD *)(v15 + 16) = IsNullOrEmpty;
        if ( v14 >= max_length )
          goto LABEL_24;
        v23 = actionVals->m_Items[v14];
        *(_QWORD *)(v15 + 24) = v23;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 24), (int32_t)v23, v16, v17, v18, v19, v20, v21);
        IsNullOrEmpty = sub_2213BB4(v15, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v32 = sub_2213D00(0, v24);
          sub_2213BA0(v32, 0);
        }
        if ( v12 >= v11[6] )
LABEL_24:
          sub_2213CE4(IsNullOrEmpty);
        v13->klass = (MissionNaviTransitionBoardItem_c *)v15;
        sub_2213A04(v13, v15, v25, v26, v27, v28, v29, v30);
        ++v12;
        v14 += 2;
        v13 = (MissionNaviTransitionBoardItem_o *)((char *)v13 + 8);
      }
      while ( (__int64)v12 < (int)v11[6] );
    }
  }
  return (QuestAfterAction_Command_array *)v11;
}


System_String_array *QuestAfterAction__GetAfterAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x22
  int32_t v9; // w23
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  System_String_array *v12; // x22
  __int64 v14; // x2
  Il2CppObject *v15; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v17; // x19

  if ( (byte_596D173 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_string___);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D173 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !HIDWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v6, v7);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v12 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v9,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v10, v11);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v12, v10) )
  {
    if ( v12 )
      return v12;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v12 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v12 )
          return v12;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v15 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
          if ( !byte_596A92E )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596A92E = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v15 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v17 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v17[6].klass;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


System_String_array *QuestAfterAction__GetBeforeAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x22
  int32_t v9; // w23
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  System_String_array *v12; // x22
  __int64 v14; // x2
  Il2CppObject *v15; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v17; // x19

  if ( (byte_596D172 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_string___);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D172 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !HIDWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance, v6, v7);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v12 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v9,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v10, v11);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v12, v10) )
  {
    if ( v12 )
      return v12;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v12 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v12 )
          return v12;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v15 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
          if ( !byte_596A92E )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596A92E = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v15 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v15,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v17 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v17[5].monitor;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_2213CDC(Instance, v6);
  }
  return 0;
}


QuestAfterAction_Command_array *QuestAfterAction__GetBlankEarthTutorialCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  System_Array_o *v3; // x20
  __int64 v4; // x21
  System_Collections_Generic_IEnumerable_T__o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  QuestAfterAction___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  struct QuestAfterAction___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__129_0; // x21
  Il2CppObject *v20; // x22
  struct QuestAfterAction___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  QuestAfterAction___c_c *v32; // x8
  System_Collections_Generic_List_object__o *v33; // x21
  struct QuestAfterAction___c_StaticFields *v34; // x9
  System_Func_object__object__o *_9__129_1; // x22
  Il2CppObject *v36; // x23
  struct QuestAfterAction___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  QuestAfterAction_o *v45; // x0
  const MethodInfo *v46; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v47; // x0
  const MethodInfo *v48; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v49; // x0

  if ( (byte_596D176 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_string___);
    sub_2213A60(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_2213A60(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&EventTutorialMaster_OpenType___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB);
    sub_2213A60(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_0__);
    sub_2213A60(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_1__);
    sub_2213A60(&QuestAfterAction___c_TypeInfo);
    byte_596D176 = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(EventTutorialMaster_OpenType___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB,
    0);
  v4 = sub_2213CCC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)v3, v7, v8, v9, v10, v11, v12);
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v4,
                             0);
  v16 = QuestAfterAction___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v14, v15);
    v16 = QuestAfterAction___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__129_0 = (System_Func_object__object__o *)static_fields->__9__129_0;
  if ( !_9__129_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v14, v15);
      static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__129_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__129_0,
      v20,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_0__,
      0);
    v21 = QuestAfterAction___c_TypeInfo->static_fields;
    v21->__9__129_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__129_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__129_0, (int32_t)_9__129_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__129_0,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v29 = System_Linq_Enumerable__ToList_object_(
          v28,
          (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___);
  v32 = QuestAfterAction___c_TypeInfo;
  v33 = (System_Collections_Generic_List_object__o *)v29;
  if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v30, v31);
    v32 = QuestAfterAction___c_TypeInfo;
  }
  v34 = v32->static_fields;
  _9__129_1 = (System_Func_object__object__o *)v34->__9__129_1;
  if ( !_9__129_1 )
  {
    if ( !*(&v32->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v32, v30, v31);
      v34 = QuestAfterAction___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__129_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__129_1,
      v36,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_1__,
      0);
    v37 = QuestAfterAction___c_TypeInfo->static_fields;
    v37->__9__129_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__129_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__129_1, (int32_t)_9__129_1, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__129_1,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v5 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                        v44,
                                                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !v33 )
LABEL_18:
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___AddRange(
    v33,
    v5,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_string__AddRange__);
  v45 = (QuestAfterAction_o *)System_Collections_Generic_List_object___ToArray(
                                v33,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  v47 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v45,
                                                                                (System_String_array *)v45,
                                                                                v46);
  v49 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v47, v48);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetCommandType(QuestAfterAction_o *this, int32_t commandId, const MethodInfo *method)
{
  if ( commandId <= 208 )
  {
    if ( (unsigned int)(commandId - 100) >= 0xF || ((0x7C1Fu >> (commandId - 100)) & 1) == 0 )
    {
      if ( (unsigned int)(commandId - 209) >= 0xFFFFFFF7 )
        return 1;
      return -1;
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)commandId > 0x226 )
    {
      if ( (unsigned int)(commandId - 1000) < 0xD )
        return dword_ED96E8[commandId - 1000];
      return -1;
    }
    if ( (unsigned int)(commandId - 413) <= 0xFFFFFFF2 )
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
        const MethodInfo_39734AC *method)
{
  __int64 v10; // x1
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( !method->rgctx_data )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v12 )
    return 0;
  if ( !MapGameObject )
    sub_2213CDC(v12, v13);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_38B6F40 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3

  v8 = this;
  if ( (byte_596D16D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_2213A60(&SrcSpotBasePrefab_TypeInfo);
    byte_596D16D = 1;
  }
  if ( comType != 2 )
  {
    if ( comType != 1 )
    {
      if ( comType )
      {
        v9 = 0;
        goto LABEL_35;
      }
      if ( !state )
        goto LABEL_46;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subSpotRoot;
        if ( !this )
          goto LABEL_46;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mSpotRoot;
        if ( !this )
          goto LABEL_46;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v16, v17);
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0);
      if ( transform )
        goto LABEL_34;
      goto LABEL_46;
    }
    if ( !state )
      goto LABEL_46;
    if ( state->fields.IsMapModel )
    {
      this = (QuestAfterAction_o *)v8->fields.subRoadRoot;
      if ( !this )
        goto LABEL_46;
    }
    else
    {
      this = (QuestAfterAction_o *)v8->fields.mRoadRoot;
      if ( !this )
        goto LABEL_46;
    }
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0);
    if ( !transform )
LABEL_46:
      sub_2213CDC(this, *(_QWORD *)&comType);
LABEL_34:
    v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0);
    goto LABEL_35;
  }
  if ( !state )
    goto LABEL_46;
  if ( state->fields.IsMapModel )
  {
    this = (QuestAfterAction_o *)QuestAfterAction_StateMain__get_SubGimmickRoot(state, 0);
    if ( !this )
      goto LABEL_46;
LABEL_28:
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v15);
    if ( !transform )
      goto LABEL_46;
    goto LABEL_34;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_46;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v12);
  if ( !v11 )
    goto LABEL_46;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v11, (System_String_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_46;
    goto LABEL_28;
  }
LABEL_35:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&comType, *(_QWORD *)&id);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !state )
        goto LABEL_46;
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v18);
    }
    else
    {
      if ( !state )
        goto LABEL_46;
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))state->klass->vtable._14_EndAnim.methodPtr)(
        state,
        state->klass->vtable._14_EndAnim.method);
    }
    return 0;
  }
  else
  {
    if ( !v9 )
      goto LABEL_46;
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
  unsigned int v9; // w24
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_596D15E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_2213A60(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D15E = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_3F0FEAC *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
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
        sub_2213CE4(Instance);
      v10 = &v8->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v10[4], 0);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        items = v4->fields._items;
        name_low = LODWORD(v11->_1.name);
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_2213CDC(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


QuestAfterAction_Command_array *QuestAfterAction__GetRaidUiSetupCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *EventID; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Array_o *v7; // x21
  __int64 v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  struct TerminalSceneComponent_o *v19; // x8
  struct ScrTerminalMap_o *v20; // x8
  int32_t *p_currentMapId; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  TerminalPramsManager_c *v24; // x0
  __int64 v25; // x2
  int v26; // w8
  TerminalPramsManager_c *v27; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  QuestAfterAction___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  struct QuestAfterAction___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__128_0; // x21
  Il2CppObject *v35; // x22
  struct QuestAfterAction___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  QuestAfterAction_o *v44; // x0
  const MethodInfo *v45; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v46; // x0
  const MethodInfo *v47; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v48; // x0

  if ( (byte_596D175 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_2213A60(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_2213A60(&EventTutorialMaster_OpenType___TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_2213A60(&Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__128_0__);
    sub_2213A60(&QuestAfterAction___c_TypeInfo);
    byte_596D175 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  EventID = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
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
    v7 = (System_Array_o *)sub_2213B20(EventTutorialMaster_OpenType___TypeInfo, 3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
      v7,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305,
      0);
    v8 = sub_2213CCC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v8, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
      v11 = TerminalPramsManager_TypeInfo;
    }
    EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v11->static_fields->_WarId_k__BackingField, 0);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 24) = v7;
      *(_DWORD *)(v8 + 16) = (_DWORD)EventID;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)v7, v12, v13, v14, v15, v16, v17);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v18);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      EventID = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v18);
        EventID = TerminalSceneComponent_TypeInfo;
      }
      v19 = EventID->static_fields->mInstance;
      if ( v19 )
      {
        v20 = v19->fields.mTerminalMap;
        if ( v20 )
        {
          p_currentMapId = &v20->fields.currentMapId;
          goto LABEL_40;
        }
      }
    }
LABEL_47:
    sub_2213CDC(EventID, method);
  }
  v8 = sub_2213CCC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v8, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
    v24 = TerminalPramsManager_TypeInfo;
  }
  EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v24->static_fields->_WarId_k__BackingField, 0);
  if ( !v8 )
    goto LABEL_47;
  v26 = (unsigned __int8)byte_596A743;
  *(_DWORD *)(v8 + 16) = (_DWORD)EventID;
  *(_DWORD *)(v8 + 20) = 18;
  if ( !v26 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v25);
    v27 = TerminalPramsManager_TypeInfo;
  }
  p_currentMapId = &v27->static_fields->_WarId_k__BackingField;
LABEL_40:
  *(_DWORD *)(v8 + 40) = *p_currentMapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v8,
                             0);
  v31 = QuestAfterAction___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v29, v30);
    v31 = QuestAfterAction___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__128_0 = (System_Func_object__object__o *)static_fields->__9__128_0;
  if ( !_9__128_0 )
  {
    if ( !*(&v31->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v31, v29, v30);
      static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__128_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__128_0, v35, Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__128_0__, 0);
    v36 = QuestAfterAction___c_TypeInfo->static_fields;
    v36->__9__128_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__128_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->__9__128_0, (int32_t)_9__128_0, v37, v38, v39, v40, v41, v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v32,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__128_0,
                                                               (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v44 = (QuestAfterAction_o *)System_Linq_Enumerable__ToArray_object_(
                                v43,
                                (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
  v46 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v44,
                                                                                (System_String_array *)v44,
                                                                                v45);
  v48 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v46, v47);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_596D16B & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestAfterAction__getState__);
    byte_596D16B = 1;
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

  if ( (byte_596D187 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_596D187 = 1;
  }
  result = 1;
  if ( !this->fields.isAfterActionVoiceLoadRequested || !QuestAfterAction__HasVoiceToLoad(this, method) )
  {
    if ( !this->fields.isTutorialVoiceLoadRequested )
      return 0;
    v3 = QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, method);
    if ( !System_Linq_Enumerable__Any_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v3,
            (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
      return 0;
  }
  return result;
}


bool QuestAfterAction__HasVoiceToLoad(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v3; // x0

  if ( (byte_596D186 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_596D186 = 1;
  }
  if ( this->fields.voiceLoadedRevision != this->fields.voiceRegisterRevision )
    return 1;
  v3 = QuestAfterAction__BuildPendingVoiceInfoList(this, method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
}


void QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
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
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v29; // x21
  int v30; // w8
  System_Collections_Generic_List_int__o *v31; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_int__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Collections_Generic_List_QuestAfterAction_Command__o **p_ReservedCommandListBeforeFadeIn_k__BackingField; // x19
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7

  if ( (byte_596D158 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_2213A60(&Method_CStateManager_QuestAfterAction__add__);
    sub_2213A60(&CStateManager_QuestAfterAction__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_2213A60(&QuestAfterAction_StateInstant_TypeInfo);
    sub_2213A60(&QuestAfterAction_StateMain_TypeInfo);
    sub_2213A60(&QuestAfterAction_StateNone_TypeInfo);
    byte_596D158 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_2213CCC(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E83D54 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (QuestAfterAction_StateNone_o *)sub_2213CCC(QuestAfterAction_StateNone_TypeInfo);
    QuestAfterAction_StateNone___ctor(v13, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (QuestAfterAction_StateMain_o *)sub_2213CCC(QuestAfterAction_StateMain_TypeInfo);
    QuestAfterAction_StateMain___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_2213CCC(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_2213CCC(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3E83E04 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.commandBuf, 0, v22, v23, v24, v25, v26, v27);
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
                                                                                (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v28,
                                                                                  (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v30 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v30;
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v29 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v29,
        v28,
        (Il2CppObject *)v31,
        (const MethodInfo_3FBC38C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.screenCollider,
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
    sub_2213CDC(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.lastDispSpot, 0, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.invalidMapGimmickIdList,
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_ReservedCommandListBeforeFadeIn_k__BackingField,
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
  struct QuestAfterAction_Command_array *commandBuf; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  _DWORD *QuestInfo; // x0
  TerminalPramsManager_c *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x19
  TerminalPramsManager_c *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w19
  bool isFadeTransition; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596D174 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D174 = 1;
  }
  commandBuf = this->fields.commandBuf;
  isFadeTransition = 0;
  if ( !commandBuf || QuestAfterAction__IsExistTerminalTransition(this, &isFadeTransition, v2) && isFadeTransition )
  {
    LOBYTE(QuestInfo) = 0;
  }
  else
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    if ( !byte_596CDF6 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CDF6 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      v8 = TerminalPramsManager_TypeInfo;
    }
    if ( v8->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      LOBYTE(QuestInfo) = 1;
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
      if ( !byte_596A92E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92E = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
        v12 = TerminalPramsManager_TypeInfo;
      }
      if ( !Instance )
        sub_2213CDC(v12, v9);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v12->static_fields->_QuestId_k__BackingField, 0);
      if ( QuestInfo )
      {
        v15 = QuestInfo[16];
        QuestInfo = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13, v14);
          QuestInfo = BalanceConfig_TypeInfo;
        }
        LOBYTE(QuestInfo) = v15 == *(_DWORD *)(*((_QWORD *)QuestInfo + 23) + 860LL);
      }
    }
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
  int v12; // w9

  if ( !command )
    goto LABEL_20;
  if ( command->fields.id != 1312 )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_20:
    sub_2213CDC(this, command);
  v5 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource)
    || (this = (QuestAfterAction_o *)System_Int32__Parse((System_String_o *)this->fields.invalidMapGimmickIdList, 0),
        ((__int64)v5->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0) )
  {
    sub_2213CE4(this);
  }
  v6 = (int)this;
  v7 = System_Int32__Parse((System_String_o *)v5->fields._TitleInfoCtrlCallback_k__BackingField, 0);
  if ( SLODWORD(v5->fields.m_CancellationTokenSource) >= 3 )
  {
    v8 = System_Int32__Parse((System_String_o *)v5->fields._BlankEarthQuestAfterAction_k__BackingField, 0) > 0;
    if ( SLODWORD(v5->fields.m_CancellationTokenSource) >= 4 )
    {
      v10 = System_Int32__Parse((System_String_o *)v5->fields._PlanetEarthQuestAfterAction_k__BackingField, 0) > 0;
      goto LABEL_13;
    }
  }
  else
  {
    v8 = 0;
  }
  v10 = 0;
LABEL_13:
  v12 = v6 == day || v7 == day || v8;
  return (v10 | v12) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_596D161 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596D161 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_2213CDC(commandTypeIds, *(_QWORD *)&commandType);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistSpotReveal(QuestAfterAction_o *this, int32_t spotId, const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x8
  QuestAfterAction_o *v4; // x19
  signed int v6; // w22
  unsigned int max_length; // w9
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
    v8 = v6 < (int)max_length;
    if ( v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      sub_2213CE4(this);
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
    sub_2213CDC(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool QuestAfterAction__IsExistTerminalTransition(
        QuestAfterAction_o *this,
        bool *isFadeTransition,
        const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x9
  int max_length; // w8
  QuestAfterAction_Command_o **i; // x9
  QuestAfterAction_Command_o *v7; // x20
  int32_t id; // w10
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  *isFadeTransition = 0;
  commandBuf = this->fields.commandBuf;
  result = 0;
  if ( !commandBuf )
    return 0;
  max_length = commandBuf->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = commandBuf->m_Items; ; ++i )
  {
    v7 = *i;
    if ( !*i )
      goto LABEL_17;
    id = v7->fields.id;
    if ( id == 701 )
      return 1;
    if ( id == 702 )
      break;
    if ( !--max_length )
      return 0;
  }
  if ( !System_String__IsNullOrEmpty(v7->fields.param, 0) )
  {
    this = (QuestAfterAction_o *)v7->fields.param;
    if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_17:
      sub_2213CDC(this, isFadeTransition);
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( !(_DWORD)m_CancellationTokenSource )
        sub_2213CE4(this);
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
  __int64 v2; // x2
  ScrTerminalMap_o *v3; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_596D170 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D170 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.subRootGimmickP->klass;
  if ( !klass || (v3 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_2213CDC(v3, method);
  return ScrTerminalMap__IsMapChangeable(v3, 0);
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
  int32_t v10; // [xsp+18h] [xbp-18h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  v9 = 0;
  if ( !cmd )
    goto LABEL_36;
  id = cmd->fields.id;
  v3 = cmd;
  if ( id <= 403 )
  {
    if ( id > 205 )
    {
      if ( (id & 0x7FFFFFFE) != 0x192 )
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
      if ( SLODWORD(v6->max_length) < 5 || !System_Int32__TryParse(v6->m_Items[4], &v10, 0) )
        goto LABEL_16;
      v7 = v10;
    }
    else
    {
      if ( ((1 << v5) & 7) != 0 )
      {
        if ( v6 )
        {
          if ( SLODWORD(v6->max_length) < 4 || !System_Int32__TryParse(v6->m_Items[3], &result, 0) )
            goto LABEL_16;
          v7 = result;
          goto LABEL_30;
        }
LABEL_36:
        sub_2213CDC(cmd, method);
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
  if ( (unsigned int)id <= 0x4B0 )
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
        sub_2213CE4(actionCommand);
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

  if ( (byte_596D16B & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestAfterAction__getState__);
    byte_596D16B = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_596D16B & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestAfterAction__getState__);
    byte_596D16B = 1;
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
      sub_2213CDC(RaidUiSetupCommand, v6);
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
      sub_2213CE4(RaidUiSetupCommand);
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
  __int64 v7; // x2
  int32_t v8; // w1
  BalanceConfig_c *v9; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596D177 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    this = (QuestAfterAction_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596D177 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !command )
    goto LABEL_20;
  if ( command->fields.id != 560 || System_String__IsNullOrEmpty(command->fields.param, 0) )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_20:
    sub_2213CDC(this, command);
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
    if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
      sub_2213CE4(0);
    if ( System_Int32__TryParse((System_String_o *)v4->fields._TitleInfoCtrlCallback_k__BackingField, result, 0) )
    {
      v8 = result[0];
      if ( result[0] >= 1 )
      {
        v9 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, (unsigned int)result[0], v7);
          v9 = BalanceConfig_TypeInfo;
          v8 = result[0];
        }
        if ( System_Linq_Enumerable__Contains_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v9->static_fields->BlankEarthRankChangeEventUiIds,
               v8,
               (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          return 1;
        }
      }
    }
    return 0;
  }
  return v6;
}


bool QuestAfterAction__IsRemainFadeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  bool result; // w0
  struct QuestAfterAction_Command_array *commandBuf; // x8
  __int64 commandIdx; // x9
  int max_length; // w10
  Il2CppClass **v6; // x11
  int v7; // w8
  int v8; // w9
  char *i; // x10
  int v10; // w11

  if ( this->fields.IsMoveBeforeFadeIn )
    return 1;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  commandIdx = this->fields.commandIdx;
  max_length = commandBuf->max_length;
  if ( max_length <= (int)commandIdx )
    return 0;
  v6 = &commandBuf->obj.klass + commandIdx;
  v7 = max_length - commandIdx;
  result = 1;
  if ( max_length >= (unsigned int)commandIdx )
    v8 = max_length - commandIdx;
  else
    v8 = 0;
  for ( i = (char *)(v6 + 4); ; i += 8 )
  {
    if ( !v8 )
      sub_2213CE4(1);
    if ( !*(_QWORD *)i )
      sub_2213CDC(1, method);
    v10 = *(_DWORD *)(*(_QWORD *)i + 16LL);
    if ( v10 == 405 || v10 == 520 )
      break;
    --v7;
    --v8;
    if ( !v7 )
      return 0;
  }
  return result;
}


bool QuestAfterAction__IsSetUpCommandHasHideRaidUi(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_Command_array *RaidUiSetupCommand; // x0
  __int64 v4; // x1
  struct QuestAfterAction_Command_array *commandBuf; // x9
  int v6; // w8
  QuestAfterAction_Command_o **m_Items; // x9
  int32_t v8; // w10
  int max_length; // w9
  int v10; // w11
  QuestAfterAction_Command_o *v11; // x8
  int32_t id; // w12
  bool v13; // w8

  RaidUiSetupCommand = QuestAfterAction__GetRaidUiSetupCommand(this, method);
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf || (v6 = commandBuf->max_length, v6 < 1) )
  {
LABEL_8:
    if ( RaidUiSetupCommand )
    {
      max_length = RaidUiSetupCommand->max_length;
      if ( max_length < 1 )
        return 0;
      v10 = 0;
      while ( 1 )
      {
        if ( max_length == v10 )
          sub_2213CE4(RaidUiSetupCommand);
        v11 = RaidUiSetupCommand->m_Items[v10];
        if ( !v11 )
          break;
        id = v11->fields.id;
        v13 = 1;
        if ( id == 1310 || id == 1312 )
          return v13;
        if ( (max_length & ~(max_length >> 31)) == ++v10 )
          return 0;
      }
    }
LABEL_19:
    sub_2213CDC(RaidUiSetupCommand, v4);
  }
  m_Items = commandBuf->m_Items;
  while ( 1 )
  {
    if ( !*m_Items )
      goto LABEL_19;
    v8 = (*m_Items)->fields.id;
    if ( v8 == 1310 || v8 == 1312 )
      return 1;
    --v6;
    ++m_Items;
    if ( !v6 )
      goto LABEL_8;
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
  __int64 v2; // x2
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalTransitionInfo_o *v6; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v8; // x19
  DataManager_o *v9; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v11; // x23
  EventMissionActionInfo_o *v12; // x21
  Il2CppObject *Entity; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  long double v23; // q0
  Il2CppObject *current; // x21
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  struct TerminalTransitionInfo_o *v36; // x8
  EventMissionActionEntity_o *v37; // x0
  EventMissionActionEntity_o *v38; // x23
  Il2CppObject *v39; // x0
  Il2CppObject *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  TerminalPramsManager_c *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v51; // x8
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596D162 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_2213A60(&EventMissionActionInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D162 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0);
  if ( !TerminalTransitionInfoData )
    return;
  v6 = TerminalTransitionInfoData;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v8 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v8 )
    goto LABEL_63;
  if ( v8->fields._TransitionInfo_k__BackingField )
    return;
  if ( v6->fields.missionId < 1 )
  {
    if ( v6->fields.shopId >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_63;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v6->fields.shopId,
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v16 = Entity;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_63;
        v17 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v16[1].monitor,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v17 || !EventEntity__IsEventPeriod((EventEntity_o *)v17, 0, 0) )
          goto LABEL_62;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_63;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v16[1].klass,
                                  0);
        if ( !Master_object )
          goto LABEL_63;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v52,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v53 = v52;
        v52.fields._list = 0;
        *(_QWORD *)&v52.fields._index = &v53;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v53,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v20 )
            break;
          current = v53.fields._current;
          if ( !v53.fields._current )
            sub_2213CDC(v20, v21);
          if ( LODWORD(v53.fields._current[1].monitor) == 4 )
          {
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
            sub_29097C4(2, 0, v23);
            TerminalSceneComponent__CreateTransitionInfo(v8, v6, 0);
            TransitionInfo_k__BackingField = v8->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_2213CDC(0, v25);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            v36 = v8->fields._TransitionInfo_k__BackingField;
            if ( !v36 )
              sub_2213CDC(v34, v35);
            v36->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        sub_2007A38(&v52);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_63;
    v9 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_63;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v6->fields.missionId,
                                              5,
                                              4,
                                              0);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v11 = EntityFromIdProgressTypeAndActionType;
      v12 = (EventMissionActionInfo_o *)sub_2213CCC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_52779268(v12, v11, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v9,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_63;
      v37 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v6->fields.missionId,
              5,
              4,
              0);
      if ( !v37 )
        return;
      v38 = v37;
      v12 = (EventMissionActionInfo_o *)sub_2213CCC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v12, v38, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v9,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_63;
    v39 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v6->fields.missionId,
            (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v39 )
    {
      v40 = v39;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v9,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_63;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v40[1].monitor),
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_63;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
        if ( !byte_596D19D )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596D19D = 1;
        }
        v43 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
          v43 = TerminalPramsManager_TypeInfo;
        }
        v43->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v8, v6, 0);
        if ( v12 )
        {
          Master_object = (char *)v8->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v12->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(Master_object + 32),
              (int32_t)vals,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49);
            v51 = v8->fields._TransitionInfo_k__BackingField;
            if ( v51 )
            {
              v51->fields.optionId = v12->fields.optionId;
              return;
            }
          }
        }
LABEL_63:
        sub_2213CDC(Master_object, v4);
      }
LABEL_62:
      TerminalSceneComponent__ClearTransitionInfo(v8, 0);
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


void QuestAfterAction__LoadVoice_43019576(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v16; // x28
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Action_o **v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t items; // w0
  System_String_o *VoiceAssetName_49817936; // x19
  Il2CppObject *v32; // x20
  System_Action_o *v33; // x22

  while ( 1 )
  {
    if ( (byte_596D17B & 1) == 0 )
    {
      sub_2213A60(&System_Action_TypeInfo);
      sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_2213A60(&Method_QuestAfterAction___c__DisplayClass150_0__LoadVoice_b__0__);
      sub_2213A60(&QuestAfterAction___c__DisplayClass150_0_TypeInfo);
      byte_596D17B = 1;
    }
    v7 = sub_2213CCC(QuestAfterAction___c__DisplayClass150_0_TypeInfo);
    QuestAfterAction___c__DisplayClass150_0___ctor((QuestAfterAction___c__DisplayClass150_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
    *(_QWORD *)(v7 + 24) = svtVInfos;
    v16 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 24);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)svtVInfos, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v7 + 32) = endAct;
    v23 = (System_Action_o **)(v7 + 32);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)endAct, v24, v25, v26, v27, v28, v29);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 24),
            (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v23, 0);
        return;
      }
LABEL_17:
      sub_2213CDC(Instance, v9);
    }
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v16;
    endAct = *v23;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  items = (int32_t)Instance->fields._items;
  *(_DWORD *)(v7 + 40) = items;
  VoiceAssetName_49817936 = ServantVoiceEntity__getVoiceAssetName_49817936(items, 0);
  v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass150_0__LoadVoice_b__0__, 0);
  if ( !v32 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v32, VoiceAssetName_49817936, v33, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_596D16F & 1) == 0 )
  {
    sub_2213A60(&SrcSpotBasePrefab_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D16F = 1;
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
    if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType, *(_QWORD *)&id);
    return SrcSpotBasePrefab__GetGobjName(id, 0);
  }
}


void QuestAfterAction__MarkRequestedVoiceLoadCompleted(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t voiceRegisterRevision; // w8
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v4; // x0

  if ( (byte_596D189 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_596D189 = 1;
  }
  if ( this->fields.isAfterActionVoiceLoadRequested && !QuestAfterAction__HasVoiceToLoad(this, method) )
  {
    voiceRegisterRevision = this->fields.voiceRegisterRevision;
    this->fields.isAfterActionVoiceLoadRequested = 0;
    this->fields.isLoadedVoice = 1;
    this->fields.voiceLoadedRevision = voiceRegisterRevision;
  }
  if ( this->fields.isTutorialVoiceLoadRequested )
  {
    v4 = QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, method);
    if ( !System_Linq_Enumerable__Any_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v4,
            (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596D169 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    byte_596D169 = 1;
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
    sub_2213CDC(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = 0;
  this->fields.isKeepingMainStateButFinished = 0;
  this->fields._IsAfterFadeInPlay_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ReservedCommandListBeforeFadeIn_k__BackingField,
    0,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x2

  if ( (byte_596D164 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_QuestAfterAction___c__DisplayClass93_0__Play_b__0__);
    sub_2213A60(&QuestAfterAction___c__DisplayClass93_0_TypeInfo);
    byte_596D164 = 1;
  }
  v5 = sub_2213CCC(QuestAfterAction___c__DisplayClass93_0_TypeInfo);
  QuestAfterAction___c__DisplayClass93_0___ctor((QuestAfterAction___c__DisplayClass93_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass93_0__Play_b__0__, 0);
  this->fields.endAct = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, (int32_t)v14, v15, v16, v17, v18, v19, v20);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Action_o *v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x2
  System_Collections_IEnumerator_o *v40; // x1

  if ( (byte_596D165 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__0__);
    sub_2213A60(&Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__1__);
    sub_2213A60(&QuestAfterAction___c__DisplayClass94_0_TypeInfo);
    byte_596D165 = 1;
  }
  v7 = sub_2213CCC(QuestAfterAction___c__DisplayClass94_0_TypeInfo);
  QuestAfterAction___c__DisplayClass94_0___ctor((QuestAfterAction___c__DisplayClass94_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v22, v23);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.temporaryCommandBuf,
    (int32_t)CommandBuf,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_2213CDC(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__1__,
    0);
  v40 = QuestAfterAction__WaitWhileMainStateFinished(this, v38, v39);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v40, 0);
}


void QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Action_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2

  if ( (byte_596D168 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__97_0__);
    byte_596D168 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.temporaryCommandBuf,
      (int32_t)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__97_0__, 0);
    this->fields.endAct = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  TerminalSceneComponent_c *v10; // x8
  int v11; // w10
  ScrTerminalMap_o *v12; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_596D16E & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D16E = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  v11 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
  v9->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(v10, v7, v8);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v12 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
    v12 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v12->fields.subRootGimmickP->klass;
  if ( !klass || (v12 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_2213CDC(v12, v7);
  ScrTerminalMap__RequestMapChange(v12, 0, -1, -1, 0);
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
  if ( (byte_596D18C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__ContainsKey__);
    byte_596D18C = 1;
  }
  if ( !overwriteVoiceIndex )
  {
    svtVoices = this->fields.svtVoices;
    if ( !svtVoices )
LABEL_8:
      sub_2213CDC(svtVoices, *(_QWORD *)&baseIndex);
    while ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
              v5,
              (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__ContainsKey__) )
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
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 i; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  EventTutorialMaster_EventTutorialArgs_o *v25; // x0
  const MethodInfo *v26; // x2
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // [xsp+18h] [xbp-38h]

  if ( (byte_596D181 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_596D181 = 1;
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
      v10 = sub_224BC3C(
              tutorialArgsEnumerable,
              System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__TypeInfo,
              0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__o *, _QWORD))v10)(
            tutorialArgsEnumerable,
            *(_QWORD *)(v10 + 8));
    v31 = v11;
    if ( !v11 )
      sub_2213CDC(0, v12);
    for ( i = v11; ; i = v31 )
    {
      v14 = *(_QWORD *)i;
      v15 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
      if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
      {
        v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_17;
        }
        v17 = v14 + 16LL * *v16 + 312;
      }
      else
      {
LABEL_17:
        v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
      if ( (v18 & 1) == 0 )
        break;
      if ( !v31 )
        sub_2213CDC(v18, v19);
      v21 = *(_QWORD *)v31;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__c **)v23 - 1) != System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_25;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_25:
        v24 = sub_224BC3C(
                v31,
                System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__TypeInfo,
                0);
      }
      v25 = (EventTutorialMaster_EventTutorialArgs_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(
                                                         v31,
                                                         *(_QWORD *)(v24 + 8));
      if ( v25 )
        QuestAfterAction__SetupTutorialCommandPreprocess(this, v25, v26);
    }
    if ( v31 )
    {
      v27 = *(_QWORD *)v31;
      v28 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_36;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_36:
        v30 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v30)(v31, *(_QWORD *)(v30 + 8));
    }
    QuestAfterAction__RequestVoiceLoad(this, 0, 1, finishCallback, v20);
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
  if ( (byte_596D160 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D160 = 1;
  }
  if ( v4->fields.ActionMapTargetType == -1 )
  {
    if ( !com )
      goto LABEL_42;
    id = com->fields.id;
    if ( id > 307 )
    {
      if ( (unsigned int)id > 0x1F4 )
      {
        if ( id == 510 )
        {
          this = (QuestAfterAction_o *)com->fields.param;
          v4->fields.ActionMapTargetType = 0;
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
                sub_2213CE4(this);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_2213CDC(this, com);
        }
        if ( id == 550 )
        {
          this = (QuestAfterAction_o *)com->fields.param;
          v6 = 3;
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
      goto LABEL_18;
    }
    if ( id <= 113 )
    {
      v8 = id - 100;
      if ( v8 > 0xD || ((1 << v8) & 0x3C1F) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( (unsigned int)(id - 209) > 0xFFFFFFF6 )
        goto LABEL_23;
      v7 = id - 300;
      if ( v7 > 7 )
        goto LABEL_41;
      if ( ((1 << v7) & 0x21) == 0 )
      {
        if ( ((1 << v7) & 0x42) == 0 )
        {
          if ( ((1 << v7) & 0x84) == 0 )
            goto LABEL_41;
LABEL_18:
          this = (QuestAfterAction_o *)com->fields.param;
          v6 = 2;
          goto LABEL_24;
        }
LABEL_23:
        this = (QuestAfterAction_o *)com->fields.param;
        v6 = 1;
LABEL_24:
        v4->fields.ActionMapTargetType = v6;
        if ( !this )
          goto LABEL_42;
LABEL_25:
        this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
        if ( this )
        {
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          goto LABEL_27;
        }
        goto LABEL_42;
      }
    }
    this = (QuestAfterAction_o *)com->fields.param;
    v4->fields.ActionMapTargetType = 0;
    if ( !this )
      goto LABEL_42;
    goto LABEL_25;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_596D16C & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestAfterAction__setState__);
    byte_596D16C = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E83E8C *)Method_CStateManager_QuestAfterAction__setState__);
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

  if ( (byte_596D17D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__set_Item__);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D17D = 1;
  }
  voiceInfo = 0;
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, command, *(_QWORD *)&commandIndex);
  if ( QuestAfterAction__TryCreateVoiceInfo(command, &voiceInfo, *(const MethodInfo **)&commandIndex) )
  {
    v10 = QuestAfterAction__ResolveVoiceRegisterIndex(this, commandIndex, overwriteVoiceIndex, v9);
    if ( !this->fields.svtVoices )
      sub_2213CDC(v10, v11);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices,
      v10,
      (Il2CppObject *)voiceInfo,
      (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__set_Item__);
    voiceRegisterRevision = this->fields.voiceRegisterRevision;
    this->fields.isLoadedVoice = 0;
    this->fields.voiceRegisterRevision = voiceRegisterRevision + 1;
  }
}


void QuestAfterAction__SetupCommandPreprocess_43020524(
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

  if ( (byte_596D17E & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D17E = 1;
  }
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, actionVals, method);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
  if ( !CommandBuf )
    sub_2213CDC(0, v6);
  max_length = CommandBuf->max_length;
  v9 = CommandBuf;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(CommandBuf);
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
  __int64 v6; // x1
  __int64 v7; // x2
  QuestAfterAction___c_c *v8; // x0
  struct QuestAfterAction___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__154_0; // x21
  Il2CppObject *v11; // x22
  struct QuestAfterAction___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  QuestAfterAction___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  struct QuestAfterAction___c_StaticFields *v24; // x9
  System_Func_object__object__o *_9__154_1; // x22
  Il2CppObject *v26; // x23
  struct QuestAfterAction___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  System_String_array *v38; // x20
  QuestAfterAction_Command_array *CommandBuf; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  il2cpp_array_size_t max_length; // x8
  QuestAfterAction_Command_array *v43; // x20
  unsigned __int64 v44; // x21

  if ( (byte_596D17F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Concat_string___);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_0__);
    sub_2213A60(&Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_1__);
    sub_2213A60(&QuestAfterAction___c_TypeInfo);
    byte_596D17F = 1;
  }
  if ( tutorialArgs )
  {
    AvailableTutorialArray = (System_Collections_Generic_IEnumerable_TSource__o *)EventTutorialMaster__GetAvailableTutorialArray(
                                                                                    tutorialArgs,
                                                                                    0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)AvailableTutorialArray, 0) )
    {
      v8 = QuestAfterAction___c_TypeInfo;
      if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v6, v7);
        v8 = QuestAfterAction___c_TypeInfo;
      }
      static_fields = v8->static_fields;
      _9__154_0 = (System_Func_object__object__o *)static_fields->__9__154_0;
      if ( !_9__154_0 )
      {
        if ( !*(&v8->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v8, v6, v7);
          static_fields = QuestAfterAction___c_TypeInfo->static_fields;
        }
        v11 = (Il2CppObject *)static_fields->__9;
        _9__154_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
        System_Func_object__object____ctor(
          _9__154_0,
          v11,
          Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_0__,
          0);
        v12 = QuestAfterAction___c_TypeInfo->static_fields;
        v12->__9__154_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__154_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v12->__9__154_0,
          (int32_t)_9__154_0,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
      }
      v19 = System_Linq_Enumerable__SelectMany_object__object_(
              AvailableTutorialArray,
              (System_Func_TSource__IEnumerable_TResult___o *)_9__154_0,
              (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
      v22 = QuestAfterAction___c_TypeInfo;
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
      if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v20, v21);
        v22 = QuestAfterAction___c_TypeInfo;
      }
      v24 = v22->static_fields;
      _9__154_1 = (System_Func_object__object__o *)v24->__9__154_1;
      if ( !_9__154_1 )
      {
        if ( !*(&v22->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v22, v20, v21);
          v24 = QuestAfterAction___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)v24->__9;
        _9__154_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
        System_Func_object__object____ctor(
          _9__154_1,
          v26,
          Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_1__,
          0);
        v27 = QuestAfterAction___c_TypeInfo->static_fields;
        v27->__9__154_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__154_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v27->__9__154_1,
          (int32_t)_9__154_1,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                   AvailableTutorialArray,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)_9__154_1,
                                                                   (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
      v35 = System_Linq_Enumerable__Concat_object_(
              v23,
              v34,
              (const MethodInfo_387607C *)Method_System_Linq_Enumerable_Concat_string___);
      v38 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v35,
                                     (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
      if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v36, v37);
      CommandBuf = QuestAfterAction__GenerateCommandBuf(v38, v36);
      if ( !CommandBuf )
        sub_2213CDC(0, v40);
      max_length = CommandBuf->max_length;
      v43 = CommandBuf;
      if ( (int)max_length >= 1 )
      {
        v44 = 0;
        do
        {
          if ( v44 >= (unsigned int)max_length )
            sub_2213CE4(CommandBuf);
          QuestAfterAction__SetupTutorialCommandPreprocess_43021356(this, v43->m_Items[v44], v41);
          LODWORD(max_length) = v43->max_length;
          ++v44;
        }
        while ( (__int64)v44 < (int)max_length );
      }
    }
  }
}


void QuestAfterAction__SetupTutorialCommandPreprocess_43021356(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_o **v4; // x19
  System_String_o *AvailableRandomVoice; // x0
  System_String_o *v6; // x22
  int32_t v7; // w23
  QuestAfterAction_VoiceInfo_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v18; // x8
  int32_t svtId; // [xsp+Ch] [xbp-34h] BYREF

  v4 = (QuestAfterAction_o **)this;
  if ( (byte_596D180 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    this = (QuestAfterAction_o *)sub_2213A60(&QuestAfterAction_VoiceInfo_TypeInfo);
    byte_596D180 = 1;
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
            (System_Collections_Generic_HashSet_object__o *)this,
            (Il2CppObject *)command->fields.param,
            (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
    {
      AvailableRandomVoice = QuestAfterAction_Command__GetAvailableRandomVoice(command, &svtId, 0);
      if ( AvailableRandomVoice )
      {
        v6 = AvailableRandomVoice;
        this = v4[32];
        if ( this )
        {
          System_Collections_Generic_HashSet_object___Add(
            (System_Collections_Generic_HashSet_object__o *)this,
            (Il2CppObject *)command->fields.param,
            (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_string__Add__);
          v7 = svtId;
          v8 = (QuestAfterAction_VoiceInfo_o *)sub_2213CCC(QuestAfterAction_VoiceInfo_TypeInfo);
          QuestAfterAction_VoiceInfo___ctor(v8, v7, v6, 0);
          this = v4[33];
          if ( this )
          {
            System_Collections_Generic_Dictionary_object__object___set_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)command->fields.param,
              (Il2CppObject *)v8,
              (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__set_Item__);
            this = v4[31];
            if ( this )
            {
              m_CachedPtr = this->fields.m_CachedPtr;
              v16 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( m_CachedPtr )
              {
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v8,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
                }
                else
                {
                  v18 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v18 + 32) = v8;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)v8, v9, v10, v11, v12, v13, v14);
                }
                return;
              }
            }
          }
        }
LABEL_17:
        sub_2213CDC(this, command);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v18; // x22
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  _BOOL4 isAfterActionVoiceLoadRequested; // w8
  System_Collections_Generic_List_int__o *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1

  if ( (byte_596D188 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction___c__DisplayClass167_0__StartLoadVoicePipeline_b__0__);
    sub_2213A60(&QuestAfterAction___c__DisplayClass167_0_TypeInfo);
    byte_596D188 = 1;
  }
  v3 = sub_2213CCC(QuestAfterAction___c__DisplayClass167_0_TypeInfo);
  QuestAfterAction___c__DisplayClass167_0___ctor((QuestAfterAction___c__DisplayClass167_0_o *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !this->fields.isLoadingVoice )
  {
    if ( this->fields.isAfterActionVoiceLoadRequested )
    {
      v14 = (System_Collections_Generic_List_object__o *)QuestAfterAction__BuildPendingVoiceInfoList(this, v12);
    }
    else
    {
      v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    }
    if ( this->fields.isTutorialVoiceLoadRequested )
    {
      v17 = (System_Collections_Generic_List_object__o *)QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, v13);
    }
    else
    {
      v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    }
    if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v15, v16);
    v18 = QuestAfterAction__BuildMergedPendingVoiceInfoList(
            (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v14,
            (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v17,
            v16);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      isAfterActionVoiceLoadRequested = this->fields.isAfterActionVoiceLoadRequested;
      this->fields.isLoadingVoice = 1;
      if ( isAfterActionVoiceLoadRequested )
        this->fields.isLoadedVoice = 0;
      if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v19, v20);
      v22 = QuestAfterAction__BuildDistinctSvtIdList(
              (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v17,
              v19);
      *(_QWORD *)(v3 + 24) = v22;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v22, v23, v24, v25, v26, v27, v28);
      v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v3,
        Method_QuestAfterAction___c__DisplayClass167_0__StartLoadVoicePipeline_b__0__,
        0);
      QuestAfterAction__LoadVoice_43019576(this, v18, v29, v30);
    }
    else
    {
      QuestAfterAction__MarkRequestedVoiceLoadCompleted(this, v19);
      QuestAfterAction__FlushVoiceLoadCallbacks(this, v31);
    }
  }
}


bool QuestAfterAction__TryCreateVoiceInfo(
        QuestAfterAction_Command_o *command,
        QuestAfterAction_VoiceInfo_o **voiceInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *AvailableRandomVoice; // x0
  System_String_o *v13; // x20
  int32_t v14; // w21
  QuestAfterAction_VoiceInfo_o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t svtId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596D18B & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_VoiceInfo_TypeInfo);
    byte_596D18B = 1;
  }
  svtId = 0;
  *voiceInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)voiceInfo, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( !command )
    sub_2213CDC(v10, v11);
  if ( command->fields.id == 800 )
  {
    AvailableRandomVoice = QuestAfterAction_Command__GetAvailableRandomVoice(command, &svtId, 0);
    if ( AvailableRandomVoice )
    {
      v13 = AvailableRandomVoice;
      v14 = svtId;
      v15 = (QuestAfterAction_VoiceInfo_o *)sub_2213CCC(QuestAfterAction_VoiceInfo_TypeInfo);
      QuestAfterAction_VoiceInfo___ctor(v15, v14, v13, 0);
      *voiceInfo = v15;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)voiceInfo, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t v6; // w19
  bool v7; // w21
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  struct ScrTerminalListTop_o *mTerminalList; // x9
  UnityEngine_Object_o *mTitleInfo; // x20
  struct System_String_o *param; // x9
  QuestAfterAction_Command_o *v13; // x20
  char v14; // w8
  unsigned __int64 v15; // x22
  QuestAfterAction_Command_c *klass; // x9

  v2 = command;
  if ( (byte_596D179 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D179 = 1;
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
    sub_2213CE4(command);
  v6 = System_Int32__Parse((System_String_o *)command[1].klass, 0);
  v7 = SLODWORD(v3->fields.param) >= 2 && System_Int32__Parse((System_String_o *)v3[1].monitor, 0) > 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v8->static_fields->mInstance;
  if ( mInstance && (mTerminalList = mInstance->fields.mTerminalList) != 0 )
    mTitleInfo = (UnityEngine_Object_o *)mTerminalList->fields.mTitleInfo;
  else
    mTitleInfo = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
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
    sub_2213CDC(command, method);
  }
  param = command->fields.param;
  v13 = command;
  if ( (int)param >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)param )
        goto LABEL_41;
      command = (QuestAfterAction_Command_o *)*((_QWORD *)&v13[1].klass + v15);
      if ( v7 )
        break;
      if ( !command )
        goto LABEL_40;
      klass = command[2].klass;
      if ( !klass )
        goto LABEL_40;
      if ( v6 == LODWORD(klass->_1.name) )
        goto LABEL_34;
LABEL_36:
      LODWORD(param) = v13->fields.param;
      if ( (__int64)++v15 >= (int)param )
        return v14 & 1;
    }
    if ( !command )
      goto LABEL_40;
LABEL_34:
    command = (QuestAfterAction_Command_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)command, 0);
    if ( !command )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)command, 0, 0);
    v14 = 1;
    goto LABEL_36;
  }
LABEL_38:
  v14 = 0;
  return v14 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__TryGetQuestAfterActionVals(
        QuestAfterAction_o *this,
        System_String_array **questAfterAction,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x21
  QuestPhaseDetailAddMaster_o *MasterData_object; // x0
  System_String_array *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_array *v22; // x8
  TerminalPramsManager_c *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppClass *klass; // x1
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596D15B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D15B = 1;
  }
  entity = 0;
  *questAfterAction = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)questAfterAction,
    0,
    *(System_String_o **)&questId,
    *(System_String_o **)&phase,
    (int32_t)method,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
  if ( !byte_596D193 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D193 = 1;
  }
  MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
  {
    if ( !Instance )
      goto LABEL_36;
    MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !MasterData_object )
      goto LABEL_36;
    v15 = QuestPhaseDetailAddMaster__GetAfterAction(MasterData_object, questId, phase, 0);
    if ( !v15 )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !MasterData_object )
        goto LABEL_36;
      v15 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)MasterData_object, questId, phase, 0);
    }
    *questAfterAction = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)questAfterAction, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  }
  v22 = *questAfterAction;
  if ( !*questAfterAction )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    if ( !byte_596D196 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D196 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
      v23 = TerminalPramsManager_TypeInfo;
    }
    if ( !v23->static_fields->_IsQuestClear_k__BackingField )
      goto LABEL_32;
    if ( !*(&v23->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v23, v11, v12);
    MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
    {
LABEL_32:
      v22 = *questAfterAction;
      if ( !*questAfterAction )
        return 0;
      goto LABEL_33;
    }
    if ( Instance )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MasterData_object )
      {
        MasterData_object = (QuestPhaseDetailAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                             &entity,
                                                             questId,
                                                             (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)MasterData_object & 1) == 0 )
          goto LABEL_32;
        if ( entity )
        {
          klass = entity[6].klass;
          *questAfterAction = (System_String_array *)klass;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)questAfterAction,
            (int32_t)klass,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          goto LABEL_32;
        }
      }
    }
LABEL_36:
    sub_2213CDC(MasterData_object, v11);
  }
LABEL_33:
  max_length = v22->max_length;
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
  __int64 v7; // x1
  __int64 v8; // x2
  bool v9; // w20
  bool v10; // w24
  TerminalSceneComponent_c *v11; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct TitleInfoControl_o *mTitleInfo; // x22
  __int64 v15; // x1
  struct TitleInfoEventItemControl_o *eventRaidUIControl; // x8
  int32_t v17; // w21
  bool v18; // w26
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x10
  Il2CppObject *v23; // x22
  _BOOL8 v24; // x0
  __int64 klass_low; // x1
  __int64 v26; // x2
  TerminalPramsManager_c *v27; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x0
  struct System_Int32_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  int32_t v40; // [xsp+4h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+40h] [xbp-80h] BYREF

  v4 = command;
  if ( (byte_596D17A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_2213A60(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_596D17A = 1;
  }
  memset(&v43, 0, sizeof(v43));
  memset(&v42, 0, sizeof(v42));
  if ( !v4 )
    goto LABEL_77;
  command = (QuestAfterAction_Command_o *)v4->fields.param;
  if ( !command )
    goto LABEL_77;
  command = (QuestAfterAction_Command_o *)System_String__Split((System_String_o *)command, 0x2Cu, 0, 0);
  if ( !command )
    goto LABEL_77;
  v5 = command;
  if ( !LODWORD(command->fields.param)
    || (command = (QuestAfterAction_Command_o *)System_Int32__Parse((System_String_o *)command[1].klass, 0),
        ((__int64)v5->fields.param & 0xFFFFFFFE) == 0) )
  {
    sub_2213CE4(command);
  }
  v6 = (int)command;
  v40 = System_Int32__Parse((System_String_o *)v5[1].monitor, 0);
  if ( SLODWORD(v5->fields.param) < 3 )
  {
    v9 = 0;
LABEL_11:
    v10 = 0;
    goto LABEL_13;
  }
  v9 = System_Int32__Parse(*(System_String_o **)&v5[1].fields.id, 0) > 0;
  if ( SLODWORD(v5->fields.param) < 4 )
    goto LABEL_11;
  v10 = System_Int32__Parse(v5[1].fields.param, 0) > 0;
LABEL_13:
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v11 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
    v11 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v11->static_fields->mInstance;
  if ( mInstance && (mTerminalList = mInstance->fields.mTerminalList) != 0 )
    mTitleInfo = mTerminalList->fields.mTitleInfo;
  else
    mTitleInfo = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  command = (QuestAfterAction_Command_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mTitleInfo, 0, 0);
  if ( ((unsigned __int8)command & 1) != 0 )
    return 0;
  if ( !mTitleInfo || (command = (QuestAfterAction_Command_o *)mTitleInfo->fields.mRaidStatusList) == 0 )
LABEL_77:
    sub_2213CDC(command, isQuick);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
  v43 = v41;
  v41.fields._list = 0;
  *(_QWORD *)&v41.fields._index = &v43;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__) )
  {
    if ( v9 )
    {
      if ( !v43.fields._current )
        sub_2213CDC(0, v15);
      goto LABEL_35;
    }
    if ( !v43.fields._current )
      sub_2213CDC(0, v15);
    if ( v6 == LODWORD(v43.fields._current[9].monitor) )
LABEL_35:
      TitleInfoEventRaidStatusComponent__FrameOut(
        (TitleInfoEventRaidStatusComponent_o *)v43.fields._current,
        0,
        isQuick,
        0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
  eventRaidUIControl = mTitleInfo->fields.eventRaidUIControl;
  if ( !eventRaidUIControl )
    return 0;
  command = (QuestAfterAction_Command_o *)eventRaidUIControl->fields.mEventInfoGroups;
  if ( !command )
    goto LABEL_77;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v42 = v41;
  v17 = 0;
  v18 = 0;
  v41.fields._list = 0;
  *(_QWORD *)&v41.fields._index = &v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
  {
    current = v42.fields._current;
    if ( v42.fields._current
      && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
          v42.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (TitleInfoEventRaidBossComponent_c *)v42.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
        v23 = v42.fields._current;
      else
        v23 = 0;
    }
    else
    {
      v23 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
    if ( v24 )
    {
      if ( v10 )
        goto LABEL_52;
      if ( !v23 )
        sub_2213CDC(v24, klass_low);
      if ( v40 == LODWORD(v23[23].klass) )
      {
LABEL_52:
        v27 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, klass_low, v26);
          v27 = TerminalPramsManager_TypeInfo;
        }
        if ( !v23 )
          sub_2213CDC(v27, klass_low);
        static_fields = v27->static_fields;
        nonFrameInBossHpUiIndex = static_fields->nonFrameInBossHpUiIndex;
        if ( !nonFrameInBossHpUiIndex
          || (items = nonFrameInBossHpUiIndex->fields._items,
              klass_low = LODWORD(v23[23].klass),
              v31 = Method_System_Collections_Generic_List_int__Add__,
              ++nonFrameInBossHpUiIndex->fields._version,
              !items) )
        {
          sub_2213CDC(nonFrameInBossHpUiIndex, klass_low);
        }
        size = nonFrameInBossHpUiIndex->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            nonFrameInBossHpUiIndex,
            klass_low,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          static_fields = TerminalPramsManager_TypeInfo->static_fields;
        }
        else
        {
          nonFrameInBossHpUiIndex->fields._size = size + 1;
          items->m_Items[size] = klass_low;
        }
        RaidBossHpForceHideGroupIndexList = static_fields->RaidBossHpForceHideGroupIndexList;
        if ( !RaidBossHpForceHideGroupIndexList
          || (v34 = RaidBossHpForceHideGroupIndexList->fields._items,
              v35 = Method_System_Collections_Generic_List_int__Add__,
              ++RaidBossHpForceHideGroupIndexList->fields._version,
              !v34) )
        {
          sub_2213CDC(RaidBossHpForceHideGroupIndexList, klass_low);
        }
        v36 = RaidBossHpForceHideGroupIndexList->fields._size;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            RaidBossHpForceHideGroupIndexList,
            v17,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          RaidBossHpForceHideGroupIndexList->fields._size = v36 + 1;
          v34->m_Items[v36] = v17;
        }
        if ( v10 )
        {
          if ( !current )
            sub_2213CDC(RaidBossHpForceHideGroupIndexList, klass_low);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
          if ( !gameObject )
            sub_2213CDC(0, v38);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          TitleInfoEventRaidBossComponent__PlayFrameOutBoss((TitleInfoEventRaidBossComponent_o *)v23, isQuick, 0);
        }
        v18 = 1;
      }
    }
    ++v17;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  return v18;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_596D163 & 1) == 0 )
  {
    sub_2213A60(&Method_CStateManager_QuestAfterAction__update__);
    byte_596D163 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3E83E6C *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596D16A & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction__WaitWhileMainStateFinished_d__100_TypeInfo);
    byte_596D16A = 1;
  }
  v5 = sub_2213CCC(QuestAfterAction__WaitWhileMainStateFinished_d__100_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__100___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__100_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestAfterAction___PlaySpecifiedActionInstantly_b__97_0(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  this->fields.endAct = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, 0, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.temporaryCommandBuf, 0, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_596D15F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_596D15F = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_2213CDC(0, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *VoiceAssetName_49817936; // x20
  struct System_Collections_Generic_List_Action__o *pendingVoiceLoadCallbackList; // x8
  int32_t size; // w2
  int v13; // w9
  struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *tutorialSvtVoiceList; // x8
  int32_t v15; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596D17C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor___91680952);
    sub_2213A60(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596D17C = 1;
  }
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices;
  memset(&v18, 0, sizeof(v18));
  if ( !svtVoices )
    goto LABEL_24;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             svtVoices,
             (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor___91680952);
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v18.fields._current )
      sub_2213CDC(v6, v7);
    VoiceAssetName_49817936 = ServantVoiceEntity__getVoiceAssetName_49817936((int32_t)v18.fields._current[1].klass, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v8, v9);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_49817936, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtVoices,
    (const MethodInfo_3F9C638 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.loadedVoiceSvtIdSet;
  if ( !svtVoices )
    goto LABEL_24;
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)svtVoices,
    (const MethodInfo_42B4494 *)Method_System_Collections_Generic_HashSet_int__Clear__);
  pendingVoiceLoadCallbackList = this->fields.pendingVoiceLoadCallbackList;
  this->fields.isLoadingVoice = 0;
  *(_QWORD *)&this->fields.voiceRegisterRevision = 0;
  if ( !pendingVoiceLoadCallbackList )
    goto LABEL_24;
  size = pendingVoiceLoadCallbackList->fields._size;
  v13 = pendingVoiceLoadCallbackList->fields._version + 1;
  pendingVoiceLoadCallbackList->fields._size = 0;
  pendingVoiceLoadCallbackList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)pendingVoiceLoadCallbackList->fields._items, 0, size, 0);
  tutorialSvtVoiceList = this->fields.tutorialSvtVoiceList;
  this->fields.isLoadedVoice = 0;
  if ( !tutorialSvtVoiceList )
    goto LABEL_24;
  v15 = tutorialSvtVoiceList->fields._size;
  v16 = tutorialSvtVoiceList->fields._version + 1;
  tutorialSvtVoiceList->fields._size = 0;
  tutorialSvtVoiceList->fields._version = v16;
  if ( v15 >= 1 )
    System_Array__Clear((System_Array_o *)tutorialSvtVoiceList->fields._items, 0, v15, 0);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.tutorialVoiceParamKeySet;
  if ( !svtVoices
    || (System_Collections_Generic_HashSet_object___Clear(
          (System_Collections_Generic_HashSet_object__o *)svtVoices,
          (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_string__Clear__),
        (svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.tutorialVoiceInfoByParam) == 0)
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)svtVoices,
          (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__Clear__),
        (svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.loadedTutorialVoiceSvtIdSet) == 0) )
  {
LABEL_24:
    sub_2213CDC(svtVoices, method);
  }
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)svtVoices,
    (const MethodInfo_42B4494 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ReservedCommandListBeforeFadeIn_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  int32_t id; // w8
  __int64 v6; // x1
  Il2CppObject *Item; // x25
  void *param; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v11; // x21
  System_Random_o *v12; // x22
  __int64 size; // x1
  int32_t v14; // w24
  int v15; // w8
  void *v16; // x25
  __int64 v17; // x2
  __int64 v18; // x8
  __int64 v19; // x8
  int32_t v20; // w1
  _BOOL8 v21; // x0
  int v22; // w8
  void *v23; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596D19E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor___91665488);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&System_Random_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596D19E = 1;
  }
  *svtId = 0;
  id = this->fields.id;
  result = 0;
  if ( id != 800 )
    return 0;
  Item = 0;
  if ( System_String__IsNullOrEmpty(this->fields.param, 0) )
    return (System_String_o *)Item;
  param = this->fields.param;
  if ( !param || (param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0)) == 0 )
LABEL_42:
    sub_2213CDC(param, v6);
  v9 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) <= 1 )
  {
    param = this->fields.param;
    if ( param )
    {
      param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
      if ( param )
      {
        v22 = *((_DWORD *)param + 6);
        v23 = param;
        if ( v22 == 3 )
        {
          v21 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0);
          if ( *((_DWORD *)v23 + 6) <= 2u )
LABEL_43:
            sub_2213CE4(v21);
          return System_String__Concat_75694928(
                   *((System_String_o **)v23 + 5),
                   (System_String_o *)StringLiteral_16746/*"_"*/,
                   *((System_String_o **)v23 + 6),
                   0);
        }
        if ( v22 == 2 )
          return this->fields.param;
        return 0;
      }
    }
    goto LABEL_42;
  }
  param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !param )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)param,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v11,
    v9,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_string___ctor___91665488);
  result = 0;
  v12 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
  System_Random___ctor(v12, 0);
  if ( !v11 || !v12 )
    goto LABEL_42;
  size = (unsigned int)v11->fields._size;
  while ( 1 )
  {
    v14 = ((__int64 (__fastcall *)(System_Random_o *, __int64, const MethodInfo *))v12->klass->vtable._7_Next.methodPtr)(
            v12,
            size,
            v12->klass->vtable._7_Next.method);
    result = 0;
    param = System_Collections_Generic_List_object___get_Item(
              v11,
              v14,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
    if ( !param )
      goto LABEL_42;
    param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
    if ( !param )
      goto LABEL_42;
    v15 = *((_DWORD *)param + 6);
    v16 = param;
    if ( v15 == 3 )
      break;
    if ( v15 == 2 )
    {
      result = 0;
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v14,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v17);
      if ( !byte_596A090 )
      {
        sub_2213A60(&TerminalSceneComponent_TypeInfo);
        byte_596A090 = 1;
      }
      param = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v17);
        param = TerminalSceneComponent_TypeInfo;
      }
      v18 = **((_QWORD **)param + 23);
      if ( !v18 )
        goto LABEL_42;
      v19 = *(_QWORD *)(v18 + 472);
      if ( !v19 )
        goto LABEL_42;
      param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v19 + 40), 0);
      if ( !MasterData_object )
        goto LABEL_42;
      v20 = (int)param;
      goto LABEL_29;
    }
LABEL_30:
    System_Collections_Generic_List_object___RemoveAt(
      v11,
      v14,
      (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_string__RemoveAt__);
    size = (unsigned int)v11->fields._size;
    if ( !(_DWORD)size )
    {
      Item = 0;
      *svtId = 0;
      return (System_String_o *)Item;
    }
  }
  v21 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0);
  if ( *((_DWORD *)v16 + 6) <= 2u )
    goto LABEL_43;
  param = System_String__Concat_75694928(
            *((System_String_o **)v16 + 5),
            (System_String_o *)StringLiteral_16746/*"_"*/,
            *((System_String_o **)v16 + 6),
            0);
  if ( !MasterData_object )
    goto LABEL_42;
  v20 = result;
  Item = (Il2CppObject *)param;
LABEL_29:
  if ( !VoicePlayCondMaster__isVoicePlay(
          (VoicePlayCondMaster_o *)MasterData_object,
          v20,
          (System_String_o *)Item,
          0,
          -1,
          -1,
          0,
          0) )
    goto LABEL_30;
  *svtId = result;
  return (System_String_o *)Item;
}


System_String_o *QuestAfterAction_Command__GetBgmName(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  int32_t id; // w8
  System_String_o *v4; // x0
  bool v5; // w8
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_596D1A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D1A0 = 1;
  }
  id = this->fields.id;
  v4 = 0;
  result = 0;
  entity = 0;
  if ( id == 851 )
  {
    v5 = System_Int32__TryParse(this->fields.param, &result, 0);
    v4 = 0;
    if ( v5 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_2213CDC(Instance, v7);
      }
      return 0;
    }
  }
  return v4;
}


int32_t QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_o *v5; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 0;
  result = 0;
  if ( this->fields.id == 800 )
  {
    if ( !str || (v4 = System_String__Split(str, 0x5Fu, 0, 0)) == 0 )
      sub_2213CDC(v4, str);
    if ( LODWORD(v4->max_length) == 3 )
    {
      v5 = v4->m_Items[0];
      result = 0;
      if ( System_Int32__TryParse(v5, &result, 0) )
        LODWORD(v4) = result;
      else
        LODWORD(v4) = 0;
    }
    else
    {
      LODWORD(v4) = 0;
    }
  }
  return (int)v4;
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
  if ( (byte_596D19F & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596D19F = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0)) == 0 )
      sub_2213CDC(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_75694928(
               *((System_String_o **)this + 5),
               (System_String_o *)StringLiteral_16746/*"_"*/,
               *((System_String_o **)this + 6),
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(screenCollider, v5);
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
  if ( (byte_596D1B0 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D1B0 = 1;
  }
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, cmd, method);
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
    sub_2213CDC(0, v7);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  void *v18; // x23
  int32_t v19; // w22
  float v20; // s8
  _BOOL4 v21; // w24
  Il2CppObject *MapComponent_object; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *v31; // x23
  srcLineSprite_o *v32; // x22
  System_Action_o *v33; // x0
  System_Action_o *v34; // x23

  if ( (byte_596D1A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__0__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__1__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
    byte_596D1A6 = 1;
  }
  v9 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 24) = this;
  *(_DWORD *)(v9 + 16) = fadeEndDispType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  if ( !command )
    goto LABEL_24;
  param = command->fields.param;
  if ( !param )
    goto LABEL_24;
  param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0);
  if ( !param )
    goto LABEL_24;
  v18 = param;
  if ( !*((_DWORD *)param + 6) )
    sub_2213CE4(param);
  v19 = System_Int32__Parse(*((System_String_o **)param + 4), 0);
  if ( *((int *)v18 + 6) < 2 )
  {
    v20 = 0.5;
LABEL_11:
    v21 = 0;
    goto LABEL_13;
  }
  v20 = System_Single__Parse(*((System_String_o **)v18 + 5), 0) * 0.001;
  if ( *((int *)v18 + 6) < 3 )
    goto LABEL_11;
  v21 = System_Int32__Parse(*((System_String_o **)v18 + 6), 0) > 0;
LABEL_13:
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
                          (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
  *(_QWORD *)(v9 + 32) = MapComponent_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)MapComponent_object, v23, v24, v25, v26, v27, v28);
  v31 = *(UnityEngine_Object_o **)(v9 + 32);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( !UnityEngine_Object__op_Equality(v31, 0, 0) )
  {
    v32 = *(srcLineSprite_o **)(v9 + 32);
    v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v34 = v33;
    if ( v21 )
    {
      System_Action___ctor(
        v33,
        (Il2CppObject *)v9,
        Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__0__,
        0);
      if ( v32 )
      {
        srcLineSprite__SetState(v32, fadeState, v34, v20, 0);
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
      sub_2213CDC(param, v11);
    }
    System_Action___ctor(
      v33,
      (Il2CppObject *)v9,
      Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__1__,
      0);
    if ( !v32 )
      goto LABEL_24;
    srcLineSprite__SetState(v32, fadeState, v34, v20, 0);
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
    sub_2213CDC(0, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *MapComponent_object; // x21
  _DWORD *monitor; // x8

  v2 = this;
  if ( (byte_596D1A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596D1A5 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_2213CE4(this);
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
        (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_43439552(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[8].monitor,
                                                 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          monitor = MapComponent_object[8].monitor;
          if ( !monitor )
            break;
          monitor[4] = 1;
          MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)MapComponent_object, 1, 0);
        }
      }
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_2213CDC(this, method);
  }
}


void QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 updated; // x0
  QuestAfterAction_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  QuestAfterAction_StateMain_c *klass; // x9
  __int64 v22; // x21
  QuestAfterAction_Command_o *v23; // x21
  __int64 v24; // x8
  BlankEarthQuestAfterAction_o *v25; // x23
  System_Action_o *v26; // x24
  const MethodInfo *v27; // x5
  BlankEarthQuestAfterAction_o *v28; // x23
  System_Action_o *v29; // x24
  const MethodInfo *v30; // x5
  __int64 v31; // x2
  const MethodInfo *v32; // x4
  __n128 inited; // q0
  __int64 v34; // x1
  QuestAfterAction_StateMain_o *v35; // x0
  const MethodInfo *v36; // x2
  Il2CppMethodPointer methodPtr; // x3
  int id; // w8
  QuestAfterAction_Command_o *v39; // x0
  bool v40; // w1
  __int64 v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  int32_t v44; // w21
  long double v45; // q0
  int32_t v46; // w23
  int32_t v47; // w22
  int v48; // w23
  __int64 v49; // x21
  float v50; // s0
  float v51; // s8
  float v52; // s0
  MapCamera_o *v53; // x19
  float v54; // s0
  float v55; // s9
  int32_t v56; // w20
  __int64 v57; // x19
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x22
  int32_t v65; // w20
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t v68; // w21
  long double v69; // q0
  __int64 v70; // x1
  __int64 v71; // x2
  float v72; // s1
  long double v73; // q0
  __int64 v74; // x2
  float v75; // s8
  float v76; // s9
  ScrTerminalListTop_o *v77; // x22
  ScrTerminalListTop_o *v78; // x22
  System_Action_o *v79; // x23
  __int64 v80; // x20
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  __int64 v87; // x23
  __int64 v88; // x8
  __int64 v89; // x22
  int32_t v90; // w21
  bool v91; // w24
  bool v92; // w26
  System_String_o *v93; // x19
  __int64 v94; // x1
  __int64 v95; // x2
  System_String_o *v96; // x20
  System_String_o *v97; // x20
  Il2CppObject *v98; // x21
  System_Action_o *v99; // x23
  float v100; // s0
  __int64 v101; // x21
  QuestAfterAction_o *v102; // x22
  __int64 v103; // x1
  __int64 v104; // x2
  Il2CppObject *v105; // x22
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  __int64 v112; // x19
  __int64 v113; // x1
  __int64 v114; // x2
  __n128 v115; // q0
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v117; // x0
  __int64 v118; // x21
  int32_t v119; // w8
  System_String_o *v120; // x0
  System_Collections_Generic_Dictionary_int__object__o *v121; // x20
  __int64 v122; // x1
  __int64 v123; // x2
  long double v124; // q0
  __int64 v125; // x2
  long double v126; // q0
  __int64 v127; // x8
  __int64 v128; // x2
  System_String_o *v129; // x20
  System_String_o *v130; // x21
  SeManager_c *v131; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v133; // x21
  int32_t v134; // w0
  __int64 v135; // x1
  __int64 v136; // x2
  long double v137; // q0
  float v138; // s8
  int32_t v139; // w20
  int32_t v140; // w19
  QuestAfterAction_StateMain_o *v141; // x0
  QuestAfterAction_Command_o *v142; // x1
  int32_t v143; // w2
  int32_t v144; // w3
  System_String_o *v145; // x19
  __int64 v146; // x1
  __int64 v147; // x2
  System_String_o *v148; // x20
  System_String_o *v149; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v151; // x23
  __int64 v152; // x1
  __int64 v153; // x2
  System_String_o *v154; // x20
  float v155; // s0
  __int64 v156; // x22
  MissionNaviTransitionBoardItem_o *v157; // x22
  System_Collections_Generic_List_object__o *v158; // x23
  System_Collections_Generic_List_object__o *v159; // t1
  TerminalSceneComponent_o *v160; // x22
  const MethodInfo *v161; // x1
  __int64 v162; // x20
  System_String_o *v163; // x2
  System_String_o *v164; // x3
  int32_t v165; // w4
  int32_t v166; // w5
  bool v167; // w6
  bool v168; // w7
  __int64 v169; // x8
  QuestAfterAction_o *v170; // x22
  Il2CppObject *v171; // x0
  System_String_o *v172; // x2
  System_String_o *v173; // x3
  int32_t v174; // w4
  int32_t v175; // w5
  bool v176; // w6
  bool v177; // w7
  __int64 v178; // x1
  __int64 v179; // x2
  UnityEngine_Object_o *v180; // x19
  SrcSpotBasePrefab_o *v181; // x19
  System_Action_o *v182; // x21
  SrcSpotBasePrefab_o *v183; // x0
  int32_t v184; // w1
  __int64 v185; // x20
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  __int64 v192; // x8
  QuestAfterAction_o *v193; // x22
  Il2CppObject *v194; // x0
  System_String_o *v195; // x2
  System_String_o *v196; // x3
  int32_t v197; // w4
  int32_t v198; // w5
  bool v199; // w6
  bool v200; // w7
  __int64 v201; // x1
  __int64 v202; // x2
  UnityEngine_Object_o *v203; // x19
  ModelLineComponent_o *v204; // x19
  System_Action_o *v205; // x21
  ModelLineComponent_o *v206; // x0
  int32_t v207; // w1
  __int64 v208; // x1
  __int64 v209; // x2
  long double v210; // q0
  __int64 v211; // x1
  __int64 v212; // x2
  long double v213; // q0
  __int64 v214; // x1
  __int64 v215; // x2
  BalanceConfig_c *v216; // x0
  __int64 v217; // x23
  float v218; // s0
  float v219; // s9
  float v220; // s0
  float v221; // s10
  float v222; // s0
  float v223; // s11
  float v224; // s0
  float v225; // s8
  __int64 v226; // x1
  __int64 v227; // x2
  int32_t v228; // w19
  long double v229; // q0
  float v230; // s8
  const MethodInfo_45E9150 *v231; // x2
  MapCamera_o *v232; // x20
  System_Action_o *v233; // x21
  MapCamera_o *v234; // x0
  float v235; // s3
  int32_t v236; // w1
  __int64 v237; // x9
  __int64 v238; // x23
  float v239; // s0
  int v240; // w8
  PlayMakerFSM_o *v241; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v243; // x1
  __int64 v244; // x2
  long double v245; // q0
  __int64 v246; // x2
  __int64 v247; // x8
  QuestBoardListViewManager_o *v248; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v249; // x8
  System_Action_o *_9__16_22; // x22
  Il2CppObject *v251; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v252; // x0
  System_String_o *v253; // x2
  System_String_o *v254; // x3
  int32_t v255; // w4
  int32_t v256; // w5
  bool v257; // w6
  bool v258; // w7
  __int64 v259; // x1
  __int64 v260; // x2
  long double v261; // q0
  __int64 v262; // x9
  float v263; // s0
  int v264; // w8
  __int64 v265; // x9
  __int64 v266; // x23
  float v267; // s0
  int v268; // w8
  __int64 v269; // x2
  long double v270; // q0
  __int64 v271; // x23
  float v272; // s0
  float v273; // s8
  __int64 v274; // x1
  __int64 v275; // x2
  int32_t v276; // w22
  long double v277; // q0
  ScrTerminalMap_o *v278; // x24
  float v279; // s0
  float v280; // s9
  float v281; // s0
  const MethodInfo_45E9150 *v282; // x2
  int v283; // w8
  MapCamera_o *v284; // x20
  float v285; // s0
  float v286; // s0
  System_Nullable_float__o v287; // x3
  MapCamera_o *v288; // x0
  __int64 v289; // x20
  System_String_o *v290; // x2
  System_String_o *v291; // x3
  int32_t v292; // w4
  int32_t v293; // w5
  bool v294; // w6
  bool v295; // w7
  __int64 v296; // x23
  unsigned int v297; // w21
  Il2CppObject *v298; // x0
  __int64 *v299; // x24
  System_String_o *v300; // x2
  System_String_o *v301; // x3
  int32_t v302; // w4
  int32_t v303; // w5
  bool v304; // w6
  bool v305; // w7
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v307; // x22
  System_String_o *v308; // x2
  System_String_o *v309; // x3
  int32_t v310; // w4
  int32_t v311; // w5
  bool v312; // w6
  bool v313; // w7
  const MethodInfo *v314; // x2
  __int64 v315; // x1
  __int64 v316; // x2
  long double v317; // q0
  long double v318; // q0
  __int64 v319; // x8
  NetworkManager_ResultCallbackFunc_o *v320; // x19
  __int64 v321; // x1
  __int64 v322; // x2
  Il2CppObject *Request_object; // x19
  long double v324; // q0
  int32_t v325; // w20
  System_String_o *param; // x21
  System_Reflection_MethodBase_o *v327; // x0
  __int64 v328; // x21
  int v329; // w22
  __int64 v330; // x1
  __int64 v331; // x2
  int32_t v332; // w21
  long double v333; // q0
  int32_t v334; // w1
  bool v335; // w2
  bool v336; // w3
  __int64 v337; // x22
  float v338; // s8
  int v339; // w23
  int32_t v340; // w21
  System_String_o *v341; // x20
  System_String_array *v342; // x23
  int v343; // w8
  System_String_o **v344; // x8
  System_String_o *v345; // x20
  System_String_array *v346; // x23
  int v347; // w8
  System_String_o **v348; // x8
  __int64 v349; // x8
  __int64 v350; // x22
  bool v351; // w23
  __int64 v352; // x23
  System_String_o *v353; // x2
  System_String_o *v354; // x3
  int32_t v355; // w4
  int32_t v356; // w5
  bool v357; // w6
  bool v358; // w7
  __int64 v359; // x20
  QuestAfterAction_o *v360; // x22
  Il2CppObject *v361; // x0
  __int64 *v362; // x19
  System_String_o *v363; // x2
  System_String_o *v364; // x3
  int32_t v365; // w4
  int32_t v366; // w5
  bool v367; // w6
  bool v368; // w7
  __int64 v369; // x1
  __int64 v370; // x2
  UnityEngine_Object_o *v371; // x21
  SrcSpotBasePrefab_o *v372; // x21
  System_Action_o *v373; // x22
  System_String_o *v374; // x2
  System_String_o *v375; // x3
  int32_t v376; // w4
  int32_t v377; // w5
  bool v378; // w6
  bool v379; // w7
  __int64 v380; // x1
  MissionNaviTransitionBoardItem_o *v381; // x0
  _BOOL4 v382; // w23
  QuestAfterAction_o *v383; // x22
  __int64 v384; // x1
  __int64 v385; // x2
  UnityEngine_Object_o *v386; // x21
  intptr_t v387; // x8
  QuestAfterAction_o *v388; // x22
  __int64 v389; // x1
  __int64 v390; // x2
  UnityEngine_Object_o *v391; // x21
  intptr_t v392; // x8
  SrcSpotBasePrefab_o *v393; // x0
  int32_t v394; // w1
  _BOOL4 v395; // w23
  QuestAfterAction_o *v396; // x22
  __int64 v397; // x1
  __int64 v398; // x2
  UnityEngine_Object_o *v399; // x21
  intptr_t v400; // x8
  __int64 v401; // x22
  __int64 v402; // x1
  __int64 v403; // x2
  int32_t v404; // w21
  long double v405; // q0
  bool v406; // w23
  __int64 v407; // x8
  int v408; // w9
  TerminalSceneComponent_c *v409; // x0
  __int64 v410; // x8
  __int64 v411; // x8
  __int64 v412; // x22
  int v413; // w23
  __int64 v414; // x1
  __int64 v415; // x2
  long double v416; // q0
  bool v417; // w21
  __int64 v418; // x2
  __int64 v419; // x8
  __int64 v420; // x21
  int32_t v421; // w20
  __int64 v422; // x8
  __int64 v423; // x21
  int32_t v424; // w0
  int32_t v425; // w20
  int32_t v426; // w22
  __int64 v427; // x21
  int32_t v428; // w20
  int32_t v429; // w22
  __int64 v430; // x1
  __int64 v431; // x2
  Il2CppObject *MapComponent_object; // x22
  __int64 v433; // x2
  long double v434; // q0
  __int64 v435; // x1
  __int64 v436; // x2
  Il2CppObject *v437; // x20
  ScrTerminalMap_o *v438; // x23
  ScrTerminalMap_o *v439; // x20
  UnityEngine_GameObject_o *v440; // x22
  System_Action_o *v441; // x23
  __int64 v442; // x22
  QuestAfterAction_o *v443; // x21
  __int64 v444; // x1
  __int64 v445; // x2
  Il2CppObject *v446; // x21
  QuestAfterAction_o *v447; // x23
  __int64 v448; // x1
  __int64 v449; // x2
  UnityEngine_Object_o *MapGameObject; // x23
  float x; // s9
  float y; // s8
  float z; // s10
  __int64 v454; // x21
  float v455; // s0
  QuestAfterAction_o *v456; // x20
  float v457; // s8
  __int64 v458; // x1
  __int64 v459; // x2
  Il2CppObject *v460; // x20
  __int64 v461; // x1
  __int64 v462; // x2
  long double v463; // q0
  float v464; // s8
  ScrTerminalMap_o *v465; // x22
  float v466; // s0
  float v467; // s9
  float v468; // s0
  QuestAfterAction_o *v469; // x21
  __int64 v470; // x1
  __int64 v471; // x2
  QuestAfterAction_o *v472; // x23
  int32_t v473; // w2
  QuestAfterAction_o *v474; // x0
  int32_t v475; // w1
  __int64 v476; // x8
  __int64 v477; // x22
  int32_t v478; // w21
  bool v479; // w22
  __int64 v480; // x1
  __int64 v481; // x2
  unsigned int v482; // w21
  long double v483; // q0
  __int64 v484; // x1
  __int64 v485; // x2
  QuestAfterAction_o *v486; // x20
  __int64 v487; // x1
  __int64 v488; // x2
  Il2CppObject *v489; // x20
  __int64 v490; // x1
  __int64 v491; // x2
  long double v492; // q0
  __int64 v493; // x8
  __int64 v494; // x22
  int32_t v495; // w21
  bool v496; // w22
  __int64 v497; // x8
  __int64 v498; // x22
  int32_t v499; // w21
  bool v500; // w22
  __int64 v501; // x21
  QuestAfterAction_o *v502; // x20
  __int64 v503; // x1
  __int64 v504; // x2
  Il2CppObject *v505; // x20
  UIWidget_o *v506; // x20
  __int64 v507; // x23
  System_String_o *v508; // x2
  System_String_o *v509; // x3
  int32_t v510; // w4
  int32_t v511; // w5
  bool v512; // w6
  bool v513; // w7
  __int64 v514; // x20
  __int64 v515; // x8
  __int64 v516; // x21
  int32_t v517; // w22
  bool v518; // w26
  bool v519; // w27
  __int64 v520; // x20
  System_String_o *v521; // x2
  System_String_o *v522; // x3
  int32_t v523; // w4
  int32_t v524; // w5
  bool v525; // w6
  bool v526; // w7
  __int64 v527; // x8
  QuestAfterAction_o *v528; // x22
  Il2CppObject *v529; // x0
  System_String_o *v530; // x2
  System_String_o *v531; // x3
  int32_t v532; // w4
  int32_t v533; // w5
  bool v534; // w6
  bool v535; // w7
  __int64 v536; // x1
  __int64 v537; // x2
  UnityEngine_Object_o *v538; // x19
  MapGimmickComponent_o *v539; // x19
  System_Action_o *v540; // x21
  __int64 v541; // x1
  __int64 v542; // x2
  long double v543; // q0
  __int64 v544; // x2
  TerminalSceneComponent_o *v545; // x19
  __int64 v546; // x20
  System_String_o *v547; // x2
  System_String_o *v548; // x3
  int32_t v549; // w4
  int32_t v550; // w5
  bool v551; // w6
  bool v552; // w7
  System_String_array *v553; // x0
  __int64 *v554; // x21
  System_String_o *v555; // x2
  System_String_o *v556; // x3
  int32_t v557; // w4
  int32_t v558; // w5
  bool v559; // w6
  bool v560; // w7
  __int64 v561; // x8
  __int64 v562; // x9
  QuestAfterAction_o *v563; // x21
  Il2CppObject *v564; // x0
  System_String_o *v565; // x2
  System_String_o *v566; // x3
  int32_t v567; // w4
  int32_t v568; // w5
  bool v569; // w6
  bool v570; // w7
  __int64 v571; // x1
  __int64 v572; // x2
  UnityEngine_Object_o *v573; // x19
  MapGimmickComponent_o *v574; // x19
  System_Action_o *v575; // x0
  System_Action_o *v576; // x21
  intptr_t *v577; // x8
  QuestAfterAction_o *v578; // x21
  __int64 v579; // x1
  __int64 v580; // x2
  QuestAfterAction_o *v581; // x23
  __int64 v582; // x1
  __int64 v583; // x2
  UnityEngine_Object_o *v584; // x23
  __int64 v585; // x1
  __int64 v586; // x2
  float v587; // s0
  float v588; // s11
  int32_t v589; // w23
  System_String_o *v590; // x2
  System_String_o *v591; // x3
  int32_t v592; // w4
  int32_t v593; // w5
  bool v594; // w6
  bool v595; // w7
  __int64 v596; // x8
  QuestAfterAction_o *v597; // x22
  Il2CppObject *v598; // x0
  __int64 v599; // x19
  System_String_o *v600; // x2
  System_String_o *v601; // x3
  int32_t v602; // w4
  int32_t v603; // w5
  bool v604; // w6
  bool v605; // w7
  __int64 v606; // x1
  __int64 v607; // x2
  UnityEngine_Object_o *v608; // x21
  bool v609; // w0
  bool v610; // w22
  MapGimmickComponent_o *v611; // x0
  int32_t v612; // w1
  float v613; // s0
  float v614; // s0
  QuestAfterAction_o *v615; // x24
  __int64 v616; // x1
  __int64 v617; // x2
  UnityEngine_Object_o *v618; // x24
  __int64 v619; // x1
  __int64 v620; // x2
  __int64 v621; // x1
  __int64 v622; // x2
  QuestAfterAction_o *v623; // x24
  __int64 v624; // x1
  __int64 v625; // x2
  UnityEngine_Object_o *v626; // x24
  __int64 v627; // x1
  __int64 v628; // x2
  float v629; // s10
  float v630; // s8
  float v631; // s9
  const MethodInfo_45E9150 *v632; // x2
  System_String_o *v633; // x24
  float v634; // s0
  QuestAfterAction_o *v635; // x24
  __int64 v636; // x1
  __int64 v637; // x2
  UnityEngine_Object_o *v638; // x24
  const MethodInfo_45E9150 *v639; // x2
  float v640; // s10
  float v641; // s8
  float v642; // s9
  int v643; // w8
  MapCamera_o *v644; // x20
  float v645; // s0
  __int64 v646; // x20
  System_String_o *v647; // x2
  System_String_o *v648; // x3
  int32_t v649; // w4
  int32_t v650; // w5
  bool v651; // w6
  bool v652; // w7
  __int64 v653; // x8
  QuestAfterAction_o *v654; // x22
  Il2CppObject *v655; // x0
  System_String_o *v656; // x2
  System_String_o *v657; // x3
  int32_t v658; // w4
  int32_t v659; // w5
  bool v660; // w6
  bool v661; // w7
  __int64 v662; // x1
  __int64 v663; // x2
  UnityEngine_Object_o *v664; // x19
  ModelLineComponent_o *v665; // x19
  __int64 v666; // x20
  System_String_o *v667; // x2
  System_String_o *v668; // x3
  int32_t v669; // w4
  int32_t v670; // w5
  bool v671; // w6
  bool v672; // w7
  __int64 v673; // x8
  QuestAfterAction_o *v674; // x22
  Il2CppObject *v675; // x0
  System_String_o *v676; // x2
  System_String_o *v677; // x3
  int32_t v678; // w4
  int32_t v679; // w5
  bool v680; // w6
  bool v681; // w7
  __int64 v682; // x1
  __int64 v683; // x2
  UnityEngine_Object_o *v684; // x19
  SrcSpotBasePrefab_o *v685; // x19
  __int64 v686; // x20
  System_String_o *v687; // x2
  System_String_o *v688; // x3
  int32_t v689; // w4
  int32_t v690; // w5
  bool v691; // w6
  bool v692; // w7
  __int64 v693; // x8
  QuestAfterAction_o *v694; // x22
  Il2CppObject *v695; // x0
  System_String_o *v696; // x2
  System_String_o *v697; // x3
  int32_t v698; // w4
  int32_t v699; // w5
  bool v700; // w6
  bool v701; // w7
  __int64 v702; // x1
  __int64 v703; // x2
  UnityEngine_Object_o *v704; // x19
  ModelLineComponent_o *v705; // x19
  QuestAfterAction_o *v706; // x22
  __int64 v707; // x1
  __int64 v708; // x2
  UnityEngine_Object_o *v709; // x21
  intptr_t v710; // x8
  QuestAfterAction_o *v711; // x22
  __int64 v712; // x1
  __int64 v713; // x2
  intptr_t m_CachedPtr; // x8
  __int64 v715; // x22
  QuestAfterAction_o *v716; // x21
  __int64 v717; // x1
  __int64 v718; // x2
  Il2CppObject *v719; // x21
  System_Action_c *v720; // x8
  System_Action_o *v721; // x22
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v723; // x22
  __int64 v724; // x1
  __int64 v725; // x2
  UnityEngine_Object_o *v726; // x21
  int32_t v727; // w1
  Il2CppObject *v728; // x3
  __int64 v729; // x8
  __int64 v730; // x8
  __int64 v731; // x22
  unsigned __int64 v732; // x24
  __int64 v733; // x8
  __int64 v734; // x21
  const MethodInfo *v735; // x3
  __int64 v736; // x8
  __int64 v737; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v738; // x20
  System_Action_o *v739; // x22
  const MethodInfo *v740; // x3
  int32_t v741; // s0
  int v742; // s1
  int v743; // s2
  System_Action_c *v744; // x0
  System_Action_o *v745; // x19
  __int64 v746; // x1
  __int64 v747; // x2
  long double v748; // q0
  __int64 v749; // x1
  __int64 v750; // x2
  long double v751; // q0
  SceneJumpInfo_o *v752; // x21
  __int64 v753; // x1
  __int64 v754; // x2
  long double v755; // q0
  System_String_o *v756; // x19
  Il2CppObject *v757; // x21
  System_Action_o *v758; // x23
  System_String_o *v759; // x19
  Il2CppObject *v760; // x21
  System_Action_o *v761; // x23
  MapCamera_o *v764; // x20
  __int64 v765; // x2
  __int64 v766; // x8
  UnityEngine_Object_o *v767; // x22
  int v768; // w25
  int v769; // w26
  __int64 v770; // x1
  __int64 v771; // x1
  __int64 v772; // x2
  Il2CppObject *v773; // x21
  _DWORD *v774; // x8
  QuestAfterAction_StateMain_c *v775; // x8
  int v776; // w0
  __int64 v777; // x1
  __int64 v778; // x2
  Il2CppObject *v779; // x21
  _DWORD *v780; // x8
  __int64 v781; // x1
  __int64 v782; // x2
  Il2CppObject *v783; // x21
  _DWORD *v784; // x8
  Il2CppObject *v785; // x0
  System_String_o *v786; // x2
  System_String_o *v787; // x3
  int32_t v788; // w4
  int32_t v789; // w5
  bool v790; // w6
  bool v791; // w7
  __int64 v792; // x1
  __int64 v793; // x2
  UnityEngine_Object_o *v794; // x22
  MapGimmickComponent_o *v795; // x21
  System_Action_c *v796; // x0
  System_Action_o *v797; // x0
  System_Action_o *v798; // x22
  Il2CppObject *v799; // x0
  MapGimmickComponent_o **v800; // x22
  System_String_o *v801; // x2
  System_String_o *v802; // x3
  int32_t v803; // w4
  int32_t v804; // w5
  bool v805; // w6
  bool v806; // w7
  __int64 v807; // x1
  __int64 v808; // x2
  UnityEngine_Object_o *v809; // x24
  MapGimmickComponent_o *v810; // x8
  MapGimmickComponent_o *v811; // x21
  System_Action_o *v812; // x0
  System_Action_o *v813; // x2
  System_String_o *v814; // x20
  System_Action_o *v815; // x21
  float v816; // s3
  MapCamera_o *v817; // x20
  float v818; // s10
  float v819; // s9
  float v820; // s8
  System_String_o *v821; // x24
  __int64 v822; // x20
  System_String_o *v823; // x2
  System_String_o *v824; // x3
  int32_t v825; // w4
  int32_t v826; // w5
  bool v827; // w6
  bool v828; // w7
  __int64 v829; // x8
  QuestAfterAction_o *v830; // x22
  Il2CppObject *v831; // x0
  System_String_o *v832; // x2
  System_String_o *v833; // x3
  int32_t v834; // w4
  int32_t v835; // w5
  bool v836; // w6
  bool v837; // w7
  __int64 v838; // x1
  __int64 v839; // x2
  UnityEngine_Object_o *v840; // x19
  srcLineSprite_o *v841; // x19
  System_Action_o *v842; // x21
  float v843; // s0
  srcLineSprite_o *v844; // x0
  int32_t v845; // w1
  __int64 v846; // x20
  System_String_o *v847; // x2
  System_String_o *v848; // x3
  int32_t v849; // w4
  int32_t v850; // w5
  bool v851; // w6
  bool v852; // w7
  __int64 v853; // x8
  QuestAfterAction_o *v854; // x22
  Il2CppObject *v855; // x0
  System_String_o *v856; // x2
  System_String_o *v857; // x3
  int32_t v858; // w4
  int32_t v859; // w5
  bool v860; // w6
  bool v861; // w7
  __int64 v862; // x1
  __int64 v863; // x2
  UnityEngine_Object_o *v864; // x19
  srcLineSprite_o *v865; // x19
  __int64 v866; // x20
  System_String_o *v867; // x2
  System_String_o *v868; // x3
  int32_t v869; // w4
  int32_t v870; // w5
  bool v871; // w6
  bool v872; // w7
  __int64 v873; // x8
  QuestAfterAction_o *v874; // x22
  Il2CppObject *v875; // x0
  System_String_o *v876; // x2
  System_String_o *v877; // x3
  int32_t v878; // w4
  int32_t v879; // w5
  bool v880; // w6
  bool v881; // w7
  __int64 v882; // x1
  __int64 v883; // x2
  UnityEngine_Object_o *v884; // x19
  srcLineSprite_o *v885; // x19
  __int64 v886; // x1
  __int64 v887; // x2
  UnityEngine_Object_o *v888; // x21
  __int64 v889; // x1
  __int64 v890; // x2
  UnityEngine_Object_o *v891; // x21
  int v892; // w9
  __int64 v893; // x1
  __int64 v894; // x2
  UnityEngine_Object_o *v895; // x21
  ScrTerminalMap_o *v896; // x21
  System_Action_o *v897; // x23
  System_String_o *v898; // x23
  System_Action_o *v899; // x20
  MapGimmickComponent_o *v900; // x0
  float v903; // s3
  int32_t v904; // w1
  System_Action_o *v905; // x2
  __int64 v906; // x8
  int v907; // w8
  MapCamera_o *v910; // x20
  System_Action_o *v911; // x21
  System_Action_o *v912; // x2
  int v913; // w8
  float v914; // s0
  MapCamera_o *v915; // x20
  ScrTerminalMap_o *v916; // x22
  float v917; // s0
  float v918; // s9
  float v919; // s0
  int32_t v920; // w21
  System_Action_o *v921; // x22
  MapCamera_o *v922; // x20
  float v923; // s0
  System_Action_o *v924; // x21
  float v927; // s0
  MapCamera_o *v928; // x0
  System_Nullable_float__o v929; // x3
  float v930; // s0
  MapCamera_o *v931; // x20
  float v932; // s0
  int32_t v933; // w4
  MapCamera_o *v934; // x20
  float v935; // s0
  __int64 v936; // x1
  __int64 v937; // x2
  long double v938; // q0
  __int64 v939; // x1
  __int64 v940; // x2
  long double v941; // q0
  System_Collections_IEnumerable_o **monitor; // x8
  __int64 v943; // x1
  __int64 v944; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v945; // x23
  QuestAfterAction_StateMain___c_c *v946; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__16_35; // x24
  Il2CppObject *v949; // x25
  struct QuestAfterAction_StateMain___c_StaticFields *v950; // x0
  System_String_o *v951; // x2
  System_String_o *v952; // x3
  int32_t v953; // w4
  int32_t v954; // w5
  bool v955; // w6
  bool v956; // w7
  __int64 v957; // x2
  long double v958; // q0
  char v959; // w23
  __int64 v960; // x2
  long double v961; // q0
  _QWORD *v962; // x8
  int32_t v963; // w24
  __int64 v964; // x1
  __int64 v965; // x2
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppObject *v968; // x25
  _BOOL8 v969; // x0
  __int64 v970; // x1
  __int64 v971; // x2
  TerminalPramsManager_c *v972; // x0
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  _BOOL8 v974; // x0
  __int64 v975; // x1
  TitleInfoEventItemControl_o *v976; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v978; // x1
  __int64 v979; // x0
  __int64 v980; // x1
  long double v981; // q0
  long double v982; // q0
  float v983; // s0
  float v984; // s1
  float v985; // s2
  long double v986; // q0
  long double v987; // q0
  int32_t messageFontSize; // [xsp+8h] [xbp-168h]
  int32_t v989; // [xsp+48h] [xbp-128h]
  float sec; // [xsp+4Ch] [xbp-124h]
  bool seca; // [xsp+4Ch] [xbp-124h]
  System_Collections_Generic_List_Enumerator_object__o v992; // [xsp+50h] [xbp-120h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v994; // [xsp+70h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v995; // [xsp+90h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+A8h] [xbp-C8h] BYREF
  int32_t v997; // [xsp+B4h] [xbp-BCh] BYREF
  int32_t v998[2]; // [xsp+B8h] [xbp-B8h] BYREF
  __int64 v999; // [xsp+C0h] [xbp-B0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-A8h] BYREF
  Il2CppObject *entity; // [xsp+D0h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+D8h] [xbp-98h] BYREF
  bool isQuickUpdate[4]; // [xsp+ECh] [xbp-84h] BYREF
  UnityEngine_Vector3_o v1004; // 0:kr00_12.12
  UnityEngine_Vector3_o v1005; // 0:kr14_12.12
  UnityEngine_Vector3_o LocalPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v1007; // 0:kr34_12.12
  UnityEngine_Vector3_o v1008; // 0:kr40_12.12
  UnityEngine_Vector3_o v1009; // 0:kr54_12.12
  UnityEngine_Vector3_o Position; // 0:kr60_12.12
  UnityEngine_Vector3_o v1011; // 0:kr74_12.12
  UnityEngine_Vector3_o v1012; // 0:kr80_12.12
  UnityEngine_Vector3_o v1013; // 0:kr94_12.12
  UnityEngine_Vector3_o v1014; // 0:krA0_12.12
  UnityEngine_Vector3_o v1015; // 0:krB4_12.12
  UnityEngine_Vector3_o v1016; // 0:krC0_12.12
  UnityEngine_Vector3_o v1017; // 0:krD4_12.12
  System_Nullable_Vector3__o v1018; // 0:x0.16
  System_Nullable_Vector3__o v1019; // 0:x0.16
  System_Nullable_Vector3__o v1020; // 0:x0.16
  System_Nullable_Vector3__o v1021; // 0:x0.16
  System_Nullable_Vector3__o v1022; // 0:x0.16
  System_Nullable_Vector3__o v1023; // 0:x0.16
  System_Nullable_Vector3__o v1024; // 0:x0.16
  System_Nullable_Vector3__o v1025; // 0:x1.16
  System_Nullable_Vector3__o v1026; // 0:x1.16
  UnityEngine_Vector3_o v1027; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1028; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1029; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1030; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1031; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1032; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1033; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1034; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1035; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D1A3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
    sub_2213A60(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_2213A60(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_2213A60(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_2213A60(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_2213A60(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_2213A60(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_2213A60(&StringLiteral_87/*"\r\n"*/);
    sub_2213A60(&StringLiteral_1457/*"30101"*/);
    sub_2213A60(&StringLiteral_11293/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_2213A60(&StringLiteral_1458/*"30102"*/);
    sub_2213A60(&StringLiteral_1383/*"10703"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_3430/*"CAPTER WAIT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_20794/*"gevINFOBAR_BACK"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596D1A3 = 1;
  }
  isQuickUpdate[0] = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)result = 0;
  entity = 0;
  *(_QWORD *)v998 = 0;
  v999 = 0;
  v997 = 0;
  value = 0;
  memset(&v995, 0, sizeof(v995));
  memset(&v994, 0, sizeof(v994));
  v5 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_1197;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (__int64 *)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)that, v15, v16, v17, v18, v19, v20);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
              this,
              this->klass->vtable._10_get_CommandBuf.method);
  if ( !updated )
    return;
  if ( !*v14 )
    goto LABEL_1197;
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
LABEL_1197:
    sub_2213CDC(updated, v7);
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
    goto LABEL_1197;
  if ( (unsigned int)updated >= *(_DWORD *)(v22 + 24) )
    goto LABEL_1143;
  v23 = *(QuestAfterAction_Command_o **)(v22 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, const MethodInfo *))this->klass->vtable._9_IsUsableCommand.methodPtr)(
              this,
              v23,
              this->klass->vtable._9_IsUsableCommand.method);
  if ( (updated & 1) == 0 )
    goto LABEL_1055;
  v24 = *v14;
  isQuickUpdate[0] = 0;
  if ( !v24 )
    goto LABEL_1197;
  v25 = *(BlankEarthQuestAfterAction_o **)(v24 + 56);
  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !v25 )
    goto LABEL_1197;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v25, v7, v23, v26, isQuickUpdate, v27);
  if ( (updated & 1) == 0 )
  {
    if ( !*v14 )
      goto LABEL_1197;
    v28 = *(BlankEarthQuestAfterAction_o **)(*v14 + 48);
    v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
    if ( !v28 )
      goto LABEL_1197;
    updated = BlankEarthQuestAfterAction__UpdateAnim(v28, v7, v23, v29, isQuickUpdate, v30);
    if ( (updated & 1) == 0 )
    {
      if ( !v23 )
        goto LABEL_1197;
      id = v23->fields.id;
      if ( id > 540 )
      {
        if ( (unsigned int)id > 0x352 )
        {
          if ( (unsigned int)id <= 0x44C )
          {
            if ( id == 851 )
            {
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v31);
              v160 = (TerminalSceneComponent_o *)sub_291C204(0, *(long double *)&inited);
              updated = (__int64)QuestAfterAction_Command__GetBgmName(v23, v161);
              if ( !v160 )
                goto LABEL_1197;
              TerminalSceneComponent__playBgm(v160, (System_String_o *)updated, 0, 0.0, 0);
              if ( !*v14 )
                goto LABEL_1197;
              *(_BYTE *)(*v14 + 192) = 0;
              goto LABEL_945;
            }
            if ( id == 900 )
            {
              v155 = (float)System_Int32__Parse(v23->fields.param, 0) / 1000.0;
              if ( v155 <= 0.0 )
                goto LABEL_21;
              this->fields.waitTime = v155;
              this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
              return;
            }
            if ( id != 1100 )
              goto LABEL_945;
            v57 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            System_Object___ctor((Il2CppObject *)v57, 0);
            if ( !v57 )
              goto LABEL_1197;
            *(_QWORD *)(v57 + 24) = v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v57 + 24), v5, v58, v59, v60, v61, v62, v63);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v64 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( (*(_DWORD *)(v64 + 24) & 0xFFFFFFFE) != 0 )
              {
                v65 = updated;
                v68 = System_Int32__Parse(*(System_String_o **)(v64 + 40), 0);
                if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v69 = j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v66, v67);
                v72 = sub_291C57C(0, v69);
                *(float *)(v57 + 20) = v72;
                LODWORD(v73) = -1.0;
                if ( *(int *)(v64 + 24) >= 3 )
                {
                  *(float *)&v73 = System_Single__Parse(*(System_String_o **)(v64 + 48), 0);
                  v72 = *(float *)(v57 + 20);
                }
                *(float *)&v73 = *(float *)&v73 * v72;
                *(_DWORD *)(v57 + 16) = LODWORD(v73);
                if ( *(float *)&v73 > -1.0 )
                {
                  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v73 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v70, v71);
                  updated = sub_291C204(0, v73);
                  if ( !updated )
                    goto LABEL_1197;
                  v76 = *(float *)(v57 + 16);
                  v75 = *(float *)(v57 + 20);
                  v77 = *(ScrTerminalListTop_o **)(updated + 256);
                  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v7, v74);
                  if ( !v77 )
                    goto LABEL_1197;
                  ScrTerminalListTop__StartEasingBgmMasterVolume(
                    v77,
                    v75,
                    v76,
                    QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                    2,
                    0,
                    0);
                }
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v73 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v70, v71);
                updated = sub_291C204(0, v73);
                if ( !updated )
                  goto LABEL_1197;
                v78 = *(ScrTerminalListTop_o **)(updated + 256);
                v79 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v79,
                  (Il2CppObject *)v57,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
                  0);
                if ( !v78 )
                  goto LABEL_1197;
                ScrTerminalListTop__StartEventEffect(v78, v65, v68, v79, 0, 0);
                return;
              }
            }
            goto LABEL_1143;
          }
          if ( (unsigned int)id > 0x514 )
          {
            if ( id <= 1310 )
            {
              if ( id != 1301 )
              {
                if ( id != 1310 )
                  goto LABEL_945;
                if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v7, v31);
                v39 = v23;
                v40 = 0;
                goto LABEL_210;
              }
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1197;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1197;
              v401 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v404 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                v406 = *(int *)(v401 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v401 + 40), 0) > 0;
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v405 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v402, v403);
                updated = sub_291C204(0, v405);
                if ( !updated )
                  goto LABEL_1197;
                v729 = *(_QWORD *)(updated + 256);
                if ( !v729 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(v729 + 136);
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)TitleInfoControl__GetEnableEventUiObjectList((TitleInfoControl_o *)updated, 1, 0);
                if ( !updated )
                  goto LABEL_1197;
                v730 = *(_QWORD *)(updated + 24);
                v731 = updated;
                if ( (int)v730 < 1 )
                  goto LABEL_945;
                v732 = 0;
                while ( 1 )
                {
                  if ( v732 >= (unsigned int)v730 )
                    goto LABEL_1143;
                  updated = *(_QWORD *)(v731 + 32 + 8 * v732);
                  if ( v406 )
                    break;
                  if ( !updated )
                    goto LABEL_1197;
                  v733 = *(_QWORD *)(updated + 64);
                  if ( !v733 )
                    goto LABEL_1197;
                  if ( v404 == *(_DWORD *)(v733 + 16) )
                    goto LABEL_803;
LABEL_805:
                  LODWORD(v730) = *(_DWORD *)(v731 + 24);
                  if ( (__int64)++v732 >= (int)v730 )
                    goto LABEL_945;
                }
                if ( !updated )
                  goto LABEL_1197;
LABEL_803:
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)updated, 0);
                if ( !updated )
                  goto LABEL_1197;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)updated, 1, 0);
                goto LABEL_805;
              }
              goto LABEL_1143;
            }
            if ( id != 1311 )
            {
              if ( id != 1312 )
                goto LABEL_945;
              if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v7, v31);
              v39 = v23;
              v40 = 1;
LABEL_210:
              updated = QuestAfterAction__TryRaidUiDisableCommand(v39, v40, 0);
              if ( (updated & 1) == 0 )
              {
LABEL_211:
                v156 = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                v159 = *(System_Collections_Generic_List_object__o **)(v156 + 224);
                v157 = (MissionNaviTransitionBoardItem_o *)(v156 + 224);
                v158 = v159;
                if ( !v159 )
                {
                  v158 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v158,
                    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
                }
                v157->klass = (MissionNaviTransitionBoardItem_c *)v158;
                sub_2213A04(v157, (int32_t)v158, v106, v107, v108, v109, v110, v111);
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 224);
                if ( !updated )
                  goto LABEL_1197;
                sub_1FFEDA8(updated, v23, Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__);
              }
LABEL_945:
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
LABEL_946:
              v34 = *v14;
              v36 = this->klass->vtable._13_UpdateAnim.method;
              methodPtr = this->klass->vtable._13_UpdateAnim.methodPtr;
LABEL_947:
              v35 = this;
              goto LABEL_22;
            }
            updated = (__int64)TerminalPramsManager_TypeInfo;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            {
              inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v31);
              updated = (__int64)TerminalPramsManager_TypeInfo;
            }
            v407 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 904LL);
            if ( !v407 )
              goto LABEL_1197;
            v408 = *(_DWORD *)(v407 + 28) + 1;
            v409 = TerminalSceneComponent_TypeInfo;
            *(_DWORD *)(v407 + 24) = 0;
            *(_DWORD *)(v407 + 28) = v408;
            if ( !*(&v409->_2.cctor_finished + 1) )
              inited = j_il2cpp_runtime_class_init_0(v409, v7, v31);
            updated = sub_291C204(0, *(long double *)&inited);
            if ( !updated )
              goto LABEL_1197;
            v410 = *(_QWORD *)(updated + 256);
            if ( !v410 )
              goto LABEL_1197;
            v411 = *(_QWORD *)(v410 + 136);
            if ( !v411 )
              goto LABEL_1197;
            updated = *(_QWORD *)(v411 + 328);
            if ( !updated )
              goto LABEL_1197;
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)updated + 440LL))(
              updated,
              *(_QWORD *)(*(_QWORD *)updated + 448LL));
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v412 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1143;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( (*(_DWORD *)(v412 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v413 = updated;
            v989 = System_Int32__Parse(*(System_String_o **)(v412 + 40), 0);
            if ( *(int *)(v412 + 24) >= 3 )
            {
              v417 = System_Int32__Parse(*(System_String_o **)(v412 + 48), 0) > 0;
              if ( *(int *)(v412 + 24) >= 4 )
              {
                seca = System_Int32__Parse(*(System_String_o **)(v412 + 56), 0) > 0;
                goto LABEL_900;
              }
            }
            else
            {
              v417 = 0;
            }
            seca = 0;
LABEL_900:
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v416 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v414, v415);
            updated = sub_291C204(0, v416);
            if ( !updated )
              goto LABEL_1197;
            v766 = *(_QWORD *)(updated + 256);
            if ( !v766 )
              goto LABEL_1197;
            v767 = *(UnityEngine_Object_o **)(v766 + 136);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v765);
            updated = UnityEngine_Object__op_Equality(v767, 0, 0);
            if ( (updated & 1) != 0 )
              goto LABEL_21;
            if ( !v767 )
              goto LABEL_1197;
            updated = (__int64)v767[14].monitor;
            if ( !updated )
              goto LABEL_1197;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v992,
              (System_Collections_Generic_List_object__o *)updated,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
            v768 = 0;
            v995 = v992;
            v992.fields._list = 0;
            *(_QWORD *)&v992.fields._index = &v995;
LABEL_910:
            v769 = v768;
            while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v995,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__) )
            {
              if ( v417 )
              {
                if ( !v995.fields._current )
                  sub_2213CDC(0, v770);
LABEL_917:
                v768 = 1;
                TitleInfoEventRaidStatusComponent__SetEntryAnim(
                  (TitleInfoEventRaidStatusComponent_o *)v995.fields._current,
                  0);
                goto LABEL_910;
              }
              if ( !v995.fields._current )
                sub_2213CDC(0, v770);
              if ( v413 == LODWORD(v995.fields._current[9].monitor) )
                goto LABEL_917;
            }
            sub_2007A98(&v992);
            if ( (v768 & 1) != 0 )
            {
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v938 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v936, v937);
              if ( sub_291C5CC(0, v938) )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v941 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v939, v940);
                updated = sub_291C5CC(0, v941);
                if ( !updated )
                  goto LABEL_1197;
                *(_BYTE *)(updated + 64) = 1;
              }
            }
            monitor = (System_Collections_IEnumerable_o **)v767[15].monitor;
            if ( monitor )
            {
              v945 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                            monitor[9],
                                                                            (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
              v946 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( !*(&QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, v943, v944);
                v946 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              static_fields = v946->static_fields;
              _9__16_35 = (System_Func_object__bool__o *)static_fields->__9__16_35;
              if ( !_9__16_35 )
              {
                if ( !*(&v946->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v946, v943, v944);
                  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v949 = (Il2CppObject *)static_fields->__9;
                _9__16_35 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__16_35,
                  v949,
                  Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
                  0);
                v950 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v950->__9__16_35 = (struct System_Func_TitleInfoEventRaidBossComponent__bool__o *)_9__16_35;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v950->__9__16_35,
                  (int32_t)_9__16_35,
                  v951,
                  v952,
                  v953,
                  v954,
                  v955,
                  v956);
              }
              updated = System_Linq_Enumerable__Any_object__59145568(
                          v945,
                          (System_Func_TSource__bool__o *)_9__16_35,
                          (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
              v959 = updated;
              if ( (updated & 1) != 0 && ((v769 ^ 1) & 1) != 0 )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v958 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v957);
                updated = sub_291C5CC(0, v958);
                if ( updated )
                {
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v961 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v960);
                  updated = sub_291C5CC(0, v961);
                  if ( !updated )
                    goto LABEL_1197;
                  *(_BYTE *)(updated + 64) = 1;
                }
              }
              v962 = v767[15].monitor;
              if ( !v962 )
                goto LABEL_1197;
              updated = v962[9];
              if ( !updated )
                goto LABEL_1197;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v992,
                (System_Collections_Generic_List_object__o *)updated,
                (const MethodInfo_448473C *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
              v994 = v992;
              v963 = 0;
              v992.fields._list = 0;
              *(_QWORD *)&v992.fields._index = &v994;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v994,
                        (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
              {
                current = v994.fields._current;
                if ( v994.fields._current
                  && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
                      v994.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
                {
                  if ( (TitleInfoEventRaidBossComponent_c *)v994.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
                    v968 = v994.fields._current;
                  else
                    v968 = 0;
                }
                else
                {
                  v968 = 0;
                }
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v964, v965);
                v969 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v968, 0, 0);
                if ( v969 )
                {
                  if ( seca )
                    goto LABEL_1186;
                  if ( !v968 )
                    sub_2213CDC(v969, v970);
                  if ( v989 == LODWORD(v968[23].klass) )
                  {
LABEL_1186:
                    v972 = TerminalPramsManager_TypeInfo;
                    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v970, v971);
                      v972 = TerminalPramsManager_TypeInfo;
                    }
                    RaidBossHpForceHideGroupIndexList = v972->static_fields->RaidBossHpForceHideGroupIndexList;
                    if ( !RaidBossHpForceHideGroupIndexList )
                      sub_2213CDC(0, v970);
                    v974 = System_Collections_Generic_List_int___Remove(
                             RaidBossHpForceHideGroupIndexList,
                             v963,
                             (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
                    if ( (v959 & 1) != 0 )
                    {
                      v976 = (TitleInfoEventItemControl_o *)v767[15].monitor;
                      if ( !v976 )
                        sub_2213CDC(0, v975);
                      TitleInfoEventItemControl__SetEventGroupIdx(v976, v963, 1, 0);
                    }
                    else
                    {
                      if ( !current )
                        sub_2213CDC(v974, v975);
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
                      if ( !gameObject )
                        sub_2213CDC(0, v978);
                      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                      if ( !v968 )
                        sub_2213CDC(v979, v980);
                      TitleInfoEventRaidBossComponent__PlayFrameInBoss((TitleInfoEventRaidBossComponent_o *)v968, 0);
                    }
                  }
                }
                ++v963;
              }
              sub_2007AC8(&v992);
            }
            goto LABEL_1205;
          }
          if ( id != 1200 )
          {
            if ( id == 1300 )
            {
              if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v7, v31);
              updated = QuestAfterAction__TryEventUiDisableCommand(v23, 0);
              if ( (updated & 1) == 0 )
                goto LABEL_211;
            }
            goto LABEL_945;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1197;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1197;
          v328 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1143;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( (*(_DWORD *)(v328 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_1143;
          v329 = updated;
          v332 = System_Int32__Parse(*(System_String_o **)(v328 + 40), 0);
          if ( v329 == 2 )
          {
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v333 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v330, v331);
            updated = sub_291C204(0, v333);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 256);
            if ( !updated )
              goto LABEL_1197;
            v334 = v332;
            v335 = 1;
          }
          else
          {
            if ( v329 != 1 )
            {
              if ( v329 )
                goto LABEL_945;
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v333 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v330, v331);
              updated = sub_291C204(0, v333);
              if ( !updated )
                goto LABEL_1197;
              updated = *(_QWORD *)(updated + 256);
              if ( !updated )
                goto LABEL_1197;
              v334 = v332;
              v335 = 1;
              v336 = 1;
LABEL_875:
              ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v334, v335, v336, 0);
              goto LABEL_945;
            }
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v333 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v330, v331);
            updated = sub_291C204(0, v333);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 256);
            if ( !updated )
              goto LABEL_1197;
            v334 = v332;
            v335 = 0;
          }
          v336 = 0;
          goto LABEL_875;
        }
        if ( (unsigned int)id <= 0x25C )
        {
          if ( id <= 600 )
          {
            if ( id == 550 )
              goto LABEL_945;
            if ( id != 560 )
            {
              if ( id == 600 )
              {
                v145 = (System_String_o *)StringLiteral_1/*""*/;
                v148 = System_String__Concat_75651716((System_String_o *)StringLiteral_11293/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v146, v147);
                v149 = LocalizationManager__Get(v148, 0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v151 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v151,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
                  0);
                if ( !Instance )
                  goto LABEL_1197;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)Instance,
                  v145,
                  v149,
                  v151,
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
              }
              goto LABEL_945;
            }
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v349 = *(_QWORD *)(updated + 24);
            v350 = updated;
            if ( v349 )
            {
              if ( !(_DWORD)v349 )
                goto LABEL_1143;
              v351 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) < 1;
            }
            else
            {
              v351 = 1;
            }
            v734 = sub_2213CCC(QuestAfterAction_TitleInfoControlParam_TypeInfo);
            System_Object___ctor((Il2CppObject *)v734, 0);
            v736 = *(_QWORD *)(v350 + 24);
            if ( (int)v736 >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v350 + 40), 0);
              v736 = *(_QWORD *)(v350 + 24);
              if ( (int)updated >= 1 )
              {
                if ( (v736 & 0xFFFFFFFE) == 0 )
                  goto LABEL_1143;
                updated = System_Int32__Parse(*(System_String_o **)(v350 + 40), 0);
                if ( !v734 )
                  goto LABEL_1197;
                *(_DWORD *)(v734 + 16) = updated;
                v736 = *(_QWORD *)(v350 + 24);
              }
            }
            if ( (int)v736 > 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v350 + 48), 0);
              if ( (int)updated >= 1 )
              {
                if ( *(_DWORD *)(v350 + 24) <= 2u )
                  goto LABEL_1143;
                updated = System_Int32__Parse(*(System_String_o **)(v350 + 48), 0);
                if ( !v734 )
                  goto LABEL_1197;
                *(_DWORD *)(v734 + 20) = updated;
              }
            }
            v737 = *v14;
            if ( v351 )
            {
              if ( !v737 )
                goto LABEL_1197;
              v738 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v737 + 40);
              v739 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v739, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !v738 )
                goto LABEL_1197;
              QuestAfterAction_TitleInfoControlCallback__Start(
                v738,
                (QuestAfterAction_TitleInfoControlParam_o *)v734,
                v739,
                v740);
              return;
            }
            if ( !v737 )
              goto LABEL_1197;
            updated = *(_QWORD *)(v737 + 40);
            if ( !updated )
              goto LABEL_1197;
            QuestAfterAction_TitleInfoControlCallback__Start(
              (QuestAfterAction_TitleInfoControlCallback_o *)updated,
              (QuestAfterAction_TitleInfoControlParam_o *)v734,
              0,
              v735);
            goto LABEL_945;
          }
          if ( id > 602 )
          {
            if ( id == 603 )
            {
              v345 = (System_String_o *)StringLiteral_1/*""*/;
              updated = sub_2213B20(string___TypeInfo, 1);
              if ( !updated )
                goto LABEL_1197;
              v346 = (System_String_array *)updated;
              sub_1FFE2C4(updated, 0, StringLiteral_87/*"\r\n"*/);
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1197;
              updated = (__int64)System_String__Split_75709916((System_String_o *)updated, v346, 0, 0);
              if ( !updated )
                goto LABEL_1197;
              v347 = *(_DWORD *)(updated + 24);
              if ( v347 > 0 )
              {
                if ( v347 == 1 )
                {
                  v348 = (System_String_o **)(updated + 32);
                }
                else
                {
                  v345 = *(System_String_o **)(updated + 32);
                  v348 = (System_String_o **)(updated + 40);
                }
                v759 = *v348;
                v760 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v761 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v761,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
                  0);
                if ( !v760 )
                  goto LABEL_1197;
                CommonUI__OpenNotificationDialog_37374772(
                  (CommonUI_o *)v760,
                  v345,
                  v759,
                  v761,
                  40.0,
                  -162.5,
                  210,
                  0,
                  0,
                  0,
                  1,
                  28,
                  1,
                  0,
                  1,
                  0,
                  0);
                return;
              }
              goto LABEL_1055;
            }
            v93 = (System_String_o *)StringLiteral_1/*""*/;
            v154 = System_String__Concat_75651716((System_String_o *)StringLiteral_11293/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152, v153);
            v97 = LocalizationManager__Get(v154, 0);
            v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v99 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v99,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
              0);
            if ( !v98 )
              goto LABEL_1197;
            v100 = 30.0;
            messageFontSize = 30;
          }
          else
          {
            if ( id == 601 )
            {
              v341 = (System_String_o *)StringLiteral_1/*""*/;
              updated = sub_2213B20(string___TypeInfo, 1);
              if ( !updated )
                goto LABEL_1197;
              v342 = (System_String_array *)updated;
              sub_1FFE2C4(updated, 0, StringLiteral_87/*"\r\n"*/);
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1197;
              updated = (__int64)System_String__Split_75709916((System_String_o *)updated, v342, 0, 0);
              if ( !updated )
                goto LABEL_1197;
              v343 = *(_DWORD *)(updated + 24);
              if ( v343 > 0 )
              {
                if ( v343 == 1 )
                {
                  v344 = (System_String_o **)(updated + 32);
                }
                else
                {
                  v341 = *(System_String_o **)(updated + 32);
                  v344 = (System_String_o **)(updated + 40);
                }
                v756 = *v344;
                v757 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v758 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(
                  v758,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
                  0);
                if ( !v757 )
                  goto LABEL_1197;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v757,
                  v341,
                  v756,
                  v758,
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
              }
              goto LABEL_1055;
            }
            v93 = (System_String_o *)StringLiteral_1/*""*/;
            v96 = System_String__Concat_75651716((System_String_o *)StringLiteral_11293/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v94, v95);
            v97 = LocalizationManager__Get(v96, 0);
            v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v99 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v99,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
              0);
            if ( !v98 )
              goto LABEL_1197;
            messageFontSize = 28;
            v100 = 40.0;
          }
          CommonUI__OpenNotificationDialog_37374772(
            (CommonUI_o *)v98,
            v93,
            v97,
            v99,
            v100,
            -162.5,
            210,
            0,
            0,
            0,
            1,
            messageFontSize,
            0,
            0,
            1,
            0,
            0);
          return;
        }
        if ( (unsigned int)id > 0x320 )
        {
          if ( id == 801 )
          {
            param = v23->fields.param;
            v327 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_QuestAfterAction_StateMain_UpdateAnim__);
            OverwriteAssetSoundName__PlaySe(v327, param, 0, 0);
          }
          else if ( id == 850 )
          {
            if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7, v31);
            SoundManager__stopBgm(0);
            if ( !*v14 )
              goto LABEL_1197;
            *(_BYTE *)(*v14 + 192) = 1;
          }
          goto LABEL_945;
        }
        if ( id <= 701 )
        {
          if ( id != 700 )
          {
            if ( id == 701 && System_String__op_Equality(v23->fields.param, (System_String_o *)StringLiteral_1198/*"0"*/, 0) )
            {
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v210 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v208, v209);
              if ( (sub_291C41C(0, v210) & 1) == 0 )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v213 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v211, v212);
                sub_291C46C(1, 0, v213);
                v216 = BalanceConfig_TypeInfo;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v214, v215);
                  v216 = BalanceConfig_TypeInfo;
                }
                TerminalPramsManager__SetAutoResumeByWarId(v216->static_fields->OrdealCallWarId, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1197;
                AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
                return;
              }
            }
            goto LABEL_945;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1197;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1197;
          v427 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1143;
          v428 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(int *)(v427 + 24) >= 2 )
            v429 = System_Int32__Parse(*(System_String_o **)(v427 + 40), 0) + 1;
          else
            v429 = 0;
          v752 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
          SceneJumpInfo___ctor_48464976(v752, (System_String_o *)StringLiteral_1/*""*/, v428, v429, 0);
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1197;
          v727 = 72;
          goto LABEL_1053;
        }
        if ( id != 702 )
        {
          if ( id != 703 )
          {
            if ( id != 800 )
              goto LABEL_945;
            v120 = v23->fields.param;
            value = 0;
            updated = System_String__IsNullOrEmpty(v120, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !*v14 )
                goto LABEL_1197;
              updated = *(_QWORD *)(*v14 + 264);
              if ( !updated )
                goto LABEL_1197;
              updated = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                          (System_Collections_Generic_Dictionary_object__object__o *)updated,
                          (Il2CppObject *)v23->fields.param,
                          &value,
                          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TryGetValue__);
              if ( value )
                goto LABEL_156;
            }
            if ( !*v14 )
              goto LABEL_1197;
            v121 = *(System_Collections_Generic_Dictionary_int__object__o **)(*v14 + 240);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
                        this,
                        this->klass->vtable._11_get_CommandIndex.method);
            if ( !v121 )
              goto LABEL_1197;
            System_Collections_Generic_Dictionary_int__object___TryGetValue(
              v121,
              updated,
              &value,
              (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
            if ( value )
            {
LABEL_156:
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( !updated )
                goto LABEL_1197;
              AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v124 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v122, v123);
              updated = sub_291C204(0, v124);
              if ( !updated )
                goto LABEL_1197;
              if ( !*(_QWORD *)(updated + 472) )
                goto LABEL_166;
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v126 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v125);
              updated = sub_291C204(0, v126);
              if ( !updated )
                goto LABEL_1197;
              v127 = *(_QWORD *)(updated + 472);
              if ( !v127 )
                goto LABEL_1197;
              updated = *(unsigned int *)(v127 + 48);
              if ( !(_DWORD)updated )
              {
LABEL_166:
                if ( !value )
                  goto LABEL_1197;
                updated = LODWORD(value[1].klass);
              }
              if ( (int)updated < 1 )
              {
                if ( !value )
                  goto LABEL_1197;
                v814 = (System_String_o *)value[1].monitor;
                if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7, v125);
                SoundManager__playVoice(v814, 0, 0);
              }
              else
              {
                updated = (__int64)ServantVoiceEntity__getVoiceAssetName_49817936(updated, 0);
                if ( !value )
                  goto LABEL_1197;
                v129 = (System_String_o *)updated;
                v130 = (System_String_o *)value[1].monitor;
                v131 = SeManager_TypeInfo;
                if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v7, v128);
                  v131 = SeManager_TypeInfo;
                }
                DEFAULT_VOLUME = v131->static_fields->DEFAULT_VOLUME;
                if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7, v128);
                SoundManager__playVoice_48511684(v129, v130, DEFAULT_VOLUME, 0, 0, 0);
              }
            }
LABEL_1095:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
              this,
              this->klass->vtable._14_EndAnim.method);
            return;
          }
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( !updated )
            goto LABEL_1197;
          *(_BYTE *)(updated + 195) = 0;
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1197;
          updated = (__int64)System_String__Split_75708724(
                               (System_String_o *)updated,
                               (System_String_o *)StringLiteral_869/*","*/,
                               0,
                               0);
          if ( !updated )
            goto LABEL_1197;
          v422 = *(_QWORD *)(updated + 24);
          v423 = updated;
          if ( !v422 )
            goto LABEL_785;
          if ( !(_DWORD)v422 )
            goto LABEL_1143;
          v424 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( v424 < 1 )
          {
LABEL_785:
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !updated )
              goto LABEL_1197;
            v727 = 91;
            v728 = 0;
            goto LABEL_1054;
          }
          v425 = v424;
          v426 = *(int *)(v423 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v423 + 40), 0) > 0;
          v898 = (System_String_o *)StringLiteral_1/*""*/;
          v752 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
          SceneJumpInfo___ctor_48464976(v752, v898, v425, v426, 0);
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1197;
          v727 = 91;
LABEL_1053:
          v728 = (Il2CppObject *)v752;
LABEL_1054:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v727, 1, v728, 0);
          goto LABEL_1055;
        }
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1197;
        updated = (__int64)System_String__Split_75708724(
                             (System_String_o *)updated,
                             (System_String_o *)StringLiteral_869/*","*/,
                             0,
                             0);
        if ( !updated )
          goto LABEL_1197;
        v419 = *(_QWORD *)(updated + 24);
        v420 = updated;
        if ( !v419 )
          goto LABEL_876;
        if ( !(_DWORD)v419 )
          goto LABEL_1143;
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
          goto LABEL_945;
        if ( *(int *)(v420 + 24) >= 2 )
          v421 = System_Int32__Parse(*(System_String_o **)(v420 + 40), 0);
        else
LABEL_876:
          v421 = 0;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v418);
        TerminalPramsManager__SetAutoResumeForFolder(v421, 0);
        if ( (unsigned int)sub_291C4CC(0) == 3 )
        {
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v755 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v753, v754);
          sub_291C51C(1, 0, v755);
        }
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1197;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
LABEL_1055:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
          this,
          this->klass->vtable._14_EndAnim.method);
        return;
      }
      if ( id > 352 )
      {
        if ( (unsigned int)id > 0x1F5 )
        {
          if ( (unsigned int)id <= 0x208 )
          {
            if ( id == 510 )
            {
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1197;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1197;
              v337 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v338 = 0.5;
                v339 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( *(int *)(v337 + 24) >= 2 )
                {
                  v340 = System_Int32__Parse(*(System_String_o **)(v337 + 40), 0);
                  if ( *(int *)(v337 + 24) >= 3 )
                    v338 = System_Single__Parse(*(System_String_o **)(v337 + 48), 0);
                }
                else
                {
                  v340 = v339;
                  v339 = -1;
                }
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                        (QuestAfterAction_o *)updated,
                                        0,
                                        v340,
                                        this,
                                        (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v430, v431);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0, 0) )
                {
                  if ( v339 >= 1 )
                  {
                    updated = *v14;
                    if ( !*v14 )
                      goto LABEL_1197;
                    v437 = QuestAfterAction__GetMapComponent_object_(
                             (QuestAfterAction_o *)updated,
                             0,
                             v339,
                             this,
                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v435, v436);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v437, 0, 0) )
                    {
                      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                        *(__n128 *)&v434 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v433);
                      updated = sub_291C204(0, v434);
                      if ( !updated )
                        goto LABEL_1197;
                      if ( !v437 )
                        goto LABEL_1197;
                      v438 = *(ScrTerminalMap_o **)(updated + 264);
                      updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v437, 0);
                      if ( !v438 )
                        goto LABEL_1197;
                      ScrTerminalMap__SetPlayerIcon(v438, (UnityEngine_GameObject_o *)updated, 0);
                    }
                  }
                  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v434 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v433);
                  updated = sub_291C204(0, v434);
                  if ( !updated )
                    goto LABEL_1197;
                  if ( !MapComponent_object )
                    goto LABEL_1197;
                  v439 = *(ScrTerminalMap_o **)(updated + 264);
                  v440 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0);
                  v441 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v441, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v439 )
                    goto LABEL_1197;
                  ScrTerminalMap__MovePlayerIcon(v439, v440, v340, v441, v338, 0);
                }
                return;
              }
            }
            else
            {
              if ( id != 520 )
                goto LABEL_945;
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1197;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1197;
              v112 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v115.n128_f32[0] = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
                DEFAULT_FADE_TIME = v115.n128_f32[0];
                if ( v115.n128_f32[0] <= 0.0 )
                {
                  v117 = AvalonSceneManager_TypeInfo;
                  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
                  {
                    v115 = j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v113, v114);
                    v117 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v117->static_fields->DEFAULT_FADE_TIME;
                }
                result[1] = 0;
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  v115 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v113, v114);
                updated = sub_291C204(0, *(long double *)&v115);
                v118 = updated;
                if ( *(int *)(v112 + 24) >= 2 )
                {
                  updated = System_Int32__TryParse(*(System_String_o **)(v112 + 40), &result[1], 0);
                  if ( (updated & 1) != 0 )
                  {
                    if ( !v118 )
                      goto LABEL_1197;
                    v119 = result[1];
                    *(float *)(v118 + 420) = DEFAULT_FADE_TIME;
                    *(_DWORD *)(v118 + 484) = v119;
                  }
                  else
                  {
                    v119 = result[1];
                  }
                  if ( v119 == 3 && *(int *)(v112 + 24) >= 5 )
                  {
                    updated = System_Single__TryParse(*(System_String_o **)(v112 + 48), (float *)result, 0);
                    if ( (updated & 1) != 0 )
                    {
                      if ( (*(_DWORD *)(v112 + 24) & 0xFFFFFFFC) == 0 )
                        goto LABEL_1143;
                      updated = System_Single__TryParse(*(System_String_o **)(v112 + 56), (float *)&v999 + 1, 0);
                      if ( (updated & 1) != 0 )
                      {
                        if ( *(_DWORD *)(v112 + 24) <= 4u )
                          goto LABEL_1143;
                        updated = System_Single__TryParse(*(System_String_o **)(v112 + 64), (float *)&v999, 0);
                        if ( (updated & 1) != 0 )
                        {
                          if ( !v118 )
                            goto LABEL_1197;
                          v742 = HIDWORD(v999);
                          v741 = result[0];
                          v743 = v999;
                          *(_DWORD *)(v118 + 500) = 1065353216;
                          *(_DWORD *)(v118 + 488) = v741;
                          *(_DWORD *)(v118 + 492) = v742;
                          *(_DWORD *)(v118 + 496) = v743;
                        }
                      }
                    }
                  }
                }
                if ( !*v14 )
                  goto LABEL_1197;
                v744 = System_Action_TypeInfo;
                *(_BYTE *)(*v14 + 216) = 1;
                v745 = (System_Action_o *)sub_2213CCC(v744);
                System_Action___ctor(
                  v745,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
                  0);
                if ( !v118 )
                  goto LABEL_1197;
                TerminalSceneComponent__Fadein_MapDisp((TerminalSceneComponent_o *)v118, DEFAULT_FADE_TIME, v745, 0);
                return;
              }
            }
LABEL_1143:
            sub_2213CE4(updated);
          }
          if ( id == 530 )
          {
            v289 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
            System_Object___ctor((Il2CppObject *)v289, 0);
            if ( !v289 )
              goto LABEL_1197;
            *(_QWORD *)(v289 + 32) = v5;
            v296 = v289 + 32;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v289 + 32), v5, v290, v291, v292, v293, v294, v295);
            v297 = System_Int32__Parse(v23->fields.param, 0);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)updated,
                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !updated )
              goto LABEL_1197;
            v298 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                     v297,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            *(_QWORD *)(v289 + 16) = v298;
            v299 = (__int64 *)(v289 + 16);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v289 + 16),
              (int32_t)v298,
              v300,
              v301,
              v302,
              v303,
              v304,
              v305);
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !updated )
              goto LABEL_1197;
            QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v297, 0);
            *(_QWORD *)(v289 + 24) = QuestInfo;
            v307 = v289 + 24;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v289 + 24),
              (int32_t)QuestInfo,
              v308,
              v309,
              v310,
              v311,
              v312,
              v313);
            if ( !*(_QWORD *)(v289 + 24) )
              goto LABEL_1197;
            if ( *(_DWORD *)(*(_QWORD *)(v289 + 24) + 32LL) == 1 )
            {
              updated = *v299;
              if ( !*v299 )
                goto LABEL_1197;
              if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v317 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v315, v316);
                updated = sub_291C360(v297, 0, v317);
                if ( !*(_QWORD *)v307 )
                  goto LABEL_1197;
                updated = sub_255F7E4(*(unsigned int *)(*(_QWORD *)v307 + 44LL), 0, v318);
                if ( !*(_QWORD *)v296 )
                  goto LABEL_1197;
                v319 = *(_QWORD *)(*(_QWORD *)v296 + 24LL);
                if ( !v319 )
                  goto LABEL_1197;
                *(_BYTE *)(v319 + 197) = 1;
                v320 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
                NetworkManager_ResultCallbackFunc___ctor(
                  v320,
                  (Il2CppObject *)v289,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                  0);
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v321, v322);
                Request_object = NetworkManager__getRequest_object_(
                                   v320,
                                   (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                v325 = sub_2909608(0, v324);
                updated = sub_2909718(0);
                if ( !Request_object )
                  goto LABEL_1197;
                BattleSetupScenarioRequest__beginRequest(
                  (BattleSetupScenarioRequest_o *)Request_object,
                  v325,
                  updated + 1,
                  0);
              }
            }
            else
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v314);
            }
            return;
          }
          if ( id != 540 )
            goto LABEL_945;
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1197;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1197;
          v41 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1143;
          v44 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(int *)(v41 + 24) >= 2 )
          {
            if ( System_Int32__TryParse(*(System_String_o **)(v41 + 40), &v998[1], 0) )
              v47 = v998[1];
            else
              v47 = -1;
            if ( *(int *)(v41 + 24) >= 3 )
            {
              if ( System_Int32__TryParse(*(System_String_o **)(v41 + 48), v998, 0) )
                v46 = v998[0];
              else
                v46 = -1;
              if ( *(int *)(v41 + 24) >= 4
                && System_Int32__TryParse(*(System_String_o **)(v41 + 56), &v997, 0)
                && v997 >= 1 )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v45 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42, v43);
                sub_291C3BC(1, 0, v45);
              }
            }
            else
            {
              v46 = -1;
            }
          }
          else
          {
            v46 = -1;
            v47 = -1;
          }
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v45 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42, v43);
          sub_281F544(1, 0, v45);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v748 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v746, v747);
          updated = sub_291C204(0, v748);
          if ( !updated )
            goto LABEL_1197;
          updated = *(_QWORD *)(updated + 264);
          if ( !updated )
            goto LABEL_1197;
          if ( ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v44, v47, v46, 0) )
          {
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
              this,
              this->klass->vtable._14_EndAnim.method);
            updated = *v14;
            if ( !*v14 )
              goto LABEL_1197;
            QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, 0);
            return;
          }
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v751 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v749, v750);
          sub_281F544(0, 0, v751);
LABEL_1205:
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
            this,
            this->klass->vtable._14_EndAnim.method);
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
            this,
            *v14,
            this->klass->vtable._13_UpdateAnim.method);
          return;
        }
        switch ( id )
        {
          case 400:
            v80 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v80, 0);
            if ( !v80 )
              goto LABEL_1197;
            *(_QWORD *)(v80 + 24) = v5;
            v87 = v80 + 24;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v80 + 24), v5, v81, v82, v83, v84, v85, v86);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v88 = *(_QWORD *)(updated + 24);
            v89 = updated;
            if ( v88 )
            {
              if ( !(_DWORD)v88 )
                goto LABEL_1143;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              v90 = updated;
              if ( *(int *)(v89 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v89 + 40), 0);
                v91 = (int)updated < 1;
                if ( *(int *)(v89 + 24) < 3 )
                {
                  v92 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v89 + 48), 0);
                  v92 = (int)updated > 0;
                }
                goto LABEL_950;
              }
            }
            else
            {
              v90 = 0;
            }
            v92 = 0;
            v91 = 1;
LABEL_950:
            if ( !*(_QWORD *)v87 )
              goto LABEL_1197;
            updated = *(_QWORD *)(*(_QWORD *)v87 + 24LL);
            if ( !updated )
              goto LABEL_1197;
            v785 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v90,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v80 + 16) = v785;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v80 + 16),
              (int32_t)v785,
              v786,
              v787,
              v788,
              v789,
              v790,
              v791);
            v794 = *(UnityEngine_Object_o **)(v80 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v792, v793);
            updated = UnityEngine_Object__op_Equality(v794, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v795 = *(MapGimmickComponent_o **)(v80 + 16);
            if ( !v795 )
              goto LABEL_1197;
            v796 = System_Action_TypeInfo;
            v795->fields.isForceNotActive = v92;
            v797 = (System_Action_o *)sub_2213CCC(v796);
            v798 = v797;
            if ( v91 )
            {
              System_Action___ctor(
                v797,
                (Il2CppObject *)v80,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0);
              v611 = v795;
              v612 = 2;
              goto LABEL_972;
            }
            System_Action___ctor(
              v797,
              (Il2CppObject *)v80,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0);
            MapGimmickComponent__SetState(v795, 2, v798, 0);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v906 = *(_QWORD *)(v80 + 24);
            if ( !v906 )
              goto LABEL_1197;
            goto LABEL_1066;
          case 401:
            v507 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v507, 0);
            if ( !v507 )
              goto LABEL_1197;
            *(_QWORD *)(v507 + 24) = v5;
            v514 = v507 + 24;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v507 + 24), v5, v508, v509, v510, v511, v512, v513);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v515 = *(_QWORD *)(updated + 24);
            v516 = updated;
            if ( v515 )
            {
              if ( !(_DWORD)v515 )
                goto LABEL_1143;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              v517 = updated;
              if ( *(int *)(v516 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v516 + 40), 0);
                v518 = (int)updated < 1;
                if ( *(int *)(v516 + 24) < 3 )
                {
                  v519 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v516 + 48), 0);
                  v519 = (int)updated > 0;
                }
                goto LABEL_960;
              }
            }
            else
            {
              v517 = 0;
            }
            v519 = 0;
            v518 = 1;
LABEL_960:
            if ( !*(_QWORD *)v514 )
              goto LABEL_1197;
            updated = *(_QWORD *)(*(_QWORD *)v514 + 24LL);
            if ( !updated )
              goto LABEL_1197;
            v799 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v517,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v507 + 16) = v799;
            v800 = (MapGimmickComponent_o **)(v507 + 16);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v507 + 16),
              (int32_t)v799,
              v801,
              v802,
              v803,
              v804,
              v805,
              v806);
            v809 = *(UnityEngine_Object_o **)(v507 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v807, v808);
            updated = UnityEngine_Object__op_Equality(v809, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v810 = *v800;
            if ( !*v800 )
              goto LABEL_1197;
            v810->fields.isForceLoop = v519;
            v810->fields.isForceNotActive = 0;
            if ( *(int *)(v516 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v516 + 56), 0);
              if ( !*v800 )
                goto LABEL_1197;
              MapGimmickComponent__SetUseAnimNum(*v800, updated, 1, 0);
            }
            v811 = *v800;
            v812 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            v798 = v812;
            if ( v518 )
            {
              System_Action___ctor(
                v812,
                (Il2CppObject *)v507,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0);
              if ( !v811 )
                goto LABEL_1197;
              v611 = v811;
              v612 = 3;
LABEL_972:
              v813 = v798;
LABEL_1061:
              MapGimmickComponent__SetState(v611, v612, v813, 0);
              return;
            }
            System_Action___ctor(
              v812,
              (Il2CppObject *)v507,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0);
            if ( !v811 )
              goto LABEL_1197;
            MapGimmickComponent__SetState(v811, 3, v798, 0);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v906 = *(_QWORD *)v514;
            if ( !*(_QWORD *)v514 )
              goto LABEL_1197;
LABEL_1066:
            v34 = *(_QWORD *)(v906 + 24);
            v36 = this->klass->vtable._13_UpdateAnim.method;
            methodPtr = this->klass->vtable._13_UpdateAnim.methodPtr;
            goto LABEL_947;
          case 402:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v493 = *(_QWORD *)(updated + 24);
            v494 = updated;
            if ( v493 )
            {
              if ( !(_DWORD)v493 )
                goto LABEL_1143;
              v495 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v494 + 24) >= 2 )
              {
                v496 = System_Int32__Parse(*(System_String_o **)(v494 + 40), 0) > 0;
LABEL_929:
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                v779 = QuestAfterAction__GetMapComponent_object_(
                         (QuestAfterAction_o *)updated,
                         2,
                         v495,
                         this,
                         (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v777, v778);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v779, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v779 )
                  goto LABEL_1197;
                BYTE1(v779[7].klass) = v496;
                MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v779, 0, 0);
                v780 = v779[8].monitor;
                if ( !v780 )
                  goto LABEL_1197;
                v780[4] = 0;
                goto LABEL_945;
              }
            }
            else
            {
              v495 = 0;
            }
            v496 = 0;
            goto LABEL_929;
          case 403:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v497 = *(_QWORD *)(updated + 24);
            v498 = updated;
            if ( v497 )
            {
              if ( !(_DWORD)v497 )
                goto LABEL_1143;
              v499 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v498 + 24) >= 2 )
              {
                v500 = System_Int32__Parse(*(System_String_o **)(v498 + 40), 0) > 0;
LABEL_938:
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                v783 = QuestAfterAction__GetMapComponent_object_(
                         (QuestAfterAction_o *)updated,
                         2,
                         v499,
                         this,
                         (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v781, v782);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v783, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v783 )
                  goto LABEL_1197;
                LOBYTE(v783[7].klass) = v500;
                BYTE1(v783[7].klass) = 0;
                MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v783, 1, 0);
                v784 = v783[8].monitor;
                if ( !v784 )
                  goto LABEL_1197;
                v784[4] = 1;
                goto LABEL_945;
              }
            }
            else
            {
              v499 = 0;
            }
            v500 = 0;
            goto LABEL_938;
          case 404:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v454 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_1055;
            v455 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
            if ( !*(_DWORD *)(v454 + 24) )
              goto LABEL_1143;
            v456 = (QuestAfterAction_o *)*v14;
            v457 = v455;
            updated = System_Int32__Parse(*(System_String_o **)(v454 + 32), 0);
            if ( !v456 )
              goto LABEL_1197;
            v460 = QuestAfterAction__GetMapComponent_object_(
                     v456,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v458, v459);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v460, 0, 0) )
              return;
            LODWORD(v463) = 981668463;
            v464 = v457 * 0.001;
            if ( *(int *)(v454 + 24) < 6 || System_Int32__Parse(*(System_String_o **)(v454 + 72), 0) < 1 )
            {
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v463 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v461, v462);
              updated = sub_291C204(0, v463);
              if ( !updated )
                goto LABEL_1197;
              if ( (*(_DWORD *)(v454 + 24) & 0xFFFFFFFE) != 0 )
              {
                v916 = *(ScrTerminalMap_o **)(updated + 264);
                v917 = System_Single__Parse(*(System_String_o **)(v454 + 40), 0);
                if ( *(_DWORD *)(v454 + 24) > 2u )
                {
                  v918 = v917;
                  v919 = System_Single__Parse(*(System_String_o **)(v454 + 48), 0);
                  if ( !v916 )
                    goto LABEL_1197;
                  v1017 = ScrTerminalMap__LocalPosFromCoord(v916, v918, v919, 0.0, 0.0, 0);
                  if ( *(_DWORD *)(v454 + 24) > 4u )
                  {
                    v920 = System_Int32__Parse(*(System_String_o **)(v454 + 64), 0);
                    v921 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v921,
                      (Il2CppObject *)this,
                      (intptr_t)this->klass->vtable._14_EndAnim.method,
                      0);
                    if ( !v460 )
                      goto LABEL_1197;
                    v1032 = v1017;
                    v900 = (MapGimmickComponent_o *)v460;
                    v903 = v464;
                    v904 = v920;
                    v905 = v921;
LABEL_1119:
                    MapGimmickComponent__SetMoveAnim(v900, v1032, v903, v904, v905, 0);
                    return;
                  }
                }
              }
              goto LABEL_1143;
            }
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v463 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v461, v462);
            updated = sub_291C204(0, v463);
            if ( !updated )
              goto LABEL_1197;
            if ( (*(_DWORD *)(v454 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v465 = *(ScrTerminalMap_o **)(updated + 264);
            v466 = System_Single__Parse(*(System_String_o **)(v454 + 40), 0);
            if ( *(_DWORD *)(v454 + 24) <= 2u )
              goto LABEL_1143;
            v467 = v466;
            v468 = System_Single__Parse(*(System_String_o **)(v454 + 48), 0);
            if ( !v465 )
              goto LABEL_1197;
            v1007 = ScrTerminalMap__LocalPosFromCoord(v465, v467, v468, 0.0, 0.0, 0);
            if ( *(_DWORD *)(v454 + 24) <= 4u )
              goto LABEL_1143;
            updated = System_Int32__Parse(*(System_String_o **)(v454 + 64), 0);
            if ( !v460 )
              goto LABEL_1197;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v460, v1007, v464, updated, 0, 0);
            goto LABEL_1055;
          case 405:
            v520 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v520, 0);
            if ( !v520 )
              goto LABEL_1197;
            *(_QWORD *)(v520 + 24) = v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v520 + 24), v5, v521, v522, v523, v524, v525, v526);
            v527 = *(_QWORD *)(v520 + 24);
            if ( !v527 )
              goto LABEL_1197;
            v528 = *(QuestAfterAction_o **)(v527 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v528 )
              goto LABEL_1197;
            v529 = QuestAfterAction__GetMapComponent_object_(
                     v528,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v520 + 16) = v529;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v520 + 16),
              (int32_t)v529,
              v530,
              v531,
              v532,
              v533,
              v534,
              v535);
            v538 = *(UnityEngine_Object_o **)(v520 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v536, v537);
            if ( UnityEngine_Object__op_Equality(v538, 0, 0) )
              return;
            v539 = *(MapGimmickComponent_o **)(v520 + 16);
            v540 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v540,
              (Il2CppObject *)v520,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0);
            if ( !v539 )
              goto LABEL_1197;
            MapGimmickComponent__SetState(v539, 3, v540, 0);
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v543 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v541, v542);
            updated = sub_291C204(0, v543);
            v545 = (TerminalSceneComponent_o *)updated;
            if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v544);
            if ( !v545 )
              goto LABEL_1197;
            TerminalSceneComponent__Fadein_MapDisp(
              v545,
              AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME,
              0,
              0);
            return;
          case 406:
            v546 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v546, 0);
            if ( !v546 )
              goto LABEL_1197;
            *(_QWORD *)(v546 + 32) = v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v546 + 32), v5, v547, v548, v549, v550, v551, v552);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            v553 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            *(_QWORD *)(v546 + 24) = v553;
            v554 = (__int64 *)(v546 + 24);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v546 + 24),
              (int32_t)v553,
              v555,
              v556,
              v557,
              v558,
              v559,
              v560);
            v561 = *(_QWORD *)(v546 + 32);
            if ( !v561 )
              goto LABEL_1197;
            v562 = *v554;
            if ( !*v554 )
              goto LABEL_1197;
            if ( !*(_DWORD *)(v562 + 24) )
              goto LABEL_1143;
            v563 = *(QuestAfterAction_o **)(v561 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v562 + 32), 0);
            if ( !v563 )
              goto LABEL_1197;
            v564 = QuestAfterAction__GetMapComponent_object_(
                     v563,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v546 + 16) = v564;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v546 + 16),
              (int32_t)v564,
              v565,
              v566,
              v567,
              v568,
              v569,
              v570);
            v573 = *(UnityEngine_Object_o **)(v546 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v571, v572);
            if ( UnityEngine_Object__op_Equality(v573, 0, 0) )
              return;
            v574 = *(MapGimmickComponent_o **)(v546 + 16);
            v575 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            v576 = v575;
            v577 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            goto LABEL_655;
          case 407:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v501 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1143;
            v502 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v502 )
              goto LABEL_1197;
            v505 = QuestAfterAction__GetMapComponent_object_(
                     v502,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v503, v504);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v505, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v505 )
              goto LABEL_1197;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v505, 0);
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( (*(_DWORD *)(v501 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v506 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v501 + 40), &color, 0);
            if ( !v506 )
              goto LABEL_1197;
            UIWidget__set_color(v506, color, 0);
            goto LABEL_1095;
          case 408:
            v546 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v546, 0);
            if ( !v546 )
              goto LABEL_1197;
            *(_QWORD *)(v546 + 24) = v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v546 + 24), v5, v590, v591, v592, v593, v594, v595);
            v596 = *(_QWORD *)(v546 + 24);
            if ( !v596 )
              goto LABEL_1197;
            v597 = *(QuestAfterAction_o **)(v596 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v597 )
              goto LABEL_1197;
            v598 = QuestAfterAction__GetMapComponent_object_(
                     v597,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v546 + 16) = v598;
            v599 = v546 + 16;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v546 + 16),
              (int32_t)v598,
              v600,
              v601,
              v602,
              v603,
              v604,
              v605);
            v608 = *(UnityEngine_Object_o **)(v546 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v606, v607);
            if ( UnityEngine_Object__op_Equality(v608, 0, 0) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v599 || !updated )
              goto LABEL_1197;
            v609 = QuestTree__CheckMapGimmickCond_43439552(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v599 + 136LL),
                     0);
            v574 = *(MapGimmickComponent_o **)v599;
            v610 = v609;
            v575 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            v576 = v575;
            if ( v610 )
            {
              v577 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_655:
              System_Action___ctor(v575, (Il2CppObject *)v546, *v577, 0);
              if ( !v574 )
                goto LABEL_1197;
              v611 = v574;
              v612 = 3;
            }
            else
            {
              System_Action___ctor(
                v575,
                (Il2CppObject *)v546,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0);
              if ( !v574 )
                goto LABEL_1197;
              v611 = v574;
              v612 = 2;
            }
            v813 = v576;
            goto LABEL_1061;
          case 409:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v476 = *(_QWORD *)(updated + 24);
            v477 = updated;
            if ( v476 )
            {
              if ( !(_DWORD)v476 )
                goto LABEL_1143;
              v478 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v477 + 24) >= 2 )
              {
                v479 = System_Int32__Parse(*(System_String_o **)(v477 + 40), 0) > 0;
LABEL_920:
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                v773 = QuestAfterAction__GetMapComponent_object_(
                         (QuestAfterAction_o *)updated,
                         2,
                         v478,
                         this,
                         (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v771, v772);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v773, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v773 )
                  goto LABEL_1197;
                LOBYTE(v773[7].klass) = v479;
                BYTE1(v773[7].klass) = 0;
                MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v773, 1, 0);
                v774 = v773[8].monitor;
                if ( !v774 )
                  goto LABEL_1197;
                v774[4] = 1;
                v775 = this->klass;
                this->fields.IsAnimDoing = 0;
                v776 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v775->vtable._11_get_CommandIndex.methodPtr)(
                         this,
                         v775->vtable._11_get_CommandIndex.method);
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
                  this,
                  (unsigned int)(v776 + 1),
                  this->klass->vtable._12_set_CommandIndex.method);
                goto LABEL_946;
              }
            }
            else
            {
              v478 = 0;
            }
            v479 = 0;
            goto LABEL_920;
          case 410:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v442 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1055;
            v578 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v578 )
              goto LABEL_1197;
            v446 = QuestAfterAction__GetMapComponent_object_(
                     v578,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v579, v580);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v446, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( (*(_DWORD *)(v442 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v581 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v442 + 40), 0);
            if ( !v581 )
              goto LABEL_1197;
            v473 = updated;
            v474 = v581;
            v475 = 0;
            goto LABEL_627;
          case 411:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v442 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1055;
            v443 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v443 )
              goto LABEL_1197;
            v446 = QuestAfterAction__GetMapComponent_object_(
                     v443,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v444, v445);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v446, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( (*(_DWORD *)(v442 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v447 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v442 + 40), 0);
            if ( !v447 )
              goto LABEL_1197;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v447, 2, updated, this, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v448, v449);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
            if ( *(_DWORD *)(v442 + 24) <= 2u )
              goto LABEL_1143;
            x = LocalPosition.fields.x;
            y = LocalPosition.fields.y;
            z = LocalPosition.fields.z;
            goto LABEL_637;
          case 412:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v442 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1055;
            v469 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v469 )
              goto LABEL_1197;
            v446 = QuestAfterAction__GetMapComponent_object_(
                     v469,
                     2,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v470, v471);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v446, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( (*(_DWORD *)(v442 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v472 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v442 + 40), 0);
            if ( !v472 )
              goto LABEL_1197;
            v473 = updated;
            v474 = v472;
            v475 = 1;
LABEL_627:
            v584 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v474, v475, v473, this, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v582, v583);
            if ( UnityEngine_Object__op_Equality(v584, 0, 0) )
              return;
            v1008 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v584, 0);
            *(float *)&v981 = v1008.fields.x;
            x = v1008.fields.x;
            y = v1008.fields.y;
            z = v1008.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_636;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v981 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v585, v586);
            updated = sub_291C204(0, v981);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 264);
            if ( !updated )
              goto LABEL_1197;
            v1009 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1008, 0);
            x = v1009.fields.x;
            y = v1009.fields.y;
            z = v1009.fields.z;
LABEL_636:
            if ( *(_DWORD *)(v442 + 24) <= 2u )
              goto LABEL_1143;
LABEL_637:
            v587 = System_Single__Parse(*(System_String_o **)(v442 + 48), 0) * 0.001;
            if ( v587 >= 0.0 )
              v588 = v587;
            else
              v588 = 0.5;
            if ( (*(_DWORD *)(v442 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_1143;
            v589 = System_Int32__Parse(*(System_String_o **)(v442 + 56), 0);
            if ( *(int *)(v442 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v442 + 64), 0);
              if ( (int)updated >= 1 )
              {
                if ( !v446 )
                  goto LABEL_1197;
                v1029.fields.x = x;
                v1029.fields.y = y;
                v1029.fields.z = z;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v446, v1029, v588, v589, 0, 0);
                goto LABEL_945;
              }
            }
            v899 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v899, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v446 )
              goto LABEL_1197;
            v900 = (MapGimmickComponent_o *)v446;
            v1032.fields.x = x;
            v1032.fields.y = y;
            v1032.fields.z = z;
            v903 = v588;
            v904 = v589;
            v905 = v899;
            goto LABEL_1119;
          default:
            if ( id == 500 )
            {
              v482 = System_Int32__Parse(v23->fields.param, 0);
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v483 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v480, v481);
              sub_291C2A4(v482, 0, v483);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v484, v485);
              updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !updated )
                goto LABEL_1197;
              if ( DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                     &entity,
                     v482,
                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              {
                updated = (__int64)entity;
                if ( !entity )
                  goto LABEL_1197;
                v486 = (QuestAfterAction_o *)*v14;
                updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
                if ( !v486 )
                  goto LABEL_1197;
                v489 = QuestAfterAction__GetMapComponent_object_(
                         v486,
                         0,
                         updated,
                         this,
                         (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v487, v488);
                updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v489, 0, 0);
                if ( (updated & 1) != 0 )
                {
                  if ( !v489 )
                    goto LABEL_1197;
                  SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v489, 0, 0);
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v492 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v490, v491);
                  sub_291C300(1, 0, v492);
                }
              }
              goto LABEL_1095;
            }
            if ( id != 501 )
              goto LABEL_945;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v31);
            updated = sub_291C204(0, *(long double *)&inited);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 256);
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
            if ( !updated )
              goto LABEL_1197;
            v241 = (PlayMakerFSM_o *)updated;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
            if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3430/*"CAPTER WAIT"*/, 0) )
            {
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v245 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v243, v244);
              updated = sub_291C204(0, v245);
              if ( !updated )
                goto LABEL_1197;
              v247 = *(_QWORD *)(updated + 256);
              if ( !v247 )
                goto LABEL_1197;
              v248 = *(QuestBoardListViewManager_o **)(v247 + 328);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              if ( !*(&QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, v7, v246);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v249 = *(struct QuestAfterAction_StateMain___c_StaticFields **)(updated + 184);
              _9__16_22 = v249->__9__16_22;
              if ( !_9__16_22 )
              {
                if ( !*(_DWORD *)(updated + 228) )
                {
                  j_il2cpp_runtime_class_init_0(updated, v7, v246);
                  v249 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v251 = (Il2CppObject *)v249->__9;
                _9__16_22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                System_Action___ctor(_9__16_22, v251, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
                v252 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v252->__9__16_22 = _9__16_22;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v252->__9__16_22,
                  (int32_t)_9__16_22,
                  v253,
                  v254,
                  v255,
                  v256,
                  v257,
                  v258);
              }
              if ( !v248 )
                goto LABEL_1197;
              QuestBoardListViewManager__SetMode(v248, 4, _9__16_22, 0, 0, 0, 0);
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v261 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v259, v260);
              updated = sub_291C204(0, v261);
              if ( !updated )
                goto LABEL_1197;
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
              PlayMakerFSM__SendEvent(v241, (System_String_o *)StringLiteral_20794/*"gevINFOBAR_BACK"*/, 0);
            }
            goto LABEL_1055;
        }
      }
      if ( id > 208 )
      {
        if ( id > 304 )
        {
          if ( id > 306 )
          {
            switch ( id )
            {
              case 307:
LABEL_309:
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1197;
                v265 = *(_QWORD *)(updated + 24);
                v266 = updated;
                if ( (int)v265 <= 0 )
                  goto LABEL_1055;
                if ( (unsigned int)v265 >= 3 )
                {
                  v634 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
                  v265 = *(_QWORD *)(v266 + 24);
                  v268 = v265;
                  v267 = v634 * 0.001;
                }
                else
                {
                  v267 = 0.5;
                  v268 = *(_QWORD *)(updated + 24);
                }
                sec = v267;
                if ( (int)v265 >= 2 )
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v266 + 40), 0);
                  v268 = *(_DWORD *)(v266 + 24);
                  v276 = updated;
                }
                else
                {
                  v276 = 15;
                }
                if ( !v268 )
                  goto LABEL_1143;
                v635 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(*(System_String_o **)(v266 + 32), 0);
                if ( !v635 )
                  goto LABEL_1197;
                v638 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v635, 2, updated, this, 0);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v636, v637);
                if ( UnityEngine_Object__op_Equality(v638, 0, 0) )
                  return;
                v1014 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v638, 0);
                *(float *)&v987 = v1014.fields.x;
                v640 = v1014.fields.x;
                v641 = v1014.fields.y;
                v642 = v1014.fields.z;
                if ( this->fields.IsMapModel )
                {
                  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v987 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v639);
                  updated = sub_291C204(0, v987);
                  if ( !updated )
                    goto LABEL_1197;
                  updated = *(_QWORD *)(updated + 264);
                  if ( !updated )
                    goto LABEL_1197;
                  v1015 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1014, 0);
                  v640 = v1015.fields.x;
                  v641 = v1015.fields.y;
                  v642 = v1015.fields.z;
                }
                v643 = *(_DWORD *)(v266 + 24);
                if ( v23->fields.id == 307 )
                {
                  if ( v643 >= 4 )
                  {
                    if ( v643 != 4 )
                    {
                      updated = System_Int32__Parse(*(System_String_o **)(v266 + 64), 0);
                      if ( (int)updated >= 1 )
                      {
                        if ( !*v14 )
                          goto LABEL_1197;
                        v1030.fields.x = v640;
                        v1030.fields.y = v641;
                        v1030.fields.z = v642;
                        v644 = *(MapCamera_o **)(*v14 + 152);
                        *(_QWORD *)&v1019.fields.hasValue = &v992;
                        *(_OWORD *)&v992.fields._list = 0u;
                        *(_QWORD *)&v1019.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        System_Nullable_Vector3____ctor(v1019, v1030, v639);
                        if ( (*(_DWORD *)(v266 + 24) & 0xFFFFFFFC) == 0 )
                          goto LABEL_1143;
                        v645 = System_Single__Parse(*(System_String_o **)(v266 + 56), 0);
                        size = 0;
                        System_Nullable_float____ctor(
                          (System_Nullable_float__o)&size,
                          v645,
                          (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
                        if ( !v644 )
                          goto LABEL_1197;
                        goto LABEL_1093;
                      }
                    }
                    if ( !*v14 )
                      goto LABEL_1197;
                    v1034.fields.x = v640;
                    v1034.fields.y = v641;
                    v1034.fields.z = v642;
                    v922 = *(MapCamera_o **)(*v14 + 152);
                    *(_QWORD *)&v1021.fields.hasValue = &v992;
                    *(_OWORD *)&v992.fields._list = 0u;
                    *(_QWORD *)&v1021.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                    System_Nullable_Vector3____ctor(v1021, v1034, v639);
                    if ( (*(_DWORD *)(v266 + 24) & 0xFFFFFFFC) == 0 )
                      goto LABEL_1143;
                    v923 = System_Single__Parse(*(System_String_o **)(v266 + 56), 0);
                    size = 0;
                    System_Nullable_float____ctor(
                      (System_Nullable_float__o)&size,
                      v923,
                      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
                    v924 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v924,
                      (Il2CppObject *)this,
                      (intptr_t)this->klass->vtable._14_EndAnim.method,
                      0);
                    if ( !v922 )
                      goto LABEL_1197;
LABEL_1132:
                    v1026 = *(System_Nullable_Vector3__o *)&v992.fields._list;
                    v928 = v922;
                    v929 = size;
                    v930 = sec;
LABEL_1137:
                    v933 = v276;
                    goto LABEL_1138;
                  }
                  goto LABEL_896;
                }
                if ( v643 < 4 || (updated = System_Int32__Parse(*(System_String_o **)(v266 + 56), 0), (int)updated < 1) )
                {
LABEL_896:
                  if ( !*v14 )
                    goto LABEL_1197;
                  v764 = *(MapCamera_o **)(*v14 + 152);
                  v233 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v233, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v764 )
                    goto LABEL_1197;
                  v234 = v764;
                  v1028.fields.x = v640;
                  v1028.fields.y = v641;
                  v1028.fields.z = v642;
LABEL_1106:
                  v235 = sec;
LABEL_1107:
                  v236 = v276;
LABEL_1108:
                  v912 = v233;
LABEL_1109:
                  MapCamera__StartAutoMove(v234, v1028, v235, v236, v912, 0);
                  return;
                }
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 152);
                if ( !updated )
                  goto LABEL_1197;
                v1031.fields.x = v640;
                v1031.fields.y = v641;
                v1031.fields.z = v642;
LABEL_1101:
                v816 = sec;
                goto LABEL_1102;
              case 308:
LABEL_314:
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1197;
                v271 = updated;
                if ( *(int *)(updated + 24) < 4 )
                  goto LABEL_1055;
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v270 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v269);
                updated = sub_291C254(0, v270);
                if ( (updated & 1) != 0 )
                  goto LABEL_1055;
                if ( *(_DWORD *)(v271 + 24) <= 2u )
                  goto LABEL_1143;
                v272 = System_Single__Parse(*(System_String_o **)(v271 + 48), 0) * 0.001;
                v273 = v272 >= 0.0 ? v272 : 0.5;
                if ( (*(_DWORD *)(v271 + 24) & 0xFFFFFFFC) == 0 )
                  goto LABEL_1143;
                v276 = System_Int32__Parse(*(System_String_o **)(v271 + 56), 0);
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v277 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v274, v275);
                updated = sub_291C204(0, v277);
                if ( !updated )
                  goto LABEL_1197;
                if ( !*(_DWORD *)(v271 + 24) )
                  goto LABEL_1143;
                v278 = *(ScrTerminalMap_o **)(updated + 264);
                v279 = System_Single__Parse(*(System_String_o **)(v271 + 32), 0);
                if ( (*(_DWORD *)(v271 + 24) & 0xFFFFFFFE) == 0 )
                  goto LABEL_1143;
                v280 = v279;
                v281 = System_Single__Parse(*(System_String_o **)(v271 + 40), 0);
                if ( !v278 )
                  goto LABEL_1197;
                v1005 = ScrTerminalMap__LocalPosFromCoord(v278, v280, v281, 0.0, 0.0, 0);
                v283 = *(_DWORD *)(v271 + 24);
                if ( v23->fields.id == 308 )
                {
                  if ( v283 >= 5 )
                  {
                    if ( v283 != 5 )
                    {
                      updated = System_Int32__Parse(*(System_String_o **)(v271 + 72), 0);
                      if ( (int)updated >= 1 )
                      {
                        if ( !*v14 )
                          goto LABEL_1197;
                        v284 = *(MapCamera_o **)(*v14 + 152);
                        *(_QWORD *)&v1018.fields.hasValue = &v992;
                        *(_OWORD *)&v992.fields._list = 0u;
                        *(_QWORD *)&v1018.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        System_Nullable_Vector3____ctor(v1018, v1005, v282);
                        if ( *(_DWORD *)(v271 + 24) <= 4u )
                          goto LABEL_1143;
                        v285 = System_Single__Parse(*(System_String_o **)(v271 + 64), 0);
                        size = 0;
                        System_Nullable_float____ctor(
                          (System_Nullable_float__o)&size,
                          v285,
                          (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
                        if ( !v284 )
                          goto LABEL_1197;
                        v286 = v273;
                        v1025 = *(System_Nullable_Vector3__o *)&v992.fields._list;
                        v287 = size;
                        v288 = v284;
                        goto LABEL_1094;
                      }
                    }
                    if ( !*v14 )
                      goto LABEL_1197;
                    v931 = *(MapCamera_o **)(*v14 + 152);
                    *(_QWORD *)&v1023.fields.hasValue = &v992;
                    *(_OWORD *)&v992.fields._list = 0u;
                    *(_QWORD *)&v1023.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                    System_Nullable_Vector3____ctor(v1023, v1005, v282);
                    if ( *(_DWORD *)(v271 + 24) <= 4u )
                      goto LABEL_1143;
                    v932 = System_Single__Parse(*(System_String_o **)(v271 + 64), 0);
                    size = 0;
                    System_Nullable_float____ctor(
                      (System_Nullable_float__o)&size,
                      v932,
                      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
                    v924 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v924,
                      (Il2CppObject *)this,
                      (intptr_t)this->klass->vtable._14_EndAnim.method,
                      0);
                    if ( !v931 )
                      goto LABEL_1197;
                    v930 = v273;
                    v1026 = *(System_Nullable_Vector3__o *)&v992.fields._list;
                    v929 = size;
                    v928 = v931;
                    goto LABEL_1137;
                  }
                  goto LABEL_986;
                }
                if ( v283 < 5 || (updated = System_Int32__Parse(*(System_String_o **)(v271 + 64), 0), (int)updated < 1) )
                {
LABEL_986:
                  if ( !*v14 )
                    goto LABEL_1197;
                  v817 = *(MapCamera_o **)(*v14 + 152);
                  v233 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v233, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v817 )
                    goto LABEL_1197;
                  v234 = v817;
                  v1028 = v1005;
                  v235 = v273;
                  goto LABEL_1107;
                }
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 152);
                if ( !updated )
                  goto LABEL_1197;
                v1031 = v1005;
                v816 = v273;
LABEL_1102:
                MapCamera__StartAutoMove((MapCamera_o *)updated, v1031, v816, v276, 0, 0);
                goto LABEL_1055;
              case 350:
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1197;
                v133 = updated;
                if ( *(int *)(updated + 24) > 0 )
                {
                  v134 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                  if ( v134 >= 1 )
                  {
                    v138 = 0.5;
                    v139 = v134;
                    if ( *(int *)(v133 + 24) > 1 )
                    {
                      v140 = System_Int32__Parse(*(System_String_o **)(v133 + 40), 0);
                      if ( *(int *)(v133 + 24) >= 3 )
                      {
                        *(float *)&v137 = System_Single__Parse(*(System_String_o **)(v133 + 48), 0);
                        v138 = *(float *)&v137 * 0.001;
                      }
                    }
                    else
                    {
                      v140 = 15;
                    }
                    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                      *(__n128 *)&v137 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v135, v136);
                    updated = sub_291C204(0, v137);
                    if ( !updated )
                      goto LABEL_1197;
                    v896 = *(ScrTerminalMap_o **)(updated + 264);
                    v897 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v897,
                      (Il2CppObject *)v5,
                      Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                      0);
                    if ( !v896 )
                      goto LABEL_1197;
                    ScrTerminalMap__RequestMapMove_43971820(v896, v139, v138, v140, v897, 0);
                    return;
                  }
                }
                goto LABEL_1055;
            }
LABEL_258:
            if ( (unsigned int)id < 0x15F )
              goto LABEL_945;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v217 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_1055;
            v218 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
            if ( (*(_DWORD *)(v217 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v219 = v218;
            v220 = System_Single__Parse(*(System_String_o **)(v217 + 40), 0);
            if ( *(_DWORD *)(v217 + 24) <= 2u )
              goto LABEL_1143;
            v221 = v220;
            v222 = System_Single__Parse(*(System_String_o **)(v217 + 48), 0);
            if ( (*(_DWORD *)(v217 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_1143;
            v223 = v222;
            v224 = System_Single__Parse(*(System_String_o **)(v217 + 56), 0);
            if ( *(_DWORD *)(v217 + 24) <= 4u )
              goto LABEL_1143;
            v225 = v224;
            v228 = System_Int32__Parse(*(System_String_o **)(v217 + 64), 0);
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v229 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v226, v227);
            updated = sub_291C204(0, v229);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 264);
            if ( !updated )
              goto LABEL_1197;
            v1027.fields.y = v221;
            v1027.fields.z = v223;
            v230 = v225 * 0.001;
            v1027.fields.x = v219;
            v1004 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1027, 0);
            if ( v23->fields.id == 352 && *(int *)(v217 + 24) >= 6 )
            {
              if ( !*v14 )
                goto LABEL_1197;
              v934 = *(MapCamera_o **)(*v14 + 152);
              *(_QWORD *)&v1024.fields.hasValue = &v992;
              *(_OWORD *)&v992.fields._list = 0u;
              *(_QWORD *)&v1024.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              System_Nullable_Vector3____ctor(v1024, v1004, v231);
              if ( *(_DWORD *)(v217 + 24) <= 5u )
                goto LABEL_1143;
              v935 = System_Single__Parse(*(System_String_o **)(v217 + 72), 0);
              size = 0;
              System_Nullable_float____ctor(
                (System_Nullable_float__o)&size,
                v935,
                (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
              v924 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v924,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
                0);
              if ( !v934 )
                goto LABEL_1197;
              v1026 = *(System_Nullable_Vector3__o *)&v992.fields._list;
              v928 = v934;
              v929 = size;
              v930 = v230;
              v933 = v228;
LABEL_1138:
              MapCamera__StartAutoWork(v928, v930, v1026, v929, v933, v924, 0);
              return;
            }
            if ( !*v14 )
              goto LABEL_1197;
            v232 = *(MapCamera_o **)(*v14 + 152);
            v233 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v233,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
              0);
            if ( !v232 )
              goto LABEL_1197;
            v234 = v232;
            v1028 = v1004;
            v235 = v230;
            v236 = v228;
            goto LABEL_1108;
          }
          if ( id != 305 )
          {
LABEL_276:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v237 = *(_QWORD *)(updated + 24);
            v238 = updated;
            if ( (int)v237 <= 0 )
              goto LABEL_1055;
            if ( (unsigned int)v237 >= 3 )
            {
              v613 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
              v237 = *(_QWORD *)(v238 + 24);
              v240 = v237;
              v239 = v613 * 0.001;
            }
            else
            {
              v239 = 0.5;
              v240 = *(_QWORD *)(updated + 24);
            }
            sec = v239;
            if ( (int)v237 >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v238 + 40), 0);
              v240 = *(_DWORD *)(v238 + 24);
              v276 = updated;
            }
            else
            {
              v276 = 15;
            }
            if ( !v240 )
              goto LABEL_1143;
            v615 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v238 + 32), 0);
            if ( !v615 )
              goto LABEL_1197;
            v618 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v615, 1, updated, this, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v616, v617);
            updated = UnityEngine_Object__op_Equality(v618, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( this->fields.IsMapModel )
            {
              if ( !v618 )
                goto LABEL_1197;
              updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v618,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
              if ( !updated )
                goto LABEL_1197;
              Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
              *(float *)&v982 = Position.fields.x;
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v982 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v619, v620);
              updated = sub_291C204(0, v982);
              if ( !updated )
                goto LABEL_1197;
              updated = *(_QWORD *)(updated + 264);
              if ( !updated )
                goto LABEL_1197;
              v1011 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, Position, 0);
              v983 = v1011.fields.x;
              v984 = v1011.fields.y;
              v985 = v1011.fields.z;
            }
            else
            {
              v1016 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v618, 0);
              v983 = v1016.fields.x;
              v984 = v1016.fields.y;
              v985 = v1016.fields.z;
            }
            v818 = v983;
            v819 = v984;
            v820 = v985;
            if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v621, v622);
            updated = FSUtility__IsUnderVista(0);
            if ( (updated & 1) == 0 )
            {
              if ( !*(_DWORD *)(v238 + 24) )
                goto LABEL_1143;
              v821 = *(System_String_o **)(v238 + 32);
              updated = System_String__op_Equality(v821, (System_String_o *)StringLiteral_1383/*"10703"*/, 0);
              if ( (updated & 1) != 0 )
              {
                v819 = v819 + -95.0;
              }
              else
              {
                updated = System_String__op_Equality(v821, (System_String_o *)StringLiteral_1458/*"30102"*/, 0);
                if ( (updated & 1) != 0 )
                  v819 = v819 + 45.0;
              }
            }
            v913 = *(_DWORD *)(v238 + 24);
            if ( v23->fields.id == 306 )
            {
              if ( v913 >= 4 )
              {
                if ( v913 != 4 )
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v238 + 64), 0);
                  if ( (int)updated >= 1 )
                  {
                    if ( !*v14 )
                      goto LABEL_1197;
                    *(_QWORD *)&v1020.fields.hasValue = &v992;
                    v1033.fields.x = v818;
                    v644 = *(MapCamera_o **)(*v14 + 152);
                    *(_OWORD *)&v992.fields._list = 0u;
                    v1033.fields.y = v819;
                    v1033.fields.z = v820;
                    goto LABEL_1091;
                  }
                }
                if ( !*v14 )
                  goto LABEL_1197;
                *(_QWORD *)&v1022.fields.hasValue = &v992;
                v1035.fields.x = v818;
                v922 = *(MapCamera_o **)(*v14 + 152);
                *(_OWORD *)&v992.fields._list = 0u;
                v1035.fields.y = v819;
                v1035.fields.z = v820;
                goto LABEL_1130;
              }
            }
            else if ( v913 >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v238 + 56), 0);
              if ( (int)updated >= 1 )
              {
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 152);
                if ( !updated )
                  goto LABEL_1197;
                v1031.fields.x = v818;
                v1031.fields.y = v819;
                v1031.fields.z = v820;
                goto LABEL_1101;
              }
            }
            if ( !*v14 )
              goto LABEL_1197;
            v915 = *(MapCamera_o **)(*v14 + 152);
            v233 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v233, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v915 )
              goto LABEL_1197;
            v1028.fields.x = v818;
            v1028.fields.y = v819;
            v234 = v915;
            v1028.fields.z = v820;
            goto LABEL_1106;
          }
        }
        else
        {
          if ( id > 301 )
          {
            if ( id != 302 )
            {
              if ( id != 303 )
              {
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1197;
                v48 = *(_DWORD *)(updated + 24);
                v49 = updated;
                if ( v48 > 1 )
                {
                  v50 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
                  if ( (*(_DWORD *)(v49 + 24) & 0xFFFFFFFE) == 0 )
                    goto LABEL_1143;
                  v51 = v50;
                  v52 = System_Single__Parse(*(System_String_o **)(v49 + 40), 0);
                  if ( !*v14 )
                    goto LABEL_1197;
                  v53 = *(MapCamera_o **)(*v14 + 152);
                  v54 = v52 * 0.001;
                  if ( v54 >= 0.0 )
                    v55 = v54;
                  else
                    v55 = 0.5;
                  if ( v48 == 2 )
                  {
                    v56 = 5;
                  }
                  else
                  {
                    if ( *(_DWORD *)(v49 + 24) <= 2u )
                      goto LABEL_1143;
                    v56 = System_Int32__Parse(*(System_String_o **)(v49 + 48), 0);
                  }
                  v815 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v815,
                    (Il2CppObject *)v5,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
                    0);
                  if ( !v53 )
                    goto LABEL_1197;
                  MapCamera__StartAutoZoom(v53, v51, v55, v56, v815, 0);
                  return;
                }
                goto LABEL_1055;
              }
              goto LABEL_314;
            }
            goto LABEL_309;
          }
          if ( id != 300 )
          {
            if ( id != 301 )
              goto LABEL_258;
            goto LABEL_276;
          }
        }
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1197;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1197;
        v262 = *(_QWORD *)(updated + 24);
        v238 = updated;
        if ( (int)v262 <= 0 )
          goto LABEL_1055;
        if ( (unsigned int)v262 >= 3 )
        {
          v614 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v262 = *(_QWORD *)(v238 + 24);
          v264 = v262;
          v263 = v614 * 0.001;
        }
        else
        {
          v263 = 0.5;
          v264 = *(_QWORD *)(updated + 24);
        }
        sec = v263;
        if ( (int)v262 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v238 + 40), 0);
          v264 = *(_DWORD *)(v238 + 24);
          v276 = updated;
        }
        else
        {
          v276 = 15;
        }
        if ( !v264 )
          goto LABEL_1143;
        v623 = (QuestAfterAction_o *)*v14;
        updated = System_Int32__Parse(*(System_String_o **)(v238 + 32), 0);
        if ( !v623 )
          goto LABEL_1197;
        v626 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v623, 0, updated, this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v624, v625);
        if ( UnityEngine_Object__op_Equality(v626, 0, 0) )
          return;
        v1012 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v626, 0);
        *(float *)&v986 = v1012.fields.x;
        v629 = v1012.fields.x;
        v630 = v1012.fields.y;
        v631 = v1012.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v986 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v627, v628);
          updated = sub_291C204(0, v986);
          if ( !updated )
            goto LABEL_1197;
          updated = *(_QWORD *)(updated + 264);
          if ( !updated )
            goto LABEL_1197;
          v1013 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1012, 0);
          v629 = v1013.fields.x;
          v630 = v1013.fields.y;
          v631 = v1013.fields.z;
        }
        if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v627, v628);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v238 + 24) )
            goto LABEL_1143;
          v633 = *(System_String_o **)(v238 + 32);
          updated = System_String__op_Equality(v633, (System_String_o *)StringLiteral_1383/*"10703"*/, 0);
          if ( (updated & 1) != 0 )
          {
            v630 = v630 + -50.0;
          }
          else
          {
            updated = System_String__op_Equality(v633, (System_String_o *)StringLiteral_1457/*"30101"*/, 0);
            if ( (updated & 1) != 0 )
              v630 = v630 + -50.0;
          }
        }
        v907 = *(_DWORD *)(v238 + 24);
        if ( v23->fields.id == 305 )
        {
          if ( v907 >= 4 )
          {
            if ( v907 != 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v238 + 64), 0);
              if ( (int)updated >= 1 )
              {
                if ( !*v14 )
                  goto LABEL_1197;
                v1033.fields.x = v629;
                v1033.fields.y = v630;
                v1033.fields.z = v631;
                v644 = *(MapCamera_o **)(*v14 + 152);
                *(_QWORD *)&v1020.fields.hasValue = &v992;
                *(_OWORD *)&v992.fields._list = 0u;
LABEL_1091:
                *(_QWORD *)&v1020.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                System_Nullable_Vector3____ctor(v1020, v1033, v632);
                if ( (*(_DWORD *)(v238 + 24) & 0xFFFFFFFC) == 0 )
                  goto LABEL_1143;
                v914 = System_Single__Parse(*(System_String_o **)(v238 + 56), 0);
                size = 0;
                System_Nullable_float____ctor(
                  (System_Nullable_float__o)&size,
                  v914,
                  (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
                if ( !v644 )
                  goto LABEL_1197;
LABEL_1093:
                v1025 = *(System_Nullable_Vector3__o *)&v992.fields._list;
                v288 = v644;
                v287 = size;
                v286 = sec;
LABEL_1094:
                MapCamera__StartAutoWork(v288, v286, v1025, v287, v276, 0, 0);
                goto LABEL_1095;
              }
            }
            if ( !*v14 )
              goto LABEL_1197;
            v1035.fields.x = v629;
            v1035.fields.y = v630;
            v1035.fields.z = v631;
            v922 = *(MapCamera_o **)(*v14 + 152);
            *(_QWORD *)&v1022.fields.hasValue = &v992;
            *(_OWORD *)&v992.fields._list = 0u;
LABEL_1130:
            *(_QWORD *)&v1022.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            System_Nullable_Vector3____ctor(v1022, v1035, v632);
            if ( (*(_DWORD *)(v238 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_1143;
            v927 = System_Single__Parse(*(System_String_o **)(v238 + 56), 0);
            size = 0;
            System_Nullable_float____ctor(
              (System_Nullable_float__o)&size,
              v927,
              (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
            v924 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v924, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v922 )
              goto LABEL_1197;
            goto LABEL_1132;
          }
        }
        else if ( v907 >= 4 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v238 + 56), 0);
          if ( (int)updated >= 1 )
          {
            if ( !*v14 )
              goto LABEL_1197;
            updated = *(_QWORD *)(*v14 + 152);
            if ( !updated )
              goto LABEL_1197;
            v1031.fields.x = v629;
            v1031.fields.y = v630;
            v816 = sec;
            v1031.fields.z = v631;
            goto LABEL_1102;
          }
        }
        if ( !*v14 )
          goto LABEL_1197;
        v910 = *(MapCamera_o **)(*v14 + 152);
        v911 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v911, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
        if ( !v910 )
          goto LABEL_1197;
        v234 = v910;
        v1028.fields.x = v629;
        v1028.fields.y = v630;
        v1028.fields.z = v631;
        v236 = v276;
        v912 = v911;
        v235 = sec;
        goto LABEL_1109;
      }
      if ( id <= 199 )
      {
        if ( id > 102 )
        {
          if ( id > 110 )
          {
            switch ( id )
            {
              case 'o':
                v711 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v711 )
                  goto LABEL_1197;
                v709 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v711,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v712, v713);
                updated = UnityEngine_Object__op_Equality(v709, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v709 )
                  goto LABEL_1197;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v709, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v709, 0, 0);
                m_CachedPtr = v709[9].fields.m_CachedPtr;
                if ( !m_CachedPtr )
                  goto LABEL_1197;
                *(_DWORD *)(m_CachedPtr + 20) = 2;
                break;
              case 'p':
                v706 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v706 )
                  goto LABEL_1197;
                v709 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v706,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v707, v708);
                updated = UnityEngine_Object__op_Equality(v709, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v709 )
                  goto LABEL_1197;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v709, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v709, 1, 0);
                v710 = v709[9].fields.m_CachedPtr;
                if ( !v710 )
                  goto LABEL_1197;
                *(_DWORD *)(v710 + 20) = 1;
                break;
              case 'q':
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1197;
                v101 = updated;
                if ( *(int *)(updated + 24) > 1 )
                {
                  v102 = (QuestAfterAction_o *)*v14;
                  updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                  if ( !v102 )
                    goto LABEL_1197;
                  v105 = QuestAfterAction__GetMapComponent_object_(
                           v102,
                           0,
                           updated,
                           this,
                           (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103, v104);
                  updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v105, 0, 0);
                  if ( (updated & 1) != 0 )
                    return;
                  if ( (*(_DWORD *)(v101 + 24) & 0xFFFFFFFE) != 0 )
                  {
                    updated = System_Int32__Parse(*(System_String_o **)(v101 + 40), 0);
                    if ( !v105 )
                      goto LABEL_1197;
                    LODWORD(v105[14].klass) = updated;
                    SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v105, 1, 0);
                    goto LABEL_21;
                  }
                  goto LABEL_1143;
                }
                goto LABEL_1055;
              default:
                goto LABEL_945;
            }
            v393 = (SrcSpotBasePrefab_o *)v709;
            v394 = 1;
LABEL_762:
            SrcSpotBasePrefab__SetTouchType(v393, v394, 0);
            goto LABEL_21;
          }
          if ( id != 103 )
          {
            if ( id != 110 )
              goto LABEL_945;
            v388 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v388 )
              goto LABEL_1197;
            v391 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v388,
                                             0,
                                             updated,
                                             this,
                                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v389, v390);
            updated = UnityEngine_Object__op_Equality(v391, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v391 )
              goto LABEL_1197;
            SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v391, 0, 0);
            v392 = v391[9].fields.m_CachedPtr;
            if ( !v392 )
              goto LABEL_1197;
            *(_DWORD *)(v392 + 20) = 0;
            v393 = (SrcSpotBasePrefab_o *)v391;
            v394 = 0;
            goto LABEL_762;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1197;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1197;
          v715 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_1055;
          v716 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v716 )
            goto LABEL_1197;
          v719 = QuestAfterAction__GetMapComponent_object_(
                   v716,
                   0,
                   updated,
                   this,
                   (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v717, v718);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v719, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( (*(_DWORD *)(v715 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_1143;
          updated = System_Int32__Parse(*(System_String_o **)(v715 + 40), 0);
          if ( !v719 )
            goto LABEL_1197;
          v720 = System_Action_TypeInfo;
          LODWORD(v719[14].klass) = updated;
          v721 = (System_Action_o *)sub_2213CCC(v720);
          System_Action___ctor(v721, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v719, 5, v721, 0);
          updated = *v14;
          if ( !*v14 )
            goto LABEL_1197;
          LODWORD(v380) = (_DWORD)v719;
          *(_QWORD *)(updated + 184) = v719;
          v381 = (MissionNaviTransitionBoardItem_o *)(updated + 184);
LABEL_776:
          sub_2213A04(v381, v380, v374, v375, v376, v377, v378, v379);
          return;
        }
        if ( id > 100 )
        {
          if ( id != 101 )
          {
            v352 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
            System_Object___ctor((Il2CppObject *)v352, 0);
            if ( !v352 )
              goto LABEL_1197;
            *(_QWORD *)(v352 + 24) = v5;
            v359 = v352 + 24;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v352 + 24), v5, v353, v354, v355, v356, v357, v358);
            if ( !*(_QWORD *)(v352 + 24) )
              goto LABEL_1197;
            v360 = *(QuestAfterAction_o **)(*(_QWORD *)(v352 + 24) + 24LL);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v360 )
              goto LABEL_1197;
            v361 = QuestAfterAction__GetMapComponent_object_(
                     v360,
                     0,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            *(_QWORD *)(v352 + 16) = v361;
            v362 = (__int64 *)(v352 + 16);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v352 + 16),
              (int32_t)v361,
              v363,
              v364,
              v365,
              v366,
              v367,
              v368);
            v371 = *(UnityEngine_Object_o **)(v352 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v369, v370);
            if ( UnityEngine_Object__op_Equality(v371, 0, 0) )
              return;
            v372 = *(SrcSpotBasePrefab_o **)(v352 + 16);
            v373 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v373,
              (Il2CppObject *)v352,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
              0);
            if ( !v372 )
              goto LABEL_1197;
            SrcSpotBasePrefab__SetState(v372, 4, v373, 0);
            if ( !*(_QWORD *)v359 )
              goto LABEL_1197;
            updated = *(_QWORD *)(*(_QWORD *)v359 + 24LL);
            if ( !updated )
              goto LABEL_1197;
            v380 = *v362;
            *(_QWORD *)(updated + 184) = *v362;
            v381 = (MissionNaviTransitionBoardItem_o *)(updated + 184);
            goto LABEL_776;
          }
          v666 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v666, 0);
          if ( !v666 )
            goto LABEL_1197;
          *(_QWORD *)(v666 + 24) = v5;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v666 + 24), v5, v667, v668, v669, v670, v671, v672);
          v673 = *(_QWORD *)(v666 + 24);
          if ( !v673 )
            goto LABEL_1197;
          v674 = *(QuestAfterAction_o **)(v673 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v674 )
            goto LABEL_1197;
          v675 = QuestAfterAction__GetMapComponent_object_(
                   v674,
                   0,
                   updated,
                   this,
                   (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v666 + 16) = v675;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v666 + 16),
            (int32_t)v675,
            v676,
            v677,
            v678,
            v679,
            v680,
            v681);
          v684 = *(UnityEngine_Object_o **)(v666 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v682, v683);
          if ( UnityEngine_Object__op_Equality(v684, 0, 0) )
            return;
          v685 = *(SrcSpotBasePrefab_o **)(v666 + 16);
          v182 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v182,
            (Il2CppObject *)v666,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0);
          if ( !v685 )
            goto LABEL_1197;
          v183 = v685;
          v184 = 3;
        }
        else
        {
          if ( !id )
            goto LABEL_21;
          if ( id != 100 )
            goto LABEL_945;
          v162 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v162, 0);
          if ( !v162 )
            goto LABEL_1197;
          *(_QWORD *)(v162 + 24) = v5;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v162 + 24), v5, v163, v164, v165, v166, v167, v168);
          v169 = *(_QWORD *)(v162 + 24);
          if ( !v169 )
            goto LABEL_1197;
          v170 = *(QuestAfterAction_o **)(v169 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v170 )
            goto LABEL_1197;
          v171 = QuestAfterAction__GetMapComponent_object_(
                   v170,
                   0,
                   updated,
                   this,
                   (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v162 + 16) = v171;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v162 + 16),
            (int32_t)v171,
            v172,
            v173,
            v174,
            v175,
            v176,
            v177);
          v180 = *(UnityEngine_Object_o **)(v162 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v178, v179);
          if ( UnityEngine_Object__op_Equality(v180, 0, 0) )
            return;
          v181 = *(SrcSpotBasePrefab_o **)(v162 + 16);
          v182 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v182,
            (Il2CppObject *)v162,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0);
          if ( !v181 )
            goto LABEL_1197;
          v183 = v181;
          v184 = 2;
        }
        SrcSpotBasePrefab__SetState(v183, v184, v182, 0);
        return;
      }
      if ( id > 203 )
      {
        if ( id > 205 )
        {
          if ( id == 206 )
          {
            v141 = this;
            v142 = v23;
            v143 = 5;
            v144 = 0;
          }
          else
          {
            v141 = this;
            v142 = v23;
            if ( id == 207 )
            {
              v143 = 6;
              v144 = 2;
            }
            else
            {
              v143 = 7;
              v144 = 1;
            }
          }
          QuestAfterAction_StateMain__FadeRoad(v141, v142, v143, v144, v32);
          return;
        }
        if ( id == 204 )
        {
          IsMapModel = this->fields.IsMapModel;
          v723 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( IsMapModel )
          {
            if ( !v723 )
              goto LABEL_1197;
            v726 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v723,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v724, v725);
            updated = UnityEngine_Object__op_Equality(v726, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v726 )
              goto LABEL_1197;
            ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v726, 1, 0);
            ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v726, 0, 0);
            v400 = (intptr_t)v726[3].klass;
            if ( !v400 )
              goto LABEL_1197;
          }
          else
          {
            if ( !v723 )
              goto LABEL_1197;
            v891 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v723,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v889, v890);
            updated = UnityEngine_Object__op_Equality(v891, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v891 )
              goto LABEL_1197;
            srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v891, 1, 0);
            srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v891, 0, 0);
            v400 = v891[5].fields.m_CachedPtr;
            if ( !v400 )
              goto LABEL_1197;
          }
          v892 = 2;
        }
        else
        {
          v395 = this->fields.IsMapModel;
          v396 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( v395 )
          {
            if ( !v396 )
              goto LABEL_1197;
            v399 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v396,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v397, v398);
            updated = UnityEngine_Object__op_Equality(v399, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v399 )
              goto LABEL_1197;
            ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v399, 1, 0);
            ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v399, 1, 0);
            v400 = (intptr_t)v399[3].klass;
            if ( !v400 )
              goto LABEL_1197;
          }
          else
          {
            if ( !v396 )
              goto LABEL_1197;
            v895 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v396,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v893, v894);
            updated = UnityEngine_Object__op_Equality(v895, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v895 )
              goto LABEL_1197;
            srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v895, 1, 0);
            srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v895, 1, 0);
            v400 = v895[5].fields.m_CachedPtr;
            if ( !v400 )
              goto LABEL_1197;
          }
          v892 = 1;
        }
        *(_DWORD *)(v400 + 16) = v892;
        goto LABEL_21;
      }
      if ( id > 201 )
      {
        if ( id != 202 )
        {
          v382 = this->fields.IsMapModel;
          v383 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( v382 )
          {
            if ( !v383 )
              goto LABEL_1197;
            v386 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v383,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v384, v385);
            updated = UnityEngine_Object__op_Equality(v386, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v386 )
              goto LABEL_1197;
            ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v386, 0, 0);
            v387 = (intptr_t)v386[3].klass;
            if ( !v387 )
              goto LABEL_1197;
          }
          else
          {
            if ( !v383 )
              goto LABEL_1197;
            v888 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v383,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v886, v887);
            updated = UnityEngine_Object__op_Equality(v888, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v888 )
              goto LABEL_1197;
            srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v888, 0, 0);
            v387 = v888[5].fields.m_CachedPtr;
            if ( !v387 )
              goto LABEL_1197;
          }
          *(_DWORD *)(v387 + 16) = 0;
          goto LABEL_21;
        }
        if ( !this->fields.IsMapModel )
        {
          v846 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
          System_Object___ctor((Il2CppObject *)v846, 0);
          if ( !v846 )
            goto LABEL_1197;
          *(_QWORD *)(v846 + 24) = v5;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v846 + 24), v5, v847, v848, v849, v850, v851, v852);
          v853 = *(_QWORD *)(v846 + 24);
          if ( !v853 )
            goto LABEL_1197;
          v854 = *(QuestAfterAction_o **)(v853 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v854 )
            goto LABEL_1197;
          v855 = QuestAfterAction__GetMapComponent_object_(
                   v854,
                   1,
                   updated,
                   this,
                   (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
          *(_QWORD *)(v846 + 16) = v855;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v846 + 16),
            (int32_t)v855,
            v856,
            v857,
            v858,
            v859,
            v860,
            v861);
          v864 = *(UnityEngine_Object_o **)(v846 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v862, v863);
          if ( UnityEngine_Object__op_Equality(v864, 0, 0) )
            return;
          v865 = *(srcLineSprite_o **)(v846 + 16);
          v842 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v842,
            (Il2CppObject *)v846,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
            0);
          if ( !v865 )
            goto LABEL_1197;
          v843 = -1.0;
          v844 = v865;
          v845 = 4;
          goto LABEL_1020;
        }
        v686 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
        System_Object___ctor((Il2CppObject *)v686, 0);
        if ( !v686 )
          goto LABEL_1197;
        *(_QWORD *)(v686 + 24) = v5;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v686 + 24), v5, v687, v688, v689, v690, v691, v692);
        v693 = *(_QWORD *)(v686 + 24);
        if ( !v693 )
          goto LABEL_1197;
        v694 = *(QuestAfterAction_o **)(v693 + 24);
        updated = System_Int32__Parse(v23->fields.param, 0);
        if ( !v694 )
          goto LABEL_1197;
        v695 = QuestAfterAction__GetMapComponent_object_(
                 v694,
                 1,
                 updated,
                 this,
                 (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
        *(_QWORD *)(v686 + 16) = v695;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v686 + 16), (int32_t)v695, v696, v697, v698, v699, v700, v701);
        v704 = *(UnityEngine_Object_o **)(v686 + 16);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v702, v703);
        if ( UnityEngine_Object__op_Equality(v704, 0, 0) )
          return;
        v705 = *(ModelLineComponent_o **)(v686 + 16);
        v205 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v205,
          (Il2CppObject *)v686,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
          0);
        if ( !v705 )
          goto LABEL_1197;
        v206 = v705;
        v207 = 4;
      }
      else
      {
        if ( id != 200 )
        {
          if ( this->fields.IsMapModel )
          {
            v185 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
            System_Object___ctor((Il2CppObject *)v185, 0);
            if ( !v185 )
              goto LABEL_1197;
            *(_QWORD *)(v185 + 24) = v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v185 + 24), v5, v186, v187, v188, v189, v190, v191);
            v192 = *(_QWORD *)(v185 + 24);
            if ( !v192 )
              goto LABEL_1197;
            v193 = *(QuestAfterAction_o **)(v192 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v193 )
              goto LABEL_1197;
            v194 = QuestAfterAction__GetMapComponent_object_(
                     v193,
                     1,
                     updated,
                     this,
                     (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            *(_QWORD *)(v185 + 16) = v194;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v185 + 16),
              (int32_t)v194,
              v195,
              v196,
              v197,
              v198,
              v199,
              v200);
            v203 = *(UnityEngine_Object_o **)(v185 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v201, v202);
            if ( UnityEngine_Object__op_Equality(v203, 0, 0) )
              return;
            v204 = *(ModelLineComponent_o **)(v185 + 16);
            v205 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v205,
              (Il2CppObject *)v185,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
              0);
            if ( !v204 )
              goto LABEL_1197;
            v206 = v204;
            v207 = 3;
            goto LABEL_745;
          }
          v866 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
          System_Object___ctor((Il2CppObject *)v866, 0);
          if ( !v866 )
            goto LABEL_1197;
          *(_QWORD *)(v866 + 24) = v5;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v866 + 24), v5, v867, v868, v869, v870, v871, v872);
          v873 = *(_QWORD *)(v866 + 24);
          if ( !v873 )
            goto LABEL_1197;
          v874 = *(QuestAfterAction_o **)(v873 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v874 )
            goto LABEL_1197;
          v875 = QuestAfterAction__GetMapComponent_object_(
                   v874,
                   1,
                   updated,
                   this,
                   (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
          *(_QWORD *)(v866 + 16) = v875;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v866 + 16),
            (int32_t)v875,
            v876,
            v877,
            v878,
            v879,
            v880,
            v881);
          v884 = *(UnityEngine_Object_o **)(v866 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v882, v883);
          if ( UnityEngine_Object__op_Equality(v884, 0, 0) )
            return;
          v885 = *(srcLineSprite_o **)(v866 + 16);
          v842 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v842,
            (Il2CppObject *)v866,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
            0);
          if ( !v885 )
            goto LABEL_1197;
          v843 = -1.0;
          v844 = v885;
          v845 = 3;
LABEL_1020:
          srcLineSprite__SetState(v844, v845, v842, v843, 0);
          return;
        }
        if ( !this->fields.IsMapModel )
        {
          v822 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v822, 0);
          if ( !v822 )
            goto LABEL_1197;
          *(_QWORD *)(v822 + 24) = v5;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v822 + 24), v5, v823, v824, v825, v826, v827, v828);
          v829 = *(_QWORD *)(v822 + 24);
          if ( !v829 )
            goto LABEL_1197;
          v830 = *(QuestAfterAction_o **)(v829 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v830 )
            goto LABEL_1197;
          v831 = QuestAfterAction__GetMapComponent_object_(
                   v830,
                   1,
                   updated,
                   this,
                   (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
          *(_QWORD *)(v822 + 16) = v831;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v822 + 16),
            (int32_t)v831,
            v832,
            v833,
            v834,
            v835,
            v836,
            v837);
          v840 = *(UnityEngine_Object_o **)(v822 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v838, v839);
          if ( UnityEngine_Object__op_Equality(v840, 0, 0) )
            return;
          v841 = *(srcLineSprite_o **)(v822 + 16);
          v842 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v842,
            (Il2CppObject *)v822,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
            0);
          if ( !v841 )
            goto LABEL_1197;
          v843 = -1.0;
          v844 = v841;
          v845 = 2;
          goto LABEL_1020;
        }
        v646 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
        System_Object___ctor((Il2CppObject *)v646, 0);
        if ( !v646 )
          goto LABEL_1197;
        *(_QWORD *)(v646 + 24) = v5;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v646 + 24), v5, v647, v648, v649, v650, v651, v652);
        v653 = *(_QWORD *)(v646 + 24);
        if ( !v653 )
          goto LABEL_1197;
        v654 = *(QuestAfterAction_o **)(v653 + 24);
        updated = System_Int32__Parse(v23->fields.param, 0);
        if ( !v654 )
          goto LABEL_1197;
        v655 = QuestAfterAction__GetMapComponent_object_(
                 v654,
                 1,
                 updated,
                 this,
                 (const MethodInfo_39734AC *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
        *(_QWORD *)(v646 + 16) = v655;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v646 + 16), (int32_t)v655, v656, v657, v658, v659, v660, v661);
        v664 = *(UnityEngine_Object_o **)(v646 + 16);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v662, v663);
        if ( UnityEngine_Object__op_Equality(v664, 0, 0) )
          return;
        v665 = *(ModelLineComponent_o **)(v646 + 16);
        v205 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v205,
          (Il2CppObject *)v646,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
          0);
        if ( !v665 )
          goto LABEL_1197;
        v206 = v665;
        v207 = 2;
      }
LABEL_745:
      ModelLineComponent__SetState(v206, v207, v205, 0);
      return;
    }
  }
  if ( isQuickUpdate[0] )
  {
LABEL_21:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
    v34 = *v14;
    v35 = this;
    v36 = this->klass->vtable._13_UpdateAnim.method;
    methodPtr = this->klass->vtable._13_UpdateAnim.methodPtr;
LABEL_22:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, const MethodInfo *))methodPtr)(v35, v34, v36);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v11; // x1
  struct QuestAfterAction_o *v12; // x8
  __int64 v13; // x2
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_596D1A2 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D1A2 = 1;
  }
  this->fields.that = that;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)that,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11, v13);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11, v13);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0 )
LABEL_14:
    sub_2213CDC(screenCollider, v11);
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
    sub_2213CDC(this, method);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_2213CDC(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_596D1A1 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D1A1 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_2213CDC(v3, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__onEnd(QuestAfterAction_StateMain_o *this, bool deleteKey, const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  struct UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2; // x9
  __int64 v10; // x8
  int v11; // w9

  if ( (byte_596D1A4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_17409/*"afterActionBk"*/);
    byte_596D1A4 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, deleteKey, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, deleteKey, method);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_21;
  TerminalSceneComponent__ClearTransitionInfo(mInstance, 0);
  QuestAfterAction_StateMain__StartMapGimmick(this, v7);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, deleteKey, v8);
  if ( !byte_596D20E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D20E = 1;
  }
  mInstance = (TerminalSceneComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, deleteKey, v8);
    mInstance = (TerminalSceneComponent_o *)TerminalPramsManager_TypeInfo;
  }
  TUTORIAL_MENU_ARROW_POS2 = mInstance->fields.TUTORIAL_MENU_ARROW_POS2;
  v10 = *(_QWORD *)(*(_QWORD *)&TUTORIAL_MENU_ARROW_POS2 + 904LL);
  *(_BYTE *)(*(_QWORD *)&TUTORIAL_MENU_ARROW_POS2 + 600LL) = 0;
  if ( !v10
    || (mInstance = (TerminalSceneComponent_o *)this->fields.that,
        v11 = *(_DWORD *)(v10 + 28) + 1,
        *(_DWORD *)(v10 + 24) = 0,
        *(_DWORD *)(v10 + 28) = v11,
        !mInstance) )
  {
LABEL_21:
    sub_2213CDC(mInstance, deleteKey);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_2213CDC(this, *(_QWORD *)&value);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D1A7 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_596D1A7 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
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
  __int64 v2; // x2
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v6; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  ScriptManager_CallbackFunc_o *_9__16_27; // x21
  Il2CppObject *v10; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596D1A8 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_2213A60(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_596D1A8 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596A92E = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v6 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  if ( !*(&QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, method, v2);
    v6 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__16_27 = static_fields->__9__16_27;
  if ( !_9__16_27 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, method, v2);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v10, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    v11 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v11->__9__16_27 = _9__16_27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__16_27, (int32_t)_9__16_27, v12, v13, v14, v15, v16, v17);
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method, v2);
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


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c_c *v3; // x0
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *_9__16_28; // x19
  Il2CppObject *v6; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v17; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v21; // x1

  if ( (byte_596D1A9 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_2213A60(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_596D1A9 = 1;
  }
  v3 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !*(&QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, isExit, method);
    v3 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__16_28 = static_fields->__9__16_28;
  if ( !_9__16_28 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, isExit, method);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v6,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    v7 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v7->__9__16_28 = _9__16_28;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__16_28, (int32_t)_9__16_28, v8, v9, v10, v11, v12, v13);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isExit, method);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !*(&v17->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v17, v14, v15);
    v17 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v17->static_fields->_PhaseCnt_k__BackingField;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14, v15);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_2213CDC(SelectRouteArray, v21);
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x19
  System_Object_array *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v16; // x0
  Il2CppObject *Instance; // x0
  __int64 v18; // x1

  if ( (byte_596D1AA & 1) == 0 )
  {
    sub_2213A60(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_17409/*"afterActionBk"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    sub_2213A60(&StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/);
    byte_596D1AA = 1;
  }
  v6 = (Il2CppObject *)System_String__Concat_75694928(
                         (System_String_o *)StringLiteral_16427/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16691/*"]"*/,
                         0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4, v5);
  v7 = JsonManager__DeserializeArray_object_(
         v6,
         (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8, v9);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v7, 1, 0);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
    v14 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  v16 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v16);
  if ( !Instance )
    sub_2213CDC(0, v18);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


bool QuestAfterAction_StateMain___c___UpdateAnim_b__16_35(
        QuestAfterAction_StateMain___c_o *this,
        TitleInfoEventRaidBossComponent_o *eventRaidBossComponent,
        const MethodInfo *method)
{
  if ( !eventRaidBossComponent )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
    || (v3 = this,
        this = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)this->fields.__4__this,
        that->fields._IsAfterFadeInPlay_k__BackingField = 0,
        !this)
    || (((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          this->klass[1]._1.implementedInterfaces),
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(spot, method);
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
    sub_2213CDC(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__14(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals10; // x9

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (CS___8__locals10 = this->fields.CS___8__locals10, mMapCtrl_MapGimmickInfo->fields.dispType = 0,
                                                          !CS___8__locals10)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)CS___8__locals10->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__16(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals11; // x9

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (CS___8__locals11 = this->fields.CS___8__locals11, mMapCtrl_MapGimmickInfo->fields.dispType = 1,
                                                          !CS___8__locals11)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)CS___8__locals11->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x9

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (CS___8__locals12 = this->fields.CS___8__locals12, mMapCtrl_MapGimmickInfo->fields.dispType = 1,
                                                          !CS___8__locals12)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)CS___8__locals12->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v22; // x8
  UnityEngine_Color_o *v23; // x20
  float v24; // s0
  UITweener_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  unsigned __int128 v27; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_596D1AB & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_2213A60(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_596D1AB = 1;
  }
  v27 = 0u;
  v3 = sub_2213CCC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v3 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( (paramsStr->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            (UnityEngine_Color_o *)&v27,
                                            0);
  if ( !*v14
    || ((*v14)[8] = *(UnityEngine_Color_o *)((char *)&v12[6].klass + 4), !*v14)
    || ((*v14)[9] = (UnityEngine_Color_o)v27, (v22 = this->fields.paramsStr) == 0) )
  {
LABEL_18:
    sub_2213CDC(mapGimmick, v5);
  }
  if ( LODWORD(v22->max_length) <= 2 )
LABEL_19:
    sub_2213CE4(mapGimmick);
  v23 = *v14;
  v24 = System_Single__Parse(v22->m_Items[2], 0);
  if ( !v23 )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  v23[3].fields.b = v24;
  if ( !mapGimmick )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0);
  v25 = *(UITweener_o **)(v3 + 16);
  v26 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
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
  __int64 v2; // x2
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v6; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_596D1AC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D1AC = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83459800(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_2213CDC(_4__this, v6);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x9

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (CS___8__locals15 = this->fields.CS___8__locals15, mMapCtrl_MapGimmickInfo->fields.dispType = 1,
                                                          !CS___8__locals15)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x9

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (CS___8__locals15 = this->fields.CS___8__locals15, mMapCtrl_MapGimmickInfo->fields.dispType = 0,
                                                          !CS___8__locals15)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  __int64 v5; // x2
  void *image; // x8
  ScrTerminalListTop_o *v7; // x20
  int32_t name_high; // w21
  System_Action_o *_9__25; // x22
  int namespaze; // w24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  clsQuestCheck_o *v18; // x19
  QuestAfterAction_StateMain___c_c *v19; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v22; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_596D1AD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_2213A60(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_2213A60(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_596D1AD = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, result, v5);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, result, v5);
      questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    image = questEntity[1].klass->_1.image;
    if ( image )
    {
      v7 = (ScrTerminalListTop_o *)*((_QWORD *)image + 32);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, result, v5);
      if ( !byte_596A92E )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A92E = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, result, v5);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_596A92D )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_596A92D = 1;
      }
      if ( !questEntity[1].fields.actConsume )
      {
        j_il2cpp_runtime_class_init_0(questEntity, result, v5);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      _9__25 = this->fields.__9__25;
      namespaze = (int)questEntity[1].klass->_1.namespaze;
      if ( !_9__25 )
      {
        _9__25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__9__25,
          (int32_t)_9__25,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      if ( v7 )
      {
        ScrTerminalListTop__StartWindowMessage_43695928(v7, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_2213CDC(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v18 = (clsQuestCheck_o *)questEntity;
  v19 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !*(&QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, result, v17);
    v19 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__16_26 = static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, result, v17);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v22, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    v23 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v23->__9__16_26 = _9__16_26;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__16_26, (int32_t)_9__16_26, v24, v25, v26, v27, v28, v29);
  }
  if ( !v18 )
    goto LABEL_34;
  clsQuestCheck__PlayQuestStartAction(v18, _9__16_26, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v6; // x2
  UnityEngine_GameObject_c *v7; // x8
  UnityEngine_GameObject_c *v8; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  int32_t QuestId_k__BackingField; // w21
  int v13; // w9
  __int64 v14; // x1
  __int64 v15; // x2
  TerminalPramsManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  bool HasFlag; // w8
  TerminalPramsManager_c *v20; // x0
  TerminalPramsManager_c *v21; // x0
  int32_t SpotId; // w21
  __int64 v23; // x2
  struct MapControl_QuestInfo_o *questInfo; // x9
  int32_t questId; // w22
  int32_t klass_high; // w21
  __int64 v27; // x2
  UnityEngine_GameObject_c *v28; // x8
  __int64 v29; // x2
  bool Effect; // w21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x8
  __int64 v32; // x2
  TerminalPramsManager_c *v33; // x0
  int32_t WarId_k__BackingField; // w19
  int v35; // w9
  UnityEngine_GameObject_c *v36; // x8
  ScrTerminalListTop_o *v37; // x19
  int32_t m_CachedPtr_high; // w21

  if ( (byte_596D1AE & 1) == 0 )
  {
    sub_2213A60(&MyRoomParamsManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&StringLiteral_17409/*"afterActionBk"*/);
    sub_2213A60(&StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/);
    byte_596D1AE = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
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
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = _4__this->fields.subRootGimmickP->klass;
  if ( !v7 || (_4__this = *(ScrTerminalMap_o **)&v7->_2.static_fields_size) == 0 )
LABEL_105:
    sub_2213CDC(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = _4__this->fields.subRootGimmickP->klass;
  if ( !v8 )
    goto LABEL_105;
  _4__this = *(ScrTerminalMap_o **)&v8->_2.element_size;
  if ( !_4__this )
    goto LABEL_105;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_596D211 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
    byte_596D211 = 1;
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, v9, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v13 = (unsigned __int8)byte_596A92E;
  v11->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !v13 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
    byte_596A92E = 1;
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, v9, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v11->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
    v16 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v16->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0);
  v20 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17, v18);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17, v18);
      v21 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v21->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_596D212 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596D212 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17, v18);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v20->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v17, v18);
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  TerminalPramsManager__Save_SaveData(0);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v23);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  questInfo = this->fields.questInfo;
  if ( !questInfo )
    goto LABEL_105;
  questId = questInfo->fields.questId;
  klass_high = HIDWORD(_4__this->fields.subRootGimmickP->klass);
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v23);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(klass_high, questId, 0, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17409/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14287/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v27);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v27);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v28 = _4__this->fields.subRootGimmickP->klass;
  if ( !v28 )
    goto LABEL_105;
  _4__this = *(ScrTerminalMap_o **)&v28->_2.element_size;
  if ( !_4__this )
    goto LABEL_105;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0);
  if ( !byte_596D213 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596D213 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v29);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  CS___8__locals16 = this->fields.CS___8__locals16;
  BYTE2(_4__this->fields.subRootGimmickP[7].klass) = Effect;
  if ( !CS___8__locals16 )
    goto LABEL_105;
  _4__this = (ScrTerminalMap_o *)CS___8__locals16->fields.__4__this;
  if ( !_4__this )
    goto LABEL_105;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppClass **))_4__this->klass[1]._1.nestedTypes)(
    _4__this,
    _4__this->klass[1]._1.implementedInterfaces);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v32);
    v33 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v33->static_fields->_WarId_k__BackingField;
  if ( !byte_596D19B )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
    byte_596D19B = 1;
  }
  if ( !*(&v33->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v33, method, v32);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v35 = (unsigned __int8)byte_596A090;
  v33->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !v35 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v32);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v36 = _4__this->fields.subRootGimmickP->klass;
  if ( !v36 )
    goto LABEL_105;
  v37 = *(ScrTerminalListTop_o **)&v36->_2.element_size;
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v32);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !HIDWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this, method, v32);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v37 )
    goto LABEL_105;
  ScrTerminalListTop__RequestBattleSecnario(
    v37,
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
  __int64 v2; // x2
  QuestAfterAction_StateMain___c__DisplayClass16_17_o *v3; // x19
  __int64 v4; // x8
  float bgmVolume; // s8
  float defaultBgmVolume; // s9
  ScrTerminalListTop_o *v7; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals17; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *v9; // x8

  v3 = this;
  if ( (byte_596D1AF & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D1AF = 1;
  }
  if ( v3->fields.bgmVolume > -1.0 )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
      this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    }
    v4 = **((_QWORD **)this + 23);
    if ( !v4 )
      goto LABEL_20;
    bgmVolume = v3->fields.bgmVolume;
    defaultBgmVolume = v3->fields.defaultBgmVolume;
    v7 = *(ScrTerminalListTop_o **)(v4 + 256);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)QuestAfterAction_TypeInfo;
    if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, method, v2);
    if ( !v7 )
LABEL_20:
      sub_2213CDC(this, method);
    ScrTerminalListTop__StartEasingBgmMasterVolume(
      v7,
      bgmVolume,
      defaultBgmVolume,
      QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
      2,
      0,
      0);
  }
  CS___8__locals17 = v3->fields.CS___8__locals17;
  if ( !CS___8__locals17 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)CS___8__locals17->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)((__int64 (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                                                  this,
                                                                  this->klass[1]._1.implementedInterfaces);
  v9 = v3->fields.CS___8__locals17;
  if ( !v9 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v9->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, struct QuestAfterAction_o *, void *))this->klass[1]._1.properties)(
    this,
    v9->fields.that,
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
    sub_2213CDC(spot, method);
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
    sub_2213CDC(spot, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x9

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (CS___8__locals4 = this->fields.CS___8__locals4,
        SpotRoadInfo_k__BackingField->fields.dispType = 0,
        !CS___8__locals4)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)CS___8__locals4->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x9

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (CS___8__locals5 = this->fields.CS___8__locals5, mMapCtrl_SpotRoadInfo->fields.dispType = 0, !CS___8__locals5)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)CS___8__locals5->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x9

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (CS___8__locals6 = this->fields.CS___8__locals6,
        SpotRoadInfo_k__BackingField->fields.dispType = 2,
        !CS___8__locals6)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)CS___8__locals6->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x9

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (CS___8__locals7 = this->fields.CS___8__locals7, mMapCtrl_SpotRoadInfo->fields.dispType = 2, !CS___8__locals7)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)CS___8__locals7->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x9

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (CS___8__locals8 = this->fields.CS___8__locals8,
        SpotRoadInfo_k__BackingField->fields.dispType = 1,
        !CS___8__locals8)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)CS___8__locals8->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x9

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (CS___8__locals9 = this->fields.CS___8__locals9, mMapCtrl_SpotRoadInfo->fields.dispType = 1, !CS___8__locals9)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)CS___8__locals9->fields.__4__this) == 0 )
  {
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  mMapCtrl_SpotRoadInfo->fields.dispType = this->fields.fadeEndDispType;
}


void QuestAfterAction_StateMain___c__DisplayClass22_0___FadeRoad_b__1(
        QuestAfterAction_StateMain___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  int32_t fadeEndDispType; // w9

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (fadeEndDispType = this->fields.fadeEndDispType,
        this = (QuestAfterAction_StateMain___c__DisplayClass22_0_o *)this->fields.__4__this,
        mMapCtrl_SpotRoadInfo->fields.dispType = fadeEndDispType,
        !this) )
  {
    sub_2213CDC(this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *end; // x8
  MissionNaviTransitionBoardItem_o *p_end; // x19

  p_end = (MissionNaviTransitionBoardItem_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t))end->fields.invoke_impl)(end->fields.method_code, end->fields.method);
  p_end->klass = 0;
  sub_2213A04(p_end, 0, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.start = startCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)startCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        QuestAfterAction_TitleInfoControlParam_o *titleInfoControlParam,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_end,
    (int32_t)endCallback,
    (System_String_o *)endCallback,
    (System_String_o *)method,
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)vName, v7, v8, v9, v10, v11, v12);
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
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_Fields *p_fields; // x8
  int32_t _1__state; // w9
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v24; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  QuestAfterAction_Command_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *v49; // [xsp+18h] [xbp-38h]

  v49 = this;
  v2 = this;
  if ( (byte_596D1B6 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)sub_2213A60(&QuestAfterAction_TypeInfo);
    byte_596D1B6 = 1;
  }
  p_fields = &v2->fields;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v2->fields.commandEnumerable;
    v2->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_2213CDC(this, method);
    klass = commandEnumerable->klass;
    v8 = *(unsigned __int16 *)&commandEnumerable->klass->_2.rank;
    if ( *(_WORD *)&commandEnumerable->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_224BC3C(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v10)(
            commandEnumerable,
            *(_QWORD *)(v10 + 8));
    v49->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->fields.__7__wrap1, v11, v12, v13, v14, v15, v16, v17);
    p_fields = &v49->fields;
  }
  p_fields->__1__state = -3;
  while ( 1 )
  {
    _7__wrap1 = v49->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_2213CDC(this, method);
    v19 = _7__wrap1->klass;
    v20 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_19:
      v22 = sub_224BC3C(v49->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v22)(
            _7__wrap1,
            *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      break;
    v24 = v49->fields.__7__wrap1;
    if ( !v24 )
      sub_2213CDC(v49, v23);
    v25 = v24->klass;
    v26 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v27 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_27;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_27:
      v28 = sub_224BC3C(
              v49->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v29 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v28)(
            v24,
            *(_QWORD *)(v28 + 8));
    v31 = (QuestAfterAction_Command_o *)v29;
    if ( !v29 )
      sub_2213CDC(0, v30);
    if ( !_4__this )
      sub_2213CDC(v29, v30);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v29 + 16), 0);
    if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v32, v33);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v31, 0);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v49->fields.__2__current = v31;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v49->fields.__2__current,
        (int32_t)v31,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      v49->fields.__1__state = 1;
      return 1;
    }
  }
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96____m__Finally1(v49, v23);
  v49->fields.__7__wrap1 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->fields.__7__wrap1, 0, v43, v44, v45, v46, v47, v48);
  return 0;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *v10; // x20
  int32_t CurrentManagedThreadId; // w0
  struct QuestAfterAction_o *_4__this; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_596D1B8 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    byte_596D1B8 = 1;
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
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)sub_2213CCC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    v10->fields.__4__this = _4__this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.__4__this,
      (int32_t)_4__this,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.commandEnumerable,
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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

  if ( (byte_596D1B7 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596D1B7 = 1;
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
      v7 = sub_224BC3C(_7__wrap1, System_IDisposable_TypeInfo, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_2213CDC(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__100_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596D1B1 & 1) == 0 )
  {
    sub_2213A60(&QuestAfterAction___c_TypeInfo);
    byte_596D1B1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestAfterAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestAfterAction___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__129_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetAfterActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetRaidUiSetupCommand_b__128_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___SetupTutorialCommandPreprocess_b__154_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___SetupTutorialCommandPreprocess_b__154_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
  if ( (byte_596D1B2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    this = (QuestAfterAction___c__DisplayClass150_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_596D1B2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (QuestAfterAction___c__DisplayClass150_0_o *)_4__this->fields.loadedVoiceSvtIdSet) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.loadingSvtId,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (QuestAfterAction___c__DisplayClass150_0_o *)v2->fields.svtVInfos) == 0)
    || (System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)this,
          0,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (this = (QuestAfterAction___c__DisplayClass150_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  QuestAfterAction__LoadVoice_43019576((QuestAfterAction_o *)this, v2->fields.svtVInfos, v2->fields.endAct, 0);
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
  System_Collections_Generic_IEnumerable_TSource__o *tutorialLoadedSvtIdList; // x0
  bool HasAnyRequestedVoiceToLoad; // w8

  v2 = this;
  if ( (byte_596D1B3 & 1) == 0 )
  {
    this = (QuestAfterAction___c__DisplayClass167_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Any_int___);
    byte_596D1B3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  tutorialLoadedSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.tutorialLoadedSvtIdList;
  _4__this->fields.isLoadingVoice = 0;
  if ( System_Linq_Enumerable__Any_int_(
         tutorialLoadedSvtIdList,
         (const MethodInfo_3865C7C *)Method_System_Linq_Enumerable_Any_int___) )
  {
    this = (QuestAfterAction___c__DisplayClass167_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_14;
    QuestAfterAction__AddLoadedTutorialVoiceSvtIds(
      (QuestAfterAction_o *)this,
      (System_Collections_Generic_IEnumerable_int__o *)v2->fields.tutorialLoadedSvtIdList,
      0);
  }
  this = (QuestAfterAction___c__DisplayClass167_0_o *)v2->fields.__4__this;
  if ( !this
    || (QuestAfterAction__MarkRequestedVoiceLoadCompleted((QuestAfterAction_o *)this, 0),
        (this = (QuestAfterAction___c__DisplayClass167_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, method);
  }
  HasAnyRequestedVoiceToLoad = QuestAfterAction__HasAnyRequestedVoiceToLoad((QuestAfterAction_o *)this, 0);
  this = (QuestAfterAction___c__DisplayClass167_0_o *)v2->fields.__4__this;
  if ( HasAnyRequestedVoiceToLoad )
  {
    if ( this )
    {
      QuestAfterAction__StartLoadVoicePipeline((QuestAfterAction_o *)this, 0);
      return;
    }
    goto LABEL_14;
  }
  if ( !this )
    goto LABEL_14;
  QuestAfterAction__FlushVoiceLoadCallbacks((QuestAfterAction_o *)this, 0);
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

  if ( (byte_596D1B4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596D1B4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  char *_4__this; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596D1B5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596D1B5 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(_4__this + 176), 0, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 10) = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(_4__this + 80), 0, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_2213CDC(_4__this, method);
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
    sub_2213CDC(0, method);
  QuestAfterAction__SetState(_4__this, 2, 0);
}