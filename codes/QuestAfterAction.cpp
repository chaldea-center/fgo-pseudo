void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_5935061 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935061 = 1;
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

  if ( (byte_5935060 & 1) == 0 )
  {
    sub_21FFC50(&BlankEarthQuestAfterAction_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Action__TypeInfo);
    sub_21FFC50(&PlanetEarthQuestAfterAction_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_21FFC50(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_5935060 = 1;
  }
  v3 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_21FFEBC(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  QuestAfterAction_TitleInfoControlCallback___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_21FFEBC(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (PlanetEarthQuestAfterAction_o *)sub_21FFEBC(PlanetEarthQuestAfterAction_TypeInfo);
  PlanetEarthQuestAfterAction___ctor(v17, 0);
  this->fields._PlanetEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PlanetEarthQuestAfterAction_k__BackingField,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v24,
    (const MethodInfo_3F88244 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v24;
  sub_21FFBF4(
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
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(v31);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.svtVoices, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  this->fields.tutorialSvtVoiceList = (struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v39;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialSvtVoiceList,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v46,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.tutorialVoiceParamKeySet = (struct System_Collections_Generic_HashSet_string__o *)v46;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialVoiceParamKeySet,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v53,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.tutorialVoiceInfoByParam = (struct System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__o *)v53;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tutorialVoiceInfoByParam,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v60,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.loadedTutorialVoiceSvtIdSet = v60;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedTutorialVoiceSvtIdSet,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v67,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.loadedVoiceSvtIdSet = v67;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadedVoiceSvtIdSet,
    (int32_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.pendingVoiceLoadCallbackList = (struct System_Collections_Generic_List_Action__o *)v74;
  sub_21FFBF4(
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
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  if ( (byte_593505F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    this = (QuestAfterAction_o *)sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593505F = 1;
  }
  if ( !svtIdEnumerable )
    sub_21FFECC(this, svtIdEnumerable);
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
    v8 = sub_2237E2C(svtIdEnumerable, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v9 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v8)(
         svtIdEnumerable,
         *(_QWORD *)(v8 + 8));
  v25 = v9;
  while ( 1 )
  {
    if ( !v25 )
      sub_21FFECC(v9, v10);
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
      v14 = sub_2237E2C(v25, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_2237E2C(v25, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v19 = (*(unsigned int (__fastcall **)(__int64, _QWORD))v18)(v25, *(_QWORD *)(v18 + 8));
    loadedTutorialVoiceSvtIdSet = v4->fields.loadedTutorialVoiceSvtIdSet;
    if ( !loadedTutorialVoiceSvtIdSet )
      sub_21FFECC(0, v19);
    v9 = System_Collections_Generic_HashSet_int___Add(
           loadedTutorialVoiceSvtIdSet,
           v19,
           (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    v24 = sub_2237E2C(v25, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_593505E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593505E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v4,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !sourceVoiceInfoEnumerable )
    sub_21FFECC(v5, v6);
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
    v10 = sub_2237E2C(
            sourceVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v10)(
          sourceVoiceInfoEnumerable,
          *(_QWORD *)(v10 + 8));
  v37 = v11;
  if ( !v11 )
    sub_21FFECC(v11, v12);
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
      v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
    if ( (v18 & 1) == 0 )
      break;
    if ( !v37 )
      sub_21FFECC(v18, v19);
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
      v23 = sub_2237E2C(v37, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v37, *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( v24 )
    {
      v26 = *(unsigned int *)(v24 + 16);
      if ( (int)v26 >= 1 )
      {
        if ( !v4 )
          sub_21FFECC(v24, v26);
        v27 = System_Collections_Generic_HashSet_int___Add(
                v4,
                v26,
                (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v27 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v28 = *(unsigned int *)(v25 + 16),
                v30 = Method_System_Collections_Generic_List_int__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v27, v28);
          }
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              v28,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
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
      v35 = sub_2237E2C(v37, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_593505A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_593505A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
    v12 = sub_2237E2C(
            firstVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v12)(
          firstVoiceInfoEnumerable,
          *(_QWORD *)(v12 + 8));
  v80 = v13;
  if ( !v13 )
    sub_21FFECC(v13, v14);
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
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(i, *(_QWORD *)(v19 + 8));
    if ( (v7 & 1) == 0 )
      break;
    if ( !v80 )
      sub_21FFECC(v7, v8);
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
      v23 = sub_2237E2C(v80, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v80, *(_QWORD *)(v23 + 8));
    v25 = (Il2CppObject *)v24;
    if ( v24 )
    {
      v26 = *(unsigned int *)(v24 + 16);
      if ( (int)v26 >= 1 )
      {
        if ( !v6 )
          sub_21FFECC(v24, v26);
        v27 = System_Collections_Generic_HashSet_int___Add(
                v6,
                v26,
                (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v27 )
        {
          if ( !v5
            || (items = v5->fields._items,
                v36 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__,
                ++v5->fields._version,
                !items) )
          {
            sub_21FFECC(v27, v28);
          }
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v25,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v25;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v25, v29, v30, v31, v32, v33, v34);
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
      v42 = sub_2237E2C(v80, System_IDisposable_TypeInfo, 0);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v80, *(_QWORD *)(v42 + 8));
  }
  if ( !secondVoiceInfoEnumerable )
LABEL_94:
    sub_21FFECC(v7, v8);
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
    v46 = sub_2237E2C(
            secondVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v46)(
          secondVoiceInfoEnumerable,
          *(_QWORD *)(v46 + 8));
  v81 = v47;
  if ( !v47 )
    sub_21FFECC(v47, v48);
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
      v53 = sub_2237E2C(j, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(j, *(_QWORD *)(v53 + 8));
    if ( (v54 & 1) == 0 )
      break;
    if ( !v81 )
      sub_21FFECC(v54, v55);
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
      v59 = sub_2237E2C(v81, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v81, *(_QWORD *)(v59 + 8));
    v61 = (Il2CppObject *)v60;
    if ( v60 )
    {
      v62 = *(unsigned int *)(v60 + 16);
      if ( (int)v62 >= 1 )
      {
        if ( !v6 )
          sub_21FFECC(v60, v62);
        v63 = System_Collections_Generic_HashSet_int___Add(
                v6,
                v62,
                (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        if ( v63 )
        {
          if ( !v5
            || (v71 = v5->fields._items,
                v72 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__,
                ++v5->fields._version,
                !v71) )
          {
            sub_21FFECC(v63, v64);
          }
          v73 = v5->fields._size;
          if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v61,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v71->obj.klass + v73;
            v5->fields._size = v73 + 1;
            v74[4] = (Il2CppClass *)v61;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)v61, v65, v66, v67, v68, v69, v70);
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
      v78 = sub_2237E2C(v81, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_5935052 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935052 = 1;
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

  if ( (byte_5935053 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935053 = 1;
  }
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    sub_21FFECC(0, method);
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_3F68B0C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
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

  if ( (byte_593505D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_593505D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !sourceVoiceInfoEnumerable )
    sub_21FFECC(v7, v8);
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
    v12 = sub_2237E2C(
            sourceVoiceInfoEnumerable,
            System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__TypeInfo,
            0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *, _QWORD))v12)(
          sourceVoiceInfoEnumerable,
          *(_QWORD *)(v12 + 8));
  v48 = v13;
  if ( !v13 )
    sub_21FFECC(v13, v14);
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
      v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(i, *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v48 )
      sub_21FFECC(v20, v21);
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
      v25 = sub_2237E2C(v48, System_Collections_Generic_IEnumerator_QuestAfterAction_VoiceInfo__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v48, *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( v26 )
    {
      v28 = *(unsigned int *)(v26 + 16);
      if ( (int)v28 >= 1 )
      {
        if ( !loadedSvtIdSet )
          sub_21FFECC(v26, v28);
        v29 = System_Collections_Generic_HashSet_int___Contains(
                loadedSvtIdSet,
                v28,
                (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
        if ( !v29 )
        {
          if ( !v6 )
            sub_21FFECC(v29, v30);
          v31 = System_Collections_Generic_HashSet_int___Add(
                  v6,
                  *(_DWORD *)(v27 + 16),
                  (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          if ( v31 )
          {
            if ( !v5
              || (items = v5->fields._items,
                  v40 = Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__,
                  ++v5->fields._version,
                  !items) )
            {
              sub_21FFECC(v31, v32);
            }
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                (Il2CppObject *)v27,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v27;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 4), v27, v33, v34, v35, v36, v37, v38);
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
      v46 = sub_2237E2C(v48, System_IDisposable_TypeInfo, 0);
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
  sub_21FFBF4(p_endAct, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_593502A & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1248/*"1"*/);
    byte_593502A = 1;
  }
  BlankEarthTargetWarId = this->fields.BlankEarthTargetWarId;
  v6 = 0;
  questAfterAction = 0;
  result = 0;
  if ( BlankEarthTargetWarId <= 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    if ( !byte_593205C )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593205C = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_5932720 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_5932720 = 1;
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
        sub_21FFECC(QuestAfterActionVals, v10);
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
            sub_21FFED4(QuestAfterActionVals);
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

  if ( (byte_5935041 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935041 = 1;
  }
  v4 = QuestAfterAction_TypeInfo;
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, method, v2);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v4);
  this->fields.commandBuf = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.commandBuf, 0, v5, v6, v7, v8, v9, v10);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_5935036 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935036 = 1;
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
  if ( (byte_5935029 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&QuestAfterAction_Command___TypeInfo);
    sub_21FFC50(&QuestAfterAction_Command_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&GrandQuestViewSwitcher_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&ScrTerminalListTop_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_17373/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_21FFC50(&StringLiteral_869/*","*/);
    byte_5935029 = 1;
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
           (const MethodInfo_3831EF4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    if ( !byte_593205C )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593205C = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_5932720 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_5932720 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v10, v11);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
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
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      Master_object = (__int64)TerminalSceneComponent_TypeInfo;
      byte_5931EF0 = 1;
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
      if ( !byte_5932DF7 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932DF7 = 1;
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
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
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
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_493;
      Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 v18,
                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_493;
      v34 = *(_DWORD *)(Master_object + 24);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
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
      if ( !byte_5932DF7 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932DF7 = 1;
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
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
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
                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_object )
        goto LABEL_493;
      Master_object = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                 v21,
                                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_493;
      v27 = *(_DWORD *)(Master_object + 28);
      Master_object = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_object )
        goto LABEL_493;
      Master_object = (__int64)WarMaster__getByEventId((WarMaster_o *)Master_object, v27, 0);
      if ( !Master_object )
        goto LABEL_493;
    }
    v35 = *(_DWORD *)(Master_object + 16);
    if ( !byte_5932DFA )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932DFA = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v28);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v37 = (unsigned __int8)byte_5931EF0;
    v36->static_fields->_WarId_k__BackingField = v35;
    if ( !v37 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
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
  if ( !byte_5935063 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935063 = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
    v39 = TerminalPramsManager_TypeInfo;
  }
  if ( !v39->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_17373/*"afterActionBk"*/, 0) )
  {
    Master_object = (__int64)UnityEngine_PlayerPrefs__GetString_83184936((System_String_o *)StringLiteral_17373/*"afterActionBk"*/, 0);
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
    if ( !byte_5932DF7 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932DF7 = 1;
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
    if ( !byte_5932DF9 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932DF9 = 1;
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
    if ( !*(_DWORD *)(qword_594C050 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C050, v44, v45);
    v51 = System_Boolean__Parse(v48, 0);
    if ( !byte_5935064 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935064 = 1;
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
    if ( !byte_5935065 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935065 = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    v53 = (unsigned __int8)byte_5935066;
    *(_BYTE *)(*(_QWORD *)(Master_object + 184) + 102LL) = v52;
    if ( !v53 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      byte_5935066 = 1;
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
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v54);
      if ( !byte_593205C )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593205C = 1;
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
                (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
        v63 = *(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1);
        if ( v61 )
        {
          if ( !v63 )
            *(__n128 *)&v62 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v59, v60);
          sub_29059E4(0, 0, v62);
        }
        else
        {
          if ( !v63 )
            *(__n128 *)&v62 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v59, v60);
          sub_29059E4(1, 0, v62);
          sub_255F8E8((unsigned int)v57->fields.id, 0);
          v64 = TerminalPramsManager__CheckIsOrdealCallWarClear(v57, 0);
          sub_2905A44(v64, 0);
        }
      }
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  v66 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v65);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
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
  if ( !byte_5935069 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935069 = 1;
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
    if ( !byte_5934CC7 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934CC7 = 1;
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
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v68);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
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
  if ( !byte_5935063 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935063 = 1;
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
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v73);
    if ( !byte_593205C )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593205C = 1;
    }
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v73);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
    }
    v75 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL);
    if ( !byte_5932720 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      Master_object = (__int64)TerminalPramsManager_TypeInfo;
      byte_5932720 = 1;
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
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      *(__n128 *)&v79 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v76, v77);
    v80 = sub_23D8090(0, v79);
    Master_object = sub_2905AA4(0);
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
  if ( (sub_2905994(0, *(long double *)&inited) & 1) != 0 )
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
  v82 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v81);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  Master_object = (__int64)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v81);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
  }
  v83 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 20LL);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    Master_object = (__int64)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
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
    if ( !byte_593506A )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593506A = 1;
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
      if ( !byte_5932ADC )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932ADC = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v84);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v87 = (unsigned __int8)byte_5934D85;
      v86->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !v87 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
        byte_5934D85 = 1;
      }
      if ( !*(&v86->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v86, v10, v84);
        v86 = TerminalPramsManager_TypeInfo;
      }
      v88 = (unsigned __int8)byte_593506A;
      v86->static_fields->_DispState_k__BackingField = 2;
      if ( !v88 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
        byte_593506A = 1;
      }
      if ( !*(&v86->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v86, v10, v84);
        v86 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v86->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_5932DFA )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
        byte_5932DFA = 1;
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
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
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
      v95 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_5932644 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932644 = 1;
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
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        Master_object = (__int64)v184;
        if ( !v184 )
          goto LABEL_493;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v184, 0);
      }
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v96);
      if ( !byte_593506B )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593506B = 1;
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v96);
        v97 = TerminalPramsManager_TypeInfo;
      }
      v97->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17373/*"afterActionBk"*/, 0);
    return;
  }
  v99 = sub_21FFD10(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v99;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.commandBuf, v99, v101, v102, v103, v104, v105, v106);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_493;
  v182 = 0;
  v109 = 0;
  v110 = 0;
  while ( (__int64)v109 < commandBuf[6] )
  {
    v111 = sub_21FFEBC(QuestAfterAction_Command_TypeInfo);
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v111 + 24), (int32_t)v120, v112, v113, v114, v115, v116, v117);
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
      Master_object = (__int64)System_String__Split_75495420(
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
      Master_object = (__int64)System_String__Split_75495420(
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
          if ( !byte_5932644 )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_5932644 = 1;
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
          if ( !byte_5932644 )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_5932644 = 1;
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
                                                       (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
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
        *(const MethodInfo_4433138 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
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
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
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
        sub_21FFED4(Master_object);
      }
    }
LABEL_357:
    v144 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_493;
    Master_object = sub_21FFDA4(v111, *(_QWORD *)(*(_QWORD *)v144 + 64LL));
    if ( !Master_object )
    {
      v181 = sub_21FFEF0(0, v145);
      sub_21FFD90(v181, 0);
    }
    if ( v109 >= v144[6] )
      goto LABEL_494;
    v152 = &v144[2 * v109];
    *((_QWORD *)v152 + 4) = v111;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v152 + 8), v111, v146, v147, v148, v149, v150, v151);
    commandBuf = (int *)*p_commandBuf;
    v110 += 2;
    ++v109;
    if ( !*p_commandBuf )
      goto LABEL_493;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
  if ( !byte_5935063 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935063 = 1;
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
    v162 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v161);
    if ( !byte_593205C )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593205C = 1;
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
      if ( !byte_5932644 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5932644 = 1;
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
        Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v187 && Master_object )
        {
          Master_object = DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &v186,
                            v187->fields.spotId,
                            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (Master_object & 1) == 0 )
            goto LABEL_421;
          if ( v186 )
          {
            klass = (unsigned int)v186[1].klass;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v166 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
            sub_2905AF4(klass, 0, v166);
            goto LABEL_421;
          }
        }
LABEL_493:
        sub_21FFECC(Master_object, v10);
      }
    }
  }
LABEL_421:
  v168 = TerminalPramsManager_TypeInfo;
  if ( (v182 & 1) == 0 )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
    if ( !byte_5932ADC )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932ADC = 1;
    }
    v169 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
      v169 = TerminalPramsManager_TypeInfo;
    }
    v170 = (unsigned __int8)byte_5934D85;
    v169->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !v170 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v169 = TerminalPramsManager_TypeInfo;
      byte_5934D85 = 1;
    }
    if ( !*(&v169->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v169, v10, v107);
      v169 = TerminalPramsManager_TypeInfo;
    }
    v171 = (unsigned __int8)byte_5932644;
    v169->static_fields->_DispState_k__BackingField = 2;
    if ( !v171 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v169 = TerminalPramsManager_TypeInfo;
      byte_5932644 = 1;
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
    if ( !byte_5934CC7 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934CC7 = 1;
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
      if ( !byte_5934CC0 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5934CC0 = 1;
      }
      v174 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v107);
        v174 = TerminalPramsManager_TypeInfo;
      }
      v175 = (unsigned __int8)byte_5934CC7;
      v174->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !v175 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v174 = TerminalPramsManager_TypeInfo;
        byte_5934CC7 = 1;
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
        if ( !byte_5934D85 )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_5934D85 = 1;
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
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
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
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
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
      if ( !byte_5934D85 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5934D85 = 1;
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
  if ( !byte_5931FBA )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5931FBA = 1;
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
  if ( (byte_5935027 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17373/*"afterActionBk"*/);
    byte_5935027 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17373/*"afterActionBk"*/, 0);
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
  if ( (byte_5935054 & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_21FFC50(&Method_System_Collections_Generic_List_Action__Add__);
    byte_5935054 = 1;
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
      sub_21FFECC(this, callback);
    }
    size = pendingVoiceLoadCallbackList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        pendingVoiceLoadCallbackList,
        (Il2CppObject *)callback,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      pendingVoiceLoadCallbackList->fields._size = size + 1;
      v14[4] = (Il2CppClass *)callback;
      sub_21FFBF4(
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

  if ( (byte_5935048 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___91454712);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_Command__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935048 = 1;
  }
  ReservedCommandListBeforeFadeIn_k__BackingField = this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  memset(&v16, 0, sizeof(v16));
  if ( ReservedCommandListBeforeFadeIn_k__BackingField
    && ReservedCommandListBeforeFadeIn_k__BackingField->fields._size >= 1 )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)ReservedCommandListBeforeFadeIn_k__BackingField,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___91454712);
    if ( !v4 )
      sub_21FFECC(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v4,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
        if ( !v7 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v16,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
          return;
        }
        current = v16.fields._current;
        if ( !v16.fields._current )
          sub_21FFECC(v7, v8);
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
            sub_21FFECC(0, v13);
          System_Collections_Generic_List_object___Remove(
            v14,
            current,
            (const MethodInfo_445101C *)Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
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
    sub_21FFECC(0, v3);
  max_length = BlankEarthTutorialCommand->max_length;
  v6 = BlankEarthTutorialCommand;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(BlankEarthTutorialCommand);
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
  if ( (byte_593502C & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593502C = 1;
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
          sub_21FFED4(command);
        param = command[1].klass;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_21FFECC(command, method);
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

  if ( (byte_5935037 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    byte_5935037 = 1;
  }
  v5 = sub_21FFEBC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)commandEnumerable, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_5935055 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_Action___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Action___ctor___91411832);
    sub_21FFC50(&System_Collections_Generic_List_Action__TypeInfo);
    byte_5935055 = 1;
  }
  pendingVoiceLoadCallbackList = this->fields.pendingVoiceLoadCallbackList;
  memset(&v13, 0, sizeof(v13));
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)pendingVoiceLoadCallbackList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_Action___) )
  {
    v4 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pendingVoiceLoadCallbackList;
    v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Action__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v5,
      v4,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_Action___ctor___91411832);
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
      sub_21FFECC(v6, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      v5,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
    v11 = 0;
    v12 = &v13;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      ActionExtensions__Call((System_Action_o *)v13.fields._current, 0);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
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

  if ( (byte_593502D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_21FFC50(&QuestAfterAction_Command___TypeInfo);
    sub_21FFC50(&QuestAfterAction_Command_TypeInfo);
    byte_593502D = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v7 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v8 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v8 )
    {
      sub_2237B54(Method_System_Array_Empty_QuestAfterAction_Command___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8(v6);
    if ( !*(_DWORD *)(v9 + 228) )
      *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v9, v4, v5);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_2237AF8(v6);
    return **(QuestAfterAction_Command_array ***)(v10 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_21FFD10(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_21FFECC(IsNullOrEmpty, v4);
    }
    v11 = (unsigned int *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v12 = 0;
      v13 = (MissionNaviTransitionBoardItem_o *)(IsNullOrEmpty + 32);
      v14 = 1;
      do
      {
        v15 = sub_21FFEBC(QuestAfterAction_Command_TypeInfo);
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
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 24), (int32_t)v23, v16, v17, v18, v19, v20, v21);
        IsNullOrEmpty = sub_21FFDA4(v15, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v32 = sub_21FFEF0(0, v24);
          sub_21FFD90(v32, 0);
        }
        if ( v12 >= v11[6] )
LABEL_24:
          sub_21FFED4(IsNullOrEmpty);
        v13->klass = (MissionNaviTransitionBoardItem_c *)v15;
        sub_21FFBF4(v13, v15, v25, v26, v27, v28, v29, v30);
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

  if ( (byte_5935043 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_string___);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935043 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v12 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v12 )
          return v12;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v15 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
          if ( !byte_593205C )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_593205C = 1;
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
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v17 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_string___) )
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
    sub_21FFECC(Instance, v6);
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

  if ( (byte_5935042 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_string___);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935042 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v12 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v12 )
          return v12;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v15 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v14);
          if ( !byte_593205C )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            byte_593205C = 1;
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
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v17 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_string___) )
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
    sub_21FFECC(Instance, v6);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  QuestAfterAction___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  struct QuestAfterAction___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__129_0; // x21
  Il2CppObject *v22; // x22
  struct QuestAfterAction___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  QuestAfterAction___c_c *v34; // x8
  System_Collections_Generic_List_object__o *v35; // x21
  struct QuestAfterAction___c_StaticFields *v36; // x9
  System_Func_object__object__o *_9__129_1; // x22
  Il2CppObject *v38; // x23
  struct QuestAfterAction___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  QuestAfterAction_o *v47; // x0
  const MethodInfo *v48; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v49; // x0
  const MethodInfo *v50; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v51; // x0

  if ( (byte_5935046 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_21FFC50(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&EventTutorialMaster_OpenType___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB);
    sub_21FFC50(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_0__);
    sub_21FFC50(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_1__);
    sub_21FFC50(&QuestAfterAction___c_TypeInfo);
    byte_5935046 = 1;
  }
  v3 = (System_Array_o *)sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB;
  v5 = v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  v6 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v6, 0);
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)v5, v9, v10, v11, v12, v13, v14);
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v6,
                             0);
  v18 = QuestAfterAction___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v16, v17);
    v18 = QuestAfterAction___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__129_0 = (System_Func_object__object__o *)static_fields->__9__129_0;
  if ( !_9__129_0 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v16, v17);
      static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__129_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__129_0,
      v22,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_0__,
      0);
    v23 = QuestAfterAction___c_TypeInfo->static_fields;
    v23->__9__129_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__129_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__129_0, (int32_t)_9__129_0, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v19,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__129_0,
                                                               (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v31 = System_Linq_Enumerable__ToList_object_(
          v30,
          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
  v34 = QuestAfterAction___c_TypeInfo;
  v35 = (System_Collections_Generic_List_object__o *)v31;
  if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v32, v33);
    v34 = QuestAfterAction___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__129_1 = (System_Func_object__object__o *)v36->__9__129_1;
  if ( !_9__129_1 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v32, v33);
      v36 = QuestAfterAction___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__129_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__129_1,
      v38,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__129_1__,
      0);
    v39 = QuestAfterAction___c_TypeInfo->static_fields;
    v39->__9__129_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__129_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v39->__9__129_1, (int32_t)_9__129_1, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v19,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__129_1,
                                                               (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                        v46,
                                                        (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !v35 )
LABEL_18:
    sub_21FFECC(v7, v8);
  System_Collections_Generic_List_object___AddRange(
    v35,
    v7,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
  v47 = (QuestAfterAction_o *)System_Collections_Generic_List_object___ToArray(
                                v35,
                                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  v49 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v47,
                                                                                (System_String_array *)v47,
                                                                                v48);
  v51 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v49, v50);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v51,
                                             (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
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
        return dword_ED05B4[commandId - 1000];
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
        const MethodInfo_393FF1C *method)
{
  __int64 v10; // x1
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v12 )
    return 0;
  if ( !MapGameObject )
    sub_21FFECC(v12, v13);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_3883A78 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_593503D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    byte_593503D = 1;
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
      sub_21FFECC(this, *(_QWORD *)&comType);
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

  if ( (byte_593502E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_21FFC50(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593502E = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_3EDC704 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
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
        sub_21FFED4(Instance);
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
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_21FFECC(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


QuestAfterAction_Command_array *QuestAfterAction__GetRaidUiSetupCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *EventID; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Array_o *v7; // x0
  System_RuntimeFieldHandle_o v8; // x1
  System_Array_o *v9; // x21
  __int64 v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  TerminalPramsManager_c *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x2
  struct TerminalSceneComponent_o *v21; // x8
  struct ScrTerminalMap_o *v22; // x8
  int32_t *p_currentMapId; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  TerminalPramsManager_c *v26; // x0
  __int64 v27; // x2
  int v28; // w8
  TerminalPramsManager_c *v29; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  QuestAfterAction___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  struct QuestAfterAction___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__128_0; // x21
  Il2CppObject *v37; // x22
  struct QuestAfterAction___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  QuestAfterAction_o *v46; // x0
  const MethodInfo *v47; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v48; // x0
  const MethodInfo *v49; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v50; // x0

  if ( (byte_5935045 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_21FFC50(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_21FFC50(&EventTutorialMaster_OpenType___TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_21FFC50(&Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__128_0__);
    sub_21FFC50(&QuestAfterAction___c_TypeInfo);
    byte_5935045 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
    v7 = (System_Array_o *)sub_21FFD10(EventTutorialMaster_OpenType___TypeInfo, 3);
    v8.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v9 = v7;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v7, v8, 0);
    v10 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v10, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
      v13 = TerminalPramsManager_TypeInfo;
    }
    EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v13->static_fields->_WarId_k__BackingField, 0);
    if ( v10 )
    {
      *(_QWORD *)(v10 + 24) = v9;
      *(_DWORD *)(v10 + 16) = (_DWORD)EventID;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 24), (int32_t)v9, v14, v15, v16, v17, v18, v19);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v20);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      EventID = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v20);
        EventID = TerminalSceneComponent_TypeInfo;
      }
      v21 = EventID->static_fields->mInstance;
      if ( v21 )
      {
        v22 = v21->fields.mTerminalMap;
        if ( v22 )
        {
          p_currentMapId = &v22->fields.currentMapId;
          goto LABEL_40;
        }
      }
    }
LABEL_47:
    sub_21FFECC(EventID, method);
  }
  v10 = sub_21FFEBC(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v10, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24, v25);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24, v25);
    v26 = TerminalPramsManager_TypeInfo;
  }
  EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v26->static_fields->_WarId_k__BackingField, 0);
  if ( !v10 )
    goto LABEL_47;
  v28 = (unsigned __int8)byte_5932644;
  *(_DWORD *)(v10 + 16) = (_DWORD)EventID;
  *(_DWORD *)(v10 + 20) = 18;
  if ( !v28 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v27);
    v29 = TerminalPramsManager_TypeInfo;
  }
  p_currentMapId = &v29->static_fields->_WarId_k__BackingField;
LABEL_40:
  *(_DWORD *)(v10 + 40) = *p_currentMapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v10,
                             0);
  v33 = QuestAfterAction___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !*(&QuestAfterAction___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo, v31, v32);
    v33 = QuestAfterAction___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__128_0 = (System_Func_object__object__o *)static_fields->__9__128_0;
  if ( !_9__128_0 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v31, v32);
      static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__128_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__128_0, v37, Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__128_0__, 0);
    v38 = QuestAfterAction___c_TypeInfo->static_fields;
    v38->__9__128_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__128_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->__9__128_0, (int32_t)_9__128_0, v39, v40, v41, v42, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v34,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__128_0,
                                                               (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v46 = (QuestAfterAction_o *)System_Linq_Enumerable__ToArray_object_(
                                v45,
                                (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
  v48 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v46,
                                                                                (System_String_array *)v46,
                                                                                v47);
  v50 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v48, v49);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v50,
                                             (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_593503B & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestAfterAction__getState__);
    byte_593503B = 1;
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

  if ( (byte_5935057 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_5935057 = 1;
  }
  result = 1;
  if ( !this->fields.isAfterActionVoiceLoadRequested || !QuestAfterAction__HasVoiceToLoad(this, method) )
  {
    if ( !this->fields.isTutorialVoiceLoadRequested )
      return 0;
    v3 = QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, method);
    if ( !System_Linq_Enumerable__Any_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v3,
            (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
      return 0;
  }
  return result;
}


bool QuestAfterAction__HasVoiceToLoad(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v3; // x0

  if ( (byte_5935056 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_5935056 = 1;
  }
  if ( this->fields.voiceLoadedRevision != this->fields.voiceRegisterRevision )
    return 1;
  v3 = QuestAfterAction__BuildPendingVoiceInfoList(this, method);
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
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

  if ( (byte_5935028 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_21FFC50(&Method_CStateManager_QuestAfterAction__add__);
    sub_21FFC50(&CStateManager_QuestAfterAction__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_21FFC50(&QuestAfterAction_StateInstant_TypeInfo);
    sub_21FFC50(&QuestAfterAction_StateMain_TypeInfo);
    sub_21FFC50(&QuestAfterAction_StateNone_TypeInfo);
    byte_5935028 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_21FFEBC(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3E505AC *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (QuestAfterAction_StateNone_o *)sub_21FFEBC(QuestAfterAction_StateNone_TypeInfo);
    QuestAfterAction_StateNone___ctor(v13, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (QuestAfterAction_StateMain_o *)sub_21FFEBC(QuestAfterAction_StateMain_TypeInfo);
    QuestAfterAction_StateMain___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_21FFEBC(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_21FFEBC(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_3E5065C *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.commandBuf, 0, v22, v23, v24, v25, v26, v27);
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
                                                                                (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v28,
                                                                                  (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v30 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v30;
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v29 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v29,
        v28,
        (Il2CppObject *)v31,
        (const MethodInfo_3F88BE4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_21FFBF4(
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
    sub_21FFECC(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.lastDispSpot, 0, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v45;
  sub_21FFBF4(
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
  sub_21FFBF4(
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

  if ( (byte_5935044 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935044 = 1;
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
    if ( !byte_5934CC7 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934CC7 = 1;
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
      if ( !byte_593205C )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593205C = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
        v12 = TerminalPramsManager_TypeInfo;
      }
      if ( !Instance )
        sub_21FFECC(v12, v9);
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
    sub_21FFECC(this, command);
  v5 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource)
    || (this = (QuestAfterAction_o *)System_Int32__Parse((System_String_o *)this->fields.invalidMapGimmickIdList, 0),
        ((__int64)v5->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0) )
  {
    sub_21FFED4(this);
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

  if ( (byte_5935031 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    byte_5935031 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_3F88DEC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_3F88B58 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_21FFECC(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_21FFED4(this);
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
    sub_21FFECC(this, *(_QWORD *)&spotId);
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
      sub_21FFECC(this, isFadeTransition);
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( !(_DWORD)m_CancellationTokenSource )
        sub_21FFED4(this);
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

  if ( (byte_5935040 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935040 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.subRootGimmickP->klass;
  if ( !klass || (v3 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_21FFECC(v3, method);
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
        sub_21FFECC(cmd, method);
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
        sub_21FFED4(actionCommand);
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

  if ( (byte_593503B & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestAfterAction__getState__);
    byte_593503B = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_593503B & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestAfterAction__getState__);
    byte_593503B = 1;
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
      sub_21FFECC(RaidUiSetupCommand, v6);
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
      sub_21FFED4(RaidUiSetupCommand);
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

  if ( (byte_5935047 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    this = (QuestAfterAction_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5935047 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !command )
    goto LABEL_20;
  if ( command->fields.id != 560 || System_String__IsNullOrEmpty(command->fields.param, 0) )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_20:
    sub_21FFECC(this, command);
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
      sub_21FFED4(0);
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
               (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___) )
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
      sub_21FFED4(1);
    if ( !*(_QWORD *)i )
      sub_21FFECC(1, method);
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
          sub_21FFED4(RaidUiSetupCommand);
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
    sub_21FFECC(RaidUiSetupCommand, v4);
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

  if ( (byte_5935032 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_21FFC50(&EventMissionActionInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935032 = 1;
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
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_63;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v6->fields.shopId,
                 (const MethodInfo_3EDD388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v16 = Entity;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_63;
        v17 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v16[1].monitor,
                (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v17 || !EventEntity__IsEventPeriod((EventEntity_o *)v17, 0, 0) )
          goto LABEL_62;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v53 = v52;
        v52.fields._list = 0;
        *(_QWORD *)&v52.fields._index = &v53;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v53,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v20 )
            break;
          current = v53.fields._current;
          if ( !v53.fields._current )
            sub_21FFECC(v20, v21);
          if ( LODWORD(v53.fields._current[1].monitor) == 4 )
          {
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
            sub_2905B50(2, 0, v23);
            TerminalSceneComponent__CreateTransitionInfo(v8, v6, 0);
            TransitionInfo_k__BackingField = v8->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_21FFECC(0, v25);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_21FFBF4(
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
              sub_21FFECC(v34, v35);
            v36->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        sub_1FF4A5C(&v52);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_63;
    v9 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v12 = (EventMissionActionInfo_o *)sub_21FFEBC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_52580824(v12, v11, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v9,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v12 = (EventMissionActionInfo_o *)sub_21FFEBC(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v12, v38, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v9,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_63;
    v39 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v6->fields.missionId,
            (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v39 )
    {
      v40 = v39;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v9,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_63;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v40[1].monitor),
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_63;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
        if ( !byte_593506D )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_593506D = 1;
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
            sub_21FFBF4(
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
        sub_21FFECC(Master_object, v4);
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


void QuestAfterAction__LoadVoice_43004180(
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
  System_String_o *VoiceAssetName_49754652; // x19
  Il2CppObject *v32; // x20
  System_Action_o *v33; // x22

  while ( 1 )
  {
    if ( (byte_593504B & 1) == 0 )
    {
      sub_21FFC50(&System_Action_TypeInfo);
      sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_21FFC50(&Method_QuestAfterAction___c__DisplayClass150_0__LoadVoice_b__0__);
      sub_21FFC50(&QuestAfterAction___c__DisplayClass150_0_TypeInfo);
      byte_593504B = 1;
    }
    v7 = sub_21FFEBC(QuestAfterAction___c__DisplayClass150_0_TypeInfo);
    QuestAfterAction___c__DisplayClass150_0___ctor((QuestAfterAction___c__DisplayClass150_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
    *(_QWORD *)(v7 + 24) = svtVInfos;
    v16 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 24);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)svtVInfos, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v7 + 32) = endAct;
    v23 = (System_Action_o **)(v7 + 32);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)endAct, v24, v25, v26, v27, v28, v29);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 24),
            (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v23, 0);
        return;
      }
LABEL_17:
      sub_21FFECC(Instance, v9);
    }
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v16;
    endAct = *v23;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  items = (int32_t)Instance->fields._items;
  *(_DWORD *)(v7 + 40) = items;
  VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652(items, 0);
  v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass150_0__LoadVoice_b__0__, 0);
  if ( !v32 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v32, VoiceAssetName_49754652, v33, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_593503F & 1) == 0 )
  {
    sub_21FFC50(&SrcSpotBasePrefab_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593503F = 1;
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

  if ( (byte_5935059 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    byte_5935059 = 1;
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
            (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
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

  if ( (byte_5935039 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    byte_5935039 = 1;
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
    sub_21FFECC(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = 0;
  this->fields.isKeepingMainStateButFinished = 0;
  this->fields._IsAfterFadeInPlay_k__BackingField = 0;
  sub_21FFBF4(
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

  if ( (byte_5935034 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_QuestAfterAction___c__DisplayClass93_0__Play_b__0__);
    sub_21FFC50(&QuestAfterAction___c__DisplayClass93_0_TypeInfo);
    byte_5935034 = 1;
  }
  v5 = sub_21FFEBC(QuestAfterAction___c__DisplayClass93_0_TypeInfo);
  QuestAfterAction___c__DisplayClass93_0___ctor((QuestAfterAction___c__DisplayClass93_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass93_0__Play_b__0__, 0);
  this->fields.endAct = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, (int32_t)v14, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_5935035 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__0__);
    sub_21FFC50(&Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__1__);
    sub_21FFC50(&QuestAfterAction___c__DisplayClass94_0_TypeInfo);
    byte_5935035 = 1;
  }
  v7 = sub_21FFEBC(QuestAfterAction___c__DisplayClass94_0_TypeInfo);
  QuestAfterAction___c__DisplayClass94_0___ctor((QuestAfterAction___c__DisplayClass94_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v22, v23);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.temporaryCommandBuf,
    (int32_t)CommandBuf,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_21FFECC(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v31;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass94_0__PlaySpecifiedAction_b__1__,
    0);
  v40 = QuestAfterAction__WaitWhileMainStateFinished(this, v38, v39);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v40, 0);
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

  if ( (byte_5935038 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__97_0__);
    byte_5935038 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.temporaryCommandBuf,
      (int32_t)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__97_0__, 0);
    this->fields.endAct = v11;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_593503E & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593503E = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v8);
  if ( !byte_5932ADC )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932ADC = 1;
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
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v12 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v8);
    v12 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v12->fields.subRootGimmickP->klass;
  if ( !klass || (v12 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_21FFECC(v12, v7);
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
  if ( (byte_593505C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__ContainsKey__);
    byte_593505C = 1;
  }
  if ( !overwriteVoiceIndex )
  {
    svtVoices = this->fields.svtVoices;
    if ( !svtVoices )
LABEL_8:
      sub_21FFECC(svtVoices, *(_QWORD *)&baseIndex);
    while ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
              (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
              v5,
              (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__ContainsKey__) )
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

  if ( (byte_5935051 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventTutorialMaster_EventTutorialArgs__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5935051 = 1;
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
      v10 = sub_2237E2C(
              tutorialArgsEnumerable,
              System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__TypeInfo,
              0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_EventTutorialMaster_EventTutorialArgs__o *, _QWORD))v10)(
            tutorialArgsEnumerable,
            *(_QWORD *)(v10 + 8));
    v31 = v11;
    if ( !v11 )
      sub_21FFECC(0, v12);
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
        v17 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
      if ( (v18 & 1) == 0 )
        break;
      if ( !v31 )
        sub_21FFECC(v18, v19);
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
        v24 = sub_2237E2C(
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
        v30 = sub_2237E2C(v31, System_IDisposable_TypeInfo, 0);
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
  if ( (byte_5935030 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5935030 = 1;
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
                sub_21FFED4(this);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_21FFECC(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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

  if ( (byte_593503C & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestAfterAction__setState__);
    byte_593503C = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3E506E4 *)Method_CStateManager_QuestAfterAction__setState__);
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

  if ( (byte_593504D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__set_Item__);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_593504D = 1;
  }
  voiceInfo = 0;
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, command, *(_QWORD *)&commandIndex);
  if ( QuestAfterAction__TryCreateVoiceInfo(command, &voiceInfo, *(const MethodInfo **)&commandIndex) )
  {
    v10 = QuestAfterAction__ResolveVoiceRegisterIndex(this, commandIndex, overwriteVoiceIndex, v9);
    if ( !this->fields.svtVoices )
      sub_21FFECC(v10, v11);
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices,
      v10,
      (Il2CppObject *)voiceInfo,
      (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__set_Item__);
    voiceRegisterRevision = this->fields.voiceRegisterRevision;
    this->fields.isLoadedVoice = 0;
    this->fields.voiceRegisterRevision = voiceRegisterRevision + 1;
  }
}


void QuestAfterAction__SetupCommandPreprocess_43005128(
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

  if ( (byte_593504E & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_593504E = 1;
  }
  if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, actionVals, method);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
  if ( !CommandBuf )
    sub_21FFECC(0, v6);
  max_length = CommandBuf->max_length;
  v9 = CommandBuf;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_21FFED4(CommandBuf);
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

  if ( (byte_593504F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_0__);
    sub_21FFC50(&Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_1__);
    sub_21FFC50(&QuestAfterAction___c_TypeInfo);
    byte_593504F = 1;
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
        _9__154_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
        System_Func_object__object____ctor(
          _9__154_0,
          v11,
          Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_0__,
          0);
        v12 = QuestAfterAction___c_TypeInfo->static_fields;
        v12->__9__154_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__154_0;
        sub_21FFBF4(
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
              (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
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
        _9__154_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
        System_Func_object__object____ctor(
          _9__154_1,
          v26,
          Method_QuestAfterAction___c__SetupTutorialCommandPreprocess_b__154_1__,
          0);
        v27 = QuestAfterAction___c_TypeInfo->static_fields;
        v27->__9__154_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__154_1;
        sub_21FFBF4(
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
                                                                   (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
      v35 = System_Linq_Enumerable__Concat_object_(
              v23,
              v34,
              (const MethodInfo_3842BB4 *)Method_System_Linq_Enumerable_Concat_string___);
      v38 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                     v35,
                                     (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
      if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v36, v37);
      CommandBuf = QuestAfterAction__GenerateCommandBuf(v38, v36);
      if ( !CommandBuf )
        sub_21FFECC(0, v40);
      max_length = CommandBuf->max_length;
      v43 = CommandBuf;
      if ( (int)max_length >= 1 )
      {
        v44 = 0;
        do
        {
          if ( v44 >= (unsigned int)max_length )
            sub_21FFED4(CommandBuf);
          QuestAfterAction__SetupTutorialCommandPreprocess_43005960(this, v43->m_Items[v44], v41);
          LODWORD(max_length) = v43->max_length;
          ++v44;
        }
        while ( (__int64)v44 < (int)max_length );
      }
    }
  }
}


void QuestAfterAction__SetupTutorialCommandPreprocess_43005960(
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
  if ( (byte_5935050 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Add__);
    this = (QuestAfterAction_o *)sub_21FFC50(&QuestAfterAction_VoiceInfo_TypeInfo);
    byte_5935050 = 1;
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
            (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_string__Contains__) )
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
            (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_string__Add__);
          v7 = svtId;
          v8 = (QuestAfterAction_VoiceInfo_o *)sub_21FFEBC(QuestAfterAction_VoiceInfo_TypeInfo);
          QuestAfterAction_VoiceInfo___ctor(v8, v7, v6, 0);
          this = v4[33];
          if ( this )
          {
            System_Collections_Generic_Dictionary_object__object___set_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)this,
              (Il2CppObject *)command->fields.param,
              (Il2CppObject *)v8,
              (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__set_Item__);
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
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
                }
                else
                {
                  v18 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v18 + 32) = v8;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)v8, v9, v10, v11, v12, v13, v14);
                }
                return;
              }
            }
          }
        }
LABEL_17:
        sub_21FFECC(this, command);
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

  if ( (byte_5935058 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction___c__DisplayClass167_0__StartLoadVoicePipeline_b__0__);
    sub_21FFC50(&QuestAfterAction___c__DisplayClass167_0_TypeInfo);
    byte_5935058 = 1;
  }
  v3 = sub_21FFEBC(QuestAfterAction___c__DisplayClass167_0_TypeInfo);
  QuestAfterAction___c__DisplayClass167_0___ctor((QuestAfterAction___c__DisplayClass167_0_o *)v3, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !this->fields.isLoadingVoice )
  {
    if ( this->fields.isAfterActionVoiceLoadRequested )
    {
      v14 = (System_Collections_Generic_List_object__o *)QuestAfterAction__BuildPendingVoiceInfoList(this, v12);
    }
    else
    {
      v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    }
    if ( this->fields.isTutorialVoiceLoadRequested )
    {
      v17 = (System_Collections_Generic_List_object__o *)QuestAfterAction__BuildPendingTutorialVoiceInfoList(this, v13);
    }
    else
    {
      v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    }
    if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v15, v16);
    v18 = QuestAfterAction__BuildMergedPendingVoiceInfoList(
            (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v14,
            (System_Collections_Generic_IEnumerable_QuestAfterAction_VoiceInfo__o *)v17,
            v16);
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
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
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v22, v23, v24, v25, v26, v27, v28);
      v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v3,
        Method_QuestAfterAction___c__DisplayClass167_0__StartLoadVoicePipeline_b__0__,
        0);
      QuestAfterAction__LoadVoice_43004180(this, v18, v29, v30);
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

  if ( (byte_593505B & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_VoiceInfo_TypeInfo);
    byte_593505B = 1;
  }
  svtId = 0;
  *voiceInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)voiceInfo, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( !command )
    sub_21FFECC(v10, v11);
  if ( command->fields.id == 800 )
  {
    AvailableRandomVoice = QuestAfterAction_Command__GetAvailableRandomVoice(command, &svtId, 0);
    if ( AvailableRandomVoice )
    {
      v13 = AvailableRandomVoice;
      v14 = svtId;
      v15 = (QuestAfterAction_VoiceInfo_o *)sub_21FFEBC(QuestAfterAction_VoiceInfo_TypeInfo);
      QuestAfterAction_VoiceInfo___ctor(v15, v14, v13, 0);
      *voiceInfo = v15;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)voiceInfo, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  if ( (byte_5935049 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935049 = 1;
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
    sub_21FFED4(command);
  v6 = System_Int32__Parse((System_String_o *)command[1].klass, 0);
  v7 = SLODWORD(v3->fields.param) >= 2 && System_Int32__Parse((System_String_o *)v3[1].monitor, 0) > 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
    sub_21FFECC(command, method);
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

  if ( (byte_593502B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593502B = 1;
  }
  entity = 0;
  *questAfterAction = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)questAfterAction,
    0,
    *(System_String_o **)&questId,
    *(System_String_o **)&phase,
    (int32_t)method,
    v5,
    v6,
    v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
  if ( !byte_5935063 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935063 = 1;
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
                                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !MasterData_object )
      goto LABEL_36;
    v15 = QuestPhaseDetailAddMaster__GetAfterAction(MasterData_object, questId, phase, 0);
    if ( !v15 )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !MasterData_object )
        goto LABEL_36;
      v15 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)MasterData_object, questId, phase, 0);
    }
    *questAfterAction = v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)questAfterAction, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  }
  v22 = *questAfterAction;
  if ( !*questAfterAction )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v12);
    if ( !byte_5935066 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5935066 = 1;
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
                                                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MasterData_object )
      {
        MasterData_object = (QuestPhaseDetailAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                             &entity,
                                                             questId,
                                                             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)MasterData_object & 1) == 0 )
          goto LABEL_32;
        if ( entity )
        {
          klass = entity[6].klass;
          *questAfterAction = (System_String_array *)klass;
          sub_21FFBF4(
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
    sub_21FFECC(MasterData_object, v11);
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
  if ( (byte_593504A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_593504A = 1;
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
    sub_21FFED4(command);
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
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
    sub_21FFECC(command, isQuick);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
  v43 = v41;
  v41.fields._list = 0;
  *(_QWORD *)&v41.fields._index = &v43;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__) )
  {
    if ( v9 )
    {
      if ( !v43.fields._current )
        sub_21FFECC(0, v15);
      goto LABEL_35;
    }
    if ( !v43.fields._current )
      sub_21FFECC(0, v15);
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
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
  eventRaidUIControl = mTitleInfo->fields.eventRaidUIControl;
  if ( !eventRaidUIControl )
    return 0;
  command = (QuestAfterAction_Command_o *)eventRaidUIControl->fields.mEventInfoGroups;
  if ( !command )
    goto LABEL_77;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v42 = v41;
  v17 = 0;
  v18 = 0;
  v41.fields._list = 0;
  *(_QWORD *)&v41.fields._index = &v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
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
        sub_21FFECC(v24, klass_low);
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
          sub_21FFECC(v27, klass_low);
        static_fields = v27->static_fields;
        nonFrameInBossHpUiIndex = static_fields->nonFrameInBossHpUiIndex;
        if ( !nonFrameInBossHpUiIndex
          || (items = nonFrameInBossHpUiIndex->fields._items,
              klass_low = LODWORD(v23[23].klass),
              v31 = Method_System_Collections_Generic_List_int__Add__,
              ++nonFrameInBossHpUiIndex->fields._version,
              !items) )
        {
          sub_21FFECC(nonFrameInBossHpUiIndex, klass_low);
        }
        size = nonFrameInBossHpUiIndex->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            nonFrameInBossHpUiIndex,
            klass_low,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
          sub_21FFECC(RaidBossHpForceHideGroupIndexList, klass_low);
        }
        v36 = RaidBossHpForceHideGroupIndexList->fields._size;
        if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            RaidBossHpForceHideGroupIndexList,
            v17,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          RaidBossHpForceHideGroupIndexList->fields._size = v36 + 1;
          v34->m_Items[v36] = v17;
        }
        if ( v10 )
        {
          if ( !current )
            sub_21FFECC(RaidBossHpForceHideGroupIndexList, klass_low);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
          if ( !gameObject )
            sub_21FFECC(0, v38);
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
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  return v18;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_5935033 & 1) == 0 )
  {
    sub_21FFC50(&Method_CStateManager_QuestAfterAction__update__);
    byte_5935033 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3E506C4 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_593503A & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction__WaitWhileMainStateFinished_d__100_TypeInfo);
    byte_593503A = 1;
  }
  v5 = sub_21FFEBC(QuestAfterAction__WaitWhileMainStateFinished_d__100_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__100___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__100_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)action, v14, v15, v16, v17, v18, v19);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.endAct, 0, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.temporaryCommandBuf, 0, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_593502F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_593502F = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_21FFECC(0, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_49754652; // x20
  struct System_Collections_Generic_List_Action__o *pendingVoiceLoadCallbackList; // x8
  int32_t size; // w2
  int v13; // w9
  struct System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *tutorialSvtVoiceList; // x8
  int32_t v15; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_593504C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor___91454760);
    sub_21FFC50(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593504C = 1;
  }
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices;
  memset(&v18, 0, sizeof(v18));
  if ( !svtVoices )
    goto LABEL_24;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             svtVoices,
             (const MethodInfo_3F68B0C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor___91454760);
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v18.fields._current )
      sub_21FFECC(v6, v7);
    VoiceAssetName_49754652 = ServantVoiceEntity__getVoiceAssetName_49754652((int32_t)v18.fields._current[1].klass, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v8, v9);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_49754652, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtVoices,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.loadedVoiceSvtIdSet;
  if ( !svtVoices )
    goto LABEL_24;
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)svtVoices,
    (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
          (const MethodInfo_4286DE4 *)Method_System_Collections_Generic_HashSet_string__Clear__),
        (svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.tutorialVoiceInfoByParam) == 0)
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)svtVoices,
          (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__Clear__),
        (svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.loadedTutorialVoiceSvtIdSet) == 0) )
  {
LABEL_24:
    sub_21FFECC(svtVoices, method);
  }
  System_Collections_Generic_HashSet_int___Clear(
    (System_Collections_Generic_HashSet_int__o *)svtVoices,
    (const MethodInfo_4280908 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
  sub_21FFBF4(
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

  if ( (byte_593506E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor___91439360);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&System_Random_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_593506E = 1;
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
    sub_21FFECC(param, v6);
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
            sub_21FFED4(v21);
          return System_String__Concat_75481624(
                   *((System_String_o **)v23 + 5),
                   (System_String_o *)StringLiteral_16714/*"_"*/,
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
  param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !param )
    goto LABEL_42;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)param,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v11,
    v9,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_string___ctor___91439360);
  result = 0;
  v12 = (System_Random_o *)sub_21FFEBC(System_Random_TypeInfo);
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
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
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
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6, v17);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
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
      (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
  param = System_String__Concat_75481624(
            *((System_String_o **)v16 + 5),
            (System_String_o *)StringLiteral_16714/*"_"*/,
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

  if ( (byte_5935070 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5935070 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_21FFECC(Instance, v7);
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
      sub_21FFECC(v4, str);
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
  if ( (byte_593506F & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_593506F = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0)) == 0 )
      sub_21FFECC(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_75481624(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16714/*"_"*/,
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(screenCollider, v5);
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
  if ( (byte_5935080 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935080 = 1;
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
    sub_21FFECC(0, v7);
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

  if ( (byte_5935076 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__0__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__1__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
    byte_5935076 = 1;
  }
  v9 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 24) = this;
  *(_DWORD *)(v9 + 16) = fadeEndDispType;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
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
    sub_21FFED4(param);
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
                          (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
  *(_QWORD *)(v9 + 32) = MapComponent_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)MapComponent_object, v23, v24, v25, v26, v27, v28);
  v31 = *(UnityEngine_Object_o **)(v9 + 32);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( !UnityEngine_Object__op_Equality(v31, 0, 0) )
  {
    v32 = *(srcLineSprite_o **)(v9 + 32);
    v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
      sub_21FFECC(param, v11);
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
    sub_21FFECC(0, v7);
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
  if ( (byte_5935075 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5935075 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_21FFED4(this);
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
        (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_43418956(
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
    sub_21FFECC(this, method);
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
  const MethodInfo_45B5018 *v231; // x2
  float v232; // s10
  float v233; // s9
  float v234; // s11
  MapCamera_o *v235; // x20
  System_Action_o *v236; // x21
  MapCamera_o *v237; // x0
  float v238; // s0 OVERLAPPED
  float v239; // s1
  float v240; // s2
  float v241; // s3
  int32_t v242; // w1
  __int64 v243; // x9
  __int64 v244; // x23
  float v245; // s0
  int v246; // w8
  PlayMakerFSM_o *v247; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v249; // x1
  __int64 v250; // x2
  long double v251; // q0
  __int64 v252; // x2
  __int64 v253; // x8
  QuestBoardListViewManager_o *v254; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v255; // x8
  System_Action_o *_9__16_22; // x22
  Il2CppObject *v257; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v258; // x0
  System_String_o *v259; // x2
  System_String_o *v260; // x3
  int32_t v261; // w4
  int32_t v262; // w5
  bool v263; // w6
  bool v264; // w7
  __int64 v265; // x1
  __int64 v266; // x2
  long double v267; // q0
  __int64 v268; // x9
  float v269; // s0
  int v270; // w8
  __int64 v271; // x9
  __int64 v272; // x23
  float v273; // s0
  int v274; // w8
  __int64 v275; // x2
  long double v276; // q0
  __int64 v277; // x23
  float v278; // s0
  float v279; // s8
  __int64 v280; // x1
  __int64 v281; // x2
  int32_t v282; // w22
  long double v283; // q0
  ScrTerminalMap_o *v284; // x24
  float v285; // s0
  float v286; // s9
  float v287; // s0
  const MethodInfo_45B5018 *v288; // x2
  float v289; // s10
  float v290; // s9
  float v291; // s11
  int v292; // w8
  MapCamera_o *v293; // x20
  float v294; // s0
  System_Nullable_float__o v295; // x0
  float v296; // s0
  System_Nullable_Vector3__o v297; // x1 OVERLAPPED
  System_Nullable_float__o v298; // x3
  MapCamera_o *v299; // x0
  __int64 v300; // x20
  System_String_o *v301; // x2
  System_String_o *v302; // x3
  int32_t v303; // w4
  int32_t v304; // w5
  bool v305; // w6
  bool v306; // w7
  __int64 v307; // x23
  unsigned int v308; // w21
  Il2CppObject *v309; // x0
  __int64 *v310; // x24
  System_String_o *v311; // x2
  System_String_o *v312; // x3
  int32_t v313; // w4
  int32_t v314; // w5
  bool v315; // w6
  bool v316; // w7
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v318; // x22
  System_String_o *v319; // x2
  System_String_o *v320; // x3
  int32_t v321; // w4
  int32_t v322; // w5
  bool v323; // w6
  bool v324; // w7
  const MethodInfo *v325; // x2
  __int64 v326; // x1
  __int64 v327; // x2
  long double v328; // q0
  long double v329; // q0
  __int64 v330; // x8
  NetworkManager_ResultCallbackFunc_o *v331; // x19
  __int64 v332; // x1
  __int64 v333; // x2
  Il2CppObject *Request_object; // x19
  long double v335; // q0
  int32_t v336; // w20
  System_String_o *param; // x21
  System_Reflection_MethodBase_o *v338; // x0
  __int64 v339; // x21
  int v340; // w22
  __int64 v341; // x1
  __int64 v342; // x2
  int32_t v343; // w21
  long double v344; // q0
  int32_t v345; // w1
  bool v346; // w2
  bool v347; // w3
  __int64 v348; // x22
  float v349; // s8
  int v350; // w23
  int32_t v351; // w21
  System_String_o *v352; // x20
  System_String_array *v353; // x23
  int v354; // w8
  System_String_o **v355; // x8
  System_String_o *v356; // x20
  System_String_array *v357; // x23
  int v358; // w8
  System_String_o **v359; // x8
  __int64 v360; // x8
  __int64 v361; // x22
  bool v362; // w23
  __int64 v363; // x23
  System_String_o *v364; // x2
  System_String_o *v365; // x3
  int32_t v366; // w4
  int32_t v367; // w5
  bool v368; // w6
  bool v369; // w7
  __int64 v370; // x20
  QuestAfterAction_o *v371; // x22
  Il2CppObject *v372; // x0
  __int64 *v373; // x19
  System_String_o *v374; // x2
  System_String_o *v375; // x3
  int32_t v376; // w4
  int32_t v377; // w5
  bool v378; // w6
  bool v379; // w7
  __int64 v380; // x1
  __int64 v381; // x2
  UnityEngine_Object_o *v382; // x21
  SrcSpotBasePrefab_o *v383; // x21
  System_Action_o *v384; // x22
  System_String_o *v385; // x2
  System_String_o *v386; // x3
  int32_t v387; // w4
  int32_t v388; // w5
  bool v389; // w6
  bool v390; // w7
  __int64 v391; // x1
  MissionNaviTransitionBoardItem_o *v392; // x0
  _BOOL4 v393; // w23
  QuestAfterAction_o *v394; // x22
  __int64 v395; // x1
  __int64 v396; // x2
  UnityEngine_Object_o *v397; // x21
  intptr_t v398; // x8
  QuestAfterAction_o *v399; // x22
  __int64 v400; // x1
  __int64 v401; // x2
  UnityEngine_Object_o *v402; // x21
  intptr_t v403; // x8
  SrcSpotBasePrefab_o *v404; // x0
  int32_t v405; // w1
  _BOOL4 v406; // w23
  QuestAfterAction_o *v407; // x22
  __int64 v408; // x1
  __int64 v409; // x2
  UnityEngine_Object_o *v410; // x21
  intptr_t v411; // x8
  __int64 v412; // x22
  __int64 v413; // x1
  __int64 v414; // x2
  int32_t v415; // w21
  long double v416; // q0
  bool v417; // w23
  __int64 v418; // x8
  int v419; // w9
  TerminalSceneComponent_c *v420; // x0
  __int64 v421; // x8
  __int64 v422; // x8
  __int64 v423; // x22
  int v424; // w23
  __int64 v425; // x1
  __int64 v426; // x2
  long double v427; // q0
  bool v428; // w21
  __int64 v429; // x2
  __int64 v430; // x8
  __int64 v431; // x21
  int32_t v432; // w20
  __int64 v433; // x8
  __int64 v434; // x21
  int32_t v435; // w0
  int32_t v436; // w20
  int32_t v437; // w22
  __int64 v438; // x21
  int32_t v439; // w20
  int32_t v440; // w22
  __int64 v441; // x1
  __int64 v442; // x2
  Il2CppObject *MapComponent_object; // x22
  __int64 v444; // x2
  long double v445; // q0
  __int64 v446; // x1
  __int64 v447; // x2
  Il2CppObject *v448; // x20
  ScrTerminalMap_o *v449; // x23
  ScrTerminalMap_o *v450; // x20
  UnityEngine_GameObject_o *v451; // x22
  System_Action_o *v452; // x23
  __int64 v453; // x22
  QuestAfterAction_o *v454; // x21
  __int64 v455; // x1
  __int64 v456; // x2
  Il2CppObject *v457; // x21
  QuestAfterAction_o *v458; // x23
  __int64 v459; // x1
  __int64 v460; // x2
  UnityEngine_Object_o *MapGameObject; // x23
  float v462; // s9
  float v463; // s8
  float v464; // s10
  __int64 v465; // x21
  float v466; // s0
  QuestAfterAction_o *v467; // x20
  float v468; // s8
  __int64 v469; // x1
  __int64 v470; // x2
  Il2CppObject *v471; // x20
  __int64 v472; // x1
  __int64 v473; // x2
  long double v474; // q0
  float v475; // s8
  ScrTerminalMap_o *v476; // x22
  float v477; // s0
  float v478; // s9
  float v479; // s0
  float v480; // s9
  float v481; // s10
  float v482; // s11
  QuestAfterAction_o *v483; // x21
  __int64 v484; // x1
  __int64 v485; // x2
  QuestAfterAction_o *v486; // x23
  int32_t v487; // w2
  QuestAfterAction_o *v488; // x0
  int32_t v489; // w1
  __int64 v490; // x8
  __int64 v491; // x22
  int32_t v492; // w21
  bool v493; // w22
  __int64 v494; // x1
  __int64 v495; // x2
  unsigned int v496; // w21
  long double v497; // q0
  __int64 v498; // x1
  __int64 v499; // x2
  QuestAfterAction_o *v500; // x20
  __int64 v501; // x1
  __int64 v502; // x2
  Il2CppObject *v503; // x20
  __int64 v504; // x1
  __int64 v505; // x2
  long double v506; // q0
  __int64 v507; // x8
  __int64 v508; // x22
  int32_t v509; // w21
  bool v510; // w22
  __int64 v511; // x8
  __int64 v512; // x22
  int32_t v513; // w21
  bool v514; // w22
  __int64 v515; // x21
  QuestAfterAction_o *v516; // x20
  __int64 v517; // x1
  __int64 v518; // x2
  Il2CppObject *v519; // x20
  UIWidget_o *v520; // x20
  __int64 v521; // x23
  System_String_o *v522; // x2
  System_String_o *v523; // x3
  int32_t v524; // w4
  int32_t v525; // w5
  bool v526; // w6
  bool v527; // w7
  __int64 v528; // x20
  __int64 v529; // x8
  __int64 v530; // x21
  int32_t v531; // w22
  bool v532; // w26
  bool v533; // w27
  __int64 v534; // x20
  System_String_o *v535; // x2
  System_String_o *v536; // x3
  int32_t v537; // w4
  int32_t v538; // w5
  bool v539; // w6
  bool v540; // w7
  __int64 v541; // x8
  QuestAfterAction_o *v542; // x22
  Il2CppObject *v543; // x0
  System_String_o *v544; // x2
  System_String_o *v545; // x3
  int32_t v546; // w4
  int32_t v547; // w5
  bool v548; // w6
  bool v549; // w7
  __int64 v550; // x1
  __int64 v551; // x2
  UnityEngine_Object_o *v552; // x19
  MapGimmickComponent_o *v553; // x19
  System_Action_o *v554; // x21
  __int64 v555; // x1
  __int64 v556; // x2
  long double v557; // q0
  __int64 v558; // x2
  TerminalSceneComponent_o *v559; // x19
  __int64 v560; // x20
  System_String_o *v561; // x2
  System_String_o *v562; // x3
  int32_t v563; // w4
  int32_t v564; // w5
  bool v565; // w6
  bool v566; // w7
  System_String_array *v567; // x0
  __int64 *v568; // x21
  System_String_o *v569; // x2
  System_String_o *v570; // x3
  int32_t v571; // w4
  int32_t v572; // w5
  bool v573; // w6
  bool v574; // w7
  __int64 v575; // x8
  __int64 v576; // x9
  QuestAfterAction_o *v577; // x21
  Il2CppObject *v578; // x0
  System_String_o *v579; // x2
  System_String_o *v580; // x3
  int32_t v581; // w4
  int32_t v582; // w5
  bool v583; // w6
  bool v584; // w7
  __int64 v585; // x1
  __int64 v586; // x2
  UnityEngine_Object_o *v587; // x19
  MapGimmickComponent_o *v588; // x19
  System_Action_o *v589; // x0
  System_Action_o *v590; // x21
  intptr_t *v591; // x8
  QuestAfterAction_o *v592; // x21
  __int64 v593; // x1
  __int64 v594; // x2
  QuestAfterAction_o *v595; // x23
  __int64 v596; // x1
  __int64 v597; // x2
  UnityEngine_Object_o *v598; // x23
  __int64 v599; // x1
  __int64 v600; // x2
  float v601; // s0
  float v602; // s11
  int32_t v603; // w23
  System_String_o *v604; // x2
  System_String_o *v605; // x3
  int32_t v606; // w4
  int32_t v607; // w5
  bool v608; // w6
  bool v609; // w7
  __int64 v610; // x8
  QuestAfterAction_o *v611; // x22
  Il2CppObject *v612; // x0
  __int64 v613; // x19
  System_String_o *v614; // x2
  System_String_o *v615; // x3
  int32_t v616; // w4
  int32_t v617; // w5
  bool v618; // w6
  bool v619; // w7
  __int64 v620; // x1
  __int64 v621; // x2
  UnityEngine_Object_o *v622; // x21
  bool v623; // w0
  bool v624; // w22
  MapGimmickComponent_o *v625; // x0
  int32_t v626; // w1
  float v627; // s0
  float v628; // s0
  QuestAfterAction_o *v629; // x24
  __int64 v630; // x1
  __int64 v631; // x2
  UnityEngine_Object_o *v632; // x24
  __int64 v633; // x1
  __int64 v634; // x2
  float v635; // s8
  float v636; // s9
  float v637; // s10
  __int64 v638; // x1
  __int64 v639; // x2
  QuestAfterAction_o *v640; // x24
  __int64 v641; // x1
  __int64 v642; // x2
  UnityEngine_Object_o *v643; // x24
  __int64 v644; // x1
  __int64 v645; // x2
  float v646; // s10
  float v647; // s8
  float v648; // s9
  const MethodInfo_45B5018 *v649; // x2
  System_String_o *v650; // x24
  float v651; // s0
  QuestAfterAction_o *v652; // x24
  __int64 v653; // x1
  __int64 v654; // x2
  UnityEngine_Object_o *v655; // x24
  const MethodInfo_45B5018 *v656; // x2
  float v657; // s10
  float v658; // s8
  float v659; // s9
  int v660; // w8
  MapCamera_o *v661; // x20
  float v662; // s0
  System_Nullable_float__o p_size; // x0
  __int64 v664; // x20
  System_String_o *v665; // x2
  System_String_o *v666; // x3
  int32_t v667; // w4
  int32_t v668; // w5
  bool v669; // w6
  bool v670; // w7
  __int64 v671; // x8
  QuestAfterAction_o *v672; // x22
  Il2CppObject *v673; // x0
  System_String_o *v674; // x2
  System_String_o *v675; // x3
  int32_t v676; // w4
  int32_t v677; // w5
  bool v678; // w6
  bool v679; // w7
  __int64 v680; // x1
  __int64 v681; // x2
  UnityEngine_Object_o *v682; // x19
  ModelLineComponent_o *v683; // x19
  __int64 v684; // x20
  System_String_o *v685; // x2
  System_String_o *v686; // x3
  int32_t v687; // w4
  int32_t v688; // w5
  bool v689; // w6
  bool v690; // w7
  __int64 v691; // x8
  QuestAfterAction_o *v692; // x22
  Il2CppObject *v693; // x0
  System_String_o *v694; // x2
  System_String_o *v695; // x3
  int32_t v696; // w4
  int32_t v697; // w5
  bool v698; // w6
  bool v699; // w7
  __int64 v700; // x1
  __int64 v701; // x2
  UnityEngine_Object_o *v702; // x19
  SrcSpotBasePrefab_o *v703; // x19
  __int64 v704; // x20
  System_String_o *v705; // x2
  System_String_o *v706; // x3
  int32_t v707; // w4
  int32_t v708; // w5
  bool v709; // w6
  bool v710; // w7
  __int64 v711; // x8
  QuestAfterAction_o *v712; // x22
  Il2CppObject *v713; // x0
  System_String_o *v714; // x2
  System_String_o *v715; // x3
  int32_t v716; // w4
  int32_t v717; // w5
  bool v718; // w6
  bool v719; // w7
  __int64 v720; // x1
  __int64 v721; // x2
  UnityEngine_Object_o *v722; // x19
  ModelLineComponent_o *v723; // x19
  QuestAfterAction_o *v724; // x22
  __int64 v725; // x1
  __int64 v726; // x2
  UnityEngine_Object_o *v727; // x21
  intptr_t v728; // x8
  QuestAfterAction_o *v729; // x22
  __int64 v730; // x1
  __int64 v731; // x2
  intptr_t m_CachedPtr; // x8
  __int64 v733; // x22
  QuestAfterAction_o *v734; // x21
  __int64 v735; // x1
  __int64 v736; // x2
  Il2CppObject *v737; // x21
  System_Action_c *v738; // x8
  System_Action_o *v739; // x22
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v741; // x22
  __int64 v742; // x1
  __int64 v743; // x2
  UnityEngine_Object_o *v744; // x21
  int32_t v745; // w1
  Il2CppObject *v746; // x3
  __int64 v747; // x8
  __int64 v748; // x8
  __int64 v749; // x22
  unsigned __int64 v750; // x24
  __int64 v751; // x8
  __int64 v752; // x21
  const MethodInfo *v753; // x3
  __int64 v754; // x8
  __int64 v755; // x8
  QuestAfterAction_TitleInfoControlCallback_o *v756; // x20
  System_Action_o *v757; // x22
  const MethodInfo *v758; // x3
  int32_t v759; // s0
  int v760; // s1
  int v761; // s2
  System_Action_c *v762; // x0
  System_Action_o *v763; // x19
  __int64 v764; // x1
  __int64 v765; // x2
  long double v766; // q0
  __int64 v767; // x1
  __int64 v768; // x2
  long double v769; // q0
  SceneJumpInfo_o *v770; // x21
  __int64 v771; // x1
  __int64 v772; // x2
  long double v773; // q0
  System_String_o *v774; // x19
  Il2CppObject *v775; // x21
  System_Action_o *v776; // x23
  System_String_o *v777; // x19
  Il2CppObject *v778; // x21
  System_Action_o *v779; // x23
  float v780; // s0 OVERLAPPED
  float v781; // s1
  float v782; // s2
  MapCamera_o *v783; // x20
  __int64 v784; // x2
  __int64 v785; // x8
  UnityEngine_Object_o *v786; // x22
  int v787; // w25
  int v788; // w26
  __int64 v789; // x1
  __int64 v790; // x1
  __int64 v791; // x2
  Il2CppObject *v792; // x21
  _DWORD *v793; // x8
  QuestAfterAction_StateMain_c *v794; // x8
  int v795; // w0
  __int64 v796; // x1
  __int64 v797; // x2
  Il2CppObject *v798; // x21
  _DWORD *v799; // x8
  __int64 v800; // x1
  __int64 v801; // x2
  Il2CppObject *v802; // x21
  _DWORD *v803; // x8
  Il2CppObject *v804; // x0
  System_String_o *v805; // x2
  System_String_o *v806; // x3
  int32_t v807; // w4
  int32_t v808; // w5
  bool v809; // w6
  bool v810; // w7
  __int64 v811; // x1
  __int64 v812; // x2
  UnityEngine_Object_o *v813; // x22
  MapGimmickComponent_o *v814; // x21
  System_Action_c *v815; // x0
  System_Action_o *v816; // x0
  System_Action_o *v817; // x22
  Il2CppObject *v818; // x0
  MapGimmickComponent_o **v819; // x22
  System_String_o *v820; // x2
  System_String_o *v821; // x3
  int32_t v822; // w4
  int32_t v823; // w5
  bool v824; // w6
  bool v825; // w7
  __int64 v826; // x1
  __int64 v827; // x2
  UnityEngine_Object_o *v828; // x24
  MapGimmickComponent_o *v829; // x8
  MapGimmickComponent_o *v830; // x21
  System_Action_o *v831; // x0
  System_Action_o *v832; // x2
  System_String_o *v833; // x20
  System_Action_o *v834; // x21
  float v835; // s3
  MapCamera_o *v836; // x20
  float v837; // s10
  float v838; // s9
  float v839; // s8
  System_String_o *v840; // x24
  __int64 v841; // x20
  System_String_o *v842; // x2
  System_String_o *v843; // x3
  int32_t v844; // w4
  int32_t v845; // w5
  bool v846; // w6
  bool v847; // w7
  __int64 v848; // x8
  QuestAfterAction_o *v849; // x22
  Il2CppObject *v850; // x0
  System_String_o *v851; // x2
  System_String_o *v852; // x3
  int32_t v853; // w4
  int32_t v854; // w5
  bool v855; // w6
  bool v856; // w7
  __int64 v857; // x1
  __int64 v858; // x2
  UnityEngine_Object_o *v859; // x19
  srcLineSprite_o *v860; // x19
  System_Action_o *v861; // x21
  float v862; // s0
  srcLineSprite_o *v863; // x0
  int32_t v864; // w1
  __int64 v865; // x20
  System_String_o *v866; // x2
  System_String_o *v867; // x3
  int32_t v868; // w4
  int32_t v869; // w5
  bool v870; // w6
  bool v871; // w7
  __int64 v872; // x8
  QuestAfterAction_o *v873; // x22
  Il2CppObject *v874; // x0
  System_String_o *v875; // x2
  System_String_o *v876; // x3
  int32_t v877; // w4
  int32_t v878; // w5
  bool v879; // w6
  bool v880; // w7
  __int64 v881; // x1
  __int64 v882; // x2
  UnityEngine_Object_o *v883; // x19
  srcLineSprite_o *v884; // x19
  __int64 v885; // x20
  System_String_o *v886; // x2
  System_String_o *v887; // x3
  int32_t v888; // w4
  int32_t v889; // w5
  bool v890; // w6
  bool v891; // w7
  __int64 v892; // x8
  QuestAfterAction_o *v893; // x22
  Il2CppObject *v894; // x0
  System_String_o *v895; // x2
  System_String_o *v896; // x3
  int32_t v897; // w4
  int32_t v898; // w5
  bool v899; // w6
  bool v900; // w7
  __int64 v901; // x1
  __int64 v902; // x2
  UnityEngine_Object_o *v903; // x19
  srcLineSprite_o *v904; // x19
  __int64 v905; // x1
  __int64 v906; // x2
  UnityEngine_Object_o *v907; // x21
  __int64 v908; // x1
  __int64 v909; // x2
  UnityEngine_Object_o *v910; // x21
  int v911; // w9
  __int64 v912; // x1
  __int64 v913; // x2
  UnityEngine_Object_o *v914; // x21
  ScrTerminalMap_o *v915; // x21
  System_Action_o *v916; // x23
  System_String_o *v917; // x23
  System_Action_o *v918; // x20
  MapGimmickComponent_o *v919; // x0
  float v920; // s0 OVERLAPPED
  float v921; // s1
  float v922; // s2
  float v923; // s3
  int32_t v924; // w1
  System_Action_o *v925; // x2
  __int64 v926; // x8
  int v927; // w8
  float v928; // s0 OVERLAPPED
  float v929; // s1
  float v930; // s2
  System_Nullable_Vector3__o v931; // x0
  MapCamera_o *v932; // x20
  System_Action_o *v933; // x21
  System_Action_o *v934; // x2
  int v935; // w8
  float v936; // s0
  System_Nullable_float__o v937; // x0
  MapCamera_o *v938; // x20
  ScrTerminalMap_o *v939; // x22
  float v940; // s0
  float v941; // s9
  float v942; // s0
  float x; // s9
  float y; // s10
  float z; // s11
  int32_t v946; // w21
  System_Action_o *v947; // x22
  MapCamera_o *v948; // x20
  float v949; // s0
  System_Nullable_float__o v950; // x0
  System_Action_o *v951; // x21
  float v952; // s0 OVERLAPPED
  float v953; // s1
  float v954; // s2
  System_Nullable_Vector3__o v955; // x0
  float v956; // s0
  System_Nullable_float__o v957; // x0
  System_Nullable_Vector3__o v958; // x1 OVERLAPPED
  MapCamera_o *v959; // x0
  System_Nullable_float__o v960; // x3
  float v961; // s0
  MapCamera_o *v962; // x20
  float v963; // s0
  System_Nullable_float__o v964; // x0
  int32_t v965; // w4
  MapCamera_o *v966; // x20
  float v967; // s0
  System_Nullable_float__o v968; // x0
  __int64 v969; // x1
  __int64 v970; // x2
  long double v971; // q0
  __int64 v972; // x1
  __int64 v973; // x2
  long double v974; // q0
  System_Collections_IEnumerable_o **monitor; // x8
  __int64 v976; // x1
  __int64 v977; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v978; // x23
  QuestAfterAction_StateMain___c_c *v979; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__16_35; // x24
  Il2CppObject *v982; // x25
  struct QuestAfterAction_StateMain___c_StaticFields *v983; // x0
  System_String_o *v984; // x2
  System_String_o *v985; // x3
  int32_t v986; // w4
  int32_t v987; // w5
  bool v988; // w6
  bool v989; // w7
  __int64 v990; // x2
  long double v991; // q0
  char v992; // w23
  __int64 v993; // x2
  long double v994; // q0
  _QWORD *v995; // x8
  int32_t v996; // w24
  __int64 v997; // x1
  __int64 v998; // x2
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppObject *v1001; // x25
  _BOOL8 v1002; // x0
  __int64 v1003; // x1
  __int64 v1004; // x2
  TerminalPramsManager_c *v1005; // x0
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  _BOOL8 v1007; // x0
  __int64 v1008; // x1
  TitleInfoEventItemControl_o *v1009; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v1011; // x1
  __int64 v1012; // x0
  __int64 v1013; // x1
  int32_t messageFontSize; // [xsp+8h] [xbp-168h]
  int32_t v1015; // [xsp+48h] [xbp-128h]
  float sec; // [xsp+4Ch] [xbp-124h]
  bool seca; // [xsp+4Ch] [xbp-124h]
  System_Collections_Generic_List_Enumerator_object__o v1018; // [xsp+50h] [xbp-120h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v1020; // [xsp+70h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v1021; // [xsp+90h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+A8h] [xbp-C8h] BYREF
  int32_t v1023; // [xsp+B4h] [xbp-BCh] BYREF
  int32_t v1024[2]; // [xsp+B8h] [xbp-B8h] BYREF
  __int64 v1025; // [xsp+C0h] [xbp-B0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-A8h] BYREF
  Il2CppObject *entity; // [xsp+D0h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+D8h] [xbp-98h] BYREF
  bool isQuickUpdate[4]; // [xsp+ECh] [xbp-84h] BYREF
  System_Nullable_Vector3__o v1030; // 0:x0.16
  System_Nullable_Vector3__o v1031; // 0:x0.16
  System_Nullable_Vector3__o v1032; // 0:x0.16
  System_Nullable_Vector3__o v1033; // 0:x0.16
  System_Nullable_Vector3__o v1034; // 0:x0.16
  UnityEngine_Vector3_o v1035; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1036; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1037; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1038; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1040; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1041; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1042; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v1043; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1044; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1045; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v1047; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1048; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1049; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v1050; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1051; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1052; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v1053; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1054; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1055; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1056; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1057; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1058; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935073 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_21FFC50(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_21FFC50(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_21FFC50(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_21FFC50(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_21FFC50(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_21FFC50(&StringLiteral_87/*"\r\n"*/);
    sub_21FFC50(&StringLiteral_1456/*"30101"*/);
    sub_21FFC50(&StringLiteral_11273/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_21FFC50(&StringLiteral_1457/*"30102"*/);
    sub_21FFC50(&StringLiteral_1383/*"10703"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_3425/*"CAPTER WAIT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_20753/*"gevINFOBAR_BACK"*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_5935073 = 1;
  }
  isQuickUpdate[0] = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)result = 0;
  entity = 0;
  *(_QWORD *)v1024 = 0;
  v1025 = 0;
  v1023 = 0;
  value = 0;
  memset(&v1021, 0, sizeof(v1021));
  memset(&v1020, 0, sizeof(v1020));
  v5 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_1197;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (__int64 *)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)that, v15, v16, v17, v18, v19, v20);
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
    sub_21FFECC(updated, v7);
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
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !v25 )
    goto LABEL_1197;
  updated = BlankEarthQuestAfterAction__UpdateAnim(v25, v7, v23, v26, isQuickUpdate, v27);
  if ( (updated & 1) == 0 )
  {
    if ( !*v14 )
      goto LABEL_1197;
    v28 = *(BlankEarthQuestAfterAction_o **)(*v14 + 48);
    v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
              v160 = (TerminalSceneComponent_o *)sub_2918590(0, *(long double *)&inited);
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
            v57 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            System_Object___ctor((Il2CppObject *)v57, 0);
            if ( !v57 )
              goto LABEL_1197;
            *(_QWORD *)(v57 + 24) = v5;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v57 + 24), v5, v58, v59, v60, v61, v62, v63);
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
                v72 = sub_2918908(0, v69);
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
                  updated = sub_2918590(0, v73);
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
                updated = sub_2918590(0, v73);
                if ( !updated )
                  goto LABEL_1197;
                v78 = *(ScrTerminalListTop_o **)(updated + 256);
                v79 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
              v412 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v415 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                v417 = *(int *)(v412 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v412 + 40), 0) > 0;
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v416 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v413, v414);
                updated = sub_2918590(0, v416);
                if ( !updated )
                  goto LABEL_1197;
                v747 = *(_QWORD *)(updated + 256);
                if ( !v747 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(v747 + 136);
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)TitleInfoControl__GetEnableEventUiObjectList((TitleInfoControl_o *)updated, 1, 0);
                if ( !updated )
                  goto LABEL_1197;
                v748 = *(_QWORD *)(updated + 24);
                v749 = updated;
                if ( (int)v748 < 1 )
                  goto LABEL_945;
                v750 = 0;
                while ( 1 )
                {
                  if ( v750 >= (unsigned int)v748 )
                    goto LABEL_1143;
                  updated = *(_QWORD *)(v749 + 32 + 8 * v750);
                  if ( v417 )
                    break;
                  if ( !updated )
                    goto LABEL_1197;
                  v751 = *(_QWORD *)(updated + 64);
                  if ( !v751 )
                    goto LABEL_1197;
                  if ( v415 == *(_DWORD *)(v751 + 16) )
                    goto LABEL_803;
LABEL_805:
                  LODWORD(v748) = *(_DWORD *)(v749 + 24);
                  if ( (__int64)++v750 >= (int)v748 )
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
                  v158 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v158,
                    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
                }
                v157->klass = (MissionNaviTransitionBoardItem_c *)v158;
                sub_21FFBF4(v157, (int32_t)v158, v106, v107, v108, v109, v110, v111);
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 224);
                if ( !updated )
                  goto LABEL_1197;
                sub_1FEBF38(updated, v23, Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__);
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
            v418 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 904LL);
            if ( !v418 )
              goto LABEL_1197;
            v419 = *(_DWORD *)(v418 + 28) + 1;
            v420 = TerminalSceneComponent_TypeInfo;
            *(_DWORD *)(v418 + 24) = 0;
            *(_DWORD *)(v418 + 28) = v419;
            if ( !*(&v420->_2.cctor_finished + 1) )
              inited = j_il2cpp_runtime_class_init_0(v420, v7, v31);
            updated = sub_2918590(0, *(long double *)&inited);
            if ( !updated )
              goto LABEL_1197;
            v421 = *(_QWORD *)(updated + 256);
            if ( !v421 )
              goto LABEL_1197;
            v422 = *(_QWORD *)(v421 + 136);
            if ( !v422 )
              goto LABEL_1197;
            updated = *(_QWORD *)(v422 + 328);
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
            v423 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1143;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( (*(_DWORD *)(v423 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v424 = updated;
            v1015 = System_Int32__Parse(*(System_String_o **)(v423 + 40), 0);
            if ( *(int *)(v423 + 24) >= 3 )
            {
              v428 = System_Int32__Parse(*(System_String_o **)(v423 + 48), 0) > 0;
              if ( *(int *)(v423 + 24) >= 4 )
              {
                seca = System_Int32__Parse(*(System_String_o **)(v423 + 56), 0) > 0;
                goto LABEL_900;
              }
            }
            else
            {
              v428 = 0;
            }
            seca = 0;
LABEL_900:
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v427 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v425, v426);
            updated = sub_2918590(0, v427);
            if ( !updated )
              goto LABEL_1197;
            v785 = *(_QWORD *)(updated + 256);
            if ( !v785 )
              goto LABEL_1197;
            v786 = *(UnityEngine_Object_o **)(v785 + 136);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v784);
            updated = UnityEngine_Object__op_Equality(v786, 0, 0);
            if ( (updated & 1) != 0 )
              goto LABEL_21;
            if ( !v786 )
              goto LABEL_1197;
            updated = (__int64)v786[14].monitor;
            if ( !updated )
              goto LABEL_1197;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v1018,
              (System_Collections_Generic_List_object__o *)updated,
              (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
            v787 = 0;
            v1021 = v1018;
            v1018.fields._list = 0;
            *(_QWORD *)&v1018.fields._index = &v1021;
LABEL_910:
            v788 = v787;
            while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v1021,
                      (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__) )
            {
              if ( v428 )
              {
                if ( !v1021.fields._current )
                  sub_21FFECC(0, v789);
LABEL_917:
                v787 = 1;
                TitleInfoEventRaidStatusComponent__SetEntryAnim(
                  (TitleInfoEventRaidStatusComponent_o *)v1021.fields._current,
                  0);
                goto LABEL_910;
              }
              if ( !v1021.fields._current )
                sub_21FFECC(0, v789);
              if ( v424 == LODWORD(v1021.fields._current[9].monitor) )
                goto LABEL_917;
            }
            sub_1FF4ABC(&v1018);
            if ( (v787 & 1) != 0 )
            {
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v971 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v969, v970);
              if ( sub_2918958(0, v971) )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v974 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v972, v973);
                updated = sub_2918958(0, v974);
                if ( !updated )
                  goto LABEL_1197;
                *(_BYTE *)(updated + 64) = 1;
              }
            }
            monitor = (System_Collections_IEnumerable_o **)v786[15].monitor;
            if ( monitor )
            {
              v978 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                            monitor[9],
                                                                            (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
              v979 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( !*(&QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, v976, v977);
                v979 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              static_fields = v979->static_fields;
              _9__16_35 = (System_Func_object__bool__o *)static_fields->__9__16_35;
              if ( !_9__16_35 )
              {
                if ( !*(&v979->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v979, v976, v977);
                  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v982 = (Il2CppObject *)static_fields->__9;
                _9__16_35 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__16_35,
                  v982,
                  Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
                  0);
                v983 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v983->__9__16_35 = (struct System_Func_TitleInfoEventRaidBossComponent__bool__o *)_9__16_35;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v983->__9__16_35,
                  (int32_t)_9__16_35,
                  v984,
                  v985,
                  v986,
                  v987,
                  v988,
                  v989);
              }
              updated = System_Linq_Enumerable__Any_object__58935448(
                          v978,
                          (System_Func_TSource__bool__o *)_9__16_35,
                          (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
              v992 = updated;
              if ( (updated & 1) != 0 && ((v788 ^ 1) & 1) != 0 )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v991 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v990);
                updated = sub_2918958(0, v991);
                if ( updated )
                {
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v994 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v993);
                  updated = sub_2918958(0, v994);
                  if ( !updated )
                    goto LABEL_1197;
                  *(_BYTE *)(updated + 64) = 1;
                }
              }
              v995 = v786[15].monitor;
              if ( !v995 )
                goto LABEL_1197;
              updated = v995[9];
              if ( !updated )
                goto LABEL_1197;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v1018,
                (System_Collections_Generic_List_object__o *)updated,
                (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
              v1020 = v1018;
              v996 = 0;
              v1018.fields._list = 0;
              *(_QWORD *)&v1018.fields._index = &v1020;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v1020,
                        (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
              {
                current = v1020.fields._current;
                if ( v1020.fields._current
                  && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
                      v1020.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
                {
                  if ( (TitleInfoEventRaidBossComponent_c *)v1020.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
                    v1001 = v1020.fields._current;
                  else
                    v1001 = 0;
                }
                else
                {
                  v1001 = 0;
                }
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v997, v998);
                v1002 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v1001, 0, 0);
                if ( v1002 )
                {
                  if ( seca )
                    goto LABEL_1186;
                  if ( !v1001 )
                    sub_21FFECC(v1002, v1003);
                  if ( v1015 == LODWORD(v1001[23].klass) )
                  {
LABEL_1186:
                    v1005 = TerminalPramsManager_TypeInfo;
                    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v1003, v1004);
                      v1005 = TerminalPramsManager_TypeInfo;
                    }
                    RaidBossHpForceHideGroupIndexList = v1005->static_fields->RaidBossHpForceHideGroupIndexList;
                    if ( !RaidBossHpForceHideGroupIndexList )
                      sub_21FFECC(0, v1003);
                    v1007 = System_Collections_Generic_List_int___Remove(
                              RaidBossHpForceHideGroupIndexList,
                              v996,
                              (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
                    if ( (v992 & 1) != 0 )
                    {
                      v1009 = (TitleInfoEventItemControl_o *)v786[15].monitor;
                      if ( !v1009 )
                        sub_21FFECC(0, v1008);
                      TitleInfoEventItemControl__SetEventGroupIdx(v1009, v996, 1, 0);
                    }
                    else
                    {
                      if ( !current )
                        sub_21FFECC(v1007, v1008);
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
                      if ( !gameObject )
                        sub_21FFECC(0, v1011);
                      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                      if ( !v1001 )
                        sub_21FFECC(v1012, v1013);
                      TitleInfoEventRaidBossComponent__PlayFrameInBoss((TitleInfoEventRaidBossComponent_o *)v1001, 0);
                    }
                  }
                }
                ++v996;
              }
              sub_1FF4AEC(&v1018);
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
          v339 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1143;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( (*(_DWORD *)(v339 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_1143;
          v340 = updated;
          v343 = System_Int32__Parse(*(System_String_o **)(v339 + 40), 0);
          if ( v340 == 2 )
          {
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v344 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v341, v342);
            updated = sub_2918590(0, v344);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 256);
            if ( !updated )
              goto LABEL_1197;
            v345 = v343;
            v346 = 1;
          }
          else
          {
            if ( v340 != 1 )
            {
              if ( v340 )
                goto LABEL_945;
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v344 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v341, v342);
              updated = sub_2918590(0, v344);
              if ( !updated )
                goto LABEL_1197;
              updated = *(_QWORD *)(updated + 256);
              if ( !updated )
                goto LABEL_1197;
              v345 = v343;
              v346 = 1;
              v347 = 1;
LABEL_875:
              ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v345, v346, v347, 0);
              goto LABEL_945;
            }
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v344 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v341, v342);
            updated = sub_2918590(0, v344);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 256);
            if ( !updated )
              goto LABEL_1197;
            v345 = v343;
            v346 = 0;
          }
          v347 = 0;
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
                v148 = System_String__Concat_75438412((System_String_o *)StringLiteral_11273/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v146, v147);
                v149 = LocalizationManager__Get(v148, 0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v151 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
            v360 = *(_QWORD *)(updated + 24);
            v361 = updated;
            if ( v360 )
            {
              if ( !(_DWORD)v360 )
                goto LABEL_1143;
              v362 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) < 1;
            }
            else
            {
              v362 = 1;
            }
            v752 = sub_21FFEBC(QuestAfterAction_TitleInfoControlParam_TypeInfo);
            System_Object___ctor((Il2CppObject *)v752, 0);
            v754 = *(_QWORD *)(v361 + 24);
            if ( (int)v754 >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v361 + 40), 0);
              v754 = *(_QWORD *)(v361 + 24);
              if ( (int)updated >= 1 )
              {
                if ( (v754 & 0xFFFFFFFE) == 0 )
                  goto LABEL_1143;
                updated = System_Int32__Parse(*(System_String_o **)(v361 + 40), 0);
                if ( !v752 )
                  goto LABEL_1197;
                *(_DWORD *)(v752 + 16) = updated;
                v754 = *(_QWORD *)(v361 + 24);
              }
            }
            if ( (int)v754 > 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v361 + 48), 0);
              if ( (int)updated >= 1 )
              {
                if ( *(_DWORD *)(v361 + 24) <= 2u )
                  goto LABEL_1143;
                updated = System_Int32__Parse(*(System_String_o **)(v361 + 48), 0);
                if ( !v752 )
                  goto LABEL_1197;
                *(_DWORD *)(v752 + 20) = updated;
              }
            }
            v755 = *v14;
            if ( v362 )
            {
              if ( !v755 )
                goto LABEL_1197;
              v756 = *(QuestAfterAction_TitleInfoControlCallback_o **)(v755 + 40);
              v757 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(v757, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !v756 )
                goto LABEL_1197;
              QuestAfterAction_TitleInfoControlCallback__Start(
                v756,
                (QuestAfterAction_TitleInfoControlParam_o *)v752,
                v757,
                v758);
              return;
            }
            if ( !v755 )
              goto LABEL_1197;
            updated = *(_QWORD *)(v755 + 40);
            if ( !updated )
              goto LABEL_1197;
            QuestAfterAction_TitleInfoControlCallback__Start(
              (QuestAfterAction_TitleInfoControlCallback_o *)updated,
              (QuestAfterAction_TitleInfoControlParam_o *)v752,
              0,
              v753);
            goto LABEL_945;
          }
          if ( id > 602 )
          {
            if ( id == 603 )
            {
              v356 = (System_String_o *)StringLiteral_1/*""*/;
              updated = sub_21FFD10(string___TypeInfo, 1);
              if ( !updated )
                goto LABEL_1197;
              v357 = (System_String_array *)updated;
              sub_1FEB274(updated, 0, StringLiteral_87/*"\r\n"*/);
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1197;
              updated = (__int64)System_String__Split_75496612((System_String_o *)updated, v357, 0, 0);
              if ( !updated )
                goto LABEL_1197;
              v358 = *(_DWORD *)(updated + 24);
              if ( v358 > 0 )
              {
                if ( v358 == 1 )
                {
                  v359 = (System_String_o **)(updated + 32);
                }
                else
                {
                  v356 = *(System_String_o **)(updated + 32);
                  v359 = (System_String_o **)(updated + 40);
                }
                v777 = *v359;
                v778 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v779 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  v779,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
                  0);
                if ( !v778 )
                  goto LABEL_1197;
                CommonUI__OpenNotificationDialog_37293356(
                  (CommonUI_o *)v778,
                  v356,
                  v777,
                  v779,
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
            v154 = System_String__Concat_75438412((System_String_o *)StringLiteral_11273/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v152, v153);
            v97 = LocalizationManager__Get(v154, 0);
            v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v99 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
              v352 = (System_String_o *)StringLiteral_1/*""*/;
              updated = sub_21FFD10(string___TypeInfo, 1);
              if ( !updated )
                goto LABEL_1197;
              v353 = (System_String_array *)updated;
              sub_1FEB274(updated, 0, StringLiteral_87/*"\r\n"*/);
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1197;
              updated = (__int64)System_String__Split_75496612((System_String_o *)updated, v353, 0, 0);
              if ( !updated )
                goto LABEL_1197;
              v354 = *(_DWORD *)(updated + 24);
              if ( v354 > 0 )
              {
                if ( v354 == 1 )
                {
                  v355 = (System_String_o **)(updated + 32);
                }
                else
                {
                  v352 = *(System_String_o **)(updated + 32);
                  v355 = (System_String_o **)(updated + 40);
                }
                v774 = *v355;
                v775 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v776 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  v776,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
                  0);
                if ( !v775 )
                  goto LABEL_1197;
                CommonUI__OpenNotificationDialog(
                  (CommonUI_o *)v775,
                  v352,
                  v774,
                  v776,
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
            v96 = System_String__Concat_75438412((System_String_o *)StringLiteral_11273/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v94, v95);
            v97 = LocalizationManager__Get(v96, 0);
            v98 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v99 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
          CommonUI__OpenNotificationDialog_37293356(
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
            v338 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_QuestAfterAction_StateMain_UpdateAnim__);
            OverwriteAssetSoundName__PlaySe(v338, param, 0, 0);
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
              if ( (sub_29187A8(0, v210) & 1) == 0 )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v213 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v211, v212);
                sub_29187F8(1, 0, v213);
                v216 = BalanceConfig_TypeInfo;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v214, v215);
                  v216 = BalanceConfig_TypeInfo;
                }
                TerminalPramsManager__SetAutoResumeByWarId(v216->static_fields->OrdealCallWarId, 0);
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
          v438 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1143;
          v439 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(int *)(v438 + 24) >= 2 )
            v440 = System_Int32__Parse(*(System_String_o **)(v438 + 40), 0) + 1;
          else
            v440 = 0;
          v770 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
          SceneJumpInfo___ctor_48427232(v770, (System_String_o *)StringLiteral_1/*""*/, v439, v440, 0);
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1197;
          v745 = 72;
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
                          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__QuestAfterAction_VoiceInfo__TryGetValue__);
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
              (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
            if ( value )
            {
LABEL_156:
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( !updated )
                goto LABEL_1197;
              AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v124 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v122, v123);
              updated = sub_2918590(0, v124);
              if ( !updated )
                goto LABEL_1197;
              if ( !*(_QWORD *)(updated + 472) )
                goto LABEL_166;
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v126 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v125);
              updated = sub_2918590(0, v126);
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
                v833 = (System_String_o *)value[1].monitor;
                if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7, v125);
                SoundManager__playVoice(v833, 0, 0);
              }
              else
              {
                updated = (__int64)ServantVoiceEntity__getVoiceAssetName_49754652(updated, 0);
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
                SoundManager__playVoice_48465348(v129, v130, DEFAULT_VOLUME, 0, 0, 0);
              }
            }
LABEL_1095:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
              this,
              this->klass->vtable._14_EndAnim.method);
            return;
          }
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
          if ( !updated )
            goto LABEL_1197;
          *(_BYTE *)(updated + 195) = 0;
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1197;
          updated = (__int64)System_String__Split_75495420(
                               (System_String_o *)updated,
                               (System_String_o *)StringLiteral_869/*","*/,
                               0,
                               0);
          if ( !updated )
            goto LABEL_1197;
          v433 = *(_QWORD *)(updated + 24);
          v434 = updated;
          if ( !v433 )
            goto LABEL_785;
          if ( !(_DWORD)v433 )
            goto LABEL_1143;
          v435 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( v435 < 1 )
          {
LABEL_785:
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !updated )
              goto LABEL_1197;
            v745 = 91;
            v746 = 0;
            goto LABEL_1054;
          }
          v436 = v435;
          v437 = *(int *)(v434 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v434 + 40), 0) > 0;
          v917 = (System_String_o *)StringLiteral_1/*""*/;
          v770 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
          SceneJumpInfo___ctor_48427232(v770, v917, v436, v437, 0);
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1197;
          v745 = 91;
LABEL_1053:
          v746 = (Il2CppObject *)v770;
LABEL_1054:
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v745, 1, v746, 0);
          goto LABEL_1055;
        }
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1197;
        updated = (__int64)System_String__Split_75495420(
                             (System_String_o *)updated,
                             (System_String_o *)StringLiteral_869/*","*/,
                             0,
                             0);
        if ( !updated )
          goto LABEL_1197;
        v430 = *(_QWORD *)(updated + 24);
        v431 = updated;
        if ( !v430 )
          goto LABEL_876;
        if ( !(_DWORD)v430 )
          goto LABEL_1143;
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
          goto LABEL_945;
        if ( *(int *)(v431 + 24) >= 2 )
          v432 = System_Int32__Parse(*(System_String_o **)(v431 + 40), 0);
        else
LABEL_876:
          v432 = 0;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v429);
        TerminalPramsManager__SetAutoResumeForFolder(v432, 0);
        if ( (unsigned int)sub_2918858(0) == 3 )
        {
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v773 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v771, v772);
          sub_29188A8(1, 0, v773);
        }
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
              v348 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v349 = 0.5;
                v350 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( *(int *)(v348 + 24) >= 2 )
                {
                  v351 = System_Int32__Parse(*(System_String_o **)(v348 + 40), 0);
                  if ( *(int *)(v348 + 24) >= 3 )
                    v349 = System_Single__Parse(*(System_String_o **)(v348 + 48), 0);
                }
                else
                {
                  v351 = v350;
                  v350 = -1;
                }
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                        (QuestAfterAction_o *)updated,
                                        0,
                                        v351,
                                        this,
                                        (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v441, v442);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0, 0) )
                {
                  if ( v350 >= 1 )
                  {
                    updated = *v14;
                    if ( !*v14 )
                      goto LABEL_1197;
                    v448 = QuestAfterAction__GetMapComponent_object_(
                             (QuestAfterAction_o *)updated,
                             0,
                             v350,
                             this,
                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v446, v447);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v448, 0, 0) )
                    {
                      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                        *(__n128 *)&v445 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v444);
                      updated = sub_2918590(0, v445);
                      if ( !updated )
                        goto LABEL_1197;
                      if ( !v448 )
                        goto LABEL_1197;
                      v449 = *(ScrTerminalMap_o **)(updated + 264);
                      updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v448, 0);
                      if ( !v449 )
                        goto LABEL_1197;
                      ScrTerminalMap__SetPlayerIcon(v449, (UnityEngine_GameObject_o *)updated, 0);
                    }
                  }
                  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v445 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v444);
                  updated = sub_2918590(0, v445);
                  if ( !updated )
                    goto LABEL_1197;
                  if ( !MapComponent_object )
                    goto LABEL_1197;
                  v450 = *(ScrTerminalMap_o **)(updated + 264);
                  v451 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0);
                  v452 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(v452, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v450 )
                    goto LABEL_1197;
                  ScrTerminalMap__MovePlayerIcon(v450, v451, v351, v452, v349, 0);
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
                updated = sub_2918590(0, *(long double *)&v115);
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
                      updated = System_Single__TryParse(*(System_String_o **)(v112 + 56), (float *)&v1025 + 1, 0);
                      if ( (updated & 1) != 0 )
                      {
                        if ( *(_DWORD *)(v112 + 24) <= 4u )
                          goto LABEL_1143;
                        updated = System_Single__TryParse(*(System_String_o **)(v112 + 64), (float *)&v1025, 0);
                        if ( (updated & 1) != 0 )
                        {
                          if ( !v118 )
                            goto LABEL_1197;
                          v760 = HIDWORD(v1025);
                          v759 = result[0];
                          v761 = v1025;
                          *(_DWORD *)(v118 + 500) = 1065353216;
                          *(_DWORD *)(v118 + 488) = v759;
                          *(_DWORD *)(v118 + 492) = v760;
                          *(_DWORD *)(v118 + 496) = v761;
                        }
                      }
                    }
                  }
                }
                if ( !*v14 )
                  goto LABEL_1197;
                v762 = System_Action_TypeInfo;
                *(_BYTE *)(*v14 + 216) = 1;
                v763 = (System_Action_o *)sub_21FFEBC(v762);
                System_Action___ctor(
                  v763,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
                  0);
                if ( !v118 )
                  goto LABEL_1197;
                TerminalSceneComponent__Fadein_MapDisp((TerminalSceneComponent_o *)v118, DEFAULT_FADE_TIME, v763, 0);
                return;
              }
            }
LABEL_1143:
            sub_21FFED4(updated);
          }
          if ( id == 530 )
          {
            v300 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
            System_Object___ctor((Il2CppObject *)v300, 0);
            if ( !v300 )
              goto LABEL_1197;
            *(_QWORD *)(v300 + 32) = v5;
            v307 = v300 + 32;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v300 + 32), v5, v301, v302, v303, v304, v305, v306);
            v308 = System_Int32__Parse(v23->fields.param, 0);
            updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)updated,
                                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
            if ( !updated )
              goto LABEL_1197;
            v309 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                     v308,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            *(_QWORD *)(v300 + 16) = v309;
            v310 = (__int64 *)(v300 + 16);
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v300 + 16),
              (int32_t)v309,
              v311,
              v312,
              v313,
              v314,
              v315,
              v316);
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !updated )
              goto LABEL_1197;
            QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v308, 0);
            *(_QWORD *)(v300 + 24) = QuestInfo;
            v318 = v300 + 24;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v300 + 24),
              (int32_t)QuestInfo,
              v319,
              v320,
              v321,
              v322,
              v323,
              v324);
            if ( !*(_QWORD *)(v300 + 24) )
              goto LABEL_1197;
            if ( *(_DWORD *)(*(_QWORD *)(v300 + 24) + 32LL) == 1 )
            {
              updated = *v310;
              if ( !*v310 )
                goto LABEL_1197;
              if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v328 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v326, v327);
                updated = sub_29186EC(v308, 0, v328);
                if ( !*(_QWORD *)v318 )
                  goto LABEL_1197;
                updated = sub_255F830(*(unsigned int *)(*(_QWORD *)v318 + 44LL), 0, v329);
                if ( !*(_QWORD *)v307 )
                  goto LABEL_1197;
                v330 = *(_QWORD *)(*(_QWORD *)v307 + 24LL);
                if ( !v330 )
                  goto LABEL_1197;
                *(_BYTE *)(v330 + 197) = 1;
                v331 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
                NetworkManager_ResultCallbackFunc___ctor(
                  v331,
                  (Il2CppObject *)v300,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                  0);
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v332, v333);
                Request_object = NetworkManager__getRequest_object_(
                                   v331,
                                   (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                v336 = sub_23D8090(0, v335);
                updated = sub_2905AA4(0);
                if ( !Request_object )
                  goto LABEL_1197;
                BattleSetupScenarioRequest__beginRequest(
                  (BattleSetupScenarioRequest_o *)Request_object,
                  v336,
                  updated + 1,
                  0);
              }
            }
            else
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v325);
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
            if ( System_Int32__TryParse(*(System_String_o **)(v41 + 40), &v1024[1], 0) )
              v47 = v1024[1];
            else
              v47 = -1;
            if ( *(int *)(v41 + 24) >= 3 )
            {
              if ( System_Int32__TryParse(*(System_String_o **)(v41 + 48), v1024, 0) )
                v46 = v1024[0];
              else
                v46 = -1;
              if ( *(int *)(v41 + 24) >= 4
                && System_Int32__TryParse(*(System_String_o **)(v41 + 56), &v1023, 0)
                && v1023 >= 1 )
              {
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v45 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v42, v43);
                sub_2918748(1, 0, v45);
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
          sub_281BA6C(1, 0, v45);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v766 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v764, v765);
          updated = sub_2918590(0, v766);
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
            *(__n128 *)&v769 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v767, v768);
          sub_281BA6C(0, 0, v769);
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
            v80 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            System_Object___ctor((Il2CppObject *)v80, 0);
            if ( !v80 )
              goto LABEL_1197;
            *(_QWORD *)(v80 + 24) = v5;
            v87 = v80 + 24;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v80 + 24), v5, v81, v82, v83, v84, v85, v86);
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
            v804 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v90,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v80 + 16) = v804;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v80 + 16),
              (int32_t)v804,
              v805,
              v806,
              v807,
              v808,
              v809,
              v810);
            v813 = *(UnityEngine_Object_o **)(v80 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v811, v812);
            updated = UnityEngine_Object__op_Equality(v813, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v814 = *(MapGimmickComponent_o **)(v80 + 16);
            if ( !v814 )
              goto LABEL_1197;
            v815 = System_Action_TypeInfo;
            v814->fields.isForceNotActive = v92;
            v816 = (System_Action_o *)sub_21FFEBC(v815);
            v817 = v816;
            if ( v91 )
            {
              System_Action___ctor(
                v816,
                (Il2CppObject *)v80,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0);
              v625 = v814;
              v626 = 2;
              goto LABEL_972;
            }
            System_Action___ctor(
              v816,
              (Il2CppObject *)v80,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0);
            MapGimmickComponent__SetState(v814, 2, v817, 0);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v926 = *(_QWORD *)(v80 + 24);
            if ( !v926 )
              goto LABEL_1197;
            goto LABEL_1066;
          case 401:
            v521 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            System_Object___ctor((Il2CppObject *)v521, 0);
            if ( !v521 )
              goto LABEL_1197;
            *(_QWORD *)(v521 + 24) = v5;
            v528 = v521 + 24;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v521 + 24), v5, v522, v523, v524, v525, v526, v527);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v529 = *(_QWORD *)(updated + 24);
            v530 = updated;
            if ( v529 )
            {
              if ( !(_DWORD)v529 )
                goto LABEL_1143;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              v531 = updated;
              if ( *(int *)(v530 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v530 + 40), 0);
                v532 = (int)updated < 1;
                if ( *(int *)(v530 + 24) < 3 )
                {
                  v533 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v530 + 48), 0);
                  v533 = (int)updated > 0;
                }
                goto LABEL_960;
              }
            }
            else
            {
              v531 = 0;
            }
            v533 = 0;
            v532 = 1;
LABEL_960:
            if ( !*(_QWORD *)v528 )
              goto LABEL_1197;
            updated = *(_QWORD *)(*(_QWORD *)v528 + 24LL);
            if ( !updated )
              goto LABEL_1197;
            v818 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v531,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v521 + 16) = v818;
            v819 = (MapGimmickComponent_o **)(v521 + 16);
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v521 + 16),
              (int32_t)v818,
              v820,
              v821,
              v822,
              v823,
              v824,
              v825);
            v828 = *(UnityEngine_Object_o **)(v521 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v826, v827);
            updated = UnityEngine_Object__op_Equality(v828, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v829 = *v819;
            if ( !*v819 )
              goto LABEL_1197;
            v829->fields.isForceLoop = v533;
            v829->fields.isForceNotActive = 0;
            if ( *(int *)(v530 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v530 + 56), 0);
              if ( !*v819 )
                goto LABEL_1197;
              MapGimmickComponent__SetUseAnimNum(*v819, updated, 1, 0);
            }
            v830 = *v819;
            v831 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            v817 = v831;
            if ( v532 )
            {
              System_Action___ctor(
                v831,
                (Il2CppObject *)v521,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0);
              if ( !v830 )
                goto LABEL_1197;
              v625 = v830;
              v626 = 3;
LABEL_972:
              v832 = v817;
LABEL_1061:
              MapGimmickComponent__SetState(v625, v626, v832, 0);
              return;
            }
            System_Action___ctor(
              v831,
              (Il2CppObject *)v521,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0);
            if ( !v830 )
              goto LABEL_1197;
            MapGimmickComponent__SetState(v830, 3, v817, 0);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v926 = *(_QWORD *)v528;
            if ( !*(_QWORD *)v528 )
              goto LABEL_1197;
LABEL_1066:
            v34 = *(_QWORD *)(v926 + 24);
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
            v507 = *(_QWORD *)(updated + 24);
            v508 = updated;
            if ( v507 )
            {
              if ( !(_DWORD)v507 )
                goto LABEL_1143;
              v509 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v508 + 24) >= 2 )
              {
                v510 = System_Int32__Parse(*(System_String_o **)(v508 + 40), 0) > 0;
LABEL_929:
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                v798 = QuestAfterAction__GetMapComponent_object_(
                         (QuestAfterAction_o *)updated,
                         2,
                         v509,
                         this,
                         (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v796, v797);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v798, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v798 )
                  goto LABEL_1197;
                BYTE1(v798[7].klass) = v510;
                MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v798, 0, 0);
                v799 = v798[8].monitor;
                if ( !v799 )
                  goto LABEL_1197;
                v799[4] = 0;
                goto LABEL_945;
              }
            }
            else
            {
              v509 = 0;
            }
            v510 = 0;
            goto LABEL_929;
          case 403:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v511 = *(_QWORD *)(updated + 24);
            v512 = updated;
            if ( v511 )
            {
              if ( !(_DWORD)v511 )
                goto LABEL_1143;
              v513 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v512 + 24) >= 2 )
              {
                v514 = System_Int32__Parse(*(System_String_o **)(v512 + 40), 0) > 0;
LABEL_938:
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                v802 = QuestAfterAction__GetMapComponent_object_(
                         (QuestAfterAction_o *)updated,
                         2,
                         v513,
                         this,
                         (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v800, v801);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v802, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v802 )
                  goto LABEL_1197;
                LOBYTE(v802[7].klass) = v514;
                BYTE1(v802[7].klass) = 0;
                MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v802, 1, 0);
                v803 = v802[8].monitor;
                if ( !v803 )
                  goto LABEL_1197;
                v803[4] = 1;
                goto LABEL_945;
              }
            }
            else
            {
              v513 = 0;
            }
            v514 = 0;
            goto LABEL_938;
          case 404:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v465 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_1055;
            v466 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
            if ( !*(_DWORD *)(v465 + 24) )
              goto LABEL_1143;
            v467 = (QuestAfterAction_o *)*v14;
            v468 = v466;
            updated = System_Int32__Parse(*(System_String_o **)(v465 + 32), 0);
            if ( !v467 )
              goto LABEL_1197;
            v471 = QuestAfterAction__GetMapComponent_object_(
                     v467,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v469, v470);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v471, 0, 0) )
              return;
            LODWORD(v474) = 981668463;
            v475 = v468 * 0.001;
            if ( *(int *)(v465 + 24) < 6 || System_Int32__Parse(*(System_String_o **)(v465 + 72), 0) < 1 )
            {
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v474 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v472, v473);
              updated = sub_2918590(0, v474);
              if ( !updated )
                goto LABEL_1197;
              if ( (*(_DWORD *)(v465 + 24) & 0xFFFFFFFE) != 0 )
              {
                v939 = *(ScrTerminalMap_o **)(updated + 264);
                v940 = System_Single__Parse(*(System_String_o **)(v465 + 40), 0);
                if ( *(_DWORD *)(v465 + 24) > 2u )
                {
                  v941 = v940;
                  v942 = System_Single__Parse(*(System_String_o **)(v465 + 48), 0);
                  if ( !v939 )
                    goto LABEL_1197;
                  v1056 = ScrTerminalMap__LocalPosFromCoord(v939, v941, v942, 0.0, 0.0, 0);
                  if ( *(_DWORD *)(v465 + 24) > 4u )
                  {
                    x = v1056.fields.x;
                    y = v1056.fields.y;
                    z = v1056.fields.z;
                    v946 = System_Int32__Parse(*(System_String_o **)(v465 + 64), 0);
                    v947 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v947,
                      (Il2CppObject *)this,
                      (intptr_t)this->klass->vtable._14_EndAnim.method,
                      0);
                    if ( !v471 )
                      goto LABEL_1197;
                    v920 = x;
                    v921 = y;
                    v919 = (MapGimmickComponent_o *)v471;
                    v922 = z;
                    v923 = v475;
                    v924 = v946;
                    v925 = v947;
LABEL_1119:
                    MapGimmickComponent__SetMoveAnim(v919, *(UnityEngine_Vector3_o *)&v920, v923, v924, v925, 0);
                    return;
                  }
                }
              }
              goto LABEL_1143;
            }
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v474 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v472, v473);
            updated = sub_2918590(0, v474);
            if ( !updated )
              goto LABEL_1197;
            if ( (*(_DWORD *)(v465 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v476 = *(ScrTerminalMap_o **)(updated + 264);
            v477 = System_Single__Parse(*(System_String_o **)(v465 + 40), 0);
            if ( *(_DWORD *)(v465 + 24) <= 2u )
              goto LABEL_1143;
            v478 = v477;
            v479 = System_Single__Parse(*(System_String_o **)(v465 + 48), 0);
            if ( !v476 )
              goto LABEL_1197;
            v1040 = ScrTerminalMap__LocalPosFromCoord(v476, v478, v479, 0.0, 0.0, 0);
            if ( *(_DWORD *)(v465 + 24) <= 4u )
              goto LABEL_1143;
            v480 = v1040.fields.x;
            v481 = v1040.fields.y;
            v482 = v1040.fields.z;
            updated = System_Int32__Parse(*(System_String_o **)(v465 + 64), 0);
            if ( !v471 )
              goto LABEL_1197;
            v1041.fields.x = v480;
            v1041.fields.y = v481;
            v1041.fields.z = v482;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v471, v1041, v475, updated, 0, 0);
            goto LABEL_1055;
          case 405:
            v534 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            System_Object___ctor((Il2CppObject *)v534, 0);
            if ( !v534 )
              goto LABEL_1197;
            *(_QWORD *)(v534 + 24) = v5;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v534 + 24), v5, v535, v536, v537, v538, v539, v540);
            v541 = *(_QWORD *)(v534 + 24);
            if ( !v541 )
              goto LABEL_1197;
            v542 = *(QuestAfterAction_o **)(v541 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v542 )
              goto LABEL_1197;
            v543 = QuestAfterAction__GetMapComponent_object_(
                     v542,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v534 + 16) = v543;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v534 + 16),
              (int32_t)v543,
              v544,
              v545,
              v546,
              v547,
              v548,
              v549);
            v552 = *(UnityEngine_Object_o **)(v534 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v550, v551);
            if ( UnityEngine_Object__op_Equality(v552, 0, 0) )
              return;
            v553 = *(MapGimmickComponent_o **)(v534 + 16);
            v554 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v554,
              (Il2CppObject *)v534,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0);
            if ( !v553 )
              goto LABEL_1197;
            MapGimmickComponent__SetState(v553, 3, v554, 0);
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v557 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v555, v556);
            updated = sub_2918590(0, v557);
            v559 = (TerminalSceneComponent_o *)updated;
            if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v558);
            if ( !v559 )
              goto LABEL_1197;
            TerminalSceneComponent__Fadein_MapDisp(
              v559,
              AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME,
              0,
              0);
            return;
          case 406:
            v560 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            System_Object___ctor((Il2CppObject *)v560, 0);
            if ( !v560 )
              goto LABEL_1197;
            *(_QWORD *)(v560 + 32) = v5;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v560 + 32), v5, v561, v562, v563, v564, v565, v566);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            v567 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            *(_QWORD *)(v560 + 24) = v567;
            v568 = (__int64 *)(v560 + 24);
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v560 + 24),
              (int32_t)v567,
              v569,
              v570,
              v571,
              v572,
              v573,
              v574);
            v575 = *(_QWORD *)(v560 + 32);
            if ( !v575 )
              goto LABEL_1197;
            v576 = *v568;
            if ( !*v568 )
              goto LABEL_1197;
            if ( !*(_DWORD *)(v576 + 24) )
              goto LABEL_1143;
            v577 = *(QuestAfterAction_o **)(v575 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v576 + 32), 0);
            if ( !v577 )
              goto LABEL_1197;
            v578 = QuestAfterAction__GetMapComponent_object_(
                     v577,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v560 + 16) = v578;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v560 + 16),
              (int32_t)v578,
              v579,
              v580,
              v581,
              v582,
              v583,
              v584);
            v587 = *(UnityEngine_Object_o **)(v560 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v585, v586);
            if ( UnityEngine_Object__op_Equality(v587, 0, 0) )
              return;
            v588 = *(MapGimmickComponent_o **)(v560 + 16);
            v589 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            v590 = v589;
            v591 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            goto LABEL_655;
          case 407:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v515 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1143;
            v516 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v516 )
              goto LABEL_1197;
            v519 = QuestAfterAction__GetMapComponent_object_(
                     v516,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v517, v518);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v519, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v519 )
              goto LABEL_1197;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v519, 0);
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( (*(_DWORD *)(v515 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v520 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v515 + 40), &color, 0);
            if ( !v520 )
              goto LABEL_1197;
            UIWidget__set_color(v520, color, 0);
            goto LABEL_1095;
          case 408:
            v560 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            System_Object___ctor((Il2CppObject *)v560, 0);
            if ( !v560 )
              goto LABEL_1197;
            *(_QWORD *)(v560 + 24) = v5;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v560 + 24), v5, v604, v605, v606, v607, v608, v609);
            v610 = *(_QWORD *)(v560 + 24);
            if ( !v610 )
              goto LABEL_1197;
            v611 = *(QuestAfterAction_o **)(v610 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v611 )
              goto LABEL_1197;
            v612 = QuestAfterAction__GetMapComponent_object_(
                     v611,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v560 + 16) = v612;
            v613 = v560 + 16;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v560 + 16),
              (int32_t)v612,
              v614,
              v615,
              v616,
              v617,
              v618,
              v619);
            v622 = *(UnityEngine_Object_o **)(v560 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v620, v621);
            if ( UnityEngine_Object__op_Equality(v622, 0, 0) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v613 || !updated )
              goto LABEL_1197;
            v623 = QuestTree__CheckMapGimmickCond_43418956(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v613 + 136LL),
                     0);
            v588 = *(MapGimmickComponent_o **)v613;
            v624 = v623;
            v589 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            v590 = v589;
            if ( v624 )
            {
              v591 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_655:
              System_Action___ctor(v589, (Il2CppObject *)v560, *v591, 0);
              if ( !v588 )
                goto LABEL_1197;
              v625 = v588;
              v626 = 3;
            }
            else
            {
              System_Action___ctor(
                v589,
                (Il2CppObject *)v560,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0);
              if ( !v588 )
                goto LABEL_1197;
              v625 = v588;
              v626 = 2;
            }
            v832 = v590;
            goto LABEL_1061;
          case 409:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v490 = *(_QWORD *)(updated + 24);
            v491 = updated;
            if ( v490 )
            {
              if ( !(_DWORD)v490 )
                goto LABEL_1143;
              v492 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v491 + 24) >= 2 )
              {
                v493 = System_Int32__Parse(*(System_String_o **)(v491 + 40), 0) > 0;
LABEL_920:
                updated = *v14;
                if ( !*v14 )
                  goto LABEL_1197;
                v792 = QuestAfterAction__GetMapComponent_object_(
                         (QuestAfterAction_o *)updated,
                         2,
                         v492,
                         this,
                         (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v790, v791);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v792, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v792 )
                  goto LABEL_1197;
                LOBYTE(v792[7].klass) = v493;
                BYTE1(v792[7].klass) = 0;
                MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v792, 1, 0);
                v793 = v792[8].monitor;
                if ( !v793 )
                  goto LABEL_1197;
                v793[4] = 1;
                v794 = this->klass;
                this->fields.IsAnimDoing = 0;
                v795 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v794->vtable._11_get_CommandIndex.methodPtr)(
                         this,
                         v794->vtable._11_get_CommandIndex.method);
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
                  this,
                  (unsigned int)(v795 + 1),
                  this->klass->vtable._12_set_CommandIndex.method);
                goto LABEL_946;
              }
            }
            else
            {
              v492 = 0;
            }
            v493 = 0;
            goto LABEL_920;
          case 410:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v453 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1055;
            v592 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v592 )
              goto LABEL_1197;
            v457 = QuestAfterAction__GetMapComponent_object_(
                     v592,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v593, v594);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v457, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( (*(_DWORD *)(v453 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v595 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v453 + 40), 0);
            if ( !v595 )
              goto LABEL_1197;
            v487 = updated;
            v488 = v595;
            v489 = 0;
            goto LABEL_627;
          case 411:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v453 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1055;
            v454 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v454 )
              goto LABEL_1197;
            v457 = QuestAfterAction__GetMapComponent_object_(
                     v454,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v455, v456);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v457, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( (*(_DWORD *)(v453 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v458 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v453 + 40), 0);
            if ( !v458 )
              goto LABEL_1197;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v458, 2, updated, this, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v459, v460);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
            if ( *(_DWORD *)(v453 + 24) <= 2u )
              goto LABEL_1143;
            v462 = LocalPosition.fields.x;
            v463 = LocalPosition.fields.y;
            v464 = LocalPosition.fields.z;
            goto LABEL_637;
          case 412:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1197;
            v453 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1055;
            v483 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v483 )
              goto LABEL_1197;
            v457 = QuestAfterAction__GetMapComponent_object_(
                     v483,
                     2,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v484, v485);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v457, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( (*(_DWORD *)(v453 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_1143;
            v486 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v453 + 40), 0);
            if ( !v486 )
              goto LABEL_1197;
            v487 = updated;
            v488 = v486;
            v489 = 1;
LABEL_627:
            v598 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v488, v489, v487, this, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v596, v597);
            if ( UnityEngine_Object__op_Equality(v598, 0, 0) )
              return;
            v1042 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v598, 0);
            v462 = v1042.fields.x;
            v463 = v1042.fields.y;
            v464 = v1042.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_636;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v1042.fields.x = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v599, v600);
            updated = sub_2918590(0, *(long double *)&v1042.fields.x);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 264);
            if ( !updated )
              goto LABEL_1197;
            v1043.fields.x = v462;
            v1043.fields.y = v463;
            v1043.fields.z = v464;
            v1044 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1043, 0);
            v462 = v1044.fields.x;
            v463 = v1044.fields.y;
            v464 = v1044.fields.z;
LABEL_636:
            if ( *(_DWORD *)(v453 + 24) <= 2u )
              goto LABEL_1143;
LABEL_637:
            v601 = System_Single__Parse(*(System_String_o **)(v453 + 48), 0) * 0.001;
            if ( v601 >= 0.0 )
              v602 = v601;
            else
              v602 = 0.5;
            if ( (*(_DWORD *)(v453 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_1143;
            v603 = System_Int32__Parse(*(System_String_o **)(v453 + 56), 0);
            if ( *(int *)(v453 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v453 + 64), 0);
              if ( (int)updated >= 1 )
              {
                if ( !v457 )
                  goto LABEL_1197;
                v1045.fields.x = v462;
                v1045.fields.y = v463;
                v1045.fields.z = v464;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v457, v1045, v602, v603, 0, 0);
                goto LABEL_945;
              }
            }
            v918 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(v918, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v457 )
              goto LABEL_1197;
            v919 = (MapGimmickComponent_o *)v457;
            v920 = v462;
            v921 = v463;
            v922 = v464;
            v923 = v602;
            v924 = v603;
            v925 = v918;
            goto LABEL_1119;
          default:
            if ( id == 500 )
            {
              v496 = System_Int32__Parse(v23->fields.param, 0);
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v497 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v494, v495);
              sub_2918630(v496, 0, v497);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v498, v499);
              updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !updated )
                goto LABEL_1197;
              if ( DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                     &entity,
                     v496,
                     (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              {
                updated = (__int64)entity;
                if ( !entity )
                  goto LABEL_1197;
                v500 = (QuestAfterAction_o *)*v14;
                updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
                if ( !v500 )
                  goto LABEL_1197;
                v503 = QuestAfterAction__GetMapComponent_object_(
                         v500,
                         0,
                         updated,
                         this,
                         (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v501, v502);
                updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v503, 0, 0);
                if ( (updated & 1) != 0 )
                {
                  if ( !v503 )
                    goto LABEL_1197;
                  SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v503, 0, 0);
                  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v506 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v504, v505);
                  sub_291868C(1, 0, v506);
                }
              }
              goto LABEL_1095;
            }
            if ( id != 501 )
              goto LABEL_945;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7, v31);
            updated = sub_2918590(0, *(long double *)&inited);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 256);
            if ( !updated )
              goto LABEL_1197;
            updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
            if ( !updated )
              goto LABEL_1197;
            v247 = (PlayMakerFSM_o *)updated;
            ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
            if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3425/*"CAPTER WAIT"*/, 0) )
            {
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v251 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v249, v250);
              updated = sub_2918590(0, v251);
              if ( !updated )
                goto LABEL_1197;
              v253 = *(_QWORD *)(updated + 256);
              if ( !v253 )
                goto LABEL_1197;
              v254 = *(QuestBoardListViewManager_o **)(v253 + 328);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              if ( !*(&QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo, v7, v252);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
              }
              v255 = *(struct QuestAfterAction_StateMain___c_StaticFields **)(updated + 184);
              _9__16_22 = v255->__9__16_22;
              if ( !_9__16_22 )
              {
                if ( !*(_DWORD *)(updated + 228) )
                {
                  j_il2cpp_runtime_class_init_0(updated, v7, v252);
                  v255 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v257 = (Il2CppObject *)v255->__9;
                _9__16_22 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(_9__16_22, v257, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
                v258 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v258->__9__16_22 = _9__16_22;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v258->__9__16_22,
                  (int32_t)_9__16_22,
                  v259,
                  v260,
                  v261,
                  v262,
                  v263,
                  v264);
              }
              if ( !v254 )
                goto LABEL_1197;
              QuestBoardListViewManager__SetMode(v254, 4, _9__16_22, 0, 0, 0, 0);
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v267 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v265, v266);
              updated = sub_2918590(0, v267);
              if ( !updated )
                goto LABEL_1197;
              TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
              PlayMakerFSM__SendEvent(v247, (System_String_o *)StringLiteral_20753/*"gevINFOBAR_BACK"*/, 0);
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
                v271 = *(_QWORD *)(updated + 24);
                v272 = updated;
                if ( (int)v271 <= 0 )
                  goto LABEL_1055;
                if ( (unsigned int)v271 >= 3 )
                {
                  v651 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
                  v271 = *(_QWORD *)(v272 + 24);
                  v274 = v271;
                  v273 = v651 * 0.001;
                }
                else
                {
                  v273 = 0.5;
                  v274 = *(_QWORD *)(updated + 24);
                }
                sec = v273;
                if ( (int)v271 >= 2 )
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v272 + 40), 0);
                  v274 = *(_DWORD *)(v272 + 24);
                  v282 = updated;
                }
                else
                {
                  v282 = 15;
                }
                if ( !v274 )
                  goto LABEL_1143;
                v652 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(*(System_String_o **)(v272 + 32), 0);
                if ( !v652 )
                  goto LABEL_1197;
                v655 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v652, 2, updated, this, 0);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v653, v654);
                if ( UnityEngine_Object__op_Equality(v655, 0, 0) )
                  return;
                v1052 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v655, 0);
                v657 = v1052.fields.x;
                v658 = v1052.fields.y;
                v659 = v1052.fields.z;
                if ( this->fields.IsMapModel )
                {
                  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                    *(__n128 *)&v1052.fields.x = j_il2cpp_runtime_class_init_0(
                                                   TerminalSceneComponent_TypeInfo,
                                                   v7,
                                                   v656);
                  updated = sub_2918590(0, *(long double *)&v1052.fields.x);
                  if ( !updated )
                    goto LABEL_1197;
                  updated = *(_QWORD *)(updated + 264);
                  if ( !updated )
                    goto LABEL_1197;
                  v1053.fields.x = v657;
                  v1053.fields.y = v658;
                  v1053.fields.z = v659;
                  v1054 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1053, 0);
                  v657 = v1054.fields.x;
                  v658 = v1054.fields.y;
                  v659 = v1054.fields.z;
                }
                v660 = *(_DWORD *)(v272 + 24);
                if ( v23->fields.id == 307 )
                {
                  if ( v660 >= 4 )
                  {
                    if ( v660 != 4 )
                    {
                      updated = System_Int32__Parse(*(System_String_o **)(v272 + 64), 0);
                      if ( (int)updated >= 1 )
                      {
                        if ( !*v14 )
                          goto LABEL_1197;
                        v1055.fields.x = v657;
                        v1055.fields.y = v658;
                        v1055.fields.z = v659;
                        v661 = *(MapCamera_o **)(*v14 + 152);
                        *(_QWORD *)&v1031.fields.hasValue = &v1018;
                        *(_OWORD *)&v1018.fields._list = 0u;
                        *(_QWORD *)&v1031.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        System_Nullable_Vector3____ctor(v1031, v1055, v656);
                        if ( (*(_DWORD *)(v272 + 24) & 0xFFFFFFFC) == 0 )
                          goto LABEL_1143;
                        v662 = System_Single__Parse(*(System_String_o **)(v272 + 56), 0);
                        p_size = (System_Nullable_float__o)&size;
                        size = 0;
                        System_Nullable_float____ctor(
                          p_size,
                          v662,
                          (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
                        if ( !v661 )
                          goto LABEL_1197;
                        goto LABEL_1093;
                      }
                    }
                    if ( !*v14 )
                      goto LABEL_1197;
                    v1057.fields.x = v657;
                    v1057.fields.y = v658;
                    v1057.fields.z = v659;
                    v948 = *(MapCamera_o **)(*v14 + 152);
                    *(_QWORD *)&v1032.fields.hasValue = &v1018;
                    *(_OWORD *)&v1018.fields._list = 0u;
                    *(_QWORD *)&v1032.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                    System_Nullable_Vector3____ctor(v1032, v1057, v656);
                    if ( (*(_DWORD *)(v272 + 24) & 0xFFFFFFFC) == 0 )
                      goto LABEL_1143;
                    v949 = System_Single__Parse(*(System_String_o **)(v272 + 56), 0);
                    v950 = (System_Nullable_float__o)&size;
                    size = 0;
                    System_Nullable_float____ctor(
                      v950,
                      v949,
                      (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
                    v951 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v951,
                      (Il2CppObject *)this,
                      (intptr_t)this->klass->vtable._14_EndAnim.method,
                      0);
                    if ( !v948 )
                      goto LABEL_1197;
LABEL_1132:
                    v958 = *(System_Nullable_Vector3__o *)&v1018.fields._list;
                    v959 = v948;
                    v960 = size;
                    v961 = sec;
LABEL_1137:
                    v965 = v282;
                    goto LABEL_1138;
                  }
                  goto LABEL_896;
                }
                if ( v660 < 4 || (updated = System_Int32__Parse(*(System_String_o **)(v272 + 56), 0), (int)updated < 1) )
                {
LABEL_896:
                  if ( !*v14 )
                    goto LABEL_1197;
                  v783 = *(MapCamera_o **)(*v14 + 152);
                  v236 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(v236, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v783 )
                    goto LABEL_1197;
                  v237 = v783;
                  v238 = v657;
                  v239 = v658;
                  v240 = v659;
LABEL_1106:
                  v241 = sec;
LABEL_1107:
                  v242 = v282;
LABEL_1108:
                  v934 = v236;
LABEL_1109:
                  MapCamera__StartAutoMove(v237, *(UnityEngine_Vector3_o *)&v238, v241, v242, v934, 0);
                  return;
                }
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 152);
                if ( !updated )
                  goto LABEL_1197;
                v780 = v657;
                v781 = v658;
                v782 = v659;
LABEL_1101:
                v835 = sec;
                goto LABEL_1102;
              case 308:
LABEL_314:
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1197;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1197;
                v277 = updated;
                if ( *(int *)(updated + 24) < 4 )
                  goto LABEL_1055;
                if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v276 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v275);
                updated = sub_29185E0(0, v276);
                if ( (updated & 1) != 0 )
                  goto LABEL_1055;
                if ( *(_DWORD *)(v277 + 24) <= 2u )
                  goto LABEL_1143;
                v278 = System_Single__Parse(*(System_String_o **)(v277 + 48), 0) * 0.001;
                v279 = v278 >= 0.0 ? v278 : 0.5;
                if ( (*(_DWORD *)(v277 + 24) & 0xFFFFFFFC) == 0 )
                  goto LABEL_1143;
                v282 = System_Int32__Parse(*(System_String_o **)(v277 + 56), 0);
                if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v283 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v280, v281);
                updated = sub_2918590(0, v283);
                if ( !updated )
                  goto LABEL_1197;
                if ( !*(_DWORD *)(v277 + 24) )
                  goto LABEL_1143;
                v284 = *(ScrTerminalMap_o **)(updated + 264);
                v285 = System_Single__Parse(*(System_String_o **)(v277 + 32), 0);
                if ( (*(_DWORD *)(v277 + 24) & 0xFFFFFFFE) == 0 )
                  goto LABEL_1143;
                v286 = v285;
                v287 = System_Single__Parse(*(System_String_o **)(v277 + 40), 0);
                if ( !v284 )
                  goto LABEL_1197;
                v1037 = ScrTerminalMap__LocalPosFromCoord(v284, v286, v287, 0.0, 0.0, 0);
                v289 = v1037.fields.x;
                v290 = v1037.fields.y;
                v291 = v1037.fields.z;
                v292 = *(_DWORD *)(v277 + 24);
                if ( v23->fields.id == 308 )
                {
                  if ( v292 >= 5 )
                  {
                    if ( v292 != 5 )
                    {
                      updated = System_Int32__Parse(*(System_String_o **)(v277 + 72), 0);
                      if ( (int)updated >= 1 )
                      {
                        if ( !*v14 )
                          goto LABEL_1197;
                        v1038.fields.x = v289;
                        v1038.fields.y = v290;
                        v1038.fields.z = v291;
                        v293 = *(MapCamera_o **)(*v14 + 152);
                        *(_QWORD *)&v1030.fields.hasValue = &v1018;
                        *(_OWORD *)&v1018.fields._list = 0u;
                        *(_QWORD *)&v1030.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        System_Nullable_Vector3____ctor(v1030, v1038, v288);
                        if ( *(_DWORD *)(v277 + 24) <= 4u )
                          goto LABEL_1143;
                        v294 = System_Single__Parse(*(System_String_o **)(v277 + 64), 0);
                        v295 = (System_Nullable_float__o)&size;
                        size = 0;
                        System_Nullable_float____ctor(
                          v295,
                          v294,
                          (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
                        if ( !v293 )
                          goto LABEL_1197;
                        v296 = v279;
                        v297 = *(System_Nullable_Vector3__o *)&v1018.fields._list;
                        v298 = size;
                        v299 = v293;
                        goto LABEL_1094;
                      }
                    }
                    if ( !*v14 )
                      goto LABEL_1197;
                    v1058.fields.x = v289;
                    v1058.fields.y = v290;
                    v1058.fields.z = v291;
                    v962 = *(MapCamera_o **)(*v14 + 152);
                    *(_QWORD *)&v1033.fields.hasValue = &v1018;
                    *(_OWORD *)&v1018.fields._list = 0u;
                    *(_QWORD *)&v1033.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                    System_Nullable_Vector3____ctor(v1033, v1058, v288);
                    if ( *(_DWORD *)(v277 + 24) <= 4u )
                      goto LABEL_1143;
                    v963 = System_Single__Parse(*(System_String_o **)(v277 + 64), 0);
                    v964 = (System_Nullable_float__o)&size;
                    size = 0;
                    System_Nullable_float____ctor(
                      v964,
                      v963,
                      (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
                    v951 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v951,
                      (Il2CppObject *)this,
                      (intptr_t)this->klass->vtable._14_EndAnim.method,
                      0);
                    if ( !v962 )
                      goto LABEL_1197;
                    v961 = v279;
                    v958 = *(System_Nullable_Vector3__o *)&v1018.fields._list;
                    v960 = size;
                    v959 = v962;
                    goto LABEL_1137;
                  }
                  goto LABEL_986;
                }
                if ( v292 < 5 || (updated = System_Int32__Parse(*(System_String_o **)(v277 + 64), 0), (int)updated < 1) )
                {
LABEL_986:
                  if ( !*v14 )
                    goto LABEL_1197;
                  v836 = *(MapCamera_o **)(*v14 + 152);
                  v236 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(v236, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v836 )
                    goto LABEL_1197;
                  v237 = v836;
                  v238 = v289;
                  v239 = v290;
                  v240 = v291;
                  v241 = v279;
                  goto LABEL_1107;
                }
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 152);
                if ( !updated )
                  goto LABEL_1197;
                v780 = v289;
                v781 = v290;
                v782 = v291;
                v835 = v279;
LABEL_1102:
                MapCamera__StartAutoMove((MapCamera_o *)updated, *(UnityEngine_Vector3_o *)&v780, v835, v282, 0, 0);
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
                    updated = sub_2918590(0, v137);
                    if ( !updated )
                      goto LABEL_1197;
                    v915 = *(ScrTerminalMap_o **)(updated + 264);
                    v916 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v916,
                      (Il2CppObject *)v5,
                      Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                      0);
                    if ( !v915 )
                      goto LABEL_1197;
                    ScrTerminalMap__RequestMapMove_43950832(v915, v139, v138, v140, v916, 0);
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
            updated = sub_2918590(0, v229);
            if ( !updated )
              goto LABEL_1197;
            updated = *(_QWORD *)(updated + 264);
            if ( !updated )
              goto LABEL_1197;
            v1035.fields.y = v221;
            v1035.fields.z = v223;
            v230 = v225 * 0.001;
            v1035.fields.x = v219;
            v1036 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1035, 0);
            v232 = v1036.fields.x;
            v233 = v1036.fields.y;
            v234 = v1036.fields.z;
            if ( v23->fields.id == 352 && *(int *)(v217 + 24) >= 6 )
            {
              if ( !*v14 )
                goto LABEL_1197;
              v966 = *(MapCamera_o **)(*v14 + 152);
              *(_QWORD *)&v1034.fields.hasValue = &v1018;
              *(_OWORD *)&v1018.fields._list = 0u;
              *(_QWORD *)&v1034.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              System_Nullable_Vector3____ctor(v1034, v1036, v231);
              if ( *(_DWORD *)(v217 + 24) <= 5u )
                goto LABEL_1143;
              v967 = System_Single__Parse(*(System_String_o **)(v217 + 72), 0);
              v968 = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                v968,
                v967,
                (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
              v951 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v951,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
                0);
              if ( !v966 )
                goto LABEL_1197;
              v958 = *(System_Nullable_Vector3__o *)&v1018.fields._list;
              v959 = v966;
              v960 = size;
              v961 = v230;
              v965 = v228;
LABEL_1138:
              MapCamera__StartAutoWork(v959, v961, v958, v960, v965, v951, 0);
              return;
            }
            if ( !*v14 )
              goto LABEL_1197;
            v235 = *(MapCamera_o **)(*v14 + 152);
            v236 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v236,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
              0);
            if ( !v235 )
              goto LABEL_1197;
            v237 = v235;
            v238 = v232;
            v239 = v233;
            v240 = v234;
            v241 = v230;
            v242 = v228;
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
            v243 = *(_QWORD *)(updated + 24);
            v244 = updated;
            if ( (int)v243 <= 0 )
              goto LABEL_1055;
            if ( (unsigned int)v243 >= 3 )
            {
              v627 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
              v243 = *(_QWORD *)(v244 + 24);
              v246 = v243;
              v245 = v627 * 0.001;
            }
            else
            {
              v245 = 0.5;
              v246 = *(_QWORD *)(updated + 24);
            }
            sec = v245;
            if ( (int)v243 >= 2 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v244 + 40), 0);
              v246 = *(_DWORD *)(v244 + 24);
              v282 = updated;
            }
            else
            {
              v282 = 15;
            }
            if ( !v246 )
              goto LABEL_1143;
            v629 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(*(System_String_o **)(v244 + 32), 0);
            if ( !v629 )
              goto LABEL_1197;
            v632 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v629, 1, updated, this, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v630, v631);
            updated = UnityEngine_Object__op_Equality(v632, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( this->fields.IsMapModel )
            {
              if ( !v632 )
                goto LABEL_1197;
              updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v632,
                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
              if ( !updated )
                goto LABEL_1197;
              Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
              v635 = Position.fields.x;
              v636 = Position.fields.y;
              v637 = Position.fields.z;
              if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&Position.fields.x = j_il2cpp_runtime_class_init_0(
                                                  TerminalSceneComponent_TypeInfo,
                                                  v633,
                                                  v634);
              updated = sub_2918590(0, *(long double *)&Position.fields.x);
              if ( !updated )
                goto LABEL_1197;
              updated = *(_QWORD *)(updated + 264);
              if ( !updated )
                goto LABEL_1197;
              v1047.fields.x = v635;
              v1047.fields.y = v636;
              v1047.fields.z = v637;
              v1048 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, v1047, 0);
            }
            else
            {
              v1048 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v632, 0);
            }
            v837 = v1048.fields.x;
            v838 = v1048.fields.y;
            v839 = v1048.fields.z;
            if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v638, v639);
            updated = FSUtility__IsUnderVista(0);
            if ( (updated & 1) == 0 )
            {
              if ( !*(_DWORD *)(v244 + 24) )
                goto LABEL_1143;
              v840 = *(System_String_o **)(v244 + 32);
              updated = System_String__op_Equality(v840, (System_String_o *)StringLiteral_1383/*"10703"*/, 0);
              if ( (updated & 1) != 0 )
              {
                v838 = v838 + -95.0;
              }
              else
              {
                updated = System_String__op_Equality(v840, (System_String_o *)StringLiteral_1457/*"30102"*/, 0);
                if ( (updated & 1) != 0 )
                  v838 = v838 + 45.0;
              }
            }
            v935 = *(_DWORD *)(v244 + 24);
            if ( v23->fields.id == 306 )
            {
              if ( v935 >= 4 )
              {
                if ( v935 != 4 )
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v244 + 64), 0);
                  if ( (int)updated >= 1 )
                  {
                    if ( !*v14 )
                      goto LABEL_1197;
                    *(_QWORD *)&v931.fields.hasValue = &v1018;
                    v928 = v837;
                    v661 = *(MapCamera_o **)(*v14 + 152);
                    *(_OWORD *)&v1018.fields._list = 0u;
                    v929 = v838;
                    v930 = v839;
                    goto LABEL_1091;
                  }
                }
                if ( !*v14 )
                  goto LABEL_1197;
                *(_QWORD *)&v955.fields.hasValue = &v1018;
                v952 = v837;
                v948 = *(MapCamera_o **)(*v14 + 152);
                *(_OWORD *)&v1018.fields._list = 0u;
                v953 = v838;
                v954 = v839;
                goto LABEL_1130;
              }
            }
            else if ( v935 >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v244 + 56), 0);
              if ( (int)updated >= 1 )
              {
                if ( !*v14 )
                  goto LABEL_1197;
                updated = *(_QWORD *)(*v14 + 152);
                if ( !updated )
                  goto LABEL_1197;
                v780 = v837;
                v781 = v838;
                v782 = v839;
                goto LABEL_1101;
              }
            }
            if ( !*v14 )
              goto LABEL_1197;
            v938 = *(MapCamera_o **)(*v14 + 152);
            v236 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(v236, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v938 )
              goto LABEL_1197;
            v238 = v837;
            v239 = v838;
            v237 = v938;
            v240 = v839;
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
                  v834 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v834,
                    (Il2CppObject *)v5,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
                    0);
                  if ( !v53 )
                    goto LABEL_1197;
                  MapCamera__StartAutoZoom(v53, v51, v55, v56, v834, 0);
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
        v268 = *(_QWORD *)(updated + 24);
        v244 = updated;
        if ( (int)v268 <= 0 )
          goto LABEL_1055;
        if ( (unsigned int)v268 >= 3 )
        {
          v628 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v268 = *(_QWORD *)(v244 + 24);
          v270 = v268;
          v269 = v628 * 0.001;
        }
        else
        {
          v269 = 0.5;
          v270 = *(_QWORD *)(updated + 24);
        }
        sec = v269;
        if ( (int)v268 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v244 + 40), 0);
          v270 = *(_DWORD *)(v244 + 24);
          v282 = updated;
        }
        else
        {
          v282 = 15;
        }
        if ( !v270 )
          goto LABEL_1143;
        v640 = (QuestAfterAction_o *)*v14;
        updated = System_Int32__Parse(*(System_String_o **)(v244 + 32), 0);
        if ( !v640 )
          goto LABEL_1197;
        v643 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v640, 0, updated, this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v641, v642);
        if ( UnityEngine_Object__op_Equality(v643, 0, 0) )
          return;
        v1049 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v643, 0);
        v646 = v1049.fields.x;
        v647 = v1049.fields.y;
        v648 = v1049.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v1049.fields.x = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v644, v645);
          updated = sub_2918590(0, *(long double *)&v1049.fields.x);
          if ( !updated )
            goto LABEL_1197;
          updated = *(_QWORD *)(updated + 264);
          if ( !updated )
            goto LABEL_1197;
          v1050.fields.x = v646;
          v1050.fields.y = v647;
          v1050.fields.z = v648;
          v1051 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v1050, 0);
          v646 = v1051.fields.x;
          v647 = v1051.fields.y;
          v648 = v1051.fields.z;
        }
        if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v644, v645);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v244 + 24) )
            goto LABEL_1143;
          v650 = *(System_String_o **)(v244 + 32);
          updated = System_String__op_Equality(v650, (System_String_o *)StringLiteral_1383/*"10703"*/, 0);
          if ( (updated & 1) != 0 )
          {
            v647 = v647 + -50.0;
          }
          else
          {
            updated = System_String__op_Equality(v650, (System_String_o *)StringLiteral_1456/*"30101"*/, 0);
            if ( (updated & 1) != 0 )
              v647 = v647 + -50.0;
          }
        }
        v927 = *(_DWORD *)(v244 + 24);
        if ( v23->fields.id == 305 )
        {
          if ( v927 >= 4 )
          {
            if ( v927 != 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v244 + 64), 0);
              if ( (int)updated >= 1 )
              {
                if ( !*v14 )
                  goto LABEL_1197;
                v928 = v646;
                v929 = v647;
                v930 = v648;
                v661 = *(MapCamera_o **)(*v14 + 152);
                *(_QWORD *)&v931.fields.hasValue = &v1018;
                *(_OWORD *)&v1018.fields._list = 0u;
LABEL_1091:
                *(_QWORD *)&v931.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                System_Nullable_Vector3____ctor(v931, *(UnityEngine_Vector3_o *)&v928, v649);
                if ( (*(_DWORD *)(v244 + 24) & 0xFFFFFFFC) == 0 )
                  goto LABEL_1143;
                v936 = System_Single__Parse(*(System_String_o **)(v244 + 56), 0);
                v937 = (System_Nullable_float__o)&size;
                size = 0;
                System_Nullable_float____ctor(
                  v937,
                  v936,
                  (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
                if ( !v661 )
                  goto LABEL_1197;
LABEL_1093:
                v297 = *(System_Nullable_Vector3__o *)&v1018.fields._list;
                v299 = v661;
                v298 = size;
                v296 = sec;
LABEL_1094:
                MapCamera__StartAutoWork(v299, v296, v297, v298, v282, 0, 0);
                goto LABEL_1095;
              }
            }
            if ( !*v14 )
              goto LABEL_1197;
            v952 = v646;
            v953 = v647;
            v954 = v648;
            v948 = *(MapCamera_o **)(*v14 + 152);
            *(_QWORD *)&v955.fields.hasValue = &v1018;
            *(_OWORD *)&v1018.fields._list = 0u;
LABEL_1130:
            *(_QWORD *)&v955.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            System_Nullable_Vector3____ctor(v955, *(UnityEngine_Vector3_o *)&v952, v649);
            if ( (*(_DWORD *)(v244 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_1143;
            v956 = System_Single__Parse(*(System_String_o **)(v244 + 56), 0);
            v957 = (System_Nullable_float__o)&size;
            size = 0;
            System_Nullable_float____ctor(v957, v956, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
            v951 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(v951, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v948 )
              goto LABEL_1197;
            goto LABEL_1132;
          }
        }
        else if ( v927 >= 4 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v244 + 56), 0);
          if ( (int)updated >= 1 )
          {
            if ( !*v14 )
              goto LABEL_1197;
            updated = *(_QWORD *)(*v14 + 152);
            if ( !updated )
              goto LABEL_1197;
            v780 = v646;
            v781 = v647;
            v835 = sec;
            v782 = v648;
            goto LABEL_1102;
          }
        }
        if ( !*v14 )
          goto LABEL_1197;
        v932 = *(MapCamera_o **)(*v14 + 152);
        v933 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v933, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
        if ( !v932 )
          goto LABEL_1197;
        v237 = v932;
        v238 = v646;
        v239 = v647;
        v240 = v648;
        v242 = v282;
        v934 = v933;
        v241 = sec;
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
                v729 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v729 )
                  goto LABEL_1197;
                v727 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v729,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v730, v731);
                updated = UnityEngine_Object__op_Equality(v727, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v727 )
                  goto LABEL_1197;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v727, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v727, 0, 0);
                m_CachedPtr = v727[9].fields.m_CachedPtr;
                if ( !m_CachedPtr )
                  goto LABEL_1197;
                *(_DWORD *)(m_CachedPtr + 20) = 2;
                break;
              case 'p':
                v724 = (QuestAfterAction_o *)*v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v724 )
                  goto LABEL_1197;
                v727 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v724,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v725, v726);
                updated = UnityEngine_Object__op_Equality(v727, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v727 )
                  goto LABEL_1197;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v727, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v727, 1, 0);
                v728 = v727[9].fields.m_CachedPtr;
                if ( !v728 )
                  goto LABEL_1197;
                *(_DWORD *)(v728 + 20) = 1;
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
                           (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
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
            v404 = (SrcSpotBasePrefab_o *)v727;
            v405 = 1;
LABEL_762:
            SrcSpotBasePrefab__SetTouchType(v404, v405, 0);
            goto LABEL_21;
          }
          if ( id != 103 )
          {
            if ( id != 110 )
              goto LABEL_945;
            v399 = (QuestAfterAction_o *)*v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v399 )
              goto LABEL_1197;
            v402 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v399,
                                             0,
                                             updated,
                                             this,
                                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v400, v401);
            updated = UnityEngine_Object__op_Equality(v402, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v402 )
              goto LABEL_1197;
            SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v402, 0, 0);
            v403 = v402[9].fields.m_CachedPtr;
            if ( !v403 )
              goto LABEL_1197;
            *(_DWORD *)(v403 + 20) = 0;
            v404 = (SrcSpotBasePrefab_o *)v402;
            v405 = 0;
            goto LABEL_762;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1197;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1197;
          v733 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_1055;
          v734 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v734 )
            goto LABEL_1197;
          v737 = QuestAfterAction__GetMapComponent_object_(
                   v734,
                   0,
                   updated,
                   this,
                   (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v735, v736);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v737, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( (*(_DWORD *)(v733 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_1143;
          updated = System_Int32__Parse(*(System_String_o **)(v733 + 40), 0);
          if ( !v737 )
            goto LABEL_1197;
          v738 = System_Action_TypeInfo;
          LODWORD(v737[14].klass) = updated;
          v739 = (System_Action_o *)sub_21FFEBC(v738);
          System_Action___ctor(v739, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v737, 5, v739, 0);
          updated = *v14;
          if ( !*v14 )
            goto LABEL_1197;
          LODWORD(v391) = (_DWORD)v737;
          *(_QWORD *)(updated + 184) = v737;
          v392 = (MissionNaviTransitionBoardItem_o *)(updated + 184);
LABEL_776:
          sub_21FFBF4(v392, v391, v385, v386, v387, v388, v389, v390);
          return;
        }
        if ( id > 100 )
        {
          if ( id != 101 )
          {
            v363 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
            System_Object___ctor((Il2CppObject *)v363, 0);
            if ( !v363 )
              goto LABEL_1197;
            *(_QWORD *)(v363 + 24) = v5;
            v370 = v363 + 24;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v363 + 24), v5, v364, v365, v366, v367, v368, v369);
            if ( !*(_QWORD *)(v363 + 24) )
              goto LABEL_1197;
            v371 = *(QuestAfterAction_o **)(*(_QWORD *)(v363 + 24) + 24LL);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v371 )
              goto LABEL_1197;
            v372 = QuestAfterAction__GetMapComponent_object_(
                     v371,
                     0,
                     updated,
                     this,
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            *(_QWORD *)(v363 + 16) = v372;
            v373 = (__int64 *)(v363 + 16);
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v363 + 16),
              (int32_t)v372,
              v374,
              v375,
              v376,
              v377,
              v378,
              v379);
            v382 = *(UnityEngine_Object_o **)(v363 + 16);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v380, v381);
            if ( UnityEngine_Object__op_Equality(v382, 0, 0) )
              return;
            v383 = *(SrcSpotBasePrefab_o **)(v363 + 16);
            v384 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v384,
              (Il2CppObject *)v363,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
              0);
            if ( !v383 )
              goto LABEL_1197;
            SrcSpotBasePrefab__SetState(v383, 4, v384, 0);
            if ( !*(_QWORD *)v370 )
              goto LABEL_1197;
            updated = *(_QWORD *)(*(_QWORD *)v370 + 24LL);
            if ( !updated )
              goto LABEL_1197;
            v391 = *v373;
            *(_QWORD *)(updated + 184) = *v373;
            v392 = (MissionNaviTransitionBoardItem_o *)(updated + 184);
            goto LABEL_776;
          }
          v684 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v684, 0);
          if ( !v684 )
            goto LABEL_1197;
          *(_QWORD *)(v684 + 24) = v5;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v684 + 24), v5, v685, v686, v687, v688, v689, v690);
          v691 = *(_QWORD *)(v684 + 24);
          if ( !v691 )
            goto LABEL_1197;
          v692 = *(QuestAfterAction_o **)(v691 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v692 )
            goto LABEL_1197;
          v693 = QuestAfterAction__GetMapComponent_object_(
                   v692,
                   0,
                   updated,
                   this,
                   (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v684 + 16) = v693;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v684 + 16),
            (int32_t)v693,
            v694,
            v695,
            v696,
            v697,
            v698,
            v699);
          v702 = *(UnityEngine_Object_o **)(v684 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v700, v701);
          if ( UnityEngine_Object__op_Equality(v702, 0, 0) )
            return;
          v703 = *(SrcSpotBasePrefab_o **)(v684 + 16);
          v182 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v182,
            (Il2CppObject *)v684,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0);
          if ( !v703 )
            goto LABEL_1197;
          v183 = v703;
          v184 = 3;
        }
        else
        {
          if ( !id )
            goto LABEL_21;
          if ( id != 100 )
            goto LABEL_945;
          v162 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v162, 0);
          if ( !v162 )
            goto LABEL_1197;
          *(_QWORD *)(v162 + 24) = v5;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v162 + 24), v5, v163, v164, v165, v166, v167, v168);
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
                   (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v162 + 16) = v171;
          sub_21FFBF4(
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
          v182 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
          v741 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( IsMapModel )
          {
            if ( !v741 )
              goto LABEL_1197;
            v744 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v741,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v742, v743);
            updated = UnityEngine_Object__op_Equality(v744, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v744 )
              goto LABEL_1197;
            ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v744, 1, 0);
            ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v744, 0, 0);
            v411 = (intptr_t)v744[3].klass;
            if ( !v411 )
              goto LABEL_1197;
          }
          else
          {
            if ( !v741 )
              goto LABEL_1197;
            v910 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v741,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v908, v909);
            updated = UnityEngine_Object__op_Equality(v910, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v910 )
              goto LABEL_1197;
            srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v910, 1, 0);
            srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v910, 0, 0);
            v411 = v910[5].fields.m_CachedPtr;
            if ( !v411 )
              goto LABEL_1197;
          }
          v911 = 2;
        }
        else
        {
          v406 = this->fields.IsMapModel;
          v407 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( v406 )
          {
            if ( !v407 )
              goto LABEL_1197;
            v410 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v407,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v408, v409);
            updated = UnityEngine_Object__op_Equality(v410, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v410 )
              goto LABEL_1197;
            ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v410, 1, 0);
            ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v410, 1, 0);
            v411 = (intptr_t)v410[3].klass;
            if ( !v411 )
              goto LABEL_1197;
          }
          else
          {
            if ( !v407 )
              goto LABEL_1197;
            v914 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v407,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v912, v913);
            updated = UnityEngine_Object__op_Equality(v914, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v914 )
              goto LABEL_1197;
            srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v914, 1, 0);
            srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v914, 1, 0);
            v411 = v914[5].fields.m_CachedPtr;
            if ( !v411 )
              goto LABEL_1197;
          }
          v911 = 1;
        }
        *(_DWORD *)(v411 + 16) = v911;
        goto LABEL_21;
      }
      if ( id > 201 )
      {
        if ( id != 202 )
        {
          v393 = this->fields.IsMapModel;
          v394 = (QuestAfterAction_o *)*v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( v393 )
          {
            if ( !v394 )
              goto LABEL_1197;
            v397 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v394,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v395, v396);
            updated = UnityEngine_Object__op_Equality(v397, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v397 )
              goto LABEL_1197;
            ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v397, 0, 0);
            v398 = (intptr_t)v397[3].klass;
            if ( !v398 )
              goto LABEL_1197;
          }
          else
          {
            if ( !v394 )
              goto LABEL_1197;
            v907 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                             v394,
                                             1,
                                             updated,
                                             this,
                                             (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v905, v906);
            updated = UnityEngine_Object__op_Equality(v907, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v907 )
              goto LABEL_1197;
            srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v907, 0, 0);
            v398 = v907[5].fields.m_CachedPtr;
            if ( !v398 )
              goto LABEL_1197;
          }
          *(_DWORD *)(v398 + 16) = 0;
          goto LABEL_21;
        }
        if ( !this->fields.IsMapModel )
        {
          v865 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
          System_Object___ctor((Il2CppObject *)v865, 0);
          if ( !v865 )
            goto LABEL_1197;
          *(_QWORD *)(v865 + 24) = v5;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v865 + 24), v5, v866, v867, v868, v869, v870, v871);
          v872 = *(_QWORD *)(v865 + 24);
          if ( !v872 )
            goto LABEL_1197;
          v873 = *(QuestAfterAction_o **)(v872 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v873 )
            goto LABEL_1197;
          v874 = QuestAfterAction__GetMapComponent_object_(
                   v873,
                   1,
                   updated,
                   this,
                   (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
          *(_QWORD *)(v865 + 16) = v874;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v865 + 16),
            (int32_t)v874,
            v875,
            v876,
            v877,
            v878,
            v879,
            v880);
          v883 = *(UnityEngine_Object_o **)(v865 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v881, v882);
          if ( UnityEngine_Object__op_Equality(v883, 0, 0) )
            return;
          v884 = *(srcLineSprite_o **)(v865 + 16);
          v861 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v861,
            (Il2CppObject *)v865,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
            0);
          if ( !v884 )
            goto LABEL_1197;
          v862 = -1.0;
          v863 = v884;
          v864 = 4;
          goto LABEL_1020;
        }
        v704 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
        System_Object___ctor((Il2CppObject *)v704, 0);
        if ( !v704 )
          goto LABEL_1197;
        *(_QWORD *)(v704 + 24) = v5;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v704 + 24), v5, v705, v706, v707, v708, v709, v710);
        v711 = *(_QWORD *)(v704 + 24);
        if ( !v711 )
          goto LABEL_1197;
        v712 = *(QuestAfterAction_o **)(v711 + 24);
        updated = System_Int32__Parse(v23->fields.param, 0);
        if ( !v712 )
          goto LABEL_1197;
        v713 = QuestAfterAction__GetMapComponent_object_(
                 v712,
                 1,
                 updated,
                 this,
                 (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
        *(_QWORD *)(v704 + 16) = v713;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v704 + 16), (int32_t)v713, v714, v715, v716, v717, v718, v719);
        v722 = *(UnityEngine_Object_o **)(v704 + 16);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v720, v721);
        if ( UnityEngine_Object__op_Equality(v722, 0, 0) )
          return;
        v723 = *(ModelLineComponent_o **)(v704 + 16);
        v205 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v205,
          (Il2CppObject *)v704,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
          0);
        if ( !v723 )
          goto LABEL_1197;
        v206 = v723;
        v207 = 4;
      }
      else
      {
        if ( id != 200 )
        {
          if ( this->fields.IsMapModel )
          {
            v185 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
            System_Object___ctor((Il2CppObject *)v185, 0);
            if ( !v185 )
              goto LABEL_1197;
            *(_QWORD *)(v185 + 24) = v5;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v185 + 24), v5, v186, v187, v188, v189, v190, v191);
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
                     (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
            *(_QWORD *)(v185 + 16) = v194;
            sub_21FFBF4(
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
            v205 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
          v885 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
          System_Object___ctor((Il2CppObject *)v885, 0);
          if ( !v885 )
            goto LABEL_1197;
          *(_QWORD *)(v885 + 24) = v5;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v885 + 24), v5, v886, v887, v888, v889, v890, v891);
          v892 = *(_QWORD *)(v885 + 24);
          if ( !v892 )
            goto LABEL_1197;
          v893 = *(QuestAfterAction_o **)(v892 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v893 )
            goto LABEL_1197;
          v894 = QuestAfterAction__GetMapComponent_object_(
                   v893,
                   1,
                   updated,
                   this,
                   (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
          *(_QWORD *)(v885 + 16) = v894;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v885 + 16),
            (int32_t)v894,
            v895,
            v896,
            v897,
            v898,
            v899,
            v900);
          v903 = *(UnityEngine_Object_o **)(v885 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v901, v902);
          if ( UnityEngine_Object__op_Equality(v903, 0, 0) )
            return;
          v904 = *(srcLineSprite_o **)(v885 + 16);
          v861 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v861,
            (Il2CppObject *)v885,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
            0);
          if ( !v904 )
            goto LABEL_1197;
          v862 = -1.0;
          v863 = v904;
          v864 = 3;
LABEL_1020:
          srcLineSprite__SetState(v863, v864, v861, v862, 0);
          return;
        }
        if ( !this->fields.IsMapModel )
        {
          v841 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
          System_Object___ctor((Il2CppObject *)v841, 0);
          if ( !v841 )
            goto LABEL_1197;
          *(_QWORD *)(v841 + 24) = v5;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v841 + 24), v5, v842, v843, v844, v845, v846, v847);
          v848 = *(_QWORD *)(v841 + 24);
          if ( !v848 )
            goto LABEL_1197;
          v849 = *(QuestAfterAction_o **)(v848 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v849 )
            goto LABEL_1197;
          v850 = QuestAfterAction__GetMapComponent_object_(
                   v849,
                   1,
                   updated,
                   this,
                   (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
          *(_QWORD *)(v841 + 16) = v850;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v841 + 16),
            (int32_t)v850,
            v851,
            v852,
            v853,
            v854,
            v855,
            v856);
          v859 = *(UnityEngine_Object_o **)(v841 + 16);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v857, v858);
          if ( UnityEngine_Object__op_Equality(v859, 0, 0) )
            return;
          v860 = *(srcLineSprite_o **)(v841 + 16);
          v861 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v861,
            (Il2CppObject *)v841,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
            0);
          if ( !v860 )
            goto LABEL_1197;
          v862 = -1.0;
          v863 = v860;
          v864 = 2;
          goto LABEL_1020;
        }
        v664 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
        System_Object___ctor((Il2CppObject *)v664, 0);
        if ( !v664 )
          goto LABEL_1197;
        *(_QWORD *)(v664 + 24) = v5;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v664 + 24), v5, v665, v666, v667, v668, v669, v670);
        v671 = *(_QWORD *)(v664 + 24);
        if ( !v671 )
          goto LABEL_1197;
        v672 = *(QuestAfterAction_o **)(v671 + 24);
        updated = System_Int32__Parse(v23->fields.param, 0);
        if ( !v672 )
          goto LABEL_1197;
        v673 = QuestAfterAction__GetMapComponent_object_(
                 v672,
                 1,
                 updated,
                 this,
                 (const MethodInfo_393FF1C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
        *(_QWORD *)(v664 + 16) = v673;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v664 + 16), (int32_t)v673, v674, v675, v676, v677, v678, v679);
        v682 = *(UnityEngine_Object_o **)(v664 + 16);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v680, v681);
        if ( UnityEngine_Object__op_Equality(v682, 0, 0) )
          return;
        v683 = *(ModelLineComponent_o **)(v664 + 16);
        v205 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v205,
          (Il2CppObject *)v664,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
          0);
        if ( !v683 )
          goto LABEL_1197;
        v206 = v683;
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

  if ( (byte_5935072 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935072 = 1;
  }
  this->fields.that = that;
  sub_21FFBF4(
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
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
    sub_21FFECC(screenCollider, v11);
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
    sub_21FFECC(this, method);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_21FFECC(this, method);
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

  if ( (byte_5935071 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5935071 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_21FFECC(v3, method);
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

  if ( (byte_5935074 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_17373/*"afterActionBk"*/);
    byte_5935074 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17373/*"afterActionBk"*/, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, deleteKey, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
  if ( !byte_59350DE )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350DE = 1;
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
    sub_21FFECC(mInstance, deleteKey);
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
    sub_21FFECC(this, *(_QWORD *)&value);
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

  if ( (byte_5935077 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_5935077 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_21FFBF4(
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

  if ( (byte_5935078 & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_21FFC50(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_5935078 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_21FFEBC(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v10, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    v11 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v11->__9__16_27 = _9__16_27;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__16_27, (int32_t)_9__16_27, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_5935079 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_21FFC50(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_5935079 = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v6,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    v7 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v7->__9__16_28 = _9__16_28;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->__9__16_28, (int32_t)_9__16_28, v8, v9, v10, v11, v12, v13);
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isExit, method);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14, v15);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
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
    sub_21FFECC(SelectRouteArray, v21);
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
  const MethodInfo_476E8C0 *v16; // x0
  Il2CppObject *Instance; // x0
  __int64 v18; // x1

  if ( (byte_593507A & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17373/*"afterActionBk"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    sub_21FFC50(&StringLiteral_14257/*"TerminalTransitionInfoMissionId"*/);
    byte_593507A = 1;
  }
  v6 = (Il2CppObject *)System_String__Concat_75481624(
                         (System_String_o *)StringLiteral_16395/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16659/*"]"*/,
                         0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4, v5);
  v7 = JsonManager__DeserializeArray_object_(
         v6,
         (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17373/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14257/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8, v9);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10, v11);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v7, 1, 0);
  if ( !byte_5932ADC )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932ADC = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12, v13);
    v14 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  v16 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v16);
  if ( !Instance )
    sub_21FFECC(0, v18);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


bool QuestAfterAction_StateMain___c___UpdateAnim_b__16_35(
        QuestAfterAction_StateMain___c_o *this,
        TitleInfoEventRaidBossComponent_o *eventRaidBossComponent,
        const MethodInfo *method)
{
  if ( !eventRaidBossComponent )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(0, method);
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
    sub_21FFECC(spot, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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

  if ( (byte_593507B & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_21FFC50(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_593507B = 1;
  }
  v27 = 0u;
  v3 = sub_21FFEBC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v3 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v13, v15, v16, v17, v18, v19, v20);
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
    sub_21FFECC(mapGimmick, v5);
  }
  if ( LODWORD(v22->max_length) <= 2 )
LABEL_19:
    sub_21FFED4(mapGimmick);
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
  v26 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_593507C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593507C = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83246496(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_21FFECC(_4__this, v6);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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

  if ( (byte_593507D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_21FFC50(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_21FFC50(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_593507D = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, result, v5);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
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
      if ( !byte_593205C )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_593205C = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, result, v5);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_5932720 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_5932720 = 1;
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
        _9__25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_21FFBF4(
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
        ScrTerminalListTop__StartWindowMessage_43674992(v7, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_21FFECC(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    _9__16_26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v22, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    v23 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v23->__9__16_26 = _9__16_26;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__16_26, (int32_t)_9__16_26, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_593507E & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_17373/*"afterActionBk"*/);
    sub_21FFC50(&StringLiteral_14257/*"TerminalTransitionInfoMissionId"*/);
    byte_593507E = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
    sub_21FFECC(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v6);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_59350E1 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
    byte_59350E1 = 1;
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, v9, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v13 = (unsigned __int8)byte_593205C;
  v11->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !v13 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, v9, v10);
    v11 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v11->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
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
    if ( !byte_593205C )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_593205C = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v17, v18);
      v21 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v21->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_59350E2 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E2 = 1;
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
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_17373/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_14257/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v27);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
  if ( !byte_59350E3 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350E3 = 1;
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
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v32);
    v33 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v33->static_fields->_WarId_k__BackingField;
  if ( !byte_593506B )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
    byte_593506B = 1;
  }
  if ( !*(&v33->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v33, method, v32);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v35 = (unsigned __int8)byte_5931EF0;
  v33->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !v35 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
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
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v32);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
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
  QuestAfterAction_StateMain___c__DisplayClass16_0_c *klass; // x8
  float bgmVolume; // s8
  float defaultBgmVolume; // s9
  ScrTerminalListTop_o *v7; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals17; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *v9; // x8

  v3 = this;
  if ( (byte_593507F & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593507F = 1;
  }
  if ( v3->fields.bgmVolume > -1.0 )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
      this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = this[5].fields.CS___8__locals17->klass;
    if ( !klass )
      goto LABEL_20;
    bgmVolume = v3->fields.bgmVolume;
    defaultBgmVolume = v3->fields.defaultBgmVolume;
    v7 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)QuestAfterAction_TypeInfo;
    if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, method, v2);
    if ( !v7 )
LABEL_20:
      sub_21FFECC(this, method);
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
    sub_21FFECC(spot, method);
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
    sub_21FFECC(spot, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
  sub_21FFBF4(p_end, 0, v2, v3, v4, v5, v6, v7);
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
  sub_21FFBF4(
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
  sub_21FFBF4(
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)vName, v7, v8, v9, v10, v11, v12);
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
  bool result; // w0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *v49; // [xsp+18h] [xbp-38h]

  v49 = this;
  v2 = this;
  if ( (byte_5935086 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)sub_21FFC50(&QuestAfterAction_TypeInfo);
    byte_5935086 = 1;
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
      sub_21FFECC(this, method);
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
      v10 = sub_2237E2C(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v10)(
            commandEnumerable,
            *(_QWORD *)(v10 + 8));
    v49->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v11;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->fields.__7__wrap1, v11, v12, v13, v14, v15, v16, v17);
    p_fields = &v49->fields;
  }
  p_fields->__1__state = -3;
  while ( 1 )
  {
    _7__wrap1 = v49->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_21FFECC(this, method);
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
      v22 = sub_2237E2C(v49->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v22)(
            _7__wrap1,
            *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      break;
    v24 = v49->fields.__7__wrap1;
    if ( !v24 )
      sub_21FFECC(v49, v23);
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
      v28 = sub_2237E2C(
              v49->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v29 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v28)(
            v24,
            *(_QWORD *)(v28 + 8));
    v31 = (QuestAfterAction_Command_o *)v29;
    if ( !v29 )
      sub_21FFECC(0, v30);
    if ( !_4__this )
      sub_21FFECC(v29, v30);
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
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v49->fields.__2__current,
        (int32_t)v31,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      result = 1;
      v49->fields.__1__state = 1;
      return result;
    }
  }
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96____m__Finally1(v49, v23);
  v49->fields.__7__wrap1 = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->fields.__7__wrap1, 0, v43, v44, v45, v46, v47, v48);
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

  if ( (byte_5935088 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    byte_5935088 = 1;
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
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_o *)sub_21FFEBC(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    v10->fields.__4__this = _4__this;
    sub_21FFBF4(
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
  sub_21FFBF4(
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__96_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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

  if ( (byte_5935087 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_5935087 = 1;
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
      v7 = sub_2237E2C(_7__wrap1, System_IDisposable_TypeInfo, 0);
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
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__100_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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

  if ( (byte_5935081 & 1) == 0 )
  {
    sub_21FFC50(&QuestAfterAction___c_TypeInfo);
    byte_5935081 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestAfterAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction___c_o *)v1;
  sub_21FFBF4(
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
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__129_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetAfterActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetRaidUiSetupCommand_b__128_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___SetupTutorialCommandPreprocess_b__154_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___SetupTutorialCommandPreprocess_b__154_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
  if ( (byte_5935082 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    this = (QuestAfterAction___c__DisplayClass150_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_5935082 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (QuestAfterAction___c__DisplayClass150_0_o *)_4__this->fields.loadedVoiceSvtIdSet) == 0
    || (System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)this,
          v2->fields.loadingSvtId,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__),
        (this = (QuestAfterAction___c__DisplayClass150_0_o *)v2->fields.svtVInfos) == 0)
    || (System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)this,
          0,
          (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (this = (QuestAfterAction___c__DisplayClass150_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, method);
  }
  QuestAfterAction__LoadVoice_43004180((QuestAfterAction_o *)this, v2->fields.svtVInfos, v2->fields.endAct, 0);
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
  if ( (byte_5935083 & 1) == 0 )
  {
    this = (QuestAfterAction___c__DisplayClass167_0_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Any_int___);
    byte_5935083 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  tutorialLoadedSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.tutorialLoadedSvtIdList;
  _4__this->fields.isLoadingVoice = 0;
  if ( System_Linq_Enumerable__Any_int_(
         tutorialLoadedSvtIdList,
         (const MethodInfo_38327B4 *)Method_System_Linq_Enumerable_Any_int___) )
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
    sub_21FFECC(this, method);
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

  if ( (byte_5935084 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5935084 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
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

  if ( (byte_5935085 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_5935085 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 22) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(_4__this + 176), 0, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 10) = 0,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(_4__this + 80), 0, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_21FFECC(_4__this, method);
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
    sub_21FFECC(0, method);
  QuestAfterAction__SetState(_4__this, 2, 0);
}