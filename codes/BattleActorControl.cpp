void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19047 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_TypeInfo, v1, v2);
    byte_4B19047 = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void __fastcall BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_int__object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  BattleLogData_o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_Dictionary_int__object__o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_List_int__o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  Il2CppObject *v69; // x20
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  void *v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  void *v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Collections_Generic_List_T__o *v93; // x20
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  System_Collections_Hashtable_o *v103; // x20
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  System_Collections_Hashtable_o *v113; // x20
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  System_Collections_Generic_Dictionary_object__object__o *v128; // x20
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7

  if ( (byte_4B19046 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl____ctor__,
      v17,
      v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    sub_1BCA7E0(
      &System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___TypeInfo,
      v21,
      v22);
    sub_1BCA7E0(&TranslucentActorVisualInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_16811/*"act"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B19046 = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v29 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v29,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.auraList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  this->fields.actorScale = 1.0;
  v39 = (BattleLogData_o *)sub_1BCAA2C(BattleLogData_TypeInfo, v36, v37, v38);
  BattleLogData___ctor_43548088(v39, (System_String_o *)StringLiteral_16811/*"act"*/, 90, 0LL);
  this->fields.battleLog = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleLog, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  v49 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v46,
                                                                  v47,
                                                                  v48);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v49,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v49;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.buffLoopEffectDict,
    (int64_t)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v59 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v56,
                                                    v57,
                                                    v58);
  System_Collections_Generic_List_int____ctor(
    v59,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v59;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.reservedEffectBuffEffectIdList,
    (int64_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v69 = (Il2CppObject *)sub_1BCAA2C(TranslucentActorVisualInfo_TypeInfo, v66, v67, v68);
  System_Object___ctor(v69, 0LL);
  this->fields.translucentActorVisualInfo = (struct TranslucentActorVisualInfo_o *)v69;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.translucentActorVisualInfo,
    (int64_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.prevAnimEffectTriggerKey,
    (int64_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v83 = StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.partAnimationSaveKey,
    (int64_t)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v93 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___TypeInfo,
                                                  v90,
                                                  v91,
                                                  v92);
  System_Collections_Generic_List_ValueTuple_Int32Enum__object_____ctor(
    v93,
    (const MethodInfo_3548BBC *)Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl____ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *)v93;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.noblePhantasmObjectVisibleCtrList,
    (int64_t)v93,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
  v103 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v100, v101, v102);
  System_Collections_Hashtable___ctor_62980980(v103, 0LL);
  this->fields.EventList = v103;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.EventList, (int64_t)v103, v104, v105, v106, v107, v108, v109);
  v113 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v110, v111, v112);
  System_Collections_Hashtable___ctor_62980980(v113, 0LL);
  this->fields.CompleteList = v113;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.CompleteList,
    (int64_t)v113,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v128 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                      v125,
                                                                      v126,
                                                                      v127);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v128,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v128;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventClassAddedEventDict,
    (int64_t)v128,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorControl__ActiveRemainReservedBuffEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_int__o *v15; // x21

  if ( (byte_4B19032 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v4, v5);
    sub_1BCA7E0(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__355_0__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9);
    byte_4B19032 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_1BCAA3C(0LL, method);
  v11 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                         reservedEffectBuffEffectIdList,
                                                         (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  v15 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v12, v13, v14);
  System_Action_int____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__355_0__,
    0LL);
  BasicHelper__ForEach_int_(
    v11,
    (System_Action_T__o *)v15,
    (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ActiveReservedBuffEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *buffLoopEffectDict; // x0
  int v14; // w8
  void *v15; // x21
  unsigned int v16; // w22

  if ( (byte_4B19031 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__,
      *(_QWORD *)&effectId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v11, v12);
    byte_4B19031 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 1, 0LL);
    if ( this->fields.isPlayingNoblePhantasm )
    {
      buffLoopEffectDict = this->fields.buffLoopEffectDict;
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                             (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                             effectId,
                             (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      v14 = *((_DWORD *)buffLoopEffectDict + 6);
      v15 = buffLoopEffectDict;
      if ( v14 >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( v16 >= v14 )
            sub_1BCAA44(buffLoopEffectDict, *(_QWORD *)&effectId);
          buffLoopEffectDict = (void *)*((_QWORD *)v15 + (int)v16 + 4);
          if ( !buffLoopEffectDict )
            break;
          buffLoopEffectDict = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffLoopEffectDict, 0LL);
          if ( !buffLoopEffectDict )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 0, 0LL);
          v14 = *((_DWORD *)v15 + 6);
          if ( (int)++v16 >= v14 )
            goto LABEL_17;
        }
LABEL_22:
        sub_1BCAA3C(buffLoopEffectDict, *(_QWORD *)&effectId);
      }
    }
  }
LABEL_17:
  buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
  }
}


void __fastcall BattleActorControl__AddChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v10; // x20
  unsigned __int64 v11; // x22
  struct UnityEngine_GameObject_o **p_actorObject; // x25
  Il2CppObject *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8

  v4 = this;
  if ( (byte_4B19009 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v5, v6);
    this = (BattleActorControl_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__,
                                     v7,
                                     v8);
    byte_4B19009 = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                   obj,
                                   (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_17;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v10 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0LL;
    p_actorObject = &this->fields.actorObject;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v13 = (Il2CppObject *)p_actorObject[v11];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v13,
                                       (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        v20 = *(_QWORD *)&this->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v20 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v13,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v13;
          sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)v13, v14, v15, v16, v17, v18, v19);
        }
      }
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_17:
    sub_1BCAA3C(this, obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddNoblePhantasmChangedVisibleActor(
        BattleActorControl_o *this,
        int32_t timing,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x2
  BattleActorControl_o *v5; // x20
  unsigned int v6; // w21
  BattleActorControl_o *v7; // x19
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo_38F2178 *v11; // x4
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x19
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x2
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v22; // x0
  int64_t v23; // x2
  __int64 v24; // [xsp+0h] [xbp-40h] BYREF
  __int64 v25; // [xsp+8h] [xbp-38h]
  System_ValueTuple_Int32Enum__object__o v26; // 0:x0.16

  v5 = v4;
  v6 = timing;
  v7 = this;
  if ( (byte_4B18FF3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Add__,
      *(_QWORD *)&timing,
      v8);
    this = (BattleActorControl_o *)sub_1BCA7E0(
                                     &Method_System_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___ctor__,
                                     v9,
                                     v10);
    byte_4B18FF3 = 1;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( !BattleActorControl__ProcServantObjectVisibleCtr(v5, v6, 0, method) )
    return;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)v7->fields.noblePhantasmObjectVisibleCtrList;
  *(_QWORD *)&v26.fields.Item1 = &v24;
  v26.fields.Item2 = (Il2CppObject *)v6;
  v24 = 0LL;
  v25 = 0LL;
  System_ValueTuple_Int32Enum__object____ctor(
    v26,
    (int32_t)v5,
    (Il2CppObject *)Method_System_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___ctor__,
    v11);
  if ( !noblePhantasmObjectVisibleCtrList
    || (*(_QWORD *)&timing = v24,
        v18 = v25,
        items = noblePhantasmObjectVisibleCtrList->fields._items,
        v20 = Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Add__,
        ++noblePhantasmObjectVisibleCtrList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&timing);
  }
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_Int32Enum__object____AddWithResize(
      noblePhantasmObjectVisibleCtrList,
      *(System_ValueTuple_Int32Enum__object__o *)&timing,
      *(const MethodInfo_354943C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = (PartyOrganizationUtility_o *)(&items->obj + size);
    noblePhantasmObjectVisibleCtrList->fields._size = size + 1;
    v22->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v23;
    v22 = (PartyOrganizationUtility_o *)((char *)v22 + 40);
    *(_QWORD *)&v22[-1].fields._IsQuestStartMenuMode_k__BackingField = *(_QWORD *)&timing;
    sub_1BCA784(v22, 0LL, v23, v13, v14, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddOverwriteEachPhaseAnimation(
        BattleActorControl_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isEnemy,
        const MethodInfo *method)
{
  ServantAnimationOverwriteMaster_o *Master; // x0
  const MethodInfo *v10; // x1
  ServantAnimationOverwriteEntity_array *v11; // x21
  ChangeBattlePhaseNotify_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ChangeBattlePhaseOverwriteAnimation_o *v16; // x22
  const MethodInfo *v17; // x4
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_4B1902C & 1) == 0 )
  {
    sub_1BCA7E0(&ChangeBattlePhaseOverwriteAnimation_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B1902C = 1;
  }
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, *(const MethodInfo **)&svtId);
  Master = ServantAnimationOverwriteMaster__get_Master(0LL);
  if ( !Master )
    goto LABEL_9;
  Master = (ServantAnimationOverwriteMaster_o *)ServantAnimationOverwriteMaster__GetList(
                                                  Master,
                                                  svtId,
                                                  limitCount,
                                                  isEnemy,
                                                  0LL);
  if ( !Master )
    goto LABEL_9;
  v11 = (ServantAnimationOverwriteEntity_array *)Master;
  if ( Master->fields._MasterName_k__BackingField )
  {
    v12 = BattleActorControl__GetChangePhaseNotify(this, v10);
    v16 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1BCAA2C(
                                                     ChangeBattlePhaseOverwriteAnimation_TypeInfo,
                                                     v13,
                                                     v14,
                                                     v15);
    ChangeBattlePhaseOverwriteAnimation___ctor(v16, this, v11, v12, v17);
    this->fields.overwriteAnim = v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteAnim, (int64_t)v16, v18, v19, v20, v21, v22, v23);
    Master = (ServantAnimationOverwriteMaster_o *)this->fields.overwriteAnim;
    if ( Master )
    {
      BattleObserver__Add((BattleObserver_o *)Master, (BattleSubject_o *)v12, v24);
      return;
    }
LABEL_9:
    sub_1BCAA3C(Master, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddReservedEffectBuffEffectId(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4B19030 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&effectId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v5, v6);
    byte_4B19030 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList
    || (items = reservedEffectBuffEffectIdList->fields._items,
        v9 = Method_System_Collections_Generic_List_int__Add__,
        ++reservedEffectBuffEffectIdList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BCAA3C(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  }
  size = reservedEffectBuffEffectIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      reservedEffectBuffEffectIdList,
      effectId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    reservedEffectBuffEffectIdList->fields._size = size + 1;
    items->m_Items[size + 1] = effectId;
  }
}


void __fastcall BattleActorControl__AddServantVoicePlayed(
        BattleActorControl_o *this,
        System_String_array *playedSoundArray,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_object__o *v16; // x21

  v4 = this;
  if ( (byte_4B18FD2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, playedSoundArray, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_string___, v5, v6);
    sub_1BCA7E0(&Method_BattleActorControl__AddServantVoicePlayed_b__216_0__, v7, v8);
    this = (BattleActorControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B18FD2 = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1BCAA3C(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v4->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playedSoundArray);
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v16 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v13, v14, v15);
        System_Action_object____ctor(
          v16,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__216_0__,
          0LL);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v16,
          (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_string___);
      }
    }
  }
}


void __fastcall BattleActorControl__ApplySpecialWaitModeFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o **v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleActorControl_o *v8; // x8
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  int32_t Value; // w0
  int32_t v12; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v14; // x20
  unsigned __int64 v15; // x25
  __int64 v16; // x1
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  v3 = (BattleActorControl_o **)this;
  if ( (byte_4B1902F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_13437/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v4, v5);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v6, v7);
    byte_4B1902F = 1;
  }
  v8 = v3[57];
  if ( !v8 )
    goto LABEL_26;
  LOBYTE(v8[1].fields.buffLoopEffectDict) = BYTE1(v8[1].fields.buffLoopEffectDict);
  v22 = 1;
  v9 = System_Int32__ToString((int32_t)&v22, 0LL);
  v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_13437/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v9, 0LL);
  Value = ConstantMaster__getValue(v10, 0LL);
  if ( Value != -1 )
  {
    v12 = Value;
    while ( 1 )
    {
      this = v3[57];
      if ( !this )
        goto LABEL_26;
      if ( v12 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0LL) )
      {
        this = v3[53];
        if ( !this )
          goto LABEL_26;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, 0LL);
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v14 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_24:
      ++v22;
      v20 = System_Int32__ToString((int32_t)&v22, 0LL);
      v21 = System_String__Concat_62401220((System_String_o *)StringLiteral_13437/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v20, 0LL);
      v12 = ConstantMaster__getValue(v21, 0LL);
      if ( v12 == -1 )
        return;
    }
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(this, method);
      this = v3[17];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v14->fields.actorObject + v15),
                       0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ServantActor )
          break;
        this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
        if ( !this )
          break;
        if ( BYTE1(this[1].fields.buffLoopEffectDict) )
        {
          LOBYTE(this[1].fields.buffLoopEffectDict) = BYTE1(this[1].fields.buffLoopEffectDict);
          BattleActorControl__playAnimation_44433272(ServantActor, (System_String_o *)StringLiteral_24854/*"wait"*/, 0, v18);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_44433272(ServantActor, (System_String_o *)StringLiteral_24854/*"wait"*/, 1, v19);
      }
      LODWORD(m_CancellationTokenSource) = v14->fields.m_CancellationTokenSource;
      if ( (__int64)++v15 >= (int)m_CancellationTokenSource )
        goto LABEL_24;
    }
LABEL_26:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UnityEngine_MaterialPropertyBlock_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B18FA6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_MaterialPropertyBlock_TypeInfo, method, v2);
    byte_4B18FA6 = 1;
  }
  v5 = (UnityEngine_MaterialPropertyBlock_o *)sub_1BCAA2C(UnityEngine_MaterialPropertyBlock_TypeInfo, method, v2, v3);
  UnityEngine_MaterialPropertyBlock___ctor(v5, 0LL);
  this->fields.mpb = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mpb, (int64_t)v5, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeAnimationCurveEnemy(
        BattleActorControl_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattlePerformance_o *performance; // x8
  bool v8; // w21
  __int64 v9; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v12; // x25
  UnityEngine_Object_o *v13; // x20
  struct BattlePerformance_o *v14; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  __int64 v16; // x1
  Il2CppObject *ComponentInChildren_object; // x20

  v4 = this;
  if ( (byte_4B18FF9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___, enable, method);
    this = (BattleActorControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B18FF9 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_21:
    sub_1BCAA3C(this, enable);
  v8 = enable;
  v9 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_21;
    max_length = e_actorlist->max_length;
    v12 = v9 - 4;
    if ( v9 - 4 >= (int)max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_23;
    v13 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v9);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v14 = v4->fields.performance;
      if ( !v14 )
        goto LABEL_21;
      v15 = v14->fields.e_actorlist;
      if ( !v15 )
        goto LABEL_21;
      if ( v12 >= v15->max_length )
LABEL_23:
        sub_1BCAA44(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v15->obj.klass + v9);
      if ( !this )
        goto LABEL_21;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_object )
          goto LABEL_21;
        LOBYTE(ComponentInChildren_object[2].klass) = v8;
      }
    }
    performance = v4->fields.performance;
    ++v9;
    if ( !performance )
      goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeRotationEnemy(
        BattleActorControl_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattlePerformance_o *performance; // x8
  __int64 v8; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x25
  UnityEngine_Object_o *v12; // x21
  struct BattlePerformance_o *v13; // x8
  struct UnityEngine_GameObject_array *v14; // x8
  __int64 v15; // x1
  Il2CppObject *ComponentInChildren_object; // x21

  v4 = this;
  if ( (byte_4B18FF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___, enable, method);
    this = (BattleActorControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B18FF8 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_1BCAA3C(this, enable);
  v8 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_23;
    max_length = e_actorlist->max_length;
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_25;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v13 = v4->fields.performance;
      if ( !v13 )
        goto LABEL_23;
      v14 = v13->fields.e_actorlist;
      if ( !v14 )
        goto LABEL_23;
      if ( v11 >= v14->max_length )
LABEL_25:
        sub_1BCAA44(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v14->obj.klass + v8);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_object )
          goto LABEL_23;
        if ( enable )
          BattleActorRotationComponent__RotationReStart(
            (BattleActorRotationComponent_o *)ComponentInChildren_object,
            0LL);
        else
          BattleActorRotationComponent__RotationStop((BattleActorRotationComponent_o *)ComponentInChildren_object, 0LL);
      }
    }
    performance = v4->fields.performance;
    ++v8;
    if ( !performance )
      goto LABEL_23;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeShadowColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        float duration,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  BattleData_o *IsHideShadow; // x0
  __int64 v21; // x1
  struct BattlePerformance_o *performance; // x8
  float v23; // s9
  float v24; // s10
  float v25; // s11
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  unsigned __int64 m_CancellationTokenSource; // x8
  BattleData_o *v29; // x19
  unsigned __int64 v30; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  __int64 v32; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B18FFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method, v4);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76906208, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v18, v19);
    byte_4B18FFC = 1;
  }
  IsHideShadow = (BattleData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
    return;
  if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
  {
    v23 = 1.0;
    v24 = 1.0;
    v25 = 1.0;
  }
  else
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_44;
    IsHideShadow = performance->fields.data;
    if ( !IsHideShadow )
      goto LABEL_44;
    GroundShadowColor = BattleData__getGroundShadowColor(IsHideShadow, 0LL);
    v23 = GroundShadowColor.fields.r;
    v24 = GroundShadowColor.fields.g;
    v25 = GroundShadowColor.fields.b;
    a = GroundShadowColor.fields.a;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__Clear_70011412((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    v35.fields.r = v23;
    v35.fields.g = v24;
    v35.fields.b = v25;
    v35.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16346/*"_Color"*/,
      v35,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v23;
    this->fields.currentShadowColor.fields.g = v24;
    this->fields.currentShadowColor.fields.b = v25;
    this->fields.currentShadowColor.fields.a = a;
    if ( !IsHideShadow )
      goto LABEL_44;
    IsHideShadow = (BattleData_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)IsHideShadow,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)IsHideShadow, this->fields.mpb, 0LL);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    return;
  IsHideShadow = (BattleData_o *)this->fields.specialShadowObj;
  if ( !IsHideShadow
    || (IsHideShadow = (BattleData_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                         (UnityEngine_GameObject_o *)IsHideShadow,
                                         1,
                                         (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76906208)) == 0LL )
  {
LABEL_44:
    sub_1BCAA3C(IsHideShadow, v21);
  }
  m_CancellationTokenSource = (unsigned __int64)IsHideShadow->fields.m_CancellationTokenSource;
  v29 = IsHideShadow;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v30 = 0LL;
    p_rootfsm = &IsHideShadow->fields.rootfsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_35;
      if ( v30 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_45;
      IsHideShadow = (BattleData_o *)p_rootfsm[v30];
      if ( !IsHideShadow )
        goto LABEL_44;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)IsHideShadow,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      IsHideShadow = (BattleData_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
      m_CancellationTokenSource = LODWORD(v29->fields.m_CancellationTokenSource);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        if ( v30 >= m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v30];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsHideShadow,
                                         0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
      }
      else
      {
LABEL_35:
        if ( v30 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v30];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsHideShadow,
                                         0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
        if ( v30 >= LODWORD(v29->fields.m_CancellationTokenSource) )
LABEL_45:
          sub_1BCAA44(IsHideShadow, v21);
        IsHideShadow = (BattleData_o *)p_rootfsm[v30];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)IsHideShadow, 0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        v36.fields.r = v23;
        v36.fields.g = v24;
        v36.fields.b = v25;
        v36.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)IsHideShadow, v36, 0LL);
      }
      LODWORD(m_CancellationTokenSource) = v29->fields.m_CancellationTokenSource;
      ++v30;
    }
    while ( (__int64)v30 < (int)m_CancellationTokenSource );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeShadowParent(
        BattleActorControl_o *this,
        int32_t loadActorLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Transform_o *transform; // x0
  bool exist; // w21
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x2

  if ( (byte_4B18FAE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&loadActorLimitCount, method);
    sub_1BCA7E0(&StringLiteral_11534/*"RootShadow"*/, v5, v6);
    byte_4B18FAE = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&loadActorLimitCount);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    exist = TransformHelper__ExistNodeFromLvName(
              transform,
              (System_String_o *)StringLiteral_11534/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v10;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v10,
                         (System_String_o *)StringLiteral_11534/*"RootShadow"*/,
                         loadActorLimitCount,
                         0,
                         0LL);
    TransformHelper__SafeSetParentNonNull(this->fields.shadowObj, NodeFromLvName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeShadowTexture(
        BattleActorControl_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *shadowObj; // x21
  BattlePerformanceBg_o *bgPerf; // x0
  __int64 v19; // x1
  struct BattlePerformance_o *performance; // x8
  __int64 v21; // x1
  UnityEngine_Object_o *ShadowTexture; // x20
  __int64 v23; // x1
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  UnityEngine_Object_o *v26; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // [xsp+Ch] [xbp-24h] BYREF

  v35 = shadowId;
  if ( (byte_4B18FFB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, *(_QWORD *)&shadowId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3244/*"Battle/Textures/shadow_"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3245/*"Battle/Textures/shadow_1"*/, v15, v16);
    byte_4B18FFB = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&shadowId);
  bgPerf = (BattlePerformanceBg_o *)UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL);
  if ( ((unsigned __int8)bgPerf & 1) == 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_34;
    bgPerf = performance->fields.bgPerf;
    if ( !bgPerf )
      goto LABEL_34;
    ShadowTexture = (UnityEngine_Object_o *)BattlePerformanceBg__GetShadowTexture(bgPerf, shadowId, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0LL, 0LL) )
    {
      v24 = System_Int32__ToString((int32_t)&v35, 0LL);
      v25 = System_String__Concat_62401220((System_String_o *)StringLiteral_3244/*"Battle/Textures/shadow_"*/, v24, 0LL);
      v26 = UnityEngine_Resources__Load(v25, 0LL);
      if ( v26 )
      {
        if ( (UnityEngine_Texture2D_c *)v26->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v26;
        else
          ShadowTexture = 0LL;
      }
      else
      {
        ShadowTexture = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0LL, 0LL) )
    {
      v28 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_3245/*"Battle/Textures/shadow_1"*/, 0LL);
      if ( v28 )
      {
        if ( (UnityEngine_Texture2D_c *)v28->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v28;
        else
          ShadowTexture = 0LL;
      }
      else
      {
        ShadowTexture = 0LL;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(ShadowTexture, 0LL, 0LL) )
    {
      bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
      if ( bgPerf )
      {
        UnityEngine_MaterialPropertyBlock__Clear_70011412((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16346/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.currentShadowTexure,
              (int64_t)ShadowTexture,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( bgPerf )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)bgPerf, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_34:
      sub_1BCAA3C(bgPerf, v19);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeCounterAttackWait(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleServantData_o *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *v20; // x20
  System_Enum_o v22; // [xsp+8h] [xbp-48h] BYREF
  int v23; // [xsp+18h] [xbp-38h]

  v5 = animname;
  if ( (byte_4B1902A & 1) == 0 )
  {
    sub_1BCA7E0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname, isSaveAnim);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v9, v10);
    byte_4B1902A = 1;
  }
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( LOBYTE(Instance->fields.svtId.fields.currentCryptoKey) )
    return v5;
  if ( isSaveAnim && this->fields.isFirstSaveBeforePlayAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (int64_t)v5,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v5 )
    goto LABEL_15;
  if ( !System_String__StartsWith(v5, (System_String_o *)StringLiteral_24854/*"wait"*/, 0LL) )
    return v5;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_15;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0LL) )
    return v5;
  v23 = 49;
  v22.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v22.monitor = (void *)-1LL;
  Instance = (BattleServantData_o *)System_Enum__ToString(&v22, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_15:
    sub_1BCAA3C(Instance, v12);
  v20 = (System_String_o *)Instance;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)Instance, 0LL) )
    return v20;
  return v5;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_String_o *v9; // x19
  BattleActorControl_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleServantData_o *battleSvtData; // x8
  BattleFBXComponent_o *fbxcomponent; // x8
  BattleActorControl_o *v15; // x20
  System_Enum_o v17; // [xsp+8h] [xbp-48h] BYREF
  int v18; // [xsp+18h] [xbp-38h]

  v9 = animname;
  v10 = this;
  if ( (byte_4B19029 & 1) == 0 )
  {
    sub_1BCA7E0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname, isSaveAnim);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v11, v12);
    byte_4B19029 = 1;
  }
  if ( isSaveAnim && v10->fields.isFirstSaveBeforePlayAnim )
  {
    v10->fields.isFirstSaveBeforePlayAnim = 0;
    v10->fields._PlayedOriginalAnimName_k__BackingField = v9;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v10->fields._PlayedOriginalAnimName_k__BackingField,
      (int64_t)v9,
      isSaveAnim,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  if ( !v9 )
    goto LABEL_13;
  this = (BattleActorControl_o *)System_String__StartsWith(v9, (System_String_o *)StringLiteral_24854/*"wait"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return v9;
  battleSvtData = v10->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  if ( !battleSvtData->fields.isSleepWaitMode )
    return v9;
  v18 = 46;
  v17.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v17.monitor = (void *)-1LL;
  this = (BattleActorControl_o *)System_Enum__ToString(&v17, 0LL);
  fbxcomponent = v10->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_13:
    sub_1BCAA3C(this, animname);
  v15 = this;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)this, 0LL) )
    return (System_String_o *)v15;
  return v9;
}


bool __fastcall BattleActorControl__CheckAuraPriority(
        BattleActorControl_o *this,
        int32_t priority,
        const MethodInfo *method)
{
  return this->fields._currentPriority_k__BackingField <= priority;
}


void __fastcall BattleActorControl__Complete(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  struct System_Collections_Hashtable_o *CompleteList; // x0
  const MethodInfo *v9; // x3
  struct System_Collections_Hashtable_o *v10; // x8
  BattleActorControl_EventClass_o *v11; // x21
  __int64 methodPtr_low; // x9
  BattleActorControl_o *v13; // x0
  System_String_o *v14; // x1
  BattleActorControl_EventClass_o *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_4B18FD9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, name, method);
    sub_1BCA7E0(&StringLiteral_1885/*"@OnComplete Fired!\n => <{0}>:"*/, v5, v6);
    byte_4B18FD9 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1885/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_44485868(this, name, 0, v9);
    return;
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList
    || (CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._29_get_Item.method)(
                                                                  CompleteList,
                                                                  name,
                                                                  CompleteList->klass->vtable._30_set_Item.methodPtr),
        (v10 = this->fields.CompleteList) == 0LL)
    || (v11 = (BattleActorControl_EventClass_o *)CompleteList,
        CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v10->klass->vtable._39_Remove.method)(
                                                                  this->fields.CompleteList,
                                                                  name,
                                                                  v10->klass->vtable._40_get_SyncRoot.methodPtr),
        !v11) )
  {
LABEL_12:
    sub_1BCAA3C(CompleteList, v7);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v11, 0LL);
    goto LABEL_11;
  }
  sub_1BCACFC(v11);
  BattleActorControl__setAnimationEvent(v13, v14, v15, v16);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4B18FE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, eventName, motionName);
    byte_4B18FE3 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1BCAA3C(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (Il2CppObject *)motionName,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4B18FE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Remove__, eventName, motionName);
    byte_4B18FE4 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1BCAA3C(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___Remove(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4B18FAF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18FAF = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__Destroy_70154244(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19038 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14, v15);
    byte_4B19038 = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToList_int_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                 (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v19;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields._current, v18) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_1BCAA3C(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    buffLoopEffectDict,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyAuraEffect(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *effectObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19024 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__DestroyAuraEffect_d__333_TypeInfo, effectObject, method);
    byte_4B19024 = 1;
  }
  v5 = sub_1BCAA2C(BattleActorControl__DestroyAuraEffect_d__333_TypeInfo, effectObject, method, v3);
  BattleActorControl__DestroyAuraEffect_d__333___ctor((BattleActorControl__DestroyAuraEffect_d__333_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = effectObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)effectObject, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyEffectOnParticleStop(
        BattleActorControl_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19036 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__DestroyEffectOnParticleStop_d__359_TypeInfo, *(_QWORD *)&key, method);
    byte_4B19036 = 1;
  }
  v6 = sub_1BCAA2C(BattleActorControl__DestroyEffectOnParticleStop_d__359_TypeInfo, *(_QWORD *)&key, method, v3);
  BattleActorControl__DestroyEffectOnParticleStop_d__359___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 40) = key;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4B18FB0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18FB0 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__DestroyImmediate_70154432(actorObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__DestroyLoopEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *buffLoopEffectDict; // x0
  __int64 v14; // x1
  Il2CppObject *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v16; // x8
  UnityEngine_GameObject_o *v17; // x19
  int v18; // w8
  void *v19; // x20
  unsigned int v20; // w24
  __int64 v21; // x8
  _QWORD *v22; // x21
  unsigned __int64 v23; // x25
  UnityEngine_Object_o *v24; // x22

  if ( (byte_4B19037 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__,
      *(_QWORD *)&effectId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76906208, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B19037 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
           effectId,
           (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                               (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                               effectId,
                               (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v16 = this->fields.buffLoopEffectDict) == 0LL)
    || (v17 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__object___Remove(
                                       (System_Collections_Generic_Dictionary_int__object__o *)v16,
                                       effectId,
                                       (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v17)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                               v17,
                               1,
                               (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76906208)) == 0LL )
  {
LABEL_30:
    sub_1BCAA3C(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v18 = *((_DWORD *)buffLoopEffectDict + 6);
  v19 = buffLoopEffectDict;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= v18 )
        goto LABEL_29;
      buffLoopEffectDict = (void *)*((_QWORD *)v19 + (int)v20 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0LL);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      v21 = *((_QWORD *)buffLoopEffectDict + 3);
      v22 = buffLoopEffectDict;
      if ( (int)v21 >= 1 )
        break;
LABEL_25:
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        goto LABEL_26;
    }
    v23 = 0LL;
    while ( v23 < (unsigned int)v21 )
    {
      v24 = (UnityEngine_Object_o *)v22[v23 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&effectId);
      UnityEngine_Object__Destroy_70154244(v24, 0LL);
      LODWORD(v21) = *((_DWORD *)v22 + 6);
      if ( (__int64)++v23 >= (int)v21 )
        goto LABEL_25;
    }
LABEL_29:
    sub_1BCAA44(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&effectId);
  UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v17, 0LL);
}


void __fastcall BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BattleActorControl_o *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_4B18FB3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18FB3 = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(v6, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.specialShadowObj, 0LL, v7, v8, v9, v10, v11, v12);
    BattleActorControl__EnableRenderer(v13, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v14);
  }
}


void __fastcall BattleActorControl__DisplayAnimationEffect(
        BattleActorControl_o *this,
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *TriggerKey; // x20
  Il2CppObject *Value_object__object; // x21
  __int64 v15; // x1
  int64_t v16; // x2
  __int64 v17; // x3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *prevAnimEffectTriggerKey; // x0
  __int64 v23; // x1
  System_Action_object__o *v24; // x22

  if ( (byte_4B18FAD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActorAnimationEffect__TypeInfo, animName, eventTag);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___, v7, v8);
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____, v9, v10);
    sub_1BCA7E0(&Method_BattleActorControl__DisplayAnimationEffect_b__139_0__, v11, v12);
    byte_4B18FAD = 1;
  }
  TriggerKey = (Il2CppObject *)BattleActorAnimationEffect__MakeTriggerKey(
                                 animName,
                                 eventTag,
                                 (const MethodInfo *)eventTag);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                           TriggerKey,
                           0LL,
                           (const MethodInfo_2F013D8 *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0LL) )
  {
    prevAnimEffectTriggerKey = this->fields.prevAnimEffectTriggerKey;
    if ( !prevAnimEffectTriggerKey )
      sub_1BCAA3C(0LL, v15);
    if ( !System_String__Equals_62409536(prevAnimEffectTriggerKey, (System_String_o *)TriggerKey, 0LL) )
    {
      v24 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActorAnimationEffect__TypeInfo, v23, v16, v17);
      System_Action_object____ctor(
        v24,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__139_0__,
        0LL);
      BasicHelper__ForEach_object_(
        (System_Collections_Generic_IEnumerable_T__o *)Value_object__object,
        (System_Action_T__o *)v24,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)TriggerKey;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.prevAnimEffectTriggerKey,
    (int64_t)TriggerKey,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18FB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_TryGetComponent_Renderer___, target, isEnable);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B18FB2 = 1;
  }
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target);
  v8 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( !target )
      goto LABEL_11;
    if ( !UnityEngine_Component__TryGetComponent_object_(
            target,
            &component,
            (const MethodInfo_2F0A5F8 *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v8 = component;
    if ( !component )
LABEL_11:
      sub_1BCAA3C(v8, v9);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)component, isEnable, 0LL);
  }
}


bool __fastcall BattleActorControl__EndServantObjectVisibleCtr(
        BattleActorControl_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, timing, 1, v3);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleActorControl__EnumerateMaterials(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleActorControl___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__object__o *_9__294_0; // x20
  Il2CppObject *v19; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_T__o *v27; // x0

  if ( (byte_4B1900B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_Material___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v4, v5);
    sub_1BCA7E0(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleActorControl___c__EnumerateMaterials_b__294_0__, v8, v9);
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v10, v11);
    byte_4B1900B = 1;
  }
  RendererArray = BattleActorControl__GetRendererArray(this, 0, v2);
  v16 = BattleActorControl___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)RendererArray;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v13);
    v16 = BattleActorControl___c_TypeInfo;
  }
  _9__294_0 = (System_Func_object__object__o *)v16->static_fields->__9__294_0;
  if ( !_9__294_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = BattleActorControl___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__294_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo,
                                                   v13,
                                                   v14,
                                                   v15);
    System_Func_object__object____ctor(
      _9__294_0,
      v19,
      Method_BattleActorControl___c__EnumerateMaterials_b__294_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__294_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__294_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__294_0,
      (int64_t)_9__294_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         v17,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)_9__294_0,
                                                         (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
  return (System_Collections_Generic_IEnumerable_Material__o *)BasicHelper__ExcludeNull_object_(
                                                                 v27,
                                                                 (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_Material___);
}


bool __fastcall BattleActorControl__ExecuteServantObjectVisibleCtr(
        BattleActorControl_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, timing, 0, v3);
}


bool __fastcall BattleActorControl__ExistMotionEvent(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_object__bool__o *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4B18FBF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___, eventName, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___, v6, v7);
    sub_1BCA7E0(&System_Func_PlayMakerFSM__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__0__, v10, v11);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass166_0_TypeInfo, v12, v13);
    byte_4B18FBF = 1;
  }
  v14 = sub_1BCAA2C(BattleActorControl___c__DisplayClass166_0_TypeInfo, eventName, method, v3);
  BattleActorControl___c__DisplayClass166_0___ctor((BattleActorControl___c__DisplayClass166_0_o *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = eventName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)eventName, v17, v18, v19, v20, v21, v22);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v27 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_PlayMakerFSM__bool__TypeInfo, v23, v24, v25);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v14,
    Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__0__,
    0LL);
  v28 = System_Linq_Enumerable__Where_object_(
          motionFSM,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_object_(
           v28,
           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  int32_t uniqueID; // w19

  if ( (byte_4B19014 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v3);
    byte_4B19014 = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6);
    ServantAssetLoadManager__StopVoice(uniqueID, fadeoutTime, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetAddColor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v10; // x1
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19004 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v4, v5);
    sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v6, v7);
    byte_4B19004 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1BCAA3C(Item, v10);
  if ( !UnityEngine_Material__HasProperty_70020424(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16302/*"_AddColor"*/,
          0LL) )
  {
LABEL_12:
    v11 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
    goto LABEL_14;
  }
  Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Item,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Material__GetColor(
                                   (UnityEngine_Material_o *)Item,
                                   (System_String_o *)StringLiteral_16302/*"_AddColor"*/,
                                   0LL);
LABEL_14:
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v12;
  result.fields.r = v11;
  return result;
}


bool __fastcall BattleActorControl__GetBattleModelObjectVisibleControlComponentsEnable(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x8

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    sub_1BCAA3C(this, method);
  return BattleModelObjectVisibleControlComponents->max_length != 0;
}


ChangeBattlePhaseNotify_o *__fastcall BattleActorControl__GetChangePhaseNotify(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *performance; // x20
  __int64 v5; // x1
  bool v6; // w8
  ChangeBattlePhaseNotify_o *result; // x0
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x20
  bool v10; // w8
  struct BattlePerformance_o *v11; // x8
  struct BattleData_o *v12; // x8

  if ( (byte_4B1902B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1902B = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  result = 0LL;
  if ( v6 )
  {
    v8 = this->fields.performance;
    if ( !v8 )
      goto LABEL_14;
    data = (UnityEngine_Object_o *)v8->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v10 = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    result = 0LL;
    if ( v10 )
    {
      v11 = this->fields.performance;
      if ( v11 )
      {
        v12 = v11->fields.data;
        if ( v12 )
          return v12->fields.changePhaseNotify;
      }
LABEL_14:
      sub_1BCAA3C(0LL, v5);
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__GetDelayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  PlayMakerFSM_o *Fsm; // x0
  __int64 v13; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v17; // x20
  unsigned __int64 v18; // x21
  System_String_o *v19; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1903E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5336/*"DelayEnd"*/, v9, v10);
    byte_4B1903E = 1;
  }
  result = 0;
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_23;
  if ( !motionFSM->max_length )
    goto LABEL_24;
  Fsm = motionFSM->m_Items[0];
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                            (System_String_o *)StringLiteral_5336/*"DelayEnd"*/,
                            0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  Fsm = (PlayMakerFSM_o *)System_String__IsNullOrEmpty(Value, 0LL);
  if ( ((unsigned __int8)Fsm & 1) != 0 )
    return v11;
  if ( !Value || (Fsm = (PlayMakerFSM_o *)System_String__Split(Value, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_23:
    sub_1BCAA3C(Fsm, v13);
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v17 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v18 = 0LL;
    while ( v18 < (unsigned int)m_CancellationTokenSource )
    {
      v19 = (System_String_o *)*((_QWORD *)&v17->fields.fsm + v18);
      result = 0;
      Fsm = (PlayMakerFSM_o *)System_Int32__TryParse(v19, &result, 0LL);
      if ( ((unsigned __int8)Fsm & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_23;
        v13 = (unsigned int)result;
        items = v11->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v13,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v13;
        }
      }
      LODWORD(m_CancellationTokenSource) = v17->fields.m_CancellationTokenSource;
      if ( (__int64)++v18 >= (int)m_CancellationTokenSource )
        return v11;
    }
LABEL_24:
    sub_1BCAA44(Fsm, v13);
  }
  return v11;
}


float __fastcall BattleActorControl__GetHeight(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  struct BattleServantData_o *battleSvtData; // x8
  float actorScale; // s0
  float *p_height; // x8
  __int64 v7; // x1
  BattleActorControl_c *v8; // x0
  float height; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4B18FE0 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCA7E0(&BattleActorControl_TypeInfo, method, v2);
    byte_4B18FE0 = 1;
  }
  height = 0.0;
  battleSvtData = v3->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_14;
  this = (BattleActorControl_o *)battleSvtData->fields.svtdata;
  if ( !this )
    goto LABEL_14;
  if ( ServantEntity__getBattleHeight((ServantEntity_o *)this, &height, 0LL) )
  {
    actorScale = v3->fields.actorScale;
    p_height = &height;
    return *p_height * actorScale;
  }
  this = (BattleActorControl_o *)v3->fields.battleSvtData;
  if ( !this )
LABEL_14:
    sub_1BCAA3C(this, method);
  if ( BattleServantData__get_BattleSize((BattleServantData_o *)this, 0LL) == 6 )
  {
    p_height = &v3->fields.actorScale;
    actorScale = 15.0;
  }
  else
  {
    v8 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v7);
      v8 = BattleActorControl_TypeInfo;
    }
    actorScale = v3->fields.actorScale;
    p_height = &v8->static_fields->defaultHeight;
  }
  return *p_height * actorScale;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetMainColor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v10; // x1
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19003 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v4, v5);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v6, v7);
    byte_4B19003 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1BCAA3C(Item, v10);
  if ( !UnityEngine_Material__HasProperty_70020424(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16346/*"_Color"*/,
          0LL) )
  {
LABEL_12:
    v11 = 1.0;
    v12 = 1.0;
    v13 = 1.0;
    v14 = 1.0;
    goto LABEL_14;
  }
  Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Item,
                                     0,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Material__GetColor(
                                   (UnityEngine_Material_o *)Item,
                                   (System_String_o *)StringLiteral_16346/*"_Color"*/,
                                   0LL);
LABEL_14:
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v12;
  result.fields.r = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattlePlayAnimationComponent_array *__fastcall BattleActorControl__GetPlayAnimationComponents(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4B19045 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___,
      includeInactive,
      method);
    byte_4B19045 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
}


System_String_o *__fastcall BattleActorControl__GetPrefixVoiceId(
        BattleActorControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x22
  BattleServantData_o *Instance; // x0
  __int64 v7; // x1
  BattleServantData_o *v8; // x20
  struct BattleActionData_ShiftServant_o *v9; // x8
  int32_t v10; // w1
  int32_t limit; // w2
  int32_t SvtId; // w22
  const MethodInfo *v13; // x1

  if ( (byte_4B18FD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, voiceId, method);
    byte_4B18FD5 = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v8 = Instance;
  if ( !myShiftData )
  {
    Instance = this->fields.battleSvtData;
    if ( Instance )
    {
      SvtId = BattleServantData__getSvtId(Instance, 0LL);
      Instance = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v13);
      if ( v8 )
      {
        limit = (int)Instance;
        Instance = v8;
        v10 = SvtId;
        return ServantAssetLoadManager__GetPrefixVoiceId(
                 (ServantAssetLoadManager_o *)Instance,
                 v10,
                 limit,
                 voiceId,
                 0LL);
      }
    }
LABEL_11:
    sub_1BCAA3C(Instance, v7);
  }
  v9 = this->fields.myShiftData;
  if ( !v9 || !Instance )
    goto LABEL_11;
  v10 = v9->fields.svtId;
  limit = v9->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v10, limit, voiceId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_SkinnedMeshRenderer_array *__fastcall BattleActorControl__GetRendererArray(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4B1900A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____76906224,
      includeInactive,
      method);
    byte_4B1900A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  return (UnityEngine_SkinnedMeshRenderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                    gameObject,
                                                    includeInactive,
                                                    (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____76906224);
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleActorControl__GetServantObjectVisibleControlActor(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x21
  BattleActionData_o *actiondata; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x19
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_object__o *v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_int__o *v60; // x22
  __int64 v61; // x1
  Il2CppObject *current; // x20
  _BOOL8 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v67; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  Il2CppClass *klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B18FF2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass264_0__GetServantObjectVisibleControlActor_b__0__, v29, v30);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass264_0_TypeInfo, v31, v32);
    byte_4B18FF2 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v33 = sub_1BCAA2C(BattleActorControl___c__DisplayClass264_0_TypeInfo, method, v2, v3);
  BattleActorControl___c__DisplayClass264_0___ctor((BattleActorControl___c__DisplayClass264_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_29;
  *(_QWORD *)(v33 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)this, v36, v37, v38, v39, v40, v41);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleActorControl__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v33 + 16) = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)v49, v50, v51, v52, v53, v54, v55);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, 0LL),
        v60 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v57, v58, v59),
        System_Action_int____ctor(
          v60,
          (Il2CppObject *)v33,
          Method_BattleActorControl___c__DisplayClass264_0__GetServantObjectVisibleControlActor_b__0__,
          0LL),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v60,
          (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v33 + 16)) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(actiondata, v35);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)actiondata,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v82 = v81;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v82,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v82.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
    v63 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v63 )
    {
      if ( !current )
        sub_1BCAA3C(v63, v64);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
      v67 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( !v67 )
      {
        if ( !Component_object )
          sub_1BCAA3C(v67, v68);
        klass = Component_object[25].klass;
        if ( !klass )
          sub_1BCAA3C(v67, v68);
        if ( LODWORD(klass->_1.namespaze) )
        {
          if ( !v45 )
            sub_1BCAA3C(v67, v68);
          items = v45->fields._items;
          v77 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v45->fields._version;
          if ( !items )
            sub_1BCAA3C(v67, v68);
          size = v45->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v45,
              Component_object,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &items->obj.klass + size;
            v45->fields._size = size + 1;
            v79[4] = (Il2CppClass *)Component_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)(v79 + 4),
              (int64_t)Component_object,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v45;
}


UnityEngine_GameObject_array *__fastcall BattleActorControl__GetShadowSvtEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowEffectObject;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__GetTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
}


PlayMakerFSM_o *__fastcall BattleActorControl__GetUniqueMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_1BCAA3C(this, method);
  if ( !motionFSM->max_length )
    sub_1BCAA44(this, method);
  return motionFSM->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__InitAnimationEffect(
        BattleActorControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  BattleActorControl___c__DisplayClass138_0_o *v38; // x21
  UnityEngine_GameObject_o *v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  PartyOrganizationUtility_o *p_dicTriggerAnimEffects; // x19
  void *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Func_object__bool__o *v61; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  BattleActorControl___c_c *v67; // x0
  System_Func_object__object__o *_9__138_1; // x21
  Il2CppObject *v69; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  BattleActorControl___c_c *v81; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x20
  System_Func_object__object__o *_9__138_2; // x21
  Il2CppObject *v84; // x22
  struct BattleActorControl___c_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  System_Func_object__object__o *_9__138_3; // x22
  Il2CppObject *v93; // x23
  struct BattleActorControl___c_StaticFields *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v101; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7

  if ( (byte_4B18FAC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___,
      *(_QWORD *)&limitCount,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, v6, v7);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____,
      v8,
      v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___, v10, v11);
    sub_1BCA7E0(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Func_BattleActorAnimationEffect__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_BattleActorAnimationEffect__string__TypeInfo, v16, v17);
    sub_1BCA7E0(
      &System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo,
      v18,
      v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_BattleActorControl___c__InitAnimationEffect_b__138_1__, v24, v25);
    sub_1BCA7E0(&Method_BattleActorControl___c__InitAnimationEffect_b__138_2__, v26, v27);
    sub_1BCA7E0(&Method_BattleActorControl___c__InitAnimationEffect_b__138_3__, v28, v29);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass138_0__InitAnimationEffect_b__0__, v30, v31);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass138_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v36, v37);
    byte_4B18FAC = 1;
  }
  v38 = (BattleActorControl___c__DisplayClass138_0_o *)sub_1BCAA2C(
                                                         BattleActorControl___c__DisplayClass138_0_TypeInfo,
                                                         *(_QWORD *)&limitCount,
                                                         method,
                                                         v3);
  BattleActorControl___c__DisplayClass138_0___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_29;
  v38->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (PartyOrganizationUtility_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dicTriggerAnimEffects, 0LL, v41, v42, v43, v44, v45, v46);
  v48 = StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.prevAnimEffectTriggerKey,
    (int64_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
  if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
  {
    v39 = this->fields.actorObject;
    if ( v39 )
    {
      Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                                 v39,
                                                                                 (const MethodInfo_2F6302C *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v61 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_BattleActorAnimationEffect__bool__TypeInfo,
                                             v58,
                                             v59,
                                             v60);
      System_Func_object__bool____ctor(
        v61,
        (Il2CppObject *)v38,
        Method_BattleActorControl___c__DisplayClass138_0__InitAnimationEffect_b__0__,
        0LL);
      v62 = System_Linq_Enumerable__Where_object_(
              Components_object,
              (System_Func_TSource__bool__o *)v61,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v62,
                                                                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v63, 0LL) )
      {
        v67 = BattleActorControl___c_TypeInfo;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v64);
          v67 = BattleActorControl___c_TypeInfo;
        }
        _9__138_1 = (System_Func_object__object__o *)v67->static_fields->__9__138_1;
        if ( !_9__138_1 )
        {
          if ( !v67->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v67, v64);
            v67 = BattleActorControl___c_TypeInfo;
          }
          v69 = (Il2CppObject *)v67->static_fields->__9;
          _9__138_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                         System_Func_BattleActorAnimationEffect__string__TypeInfo,
                                                         v64,
                                                         v65,
                                                         v66);
          System_Func_object__object____ctor(
            _9__138_1,
            v69,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_1__,
            0LL);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__138_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__138_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__138_1,
            (int64_t)_9__138_1,
            v71,
            v72,
            v73,
            v74,
            v75,
            v76);
        }
        v77 = System_Linq_Enumerable__GroupBy_object__object_(
                v63,
                (System_Func_TSource__TKey__o *)_9__138_1,
                (const MethodInfo_2F36578 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v81 = BattleActorControl___c_TypeInfo;
        v82 = (System_Collections_Generic_IEnumerable_TSource__o *)v77;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v78);
          v81 = BattleActorControl___c_TypeInfo;
        }
        _9__138_2 = (System_Func_object__object__o *)v81->static_fields->__9__138_2;
        if ( !_9__138_2 )
        {
          if ( !v81->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v81, v78);
            v81 = BattleActorControl___c_TypeInfo;
          }
          v84 = (Il2CppObject *)v81->static_fields->__9;
          _9__138_2 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                         System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo,
                                                         v78,
                                                         v79,
                                                         v80);
          System_Func_object__object____ctor(
            _9__138_2,
            v84,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_2__,
            0LL);
          v85 = BattleActorControl___c_TypeInfo->static_fields;
          v85->__9__138_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__138_2;
          sub_1BCA784((PartyOrganizationUtility_o *)&v85->__9__138_2, (int64_t)_9__138_2, v86, v87, v88, v89, v90, v91);
          v81 = BattleActorControl___c_TypeInfo;
        }
        if ( !v81->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v81, v78);
          v81 = BattleActorControl___c_TypeInfo;
        }
        _9__138_3 = (System_Func_object__object__o *)v81->static_fields->__9__138_3;
        if ( !_9__138_3 )
        {
          if ( !v81->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v81, v78);
            v81 = BattleActorControl___c_TypeInfo;
          }
          v93 = (Il2CppObject *)v81->static_fields->__9;
          _9__138_3 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                         System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo,
                                                         v78,
                                                         v79,
                                                         v80);
          System_Func_object__object____ctor(
            _9__138_3,
            v93,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_3__,
            0LL);
          v94 = BattleActorControl___c_TypeInfo->static_fields;
          v94->__9__138_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__138_3;
          sub_1BCA784((PartyOrganizationUtility_o *)&v94->__9__138_3, (int64_t)_9__138_3, v95, v96, v97, v98, v99, v100);
        }
        v101 = System_Linq_Enumerable__ToDictionary_object__object__object_(
                 v82,
                 (System_Func_TSource__TKey__o *)_9__138_2,
                 (System_Func_TSource__TElement__o *)_9__138_3,
                 (const MethodInfo_2F4C1DC *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (PartyOrganizationUtility_c *)v101;
        sub_1BCA784(p_dicTriggerAnimEffects, (int64_t)v101, v102, v103, v104, v105, v106, v107);
      }
      return;
    }
LABEL_29:
    sub_1BCAA3C(v39, v40);
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v13; // x0
  System_Func_object__bool__o *_9__194_0; // x20
  Il2CppObject *v15; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18FC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___, method, v2);
    sub_1BCA7E0(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__194_0__, v7, v8);
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v9, v10);
    byte_4B18FC6 = 1;
  }
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return 1;
  moveToSubMemberList = (System_Collections_Generic_IEnumerable_TSource__o *)actiondata->fields.moveToSubMemberList;
  if ( !moveToSubMemberList )
    return 1;
  v13 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, method);
    v13 = BattleActorControl___c_TypeInfo;
  }
  _9__194_0 = (System_Func_object__bool__o *)v13->static_fields->__9__194_0;
  if ( !_9__194_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = BattleActorControl___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__194_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(
      _9__194_0,
      v15,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__194_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__194_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__194_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__194_0,
      (int64_t)_9__194_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  return System_Linq_Enumerable__All_object_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__194_0,
           (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
}


bool __fastcall BattleActorControl__IsAlreadyDrop(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.IsAlreadyDrop;
}


bool __fastcall BattleActorControl__IsDelayEndSequence(
        BattleActorControl_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int seqIdFromMstTDSeqWeight; // w21
  int32_t DispLimitCount; // w0

  v4 = this;
  if ( (byte_4B1903F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, entity, method);
    this = (BattleActorControl_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v5, v6);
    byte_4B1903F = 1;
  }
  if ( !entity )
    return 0;
  delayEndSequenceIdListFromMotion_k__BackingField = v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !delayEndSequenceIdListFromMotion_k__BackingField
    || !delayEndSequenceIdListFromMotion_k__BackingField->fields._size )
  {
    return 0;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_18;
  seqIdFromMstTDSeqWeight = battleSvtData->fields.seqIdFromMstTDSeqWeight;
  if ( seqIdFromMstTDSeqWeight <= 0 )
  {
    if ( TreasureDvcEntity__IsRandomTD(entity, 0LL) )
    {
      seqIdFromMstTDSeqWeight = entity->fields.cacheRandomSeqId;
    }
    else
    {
      this = (BattleActorControl_o *)v4->fields.battleSvtData;
      if ( !this )
        goto LABEL_18;
      DispLimitCount = BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
      seqIdFromMstTDSeqWeight = TreasureDvcEntity__getSeqId(entity, DispLimitCount, 0LL);
    }
  }
  this = (BattleActorControl_o *)v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
    goto LABEL_18;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)this,
         -1,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 1;
  }
  this = (BattleActorControl_o *)v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1BCAA3C(this, entity);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           seqIdFromMstTDSeqWeight,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(this, method);
  deckSvt = battleSvtData->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__isHideShadow(deckSvt, 0LL);
  return (char)deckSvt;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__IsMatchFollowingCardType(
        BattleActorControl_o *this,
        int32_t expectedType,
        int32_t targetCardIndexFromNow,
        bool allowCutInOtherSvtCard,
        bool includeTreasureDevice,
        const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8
  UnityEngine_Object_o *performance; // x24
  BattleData_o *v14; // x0
  __int64 v15; // x1
  struct BattlePerformance_o *v16; // x8
  UnityEngine_Object_o *data; // x24
  struct BattlePerformance_o *v18; // x9
  struct BattleActionData_o *v19; // x8
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v21; // x24
  __int64 v22; // x2
  bool isTreasureDvc; // w0
  unsigned int v24; // w8
  struct BattleActionData_o *v25; // x8
  int32_t actionIndex; // w8
  int32_t v27; // w10
  int32_t v28; // w21
  int32_t i; // w20
  struct BattlePerformance_o *v30; // x8

  if ( (byte_4B19041 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&expectedType, *(_QWORD *)&targetCardIndexFromNow);
    byte_4B19041 = 1;
  }
  if ( this->fields.isEnemy )
    goto LABEL_4;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return (unsigned __int8)actiondata & 1;
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&expectedType);
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_4;
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_47;
  data = (UnityEngine_Object_o *)v16->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_4;
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_47;
  v19 = this->fields.actiondata;
  if ( !v19 )
    goto LABEL_47;
  v14 = v18->fields.data;
  if ( !v14 )
    goto LABEL_47;
  SelectCommand = BattleData__getSelectCommand(v14, v19->fields.actionIndex + targetCardIndexFromNow, 0LL);
  if ( !SelectCommand
    || (v21 = SelectCommand, this->fields.uniqueID != SelectCommand->fields.uniqueId)
    || BattleCommandData__get_type(SelectCommand, 0LL) != expectedType )
  {
LABEL_4:
    LOBYTE(actiondata) = 0;
  }
  else
  {
    if ( includeTreasureDevice )
    {
      if ( allowCutInOtherSvtCard )
      {
LABEL_46:
        LOBYTE(actiondata) = 1;
        return (unsigned __int8)actiondata & 1;
      }
      goto LABEL_25;
    }
    isTreasureDvc = BattleCommandData__isTreasureDvc(v21, 0LL);
    LOBYTE(actiondata) = !isTreasureDvc;
    if ( !isTreasureDvc && !allowCutInOtherSvtCard )
    {
LABEL_25:
      if ( !byte_4B11A22 )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v15, v22);
        byte_4B11A22 = 1;
      }
      v14 = (BattleData_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
      if ( targetCardIndexFromNow >= 0 )
        v24 = targetCardIndexFromNow;
      else
        v24 = -targetCardIndexFromNow;
      if ( v24 < 2 )
        goto LABEL_46;
      v25 = this->fields.actiondata;
      if ( v25 )
      {
        actionIndex = v25->fields.actionIndex;
        if ( actionIndex >= actionIndex + targetCardIndexFromNow )
          v27 = actionIndex + targetCardIndexFromNow;
        else
          v27 = actionIndex;
        if ( actionIndex <= actionIndex + targetCardIndexFromNow )
          actionIndex += targetCardIndexFromNow;
        v28 = actionIndex - 1;
        for ( i = v27 + 1; i <= v28; ++i )
        {
          v30 = this->fields.performance;
          if ( !v30 )
            goto LABEL_47;
          v14 = v30->fields.data;
          if ( !v14 )
            goto LABEL_47;
          v14 = (BattleData_o *)BattleData__getSelectCommand(v14, i, 0LL);
          if ( !v14 )
            goto LABEL_4;
          LOBYTE(actiondata) = 0;
          if ( this->fields.uniqueID != LODWORD(v14->fields.fsm) )
            return (unsigned __int8)actiondata & 1;
        }
        goto LABEL_46;
      }
LABEL_47:
      sub_1BCAA3C(v14, v15);
    }
  }
  return (unsigned __int8)actiondata & 1;
}


bool __fastcall BattleActorControl__IsNoTouchSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *battleSvtData; // x0
  struct BattlePerformance_o *performance; // x8

  if ( BattleActorControl__isNoVoice(this, method) )
    return 1;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_8;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsNoSkipDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    return 1;
  performance = this->fields.performance;
  if ( !performance || (battleSvtData = (BattleServantData_o *)performance->fields.data) == 0LL )
LABEL_8:
    sub_1BCAA3C(battleSvtData, v3);
  return BattleData__IsNoSkipDeadFirst((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__IsVisibleByTargetNodeScale(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *checkScaleNode; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *actorObject; // x20
  float v8; // s1
  float v9; // s2
  float v10; // s0

  if ( (byte_4B18FCD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18FCD = 1;
  }
  checkScaleNode = (UnityEngine_Object_o *)this->fields.checkScaleNode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(checkScaleNode, 0LL, 0LL) )
    return 1;
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
    return 0;
  *(UnityEngine_Vector3_o *)(&v8 - 1) = GameObjectExtensions__GetLocalScale(this->fields.checkScaleNode, 0LL);
  return v10 > 0.01 && v8 > 0.01 && v9 > 0.01;
}


bool __fastcall BattleActorControl__IsVoiceOffSvt(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *performance; // x20
  BattleServantData_o *battleSvtData; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v10; // x8
  BattleData_o *v11; // x19

  if ( (byte_4B19040 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19040 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    return 0;
  v7 = this->fields.performance;
  if ( !v7 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v7->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 || this->fields.isEnemy )
    return 0;
  v10 = this->fields.performance;
  if ( !v10
    || (battleSvtData = this->fields.battleSvtData) == 0LL
    || (v11 = v10->fields.data,
        battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !v11) )
  {
LABEL_16:
    sub_1BCAA3C(battleSvtData, v6);
  }
  return BattleData__IsVoiceOffSvt(v11, (int32_t)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__LoadSavedPartAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v32; // x8
  System_Func_object__bool__o *_9__372_0; // x20
  Il2CppObject *v34; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v49; // x1
  __int64 v50; // x19
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x20
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  int64_t v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  BattlePlayAnimationComponent_o *v70; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Func_object__bool__o *v75; // x23
  Il2CppObject *v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B19042 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v4, v5);
    sub_1BCA7E0(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__372_0__, v18, v19);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass372_0__LoadSavedPartAnimation_b__1__, v20, v21);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass372_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v24, v25);
    byte_4B19042 = 1;
  }
  saveDataArray = 0LL;
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData
    && BattleServantData__TryGetPartAnimationSaveData(
         battleSvtData,
         this->fields.partAnimationSaveKey,
         &saveDataArray,
         0LL) )
  {
    PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                     this,
                                                                                     0,
                                                                                     v27);
    v32 = BattleActorControl___c_TypeInfo;
    if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v28);
      v32 = BattleActorControl___c_TypeInfo;
    }
    _9__372_0 = (System_Func_object__bool__o *)v32->static_fields->__9__372_0;
    if ( !_9__372_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32, v28);
        v32 = BattleActorControl___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__372_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_BattlePlayAnimationComponent__bool__TypeInfo,
                                                   v28,
                                                   v29,
                                                   v30);
      System_Func_object__bool____ctor(
        _9__372_0,
        v34,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__372_0__,
        0LL);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
      static_fields->__9__372_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__372_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__372_0,
        (int64_t)_9__372_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = System_Linq_Enumerable__Where_object_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__372_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v42 )
      sub_1BCAA3C(0LL, v43);
    klass = v42->klass;
    v45 = v42;
    v46 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        --v46;
        p_offset += 4;
        if ( !v46 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C1C7C0(v42, System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v45,
            *(_QWORD *)(p_method + 8));
    if ( !v50 )
      sub_1BCAA3C(0LL, v49);
    while ( 1 )
    {
      v51 = *(_QWORD *)v50;
      v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
      {
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v52;
          v53 += 4;
          if ( !v52 )
            goto LABEL_23;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_23:
        v54 = sub_1C1C7C0(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
        break;
      v58 = sub_1BCAA2C(BattleActorControl___c__DisplayClass372_0_TypeInfo, v55, v56, v57);
      BattleActorControl___c__DisplayClass372_0___ctor((BattleActorControl___c__DisplayClass372_0_o *)v58, 0LL);
      v59 = *(_QWORD *)v50;
      v60 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
      {
        v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__c **)v61 - 1) != System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo )
        {
          --v60;
          v61 += 4;
          if ( !v60 )
            goto LABEL_30;
        }
        v62 = v59 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_30:
        v62 = sub_1C1C7C0(v50, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL);
      }
      v63 = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v50, *(_QWORD *)(v62 + 8));
      if ( !v58 )
        sub_1BCAA3C(v63, v63);
      *(_QWORD *)(v58 + 16) = v63;
      sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), v63, v64, v65, v66, v67, v68, v69);
      v70 = *(BattlePlayAnimationComponent_o **)(v58 + 16);
      v71 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v75 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo,
                                             v72,
                                             v73,
                                             v74);
      System_Func_object__bool____ctor(
        v75,
        (Il2CppObject *)v58,
        Method_BattleActorControl___c__DisplayClass372_0__LoadSavedPartAnimation_b__1__,
        0LL);
      v76 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
              v71,
              (System_Func_TSource__bool__o *)v75,
              (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v70 )
        sub_1BCAA3C(v76, v76);
      BattlePlayAnimationComponent__SetSaveData(v70, (BattlePlayAnimationComponent_SaveData_o *)v76, 0LL);
    }
    v77 = *(_QWORD *)v50;
    v78 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_39;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_39:
      v80 = sub_1C1C7C0(v50, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v80)(v50, *(_QWORD *)(v80 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectParticleSwitch(
        BattleActorControl_o *this,
        bool isPlay,
        bool isNoblePhantasm,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  __int64 v18; // x1
  _DWORD *ComponentsInChildren_object; // x0
  __int64 v20; // x1
  _DWORD *v21; // x23
  int v22; // w8
  unsigned int v23; // w28
  _DWORD *v24; // x8
  UnityEngine_ParticleSystem_o *v25; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v32; // [xsp+20h] [xbp-80h] BYREF
  _DWORD *v33; // [xsp+48h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v34; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v35; // 0:x0.8

  if ( (byte_4B19035 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, isPlay, isNoblePhantasm);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
      v15,
      v16);
    byte_4B19035 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v33 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                                       buffLoopEffectDict,
                                                                                       (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v32 = v31;
LABEL_6:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v32,
            (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v32.fields._currentValue )
      sub_1BCAA3C(0LL, v18);
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)v32.fields._currentValue,
                                    1,
                                    (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192);
    v21 = ComponentsInChildren_object;
    if ( !ComponentsInChildren_object )
      sub_1BCAA3C(0LL, v20);
    v22 = ComponentsInChildren_object[6];
    if ( v22 >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= v22 )
          sub_1BCAA44(ComponentsInChildren_object, v20);
        v24 = &v21[2 * v23];
        v25 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v24 + 4);
        if ( !v25 )
          sub_1BCAA3C(ComponentsInChildren_object, v20);
        ComponentsInChildren_object = UnityEngine_ParticleSystem__get_main(
                                        *((UnityEngine_ParticleSystem_o **)v24 + 4),
                                        0LL).fields.m_ParticleSystem;
        v33 = ComponentsInChildren_object;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_1BCAA3C(ComponentsInChildren_object, v20);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_24;
          UnityEngine_ParticleSystem__Play_70434340(v25, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
          if ( !gameObject )
            sub_1BCAA3C(0LL, v28);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v33;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v34, 0, 0LL);
            v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0LL);
            if ( !v29 )
              sub_1BCAA3C(0LL, v30);
            UnityEngine_GameObject__SetActive(v29, 0, 0LL);
            goto LABEL_24;
          }
          UnityEngine_ParticleSystem__Stop_70434692(v25, 0LL);
        }
        v35.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v33;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v35, !isPlay, 0LL);
LABEL_24:
        v22 = v21[6];
        if ( (int)++v23 >= v22 )
          goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v32,
    (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_4B19039 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13599/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, isPlay, method);
    byte_4B19039 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13599/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1BCAA3C(0LL, v5);
    BattlePerformance__AllLoopEffectSwitch(performance, isPlay, 1, 0LL);
  }
  else
  {
    BattleActorControl__LoopEffectParticleSwitch(this, isPlay, 1, v6);
  }
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__MoveLoopEffectFromActorObject(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  System_Collections_Generic_List_int__o *v23; // x19
  __int64 v24; // x1
  Il2CppObject *value; // x21
  int32_t key; // w22
  _BOOL8 v27; // x0
  __int64 v28; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *parent; // x0
  __int64 v32; // x1
  System_String_o *name; // x23
  UnityEngine_Object_o *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  struct System_Int32_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v44; // x21
  UnityEngine_Transform_o *v45; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B1903A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B1903A = 1;
  }
  memset(&v48, 0, sizeof(v48));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v47,
    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v23 = 0LL;
  v48 = v47;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v48,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v48.fields._current.fields.key;
    value = v48.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v27 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v27 )
    {
      if ( !value )
        sub_1BCAA3C(v27, v28);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_1BCAA3C(0LL, v30);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_1BCAA3C(0LL, v32);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v34 )
        sub_1BCAA3C(0LL, v35);
      v36 = UnityEngine_Object__get_name(v34, 0LL);
      if ( !name )
        sub_1BCAA3C(v36, v36);
      v37 = System_String__Equals_62409536(name, v36, 0LL);
      if ( !v37 )
      {
        if ( !v23 )
        {
          v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v38,
                                                            v39,
                                                            v40);
          System_Collections_Generic_List_int____ctor(
            v23,
            (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v23 )
            sub_1BCAA3C(v37, v38);
        }
        items = v23->fields._items;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !items )
          sub_1BCAA3C(v37, v38);
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            key,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = size + 1;
          items->m_Items[size + 1] = key;
        }
        v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v44 )
          sub_1BCAA3C(v45, v45);
        UnityEngine_Transform__set_parent(v44, v45, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v48,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
  return v23;
}


void __fastcall BattleActorControl__MoveLoopEffectToActorObject(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *movedEffect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *actorObject; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v29; // x1
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_object__o *EffectBuffList; // x23
  Il2CppObject *MasterData_object; // x21
  StatusEffectPosOverwriteMaster_o *v33; // x22
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x25
  int32_t monitor; // w1
  __int64 v39; // x1
  BattleServantData_o *v40; // x0
  int32_t v41; // w26
  int32_t ActorSvtId; // w27
  const MethodInfo *v43; // x1
  __int64 LimitCount; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  Il2CppObject *Item; // x0
  __int64 v49; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v51; // x1
  UnityEngine_Transform_o *v52; // x25
  UnityEngine_Object_o *parent; // x0
  __int64 v54; // x1
  System_String_o *name; // x0
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  const MethodInfo *v64; // x1
  System_String_o *nodeName; // x27
  UnityEngine_Transform_o *v66; // x26
  int32_t v67; // w2
  __int64 NodeFromLvName; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  UnityEngine_Transform_o *v71; // x26
  struct BattleServantData_o *v72; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x0
  __int64 v80; // x1
  struct BattleServantData_o *v81; // x8
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+0h] [xbp-C0h] BYREF
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1903B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, movedEffect, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B1903B = 1;
  }
  memset(&v84, 0, sizeof(v84));
  entity = 0LL;
  if ( movedEffect )
  {
    actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, movedEffect);
    buffData = (BattleBuffData_o *)UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL);
    if ( ((unsigned __int8)buffData & 1) == 0 && movedEffect->fields._size >= 1 )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData
        || (buffData = battleSvtData->fields.buffData) == 0LL
        || (EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(
                                                                            buffData,
                                                                            0LL),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffData,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_1BCAA3C(buffData, v29);
      }
      v33 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v82,
        EffectBuffList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v84 = v82;
      while ( 1 )
      {
        v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v84,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v34 )
          break;
        if ( !v84.fields._current )
          sub_1BCAA3C(v34, v35);
        if ( !MasterData_object )
          sub_1BCAA3C(v34, v35);
        v36 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)v84.fields._current[1].klass,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v37 = v36;
        if ( v36 )
        {
          monitor = (int32_t)v36[6].monitor;
          if ( monitor >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 monitor,
                 (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v40 = this->fields.battleSvtData;
            if ( !v40 )
              sub_1BCAA3C(0LL, v39);
            v41 = (int32_t)v37[6].monitor;
            ActorSvtId = BattleServantData__getActorSvtId(v40, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v43);
            if ( !v33 )
              sub_1BCAA3C(LimitCount, v45);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v33, &entity, v41, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_1BCAA3C(0LL, v46);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                       (int32_t)v37[6].monitor,
                       (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_1BCAA3C(0LL, v49);
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Item, 0LL);
              v52 = transform;
              if ( !transform )
                sub_1BCAA3C(0LL, v51);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_1BCAA3C(0LL, v54);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_1BCAA3C(name, v56);
              if ( !name )
                sub_1BCAA3C(0LL, v56);
              if ( !System_String__Equals_62409536(name, entity->fields.nodeName, 0LL) )
              {
                if ( !byte_4B109C1 )
                {
                  sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v57, v58);
                  byte_4B109C1 = 1;
                }
                UnityEngine_Transform__set_localPosition(
                  v52,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                if ( !byte_4B109C7 )
                {
                  sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v59, v60);
                  byte_4B109C7 = 1;
                }
                UnityEngine_Transform__set_localRotation(
                  v52,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0LL);
                v62 = this->fields.actorObject;
                if ( !v62 )
                  sub_1BCAA3C(0LL, v61);
                v63 = UnityEngine_GameObject__get_transform(v62, 0LL);
                if ( !entity )
                  sub_1BCAA3C(v63, v64);
                nodeName = entity->fields.nodeName;
                v66 = v63;
                v67 = BattleActorControl__getLimitCount(this, v64);
                NodeFromLvName = (__int64)TransformHelper__getNodeFromLvName(v66, nodeName, v67, 1, 0LL);
                v71 = (UnityEngine_Transform_o *)NodeFromLvName;
                if ( !byte_4B109C1 )
                {
                  NodeFromLvName = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v69, v70);
                  byte_4B109C1 = 1;
                }
                v72 = this->fields.battleSvtData;
                if ( !v72 )
                  sub_1BCAA3C(NodeFromLvName, v69);
                if ( !entity )
                  sub_1BCAA3C(0LL, v69);
                static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                x = static_fields->zeroVector.fields.x;
                y = static_fields->zeroVector.fields.y;
                z = static_fields->zeroVector.fields.z;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v72->fields.isEnemy, 0LL);
                Offset.fields.x = x + Offset.fields.x;
                Offset.fields.y = y + Offset.fields.y;
                Offset.fields.z = z + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v52, Offset, 0LL);
                if ( !entity )
                  sub_1BCAA3C(0LL, v77);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                Rotation.fields.x = Rotation.fields.x * 0.017453;
                Rotation.fields.y = Rotation.fields.y * 0.017453;
                Rotation.fields.z = Rotation.fields.z * 0.017453;
                v89 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v52, v89, 0LL);
                if ( !entity )
                  sub_1BCAA3C(0LL, v78);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v52, Scale, 0LL);
                UnityEngine_Transform__set_parent(v52, v71, 0LL);
                v81 = this->fields.battleSvtData;
                if ( !v81 )
                  sub_1BCAA3C(v79, v80);
                if ( v81->fields.isEnemy )
                {
                  localScale = UnityEngine_Transform__get_localScale(v52, 0LL);
                  localScale.fields.x = -localScale.fields.x;
                  UnityEngine_Transform__set_localScale(v52, localScale, 0LL);
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v84,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
  }
}


void __fastcall BattleActorControl__OffTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_4B19010 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_SkipDead__, method, v2);
    sub_1BCA7E0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v4, v5);
    byte_4B19010 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCAA2C(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v7,
                                                                  v8,
                                                                  v9),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1BCAA3C(IsNoTouchSkip, v7);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v12, 0LL);
  }
}


void __fastcall BattleActorControl__OnDestroy(BattleActorControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_GameObject_o *performance; // x0
  const MethodInfo *v30; // x1
  struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v33; // w9
  UnityEngine_Object_o *actorObject; // x20
  __int64 v35; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v37; // x1
  System_Collections_Generic_List_object__o *extraLoadedVoiceArgsList; // x0
  PartyOrganizationUtility_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B18FA5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__,
      v17,
      v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v21, v22);
    byte_4B18FA5 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  this->fields.rendererArrayList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rendererArrayList, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.BattleModelObjectVisibleControlComponents = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    0LL,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_25;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v33 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v33;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
  {
    performance = this->fields.actorObject;
    if ( !performance )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         performance,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      performance = (UnityEngine_GameObject_o *)this->fields.performance;
      if ( performance )
      {
        BattlePerformance__RemoveCollider(
          (BattlePerformance_o *)performance,
          (UnityEngine_MeshCollider_o *)Component_object,
          0LL);
        goto LABEL_15;
      }
LABEL_25:
      sub_1BCAA3C(performance, v30);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v30);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v37);
  extraLoadedVoiceArgsList = (System_Collections_Generic_List_object__o *)this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (PartyOrganizationUtility_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      extraLoadedVoiceArgsList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v40 )
        break;
      if ( !v51.fields._current )
        sub_1BCAA3C(v40, v41);
      klass = (int32_t)v51.fields._current[1].klass;
      klass_high = HIDWORD(v51.fields._current[1].klass);
      monitor = (int32_t)v51.fields._current[1].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v41);
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_1BCA784(p_extraLoadedVoiceArgsList, 0LL, v45, v46, v47, v48, v49, v50);
  }
}


void __fastcall BattleActorControl__OnEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleActorControl_o *v5; // x20
  struct BattleFBXComponent_o *fbxcomponent; // x8
  const MethodInfo *v7; // x3
  __int64 methodPtr_low; // x9
  BattleActorControl_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v5 = this;
  if ( (byte_4B18FD8 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, name, method);
    byte_4B18FD8 = 1;
  }
  fbxcomponent = v5->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_13;
  BattleActorControl__DisplayAnimationEffect(v5, fbxcomponent->fields.currentCommonAnimName, name, v3);
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
          this,
          name,
          this->klass[1].vtable._3_ToString.methodPtr) & 1) == 0 )
  {
LABEL_12:
    BattleActorControl__sendEventFSM_44485868(v5, name, 0, v7);
    return;
  }
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this
    || (this = (BattleActorControl_o *)((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._4_GetTransform.method)(
                                         this,
                                         name,
                                         this->klass[1].vtable._5_getCriterialPos.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(this, name);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc((BattleActorControl_EventClass_o *)this, 0LL);
    this = (BattleActorControl_o *)v5->fields.EventList;
    if ( this )
    {
      ((void (__fastcall *)(BattleActorControl_o *, System_String_o *, void *))this->klass[2]._1.events)(
        this,
        name,
        this->klass[2]._1.properties);
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  sub_1BCACFC(this);
  BattleActorControl__Complete(v9, v10, v11);
}


void __fastcall BattleActorControl__OnFinishDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_particleDisconnectorObj; // x19
  UnityEngine_Object_o *v5; // x20
  struct ParticleDisconnector_o *particleDisconnectorObj; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18FE1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18FE1 = 1;
  }
  particleDisconnectorObj = this->fields.particleDisconnectorObj;
  p_particleDisconnectorObj = (PartyOrganizationUtility_o *)&this->fields.particleDisconnectorObj;
  v5 = (UnityEngine_Object_o *)particleDisconnectorObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_particleDisconnectorObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_1BCA784(p_particleDisconnectorObj, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall BattleActorControl__OnNoblePhantasmLoadComplete(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t performance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v10; // x20
  int64_t v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  TreasureDvcEntity_o *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  int v21; // w8
  struct BattleServantData_o *v22; // x9
  int32_t v23; // w10
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  System_Collections_IEnumerator_o *v26; // x0

  if ( (byte_4B18FF5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__268_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6, v7);
    byte_4B18FF5 = 1;
  }
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_23;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( !performance )
    goto LABEL_23;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v10 = (BattleSequenceManager_o *)performance;
  performance = (int64_t)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_23;
  performance = (int64_t)TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0LL);
  if ( !v10 )
    goto LABEL_23;
  BattleSequenceManager__SetIntactBgms(v10, (System_Int32_array *)performance, 0LL);
  performance = (int64_t)this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_23;
  if ( *(_BYTE *)(performance + 479) )
  {
    performance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_23;
    v11 = performance;
    performance = (int64_t)BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v11 )
      goto LABEL_23;
    *(_QWORD *)(v11 + 264) = performance;
    sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 264), performance, v12, v13, v14, v15, v16, v17);
    performance = (int64_t)this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_23;
  }
  performance = (int64_t)BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v18 = (TreasureDvcEntity_o *)performance;
  performance = BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v18 )
    goto LABEL_23;
  performance = (int64_t)TreasureDvcEntity__getFixAppearanceInfoArray(v18, performance, 0LL);
  if ( !performance )
    goto LABEL_21;
  if ( *(_DWORD *)(performance + 24) < 2u )
    sub_1BCAA44(performance, obj);
  v21 = *(_DWORD *)(performance + 32);
  if ( v21 < 1 )
  {
LABEL_21:
    v26 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_22;
  }
  v22 = this->fields.battleSvtData;
  if ( !v22 )
LABEL_23:
    sub_1BCAA3C(performance, obj);
  v23 = *(_DWORD *)(performance + 36);
  v22->fields.tmpAppearanceId = v21;
  v22->fields.isForceAppearance = 1;
  v22->fields.dressDispId = v23;
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, obj, v19, v20);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__268_0__,
    0LL);
  v26 = BattleActorControl__waitChangeApp(this, v24, v25);
LABEL_22:
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
}


void __fastcall BattleActorControl__OnNoblePhantasmPlayComplete(
        BattleActorControl_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  BattlePerformance_o *performance; // x20
  struct BattlePerformance_o *v23; // x8
  struct BattlePerformance_o *v24; // x8
  const MethodInfo *v25; // x1
  struct BattlePerformance_o *v26; // x8
  const MethodInfo *v27; // x2
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2
  System_Collections_IEnumerator_o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  struct System_Action_o *noblePhantasmCallback; // x8
  struct BattlePerformance_o *v36; // x8
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2

  if ( (byte_4B18FF7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, seq, method);
    sub_1BCA7E0(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__270_0__, v4, v5);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_GC_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_6505/*"FINISHED"*/, v16, v17);
    byte_4B18FF7 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !battleSvtData )
    goto LABEL_48;
  ((void (__fastcall *)(struct BattleServantData_o *, BattleServantData_o *, BattleActorControl_o *, struct BattlePerformance_o *, void *))battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.method)(
    battleSvtData,
    Instance,
    this,
    this->fields.performance,
    battleSvtData->klass[1]._1.image);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__changeNp(Instance, Instance->fields.tmpNp + Instance->fields.np, 0, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__updateNpGauge(Instance, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__updateTDGauge(Instance, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)Instance, this->fields.backupFov, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  LOBYTE(Instance->fields.equiphp) = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__OnEndNoblePhantasm((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v21);
  System_GC__Collect_63447616(0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  performance = this->fields.performance;
  Instance = (BattleServantData_o *)BattleServantData__get_TreasureDevice(Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  if ( !performance )
    goto LABEL_48;
  BattlePerformance__endNoblePhantasm(performance, Instance->fields.index, 0LL);
  v23 = this->fields.performance;
  if ( !v23 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v23->fields.bgPerf;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__setDamageTargetVoiceFlg((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_48;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)Instance, 1, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__changeShadowType((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)Instance, 0LL);
  v24 = this->fields.performance;
  if ( !v24 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v24->fields.commandPerf;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)Instance, 1, 0LL);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v25);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__ResetOverwriteNobleDamageAnimationFlg((BattlePerformance_o *)Instance, 0LL);
  v26 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v26 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v26->fields.logic;
  if ( !Instance )
    goto LABEL_48;
  BattleLogic__ChangePhase((BattleLogic_o *)Instance, 3, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v27);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)Instance, 1, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  if ( BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v28, v29);
    System_Action___ctor(
      v30,
      (Il2CppObject *)this,
      Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__270_0__,
      0LL);
    v32 = BattleActorControl__waitChangeApp(this, v30, v31);
    Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                        (UnityEngine_MonoBehaviour_o *)this,
                                        v32,
                                        0LL);
  }
  else
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_48;
    BattlePerformance__noblePhantasmWhiteInFade((BattlePerformance_o *)Instance, 0.2, 0.3, 0LL);
    noblePhantasmCallback = this->fields.noblePhantasmCallback;
    if ( noblePhantasmCallback )
    {
      if ( BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v33);
        noblePhantasmCallback = this->fields.noblePhantasmCallback;
        BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
        if ( !noblePhantasmCallback )
          goto LABEL_48;
      }
      Instance = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
                                          noblePhantasmCallback->fields.original_method_info,
                                          *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
    }
    else
    {
      BattleActorControl__sendEventFSM_44485868(this, (System_String_o *)StringLiteral_6505/*"FINISHED"*/, 0, v34);
    }
  }
  v36 = this->fields.performance;
  if ( !v36 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v36->fields.data;
  if ( !Instance )
    goto LABEL_48;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v37);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v38);
  }
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
LABEL_48:
    sub_1BCAA3C(Instance, v20);
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)Instance, 0, 1, 0LL);
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_4B1900F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_SkipDead__, method, v2);
    sub_1BCA7E0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v4, v5);
    byte_4B1900F = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCAA2C(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v7,
                                                                  v8,
                                                                  v9),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1BCAA3C(IsNoTouchSkip, v7);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v12, 0LL);
  }
}


System_String_o *__fastcall BattleActorControl__OverwriteAnimation(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  bool v4; // w20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  System_String_o *result; // x0
  const MethodInfo *v9; // x3
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x8

  v4 = isSaveAnim;
  v6 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, isSaveAnim, method);
  result = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v6, v4, v7);
  overwriteAnim = this->fields.overwriteAnim;
  if ( overwriteAnim )
    return ChangeBattlePhaseOverwriteAnimation__Overwrite(overwriteAnim, this, result, v9);
  return result;
}


void __fastcall BattleActorControl__PlayMatchPartAnimation(
        BattleActorControl_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Func_object__bool__o *v41; // x20
  System_Collections_Generic_IEnumerable_T__o *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_object__o *v46; // x20

  if ( (byte_4B19044 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattlePlayAnimationComponent__TypeInfo, key, animName);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v11, v12);
    sub_1BCA7E0(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass375_0__PlayMatchPartAnimation_b__0__, v15, v16);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass375_0__PlayMatchPartAnimation_b__1__, v17, v18);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass375_0_TypeInfo, v19, v20);
    byte_4B19044 = 1;
  }
  v21 = sub_1BCAA2C(BattleActorControl___c__DisplayClass375_0_TypeInfo, key, animName, method);
  BattleActorControl___c__DisplayClass375_0___ctor((BattleActorControl___c__DisplayClass375_0_o *)v21, 0LL);
  if ( !v21 )
    sub_1BCAA3C(v22, v23);
  *(_QWORD *)(v21 + 16) = key;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)key, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = animName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)animName, v30, v31, v32, v33, v34, v35);
  *(float *)(v21 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v36);
  v41 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BattlePlayAnimationComponent__bool__TypeInfo,
                                         v38,
                                         v39,
                                         v40);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v21,
    Method_BattleActorControl___c__DisplayClass375_0__PlayMatchPartAnimation_b__0__,
    0LL);
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v41,
                                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v46 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattlePlayAnimationComponent__TypeInfo, v43, v44, v45);
  System_Action_object____ctor(
    v46,
    (Il2CppObject *)v21,
    Method_BattleActorControl___c__DisplayClass375_0__PlayMatchPartAnimation_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v42,
    (System_Action_T__o *)v46,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
}


void __fastcall BattleActorControl__PreDestroyActor(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x19
  UnityEngine_Transform_o *transform; // x1

  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__ProcServantObjectVisibleCtr(
        BattleActorControl_o *this,
        int32_t timing,
        bool isEnd,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x24
  int max_length; // w8
  BattleActorControl_o *v6; // x19
  int v9; // w27
  bool v10; // w23
  char v11; // w26
  bool v12; // w25
  _BOOL4 v13; // w28
  Il2CppClass **v14; // x8
  BattleModelObjectVisibleControlComponent_o *v15; // x22
  BattleModelObjectVisibleControlComponent_o *v16; // x0

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    goto LABEL_21;
  max_length = BattleModelObjectVisibleControlComponents->max_length;
  v6 = this;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = isEnd;
  do
  {
    if ( v9 >= (unsigned int)max_length )
      sub_1BCAA44(this, *(_QWORD *)&timing);
    v14 = &BattleModelObjectVisibleControlComponents->obj.klass + v9;
    v15 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( !v15 )
      goto LABEL_21;
    v16 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( isEnd )
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__EndProc(v16, timing, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    else
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__ExecuteProc(v16, timing, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__IsSkinnedMesh(v15, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = 1;
      v10 = v15->fields.visible != v13;
    }
    v12 = 1;
LABEL_13:
    max_length = BattleModelObjectVisibleControlComponents->max_length;
    ++v9;
  }
  while ( v9 < max_length );
  if ( (v11 & 1) != 0 && v12 )
  {
    this = (BattleActorControl_o *)v6->fields.fbxcomponent;
    if ( this )
    {
      BattleFBXComponent__SetActiveActorEffectAll((BattleFBXComponent_o *)this, v10, 0LL);
      return v12;
    }
LABEL_21:
    sub_1BCAA3C(this, *(_QWORD *)&timing);
  }
  return v12;
}


void __fastcall BattleActorControl__RemoveChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v10; // x20
  unsigned __int64 v11; // x22
  struct UnityEngine_GameObject_o **p_actorObject; // x25
  Il2CppObject *v13; // x21

  v4 = this;
  if ( (byte_4B19008 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v5, v6);
    this = (BattleActorControl_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__,
                                     v7,
                                     v8);
    byte_4B19008 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                   obj,
                                   (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v10 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0LL;
    p_actorObject = &this->fields.actorObject;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v13 = (Il2CppObject *)p_actorObject[v11];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v13,
                                       (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_object___Remove(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v13,
                                         (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_14:
    sub_1BCAA3C(this, obj);
  }
}


void __fastcall BattleActorControl__RemoveEventClass(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *EventList; // x0

  EventList = this->fields.EventList;
  if ( !EventList )
    sub_1BCAA3C(0LL, eventName);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._39_Remove.method)(
    EventList,
    eventName,
    EventList->klass->vtable._40_get_SyncRoot.methodPtr);
}


void __fastcall BattleActorControl__RemoveOverwriteEachPhaseAnimation(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleObserver_o *overwriteAnim; // x1
  PartyOrganizationUtility_o *p_overwriteAnim; // x19

  overwriteAnim = (BattleObserver_o *)this->fields.overwriteAnim;
  if ( overwriteAnim )
  {
    p_overwriteAnim = (PartyOrganizationUtility_o *)&this->fields.overwriteAnim;
    if ( overwriteAnim->fields.battleSubject )
      BattleSubject__Remove(overwriteAnim->fields.battleSubject, overwriteAnim, v2);
    p_overwriteAnim->klass = 0LL;
    sub_1BCA784(p_overwriteAnim, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
  }
}


void __fastcall BattleActorControl__RemovePartAnimationSaveData(
        BattleActorControl_o *this,
        bool isAll,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  System_String_o *partAnimationSaveKey; // x1

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
  {
    if ( isAll )
      partAnimationSaveKey = 0LL;
    else
      partAnimationSaveKey = this->fields.partAnimationSaveKey;
    BattleServantData__RemovePartAnimationSaveData(battleSvtData, partAnimationSaveKey, 0LL);
  }
}


void __fastcall BattleActorControl__ResetAddColorOfMaterials(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_Material__o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleActorControl___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  System_Action_object__o *_9__295_0; // x20
  Il2CppObject *v17; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1900C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Material__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_Material___, v4, v5);
    sub_1BCA7E0(&Method_BattleActorControl___c__ResetAddColorOfMaterials_b__295_0__, v6, v7);
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v8, v9);
    byte_4B1900C = 1;
  }
  v10 = BattleActorControl__EnumerateMaterials(this, method);
  v14 = BattleActorControl___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)v10;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v11);
    v14 = BattleActorControl___c_TypeInfo;
  }
  _9__295_0 = (System_Action_object__o *)v14->static_fields->__9__295_0;
  if ( !_9__295_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, v11);
      v14 = BattleActorControl___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__295_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Material__TypeInfo, v11, v12, v13);
    System_Action_object____ctor(
      _9__295_0,
      v17,
      Method_BattleActorControl___c__ResetAddColorOfMaterials_b__295_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__295_0 = (struct System_Action_Material__o *)_9__295_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__295_0,
      (int64_t)_9__295_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  BasicHelper__ForEach_object_(
    v15,
    (System_Action_T__o *)_9__295_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_Material___);
}


void __fastcall BattleActorControl__RevertDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v5; // x1
  BattleFBXComponent_o *v6; // x0

  if ( (byte_4B1902E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1902E = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL) )
    {
      v6 = this->fields.fbxcomponent;
      if ( !v6 )
        sub_1BCAA3C(0LL, v5);
      BattleFBXComponent__RevertDefaultAnimation(v6, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BattleActorControl___c__DisplayClass289_0_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_object__o *v19; // x22

  if ( (byte_4B19007 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_Material__TypeInfo, method, v3);
    sub_1BCA7E0(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___, v7, v8);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass289_0__SetActorAlpha_b__0__, v9, v10);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass289_0_TypeInfo, v11, v12);
    byte_4B19007 = 1;
  }
  v13 = (BattleActorControl___c__DisplayClass289_0_o *)sub_1BCAA2C(
                                                         BattleActorControl___c__DisplayClass289_0_TypeInfo,
                                                         method,
                                                         v3,
                                                         v4);
  BattleActorControl___c__DisplayClass289_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v19 = (System_Action_object__o *)sub_1BCAA2C(System_Action_Material__TypeInfo, v15, v16, v17);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_BattleActorControl___c__DisplayClass289_0__SetActorAlpha_b__0__,
    0LL);
  BattleActorControl__UpdateMaterialsOnRenderders_object_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v19,
    (const MethodInfo_2F03354 *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetAddColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x19
  _BOOL8 v22; // x0
  __int64 v23; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v25; // x1
  UnityEngine_Material_array *v26; // x19
  __int64 v27; // x8
  unsigned __int64 v28; // x25
  UnityEngine_Object_o *v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B19006 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method, v3);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v17, v18);
    byte_4B19006 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v31 = v30;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v31.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v22 )
      {
        if ( !current )
          sub_1BCAA3C(v22, v23);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v26 = materials;
        if ( !materials )
          sub_1BCAA3C(0LL, v25);
        v27 = *(_QWORD *)&materials->max_length;
        if ( (int)v27 >= 1 )
        {
          v28 = 0LL;
          do
          {
            if ( v28 >= (unsigned int)v27 )
              sub_1BCAA44(materials, v25);
            v29 = (UnityEngine_Object_o *)v26->m_Items[v28];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v29 )
                sub_1BCAA3C(materials, v25);
              v32.fields.r = r;
              v32.fields.g = g;
              v32.fields.b = b;
              v32.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v29,
                (System_String_o *)StringLiteral_16302/*"_AddColor"*/,
                v32,
                0LL);
            }
            LODWORD(v27) = v26->max_length;
            ++v28;
          }
          while ( (__int64)v28 < (int)v27 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


void __fastcall BattleActorControl__SetAlreadyDrop(BattleActorControl_o *this, bool isDrop, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    battleSvtData->fields.IsAlreadyDrop = isDrop;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetBillBoardGroup(
        BattleActorControl_o *this,
        int32_t gId,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4B19028 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___, *(_QWORD *)&gId, method);
    byte_4B19028 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v6);
  LODWORD(Component_object[4].monitor) = gId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetDispServant(
        BattleActorControl_o *this,
        bool isShadow,
        bool isChoco,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *p_klass; // x8
  PartyOrganizationUtility_o *p_shadowEffectObject; // x21
  unsigned __int64 v11; // x24
  __int64 v12; // x26
  unsigned __int64 v13; // x9
  UnityEngine_Object_o *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_c *klass; // x8
  BattleServantData_o *battleSvtData; // x23
  UnityEngine_GameObject_o *actorObject; // x24
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  UnityEngine_GameObject_array *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  v6 = this;
  if ( (byte_4B18FFA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, isShadow, isChoco);
    this = (BattleActorControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18FFA = 1;
  }
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  p_shadowEffectObject = (PartyOrganizationUtility_o *)&v6->fields.shadowEffectObject;
  if ( p_klass )
  {
    v11 = 0LL;
    v12 = 32LL;
    while ( 1 )
    {
      v13 = *((unsigned int *)p_klass + 6);
      if ( (__int64)v11 >= (int)v13 )
        break;
      if ( v11 >= v13 )
        goto LABEL_17;
      v14 = (UnityEngine_Object_o *)p_klass[v11 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isShadow);
      UnityEngine_Object__Destroy_70154244(v14, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v11 >= LODWORD(klass->_1.namespaze) )
LABEL_17:
          sub_1BCAA44(this, isShadow);
        *(void **)((char *)&klass->_1.image + v12) = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)klass + v12), 0LL, v15, v16, v17, v18, v19, v20);
        p_klass = &p_shadowEffectObject->klass->_1.image;
        ++v11;
        v12 += 8LL;
        if ( p_shadowEffectObject->klass )
          continue;
      }
      goto LABEL_18;
    }
  }
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
LABEL_18:
    sub_1BCAA3C(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, isShadow);
  v25 = BattleEffectUtility__ChangeServantView(battleSvtData, actorObject, isShadow, isChoco, svtlimitaddent, 0LL);
  p_shadowEffectObject->klass = (PartyOrganizationUtility_c *)v25;
  sub_1BCA784(p_shadowEffectObject, (int64_t)v25, v26, v27, v28, v29, v30, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMainColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x19
  _BOOL8 v22; // x0
  __int64 v23; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v25; // x1
  UnityEngine_Material_array *v26; // x19
  __int64 v27; // x8
  unsigned __int64 v28; // x25
  UnityEngine_Object_o *v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B19005 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method, v3);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v17, v18);
    byte_4B19005 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v31 = v30;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v31.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v22 )
      {
        if ( !current )
          sub_1BCAA3C(v22, v23);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v26 = materials;
        if ( !materials )
          sub_1BCAA3C(0LL, v25);
        v27 = *(_QWORD *)&materials->max_length;
        if ( (int)v27 >= 1 )
        {
          v28 = 0LL;
          do
          {
            if ( v28 >= (unsigned int)v27 )
              sub_1BCAA44(materials, v25);
            v29 = (UnityEngine_Object_o *)v26->m_Items[v28];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v29 )
                sub_1BCAA3C(materials, v25);
              v32.fields.r = r;
              v32.fields.g = g;
              v32.fields.b = b;
              v32.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v29,
                (System_String_o *)StringLiteral_16346/*"_Color"*/,
                v32,
                0LL);
            }
            LODWORD(v27) = v26->max_length;
            ++v28;
          }
          while ( (__int64)v28 < (int)v27 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o fadeColour,
        float alpha,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  struct BattleServantData_o *v20; // x8
  int32_t displayType; // w8
  bool v22; // w1
  bool v23; // w2
  int uniqueId; // w8
  BattleServantData_o *v25; // x19
  unsigned int v26; // w22
  float v27; // s15
  BattleServantData_c **v28; // x8
  UnityEngine_Renderer_o *v29; // x20
  float v30; // s14
  float v31; // s13
  float v32; // s12
  UnityEngine_Material_o *material; // x0
  float v34; // s11
  float v35; // s10
  float v36; // s9
  float a; // s8
  __int64 v38; // x8
  BattleServantData_o *v39; // x20
  float v40; // s8
  unsigned __int64 v41; // x26
  float v42; // s12
  float v43; // s13
  float v44; // s9
  float v45; // s14
  float v46; // s10
  float v47; // s11
  UnityEngine_Object_o *v48; // x21
  float v49; // [xsp+4h] [xbp-9Ch]
  float v50; // [xsp+8h] [xbp-98h]
  float v51; // [xsp+Ch] [xbp-94h]
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o ColorOrDefault; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_4B19002 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method, v4);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v14, v15);
    byte_4B19002 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  if ( BattleServantData__isAppearanceId(battleSvtData, 0LL) )
  {
    BattleActorControl__SetMaterialWhite(this, v17);
    BattleActorControl__ResetAddColorOfMaterials(this, v19);
  }
  else
  {
    v20 = this->fields.battleSvtData;
    if ( v20 )
    {
      displayType = v20->fields.displayType;
      v22 = displayType == 2;
      v23 = displayType == 3;
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    BattleActorControl__SetDispServant(this, v22, v23, v18);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_30:
    sub_1BCAA3C(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v25 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v26 = 0;
    v50 = g * alpha;
    v51 = r * alpha;
    v27 = 1.0 - alpha;
    v49 = b * alpha;
    while ( 1 )
    {
      if ( v26 >= uniqueId )
        goto LABEL_29;
      v28 = &v25->klass + (int)v26;
      v29 = (UnityEngine_Renderer_o *)v28[4];
      if ( !v29 )
        goto LABEL_30;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v28[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      v30 = color.fields.r;
      v31 = color.fields.g;
      v32 = color.fields.b;
      material = UnityEngine_Renderer__get_material(v29, 0LL);
      v53.fields.r = 0.0;
      v53.fields.g = 0.0;
      v53.fields.b = 0.0;
      v53.fields.a = 0.0;
      ColorOrDefault = MaterialExtensions__GetColorOrDefault(material, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v53, 0LL);
      v34 = ColorOrDefault.fields.r;
      v35 = ColorOrDefault.fields.g;
      v36 = ColorOrDefault.fields.b;
      a = ColorOrDefault.fields.a;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v29, 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      v38 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v39 = battleSvtData;
      if ( (int)v38 >= 1 )
        break;
LABEL_27:
      uniqueId = v25->fields.uniqueId;
      if ( (int)++v26 >= uniqueId )
        return;
    }
    v40 = a + 0.0;
    v41 = 0LL;
    v42 = v27 * v32;
    v43 = v27 * v31;
    v44 = v49 + v36;
    v45 = v27 * v30;
    v46 = v50 + v35;
    v47 = v51 + v34;
    while ( v41 < (unsigned int)v38 )
    {
      v48 = (UnityEngine_Object_o *)*(&v39->fields.userSvtId.fields.currentCryptoKey + v41);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v48 )
          goto LABEL_30;
        v55.fields.a = 1.0;
        v55.fields.r = v45;
        v55.fields.g = v43;
        v55.fields.b = v42;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v48, (System_String_o *)StringLiteral_16346/*"_Color"*/, v55, 0LL);
        v56.fields.r = v47;
        v56.fields.g = v46;
        v56.fields.b = v44;
        v56.fields.a = v40;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v48, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v56, 0LL);
      }
      LODWORD(v38) = v39->fields.uniqueId;
      if ( (__int64)++v41 >= (int)v38 )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BCAA44(battleSvtData, method);
  }
}


void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *gameObject; // x0
  __int64 v9; // x1
  int v10; // w8
  _DWORD *v11; // x19
  unsigned int v12; // w22
  char *v13; // x8
  UnityEngine_Renderer_o *v14; // x20
  unsigned __int64 v15; // x25
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19001 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v6, v7);
    byte_4B19001 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_23;
  v10 = *((_DWORD *)gameObject + 6);
  v11 = gameObject;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
LABEL_24:
        sub_1BCAA44(gameObject, v9);
      v13 = (char *)&v11[2 * v12];
      v14 = (UnityEngine_Renderer_o *)*((_QWORD *)v13 + 4);
      if ( !v14 )
        break;
      gameObject = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v13 + 4), 0LL);
      if ( !gameObject )
        break;
      v15 = 0LL;
      while ( (__int64)v15 < *((int *)gameObject + 6) )
      {
        gameObject = UnityEngine_Renderer__get_materials(v14, 0LL);
        if ( !gameObject )
          goto LABEL_23;
        if ( v15 >= *((unsigned int *)gameObject + 6) )
          goto LABEL_24;
        v16 = (UnityEngine_Object_o *)*((_QWORD *)gameObject + v15 + 4);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        gameObject = (void *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_23;
          v17.fields.r = 1.0;
          v17.fields.g = 1.0;
          v17.fields.b = 1.0;
          v17.fields.a = 1.0;
          UnityEngine_Material__SetColor(
            (UnityEngine_Material_o *)v16,
            (System_String_o *)StringLiteral_16346/*"_Color"*/,
            v17,
            0LL);
        }
        ++v15;
        gameObject = UnityEngine_Renderer__get_materials(v14, 0LL);
        if ( !gameObject )
          goto LABEL_23;
      }
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        return;
    }
LABEL_23:
    sub_1BCAA3C(gameObject, v9);
  }
}


void __fastcall BattleActorControl__SetPartAnimationSaveData(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  BattlePlayAnimationComponent_array *PlayAnimationComponents; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  BattleActorControl___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_object__bool__o *_9__373_0; // x21
  Il2CppObject *v27; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  BattleActorControl___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  System_Func_object__object__o *_9__373_1; // x21
  Il2CppObject *v42; // x22
  struct BattleActorControl___c_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  System_Object_array *v52; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_4B19043 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___,
      v4,
      v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v8, v9);
    sub_1BCA7E0(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__373_0__, v14, v15);
    sub_1BCA7E0(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__373_1__, v16, v17);
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v18, v19);
    byte_4B19043 = 1;
  }
  PlayAnimationComponents = BattleActorControl__GetPlayAnimationComponents(this, 0, v2);
  v24 = BattleActorControl___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayAnimationComponents;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v21);
    v24 = BattleActorControl___c_TypeInfo;
  }
  _9__373_0 = (System_Func_object__bool__o *)v24->static_fields->__9__373_0;
  if ( !_9__373_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v21);
      v24 = BattleActorControl___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__373_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_BattlePlayAnimationComponent__bool__TypeInfo,
                                                 v21,
                                                 v22,
                                                 v23);
    System_Func_object__bool____ctor(
      _9__373_0,
      v27,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__373_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__373_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__373_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__373_0,
      (int64_t)_9__373_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)_9__373_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v39 = BattleActorControl___c_TypeInfo;
  v40 = v35;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v36);
    v39 = BattleActorControl___c_TypeInfo;
  }
  _9__373_1 = (System_Func_object__object__o *)v39->static_fields->__9__373_1;
  if ( !_9__373_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39, v36);
      v39 = BattleActorControl___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__373_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo,
                                                   v36,
                                                   v37,
                                                   v38);
    System_Func_object__object____ctor(
      _9__373_1,
      v42,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__373_1__,
      0LL);
    v43 = BattleActorControl___c_TypeInfo->static_fields;
    v43->__9__373_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__373_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v43->__9__373_1, (int64_t)_9__373_1, v44, v45, v46, v47, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v40,
                                                         (System_Func_TSource__TResult__o *)_9__373_1,
                                                         (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v51 = BasicHelper__ExcludeNull_object_(
          v50,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v52 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v51,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(
      battleSvtData,
      this->fields.partAnimationSaveKey,
      (BattlePlayAnimationComponent_SaveData_array *)v52,
      0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowActive(BattleActorControl_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *IsHideShadow; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x8
  char v10; // w20

  if ( (byte_4B1903D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, active, method);
    byte_4B1903D = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v6);
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v9 || (v10 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL) )
      sub_1BCAA3C(IsHideShadow, v8);
    UnityEngine_GameObject__SetActive(IsHideShadow, active & ~v10 & 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  BattleData_o *IsHideShadow; // x0
  __int64 v16; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B18FFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v13, v14);
    byte_4B18FFF = 1;
  }
  IsHideShadow = (BattleData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( ((unsigned __int8)IsHideShadow & 1) == 0 )
  {
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) < 1.0e-10 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_18;
      IsHideShadow = performance->fields.data;
      if ( !IsHideShadow )
        goto LABEL_18;
      GroundShadowColor = BattleData__getGroundShadowColor(IsHideShadow, 0LL);
      r = GroundShadowColor.fields.r;
      g = GroundShadowColor.fields.g;
      b = GroundShadowColor.fields.b;
      a = GroundShadowColor.fields.a;
    }
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
    {
      IsHideShadow = (BattleData_o *)this->fields.mpb;
      if ( IsHideShadow )
      {
        UnityEngine_MaterialPropertyBlock__Clear_70011412((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
        IsHideShadow = (BattleData_o *)this->fields.mpb;
        if ( IsHideShadow )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
            (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0LL);
          IsHideShadow = (BattleData_o *)this->fields.mpb;
          if ( IsHideShadow )
          {
            v20.fields.r = r;
            v20.fields.g = g;
            v20.fields.b = b;
            v20.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(
              (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
              (System_String_o *)StringLiteral_16346/*"_Color"*/,
              v20,
              0LL);
            IsHideShadow = (BattleData_o *)this->fields.shadowObj;
            this->fields.currentShadowColor.fields.r = r;
            this->fields.currentShadowColor.fields.g = g;
            this->fields.currentShadowColor.fields.b = b;
            this->fields.currentShadowColor.fields.a = a;
            if ( IsHideShadow )
            {
              IsHideShadow = (BattleData_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)IsHideShadow,
                                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( IsHideShadow )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)IsHideShadow, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_18:
      sub_1BCAA3C(IsHideShadow, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowSize(
        BattleActorControl_o *this,
        int32_t btlSize,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  BattleActorControl_c *v22; // x0
  System_Collections_Generic_Dictionary_int__object__o *v23; // x21
  char *ShadowTransform; // x0
  __int64 v25; // x1
  int v26; // w8
  int v27; // w8
  int v28; // w8
  int v29; // w8
  int v30; // w8
  int v31; // w8
  int v32; // w8
  int v33; // w8
  int v34; // w8
  int v35; // w8
  int v36; // w8
  int v37; // w8
  int v38; // w8
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  BattleActorControl_c *v46; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  BattleActorControl_c *v50; // x0
  System_Collections_Generic_Dictionary_int__object__o *v51; // x21
  int v52; // w8
  int v53; // w8
  int v54; // w8
  int v55; // w8
  int v61; // w8
  int v62; // w8
  int v64; // w8
  int v66; // w8
  int v68; // w8
  int v69; // w8
  int v71; // w8
  int v72; // w8
  int v73; // w8
  __int64 v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  BattleActorControl_c *v81; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0
  BattleActorControl_c *v83; // x0
  BattleActorControl_c *v84; // x0
  Il2CppObject *Item; // x0
  __int64 v86; // x1
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  Il2CppObject *v89; // x22
  UnityEngine_Transform_o *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  BattleActorControl_c *v97; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v99; // x23
  BattleActorControl_c *v100; // x0
  UnityEngine_Object_o *v101; // x19

  if ( (byte_4B19000 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_TypeInfo, *(_QWORD *)&btlSize, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Vector3___TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_12894/*"Shadow"*/, v20, v21);
    byte_4B19000 = 1;
  }
  v22 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, *(_QWORD *)&btlSize);
    v22 = BattleActorControl_TypeInfo;
  }
  if ( !v22->static_fields->ShadowTransform )
  {
    v23 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_int__Vector3____TypeInfo,
                                                                    *(_QWORD *)&btlSize,
                                                                    method,
                                                                    v3);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v23,
      (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v26 = *((_DWORD *)ShadowTransform + 6);
    if ( !v26 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0LL;
    *((_DWORD *)ShadowTransform + 10) = 0;
    if ( v26 == 1 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 6) = 0LL;
    *((_DWORD *)ShadowTransform + 11) = 0;
    if ( !v23 )
      goto LABEL_138;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      0,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v27 = *((_DWORD *)ShadowTransform + 6);
    if ( !v27 )
      goto LABEL_137;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v27 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      1,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v28 = *((_DWORD *)ShadowTransform + 6);
    if ( !v28 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v28 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      2,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v29 = *((_DWORD *)ShadowTransform + 6);
    if ( !v29 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v29 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      3,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v30 = *((_DWORD *)ShadowTransform + 6);
    if ( !v30 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v30 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      4,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v31 = *((_DWORD *)ShadowTransform + 6);
    if ( !v31 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v31 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      5,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v32 = *((_DWORD *)ShadowTransform + 6);
    if ( !v32 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v32 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      6,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v33 = *((_DWORD *)ShadowTransform + 6);
    if ( !v33 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v33 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      7,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v34 = *((_DWORD *)ShadowTransform + 6);
    if ( !v34 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v34 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      8,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v35 = *((_DWORD *)ShadowTransform + 6);
    if ( !v35 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v35 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      9,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v36 = *((_DWORD *)ShadowTransform + 6);
    if ( !v36 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v36 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      10,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v37 = *((_DWORD *)ShadowTransform + 6);
    if ( !v37 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v37 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      11,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v38 = *((_DWORD *)ShadowTransform + 6);
    if ( !v38 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v38 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v23,
      12,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v46 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v39);
      v46 = BattleActorControl_TypeInfo;
    }
    v46->static_fields->ShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v23;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)BattleActorControl_TypeInfo->static_fields,
      (int64_t)v23,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&btlSize);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v50 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v25);
      v50 = BattleActorControl_TypeInfo;
    }
    if ( !v50->static_fields->specialShadowTransform )
    {
      v51 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_int__Vector3____TypeInfo,
                                                                      v25,
                                                                      v48,
                                                                      v49);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v51,
        (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v52 = *((_DWORD *)ShadowTransform + 6);
      if ( !v52 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v52 == 1 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      *((_DWORD *)ShadowTransform + 11) = 0;
      if ( !v51 )
        goto LABEL_138;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        0,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v53 = *((_DWORD *)ShadowTransform + 6);
      if ( !v53 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v53 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        1,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v54 = *((_DWORD *)ShadowTransform + 6);
      if ( !v54 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v54 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        2,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v55 = *((_DWORD *)ShadowTransform + 6);
      if ( !v55 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v55 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        3,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v61 = *((_DWORD *)ShadowTransform + 6);
      if ( !v61 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v61 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        4,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v62 = *((_DWORD *)ShadowTransform + 6);
      if ( !v62 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v62 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        5,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v64 = *((_DWORD *)ShadowTransform + 6);
      if ( !v64 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v64 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        6,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v66 = *((_DWORD *)ShadowTransform + 6);
      if ( !v66 )
        goto LABEL_137;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v66 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        7,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v68 = *((_DWORD *)ShadowTransform + 6);
      if ( !v68 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v68 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        8,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v69 = *((_DWORD *)ShadowTransform + 6);
      if ( !v69 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v69 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        9,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v71 = *((_DWORD *)ShadowTransform + 6);
      if ( !v71 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v71 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        10,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v72 = *((_DWORD *)ShadowTransform + 6);
      if ( !v72 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v72 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        11,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCA888(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v73 = *((_DWORD *)ShadowTransform + 6);
      if ( !v73 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v73 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v51,
        12,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v81 = BattleActorControl_TypeInfo;
      if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v74);
        v81 = BattleActorControl_TypeInfo;
      }
      static_fields = v81->static_fields;
      static_fields->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v51;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->specialShadowTransform,
        (int64_t)v51,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
  }
  v83 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v25);
    v83 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v83->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_138;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v84 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v25);
      v84 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v84->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_138;
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v89 = Item;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
    if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
    {
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v90 = UnityEngine_Transform__Find(
              (UnityEngine_Transform_o *)ShadowTransform,
              (System_String_o *)StringLiteral_12894/*"Shadow"*/,
              0LL);
      *p_shadowObj = v90;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.shadowObj, (int64_t)v90, v91, v92, v93, v94, v95, v96);
    }
    v97 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v25);
      v97 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v97->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97, v25);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_138;
      }
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             (System_Collections_Generic_Dictionary_int__object__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v99 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        if ( UnityEngine_Object__op_Inequality(v99, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_138;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v100 = BattleActorControl_TypeInfo;
            if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v25);
              v100 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v100->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_138;
            v89 = System_Collections_Generic_Dictionary_int__object___get_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v101 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_138;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
      if ( !v89 )
        goto LABEL_138;
      if ( LODWORD(v89[1].monitor) )
      {
        if ( !ShadowTransform )
          goto LABEL_138;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v89[2].klass,
          0LL);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_138;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
        if ( LODWORD(v89[1].monitor) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)((char *)&v89[2].monitor + 4),
              0LL);
            return;
          }
LABEL_138:
          sub_1BCAA3C(ShadowTransform, v25);
        }
      }
LABEL_137:
      sub_1BCAA44(ShadowTransform, v25);
    }
  }
}


void __fastcall BattleActorControl__SetSilentDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v6; // x2
  struct BattleServantData_o *v7; // x8

  BattleActorControl__invisibleSvtModel(this, 1, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (BattleServantData__playDead(battleSvtData, 0LL),
        BattleActorControl__StartDropItem(this, 1, v6),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1BCAA3C(battleSvtData, v4);
  }
  v7->fields.isSilnetDead = 1;
}


void __fastcall BattleActorControl__SetStepInBattle(
        BattleActorControl_o *this,
        bool isInBattle,
        const MethodInfo *method)
{
  this->fields._IsStepInBattle_k__BackingField = isInBattle;
}


void __fastcall BattleActorControl__SetTempDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x0
  BattleFBXComponent_o *v8; // x20

  if ( (byte_4B1902D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1902D = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL) )
    {
      overwriteAnim = this->fields.overwriteAnim;
      if ( !overwriteAnim
        || (v8 = this->fields.fbxcomponent,
            overwriteAnim = (ChangeBattlePhaseOverwriteAnimation_o *)ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
                                                                       overwriteAnim,
                                                                       this->fields._PlayedOriginalAnimName_k__BackingField,
                                                                       v6),
            !v8) )
      {
        sub_1BCAA3C(overwriteAnim, v5);
      }
      BattleFBXComponent__SetTempDefaultAnimation(v8, (System_String_o *)overwriteAnim, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetWithdrawFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(this, method);
  battleSvtData->fields.isAnimPlayedWithdraw = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ShakePosition(
        BattleActorControl_o *this,
        UnityEngine_Vector3_o range,
        float tm,
        const MethodInfo *method)
{
  this->fields.ShakeRange = range;
  this->fields.ShakeTargetTime = tm;
  this->fields.Shaking = 1;
  this->fields.ShakeTime = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ShiftServantChangeAfter(
        BattleActorControl_o *this,
        bool isShift,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_o **p_myShiftData; // x21
  _BOOL4 isHideShadow; // w22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  BattleServantData_o *battleSvtData; // x0

  myShiftData = this->fields.myShiftData;
  p_myShiftData = &this->fields.myShiftData;
  if ( myShiftData )
  {
    isHideShadow = myShiftData->fields.isHideShadow;
    if ( isHideShadow != BattleActorControl__IsHideShadow(this, (const MethodInfo *)isShift) )
      BattleActorControl__UpdateShadow(this, v13);
  }
  this->fields.myShiftData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_myShiftData, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v14);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, v15);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B19013 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12311/*"SKIP_DEAD"*/, method, v2);
    byte_4B19013 = 1;
  }
  BattleActorControl__sendEventFSM_44485868(this, (System_String_o *)StringLiteral_12311/*"SKIP_DEAD"*/, 0, v3);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleFBXComponent_o *fbxcomponent; // x20
  PartyOrganizationUtility_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v16; // x22
  System_Delegate_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x8
  BattleFBXComponent_onEventDelegate_c *v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct BattleFBXComponent_o *v28; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v30; // x22
  System_Delegate_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BattleFBXComponent_onEventDelegate_c *v38; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_Transform_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  v4 = this;
  if ( (byte_4B18FA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_Complete__, method, v2);
    sub_1BCA7E0(&Method_BattleActorControl_OnEvent__, v5, v6);
    sub_1BCA7E0(&StringLiteral_19171/*"en_damage01"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19174/*"en_text01"*/, v9, v10);
    this = (BattleActorControl_o *)sub_1BCA7E0(&BattleFBXComponent_onEventDelegate_TypeInfo, v11, v12);
    byte_4B18FA4 = 1;
  }
  fbxcomponent = v4->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_16;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (PartyOrganizationUtility_o *)&fbxcomponent->fields.OnEvent;
  v16 = (BattleFBXComponent_onEventDelegate_o *)sub_1BCAA2C(BattleFBXComponent_onEventDelegate_TypeInfo, method, v2, v3);
  BattleFBXComponent_onEventDelegate___ctor(v16, (Il2CppObject *)v4, Method_BattleActorControl_OnEvent__, 0LL);
  v17 = System_Delegate__Combine(OnEvent, (System_Delegate_o *)v16, 0LL);
  v24 = (int64_t)v17;
  if ( v17 )
  {
    v25 = BattleFBXComponent_onEventDelegate_TypeInfo;
    if ( (BattleFBXComponent_onEventDelegate_c *)v17->klass != BattleFBXComponent_onEventDelegate_TypeInfo )
      goto LABEL_13;
    p_OnEvent->klass = (PartyOrganizationUtility_c *)v17;
    if ( (BattleFBXComponent_onEventDelegate_c *)v17->klass != v25 )
      goto LABEL_13;
  }
  else
  {
    p_OnEvent->klass = 0LL;
  }
  sub_1BCA784(p_OnEvent, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v28 = v4->fields.fbxcomponent;
  if ( !v28 )
LABEL_16:
    sub_1BCAA3C(this, method);
  Complete = (System_Delegate_o *)v28->fields.Complete;
  p_OnEvent = (PartyOrganizationUtility_o *)&v28->fields.Complete;
  v30 = (BattleFBXComponent_onEventDelegate_o *)sub_1BCAA2C(
                                                  BattleFBXComponent_onEventDelegate_TypeInfo,
                                                  method,
                                                  v26,
                                                  v27);
  BattleFBXComponent_onEventDelegate___ctor(v30, (Il2CppObject *)v4, Method_BattleActorControl_Complete__, 0LL);
  v31 = System_Delegate__Combine(Complete, (System_Delegate_o *)v30, 0LL);
  v24 = (int64_t)v31;
  if ( !v31 )
  {
LABEL_14:
    p_OnEvent->klass = (PartyOrganizationUtility_c *)v24;
    goto LABEL_15;
  }
  v38 = BattleFBXComponent_onEventDelegate_TypeInfo;
  if ( (BattleFBXComponent_onEventDelegate_c *)v31->klass != BattleFBXComponent_onEventDelegate_TypeInfo
    || (p_OnEvent->klass = (PartyOrganizationUtility_c *)v31, (BattleFBXComponent_onEventDelegate_c *)v31->klass != v38) )
  {
LABEL_13:
    sub_1BCACFC(v24);
    goto LABEL_14;
  }
LABEL_15:
  sub_1BCA784(p_OnEvent, v24, v32, v33, v34, v35, v36, v37);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, (System_String_o *)StringLiteral_19174/*"en_text01"*/, -1, 0, 0LL);
  v4->fields.nodeText = NodeFromLvName;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.nodeText, (int64_t)NodeFromLvName, v41, v42, v43, v44, v45, v46);
  v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  v48 = TransformHelper__getNodeFromLvName(v47, (System_String_o *)StringLiteral_19171/*"en_damage01"*/, -1, 0, 0LL);
  v4->fields.nodeDamage = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.nodeDamage, (int64_t)v48, v49, v50, v51, v52, v53, v54);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDeadEffect(
        BattleActorControl_o *this,
        bool enableDropItem,
        float overwriteDuration,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 v34; // w20
  __int64 v35; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 ActorSvtId; // x0
  int64_t v38; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Transform_o *root_field; // x19
  UnityEngine_Transform_o *transform; // x0
  struct ParticleDisconnector_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct BattleServantData_o *v49; // x8
  float v50; // s9
  System_String_o *Value; // x0
  int v52; // w8
  __int64 v53; // x19
  unsigned int v54; // w20
  int v55; // w22
  UnityEngine_GameObject_o *v56; // x19
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Object_array *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  const MethodInfo *v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x21
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x21
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x21
  __int64 v135; // x1
  System_Collections_Hashtable_o *v136; // x0
  __int64 v137; // x0
  float v138; // [xsp+8h] [xbp-58h] BYREF
  int v139; // [xsp+Ch] [xbp-54h] BYREF
  float Height; // [xsp+28h] [xbp-38h] BYREF
  int v141; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4B18FDF & 1) == 0 )
  {
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, enableDropItem, method);
    sub_1BCA7E0(&object___TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&float_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_24559/*"updateDeadEffect"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_10035/*"OnFinishDead"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12260/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v29, v30);
    sub_1BCA7E0(&iTween_TypeInfo, v31, v32);
    byte_4B18FDF = 1;
  }
  if ( enableDropItem )
    BattleActorControl__StartDropItem(this, 0, method);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    v34 = battleSvtData->fields.displayType == 3;
  else
    v34 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v35);
  if ( v34 )
    ServantAssetLoadManager__changeChocoDeadShader(gameObject, 0LL);
  else
    ServantAssetLoadManager__changeDeadShader(gameObject, 0LL);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_87;
  root_field = performance->fields.root_field;
  ActorSvtId = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ActorSvtId )
    goto LABEL_87;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ActorSvtId, 0LL);
  v42 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0LL);
  this->fields.particleDisconnectorObj = v42;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.particleDisconnectorObj,
    (int64_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v49 = this->fields.battleSvtData;
  v50 = 1.3;
  if ( v49 )
  {
    if ( v49->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12260/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_87;
        v52 = *(_DWORD *)(ActorSvtId + 24);
        v53 = ActorSvtId;
        if ( v52 >= 1 )
        {
          v54 = 0;
          while ( 1 )
          {
            if ( v54 >= v52 )
              goto LABEL_85;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_87;
            v55 = *(_DWORD *)(v53 + 4LL * (int)v54 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v55 == (_DWORD)ActorSvtId )
              break;
            v52 = *(_DWORD *)(v53 + 24);
            if ( (int)++v54 >= v52 )
              goto LABEL_27;
          }
          v50 = 1.0;
        }
      }
    }
  }
LABEL_27:
  if ( overwriteDuration < 0.0 )
    overwriteDuration = v50;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_1BCA888(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_87:
    sub_1BCAA3C(ActorSvtId, v38);
  v63 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_19858/*"from"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( !v63->max_length )
    goto LABEL_85;
  v63->m_Items[0] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)v63->m_Items, v38, v57, v58, v59, v60, v61, v62);
  v141 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v141);
  v70 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCA91C(ActorSvtId, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v63->max_length <= 1 )
    goto LABEL_85;
  v63->m_Items[1] = (Il2CppObject *)v70;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[1], v70, v64, v65, v66, v67, v68, v69);
  ActorSvtId = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_24219/*"to"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v63->max_length <= 2 )
    goto LABEL_85;
  v63->m_Items[2] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[2], v38, v71, v72, v73, v74, v75, v76);
  Height = BattleActorControl__GetHeight(this, v77);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height);
  v84 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCA91C(ActorSvtId, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v63->max_length <= 3 )
    goto LABEL_85;
  v63->m_Items[3] = (Il2CppObject *)v84;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[3], v84, v78, v79, v80, v81, v82, v83);
  ActorSvtId = StringLiteral_18949/*"easetype"*/;
  if ( StringLiteral_18949/*"easetype"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_18949/*"easetype"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_18949/*"easetype"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v63->max_length <= 4 )
    goto LABEL_85;
  v63->m_Items[4] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[4], v38, v85, v86, v87, v88, v89, v90);
  v139 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v139);
  v97 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCA91C(ActorSvtId, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v63->max_length <= 5 )
    goto LABEL_85;
  v63->m_Items[5] = (Il2CppObject *)v97;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[5], v97, v91, v92, v93, v94, v95, v96);
  ActorSvtId = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v63->max_length <= 6 )
    goto LABEL_85;
  v63->m_Items[6] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[6], v38, v98, v99, v100, v101, v102, v103);
  ActorSvtId = StringLiteral_24559/*"updateDeadEffect"*/;
  if ( StringLiteral_24559/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_24559/*"updateDeadEffect"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_24559/*"updateDeadEffect"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v63->max_length <= 7 )
    goto LABEL_85;
  v63->m_Items[7] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[7], v38, v104, v105, v106, v107, v108, v109);
  ActorSvtId = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v63->max_length <= 8 )
    goto LABEL_85;
  v63->m_Items[8] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[8], v38, v110, v111, v112, v113, v114, v115);
  ActorSvtId = StringLiteral_10035/*"OnFinishDead"*/;
  if ( StringLiteral_10035/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_10035/*"OnFinishDead"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_10035/*"OnFinishDead"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v63->max_length <= 9 )
    goto LABEL_85;
  v63->m_Items[9] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[9], v38, v116, v117, v118, v119, v120, v121);
  ActorSvtId = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    ActorSvtId = sub_1BCA91C(StringLiteral_24178/*"time"*/, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v38 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v63->max_length <= 0xA )
    goto LABEL_85;
  v63->m_Items[10] = (Il2CppObject *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[10], v38, v122, v123, v124, v125, v126, v127);
  v138 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v138);
  v134 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCA91C(ActorSvtId, v63->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_86:
      v137 = sub_1BCAA60(ActorSvtId);
      sub_1BCA908(v137, 0LL);
    }
  }
  if ( v63->max_length <= 0xB )
LABEL_85:
    sub_1BCAA44(ActorSvtId, v38);
  v63->m_Items[11] = (Il2CppObject *)v134;
  sub_1BCA784((PartyOrganizationUtility_o *)&v63->m_Items[11], v134, v128, v129, v130, v131, v132, v133);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v135);
  v136 = iTween__Hash(v63, 0LL);
  iTween__ValueTo(v56, v136, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDropItem(BattleActorControl_o *this, bool isSilent, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v8; // x8
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *v10; // x8
  struct DropInfo_array *droplist; // x27
  struct BattlePerformance_o *v12; // x9
  int32_t ServantIndex; // w21
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v16; // x3
  UnityEngine_Transform_o *v17; // x22
  unsigned __int64 v18; // x23
  DropInfo_o *v19; // x24
  __int64 v20; // x1
  UnityEngine_Object_o *Item_42689120; // x25
  BattlePerformance_o *v22; // x26
  int v23; // s0
  struct BattlePerformance_o *v26; // x8
  BattlePerformance_o *v27; // x20

  if ( (byte_4B18FDE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isSilent, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B18FDE = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_32;
  if ( battleSvtData->fields.isWithdraw )
    goto LABEL_9;
  battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    goto LABEL_9;
  v8 = this->fields.battleSvtData;
  if ( !v8 )
    goto LABEL_32;
  battleSvtData = (BattleServantData_o *)v8->fields.deckSvt;
  if ( !battleSvtData )
    goto LABEL_32;
  battleSvtData = (BattleServantData_o *)BattleDeckServantData__getIsForceDropItem(
                                           (BattleDeckServantData_o *)battleSvtData,
                                           0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
LABEL_9:
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_32;
    battleSvtData = (BattleServantData_o *)performance->fields.data;
    if ( !battleSvtData )
      goto LABEL_32;
    BattleData__RegisterItemDroppedSkillShiftInfo((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
    v10 = this->fields.battleSvtData;
    if ( !v10 )
      goto LABEL_32;
    droplist = v10->fields.droplist;
    v10->fields.IsAlreadyDrop = 1;
    if ( droplist )
    {
      v12 = this->fields.performance;
      if ( !v12 )
        goto LABEL_32;
      battleSvtData = (BattleServantData_o *)v12->fields.data;
      if ( !battleSvtData )
        goto LABEL_32;
      ServantIndex = BattleData__getServantIndex(
                       (BattleData_o *)battleSvtData,
                       v10->fields.isEnemy,
                       v10->fields.uniqueId,
                       0LL);
      DropTransform = BattleActorControl__getDropTransform(this, v14);
      LODWORD(v16) = droplist->max_length;
      if ( (int)v16 >= 1 )
      {
        v17 = DropTransform;
        v18 = 0LL;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)v16 )
            sub_1BCAA44(DropTransform, isSilent);
          battleSvtData = (BattleServantData_o *)this->fields.performance;
          if ( !battleSvtData )
            break;
          v19 = droplist->m_Items[v18];
          Item_42689120 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_42689120(
                                                    (BattlePerformance_o *)battleSvtData,
                                                    v17,
                                                    v19,
                                                    v16,
                                                    v18,
                                                    ServantIndex,
                                                    this->fields.headupVec,
                                                    0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
          battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(Item_42689120, 0LL, 0LL);
          if ( ((unsigned __int8)battleSvtData & 1) != 0 )
          {
            if ( !v17 )
              break;
            v22 = this->fields.performance;
            *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(v17, 0LL);
            if ( !v22 )
              break;
            BattlePerformance__saveOriginalPos(
              v22,
              (UnityEngine_GameObject_o *)Item_42689120,
              *(UnityEngine_Vector3_o *)&v23,
              this->fields.criteriaPos,
              0LL);
          }
          v26 = this->fields.performance;
          if ( !v26 )
            break;
          battleSvtData = (BattleServantData_o *)v26->fields.data;
          if ( !battleSvtData )
            break;
          BattleData__addDropItems((BattleData_o *)battleSvtData, v19, 0LL);
          v16 = *(_QWORD *)&droplist->max_length;
          if ( (__int64)++v18 >= (int)v16 )
            goto LABEL_28;
        }
LABEL_32:
        sub_1BCAA3C(battleSvtData, isSilent);
      }
    }
LABEL_28:
    if ( !isSilent )
    {
      v27 = this->fields.performance;
      battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v27 )
        goto LABEL_32;
      BattlePerformance__ShowAll(
        v27,
        (UnityEngine_GameObject_o *)battleSvtData,
        -1,
        0LL,
        0,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL,
        0,
        0LL);
    }
  }
}


bool __fastcall BattleActorControl__StopAudioEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  BattleServantData_o *battleSvtData; // x0

  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    LOBYTE(battleSvtData) = myShiftData->fields.isNoVoice;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( battleSvtData )
      LOBYTE(battleSvtData) = BattleServantData__IsNoVoice(battleSvtData, 0LL);
  }
  return (char)battleSvtData;
}


void __fastcall BattleActorControl__Update(BattleActorControl_o *this, const MethodInfo *method)
{
  float v3; // s8
  float v4; // s9
  __int64 v5; // x1
  float v6; // s0
  UnityEngine_GameObject_o *actorObject; // x0
  float v8; // s10
  float ShakeTime; // s8
  float deltaTime; // s0
  float ShakeTargetTime; // s1
  float v12; // s0
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.Shaking )
  {
    v3 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.x * -0.5, this->fields.ShakeRange.fields.x * 0.5, 0LL);
    v4 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.y * -0.5, this->fields.ShakeRange.fields.y * 0.5, 0LL);
    v6 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.z * -0.5, this->fields.ShakeRange.fields.z * 0.5, 0LL);
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_11;
    v8 = v6;
    actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
    if ( !actorObject )
      goto LABEL_11;
    v15.fields.x = v3;
    v15.fields.y = v4;
    v15.fields.z = v8;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)actorObject, v15, 0LL);
    ShakeTime = this->fields.ShakeTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    ShakeTargetTime = this->fields.ShakeTargetTime;
    v12 = ShakeTime + deltaTime;
    this->fields.ShakeTime = v12;
    if ( v12 < ShakeTargetTime )
      return;
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_11;
    actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
    v14 = (UnityEngine_Transform_o *)actorObject;
    if ( !byte_4B109C1 )
    {
      actorObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v5, v13);
      byte_4B109C1 = 1;
    }
    if ( !v14 )
LABEL_11:
      sub_1BCAA3C(actorObject, v5);
    UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    this->fields.Shaking = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__UpdateActorVisibilityByBuff(
        BattleActorControl_o *this,
        bool forceUpdate,
        const MethodInfo *method)
{
  bool v3; // w20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct BattleServantData_o *battleSvtData; // x8
  __int64 v10; // x2
  __int64 v11; // x3
  BattleServantData_o *v12; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v14; // x22
  const MethodInfo *v15; // x2
  struct BattleServantData_o *v16; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v18; // x1

  v3 = forceUpdate;
  v4 = this;
  if ( (byte_4B1903C & 1) == 0 )
  {
    sub_1BCA7E0(&BuffList_TypeInfo, forceUpdate, method);
    sub_1BCA7E0(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5, v6);
    this = (BattleActorControl_o *)sub_1BCA7E0(&BuffList_TYPE___TypeInfo, v7, v8);
    byte_4B1903C = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( battleSvtData->fields.buffData )
  {
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, forceUpdate);
    this = (BattleActorControl_o *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v4->fields.battleSvtData;
      if ( !v12 )
        goto LABEL_23;
      buffData = v12->fields.buffData;
      v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCAA2C(
                                                           BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                           forceUpdate,
                                                           v10,
                                                           v11);
      BattleBuffData_CheckIndividualitiesData___ctor_43379556(v14, v12, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_43192668(buffData, 100, v14, 1, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_1BCA888(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_23;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1BCAA44(this, this);
      LODWORD(this->fields.actorObject) = 163;
      v16 = v4->fields.battleSvtData;
      if ( !v16 )
        goto LABEL_23;
      this = (BattleActorControl_o *)v16->fields.buffData;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_43169876(
                                       (BattleBuffData_o *)this,
                                       (BuffList_TYPE_array *)forceUpdate,
                                       0LL,
                                       0LL,
                                       0LL);
    }
    *(_QWORD *)&forceUpdate = this;
    if ( !this )
      goto LABEL_23;
    this = (BattleActorControl_o *)v4->fields.translucentActorVisualInfo;
    if ( !this )
      goto LABEL_23;
    if ( v3 || (*(_DWORD *)(forceUpdate + 24LL) != 0) != (LOBYTE(this->fields.m_CancellationTokenSource) != 0) )
    {
      TranslucentActorVisualInfo__UpdateByBuffs(
        (TranslucentActorVisualInfo_o *)this,
        (BattleBuffData_BuffData_array *)forceUpdate,
        v15);
      translucentActorVisualInfo = v4->fields.translucentActorVisualInfo;
      if ( translucentActorVisualInfo )
      {
        BattleActorControl__SetActorAlpha(
          v4,
          translucentActorVisualInfo->fields._Alpha_k__BackingField,
          (const MethodInfo *)forceUpdate);
        BattleActorControl__UpdateShadow(v4, v18);
        return;
      }
LABEL_23:
      sub_1BCAA3C(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateEachServantStatusUiByTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleActionData_o *actiondata; // x0
  long double inited; // q0
  BattleActionData_o *v10; // x20
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  int endcameraname; // w8
  unsigned int v15; // w23
  struct BattlePerformance_o *performance; // x8
  __int64 v17; // x22
  struct BattlePerformance_o *v18; // x8
  BattleServantData_o *v19; // x21
  __int64 v20; // x8
  int32_t Value; // w0
  __int64 v22; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v23; // 0:x0.8

  if ( (byte_4B19018 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleActionData_BuffData___, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_int__get_Value__, v6, v7);
    byte_4B19018 = 1;
  }
  v22 = 0LL;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_30;
  actiondata = (BattleActionData_o *)BattleActionData__getShiftServant(actiondata, 0LL);
  if ( !actiondata )
    goto LABEL_30;
  if ( !BYTE2(actiondata->fields.type) )
  {
    BYTE2(actiondata->fields.type) = 1;
    if ( !this->fields.actiondata )
      goto LABEL_30;
    actiondata = (BattleActionData_o *)BattleActionData__getBuffList(
                                         this->fields.actiondata,
                                         actiondata->fields.state,
                                         0LL);
    v10 = actiondata;
    if ( !actiondata )
    {
      v11 = Method_System_Array_Empty_BattleActionData_BuffData___;
      v12 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_BuffData___ + 7);
      if ( !v12 )
      {
        sub_1C1C718(Method_System_Array_Empty_BattleActionData_BuffData___, method);
        v12 = v11[7];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v13 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v13, method);
      actiondata = *(BattleActionData_o **)(v11[7] + 16LL);
      if ( !*(&actiondata->fields.IsDontUpdateMessage + 1) )
        actiondata = (BattleActionData_o *)sub_1C1C6BC(inited);
      v10 = **(BattleActionData_o ***)&actiondata->fields.commandAssistId;
      if ( !v10 )
        goto LABEL_30;
    }
    endcameraname = (int)v10->fields.endcameraname;
    if ( endcameraname >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= endcameraname )
          sub_1BCAA44(actiondata, method);
        performance = this->fields.performance;
        if ( !performance )
          break;
        v17 = *((_QWORD *)&v10->fields.actorId + (int)v15);
        if ( !v17 )
          break;
        actiondata = (BattleActionData_o *)performance->fields.data;
        if ( !actiondata )
          break;
        actiondata = (BattleActionData_o *)BattleData__getServantData(
                                             (BattleData_o *)actiondata,
                                             *(_DWORD *)(v17 + 40),
                                             0LL);
        if ( actiondata )
        {
          v18 = this->fields.performance;
          if ( !v18 )
            break;
          v19 = (BattleServantData_o *)actiondata;
          BattleActionData_BuffData__ExecAfterEffectProc((BattleActionData_BuffData_o *)v17, v18->fields.data, 0LL);
          BattleServantData__UpdateNpImmediately(v19, *(_DWORD *)(v17 + 84), 0LL);
          v20 = *(_QWORD *)(v17 + 92);
          v22 = v20;
          if ( (_BYTE)v20 )
          {
            v23 = (System_Nullable_int__o)&v22;
            v22 = v20;
            Value = System_Nullable_int___get_Value(
                      v23,
                      (const MethodInfo_36BEAB8 *)Method_System_Nullable_int__get_Value__);
            BattleServantData__UpdateTdGauge(v19, Value, v19->fields.maxtpturn, 0LL);
          }
          BattleServantData__updateHp(v19, 0LL);
          BattleServantData__updateBuff(v19, 1, 1, 0LL);
        }
        endcameraname = (int)v10->fields.endcameraname;
        if ( (int)++v15 >= endcameraname )
          return;
      }
LABEL_30:
      sub_1BCAA3C(actiondata, method);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_object_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_2F03354 *method)
{
  long double inited; // q0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppClass *_3_BattleActorControl___c__290_T; // x0
  Il2CppClass *v19; // x0
  System_Func_object__bool__o *v20; // x22
  Il2CppClass *v21; // x0
  const MethodInfo_2F03354_RGCTXs *rgctx_data; // x8
  __int64 v23; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  long double v32; // q0
  Il2CppClass *v33; // x0
  Il2CppClass *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  long double v37; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v41; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x19
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  long double v51; // q0
  Il2CppClass *_8_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  UnityEngine_Renderer_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  long double v63; // q0
  Il2CppClass *v64; // x0
  Il2CppClass *v65; // x0
  System_Func_object__bool__o *v66; // x23
  Il2CppClass *v67; // x0
  Il2CppClass *v68; // x0
  Il2CppObject *v69; // x24
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  long double v76; // q0
  Il2CppClass *v77; // x0
  Il2CppClass *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  __int64 v80; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v82; // x8
  __int64 v83; // x9
  int32_t *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x22
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x8
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  __int64 v101; // x8
  __int64 v102; // x9
  int *v103; // x10
  __int64 v104; // x0

  if ( method->rgctx_data
    || (sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_Material___, rendererEnumerable, updateFunc),
        sub_1BCA7E0(&System_Func_Material__bool__TypeInfo, v8, v9),
        sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11),
        sub_1BCA7E0(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v12, v13),
        sub_1BCA7E0(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v14, v15),
        sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17),
        method->rgctx_data) )
  {
    if ( !rendererEnumerable )
      return;
  }
  else
  {
    sub_1C1C718(method, rendererEnumerable);
    if ( !rendererEnumerable )
      return;
  }
  _3_BattleActorControl___c__290_T = method->rgctx_data->_3_BattleActorControl___c__290_T_;
  if ( (BYTE5(_3_BattleActorControl___c__290_T->vtable[0].methodPtr) & 1) == 0 )
    _3_BattleActorControl___c__290_T = (Il2CppClass *)sub_1C1C6BC(inited);
  if ( !_3_BattleActorControl___c__290_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_3_BattleActorControl___c__290_T, rendererEnumerable);
  v19 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
  if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
    v19 = (Il2CppClass *)sub_1C1C6BC(inited);
  v20 = (System_Func_object__bool__o *)*((_QWORD *)v19->static_fields + 1);
  if ( !v20 )
  {
    v21 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1C1C6BC(inited);
    if ( !v21->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v21, rendererEnumerable);
    rgctx_data = method->rgctx_data;
    v23 = (__int64)rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
    {
      v23 = sub_1C1C6BC(inited);
      rgctx_data = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)rgctx_data->_2_System_Func_T__bool_;
    v25 = **(Il2CppObject ***)(v23 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C1C6BC(inited);
    v20 = (System_Func_object__bool__o *)sub_1BCAA2C(_2_System_Func_T__bool, rendererEnumerable, updateFunc, method);
    System_Func_object__bool____ctor(
      v20,
      v25,
      (intptr_t)method->rgctx_data->_4_BattleActorControl___c__290_T___UpdateMaterialsOnRenderders_b__290_0,
      (const MethodInfo_3413A9C *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v33 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v33->vtable[0].methodPtr) & 1) == 0 )
      v33 = (Il2CppClass *)sub_1C1C6BC(v32);
    *((_QWORD *)v33->static_fields + 1) = v20;
    v34 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v34->vtable[0].methodPtr) & 1) == 0 )
      v34 = (Il2CppClass *)sub_1C1C6BC(v32);
    sub_1BCA784(
      (PartyOrganizationUtility_o *)((char *)v34->static_fields + 8),
      (int64_t)v20,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)rendererEnumerable,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2F51894 *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
  if ( !v35 )
    sub_1BCAA3C(0LL, v36);
  v38 = v35;
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1C6BC(v37);
  klass = v38->klass;
  v41 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1C1C7C0(v38, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v38,
          *(_QWORD *)(p_method + 8));
  v46 = v44;
  while ( 1 )
  {
    if ( !v46 )
      sub_1BCAA3C(v44, v45);
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
          goto LABEL_39;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_39:
      v50 = sub_1C1C7C0(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    _8_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_8_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _8_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1C6BC(v51);
    v53 = *(_QWORD *)v46;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((Il2CppClass **)v55 - 1) != _8_System_Collections_Generic_IEnumerator_T )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_48;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_48:
      v56 = sub_1C1C7C0(v46, _8_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v57 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v46, *(_QWORD *)(v56 + 8));
    if ( !v57 )
      sub_1BCAA3C(0LL, v58);
    materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v57, 0LL);
    v64 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v64->vtable[0].methodPtr) & 1) == 0 )
      v64 = (Il2CppClass *)sub_1C1C6BC(v63);
    if ( !v64->_2.cctor_finished )
      v63 = j_il2cpp_runtime_class_init_0(v64, v59);
    v65 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v65->vtable[0].methodPtr) & 1) == 0 )
      v65 = (Il2CppClass *)sub_1C1C6BC(v63);
    v66 = (System_Func_object__bool__o *)*((_QWORD *)v65->static_fields + 2);
    if ( !v66 )
    {
      v67 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v67->vtable[0].methodPtr) & 1) == 0 )
        v67 = (Il2CppClass *)sub_1C1C6BC(v63);
      if ( !v67->_2.cctor_finished )
        v63 = j_il2cpp_runtime_class_init_0(v67, v59);
      v68 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v68->vtable[0].methodPtr) & 1) == 0 )
        v68 = (Il2CppClass *)sub_1C1C6BC(v63);
      v69 = *(Il2CppObject **)v68->static_fields;
      v66 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Material__bool__TypeInfo, v59, v60, v61);
      System_Func_object__bool____ctor(
        v66,
        v69,
        (intptr_t)method->rgctx_data->_11_BattleActorControl___c__290_T___UpdateMaterialsOnRenderders_b__290_1,
        0LL);
      v77 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v77->vtable[0].methodPtr) & 1) == 0 )
        v77 = (Il2CppClass *)sub_1C1C6BC(v76);
      *((_QWORD *)v77->static_fields + 2) = v66;
      v78 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v78->vtable[0].methodPtr) & 1) == 0 )
        v78 = (Il2CppClass *)sub_1C1C6BC(v76);
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)v78->static_fields + 16),
        (int64_t)v66,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    v79 = System_Linq_Enumerable__Where_object_(
            materials,
            (System_Func_TSource__bool__o *)v66,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_Material___);
    v81 = v79;
    if ( !v79 )
      sub_1BCAA3C(0LL, v80);
    v82 = v79->klass;
    v83 = *(unsigned __int16 *)(&v79->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v79->klass->_2.bitflags2 + 3) )
    {
      v84 = &v82->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_Material__c **)v84 - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
      {
        --v83;
        v84 += 4;
        if ( !v83 )
          goto LABEL_74;
      }
      v85 = (__int64)&v82->vtable[*v84].method;
    }
    else
    {
LABEL_74:
      v85 = sub_1C1C7C0(v79, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
    }
    v87 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v85)(
            v81,
            *(_QWORD *)(v85 + 8));
    if ( !v87 )
      sub_1BCAA3C(0LL, v86);
    while ( 1 )
    {
      v88 = *(_QWORD *)v87;
      v89 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
      {
        v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v90 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v89;
          v90 += 4;
          if ( !v89 )
            goto LABEL_81;
        }
        v91 = v88 + 16LL * *v90 + 312;
      }
      else
      {
LABEL_81:
        v91 = sub_1C1C7C0(v87, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8)) & 1) == 0 )
        break;
      v92 = *(_QWORD *)v87;
      v93 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
      {
        v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_Material__c **)v94 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
        {
          --v93;
          v94 += 4;
          if ( !v93 )
            goto LABEL_88;
        }
        v95 = v92 + 16LL * *v94 + 312;
      }
      else
      {
LABEL_88:
        v95 = sub_1C1C7C0(v87, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
      }
      v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v87, *(_QWORD *)(v95 + 8));
      if ( !updateFunc )
        sub_1BCAA3C(v96, v96);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))updateFunc->fields.m_target)(
        updateFunc->fields.original_method_info,
        v96,
        *(_QWORD *)&updateFunc->fields.extra_arg);
    }
    v97 = *(_QWORD *)v87;
    v98 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
    {
      v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v99 - 1) != System_IDisposable_TypeInfo )
      {
        --v98;
        v99 += 4;
        if ( !v98 )
          goto LABEL_96;
      }
      v100 = v97 + 16LL * *v99 + 312;
    }
    else
    {
LABEL_96:
      v100 = sub_1C1C7C0(v87, System_IDisposable_TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v100)(v87, *(_QWORD *)(v100 + 8));
  }
  v101 = *(_QWORD *)v46;
  v102 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
  {
    v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v103 - 1) != System_IDisposable_TypeInfo )
    {
      --v102;
      v103 += 4;
      if ( !v102 )
        goto LABEL_105;
    }
    v104 = v101 + 16LL * *v103 + 312;
  }
  else
  {
LABEL_105:
    v104 = sub_1C1C7C0(v46, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v104)(v46, *(_QWORD *)(v104 + 8));
}


void __fastcall BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *IsHideShadow; // x0
  __int64 v10; // x1
  struct BattleServantData_o *v11; // x8
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  UnityEngine_Object_o *shadowObj; // x20
  struct BattleServantData_o *v16; // x8
  BattleBgMaster_o *v17; // x20
  int32_t v18; // w21
  int32_t BgShadowImageId; // w0
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v23; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v25; // x8
  const MethodInfo *v26; // x1
  struct BattlePerformance_o *v27; // x8
  BattleServantData_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  int SpecialShadowEffectId; // w21
  UnityEngine_Object_o *v32; // x21
  int uniqueId; // w8
  unsigned int v34; // w21
  int v35; // w22
  int32_t BattleSize; // w1
  const MethodInfo *v37; // x2
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18FB1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BattleBgMaster___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B18FB1 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (BattleServantData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_70;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v11 = this->fields.battleSvtData;
  if ( !v11 )
    goto LABEL_70;
  if ( !v11->fields.isHideShadow )
  {
    translucentActorVisualInfo = this->fields.translucentActorVisualInfo;
    if ( !translucentActorVisualInfo )
      goto LABEL_70;
    if ( !translucentActorVisualInfo->fields._IsActive_k__BackingField
      || translucentActorVisualInfo->fields._IsDrawShadow_k__BackingField )
    {
      shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
      {
        IsHideShadow = this->fields.battleSvtData;
        if ( !IsHideShadow )
          goto LABEL_70;
        IsHideShadow = (BattleServantData_o *)BattleServantData__isAlive(IsHideShadow, 0, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v16 = this->fields.battleSvtData;
          if ( !v16 )
            goto LABEL_70;
          if ( v16->fields.isEntry )
          {
            IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
            if ( !IsHideShadow )
              goto LABEL_70;
            IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsHideShadow,
                                                    0LL);
            if ( !IsHideShadow )
              goto LABEL_70;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
          }
        }
      }
      IsHideShadow = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !IsHideShadow )
        goto LABEL_70;
      IsHideShadow = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)IsHideShadow,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BattleBgMaster___);
      if ( !this->fields.performance )
        goto LABEL_70;
      v17 = (BattleBgMaster_o *)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
      if ( !this->fields.performance )
        goto LABEL_70;
      v18 = (int)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
      if ( !v17 )
        goto LABEL_70;
      BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v17, v18, (int32_t)IsHideShadow, 0LL);
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v20);
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v23 = this->fields.performance;
        if ( !v23 )
          goto LABEL_70;
        data = (UnityEngine_Object_o *)v23->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v25 = this->fields.performance;
          if ( !v25 )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)v25->fields.data;
          if ( !IsHideShadow )
            goto LABEL_70;
          GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
          BattleActorControl__SetShadowColor(this, GroundShadowColor, v26);
          v27 = this->fields.performance;
          if ( !v27 )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)v27->fields.data;
          if ( !IsHideShadow )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)BattleData__GetShadowOffSvtIds((BattleData_o *)IsHideShadow, 0LL);
          if ( !this->fields.performance )
            goto LABEL_70;
          v28 = IsHideShadow;
          SpecialShadowEffectId = BattlePerformance__GetSpecialShadowEffectId(this->fields.performance, 0LL);
          if ( this->fields.currentSpShadowEffectId != SpecialShadowEffectId )
          {
            this->fields.currentSpShadowEffectId = SpecialShadowEffectId;
            BattleActorControl__DestroySpShadowObj(this, v29);
          }
          if ( SpecialShadowEffectId >= 1 )
            BattleActorControl__changeSpecialShadow(this, SpecialShadowEffectId, v30);
          v32 = (UnityEngine_Object_o *)this->fields.shadowObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
          IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
          if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
          {
            if ( !v28 )
              goto LABEL_70;
            uniqueId = v28->fields.uniqueId;
            if ( uniqueId >= 1 )
            {
              v34 = 0;
              while ( 1 )
              {
                if ( v34 >= uniqueId )
                  sub_1BCAA44(IsHideShadow, v10);
                IsHideShadow = this->fields.battleSvtData;
                if ( !IsHideShadow )
                  goto LABEL_70;
                v35 = *((_DWORD *)&v28->fields.userSvtId.fields.currentCryptoKey + (int)v34);
                IsHideShadow = (BattleServantData_o *)BattleServantData__getActorSvtId(IsHideShadow, 0LL);
                if ( v35 == (_DWORD)IsHideShadow )
                  break;
                uniqueId = v28->fields.uniqueId;
                if ( (int)++v34 >= uniqueId )
                  goto LABEL_68;
              }
              IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
              if ( !IsHideShadow )
                goto LABEL_70;
              IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)IsHideShadow,
                                                      0LL);
              if ( !IsHideShadow )
                goto LABEL_70;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
            }
          }
        }
      }
LABEL_68:
      IsHideShadow = this->fields.battleSvtData;
      if ( !IsHideShadow )
        goto LABEL_70;
      BattleSize = BattleServantData__get_BattleSize(IsHideShadow, 0LL);
      BattleActorControl__SetShadowSize(this, BattleSize, v37);
      return;
    }
    IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
    if ( IsHideShadow )
    {
      IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)IsHideShadow,
                                              0LL);
      if ( IsHideShadow )
      {
LABEL_64:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
        return;
      }
    }
LABEL_70:
    sub_1BCAA3C(IsHideShadow, v10);
  }
  v12 = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
  {
    IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
    if ( IsHideShadow )
    {
      IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)IsHideShadow,
                                              0LL);
      if ( IsHideShadow )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
        goto LABEL_12;
      }
    }
    goto LABEL_70;
  }
LABEL_12:
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (BattleServantData_o *)this->fields.specialShadowObj;
    if ( !IsHideShadow )
      goto LABEL_70;
    goto LABEL_64;
  }
}


void __fastcall BattleActorControl__ValidateAbusingEventClass(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        System_String_o *logOnInvalid,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18FE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, eventName, motionName);
    byte_4B18FE5 = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1BCAA3C(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
         (Il2CppObject *)eventName,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    System_String__op_Inequality(motionName, (System_String_o *)value, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__WaitToNoblePhantasmPlay(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18FF6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__WaitToNoblePhantasmPlay_d__269_TypeInfo, method, v2);
    byte_4B18FF6 = 1;
  }
  v5 = sub_1BCAA2C(BattleActorControl__WaitToNoblePhantasmPlay_d__269_TypeInfo, method, v2, v3);
  BattleActorControl__WaitToNoblePhantasmPlay_d__269___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__216_0(
        BattleActorControl_o *this,
        System_String_o *playedSoundId,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *battleSvtData; // x9
  BattleData_o *data; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4B19048 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCA7E0(
                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                     playedSoundId,
                                     method);
    byte_4B19048 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_9;
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_9;
  data = performance->fields.data;
  v9 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, playedSoundId);
  *(_QWORD *)&v10.fields.currentCryptoKey = v9;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
  if ( !data )
LABEL_9:
    sub_1BCAA3C(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__139_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__268_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__270_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattlePerformance_o *performance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct System_Action_o *noblePhantasmCallback; // x8

  if ( (byte_4B1904B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6505/*"FINISHED"*/, v4, v5);
    byte_4B1904B = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_10;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  noblePhantasmCallback = this->fields.noblePhantasmCallback;
  if ( !noblePhantasmCallback )
  {
    BattleActorControl__sendEventFSM_44485868(this, (System_String_o *)StringLiteral_6505/*"FINISHED"*/, 0, v8);
    return;
  }
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v7);
    noblePhantasmCallback = this->fields.noblePhantasmCallback;
    BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
    if ( noblePhantasmCallback )
      goto LABEL_9;
LABEL_10:
    sub_1BCAA3C(performance, method);
  }
  BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
LABEL_9:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
    noblePhantasmCallback->fields.original_method_info,
    *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__266_0(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  BattleActorControl_o *v18; // x20
  int32_t v19; // w21
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *v21; // x8
  int32_t size; // w2
  int v23; // w9
  __int128 v24; // [xsp+0h] [xbp-60h] BYREF
  __int128 v25; // [xsp+10h] [xbp-50h]

  if ( (byte_4B19049 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___get_Current__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v12, v13);
    byte_4B19049 = 1;
  }
  v24 = 0u;
  v25 = 0u;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_13;
  System_Collections_Generic_List_ValueTuple_Int32Enum__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_3549F94 *)Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__object____MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&v24,
            (const MethodInfo_330D244 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___MoveNext__);
    if ( !v15 )
      break;
    v18 = (BattleActorControl_o *)*((_QWORD *)&v25 + 1);
    if ( !*((_QWORD *)&v25 + 1) )
      sub_1BCAA3C(v15, v16);
    v19 = v25;
    BattleActorControl__playAnimation_44433272(
      *((BattleActorControl_o **)&v25 + 1),
      (System_String_o *)StringLiteral_24854/*"wait"*/,
      0,
      v17);
    BattleActorControl__ProcServantObjectVisibleCtr(v18, v19, 1, v20);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (const MethodInfo_330D240 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Dispose__);
  v21 = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !v21 )
LABEL_13:
    sub_1BCAA3C(noblePhantasmObjectVisibleCtrList, method);
  size = v21->fields._size;
  v23 = v21->fields._version + 1;
  v21->fields._size = 0;
  v21->fields._version = v23;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v21->fields._items, 0, size, 0LL);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__266_1(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleSequenceManager_o *Instance; // x0
  __int64 v11; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v13; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  BattleSequenceManager_o *v17; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v19; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v22; // w23
  int32_t NpChargeStage; // w26
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  BattleSequenceManager_onGameObjectLoadComplete_o *v27; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B1904A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v8, v9);
    byte_4B1904A = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_12;
  v13 = Instance;
  v15 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_12;
  v16 = (int)Instance;
  Instance = (BattleSequenceManager_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !Instance )
    goto LABEL_12;
  v17 = Instance;
  Instance = (BattleSequenceManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_12;
  m_CachedPtr = v17->fields.m_CachedPtr;
  Instance = (BattleSequenceManager_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)Instance, 1, 0LL);
  v19 = this->fields.battleSvtData;
  if ( !v19
    || (overwriteSvtVoiceId = v19->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v19->fields.treasuredvcLevel,
        v22 = (int)Instance,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL),
        v27 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1BCAA2C(
                                                                    BattleSequenceManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v24,
                                                                    v25,
                                                                    v26),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v27,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v13) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  }
  BattleSequenceManager__loadSequence(
    v13,
    v16,
    m_CachedPtr,
    v22,
    overwriteSvtVoiceId,
    treasuredvcLevel,
    NpChargeStage,
    v27,
    0LL);
}


void __fastcall BattleActorControl__addAura(
        BattleActorControl_o *this,
        int32_t auraEffectId,
        int32_t priority,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BattleActorControl__coAddAura(this, auraEffectId, priority, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__addBuffLoopEffect(
        BattleActorControl_o *this,
        BuffEntity_o *buffEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *effectId; // x1
  __int64 buffLoopEffectDict; // x0
  System_Int32_array *ValueArray; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x8
  int v30; // w10
  BattleEffectUtility_BuffEffectLoadArgument_o *v31; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v33; // w22
  UnityEngine_GameObject_o *v34; // x23
  __int64 v35; // x2
  UnityEngine_GameObject_o *v36; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  int32_t LimitCount; // w26
  __int64 v45; // x1
  UnityEngine_Object_o *EffectToNode; // x21
  __int64 v47; // x2
  UnityEngine_Transform_o *v48; // x22
  __int64 v49; // x2
  UnityEngine_Transform_o *v50; // x22
  StatusEffectPosOverwriteMaster_o *v51; // x22
  int32_t v52; // w23
  int32_t v53; // w24
  const MethodInfo *v54; // x1
  int32_t v55; // w0
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 isEnemy; // w25
  UnityEngine_Transform_o *v58; // x22
  System_String_o *nodeName; // x24
  UnityEngine_Transform_o *v60; // x23
  int32_t v61; // w0
  __int64 v62; // x2
  UnityEngine_Transform_o *NodeFromLvName; // x23
  struct UnityEngine_Vector3_StaticFields *v64; // x8
  float v65; // s8
  float v66; // s9
  float v67; // s10
  float v68; // s0
  float v69; // s1
  float v70; // s2
  struct BattleServantData_o *v71; // x8
  float v72; // s10
  float v73; // s8
  float v74; // s9
  bool v75; // w0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19033 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, buffEntity, method);
    sub_1BCA7E0(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_7277/*"HIDE_STATUS_EFFECT_IDS"*/, v21, v22);
    byte_4B19033 = 1;
  }
  entity = 0LL;
  if ( !buffEntity )
    return;
  effectId = (const MethodInfo *)(unsigned int)buffEntity->fields.effectId;
  if ( (int)effectId < 1 )
    return;
  buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         (int32_t)effectId,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffLoopEffectDict,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7277/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v29 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v29 < 1 )
  {
LABEL_15:
    v31 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1BCAA2C(
                                                            BattleEffectUtility_BuffEffectLoadArgument_TypeInfo,
                                                            v26,
                                                            v27,
                                                            v28);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v31, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v33 = buffEntity->fields.effectId;
    v34 = gameObject;
    v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectId, v35);
      byte_4B109C1 = 1;
    }
    buffLoopEffectDict = (__int64)this->fields.battleSvtData;
    if ( buffLoopEffectDict )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v42);
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v43);
      v77.fields.x = x;
      v77.fields.y = y;
      v77.fields.z = z;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v34,
                                               v33,
                                               v36,
                                               v77,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v31,
                                               0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
      buffLoopEffectDict = UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
      if ( (buffLoopEffectDict & 1) == 0 )
        return;
      if ( EffectToNode )
      {
        buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)EffectToNode,
                                        0LL);
        v48 = (UnityEngine_Transform_o *)buffLoopEffectDict;
        if ( !byte_4B109C1 )
        {
          buffLoopEffectDict = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectId, v47);
          byte_4B109C1 = 1;
        }
        if ( v48 )
        {
          UnityEngine_Transform__set_localPosition(v48, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)EffectToNode,
                                          0LL);
          v50 = (UnityEngine_Transform_o *)buffLoopEffectDict;
          if ( !byte_4B109C7 )
          {
            buffLoopEffectDict = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, effectId, v49);
            byte_4B109C7 = 1;
          }
          if ( v50 )
          {
            UnityEngine_Transform__set_localRotation(
              v50,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)buffLoopEffectDict,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0LL;
              if ( buffLoopEffectDict )
              {
                v51 = (StatusEffectPosOverwriteMaster_o *)buffLoopEffectDict;
                buffLoopEffectDict = (__int64)this->fields.battleSvtData;
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v52 = buffEntity->fields.effectId;
                v53 = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
                v55 = BattleActorControl__getLimitCount(this, v54);
                buffLoopEffectDict = StatusEffectPosOverwriteMaster__TryGetEntity(v51, &entity, v52, v53, v55, 0LL);
                if ( (buffLoopEffectDict & 1) != 0 )
                {
                  battleSvtData = this->fields.battleSvtData;
                  if ( !battleSvtData )
                    goto LABEL_53;
                  isEnemy = battleSvtData->fields.isEnemy;
                  buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)EffectToNode,
                                                  0LL);
                  if ( !this->fields.actorObject )
                    goto LABEL_53;
                  v58 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
                  if ( !entity )
                    goto LABEL_53;
                  nodeName = entity->fields.nodeName;
                  v60 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  v61 = BattleActorControl__getLimitCount(this, effectId);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v60, nodeName, v61, 1, 0LL);
                  if ( !byte_4B109C1 )
                  {
                    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectId, v62);
                    byte_4B109C1 = 1;
                  }
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  v64 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v66 = v64->zeroVector.fields.y;
                  v65 = v64->zeroVector.fields.z;
                  v67 = v64->zeroVector.fields.x;
                  *(UnityEngine_Vector3_o *)&v68 = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0LL);
                  if ( !v58 )
                    goto LABEL_53;
                  v78.fields.z = v65 + v70;
                  v78.fields.y = v66 + v69;
                  v78.fields.x = v67 + v68;
                  UnityEngine_Transform__set_localPosition(v58, v78, 0LL);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                  Rotation.fields.x = Rotation.fields.x * 0.017453;
                  Rotation.fields.y = Rotation.fields.y * 0.017453;
                  Rotation.fields.z = Rotation.fields.z * 0.017453;
                  v83 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                  UnityEngine_Transform__set_localRotation(v58, v83, 0LL);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                  UnityEngine_Transform__set_localScale(v58, Scale, 0LL);
                  UnityEngine_Transform__set_parent(v58, NodeFromLvName, 0LL);
                }
              }
              v71 = this->fields.battleSvtData;
              if ( !v71 )
                goto LABEL_53;
              if ( v71->fields.isEnemy )
              {
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, 0LL);
                v72 = localScale.fields.x;
                v73 = localScale.fields.y;
                v74 = localScale.fields.z;
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v82.fields.x = -v72;
                v82.fields.y = v73;
                v82.fields.z = v74;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, v82, 0LL);
              }
              buffLoopEffectDict = (__int64)this->fields.reservedEffectBuffEffectIdList;
              if ( buffLoopEffectDict )
              {
                v75 = System_Collections_Generic_List_int___Contains(
                        (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
                        buffEntity->fields.effectId,
                        (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v75, 0LL);
                buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (Il2CppObject *)EffectToNode,
                    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1BCAA3C(buffLoopEffectDict, effectId);
  }
  v30 = 0;
  while ( ValueArray->m_Items[v30 + 1] != buffEntity->fields.effectId )
  {
    if ( (_DWORD)v29 == ++v30 )
      goto LABEL_15;
  }
}


void __fastcall BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCAA3C(0LL, method);
  BattlePerformance__callServant(performance, this->fields.actiondata, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__changeShadowType(
        BattleActorControl_o *this,
        bool isNormal,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *shadowObj; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4B18FFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, isNormal, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B18FFE = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNormal);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Equality(specialShadowObj, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, isNormal, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_1BCAA3C(Component_object, v10);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, !isNormal, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__changeSpecialShadow(
        BattleActorControl_o *this,
        int32_t shadowEffectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  UnityEngine_Component_o *Component_object; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  UnityEngine_Object_o *shadowObj; // x21
  __int64 v27; // x1
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v29; // w21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x22
  __int64 v34; // x1
  BattlePerformance_o *performance; // x19

  if ( (byte_4B18FFD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&shadowEffectId, method);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Renderer___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass277_0__changeSpecialShadow_b__0__, v12, v13);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass277_0_TypeInfo, v14, v15);
    byte_4B18FFD = 1;
  }
  v16 = sub_1BCAA2C(BattleActorControl___c__DisplayClass277_0_TypeInfo, *(_QWORD *)&shadowEffectId, method, v3);
  BattleActorControl___c__DisplayClass277_0___ctor((BattleActorControl___c__DisplayClass277_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 24) = shadowEffectId;
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        Component_object,
                                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_object )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, 0, 0LL);
          v29 = *(_DWORD *)(v16 + 24);
          v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
          System_Action___ctor(
            v33,
            (Il2CppObject *)v16,
            Method_BattleActorControl___c__DisplayClass277_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v34);
          BattleEffectUtility__LoadEffectAssetIfNotYet(v29, v33, performance, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1BCAA3C(Component_object, v18);
    }
  }
}


bool __fastcall BattleActorControl__checkAnimation(
        BattleActorControl_o *this,
        System_String_o *animname,
        const MethodInfo *method)
{
  BattleFBXComponent_o *fbxcomponent; // x0

  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1BCAA3C(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  BattlePerformance_o *performance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B1901A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleActorControl_endChangeAppearance__, v5, v6);
    byte_4B1901A = 1;
  }
  performance = this->fields.performance;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_1BCAA3C(v9, v10);
  BattlePerformance__checkChangeAppearance(performance, v8, 0LL);
}


bool __fastcall BattleActorControl__checkGEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  __int64 actindex; // x9
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v7; // x20
  bool v8; // w21
  int v9; // w22
  System_String_o *EventName; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_12;
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_13;
  this = (BattleActorControl_o *)motionFSM->m_Items[actindex];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(this, name);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  v8 = m_CancellationTokenSource > 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)m_CancellationTokenSource )
    {
      this = (BattleActorControl_o *)*((_QWORD *)&v7->fields.actorObject + v9);
      if ( !this )
        goto LABEL_12;
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0LL);
      this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
        v8 = ++v9 < m_CancellationTokenSource;
        if ( v9 < m_CancellationTokenSource )
          continue;
      }
      return v8;
    }
LABEL_13:
    sub_1BCAA44(this, name);
  }
  return v8;
}


bool __fastcall BattleActorControl__checkID(BattleActorControl_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.uniqueID == id;
}


bool __fastcall BattleActorControl__checkMotionEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v6; // x20
  bool v7; // w21
  int v8; // w22
  System_String_o *EventName; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_12;
  if ( !motionFSM->max_length )
    goto LABEL_13;
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCAA3C(this, name);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = this;
  v7 = m_CancellationTokenSource > 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)m_CancellationTokenSource )
    {
      this = (BattleActorControl_o *)*((_QWORD *)&v6->fields.actorObject + v8);
      if ( !this )
        goto LABEL_12;
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0LL);
      this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
        v7 = ++v8 < m_CancellationTokenSource;
        if ( v8 < m_CancellationTokenSource )
          continue;
      }
      return v7;
    }
LABEL_13:
    sub_1BCAA44(this, name);
  }
  return v7;
}


bool __fastcall BattleActorControl__checkNextAttackMe(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.nextattackme;
}


bool __fastcall BattleActorControl__checkPrevAttackMe(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.prevattackme;
}


bool __fastcall BattleActorControl__checkScriptValue(
        BattleActorControl_o *this,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, key);
  return BattleServantData__checkScriptValue(battleSvtData, key, value, 0LL);
}


bool __fastcall BattleActorControl__checkStepFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.stepFlg;
}


bool __fastcall BattleActorControl__checkStepIn(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantData_o *battleSvtData; // x0
  int32_t StepRate; // w19

  if ( (byte_4B18FC0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23917/*"summon"*/, method, v2);
    byte_4B18FC0 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_23917/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_1BCAA3C(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_70113984(0, 1000, 0LL) < StepRate;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__checkVoice(
        BattleActorControl_o *this,
        int32_t type,
        bool isNp,
        const MethodInfo *method)
{
  System_String_o *FileName; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4B18FCE & 1) == 0 )
  {
    sub_1BCA7E0(&Voice_TypeInfo, *(_QWORD *)&type, isNp);
    byte_4B18FCE = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, *(_QWORD *)&type);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_44494192(this, FileName, isNp, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__checkVoice_44494192(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w21
  int32_t svtId; // w23
  int32_t overwriteSvtVoiceId; // w22
  bool v11; // w4
  int32_t v12; // w0
  int32_t v13; // w1
  int32_t v14; // w2
  BattleServantData_o *battleSvtData; // x0
  int32_t v16; // w22
  const MethodInfo *v17; // x1
  struct BattleServantData_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w23

  if ( (byte_4B18FCF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, voiceTypeId, isNp);
    byte_4B18FCF = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    svtId = myShiftData->fields.svtId;
    limit = myShiftData->fields.limit;
    overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, voiceTypeId);
    v11 = isNp;
    v12 = svtId;
    v13 = limit;
    v14 = overwriteSvtVoiceId;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData
      || (v16 = BattleServantData__getSvtId(battleSvtData, 0LL),
          battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v17),
          (v18 = this->fields.battleSvtData) == 0LL) )
    {
      sub_1BCAA3C(battleSvtData, voiceTypeId);
    }
    v19 = (int)battleSvtData;
    v20 = v18->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, voiceTypeId);
    v11 = isNp;
    v12 = v16;
    v13 = v19;
    v14 = v20;
  }
  return ServantAssetLoadManager__checkBattleVoice(v12, v13, v14, voiceTypeId, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__coAddAura(
        BattleActorControl_o *this,
        int32_t auraEffectId,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B19022 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__coAddAura_d__331_TypeInfo, *(_QWORD *)&auraEffectId, *(_QWORD *)&priority);
    byte_4B19022 = 1;
  }
  v7 = sub_1BCAA2C(
         BattleActorControl__coAddAura_d__331_TypeInfo,
         *(_QWORD *)&auraEffectId,
         *(_QWORD *)&priority,
         method);
  BattleActorControl__coAddAura_d__331___ctor((BattleActorControl__coAddAura_d__331_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = auraEffectId;
  *(_DWORD *)(v7 + 56) = priority;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__colShiftServant(
        BattleActorControl_o *this,
        BattleActionData_ShiftServant_o *shiftSvt,
        bool isShift,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B19025 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__colShiftServant_d__337_TypeInfo, shiftSvt, isShift);
    byte_4B19025 = 1;
  }
  v9 = sub_1BCAA2C(BattleActorControl__colShiftServant_d__337_TypeInfo, shiftSvt, isShift, finishCallback);
  BattleActorControl__colShiftServant_d__337___ctor((BattleActorControl__colShiftServant_d__337_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1BCAA3C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)shiftSvt, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 56), (int64_t)finishCallback, v24, v25, v26, v27, v28, v29);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__colShiftServantChange(
        BattleActorControl_o *this,
        BattleActionData_ShiftServant_o *shiftSvt,
        bool isShift,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19026 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__colShiftServantChange_d__338_TypeInfo, shiftSvt, isShift);
    byte_4B19026 = 1;
  }
  v7 = sub_1BCAA2C(BattleActorControl__colShiftServantChange_d__338_TypeInfo, shiftSvt, isShift, method);
  BattleActorControl__colShiftServantChange_d__338___ctor(
    (BattleActorControl__colShiftServantChange_d__338_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = shiftSvt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)shiftSvt, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v7 + 48) = isShift;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__collChangeAppearance(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1901E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__collChangeAppearance_d__326_TypeInfo, method, v2);
    byte_4B1901E = 1;
  }
  v5 = sub_1BCAA2C(BattleActorControl__collChangeAppearance_d__326_TypeInfo, method, v2, v3);
  BattleActorControl__collChangeAppearance_d__326___ctor(
    (BattleActorControl__collChangeAppearance_d__326_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadDressServant(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19019 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__colloadDressServant_d__321_TypeInfo, flg, method);
    byte_4B19019 = 1;
  }
  v6 = sub_1BCAA2C(BattleActorControl__colloadDressServant_d__321_TypeInfo, flg, method, v3);
  BattleActorControl__colloadDressServant_d__321___ctor((BattleActorControl__colloadDressServant_d__321_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v6 + 40) = flg;
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadTransformServant(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19017 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__colloadTransformServant_d__318_TypeInfo, method, v2);
    byte_4B19017 = 1;
  }
  v5 = sub_1BCAA2C(BattleActorControl__colloadTransformServant_d__318_TypeInfo, method, v2, v3);
  BattleActorControl__colloadTransformServant_d__318___ctor(
    (BattleActorControl__colloadTransformServant_d__318_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__coroutinePostCallBack(
        BattleActorControl_o *this,
        BattleCallBackBase_o *callBack,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B18FCB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__coroutinePostCallBack_d__207_TypeInfo, callBack, method);
    byte_4B18FCB = 1;
  }
  v7 = sub_1BCAA2C(BattleActorControl__coroutinePostCallBack_d__207_TypeInfo, callBack, method, v4);
  BattleActorControl__coroutinePostCallBack_d__207___ctor(
    (BattleActorControl__coroutinePostCallBack_d__207_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)callBack, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1901D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5552/*"END_LOAD"*/, method, v2);
    byte_4B1901D = 1;
  }
  BattleActorControl__sendEventFSM_44485868(this, (System_String_o *)StringLiteral_5552/*"END_LOAD"*/, 0, v3);
}


void __fastcall BattleActorControl__endFinishMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x0
  const MethodInfo *v7; // x2
  struct BattleActionData_o *actiondata; // x8
  struct BattleServantData_o *v9; // x8
  _BOOL4 isEnemy; // w9
  struct BattleActionData_o *v11; // x8
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B18FCC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8838/*"MOTION_BACK"*/, method, v2);
    byte_4B18FCC = 1;
  }
  BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_27;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v7);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_27;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_27;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsExecOverwriteTreasureDevice(
                                           battleSvtData,
                                           actiondata->fields.treasureDvcId,
                                           0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_27;
    BattleServantData__ResetOverwriteTreasureDevice(battleSvtData, 0LL);
  }
  v9 = this->fields.battleSvtData;
  if ( !v9 )
    goto LABEL_27;
  isEnemy = v9->fields.isEnemy;
  v11 = this->fields.actiondata;
  if ( isEnemy )
  {
    if ( !v11 )
      goto LABEL_27;
    if ( v11->fields.treasureDvcId >= 1 )
    {
      BattleActorControl__ActiveRemainReservedBuffEffect(this, v4);
      BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v12);
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_27;
      BattleServantData__updateTDGauge(battleSvtData, 0LL);
      goto LABEL_18;
    }
  }
  else if ( !v11 )
  {
    goto LABEL_27;
  }
  if ( System_String__op_Equality(v11->fields.motionname, (System_String_o *)StringLiteral_8838/*"MOTION_BACK"*/, 0LL) )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v4);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
LABEL_18:
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_27;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, 0LL) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_27;
    if ( !BattleServantData__isDeadStand(battleSvtData, 0LL) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_27;
      if ( !BattleServantData__isDeadWait(battleSvtData, 0LL) )
        BattleActorControl__invisibleSvtModel(this, 1, v14);
    }
  }
  battleSvtData = (BattleServantData_o *)this->fields.performance;
  if ( !battleSvtData )
LABEL_27:
    sub_1BCAA3C(battleSvtData, v4);
  BattlePerformance__endActionData((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_44485868(this, call, 0, v3);
}


void __fastcall BattleActorControl__endPigReturnEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *transform; // x0
  __int64 v9; // x1
  int v10; // w8
  _DWORD *v11; // x19
  unsigned int v12; // w21
  char *v13; // x8
  UnityEngine_Component_o *v14; // x20
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w24
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v19; // 0:x0.8

  if ( (byte_4B19027 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v4, v5);
    sub_1BCA7E0(&StringLiteral_19040/*"ef_pig_return01"*/, v6, v7);
    byte_4B19027 = 1;
  }
  m_ParticleSystem = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(transform, v9);
  }
  v10 = *((_DWORD *)transform + 6);
  v11 = transform;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        goto LABEL_21;
      v13 = (char *)&v11[2 * v12];
      v14 = (UnityEngine_Component_o *)*((_QWORD *)v13 + 4);
      if ( !v14 )
        goto LABEL_20;
      transform = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v13 + 4), 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = (void *)System_String__Contains(
                            (System_String_o *)transform,
                            (System_String_o *)StringLiteral_19040/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                      v14,
                      (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
        if ( !transform )
          goto LABEL_20;
        v15 = *((_DWORD *)transform + 6);
        v16 = transform;
        if ( v15 >= 1 )
          break;
      }
LABEL_18:
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        return;
    }
    v17 = 0;
    while ( v17 < v15 )
    {
      transform = (void *)*((_QWORD *)v16 + (int)v17 + 4);
      if ( !transform )
        goto LABEL_20;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)transform, 0LL).fields.m_ParticleSystem;
      v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v19, 0, 0LL);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        goto LABEL_18;
    }
LABEL_21:
    sub_1BCAA44(transform, v9);
  }
}


void __fastcall BattleActorControl__finishMotion(
        BattleActorControl_o *this,
        System_String_o *finishFsmName,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  BattleCallBackBase_o *v8; // x0
  const MethodInfo *v9; // x1
  BattleCallBackBase_o *v10; // x20
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  const MethodInfo *v13; // x3

  v5 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)finishFsmName);
  if ( !v5 )
    goto LABEL_11;
  if ( !BattleActorControl_ActorMotionActiveCheck__inactiveFSM(v5, finishFsmName, 0LL) )
  {
    BattleActorControl__finishMotion_44492896(this, v7);
    return;
  }
  v5 = BattleActorControl__get_CheckMotion(this, v7);
  if ( !v5 )
    goto LABEL_11;
  v8 = BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(v5, 0LL);
  if ( !v8 )
    goto LABEL_7;
  v10 = v8;
  v5 = BattleActorControl__get_CheckMotion(this, v9);
  if ( !v5 )
LABEL_11:
    sub_1BCAA3C(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_44492896(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *performance; // x20
  __int64 v5; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_4B18FCA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18FCA = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) && this->fields.actiondata )
  {
    MotionSkip = this->fields.performance;
    if ( !MotionSkip
      || (MotionSkip = (BattlePerformance_o *)BattlePerformance__get_MotionSkip(MotionSkip, 0LL)) == 0LL
      || (((void (__fastcall *)(BattlePerformance_o *, void *))MotionSkip->klass[1]._1.typeMetadataHandle)(
            MotionSkip,
            MotionSkip->klass[1]._1.interopData),
          (MotionSkip = this->fields.performance) == 0LL) )
    {
      sub_1BCAA3C(MotionSkip, v5);
    }
    BattlePerformance__finishMotion(MotionSkip, this, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffect(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  BattleServantData_o *v6; // x8
  int32_t index; // w21
  struct BattleServantData_o *v8; // x8
  int32_t v9; // w20
  int32_t seqIdFromMstTDSeqWeight; // w22

  if ( (byte_4B18FA9 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, name, method);
    byte_4B18FA9 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL)
    || (index = v6->fields.index,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL),
        (v8 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1BCAA3C(battleSvtData, name);
  }
  v9 = (int)battleSvtData;
  seqIdFromMstTDSeqWeight = v8->fields.seqIdFromMstTDSeqWeight;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, name);
  return ServantAssetLoadManager__loadNoblePhantasmEffect(index, v9, name, seqIdFromMstTDSeqWeight, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffectFromActor(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t v6; // w20
  BattleServantData_o *v7; // x8
  int32_t v8; // w21
  __int64 v9; // x1
  int32_t WeaponGroup; // w22

  if ( (byte_4B18FAA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, name, method);
    byte_4B18FAA = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData)
    || (v6 = (int)battleSvtData,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1BCAA3C(battleSvtData, name);
  }
  v8 = (int)battleSvtData;
  WeaponGroup = BattleServantData__getWeaponGroup(v7, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9);
  return ServantAssetLoadManager__loadActorEffectFromActor(v6, v8, WeaponGroup, name, 0LL);
}


int32_t __fastcall BattleActorControl__getActorSvtId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__getActorSvtId(battleSvtData, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleActorControl__getBaseScale(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float actorScale; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C6 = 1;
  }
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = static_fields->oneVector.fields.x * actorScale;
  v7 = static_fields->oneVector.fields.y * actorScale;
  v8 = static_fields->oneVector.fields.z * actorScale;
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector3_o __fastcall BattleActorControl__getCriterialPos(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.criteriaPos.fields.x;
  y = this->fields.criteriaPos.fields.y;
  z = this->fields.criteriaPos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getDropTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCAA3C(this, method);
  return performance->fields.root_field;
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getHeadUpObject(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleActorControl__getHeadUpY(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  float x; // s8
  float y; // s9
  float v6; // s1
  float v7; // s2
  float v8; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  x = this->fields.headupVec.fields.x;
  y = this->fields.headupVec.fields.y;
  v6 = (float)(y + 0.5) + BattleServantData__getheadUpY(battleSvtData, 0LL);
  v7 = 0.0;
  v8 = x;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v8;
  return result;
}


int32_t __fastcall BattleActorControl__getLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL);
}


int32_t __fastcall BattleActorControl__getNobleChainCount(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  if ( actiondata )
    return actiondata->fields.chainCount;
  else
    return 0;
}


int32_t __fastcall BattleActorControl__getOriginLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(this, method);
  return battleSvtData->fields.overwriteSvtVoiceId;
}


int32_t __fastcall BattleActorControl__getScriptValue(
        BattleActorControl_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__getStrParam(battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleActorControl__getTargetObjectVec(
        BattleActorControl_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s11
  UnityEngine_Object_o *targetObject; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v12; // s1
  float v13; // s2
  float v14; // s0
  float v15; // s0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  struct BattlePerformance_o *v19; // x8
  float v20; // s3
  float v21; // s4
  float v22; // s5
  bool v23; // nf
  float v24; // s3
  struct BattlePerformance_o *v25; // x8
  float v26; // s3
  float v27; // s1
  float v28; // s0
  float v29; // s1
  float v30; // s2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B18FC4 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&pos, method);
    byte_4B18FC4 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_42;
  distanceofactor = performance->fields.distanceofactor;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&pos, method);
    byte_4B109C1 = 1;
  }
  targetObject = (UnityEngine_Object_o *)v4->fields.targetObject;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&pos);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.targetObject;
    if ( this )
    {
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( this )
      {
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        goto LABEL_12;
      }
    }
LABEL_42:
    sub_1BCAA3C(this, *(_QWORD *)&pos);
  }
LABEL_12:
  if ( !v4->fields.dir )
    distanceofactor = -distanceofactor;
  switch ( pos )
  {
    case 0:
      this = (BattleActorControl_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = distanceofactor + v14;
      goto LABEL_21;
    case 1:
      this = (BattleActorControl_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v15 - distanceofactor;
LABEL_21:
      z = v13 + 0.0;
      y = v12 + 0.0;
      break;
    case 3:
      x = v4->fields.criteriaPos.fields.x;
      y = v4->fields.criteriaPos.fields.y;
      z = v4->fields.criteriaPos.fields.z;
      break;
    case 4:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      goto LABEL_31;
    case 5:
      this = (BattleActorControl_o *)v4->fields.enemyStage;
      if ( !this )
        goto LABEL_42;
LABEL_31:
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      v32 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v32.fields.x;
      y = v32.fields.y;
      z = v32.fields.z;
      break;
    case 6:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v25 = v4->fields.performance;
      if ( !v25 )
        goto LABEL_42;
      v26 = (float)(v25->fields.currentFov + -40.0) / 30.0;
      v21 = 12.0;
      v22 = fminf(v26, 1.0);
      v23 = v26 < 0.0;
      v24 = 2.0;
      goto LABEL_37;
    default:
      if ( pos != 7 )
        break;
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v19 = v4->fields.performance;
      if ( !v19 )
        goto LABEL_42;
      v20 = (float)(v19->fields.currentFov + -40.0) / 30.0;
      v21 = 5.0;
      v22 = fminf(v20, 1.0);
      v23 = v20 < 0.0;
      v24 = 3.0;
LABEL_37:
      y = v17 + 0.0;
      v27 = (float)(v22 * v21) + v24;
      if ( v23 )
        v27 = v24;
      x = v16 + (float)(distanceofactor * v27);
      z = v18 + 0.0;
      break;
  }
  v28 = x;
  v29 = y;
  v30 = z;
  result.fields.z = v30;
  result.fields.y = v29;
  result.fields.x = v28;
  return result;
}


int32_t __fastcall BattleActorControl__getWaveCount(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *v7; // x8
  struct BattleData_o *data; // x8

  if ( (byte_4B18FA8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18FA8 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  if ( !v5 )
    return -1;
  v7 = this->fields.performance;
  if ( !v7 || (data = v7->fields.data) == 0LL )
    sub_1BCAA3C(v5, v6);
  return data->fields.wavecount;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__getWeaponColor(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  *(UnityEngine_Color_o *)&v3 = BattleServantData__getWeaponColor(battleSvtData, 0LL);
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActorControl__getWeaponGroup(
        BattleActorControl_o *this,
        bool isEffect,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return BattleServantData__getWeaponScale(battleSvtData, 0LL);
}


BattleActionData_o *__fastcall BattleActorControl__get_ActionData(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.actiondata;
}


BattleServantData_o *__fastcall BattleActorControl__get_BattleSvtData(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSvtData;
}


System_String_o *__fastcall BattleActorControl__get_BuffEffectNodeName(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._BuffEffectNodeName_k__BackingField;
}


BattleActorControl_ActorMotionActiveCheck_o *__fastcall BattleActorControl__get_CheckMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActorControl_ActorMotionActiveCheck_o *result; // x0
  BattleActorControl_ActorMotionActiveCheck_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B18FC5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_ActorMotionActiveCheck_TypeInfo, method, v2);
    byte_4B18FC5 = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v6 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_1BCAA2C(
                                                          BattleActorControl_ActorMotionActiveCheck_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
    BattleActorControl_ActorMotionActiveCheck___ctor(v6, this, 0LL);
    this->fields._checkMotion = v6;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._checkMotion, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    return this->fields._checkMotion;
  }
  return result;
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  return ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer))battleSvtData->klass->vtable._15_get_IsAiNpc.method)(
           battleSvtData,
           battleSvtData->klass->vtable._16_getSaveData.methodPtr);
}


bool __fastcall BattleActorControl__get_IsEnemy(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.isEnemy;
}


bool __fastcall BattleActorControl__get_IsStepInBattle(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._IsStepInBattle_k__BackingField;
}


int32_t __fastcall BattleActorControl__get_Level(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w20
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  int32_t LimitCount; // w19

  if ( (byte_4B18FA7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v2);
    byte_4B18FA7 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(0LL, method);
  SvtId = BattleServantData__getSvtId(battleSvtData, 0LL);
  LimitCount = BattleActorControl__getLimitCount(this, v6);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7);
  return ServantAssetLoadManager__GetLimitImageIndex(SvtId, LimitCount, 0, 0LL);
}


BaseMotionSkip_o *__fastcall BattleActorControl__get_MotionSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCAA3C(0LL, method);
  return BattlePerformance__get_MotionSkip(performance, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_NodeDamage(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.nodeDamage;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_NodeText(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.nodeText;
}


System_String_o *__fastcall BattleActorControl__get_PlayedOriginalAnimName(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._PlayedOriginalAnimName_k__BackingField;
}


int32_t __fastcall BattleActorControl__get_PrevSkillVoiceType(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.prevSkillVoiceType;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_ShadowObj(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowObj;
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__get_SpecialShadowObj(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.specialShadowObj;
}


int32_t __fastcall BattleActorControl__get_currentPriority(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._currentPriority_k__BackingField;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__get_delayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
}


System_String_array *__fastcall BattleActorControl__getlog(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B18FA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v6, v7);
    byte_4B18FA3 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v8 )
    sub_1BCAA3C(v9, v10);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v8,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__invisibleSvtModel(
        BattleActorControl_o *this,
        bool hideFlg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    sub_1BCAA3C(0LL, hideFlg);
  v5 = !hideFlg;
  UnityEngine_GameObject__SetActive(actorObject, v5, 0LL);
  BattleActorControl__SetShadowActive(this, v5, v6);
  BattleActorControl__LoopEffectParticleSwitch(this, v5, 0, v7);
}


bool __fastcall BattleActorControl__isChocoServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.displayType == 3;
}


bool __fastcall BattleActorControl__isFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && !actiondata->fields.three && !actiondata->fields.pair;
}


bool __fastcall BattleActorControl__isMonsterServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCAA3C(this, method);
  return battleSvtData->fields.svtType == 4;
}


bool __fastcall BattleActorControl__isNoVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  struct BattleActionData_ShiftServant_o *myShiftData; // x8

  if ( BattleActorControl__IsVoiceOffSvt(this, method) )
  {
    LOBYTE(battleSvtData) = 1;
  }
  else
  {
    myShiftData = this->fields.myShiftData;
    if ( myShiftData )
    {
      LOBYTE(battleSvtData) = myShiftData->fields.isNoVoice;
    }
    else
    {
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
        LOBYTE(battleSvtData) = BattleServantData__IsNoVoice(battleSvtData, 0LL);
    }
  }
  return (char)battleSvtData;
}


bool __fastcall BattleActorControl__isPairFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && actiondata->fields.pair;
}


bool __fastcall BattleActorControl__isShadowServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.displayType == 2;
}


bool __fastcall BattleActorControl__isSummonEndFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v7; // x8
  bool v8; // w21
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x19

  v3 = this;
  if ( (byte_4B18FBD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_13240/*"SummonEndFlag"*/, v4, v5);
    byte_4B18FBD = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1BCAA3C(this, method);
  v7 = *(_QWORD *)&motionFSM->max_length;
  v8 = (int)v7 > 0;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1BCAA44(this, method);
      v10 = (UnityEngine_Object_o *)motionFSM->m_Items[v9];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v10, 0LL);
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13240/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmBool__get_Value(
                                           (HutongGames_PlayMaker_FsmBool_o *)this,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v8;
        }
      }
      LODWORD(v7) = motionFSM->max_length;
      v8 = (__int64)++v9 < (int)v7;
    }
    while ( (__int64)v9 < (int)v7 );
  }
  return v8;
}


bool __fastcall BattleActorControl__isThree(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && !actiondata->fields.flash && actiondata->fields.three;
}


bool __fastcall BattleActorControl__isThreeFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && actiondata->fields.three;
}


void __fastcall BattleActorControl__loadDressServant(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleActorControl__colloadDressServant(this, flg, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_1BCAA3C(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_BackStep(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  PartyListViewItem_o *v9; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BattleActorControl_EndCallEvent_o *v62; // x22
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppObject *v71; // x0
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x0
  const MethodInfo *v74; // x3
  int32_t v75; // [xsp+4h] [xbp-7Ch] BYREF
  float v76; // [xsp+8h] [xbp-78h] BYREF
  float v77; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B18FE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_moveStep__, target, *(_QWORD *)&pos);
    sub_1BCA7E0(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, v20, v21);
    sub_1BCA7E0(&BattleActorControl_POS_TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12424/*"STEP_START"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_22814/*"pos"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_23796/*"step_back"*/, v34, v35);
    byte_4B18FE9 = 1;
  }
  this->fields.targetObject = target;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  BattleActorControl__playAnimation_44433272(this, (System_String_o *)StringLiteral_23796/*"step_back"*/, 0, v54);
  v58 = sub_1BCAA2C(BattleActorControl_EventClass_TypeInfo, v55, v56, v57);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v58, 0LL);
  v62 = (BattleActorControl_EndCallEvent_o *)sub_1BCAA2C(BattleActorControl_EndCallEvent_TypeInfo, v59, v60, v61);
  BattleActorControl_EndCallEvent___ctor(v62, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v58 )
    sub_1BCAA3C(v63, v64);
  *(_QWORD *)(v58 + 16) = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), (int64_t)v62, v65, v66, v67, v68, v69, v70);
  v77 = hight;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v77);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_20138/*"hight"*/,
    v71,
    0LL);
  v76 = time;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v76);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_24178/*"time"*/,
    v72,
    0LL);
  v75 = pos;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v75);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_22814/*"pos"*/,
    v73,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12424/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v58,
    v74);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4B18FEB & 1) == 0 )
  {
    sub_1BCA7E0(&iTween_TypeInfo, method, v2);
    byte_4B18FEB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v4);
  iTween__Stop_61049892(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_Jump(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  PartyListViewItem_o *v9; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BattleActorControl_EndCallEvent_o *v62; // x22
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppObject *v71; // x0
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x0
  const MethodInfo *v74; // x3
  int32_t v75; // [xsp+4h] [xbp-7Ch] BYREF
  float v76; // [xsp+8h] [xbp-78h] BYREF
  float v77; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B18FE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_moveJump__, target, *(_QWORD *)&pos);
    sub_1BCA7E0(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, v20, v21);
    sub_1BCA7E0(&BattleActorControl_POS_TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_8275/*"JUMP_UP"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_21188/*"jump"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_22814/*"pos"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v34, v35);
    byte_4B18FE6 = 1;
  }
  this->fields.targetObject = target;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  BattleActorControl__playAnimation_44433272(this, (System_String_o *)StringLiteral_21188/*"jump"*/, 0, v54);
  v58 = sub_1BCAA2C(BattleActorControl_EventClass_TypeInfo, v55, v56, v57);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v58, 0LL);
  v62 = (BattleActorControl_EndCallEvent_o *)sub_1BCAA2C(BattleActorControl_EndCallEvent_TypeInfo, v59, v60, v61);
  BattleActorControl_EndCallEvent___ctor(v62, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v58 )
    sub_1BCAA3C(v63, v64);
  *(_QWORD *)(v58 + 16) = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), (int64_t)v62, v65, v66, v67, v68, v69, v70);
  v77 = hight;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v77);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_20138/*"hight"*/,
    v71,
    0LL);
  v76 = time;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v76);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_24178/*"time"*/,
    v72,
    0LL);
  v75 = pos;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v75);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_22814/*"pos"*/,
    v73,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8275/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v58,
    v74);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_Step(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  PartyListViewItem_o *v9; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BattleActorControl_EndCallEvent_o *v62; // x22
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppObject *v71; // x0
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x0
  const MethodInfo *v74; // x3
  int32_t v75; // [xsp+4h] [xbp-7Ch] BYREF
  float v76; // [xsp+8h] [xbp-78h] BYREF
  float v77; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B18FE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_moveStep__, target, *(_QWORD *)&pos);
    sub_1BCA7E0(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, v20, v21);
    sub_1BCA7E0(&BattleActorControl_POS_TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12424/*"STEP_START"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_22814/*"pos"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_23797/*"step_front"*/, v34, v35);
    byte_4B18FE8 = 1;
  }
  this->fields.targetObject = target;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  BattleActorControl__playAnimation_44433272(this, (System_String_o *)StringLiteral_23797/*"step_front"*/, 0, v54);
  v58 = sub_1BCAA2C(BattleActorControl_EventClass_TypeInfo, v55, v56, v57);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v58, 0LL);
  v62 = (BattleActorControl_EndCallEvent_o *)sub_1BCAA2C(BattleActorControl_EndCallEvent_TypeInfo, v59, v60, v61);
  BattleActorControl_EndCallEvent___ctor(v62, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v58 )
    sub_1BCAA3C(v63, v64);
  *(_QWORD *)(v58 + 16) = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), (int64_t)v62, v65, v66, v67, v68, v69, v70);
  v77 = hight;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v77);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_20138/*"hight"*/,
    v71,
    0LL);
  v76 = time;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v76);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_24178/*"time"*/,
    v72,
    0LL);
  v75 = pos;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v75);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_22814/*"pos"*/,
    v73,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12424/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v58,
    v74);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_StepWait(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  PartyListViewItem_o *v9; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  BattleActorControl_EndCallEvent_o *v69; // x22
  __int64 v70; // x0
  __int64 v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  Il2CppObject *v78; // x0
  Il2CppObject *v79; // x0
  Il2CppObject *v80; // x0
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  BattleActorControl_EndCallEvent_o *v89; // x21
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  const MethodInfo *v96; // x3
  int32_t v98; // [xsp+4h] [xbp-7Ch] BYREF
  float v99; // [xsp+8h] [xbp-78h] BYREF
  float v100; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B18FE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_moveStep__, target, *(_QWORD *)&pos);
    sub_1BCA7E0(&Method_BattleActorControl_playAnimation__, v17, v18);
    sub_1BCA7E0(&BattleActorControl_EndCallEvent_TypeInfo, v19, v20);
    sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, v21, v22);
    sub_1BCA7E0(&BattleActorControl_POS_TypeInfo, v23, v24);
    sub_1BCA7E0(&float_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12424/*"STEP_START"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22814/*"pos"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_22219/*"name"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_23797/*"step_front"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_12423/*"STEP_END_02"*/, v41, v42);
    byte_4B18FE7 = 1;
  }
  this->fields.targetObject = target;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  BattleActorControl__playAnimation_44433272(this, (System_String_o *)StringLiteral_23797/*"step_front"*/, 0, v61);
  v65 = sub_1BCAA2C(BattleActorControl_EventClass_TypeInfo, v62, v63, v64);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v65, 0LL);
  v69 = (BattleActorControl_EndCallEvent_o *)sub_1BCAA2C(BattleActorControl_EndCallEvent_TypeInfo, v66, v67, v68);
  BattleActorControl_EndCallEvent___ctor(v69, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v65 )
    goto LABEL_6;
  *(_QWORD *)(v65 + 16) = v69;
  sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 16), (int64_t)v69, v72, v73, v74, v75, v76, v77);
  v100 = hight;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v100);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v65,
    (System_String_o *)StringLiteral_20138/*"hight"*/,
    v78,
    0LL);
  v99 = time;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v99);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v65,
    (System_String_o *)StringLiteral_24178/*"time"*/,
    v79,
    0LL);
  v98 = pos;
  v80 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v98);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v65,
    (System_String_o *)StringLiteral_22814/*"pos"*/,
    v80,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12424/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v65,
    v81);
  v85 = sub_1BCAA2C(BattleActorControl_EventClass_TypeInfo, v82, v83, v84);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v85, 0LL);
  v89 = (BattleActorControl_EndCallEvent_o *)sub_1BCAA2C(BattleActorControl_EndCallEvent_TypeInfo, v86, v87, v88);
  BattleActorControl_EndCallEvent___ctor(v89, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v85 )
LABEL_6:
    sub_1BCAA3C(v70, v71);
  *(_QWORD *)(v85 + 16) = v89;
  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 16), (int64_t)v89, v90, v91, v92, v93, v94, v95);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v85,
    (System_String_o *)StringLiteral_22219/*"name"*/,
    (Il2CppObject *)StringLiteral_24854/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12423/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v85,
    v96);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_TreasureArms(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  PartyListViewItem_o *v9; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BattleActorControl_EndCallEvent_o *v62; // x22
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppObject *v71; // x0
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x0
  const MethodInfo *v74; // x3
  int32_t v75; // [xsp+4h] [xbp-7Ch] BYREF
  float v76; // [xsp+8h] [xbp-78h] BYREF
  float v77; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B18FEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_moveStep__, target, *(_QWORD *)&pos);
    sub_1BCA7E0(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19);
    sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, v20, v21);
    sub_1BCA7E0(&BattleActorControl_POS_TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_24314/*"treasure_arms"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_12424/*"STEP_START"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_22814/*"pos"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v34, v35);
    byte_4B18FEA = 1;
  }
  this->fields.targetObject = target;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  BattleActorControl__playAnimation_44433272(this, (System_String_o *)StringLiteral_24314/*"treasure_arms"*/, 0, v54);
  v58 = sub_1BCAA2C(BattleActorControl_EventClass_TypeInfo, v55, v56, v57);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v58, 0LL);
  v62 = (BattleActorControl_EndCallEvent_o *)sub_1BCAA2C(BattleActorControl_EndCallEvent_TypeInfo, v59, v60, v61);
  BattleActorControl_EndCallEvent___ctor(v62, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v58 )
    sub_1BCAA3C(v63, v64);
  *(_QWORD *)(v58 + 16) = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), (int64_t)v62, v65, v66, v67, v68, v69, v70);
  v77 = hight;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v77);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_20138/*"hight"*/,
    v71,
    0LL);
  v76 = time;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v76);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_24178/*"time"*/,
    v72,
    0LL);
  v75 = pos;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v75);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v58,
    (System_String_o *)StringLiteral_22814/*"pos"*/,
    v73,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12424/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v58,
    v74);
}


void __fastcall BattleActorControl__moveDown(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Hashtable_o *v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *actorObject; // x19
  float v33; // [xsp+8h] [xbp-68h] BYREF
  int v34; // [xsp+Ch] [xbp-64h] BYREF
  char v35[4]; // [xsp+18h] [xbp-58h] BYREF
  int v36; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B18FF1 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v3);
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&float_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25101/*"y"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21060/*"islocal"*/, v21, v22);
    sub_1BCA7E0(&iTween_TypeInfo, v23, v24);
    byte_4B18FF1 = 1;
  }
  v25 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, method, v3, v4);
  System_Collections_Hashtable___ctor_62980980(v25, 0LL);
  v36 = 0;
  v26 = j_il2cpp_value_box_0(int_TypeInfo, &v36);
  if ( !v25 )
    sub_1BCAA3C(v26, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_25101/*"y"*/,
    v26,
    v25->klass->vtable._24_Clear.methodPtr);
  v35[0] = 1;
  v28 = j_il2cpp_value_box_0(bool_TypeInfo, v35);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_21060/*"islocal"*/,
    v28,
    v25->klass->vtable._24_Clear.methodPtr);
  v34 = 0;
  v29 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_18949/*"easetype"*/,
    v29,
    v25->klass->vtable._24_Clear.methodPtr);
  v33 = time;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &v33);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_24178/*"time"*/,
    v30,
    v25->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v31);
  iTween__MoveTo_60939552(actorObject, v25, 0LL);
}


void __fastcall BattleActorControl__moveJump(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  int klass; // s8
  __int64 v20; // x2
  __int64 v21; // x3
  float v22; // s9
  int32_t v23; // w1
  const MethodInfo *v24; // x2
  BattleActorControl_o *v25; // x0
  long double v26; // q0
  float v27; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4B18FED & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_POS_TypeInfo, table, method);
    sub_1BCA7E0(&float_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22814/*"pos"*/, v9, v10);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v11, v12);
    byte_4B18FED = 1;
  }
  if ( !v3
    || (v13 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_20138/*"hight"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v14 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_24178/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22814/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v13) )
  {
LABEL_12:
    sub_1BCAA3C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v13 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1BCACFC(v13);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v13, float_TypeInfo, v15, v16);
  if ( !v14 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v14 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1BCACFC(v14);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v14, float_TypeInfo, v17, v18);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v26 = sub_1BCACFC(v3);
    goto LABEL_11;
  }
  v22 = *(float *)&this->klass;
  v23 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v20, v21);
  v25 = v4;
  LODWORD(v26) = klass;
  v27 = v22;
LABEL_11:
  BattleActorControl__moveJump_44509668(v25, *(float *)&v26, v27, v23, v24);
}


void __fastcall BattleActorControl__moveJump_44509668(
        BattleActorControl_o *this,
        float hight,
        float time,
        int32_t pos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v9; // x1

  BattleActorControl__movePos(
    this,
    pos,
    time + time,
    this->fields.endmotionevent,
    this->fields.endmotionCallObject,
    this->fields.endmotionCallMethod,
    v5);
  BattleActorControl__moveUp_44508540(this, hight, time, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__movePos(
        BattleActorControl_o *this,
        int32_t pos,
        float time,
        System_String_o *endcall,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackEvent,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Hashtable_o *v37; // x22
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  bool v44; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v46; // x1
  UnityEngine_GameObject_o *v47; // x19
  float v48; // [xsp+8h] [xbp-78h] BYREF
  int v49; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o TargetObjectVec; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_4B18FEE & 1) == 0 )
  {
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, *(_QWORD *)&pos, endcall);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&float_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22514/*"oncompleteparams"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22815/*"position"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_19205/*"endMotion"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v33, v34);
    sub_1BCA7E0(&iTween_TypeInfo, v35, v36);
    byte_4B18FEE = 1;
  }
  v37 = (System_Collections_Hashtable_o *)sub_1BCAA2C(
                                            System_Collections_Hashtable_TypeInfo,
                                            *(_QWORD *)&pos,
                                            endcall,
                                            callbackObject);
  System_Collections_Hashtable___ctor_62980980(v37, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v38);
  v39 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec);
  if ( !v37 )
    sub_1BCAA3C(v39, v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
    v37,
    StringLiteral_22815/*"position"*/,
    v39,
    v37->klass->vtable._24_Clear.methodPtr);
  v49 = 1;
  v41 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v49);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
    v37,
    StringLiteral_18949/*"easetype"*/,
    v41,
    v37->klass->vtable._24_Clear.methodPtr);
  v48 = time;
  v42 = j_il2cpp_value_box_0(float_TypeInfo, &v48);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
    v37,
    StringLiteral_24178/*"time"*/,
    v42,
    v37->klass->vtable._24_Clear.methodPtr);
  if ( endcall )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    v44 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v44 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
        v37,
        StringLiteral_22515/*"oncompletetarget"*/,
        callbackObject,
        v37->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
        v37,
        StringLiteral_22513/*"oncomplete"*/,
        callbackEvent,
        v37->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
        v37,
        StringLiteral_22515/*"oncompletetarget"*/,
        gameObject,
        v37->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
        v37,
        StringLiteral_22513/*"oncomplete"*/,
        StringLiteral_19205/*"endMotion"*/,
        v37->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
      v37,
      StringLiteral_22514/*"oncompleteparams"*/,
      endcall,
      v37->klass->vtable._24_Clear.methodPtr);
  }
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v46);
  iTween__MoveTo_60939552(v47, v37, 0LL);
}


void __fastcall BattleActorControl__moveStep(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  int klass; // s8
  __int64 v20; // x2
  __int64 v21; // x3
  float v22; // s9
  int32_t v23; // w1
  const MethodInfo *v24; // x2
  BattleActorControl_o *v25; // x0
  long double v26; // q0
  float v27; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4B18FEC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_POS_TypeInfo, table, method);
    sub_1BCA7E0(&float_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22814/*"pos"*/, v9, v10);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v11, v12);
    byte_4B18FEC = 1;
  }
  if ( !v3
    || (v13 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_20138/*"hight"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v14 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_24178/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22814/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v13) )
  {
LABEL_12:
    sub_1BCAA3C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v13 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1BCACFC(v13);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v13, float_TypeInfo, v15, v16);
  if ( !v14 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v14 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1BCACFC(v14);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v14, float_TypeInfo, v17, v18);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v26 = sub_1BCACFC(v3);
    goto LABEL_11;
  }
  v22 = *(float *)&this->klass;
  v23 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v20, v21);
  v25 = v4;
  LODWORD(v26) = klass;
  v27 = v22;
LABEL_11:
  BattleActorControl__moveStep_44507660(v25, *(float *)&v26, v27, v23, v24);
}


void __fastcall BattleActorControl__moveStep_44507660(
        BattleActorControl_o *this,
        float hight,
        float time,
        int32_t pos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v9; // x1

  BattleActorControl__movePos(
    this,
    pos,
    time + time,
    this->fields.endmotionevent,
    this->fields.endmotionCallObject,
    this->fields.endmotionCallMethod,
    v5);
  BattleActorControl__moveUp_44508540(this, hight, time, v9);
}


void __fastcall BattleActorControl__moveUp(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x2
  __int64 v13; // x3
  float v14; // s8
  float v15; // s1
  const MethodInfo *v16; // x1
  BattleActorControl_o *v17; // x0
  const MethodInfo *v18; // x1
  long double v19; // q0

  v3 = table;
  v4 = this;
  if ( (byte_4B18FEF & 1) == 0 )
  {
    sub_1BCA7E0(&float_TypeInfo, table, method);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v5, v6);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_20138/*"hight"*/, v7, v8);
    byte_4B18FEF = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v9 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
         v3,
         StringLiteral_20138/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                   v3,
                                   StringLiteral_24178/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  if ( !v9 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1BCACFC(v9);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v9, float_TypeInfo, v10, v11);
  if ( !v3 )
LABEL_9:
    sub_1BCAA3C(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v14 = *(float *)&this->klass;
    v15 = *(float *)j_il2cpp_object_unbox_0(v3, float_TypeInfo, v12, v13);
    BattleActorControl__moveUp_44508540(v4, v14, v15, v16);
    return;
  }
LABEL_11:
  v19 = sub_1BCACFC(v3);
  BattleActorControl__moveDown(v17, *(float *)&v19, v18);
}


void __fastcall BattleActorControl__moveUp_44508540(
        BattleActorControl_o *this,
        float hight,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Hashtable_o *v33; // x20
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x0
  __int64 v37; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  UnityEngine_GameObject_o *actorObject; // x19
  float v43; // [xsp+Ch] [xbp-84h] BYREF
  float v44; // [xsp+10h] [xbp-80h] BYREF
  int v45; // [xsp+14h] [xbp-7Ch] BYREF
  char v46[4]; // [xsp+18h] [xbp-78h] BYREF
  float v47; // [xsp+1Ch] [xbp-74h] BYREF

  if ( (byte_4B18FF0 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, method, v4);
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v11, v12);
    sub_1BCA7E0(&float_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22514/*"oncompleteparams"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_25101/*"y"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21060/*"islocal"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_21751/*"moveDown"*/, v29, v30);
    sub_1BCA7E0(&iTween_TypeInfo, v31, v32);
    byte_4B18FF0 = 1;
  }
  v33 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, method, v4, v5);
  System_Collections_Hashtable___ctor_62980980(v33, 0LL);
  v47 = hight;
  v34 = j_il2cpp_value_box_0(float_TypeInfo, &v47);
  if ( !v33 )
    sub_1BCAA3C(v34, v35);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_25101/*"y"*/,
    v34,
    v33->klass->vtable._24_Clear.methodPtr);
  v46[0] = 1;
  v36 = j_il2cpp_value_box_0(bool_TypeInfo, v46);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_21060/*"islocal"*/,
    v36,
    v33->klass->vtable._24_Clear.methodPtr);
  v45 = 1;
  v37 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v45);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_18949/*"easetype"*/,
    v37,
    v33->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_22515/*"oncompletetarget"*/,
    gameObject,
    v33->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_22513/*"oncomplete"*/,
    StringLiteral_21751/*"moveDown"*/,
    v33->klass->vtable._24_Clear.methodPtr);
  v44 = time;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v44);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_22514/*"oncompleteparams"*/,
    v39,
    v33->klass->vtable._24_Clear.methodPtr);
  v43 = time;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v43);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_24178/*"time"*/,
    v40,
    v33->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v41);
  iTween__MoveTo_60939552(actorObject, v33, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_4B1900E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_skipVoice__, method, v2);
    sub_1BCA7E0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v4, v5);
    byte_4B1900E = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCAA2C(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v7,
                                                                  v8,
                                                                  v9),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1BCAA3C(IsNoTouchSkip, v7);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v12, 0LL);
  }
}


void __fastcall BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  void *monitor; // x8
  BattlePerformanceStatus_o *v8; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v9; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19016 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_skipDead__, method, v2);
    this = (BattleActorControl_o *)sub_1BCA7E0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6);
    byte_4B19016 = 1;
  }
  monitor = v4[8].monitor;
  if ( !monitor
    || (v8 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 33),
        v9 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCAA2C(
                                                               BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v9, v4, Method_BattleActorControl_skipDead__, 0LL),
        !v8) )
  {
    sub_1BCAA3C(this, method);
  }
  BattlePerformanceStatus__setTouchOff(v8, v9, 0LL);
}


void __fastcall BattleActorControl__onTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_4B1900D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_skipVoice__, method, v2);
    sub_1BCA7E0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v4, v5);
    byte_4B1900D = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCAA2C(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v7,
                                                                  v8,
                                                                  v9),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1BCAA3C(IsNoTouchSkip, v7);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v12, 0LL);
  }
}


void __fastcall BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  void *monitor; // x8
  BattlePerformanceStatus_o *v8; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v9; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4B19015 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_skipDead__, method, v2);
    this = (BattleActorControl_o *)sub_1BCA7E0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6);
    byte_4B19015 = 1;
  }
  monitor = v4[8].monitor;
  if ( !monitor
    || (v8 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 33),
        v9 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCAA2C(
                                                               BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v9, v4, Method_BattleActorControl_skipDead__, 0LL),
        !v8) )
  {
    sub_1BCAA3C(this, method);
  }
  BattlePerformanceStatus__setTouchOn(v8, v9, 0LL);
}


void __fastcall BattleActorControl__playAnimation(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  BattleActorControl_o *v9; // x0
  System_String_o *v10; // x1
  bool v11; // w2
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_4B18FDB & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, table, method);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_22219/*"name"*/, v5, v6);
    byte_4B18FDB = 1;
  }
  if ( !table )
    sub_1BCAA3C(this, table);
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_22219/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v7 && v7->klass != string_TypeInfo )
  {
    sub_1BCACFC(v7);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v9, v10, v11, v12);
  }
  else
  {
    BattleActorControl__playAnimation_44433272(v4, v7, 0, v8);
  }
}


void __fastcall BattleActorControl__playAnimationFtag(
        BattleActorControl_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x21
  __int64 v10; // x1
  BattleFBXComponent_o *fbxcomponent; // x0

  if ( (byte_4B18FDD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1890/*"@playAnim\n =>{0},{1}"*/, animname, tag);
    byte_4B18FDD = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_62415592((System_String_o *)StringLiteral_1890/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1BCAA3C(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__playAnimation_44433272(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isDontOverwrite,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x20
  __int64 v19; // x1
  BattleFBXComponent_o *fbxcomponent; // x0
  __int64 v21; // x1
  Il2CppObject *ComponentInChildren_object; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  struct BattleFBXComponent_o *v24; // x19
  float length; // s0
  float v26; // s0
  __int64 v27; // x1
  Il2CppObject *v28; // x21
  struct BattleFBXComponent_o *v29; // x22
  BattleFBXComponent_c *klass; // x8
  BattleFBXComponent_o *v31; // x19
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v34; // x0
  float v35; // s0
  float v36; // s0

  if ( (byte_4B18FDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, animname, isDontOverwrite);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1889/*"@playAnim\n =>{0}"*/, v15, v16);
    byte_4B18FDC = 1;
  }
  v18 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v18 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v18, 1, v17);
  System_String__Format((System_String_o *)StringLiteral_1889/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v18, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_33;
  BattleFBXComponent__playAnimation(fbxcomponent, v18, 0LL);
  if ( System_String__op_Equality(v18, (System_String_o *)StringLiteral_24854/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_33;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)fbxcomponent,
                                   (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
    {
      if ( !ComponentInChildren_object )
        goto LABEL_33;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_object,
                                                 v18,
                                                 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
      {
        v24 = this->fields.fbxcomponent;
        fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_object,
                                                 v18,
                                                 0LL);
        if ( fbxcomponent )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)fbxcomponent, 0LL);
          v26 = UnityEngine_Random__Range(0.0, length, 0LL);
          if ( v24 )
          {
            v24->fields.currentAnimTime = v26;
            return;
          }
        }
LABEL_33:
        sub_1BCAA3C(fbxcomponent, v19);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_33;
      v28 = UnityEngine_GameObject__GetComponentInChildren_object_(
              (UnityEngine_GameObject_o *)fbxcomponent,
              (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
      if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_33;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v28, v18, 0LL) )
        {
          v29 = this->fields.fbxcomponent;
          fbxcomponent = (BattleFBXComponent_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v28, v18, 0LL);
          if ( !fbxcomponent )
            goto LABEL_33;
          klass = fbxcomponent->klass;
          v31 = fbxcomponent;
          v32 = *(unsigned __int16 *)(&fbxcomponent->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&fbxcomponent->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v32;
              p_offset += 2;
              if ( !v32 )
                goto LABEL_27;
            }
            v34 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_27:
            v34 = sub_1C1C7C0(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL);
          }
          fbxcomponent = (BattleFBXComponent_o *)(*(__int64 (__fastcall **)(BattleFBXComponent_o *, _QWORD))v34)(
                                                   v31,
                                                   *(_QWORD *)(v34 + 8));
          if ( !fbxcomponent )
            goto LABEL_33;
          v35 = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)fbxcomponent, 0LL);
          v36 = UnityEngine_Random__Range(0.0, v35, 0LL);
          if ( !v29 )
            goto LABEL_33;
          v29->fields.currentAnimTime = v36;
        }
      }
    }
  }
}


void __fastcall BattleActorControl__playBattleActionData(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_object__o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  BattleCallBack_T__o *v23; // x20

  if ( (byte_4B18FC8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData__TypeInfo, badata, method);
    sub_1BCA7E0(&Method_BattleActorControl_playBattleActionDataLocal__, v5, v6);
    sub_1BCA7E0(&Method_BattleCallBack_BattleActionData___ctor__, v7, v8);
    sub_1BCA7E0(&BattleCallBack_BattleActionData__TypeInfo, v9, v10);
    byte_4B18FC8 = 1;
  }
  v11 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v11 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v11, 0LL) )
  {
    v15 = BattleActorControl__get_CheckMotion(this, v13);
    v19 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleActionData__TypeInfo, v16, v17, v18);
    System_Action_object____ctor(v19, (Il2CppObject *)this, Method_BattleActorControl_playBattleActionDataLocal__, 0LL);
    v23 = (BattleCallBack_T__o *)sub_1BCAA2C(BattleCallBack_BattleActionData__TypeInfo, v20, v21, v22);
    BattleCallBack_object____ctor(
      v23,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v19,
      (const MethodInfo_312AD98 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v15 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v15, (BattleCallBackBase_o *)v23, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(v11, v12);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v14);
}


void __fastcall BattleActorControl__playBattleActionDataLocal(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  __int64 actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  const MethodInfo *v34; // x3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t type; // w21
  BattleActionData_c *v40; // x0
  const MethodInfo *v41; // x3
  BattleActionData_o *v42; // x8
  System_String_o *motionname; // x1
  _BOOL4 IsVanishSkill; // w21
  System_String_o *v45; // x0
  struct BattlePerformance_o *performance; // x8
  int v47; // w8
  __int64 v48; // x21
  unsigned int v49; // w23
  BattleServantData_o *v50; // x22
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v52; // x8
  const MethodInfo *v53; // x3
  BattleServantData_o *battleSvtData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18FC9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, badata, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_8852/*"MOTION_FOLLOW_BACK_STEP"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_8835/*"MOTION_"*/, v20, v21);
    byte_4B18FC9 = 1;
  }
  p_actiondata = &this->fields.actiondata;
  source = 0LL;
  entity = 0LL;
  this->fields.actiondata = badata;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.actiondata,
    (int64_t)badata,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleActorControl__setActionData(this, this->fields.actiondata, v23);
  actiondata = (__int64)this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_56;
  ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)actiondata, 0LL);
  this->fields.myShiftData = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.myShiftData, 0LL, v27, v28, v29, v30, v31, v32);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.myShiftData,
      (int64_t)ShiftServant,
      v33,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( !badata )
    goto LABEL_56;
  if ( badata->fields.noOperation )
  {
    actiondata = (__int64)this->fields.performance;
    if ( actiondata )
    {
      BattlePerformance__endActionData((BattlePerformance_o *)actiondata, 0LL);
      return;
    }
    goto LABEL_56;
  }
  if ( !*p_actiondata )
    goto LABEL_56;
  type = (*p_actiondata)->fields.type;
  v40 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v24);
    v40 = BattleActionData_TypeInfo;
  }
  if ( type == v40->static_fields->TYPE_TW )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_56;
  if ( BattleActionData__isCommandAttack((BattleActionData_o *)actiondata, 0LL) )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_56;
  if ( BattleActionData__isCommonEnemyAttack((BattleActionData_o *)actiondata, 0LL) )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, v34);
  actiondata = (__int64)this->fields.performance;
  if ( !actiondata
    || (actiondata = (__int64)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0
    || (actiondata = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)actiondata + 456LL))(
                       actiondata,
                       *(_QWORD *)(*(_QWORD *)actiondata + 464LL)),
        (v42 = *p_actiondata) == 0LL) )
  {
LABEL_56:
    sub_1BCAA3C(actiondata, v24);
  }
  motionname = v42->fields.motionname;
  IsVanishSkill = v42->fields.IsVanishSkill;
  if ( !motionname )
  {
    v45 = System_Int32__ToString((int)v42 + 48, 0LL);
    motionname = System_String__Concat_62401220((System_String_o *)StringLiteral_8835/*"MOTION_"*/, v45, 0LL);
    if ( IsVanishSkill )
      goto LABEL_26;
LABEL_28:
    BattleActorControl__sendMotionEventFSM(this, motionname, 0, v41);
    goto LABEL_29;
  }
  if ( !v42->fields.IsVanishSkill )
    goto LABEL_28;
LABEL_26:
  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_44485868(this, motionname, 0, v41);
LABEL_29:
  actiondata = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !actiondata )
    goto LABEL_56;
  actiondata = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)actiondata,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !*p_actiondata || !actiondata )
    goto LABEL_56;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)actiondata,
         &entity,
         (*p_actiondata)->fields.treasureDvcId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    actiondata = (__int64)entity;
    if ( !entity )
      goto LABEL_56;
    actiondata = TreasureDvcEntity__TryGetWithBackStepNpcIds(
                   (TreasureDvcEntity_o *)entity,
                   (System_Int32_array **)&source,
                   0LL);
    if ( (actiondata & 1) != 0 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_56;
      actiondata = (__int64)performance->fields.data;
      if ( !actiondata )
        goto LABEL_56;
      actiondata = (__int64)BattleData__getFieldServantList((BattleData_o *)actiondata, 0, 0LL);
      if ( !actiondata )
        goto LABEL_56;
      v47 = *(_DWORD *)(actiondata + 24);
      v48 = actiondata;
      if ( v47 >= 1 )
      {
        v49 = 0;
        do
        {
          if ( v49 >= v47 )
            sub_1BCAA44(actiondata, v24);
          v50 = *(BattleServantData_o **)(v48 + 8LL * (int)v49 + 32);
          if ( !v50 )
            goto LABEL_56;
          deckSvt = v50->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_56;
          if ( deckSvt->fields.npcId )
          {
            if ( v50->fields.uniqueId != this->fields.uniqueID )
            {
              actiondata = BattleServantData__isAlive(v50, 0, 0LL);
              if ( (actiondata & 1) != 0 )
              {
                v52 = v50->fields.deckSvt;
                if ( !v52 )
                  goto LABEL_56;
                actiondata = System_Linq_Enumerable__Contains_int_(
                               source,
                               v52->fields.npcId,
                               (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
                if ( (actiondata & 1) != 0 )
                {
                  actiondata = (__int64)this->fields.performance;
                  if ( !actiondata )
                    goto LABEL_56;
                  actiondata = (__int64)BattlePerformance__getServantActor(
                                          (BattlePerformance_o *)actiondata,
                                          v50->fields.uniqueId,
                                          0LL);
                  if ( !actiondata )
                    goto LABEL_56;
                  BattleActorControl__sendMotionEventFSM(
                    (BattleActorControl_o *)actiondata,
                    (System_String_o *)StringLiteral_8852/*"MOTION_FOLLOW_BACK_STEP"*/,
                    0,
                    v53);
                }
              }
            }
          }
          v47 = *(_DWORD *)(v48 + 24);
        }
        while ( (int)++v49 < v47 );
      }
    }
  }
  if ( *p_actiondata && BattleActionData__isDeadMotion(*p_actiondata, 0LL) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( battleSvtData )
      BattleServantData__playDead(battleSvtData, 0LL);
  }
}


void __fastcall BattleActorControl__playCallAnimation(
        BattleActorControl_o *this,
        System_String_o *animname,
        System_String_o *endevent,
        System_String_o *starttag,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  BattleActorControl_EndCallEvent_o *v24; // x24
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3

  if ( (byte_4B18FDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleActorControl_sendEventFSM__, animname, endevent);
    sub_1BCA7E0(&BattleActorControl_EndCallEvent_TypeInfo, v9, v10);
    sub_1BCA7E0(&BattleActorControl_EventClass_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1891/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_19308/*"event"*/, v15, v16);
    byte_4B18FDA = 1;
  }
  System_String__Format_62415660(
    (System_String_o *)StringLiteral_1891/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v20 = sub_1BCAA2C(BattleActorControl_EventClass_TypeInfo, v17, v18, v19);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v20, 0LL);
  v24 = (BattleActorControl_EndCallEvent_o *)sub_1BCAA2C(BattleActorControl_EndCallEvent_TypeInfo, v21, v22, v23);
  BattleActorControl_EndCallEvent___ctor(v24, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v25, v26);
  *(_QWORD *)(v20 + 16) = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)v24, v27, v28, v29, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v20,
    (System_String_o *)StringLiteral_19308/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v20, v33);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v34);
  else
    BattleActorControl__playAnimation_44433272(this, animname, 0, v34);
}


void __fastcall BattleActorControl__playMotion(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendMotionEventFSM(this, name, 0, v3);
}


void __fastcall BattleActorControl__playNoActionDataMotion(
        BattleActorControl_o *this,
        System_String_o *name,
        float afterWaitTime,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x3

  v7 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)name);
  if ( !v7 )
    sub_1BCAA3C(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actiondata, 0LL, v9, v10, v11, v12, v13, v14);
  BattleActorControl__sendMotionEventFSM(this, name, 1, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleActorControl__playSideEffect(
        BattleActorControl_o *this,
        System_String_o *effectname,
        UnityEngine_Vector3_o vec3,
        bool sideflip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *result; // x0
  __int64 v18; // x1
  int32_t WeaponGroup; // w20
  __int64 v20; // x1
  UnityEngine_Object_o *Manager__loadEffect; // x20
  bool v22; // w8
  UnityEngine_Transform_o *transform; // x23
  __int64 v24; // x2
  UnityEngine_GameObject_o *v25; // x23
  __int64 v26; // x2
  UnityEngine_GameObject_o *v27; // x23
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_4B18FC2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, effectname, sideflip);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_16362/*"_ENEMY"*/, v15, v16);
    byte_4B18FC2 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.battleSvtData;
  if ( !result )
    goto LABEL_30;
  WeaponGroup = BattleServantData__getWeaponGroup((BattleServantData_o *)result, 1, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v18);
  Manager__loadEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadEffect(effectname, WeaponGroup, 0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v22 = UnityEngine_Object__op_Equality(Manager__loadEffect, 0LL, 0LL);
  result = 0LL;
  if ( !v22 )
  {
    if ( Manager__loadEffect )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
      result = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( result )
      {
        result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(result, 0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)result, 0LL);
          result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                 0LL);
          v25 = result;
          if ( !byte_4B109C1 )
          {
            result = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectname, v24);
            byte_4B109C1 = 1;
          }
          if ( v25 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v25,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0LL);
            result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                   0LL);
            v27 = result;
            if ( !byte_4B109C6 )
            {
              result = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, effectname, v26);
              byte_4B109C6 = 1;
            }
            if ( v27 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v27,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0LL, 0LL);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0LL);
                if ( result )
                {
                  v29.fields.x = -x;
                  v29.fields.y = y;
                  v29.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v29, 0LL);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_30;
                    if ( System_String__Equals_62409536(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16362/*"_ENEMY"*/,
                           0LL) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_30;
                      v30.fields.x = x;
                      v30.fields.y = y;
                      v30.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v30, 0LL);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_30;
                      UnityEngine_Transform__Rotate_70176908((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
                    }
                  }
                  result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                         0LL);
                  performance = this->fields.performance;
                  if ( performance && result )
                  {
                    UnityEngine_Transform__set_parent(
                      (UnityEngine_Transform_o *)result,
                      performance->fields.root_field,
                      0LL);
                    return (UnityEngine_GameObject_o *)Manager__loadEffect;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(result, effectname);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__playVoice(
        BattleActorControl_o *this,
        int32_t type,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  BattleActorControl_c *v14; // x0
  struct SePlayer_o *prevDeadVoice; // x8
  int v16; // w24
  System_String_o *FileName; // x0
  const MethodInfo *v18; // x4
  SePlayer_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x19
  BattleActorControl_c *v28; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_4B18FD0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_TypeInfo, *(_QWORD *)&type, callback);
    sub_1BCA7E0(&Voice_TypeInfo, v11, v12);
    byte_4B18FD0 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, *(_QWORD *)&type);
  if ( Voice__IsDeadVoice(type, 0LL) )
  {
    v14 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v13);
      v14 = BattleActorControl_TypeInfo;
    }
    prevDeadVoice = v14->static_fields->prevDeadVoice;
    if ( !prevDeadVoice )
      goto LABEL_15;
    if ( v14->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v14, v13),
          v14 = BattleActorControl_TypeInfo,
          (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
    {
      if ( prevDeadVoice->fields.isStop )
      {
LABEL_15:
        v16 = 1;
        goto LABEL_17;
      }
      if ( v14->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v14, v13),
            (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
      {
        SePlayer__StopSe(prevDeadVoice, 0.0, 0LL);
        goto LABEL_15;
      }
    }
    sub_1BCAA3C(v14, v13);
  }
  v16 = 0;
LABEL_17:
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v13);
  FileName = Voice__getFileName(type, 0LL);
  v19 = BattleActorControl__playVoice_44494820(this, FileName, volume, callback, isSaveVoicePlayed, v18);
  if ( v16 )
  {
    v27 = (int64_t)v19;
    v28 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v20);
      v28 = BattleActorControl_TypeInfo;
    }
    static_fields = v28->static_fields;
    static_fields->prevDeadVoice = (struct SePlayer_o *)v27;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->prevDeadVoice, v27, v21, v22, v23, v24, v25, v26);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__playVoiceNp(
        BattleActorControl_o *this,
        int32_t type,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *FileName; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B18FD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Voice_TypeInfo, *(_QWORD *)&type, callback);
    byte_4B18FD3 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, *(_QWORD *)&type);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_44495748(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_44495748(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t svtId; // w22
  int32_t limit; // w23
  int32_t overwriteSvtVoiceId; // w24
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v15; // x1
  struct BattleServantData_o *v16; // x8
  int32_t uniqueID; // w21

  if ( (byte_4B18FD4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, voiceTypeId, callback);
    byte_4B18FD4 = 1;
  }
  if ( BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    myShiftData = this->fields.myShiftData;
    if ( myShiftData )
    {
      svtId = myShiftData->fields.svtId;
      limit = myShiftData->fields.limit;
      overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    }
    else
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData
        || (svtId = BattleServantData__getSvtId(battleSvtData, 0LL),
            battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v15),
            (v16 = this->fields.battleSvtData) == 0LL) )
      {
        sub_1BCAA3C(battleSvtData, v9);
      }
      limit = (int)battleSvtData;
      overwriteSvtVoiceId = v16->fields.overwriteSvtVoiceId;
    }
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9);
    ServantAssetLoadManager__playBattleVoice(
      svtId,
      limit,
      overwriteSvtVoiceId,
      voiceTypeId,
      volume,
      callback,
      uniqueID,
      1,
      0LL);
  }
}


SePlayer_o *__fastcall BattleActorControl__playVoiceSe(
        BattleActorControl_o *this,
        System_String_o *fileName,
        float volume,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w20
  int32_t svtId; // w22
  int32_t overwriteSvtVoiceId; // w21
  int32_t v11; // w0
  int32_t v12; // w1
  int32_t v13; // w2
  BattleServantData_o *battleSvtData; // x0
  int32_t v15; // w21
  const MethodInfo *v16; // x1
  struct BattleServantData_o *v17; // x8
  int32_t v18; // w20
  int32_t v19; // w22

  if ( (byte_4B18FD6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, fileName, method);
    byte_4B18FD6 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    svtId = myShiftData->fields.svtId;
    limit = myShiftData->fields.limit;
    overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, fileName);
    v11 = svtId;
    v12 = limit;
    v13 = overwriteSvtVoiceId;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData
      || (v15 = BattleServantData__getSvtId(battleSvtData, 0LL),
          battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v16),
          (v17 = this->fields.battleSvtData) == 0LL) )
    {
      sub_1BCAA3C(battleSvtData, fileName);
    }
    v18 = (int)battleSvtData;
    v19 = v17->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, fileName);
    v11 = v15;
    v12 = v18;
    v13 = v19;
  }
  return ServantAssetLoadManager__playBattleVoiceSe(v11, v12, v13, fileName, volume, 0LL);
}


SePlayer_o *__fastcall BattleActorControl__playVoice_44494820(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  BattleData_o *isNoVoice; // x0
  __int64 v14; // x1
  struct BattlePerformance_o *performance; // x8
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_String_array *v23; // x22
  const MethodInfo *v24; // x2
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w23
  int32_t v27; // w24
  int32_t v28; // w22
  int32_t uniqueID; // w21
  int32_t v30; // w0
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t SvtId; // w22
  const MethodInfo *v34; // x1
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v36; // w23
  int32_t overwriteSvtVoiceId; // w24

  if ( (byte_4B18FD1 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, voiceTypeId, callback);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    byte_4B18FD1 = 1;
  }
  isNoVoice = (BattleData_o *)BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId);
  if ( ((unsigned __int8)isNoVoice & 1) != 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return 0LL;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_26;
  isNoVoice = performance->fields.data;
  if ( !isNoVoice )
    goto LABEL_26;
  isNoVoice = (BattleData_o *)BattleData__getServantData(isNoVoice, this->fields.uniqueID, 0LL);
  if ( !isNoVoice )
    goto LABEL_26;
  if ( BattleServantData__HasAvailablePermanentSleepBuff((BattleServantData_o *)isNoVoice, 0LL) )
  {
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
    return 0LL;
  }
  if ( isSaveVoicePlayed )
  {
    isNoVoice = (BattleData_o *)sub_1BCA888(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_26;
    v23 = (System_String_array *)isNoVoice;
    if ( !LODWORD(isNoVoice->fields.m_CancellationTokenSource) )
      sub_1BCAA44(isNoVoice, v14);
    isNoVoice->fields.rootfsm = (struct PlayMakerFSM_o *)voiceTypeId;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&isNoVoice->fields.rootfsm,
      (int64_t)voiceTypeId,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    BattleActorControl__AddServantVoicePlayed(this, v23, v24);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (BattleData_o *)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0LL);
      isNoVoice = (BattleData_o *)BattleActorControl__getLimitCount(this, v34);
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        v36 = (int)isNoVoice;
        overwriteSvtVoiceId = battleSvtData->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v14);
        v30 = SvtId;
        v31 = v36;
        v32 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v30, v31, v32, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_26:
    sub_1BCAA3C(isNoVoice, v14);
  }
  v27 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v28 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v14);
  v30 = v27;
  v31 = limit;
  v32 = v28;
  return ServantAssetLoadManager__playBattleVoice(v30, v31, v32, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
}


void __fastcall BattleActorControl__printLog(
        BattleActorControl_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__resetAura(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  unsigned __int64 v16; // x23
  int32_t v17; // w21
  __int64 v18; // x1
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  Il2CppObject *v21; // x21

  if ( (byte_4B1901F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1901F = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           auraList,
           (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_19;
  entries = auraList->fields._entries;
  v15 = auraList;
  if ( (int)entries >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)entries )
        sub_1BCAA44(auraList, method);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v17 = *(&v15->fields._count + v16);
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               auraList,
               v17,
               (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Item,
                                                                           0LL,
                                                                           0LL);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
        if ( !auraList )
          break;
        v21 = System_Collections_Generic_Dictionary_int__object___get_Item(
                auraList,
                v17,
                (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v21, 0LL);
      }
      LODWORD(entries) = v15->fields._entries;
      if ( (__int64)++v16 >= (int)entries )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(auraList, method);
  }
LABEL_17:
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__object___Clear(
    auraList,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  __int64 v17; // x1
  Il2CppObject *currentValue; // x19
  __int64 v19; // x1
  Il2CppObject *Component_object; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19021 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
      v14,
      v15);
    byte_4B19021 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v21,
            (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v21.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Equality(
                                                                         (UnityEngine_Object_o *)currentValue,
                                                                         0LL,
                                                                         0LL);
    if ( ((unsigned __int8)auraList & 1) == 0 )
    {
      if ( !currentValue )
        goto LABEL_19;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)currentValue,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Component_object,
                                                                           0LL,
                                                                           0LL);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_19;
        BillBoard__ResetFlip((BillBoard_o *)Component_object, 0LL);
      }
    }
  }
}


void __fastcall BattleActorControl__resetSummonEndFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v7; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v9; // x19

  v3 = this;
  if ( (byte_4B18FBC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_13240/*"SummonEndFlag"*/, v4, v5);
    byte_4B18FBC = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1BCAA3C(this, method);
  v7 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v7 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v7; ++i )
    {
      if ( i >= (unsigned int)v7 )
        sub_1BCAA44(this, method);
      v9 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v9, 0LL);
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13240/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.shadowObj) = 0;
      }
      LODWORD(v7) = motionFSM->max_length;
    }
  }
}


void __fastcall BattleActorControl__resumeAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  float resumetimescale; // s0
  struct BattleFBXComponent_o *fbxcomponent; // x8

  resumetimescale = this->fields.resumetimescale;
  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = resumetimescale;
  if ( !fbxcomponent )
    sub_1BCAA3C(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3

  if ( (byte_4B18FC7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8842/*"MOTION_DAMAGE"*/, method, v2);
    byte_4B18FC7 = 1;
  }
  v4 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v4, 0LL) )
    BattleActorControl__sendMotionEventFSM(this, (System_String_o *)StringLiteral_8842/*"MOTION_DAMAGE"*/, 0, v6);
}


void __fastcall BattleActorControl__sendEventFSM(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_c **v7; // x0
  const MethodInfo *v8; // x3
  System_String_o *v9; // x8
  BattleActorControl_o *v10; // x0
  System_String_o *v11; // x1
  bool v12; // w2

  v4 = this;
  if ( (byte_4B18FBE & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, table, method);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_19308/*"event"*/, v5, v6);
    byte_4B18FBE = 1;
  }
  if ( !table )
    sub_1BCAA3C(this, table);
  v7 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_19308/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v9 = (System_String_o *)v7;
  if ( v7 && *v7 != string_TypeInfo )
  {
    sub_1BCACFC(v7);
  }
  else
  {
    v10 = v4;
    v11 = v9;
    v12 = 0;
  }
  BattleActorControl__sendEventFSM_44485868(v10, v11, v12, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__sendEventFSM_44485868(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 Fsm; // x0
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x22
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v34; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v36; // x8
  __int64 v37; // x9
  int max_length; // w10
  UnityEngine_Object_o *v39; // x22
  struct PlayMakerFSM_array *v40; // x8
  __int64 v41; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v42; // x21
  struct PlayMakerFSM_array *v43; // x8
  __int64 v44; // x9

  if ( (byte_4B18FC1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, isCallFinishInterrupt);
    sub_1BCA7E0(&string___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_24923/*"weapon"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1893/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_18353/*"common"*/, v13, v14);
    byte_4B18FC1 = 1;
  }
  Fsm = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !Fsm )
    goto LABEL_29;
  v23 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_28;
  v24 = StringLiteral_24923/*"weapon"*/;
  *(_QWORD *)(Fsm + 32) = StringLiteral_24923/*"weapon"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(Fsm + 32), v24, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v23 + 24) <= 1u )
    goto LABEL_28;
  v31 = StringLiteral_18353/*"common"*/;
  *(_QWORD *)(v23 + 40) = StringLiteral_18353/*"common"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 40), v31, v25, v26, v27, v28, v29, v30);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v23 + 24) )
    goto LABEL_28;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_29;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_28;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_29;
  v34 = *(Il2CppObject **)(v23 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_62415660(
                   (System_String_o *)StringLiteral_1893/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v34,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v36 = this->fields.motionFSM;
  if ( v36 )
  {
    v37 = this->fields.actindex;
    max_length = v36->max_length;
    if ( (int)v37 < max_length )
    {
      if ( (unsigned int)v37 >= max_length )
        goto LABEL_28;
      v39 = (UnityEngine_Object_o *)v36->m_Items[v37];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      Fsm = UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v16);
          v40 = this->fields.motionFSM;
          if ( !v40 )
            goto LABEL_29;
          v41 = this->fields.actindex;
          if ( (unsigned int)v41 >= v40->max_length )
            goto LABEL_28;
          v42 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v40->m_Items[v41];
          if ( !Fsm )
            goto LABEL_29;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_29;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v42 )
            goto LABEL_29;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v42, (System_String_o *)Fsm, 0LL);
        }
        v43 = this->fields.motionFSM;
        if ( !v43 )
          goto LABEL_29;
        v44 = this->fields.actindex;
        if ( (unsigned int)v44 < v43->max_length )
        {
          Fsm = (__int64)v43->m_Items[v44];
          if ( Fsm )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
            return;
          }
LABEL_29:
          sub_1BCAA3C(Fsm, v16);
        }
LABEL_28:
        sub_1BCAA44(Fsm, v16);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__sendMotionEventFSM(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  v7 = BattleActorControl__checkMotionEvent(this, name, (const MethodInfo *)isCallFinishInterrupt);
  if ( !this )
    sub_1BCAA3C(v7, v8);
  this->fields.actindex = !v7;
  BattleActorControl__sendEventFSM_44485868(this, name, isCallFinishInterrupt, v9);
}


void __fastcall BattleActorControl__sendMotionEventFSMCommon(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_44485868(this, name, 0, v3);
}


void __fastcall BattleActorControl__setActionData(
        BattleActorControl_o *this,
        BattleActionData_o *actiondata,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  BattleActorControl_o *v8; // x21
  struct PlayMakerFSM_array *v9; // x8
  struct PlayMakerFSM_array *v10; // x8
  struct PlayMakerFSM_array *v11; // x8
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x21
  struct PlayMakerFSM_array *v13; // x8
  struct PlayMakerFSM_array *v14; // x8

  v4 = this;
  if ( (byte_4B18FB9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4939/*"Count_Action"*/, actiondata, method);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_4940/*"Count_Hit"*/, v5, v6);
    byte_4B18FB9 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_43;
  if ( !motionFSM->max_length )
    goto LABEL_44;
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4939/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_43;
  v8 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
  if ( !v8 )
    goto LABEL_43;
  LODWORD(v8->fields.shadowObj) = (_DWORD)this;
  v9 = v4->fields.motionFSM;
  if ( !v9 )
    goto LABEL_43;
  if ( !v9->max_length )
    goto LABEL_44;
  this = (BattleActorControl_o *)v9->m_Items[0];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4940/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.shadowObj) = actiondata->fields.attackcount;
  v10 = v4->fields.motionFSM;
  if ( !v10 )
    goto LABEL_43;
  if ( v10->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v10->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = (BattleActorControl_o *)this->fields.nodeText) == 0LL )
  {
LABEL_43:
    sub_1BCAA3C(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4939/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v11 = v4->fields.motionFSM;
    if ( !v11 )
      goto LABEL_43;
    if ( v11->max_length <= 1 )
      goto LABEL_44;
    this = (BattleActorControl_o *)v11->m_Items[1];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_43;
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4939/*"Count_Action"*/,
               0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
    if ( !FsmInt )
      goto LABEL_43;
    FsmInt->fields.value = (int)this;
  }
  v13 = v4->fields.motionFSM;
  if ( !v13 )
    goto LABEL_43;
  if ( v13->max_length <= 1 )
LABEL_44:
    sub_1BCAA44(this, actiondata);
  this = (BattleActorControl_o *)v13->m_Items[1];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4940/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    return;
  v14 = v4->fields.motionFSM;
  if ( !v14 )
    goto LABEL_43;
  if ( v14->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v14->m_Items[1];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4940/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.shadowObj) = actiondata->fields.attackcount;
}


void __fastcall BattleActorControl__setAddAura(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v5; // x2

  if ( !svtdata )
    sub_1BCAA3C(this, 0LL);
  AuraIdList = BattleServantData__getAuraIdList(svtdata, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v5);
}


void __fastcall BattleActorControl__setAnimationComplete(
        BattleActorControl_o *this,
        System_String_o *name,
        BattleActorControl_EventClass_o *ec,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *CompleteList; // x0

  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr,
          method) & 1) != 0 )
  {
    CompleteList = this->fields.CompleteList;
    if ( !CompleteList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._39_Remove.method)(
      CompleteList,
      name,
      CompleteList->klass->vtable._40_get_SyncRoot.methodPtr);
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
LABEL_7:
    sub_1BCAA3C(CompleteList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))CompleteList->klass->vtable._23_Add.method)(
    CompleteList,
    name,
    ec,
    CompleteList->klass->vtable._24_Clear.methodPtr);
}


void __fastcall BattleActorControl__setAnimationEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        BattleActorControl_EventClass_o *ec,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *EventList; // x0

  EventList = this->fields.EventList;
  if ( !EventList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))EventList->klass->vtable._26_Contains.method)(
          EventList,
          name,
          EventList->klass->vtable._27_ContainsKey.methodPtr,
          method) & 1) != 0 )
  {
    EventList = this->fields.EventList;
    if ( !EventList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._39_Remove.method)(
      EventList,
      name,
      EventList->klass->vtable._40_get_SyncRoot.methodPtr);
  }
  EventList = this->fields.EventList;
  if ( !EventList )
LABEL_7:
    sub_1BCAA3C(EventList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))EventList->klass->vtable._23_Add.method)(
    EventList,
    name,
    ec,
    EventList->klass->vtable._24_Clear.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setAuraFlip(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  __int64 v18; // x1
  bool v19; // w19
  Il2CppObject *currentValue; // x20
  __int64 v21; // x1
  Il2CppObject *Component_object; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19020 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, flg, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v5, v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
      v15,
      v16);
    byte_4B19020 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
         &v23,
         (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v19 = flg;
    do
    {
      currentValue = v23.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Equality(
                                                                           (UnityEngine_Object_o *)currentValue,
                                                                           0LL,
                                                                           0LL);
      if ( ((unsigned __int8)auraList & 1) == 0 )
      {
        if ( !currentValue )
          goto LABEL_20;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)currentValue,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                             (UnityEngine_Object_o *)Component_object,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)auraList & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          BillBoard__setFlip((BillBoard_o *)Component_object, v19, 0, 0LL);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              &v23,
              (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
  }
}


void __fastcall BattleActorControl__setCamera(
        BattleActorControl_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B18FB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, camera, method);
    byte_4B18FB4 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v6);
  }
  *((_QWORD *)gameObject + 4) = camera;
  sub_1BCA784((PartyOrganizationUtility_o *)(gameObject + 32), (int64_t)camera, v7, v8, v9, v10, v11, v12);
}


void __fastcall BattleActorControl__setCriteriaPos(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *tr,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  unsigned int position; // s8
  float y; // s9
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Object_o *)tr;
  if ( (byte_4B18FC3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, tr, method);
    byte_4B18FC3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tr);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v3, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( gameObject )
      {
        position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( gameObject )
          {
            v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
            y = v10.fields.y;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
              if ( gameObject )
              {
                v3 = (UnityEngine_Object_o *)gameObject;
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(gameObject, v6);
  }
  if ( !v3 )
    goto LABEL_16;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  y = v9.fields.y;
LABEL_15:
  v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  LODWORD(this->fields.criteriaPos.fields.x) = position;
  this->fields.criteriaPos.fields.y = y;
  this->fields.criteriaPos.fields.z = v11.fields.z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDir(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t dir; // w8
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *v5; // x0
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0
  float v11; // s0
  float scale; // s1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  float v19; // s2
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  dir = this->fields.dir;
  if ( !dir )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
      v21.fields.y = 4.7124;
      v14 = transform;
      v21.fields.x = 0.0;
      v21.fields.z = 0.0;
      *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0LL);
      if ( v14 )
      {
        UnityEngine_Transform__set_localRotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
          if ( actorObject )
          {
            scale = this->fields.scale;
            v11 = -scale;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(actorObject, method);
  }
  if ( dir == 1 )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      v5 = UnityEngine_GameObject__get_transform(actorObject, 0LL);
      v20.fields.y = 1.5708;
      v6 = v5;
      v20.fields.x = 0.0;
      v20.fields.z = 0.0;
      *(UnityEngine_Quaternion_o *)&v7 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0LL);
      if ( v6 )
      {
        UnityEngine_Transform__set_localRotation(v6, *(UnityEngine_Quaternion_o *)&v7, 0LL);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
          if ( actorObject )
          {
            v11 = this->fields.scale;
            scale = v11;
LABEL_13:
            v19 = scale;
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)actorObject,
              *(UnityEngine_Vector3_o *)&v11,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDirLeft(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
  v10.fields.y = 1.5708;
  v5 = transform;
  v10.fields.x = 0.0;
  v10.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Internal_FromEulerRad(v10, 0LL);
  if ( !v5
    || (UnityEngine_Transform__set_localRotation(v5, *(UnityEngine_Quaternion_o *)&v6, 0LL),
        (actorObject = this->fields.actorObject) == 0LL)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL)) == 0LL )
  {
LABEL_6:
    sub_1BCAA3C(actorObject, method);
  }
  v11.fields.x = this->fields.scale;
  v11.fields.y = v11.fields.x;
  v11.fields.z = v11.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v11, 0LL);
  this->fields.dir = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDirRight(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
  v10.fields.y = 4.7124;
  v5 = transform;
  v10.fields.x = 0.0;
  v10.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Internal_FromEulerRad(v10, 0LL);
  if ( !v5
    || (UnityEngine_Transform__set_localRotation(v5, *(UnityEngine_Quaternion_o *)&v6, 0LL),
        (actorObject = this->fields.actorObject) == 0LL)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL)) == 0LL )
  {
LABEL_6:
    sub_1BCAA3C(actorObject, method);
  }
  v11.fields.y = this->fields.scale;
  v11.fields.x = -v11.fields.y;
  v11.fields.z = v11.fields.y;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v11, 0LL);
  this->fields.dir = 0;
}


void __fastcall BattleActorControl__setEnemyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.enemyStage = obj;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enemyStage, (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleActorControl__setID(BattleActorControl_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.uniqueID = id;
}


void __fastcall BattleActorControl__setInitActionBattle(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActorControl__setCriteriaPos(this, 0LL, v2);
}


void __fastcall BattleActorControl__setLimitedPeriod(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *Master_object; // x0
  __int64 v14; // x1
  int v15; // w20
  unsigned __int64 v16; // x25
  char i; // w8
  struct PlayMakerFSM_array *v18; // x9
  char v19; // w24
  UnityEngine_Object_o *v20; // x21
  struct PlayMakerFSM_array *v21; // x8
  struct PlayMakerFSM_array *v22; // x8

  if ( (byte_4B18FB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_8534/*"LimitedPeriod"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8364/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v10, v11);
    byte_4B18FB8 = 1;
  }
  motionFSM = this->fields.motionFSM;
  if ( motionFSM && (int)motionFSM->max_length >= 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (PlayMakerFSM_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( Master_object )
    {
      Master_object = (PlayMakerFSM_o *)ConstantMaster__GetValue(
                                          (ConstantMaster_o *)Master_object,
                                          (System_String_o *)StringLiteral_8364/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                          0LL);
      v15 = (int)Master_object;
      v16 = 0LL;
      for ( i = 1; ; i = 0 )
      {
        v18 = this->fields.motionFSM;
        if ( !v18 )
          break;
        v19 = i;
        if ( v16 >= v18->max_length )
          goto LABEL_30;
        v20 = (UnityEngine_Object_o *)v18->m_Items[v16];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        Master_object = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v21 = this->fields.motionFSM;
          if ( !v21 )
            break;
          if ( v16 >= v21->max_length )
            goto LABEL_30;
          Master_object = v21->m_Items[v16];
          if ( !Master_object )
            break;
          Master_object = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Master_object, 0LL);
          if ( !Master_object )
            break;
          Master_object = (PlayMakerFSM_o *)Master_object[1].fields.m_CancellationTokenSource;
          if ( !Master_object )
            break;
          Master_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                              (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                              (System_String_o *)StringLiteral_8534/*"LimitedPeriod"*/,
                                              0LL);
          if ( Master_object )
          {
            v22 = this->fields.motionFSM;
            if ( !v22 )
              break;
            if ( v16 >= v22->max_length )
LABEL_30:
              sub_1BCAA44(Master_object, v14);
            Master_object = v22->m_Items[v16];
            if ( !Master_object )
              break;
            Master_object = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Master_object, 0LL);
            if ( !Master_object )
              break;
            Master_object = (PlayMakerFSM_o *)Master_object[1].fields.m_CancellationTokenSource;
            if ( !Master_object )
              break;
            Master_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                (System_String_o *)StringLiteral_8534/*"LimitedPeriod"*/,
                                                0LL);
            if ( !Master_object )
              break;
            LODWORD(Master_object->fields.addEventHandlers) = v15;
          }
        }
        v16 = 1LL;
        if ( (v19 & 1) == 0 )
          return;
      }
    }
    sub_1BCAA3C(Master_object, v14);
  }
}


void __fastcall BattleActorControl__setMotionListForDemo(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
        UnityEngine_GameObject_o *commonMotionPrefab,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  struct PlayMakerFSM_array *v47; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x19
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 gameObject; // x0
  __int64 v56; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v59; // x25
  int32_t v60; // w26
  __int64 v61; // x1
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v63; // x26
  struct PlayMakerFSM_array *v64; // x25
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x26
  struct PlayMakerFSM_array *v72; // x25
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x24
  unsigned __int64 v80; // x27
  struct System_String_o **p_actorside; // x24
  char v82; // w8
  struct PlayMakerFSM_array *v83; // x9
  char v84; // w28
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v86; // x8
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct PlayMakerFSM_array *v93; // x8
  struct PlayMakerFSM_array *v94; // x8
  struct PlayMakerFSM_array *v95; // x8
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct PlayMakerFSM_array *v102; // x8
  struct PlayMakerFSM_array *v103; // x8
  char v104; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v107; // x8
  struct BattlePerformance_o *v108; // x8
  float v109; // s0
  struct PlayMakerFSM_array *v110; // x8
  struct BattlePerformance_o *v111; // x8
  __int64 v112; // x1
  System_String_o *StrParam; // x20
  _BOOL8 v114; // x0
  __int64 v115; // x1
  struct PlayMakerFSM_array *v116; // x8
  PlayMakerFSM_o *v117; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v121; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v124; // x1
  struct PlayMakerFSM_array *v125; // x8
  PlayMakerFSM_o *v126; // x0
  HutongGames_PlayMaker_Fsm_o *v127; // x0
  __int64 v128; // x1
  HutongGames_PlayMaker_FsmVariables_o *v129; // x0
  HutongGames_PlayMaker_FsmInt_o *v130; // x0
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v135; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v136; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B18FB7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side, camera);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v17, v18);
    sub_1BCA7E0(&long_TypeInfo, v19, v20);
    sub_1BCA7E0(&JsonManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v25, v26);
    sub_1BCA7E0(&PlayMakerFSM___TypeInfo, v27, v28);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_13724/*"TargetFrontPos"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13723/*"TargetBackPos"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_4044/*"Camera"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_2255/*"ActorObject"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_16362/*"_ENEMY"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_4050/*"CameraFsm"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_10734/*"Performance"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_2256/*"ActorSide"*/, v45, v46);
    byte_4B18FB7 = 1;
  }
  memset(&v136, 0, sizeof(v136));
  v47 = (struct PlayMakerFSM_array *)sub_1BCA888(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v47;
  p_motionFSM = &this->fields.motionFSM;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.motionFSM, (int64_t)v47, v49, v50, v51, v52, v53, v54);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_105;
  v59 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_105;
  v60 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v61);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v59, v60, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  v63 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v64 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v63,
                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v64 )
    goto LABEL_105;
  v71 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCA91C(gameObject, v64->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_120;
  }
  if ( !v64->max_length )
    goto LABEL_106;
  v64->m_Items[0] = (PlayMakerFSM_o *)v71;
  sub_1BCA784((PartyOrganizationUtility_o *)v64->m_Items, v71, v65, v66, v67, v68, v69, v70);
  if ( !Object )
    goto LABEL_105;
  v72 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v72 )
    goto LABEL_105;
  v79 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCA91C(gameObject, v72->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_120:
      v134 = sub_1BCAA60(gameObject);
      sub_1BCA908(v134, 0LL);
    }
  }
  if ( v72->max_length <= 1 )
LABEL_106:
    sub_1BCAA44(gameObject, v56);
  v72->m_Items[1] = (PlayMakerFSM_o *)v79;
  sub_1BCA784((PartyOrganizationUtility_o *)&v72->m_Items[1], v79, v73, v74, v75, v76, v77, v78);
  v80 = 0LL;
  p_actorside = &this->fields.actorside;
  v82 = 1;
  do
  {
    v83 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    v84 = v82;
    if ( v80 >= v83->max_length )
      goto LABEL_106;
    gameObject = (__int64)v83->m_Items[v80];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2255/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v86 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v80 >= v86->max_length )
      goto LABEL_106;
    gameObject = (__int64)v86->m_Items[v80];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2256/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1BCA784((PartyOrganizationUtility_o *)(gameObject + 56), (int64_t)side, v87, v88, v89, v90, v91, v92);
    v93 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v80 >= v93->max_length )
      goto LABEL_106;
    gameObject = (__int64)v93->m_Items[v80];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4044/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v94 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v80 >= v94->max_length )
      goto LABEL_106;
    gameObject = (__int64)v94->m_Items[v80];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4050/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v95 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v80 >= v95->max_length )
      goto LABEL_106;
    gameObject = (__int64)v95->m_Items[v80];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10734/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actorside, (int64_t)side, v96, v97, v98, v99, v100, v101);
    v102 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v80 >= v102->max_length )
      goto LABEL_106;
    gameObject = (__int64)v102->m_Items[v80];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13724/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_105;
      gameObject = System_String__Equals_62409536(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16362/*"_ENEMY"*/,
                     0LL);
      v103 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_105;
      if ( v80 >= v103->max_length )
        goto LABEL_106;
      v104 = gameObject;
      gameObject = (__int64)v103->m_Items[v80];
      if ( !gameObject )
        goto LABEL_105;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_105;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_105;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13724/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_105;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v104 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_105;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v107 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_105;
        if ( v80 >= v107->max_length )
          goto LABEL_106;
        gameObject = (__int64)v107->m_Items[v80];
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13723/*"TargetBackPos"*/,
                                0LL);
        v108 = this->fields.performance;
        if ( !v108 || !gameObject )
          goto LABEL_105;
        v109 = v108->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_105;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v110 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_105;
        if ( v80 >= v110->max_length )
          goto LABEL_106;
        gameObject = (__int64)v110->m_Items[v80];
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13723/*"TargetBackPos"*/,
                                0LL);
        v111 = this->fields.performance;
        if ( !v111 || !gameObject )
          goto LABEL_105;
        v109 = -v111->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v109;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v82 = 0;
    v80 = 1LL;
  }
  while ( (v84 & 1) != 0 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_105;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v112);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_105:
    sub_1BCAA3C(gameObject, v56);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v135,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v136 = v135;
  while ( 1 )
  {
    v114 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v136,
             (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v114 )
      break;
    v116 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1BCAA3C(v114, v115);
    if ( !v116->max_length )
      sub_1BCAA44(v114, v115);
    v117 = v116->m_Items[0];
    if ( !v117 )
      sub_1BCAA3C(0LL, v115);
    key = v136.fields._current.fields.key;
    value = v136.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v117, 0LL);
    if ( !Fsm )
      sub_1BCAA3C(0LL, v121);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1BCAA3C(0LL, v121);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v125 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1BCAA3C(FsmInt, v124);
      if ( !v125->max_length )
        sub_1BCAA44(FsmInt, v124);
      v126 = v125->m_Items[0];
      if ( !v126 )
        sub_1BCAA3C(0LL, v124);
      v127 = PlayMakerFSM__get_Fsm(v126, 0LL);
      if ( !v127 )
        sub_1BCAA3C(0LL, v128);
      v129 = v127->fields.variables;
      if ( !v129 )
        sub_1BCAA3C(0LL, v128);
      v130 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v129, (System_String_o *)key, 0LL);
      if ( !v130 )
        sub_1BCAA3C(0LL, v131);
      if ( !value )
        goto LABEL_113;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1BCACFC(value);
LABEL_113:
        sub_1BCAA3C(v130, v131);
      }
      v130->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v132, v133);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v136,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
}


void __fastcall BattleActorControl__setMotionlist(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct PlayMakerFSM_array *v45; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 gameObject; // x0
  __int64 v54; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *commonMotionPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v59; // x25
  int32_t v60; // w26
  __int64 v61; // x1
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v63; // x26
  struct PlayMakerFSM_array *v64; // x25
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x26
  struct PlayMakerFSM_array *v72; // x25
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x24
  unsigned __int64 v80; // x27
  struct System_String_o **p_actorside; // x24
  char v82; // w8
  struct PlayMakerFSM_array *v83; // x9
  char v84; // w28
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v86; // x8
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct PlayMakerFSM_array *v93; // x8
  struct PlayMakerFSM_array *v94; // x8
  struct PlayMakerFSM_array *v95; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v96; // x25
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct PlayMakerFSM_array *v103; // x8
  struct PlayMakerFSM_array *v104; // x8
  char v105; // w25
  struct BattlePerformance_o *v106; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v108; // x8
  struct BattlePerformance_o *v109; // x8
  float v110; // s0
  struct PlayMakerFSM_array *v111; // x8
  struct BattlePerformance_o *v112; // x8
  __int64 v113; // x1
  System_String_o *StrParam; // x21
  _BOOL8 v115; // x0
  __int64 v116; // x1
  struct PlayMakerFSM_array *v117; // x8
  PlayMakerFSM_o *v118; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v122; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v125; // x1
  struct PlayMakerFSM_array *v126; // x8
  PlayMakerFSM_o *v127; // x0
  HutongGames_PlayMaker_Fsm_o *v128; // x0
  __int64 v129; // x1
  HutongGames_PlayMaker_FsmVariables_o *v130; // x0
  HutongGames_PlayMaker_FsmInt_o *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  const MethodInfo *v135; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  const MethodInfo *v143; // x1
  __int64 v144; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v145; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v146; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B18FB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side, camera);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v15, v16);
    sub_1BCA7E0(&long_TypeInfo, v17, v18);
    sub_1BCA7E0(&JsonManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v23, v24);
    sub_1BCA7E0(&PlayMakerFSM___TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_13724/*"TargetFrontPos"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13723/*"TargetBackPos"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4044/*"Camera"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_2255/*"ActorObject"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_16362/*"_ENEMY"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_4050/*"CameraFsm"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_10734/*"Performance"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_2256/*"ActorSide"*/, v43, v44);
    byte_4B18FB5 = 1;
  }
  memset(&v146, 0, sizeof(v146));
  v45 = (struct PlayMakerFSM_array *)sub_1BCA888(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v45;
  p_motionFSM = &this->fields.motionFSM;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.motionFSM, (int64_t)v45, v47, v48, v49, v50, v51, v52);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_107;
  commonMotionPrefab = performance->fields.commonMotionPrefab;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v59 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v60 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v61);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v59, v60, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  v63 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v64 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v63,
                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v64 )
    goto LABEL_107;
  v71 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCA91C(gameObject, v64->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_122;
  }
  if ( !v64->max_length )
    goto LABEL_108;
  v64->m_Items[0] = (PlayMakerFSM_o *)v71;
  sub_1BCA784((PartyOrganizationUtility_o *)v64->m_Items, v71, v65, v66, v67, v68, v69, v70);
  if ( !Object )
    goto LABEL_107;
  v72 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v72 )
    goto LABEL_107;
  v79 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCA91C(gameObject, v72->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_122:
      v144 = sub_1BCAA60(gameObject);
      sub_1BCA908(v144, 0LL);
    }
  }
  if ( v72->max_length <= 1 )
LABEL_108:
    sub_1BCAA44(gameObject, v54);
  v72->m_Items[1] = (PlayMakerFSM_o *)v79;
  sub_1BCA784((PartyOrganizationUtility_o *)&v72->m_Items[1], v79, v73, v74, v75, v76, v77, v78);
  v80 = 0LL;
  p_actorside = &this->fields.actorside;
  v82 = 1;
  do
  {
    v83 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    v84 = v82;
    if ( v80 >= v83->max_length )
      goto LABEL_108;
    gameObject = (__int64)v83->m_Items[v80];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2255/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v86 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v80 >= v86->max_length )
      goto LABEL_108;
    gameObject = (__int64)v86->m_Items[v80];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2256/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1BCA784((PartyOrganizationUtility_o *)(gameObject + 56), (int64_t)side, v87, v88, v89, v90, v91, v92);
    v93 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v80 >= v93->max_length )
      goto LABEL_108;
    gameObject = (__int64)v93->m_Items[v80];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4044/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v94 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v80 >= v94->max_length )
      goto LABEL_108;
    gameObject = (__int64)v94->m_Items[v80];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4050/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v95 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v80 >= v95->max_length )
      goto LABEL_108;
    gameObject = (__int64)v95->m_Items[v80];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10734/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_107;
    v96 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v96 )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v96, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actorside, (int64_t)side, v97, v98, v99, v100, v101, v102);
    v103 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v80 >= v103->max_length )
      goto LABEL_108;
    gameObject = (__int64)v103->m_Items[v80];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13724/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_107;
      gameObject = System_String__Equals_62409536(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16362/*"_ENEMY"*/,
                     0LL);
      v104 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_107;
      if ( v80 >= v104->max_length )
        goto LABEL_108;
      v105 = gameObject;
      gameObject = (__int64)v104->m_Items[v80];
      if ( !gameObject )
        goto LABEL_107;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_107;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_107;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13724/*"TargetFrontPos"*/,
                              0LL);
      v106 = this->fields.performance;
      if ( !v106 )
        goto LABEL_107;
      distanceofactor = v106->fields.distanceofactor;
      if ( (v105 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v108 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v80 >= v108->max_length )
          goto LABEL_108;
        gameObject = (__int64)v108->m_Items[v80];
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13723/*"TargetBackPos"*/,
                                0LL);
        v109 = this->fields.performance;
        if ( !v109 || !gameObject )
          goto LABEL_107;
        v110 = v109->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v111 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v80 >= v111->max_length )
          goto LABEL_108;
        gameObject = (__int64)v111->m_Items[v80];
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13723/*"TargetBackPos"*/,
                                0LL);
        v112 = this->fields.performance;
        if ( !v112 || !gameObject )
          goto LABEL_107;
        v110 = -v112->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v110;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v82 = 0;
    v80 = 1LL;
  }
  while ( (v84 & 1) != 0 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_107;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v113);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_107:
    sub_1BCAA3C(gameObject, v54);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v145,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v146 = v145;
  while ( 1 )
  {
    v115 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v146,
             (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v115 )
      break;
    v117 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1BCAA3C(v115, v116);
    if ( !v117->max_length )
      sub_1BCAA44(v115, v116);
    v118 = v117->m_Items[0];
    if ( !v118 )
      sub_1BCAA3C(0LL, v116);
    key = v146.fields._current.fields.key;
    value = v146.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v118, 0LL);
    if ( !Fsm )
      sub_1BCAA3C(0LL, v122);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1BCAA3C(0LL, v122);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v126 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1BCAA3C(FsmInt, v125);
      if ( !v126->max_length )
        sub_1BCAA44(FsmInt, v125);
      v127 = v126->m_Items[0];
      if ( !v127 )
        sub_1BCAA3C(0LL, v125);
      v128 = PlayMakerFSM__get_Fsm(v127, 0LL);
      if ( !v128 )
        sub_1BCAA3C(0LL, v129);
      v130 = v128->fields.variables;
      if ( !v130 )
        sub_1BCAA3C(0LL, v129);
      v131 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v130, (System_String_o *)key, 0LL);
      if ( !v131 )
        sub_1BCAA3C(0LL, v132);
      if ( !value )
        goto LABEL_115;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1BCACFC(value);
LABEL_115:
        sub_1BCAA3C(v131, v132);
      }
      v131->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v133, v134);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v146,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v135);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int64_t)DelayEndSequenceIdListFromMotion,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  BattleActorControl__setLimitedPeriod(this, v143);
}


void __fastcall BattleActorControl__setMyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.myStage = obj;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.myStage, (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setNpDamageVoice(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  bool v10; // w24
  UnityEngine_Object_o *v11; // x19
  struct UnityEngine_Transform_o *nodeText; // x19

  v4 = this;
  if ( (byte_4B18FD7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flg, method);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_9640/*"Noble_Check"*/, v5, v6);
    byte_4B18FD7 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_1BCAA3C(this, flg);
  v8 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    v10 = flg;
    do
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1BCAA44(this, flg);
      v11 = (UnityEngine_Object_o *)motionFSM->m_Items[v9];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_18;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v11, 0LL);
        if ( !this )
          goto LABEL_18;
        nodeText = this->fields.nodeText;
        if ( nodeText )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this->fields.nodeText,
                                           (System_String_o *)StringLiteral_9640/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)nodeText,
                                             (System_String_o *)StringLiteral_9640/*"Noble_Check"*/,
                                             0LL);
            if ( !this )
              goto LABEL_18;
            LOBYTE(this->fields.shadowObj) = v10;
          }
        }
      }
      LODWORD(v8) = motionFSM->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)v8 );
  }
}


void __fastcall BattleActorControl__setPerformance(
        BattleActorControl_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.performance = perf;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.performance,
    (int64_t)perf,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setReloadWeaponMotion(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  BattleActorControl_o *v39; // x20
  int32_t v40; // w21
  __int64 v41; // x1
  int32_t WeaponGroup; // w22
  BattleActorControl_o *v43; // x21
  struct PlayMakerFSM_array *v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  BattleActorControl_o *v51; // x21
  struct PlayMakerFSM_array *v52; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v53; // x20
  struct PlayMakerFSM_array *v54; // x8
  struct PlayMakerFSM_array *v55; // x8
  BattleActorControl_o *v56; // x20
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct PlayMakerFSM_array *v63; // x8
  struct PlayMakerFSM_array *v64; // x8
  BattleActorControl_o *v65; // x20
  struct PlayMakerFSM_array *v66; // x8
  struct PlayMakerFSM_array *v67; // x8
  BattleActorControl_o *v68; // x20
  struct PlayMakerFSM_array *v69; // x8
  BattleActorControl_o *v70; // x20
  struct PlayMakerFSM_array *v71; // x8
  struct PlayMakerFSM_array *v72; // x8
  char v73; // w20
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v76; // x8
  struct BattlePerformance_o *v77; // x8
  float v78; // s0
  struct PlayMakerFSM_array *motionFSM; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  const MethodInfo *v81; // x1
  struct PlayMakerFSM_array *v82; // x8
  struct BattlePerformance_o *v83; // x8
  __int64 v84; // x1
  System_String_o *StrParam; // x20
  _BOOL8 v86; // x0
  __int64 v87; // x1
  struct PlayMakerFSM_array *v88; // x8
  PlayMakerFSM_o *v89; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v93; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v96; // x1
  struct PlayMakerFSM_array *v97; // x8
  PlayMakerFSM_o *v98; // x0
  HutongGames_PlayMaker_Fsm_o *v99; // x0
  __int64 v100; // x1
  HutongGames_PlayMaker_FsmVariables_o *v101; // x0
  HutongGames_PlayMaker_FsmInt_o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  const MethodInfo *v106; // x1
  System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v115; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v116; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4B18FB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, flg, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v11, v12);
    sub_1BCA7E0(&long_TypeInfo, v13, v14);
    sub_1BCA7E0(&JsonManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v19, v20);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_13724/*"TargetFrontPos"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_13723/*"TargetBackPos"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_4044/*"Camera"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2255/*"ActorObject"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_16362/*"_ENEMY"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4050/*"CameraFsm"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_10734/*"Performance"*/, v35, v36);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_2256/*"ActorSide"*/, v37, v38);
    byte_4B18FB6 = 1;
  }
  memset(&v116, 0, sizeof(v116));
  if ( !flg )
  {
    motionFSM = v4->fields.motionFSM;
    if ( !motionFSM )
      goto LABEL_125;
    if ( !motionFSM->max_length )
      goto LABEL_139;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( this )
    {
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( this )
        {
          FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)this,
                            (System_String_o *)StringLiteral_2255/*"ActorObject"*/,
                            0LL);
          this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
          if ( FsmGameObject )
          {
            HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)this, 0LL);
            goto LABEL_124;
          }
        }
      }
    }
LABEL_125:
    sub_1BCAA3C(this, flg);
  }
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_125;
  v39 = this;
  this = (BattleActorControl_o *)BattleServantData__getSvtId(v4->fields.battleSvtData, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_125;
  v40 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(v4->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v41);
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(
                                   (UnityEngine_GameObject_o *)v39,
                                   v40,
                                   WeaponGroup,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  v43 = this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v44 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v43,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v44 )
    goto LABEL_125;
  v51 = this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_1BCA91C(this, v44->obj.klass->_1.element_class);
    if ( !this )
    {
      v114 = sub_1BCAA60(0LL);
      sub_1BCA908(v114, 0LL);
    }
  }
  if ( !v44->max_length )
    goto LABEL_139;
  v44->m_Items[0] = (PlayMakerFSM_o *)v51;
  sub_1BCA784((PartyOrganizationUtility_o *)v44->m_Items, (int64_t)v51, v45, v46, v47, v48, v49, v50);
  v52 = v4->fields.motionFSM;
  if ( !v52 )
    goto LABEL_125;
  if ( !v52->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v52->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  v53 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_2255/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v53 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v53, (UnityEngine_GameObject_o *)this, 0LL);
  v54 = v4->fields.motionFSM;
  if ( !v54 )
    goto LABEL_125;
  if ( !v54->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v54->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2256/*"ActorSide"*/,
                                   0LL);
  v55 = v4->fields.motionFSM;
  if ( !v55 )
    goto LABEL_125;
  if ( v55->max_length <= 1 )
    goto LABEL_139;
  v56 = this;
  this = (BattleActorControl_o *)v55->m_Items[1];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2256/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v56 )
    goto LABEL_125;
  v56->fields.shadowObj = (struct UnityEngine_Transform_o *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v56->fields.shadowObj, (int64_t)this, v57, v58, v59, v60, v61, v62);
  v63 = v4->fields.motionFSM;
  if ( !v63 )
    goto LABEL_125;
  if ( !v63->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v63->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4044/*"Camera"*/,
                                   0LL);
  v64 = v4->fields.motionFSM;
  if ( !v64 )
    goto LABEL_125;
  if ( v64->max_length <= 1 )
    goto LABEL_139;
  v65 = this;
  this = (BattleActorControl_o *)v64->m_Items[1];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4044/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v65 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v65,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v66 = v4->fields.motionFSM;
  if ( !v66 )
    goto LABEL_125;
  if ( !v66->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v66->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4050/*"CameraFsm"*/,
                                   0LL);
  v67 = v4->fields.motionFSM;
  if ( !v67 )
    goto LABEL_125;
  if ( v67->max_length <= 1 )
    goto LABEL_139;
  v68 = this;
  this = (BattleActorControl_o *)v67->m_Items[1];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4050/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v68 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v68,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v69 = v4->fields.motionFSM;
  if ( !v69 )
    goto LABEL_125;
  if ( !v69->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v69->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_10734/*"Performance"*/,
                                   0LL);
  if ( !v4->fields.performance )
    goto LABEL_125;
  v70 = this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0LL);
  if ( !v70 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v70,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v71 = v4->fields.motionFSM;
  if ( !v71 )
    goto LABEL_125;
  if ( !v71->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v71->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
         (HutongGames_PlayMaker_FsmVariables_o *)this,
         (System_String_o *)StringLiteral_13724/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( !this )
      goto LABEL_125;
    this = (BattleActorControl_o *)System_String__Equals_62409536(
                                     (System_String_o *)this,
                                     (System_String_o *)StringLiteral_16362/*"_ENEMY"*/,
                                     0LL);
    v72 = v4->fields.motionFSM;
    if ( !v72 )
      goto LABEL_125;
    if ( v72->max_length )
    {
      v73 = (char)this;
      this = (BattleActorControl_o *)v72->m_Items[0];
      if ( !this )
        goto LABEL_125;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_125;
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_125;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13724/*"TargetFrontPos"*/,
                                       0LL);
      performance = v4->fields.performance;
      if ( !performance )
        goto LABEL_125;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v73 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_125;
        *(float *)&this->fields.shadowObj = -distanceofactor;
        HIDWORD(this->fields.shadowObj) = 0;
        LODWORD(this->fields.specialShadowObj) = 0;
        v76 = v4->fields.motionFSM;
        if ( !v76 )
          goto LABEL_125;
        if ( v76->max_length )
        {
          this = (BattleActorControl_o *)v76->m_Items[0];
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)this->fields.nodeText;
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13723/*"TargetBackPos"*/,
                                           0LL);
          v77 = v4->fields.performance;
          if ( !v77 || !this )
            goto LABEL_125;
          v78 = v77->fields.distanceofactor;
LABEL_101:
          *(float *)&this->fields.shadowObj = v78;
          HIDWORD(this->fields.shadowObj) = 0;
          LODWORD(this->fields.specialShadowObj) = 0;
          goto LABEL_102;
        }
      }
      else
      {
        if ( !this )
          goto LABEL_125;
        *(float *)&this->fields.shadowObj = distanceofactor;
        HIDWORD(this->fields.shadowObj) = 0;
        LODWORD(this->fields.specialShadowObj) = 0;
        v82 = v4->fields.motionFSM;
        if ( !v82 )
          goto LABEL_125;
        if ( v82->max_length )
        {
          this = (BattleActorControl_o *)v82->m_Items[0];
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)this->fields.nodeText;
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13723/*"TargetBackPos"*/,
                                           0LL);
          v83 = v4->fields.performance;
          if ( !v83 || !this )
            goto LABEL_125;
          v78 = -v83->fields.distanceofactor;
          goto LABEL_101;
        }
      }
    }
LABEL_139:
    sub_1BCAA44(this, flg);
  }
LABEL_102:
  this = (BattleActorControl_o *)v4->fields.battleSvtData;
  if ( !this )
    goto LABEL_125;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)this, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v84);
  this = (BattleActorControl_o *)JsonManager__getDictionary(StrParam, 0LL);
  if ( !this )
    goto LABEL_125;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v115,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v116 = v115;
  while ( 1 )
  {
    v86 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v116,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v86 )
      break;
    v88 = v4->fields.motionFSM;
    if ( !v88 )
      sub_1BCAA3C(v86, v87);
    if ( !v88->max_length )
      sub_1BCAA44(v86, v87);
    v89 = v88->m_Items[0];
    if ( !v89 )
      sub_1BCAA3C(0LL, v87);
    key = v116.fields._current.fields.key;
    value = v116.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v89, 0LL);
    if ( !Fsm )
      sub_1BCAA3C(0LL, v93);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1BCAA3C(0LL, v93);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v97 = v4->fields.motionFSM;
      if ( !v97 )
        sub_1BCAA3C(FsmInt, v96);
      if ( !v97->max_length )
        sub_1BCAA44(FsmInt, v96);
      v98 = v97->m_Items[0];
      if ( !v98 )
        sub_1BCAA3C(0LL, v96);
      v99 = PlayMakerFSM__get_Fsm(v98, 0LL);
      if ( !v99 )
        sub_1BCAA3C(0LL, v100);
      v101 = v99->fields.variables;
      if ( !v101 )
        sub_1BCAA3C(0LL, v100);
      v102 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v101, (System_String_o *)key, 0LL);
      if ( !v102 )
        sub_1BCAA3C(0LL, v103);
      if ( !value )
        goto LABEL_132;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1BCACFC(value);
LABEL_132:
        sub_1BCAA3C(v102, v103);
      }
      v102->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v104, v105);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v116,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(v4, v106);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int64_t)DelayEndSequenceIdListFromMotion,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
LABEL_124:
  BattleActorControl__setLimitedPeriod(v4, v81);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setServantData(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x28
  __int64 Instance; // x0
  struct UnityEngine_GameObject_o *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  BattleServantData_o **p_battleSvtData; // x25
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  BattleServantData_o *v74; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v75; // x22
  __int64 v76; // x21
  __int64 v77; // x23
  Il2CppObject *Entity; // x0
  __int64 v79; // x1
  UnityEngine_Object_o *shadowObj; // x21
  ServantEntity_o *v81; // x26
  struct UnityEngine_Transform_o *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int32_t v89; // w29
  int v90; // w21
  int32_t v91; // w23
  UnityEngine_GameObject_o *v92; // x24
  int32_t v93; // w27
  _BOOL4 isForceAppearance; // w20
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x2
  UnityEngine_Transform_o *v104; // x21
  const MethodInfo *v105; // x2
  BattlePerformance_o *performance; // x21
  int32_t v107; // w22
  System_String_o *v108; // x29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v111; // x27
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  System_String_o *HideInAnimNodeName; // x26
  bool v119; // w0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  UnityEngine_Transform_o *v126; // x0
  UnityEngine_Transform_o *v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  struct System_String_o *v134; // x1
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  UnityEngine_GameObject_o *v138; // x26
  int32_t v139; // w29
  UnityEngine_Transform_o *v140; // x21
  __int64 v141; // x2
  UnityEngine_Transform_o *v142; // x21
  __int64 v143; // x2
  UnityEngine_Transform_o *v144; // x21
  __int64 v145; // x2
  UnityEngine_Transform_o *v146; // x21
  UnityEngine_Transform_o *v147; // x21
  __int64 v148; // x1
  BattleFBXComponent_o *fbxcomponent; // x21
  _BOOL4 v150; // w20
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x1
  const MethodInfo *v153; // x3
  int32_t displayType; // w8
  bool v155; // w1
  bool v156; // w2
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__49689332; // x21
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  System_Collections_Generic_List_object__o *v161; // x22
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  const MethodInfo *v168; // x2
  BattleServantData_o *v169; // x22
  __int64 v170; // x2
  UnityEngine_Transform_o *v171; // x21
  float actorScale; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct BattlePerformance_o *v174; // x8
  struct BattleData_o *data; // x8
  int32_t v176; // w0
  __int64 v177; // x2
  __int64 v178; // x3
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  System_Predicate_object__o *v180; // x26
  Il2CppObject *v181; // x21
  struct BattleActorControl___c_StaticFields *v182; // x0
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  UnityEngine_SkinnedMeshRenderer_o *v189; // x25
  __int64 v190; // x1
  Il2CppObject *Component_object; // x26
  struct BattlePerformance_o *v192; // x8
  bool IsEnemyPosCountNormal; // w27
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x3
  UnityEngine_Mesh_o *v197; // x21
  __int64 v198; // x1
  BattlePerformance_o *v199; // x29
  int32_t v200; // w28
  __int64 v201; // x22
  __int64 v202; // x21
  int32_t v203; // w21
  __int64 v204; // x1
  __int64 v205; // x2
  __int64 v206; // x3
  System_Action_o *v207; // x22
  struct BattlePerformance_o *v208; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v212; // x9
  __int64 v213; // x1
  Il2CppObject *v214; // x21
  struct BattlePerformance_o *v215; // x8
  UnityEngine_Camera_o *actorcamera; // x25
  UnityEngine_Camera_o *uicamera; // x26
  UnityEngine_GameObject_o *v218; // x27
  const MethodInfo *v219; // x1
  int v220; // s0
  System_Object_array *Components_object; // x0
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  const MethodInfo *v230; // x3
  const MethodInfo *v231; // x4
  const MethodInfo *v232; // x1
  BattleServantData_o *v233; // [xsp+8h] [xbp-78h]
  __int64 v234; // [xsp+10h] [xbp-70h]
  int32_t v235; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v237; // 0:x0.16
  UnityEngine_Vector3_o v238; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18FAB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, svtdata, method);
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___, v20, v21);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___76797704, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Mesh_TypeInfo, v30, v31);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v32, v33);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35);
    sub_1BCA7E0(&System_Predicate_SkinnedMeshRenderer__TypeInfo, v36, v37);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41);
    sub_1BCA7E0(&Method_BattleActorControl___c__setServantData_b__137_0__, v42, v43);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass137_0__setServantData_b__1__, v44, v45);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass137_0_TypeInfo, v46, v47);
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v48, v49);
    sub_1BCA7E0(&StringLiteral_19166/*"en_Head"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_12894/*"Shadow"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_19170/*"en_buff01"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v56, v57);
    byte_4B18FAB = 1;
  }
  v58 = sub_1BCAA2C(BattleActorControl___c__DisplayClass137_0_TypeInfo, svtdata, method, v3);
  BattleActorControl___c__DisplayClass137_0___ctor((BattleActorControl___c__DisplayClass137_0_o *)v58, 0LL);
  if ( !v58 )
    goto LABEL_119;
  *(_QWORD *)(v58 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 16), (int64_t)this, v61, v62, v63, v64, v65, v66);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  v233 = svtdata;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleSvtData, (int64_t)svtdata, v68, v69, v70, v71, v72, v73);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v74 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v75 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v77 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
  v76 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v60);
  *(_QWORD *)&v236.fields.currentCryptoKey = v77;
  *(_QWORD *)&v236.fields.fakeValue = v76;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v236, 0LL);
  if ( !v75 )
    goto LABEL_119;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v75,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v81 = (ServantEntity_o *)Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_119;
    v82 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12894/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v82;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.shadowObj, (int64_t)v82, v83, v84, v85, v86, v87, v88);
  }
  Instance = (__int64)*p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  Instance = BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v89 = Instance;
  Instance = BattleServantData__getDispLimitCount(*p_battleSvtData, 1, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v90 = Instance;
  v91 = v89 == BattleServantData__getSvtId(*p_battleSvtData, 0LL) ? v90 : 0;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_119;
  v92 = (UnityEngine_GameObject_o *)Instance;
  Instance = BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v93 = Instance;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v60);
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               v92,
                               v93,
                               v91,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.actorObject,
    (int64_t)Manager__loadBattleActor,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  v104 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C1 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v103);
    byte_4B109C1 = 1;
  }
  if ( !v104 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v104, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleActorControl__ChangeShadowParent(this, v91, v105);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  performance = this->fields.performance;
  v107 = *(_DWORD *)(Instance + 24);
  Instance = BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0LL);
  if ( !performance )
    goto LABEL_119;
  v235 = v89;
  BattlePerformance__registerCameraAction(performance, v107, Instance, 0LL);
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  v234 = v58;
  v108 = (System_String_o *)StringLiteral_19166/*"en_Head"*/;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (__int64)TransformHelper__getNodeFromLvName(transform, v108, v91, 0, 0LL);
  if ( !Instance )
    goto LABEL_119;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v111 = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.checkScaleNode, 0LL, v112, v113, v114, v115, v116, v117);
  if ( v81 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v81, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( (Instance & 1) == 0 )
  {
    if ( !v108 )
      goto LABEL_119;
    v119 = System_String__Equals_62409536(v108, HideInAnimNodeName, 0LL);
    v60 = v111;
    if ( !v119 )
    {
      Instance = (__int64)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_119;
      v126 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (__int64)TransformHelper__getNodeFromLvName(v126, HideInAnimNodeName, v91, 0, 0LL);
      if ( !Instance )
        goto LABEL_119;
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v60;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.checkScaleNode,
      (int64_t)v60,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
  }
  v127 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v134 = TransformHelper__ExistNodeFromLvName(v127, (System_String_o *)StringLiteral_19170/*"en_buff01"*/, -1, 0, 0LL)
       ? (struct System_String_o *)StringLiteral_19170/*"en_buff01"*/
       : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v134;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int64_t)v134,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  v138 = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, v135, v136, v137);
  UnityEngine_GameObject___ctor_70135992(v138, 0LL);
  if ( !v138 )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v138, 0LL);
  v139 = v235;
  if ( !v111 )
    goto LABEL_119;
  v140 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v111, 0LL);
  if ( !v140 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v140, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v138, 0LL);
  v142 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C1 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v141);
    byte_4B109C1 = 1;
  }
  if ( !v142 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v142, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v138, 0LL);
  v144 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C9 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v143);
    byte_4B109C9 = 1;
  }
  if ( !v144 )
    goto LABEL_119;
  UnityEngine_Transform__set_localEulerAngles(v144, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v138, 0LL);
  v146 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C6 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v145);
    byte_4B109C6 = 1;
  }
  if ( !v146 )
    goto LABEL_119;
  UnityEngine_Transform__set_localScale(v146, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v147 = UnityEngine_GameObject__get_transform(v138, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v147 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v147, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v138, 0LL);
  if ( !Instance )
    goto LABEL_119;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v148);
  UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v138, 0LL);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  fbxcomponent = this->fields.fbxcomponent;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__set_RootTransform(fbxcomponent, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_119;
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v235, v91, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v150 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v60);
  Instance = (__int64)ServantAssetLoadManager__loadAnimEvents(v235, v91, v150, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__loadAnimationEvents(
    this->fields.fbxcomponent,
    (UnityEngine_TextAsset_o *)Instance,
    v235,
    v91,
    0LL);
  BattleActorControl__InitAnimationEffect(this, v91, v151);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v155 = displayType == 2;
      v156 = displayType == 3;
    }
    else
    {
      v155 = 0;
      v156 = 0;
    }
    BattleActorControl__SetDispServant(this, v155, v156, v153);
  }
  BattleActorControl__UpdateShadow(this, v152);
  this->fields.stepFlg = 0;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  ComponentsInChildren_object__49689332 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                                           (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v161 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                        v158,
                                                        v159,
                                                        v160);
  System_Collections_Generic_List_object____ctor_56235344(
    v161,
    ComponentsInChildren_object__49689332,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___76797704);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v161;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rendererArrayList,
    (int64_t)v161,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v168);
  v169 = v233;
  if ( !v233 )
    goto LABEL_119;
  this->fields.actorScale = BattleServantData__getActorScale(v233, 0LL);
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v171 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C6 )
  {
    Instance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v170);
    byte_4B109C6 = 1;
  }
  if ( !v171 )
    goto LABEL_119;
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v238.fields.z = actorScale * static_fields->oneVector.fields.z;
  v238.fields.y = actorScale * static_fields->oneVector.fields.y;
  v238.fields.x = actorScale * static_fields->oneVector.fields.x;
  UnityEngine_Transform__set_localScale(v171, v238, 0LL);
  if ( !v233->fields.isEnemy )
    goto LABEL_117;
  v174 = this->fields.performance;
  if ( !v174 )
    goto LABEL_119;
  data = v174->fields.data;
  if ( !data )
    goto LABEL_119;
  v176 = System_Array__IndexOf_int_(
           data->fields.e_entryid,
           v233->fields.uniqueId,
           (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  *(_DWORD *)(v58 + 24) = v176;
  if ( v176 == -1 )
    goto LABEL_117;
  rendererArrayList = this->fields.rendererArrayList;
  Instance = (__int64)BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, v60);
    Instance = (__int64)BattleActorControl___c_TypeInfo;
  }
  v180 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v180 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v60);
      Instance = (__int64)BattleActorControl___c_TypeInfo;
    }
    v181 = **(Il2CppObject ***)(Instance + 184);
    v180 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SkinnedMeshRenderer__TypeInfo, v60, v177, v178);
    System_Predicate_object____ctor(v180, v181, Method_BattleActorControl___c__setServantData_b__137_0__, 0LL);
    v182 = BattleActorControl___c_TypeInfo->static_fields;
    v182->__9__137_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)v180;
    sub_1BCA784((PartyOrganizationUtility_o *)&v182->__9__137_0, (int64_t)v180, v183, v184, v185, v186, v187, v188);
  }
  if ( !rendererArrayList )
    goto LABEL_119;
  Instance = (__int64)System_Collections_Generic_List_object___Find(
                        (System_Collections_Generic_List_object__o *)rendererArrayList,
                        (System_Predicate_T__o *)v180,
                        (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_119;
  v189 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       *p_actorObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v190);
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)*p_actorObject;
    if ( !*p_actorObject )
      goto LABEL_119;
    Instance = (__int64)UnityEngine_GameObject__AddComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !Instance )
      goto LABEL_119;
    Component_object = (Il2CppObject *)Instance;
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v192 = this->fields.performance;
  if ( !v192 )
    goto LABEL_119;
  Instance = (__int64)v192->fields.data;
  if ( !Instance )
    goto LABEL_119;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL);
  v197 = (UnityEngine_Mesh_o *)sub_1BCAA2C(UnityEngine_Mesh_TypeInfo, v194, v195, v196);
  UnityEngine_Mesh___ctor(v197, 0LL);
  if ( !v189 )
    goto LABEL_119;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v189, v197, 0LL);
  if ( !Component_object )
    goto LABEL_119;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_object, v197, 0LL);
  v199 = this->fields.performance;
  v200 = *(_DWORD *)(v58 + 24);
  v201 = *(_QWORD *)&v233->fields.svtId.fields.currentCryptoKey;
  v202 = *(_QWORD *)&v233->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v198);
  *(_QWORD *)&v237.fields.currentCryptoKey = v201;
  *(_QWORD *)&v237.fields.fakeValue = v202;
  v203 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v237, 0LL);
  v207 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v204, v205, v206);
  System_Action___ctor(
    v207,
    (Il2CppObject *)v234,
    Method_BattleActorControl___c__DisplayClass137_0__setServantData_b__1__,
    0LL);
  if ( !v199 )
    goto LABEL_119;
  BattlePerformance__AddCollider(
    v199,
    (UnityEngine_MeshCollider_o *)Component_object,
    v189,
    v200,
    v203,
    v207,
    IsEnemyPosCountNormal,
    0LL);
  v208 = this->fields.performance;
  if ( !v208 )
    goto LABEL_119;
  statusPerf = v208->fields.statusPerf;
  v169 = v233;
  v139 = v235;
  if ( !statusPerf )
    goto LABEL_119;
  enemyPref = statusPerf->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_119;
  svtHeadUpList = enemyPref->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_119;
  v212 = *(int *)(v234 + 24);
  if ( (unsigned int)v212 >= svtHeadUpList->max_length )
    sub_1BCAA44(Instance, v60);
  Instance = (__int64)svtHeadUpList->m_Items[v212];
  if ( !Instance )
LABEL_119:
    sub_1BCAA3C(Instance, v60);
  v214 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)Instance,
           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v213);
  Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v214, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v215 = this->fields.performance;
    if ( v215 )
    {
      actorcamera = v215->fields.actorcamera;
      uicamera = v215->fields.uicamera;
      v218 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v220 = BattleActorControl__getHeadUpY(this, v219);
      if ( v214 )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)v214,
          actorcamera,
          uicamera,
          v218,
          *(UnityEngine_Vector3_o *)&v220,
          0,
          0LL);
        TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)v214, 0LL);
        goto LABEL_117;
      }
    }
    goto LABEL_119;
  }
LABEL_117:
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  Components_object = UnityEngine_GameObject__GetComponents_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2F6302C *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (int64_t)Components_object,
    v224,
    v225,
    v226,
    v227,
    v228,
    v229);
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, 0, v230);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v139, v91, v169->fields.isEnemy, v231);
  BattleActorControl__LoadSavedPartAnimation(this, v232);
}


void __fastcall BattleActorControl__setStepFlg(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  this->fields.stepFlg = flg;
}


void __fastcall BattleActorControl__setSummonMasterObject(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_array *v6; // x8
  struct PlayMakerFSM_array *v7; // x8
  struct PlayMakerFSM_array *v8; // x8

  v4 = this;
  if ( (byte_4B18FBB & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_13241/*"SummonMasterObject"*/, obj, method);
    byte_4B18FBB = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( !motionFSM->max_length )
      goto LABEL_31;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13241/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_30;
      if ( !v6->max_length )
        goto LABEL_31;
      this = (BattleActorControl_o *)v6->m_Items[0];
      if ( !this )
        goto LABEL_30;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_30;
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_30;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13241/*"SummonMasterObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_30;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
    }
    v7 = v4->fields.motionFSM;
    if ( !v7 )
      goto LABEL_30;
    if ( v7->max_length <= 1 )
LABEL_31:
      sub_1BCAA44(this, obj);
    this = (BattleActorControl_o *)v7->m_Items[1];
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13241/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v8 = v4->fields.motionFSM;
      if ( !v8 )
        goto LABEL_30;
      if ( v8->max_length > 1 )
      {
        this = (BattleActorControl_o *)v8->m_Items[1];
        if ( this )
        {
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( this )
          {
            this = (BattleActorControl_o *)this->fields.nodeText;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13241/*"SummonMasterObject"*/,
                                               0LL);
              if ( this )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
                return;
              }
            }
          }
        }
LABEL_30:
        sub_1BCAA3C(this, obj);
      }
      goto LABEL_31;
    }
  }
}


void __fastcall BattleActorControl__setTargetObject(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_array *v6; // x8

  v4 = this;
  if ( (byte_4B18FBA & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_13727/*"TargetObject"*/, obj, method);
    byte_4B18FBA = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( motionFSM->max_length )
    {
      this = (BattleActorControl_o *)motionFSM->m_Items[0];
      if ( !this )
        goto LABEL_17;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_17;
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_17;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13727/*"TargetObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_17;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_17;
      if ( v6->max_length > 1 )
      {
        this = (BattleActorControl_o *)v6->m_Items[1];
        if ( this )
        {
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( this )
          {
            this = (BattleActorControl_o *)this->fields.nodeText;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13727/*"TargetObject"*/,
                                               0LL);
              if ( this )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
                return;
              }
            }
          }
        }
LABEL_17:
        sub_1BCAA3C(this, obj);
      }
    }
    sub_1BCAA44(this, obj);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_1BCAA3C(this, method);
  fbxcomponent->fields.timescale = time;
}


void __fastcall BattleActorControl__setTypeEnemy(BattleActorControl_o *this, const MethodInfo *method)
{
  this->fields.isEnemy = 1;
}


void __fastcall BattleActorControl__setTypePlayer(BattleActorControl_o *this, const MethodInfo *method)
{
  this->fields.isEnemy = 0;
}


void __fastcall BattleActorControl__set_BuffEffectNodeName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BuffEffectNodeName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl__set_IsStepInBattle(
        BattleActorControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsStepInBattle_k__BackingField = value;
}


void __fastcall BattleActorControl__set_PlayedOriginalAnimName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PlayedOriginalAnimName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl__set_PrevSkillVoiceType(
        BattleActorControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.prevSkillVoiceType = value;
}


void __fastcall BattleActorControl__set_currentPriority(
        BattleActorControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._currentPriority_k__BackingField = value;
}


void __fastcall BattleActorControl__set_delayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl__skipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0

  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1BCAA3C(0LL, v3);
    BattlePerformance__startSkipDeadTemp(performance, 0LL);
  }
}


void __fastcall BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattlePerformance_o *performance; // x8
  bool IsHighSpeedOption; // w0
  __int64 v8; // x1
  int32_t uniqueID; // w20
  bool v10; // w21
  float v11; // s0
  const MethodInfo *v12; // x3

  v3 = this;
  if ( (byte_4B19011 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v2);
    this = (BattleActorControl_o *)sub_1BCA7E0(&StringLiteral_12315/*"SKIP_VOICE"*/, v4, v5);
    byte_4B19011 = 1;
  }
  performance = v3->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_1BCAA3C(this, method);
  IsHighSpeedOption = BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v3->fields.uniqueID;
  v10 = IsHighSpeedOption;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8);
  v11 = 1.0;
  if ( v10 )
    v11 = 0.5;
  ServantAssetLoadManager__StopVoice(uniqueID, v11, 0LL);
  BattleActorControl__sendEventFSM_44485868(v3, (System_String_o *)StringLiteral_12315/*"SKIP_VOICE"*/, 0, v12);
}


void __fastcall BattleActorControl__startBattleUIFade(
        BattleActorControl_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCAA3C(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4B1901B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleActorControl_endChangeAppearance__, v5, v6);
    byte_4B1901B = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v9 = BattleActorControl__waitChangeApp(this, v7, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__startNoblePhantasm(
        BattleActorControl_o *this,
        System_Action_o *callback,
        bool flg,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v51; // w9
  bool v52; // w27
  System_Delegate_o *v53; // x21
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x0
  System_Delegate_c *klass; // x2
  System_Delegate_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v69; // x8
  const MethodInfo *v70; // x2
  struct BattlePerformance_o *v71; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x20
  BattleFBXComponent_c *v73; // x0
  struct BattlePerformance_o *v74; // x8
  Il2CppObject *Instance; // x0
  BattlePerformance_o *v76; // x20
  BattleSequenceManager_o *v77; // x21
  struct BattlePerformance_o *v78; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v80; // x8
  struct BattleActionData_o *actiondata; // x8
  Il2CppObject *Entity; // x0
  TreasureDvcEntity_o *v83; // x20
  struct BattleActionData_o *v84; // x8
  __int64 v85; // x1
  Il2CppObject *v86; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  AssetManager_ResourceUnloadEventHandler_o *v90; // x21
  __int64 v91; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v93; // x20
  __int64 v94; // x21
  __int64 v95; // x22
  int32_t v96; // w21
  BattleActorControl_o *v97; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v99; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v102; // w23
  int32_t NpChargeStage; // w26
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  BattleSequenceManager_onGameObjectLoadComplete_o *v107; // x27
  UnityEngine_Object_o *v108; // x20
  struct BattlePerformance_o *v109; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v111; // x8
  struct BattleData_o *v112; // x8
  void *v113; // x0
  int v114; // w1
  __int64 v115; // x29
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  v6 = this;
  if ( (byte_4B18FF4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, flg);
    sub_1BCA7E0(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, v7, v8);
    sub_1BCA7E0(&Method_BattleActorControl__startNoblePhantasm_b__266_0__, v9, v10);
    sub_1BCA7E0(&Method_BattleActorControl__startNoblePhantasm_b__266_1__, v11, v12);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v25, v26);
    sub_1BCA7E0(&Method_FieldMotionManager_SetVariables_GameObject___, v27, v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__,
      v29,
      v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
    sub_1BCA7E0(&OptionManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&AssetManager_ResourceUnloadEventHandler_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&StringLiteral_9440/*"NPACTOR"*/, v45, v46);
    this = (BattleActorControl_o *)sub_1BCA7E0(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v47, v48);
    byte_4B18FF4 = 1;
  }
  memset(&i, 0, sizeof(i));
  noblePhantasmObjectVisibleCtrList = v6->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_71;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v51 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v51;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0LL);
  this = (BattleActorControl_o *)BattleActorControl__GetServantObjectVisibleControlActor(
                                   v6,
                                   (const MethodInfo *)callback);
  if ( !this )
    goto LABEL_71;
  v52 = flg;
  v53 = (System_Delegate_o *)&Method_BattleActorControl__startNoblePhantasm_b__266_0__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v116,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  for ( i = v116;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
        BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 1, (BattleActorControl_o *)i.fields._current, v54) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 2, v6, v55);
    v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
    klass = v53->klass;
    v53 = (System_Delegate_o *)v59;
    System_Action___ctor(v59, (Il2CppObject *)v6, (intptr_t)klass, 0LL);
    v61 = System_Delegate__Combine((System_Delegate_o *)callback, v53, 0LL);
    if ( !v61 || (System_Action_c *)v61->klass == System_Action_TypeInfo )
      break;
    sub_1BCACFC(v61);
    if ( v114 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
      sub_1CB5270();
    }
    v115 = *(_QWORD *)__cxa_begin_catch(v113);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v115 )
      sub_1BCAA34(v115);
  }
  v6->fields.noblePhantasmCallback = (struct System_Action_o *)v61;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v6->fields.noblePhantasmCallback,
    (int64_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this = (BattleActorControl_o *)v6->fields.fbxcomponent;
  if ( !this )
    goto LABEL_71;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)this, 0, 0LL);
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_71;
  this = (BattleActorControl_o *)performance->fields.bgPerf;
  if ( !this )
    goto LABEL_71;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_71;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 0, 0LL);
  v69 = v6->fields.performance;
  v6->fields.isPlayingNoblePhantasm = 1;
  if ( !v69 )
    goto LABEL_71;
  this = (BattleActorControl_o *)v69->fields.logic;
  if ( !this )
    goto LABEL_71;
  BattleLogic__ChangePhase((BattleLogic_o *)this, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(v6, 0, v70);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_71;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)this, 0, 0LL);
  v71 = v6->fields.performance;
  if ( !v71 )
    goto LABEL_71;
  fmManager_k__BackingField = v71->fields._fmManager_k__BackingField;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_71;
  FieldMotionManager__SetVariables_object_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9440/*"NPACTOR"*/,
    (Il2CppObject *)this,
    (const MethodInfo_2F60218 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v73 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, callback);
    v73 = BattleFBXComponent_TypeInfo;
  }
  v73->static_fields->EnableEvent = 0;
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_71;
  BattlePerformance__changeShadowType((BattlePerformance_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_71;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)this, 0LL);
  v74 = v6->fields.performance;
  if ( !v74 )
    goto LABEL_71;
  this = (BattleActorControl_o *)v74->fields.commandPerf;
  if ( !this )
    goto LABEL_71;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v76 = v6->fields.performance;
  v77 = (BattleSequenceManager_o *)Instance;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  v78 = v6->fields.performance;
  if ( !v78 )
    goto LABEL_71;
  bgPerf = v78->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_71;
  if ( !v77 )
    goto LABEL_71;
  BattleSequenceManager__init(
    v77,
    v76,
    (UnityEngine_GameObject_o *)this,
    v78->fields.p_actorlist,
    v78->fields.e_actorlist,
    v78->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v80 = v6->fields.performance;
  if ( !v80 )
    goto LABEL_71;
  v80->fields.isNoblePhantasmWhiteInFlg = v52;
  if ( v6->fields.actiondata )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, callback);
    this = (BattleActorControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    actiondata = v6->fields.actiondata;
    if ( !actiondata || !this )
      goto LABEL_71;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               actiondata->fields.treasureDvcId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v83 = (TreasureDvcEntity_o *)Entity;
      if ( TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)Entity, 0LL) )
      {
        this = (BattleActorControl_o *)v6->fields.battleSvtData;
        if ( !this )
          goto LABEL_71;
        this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
        v84 = v6->fields.actiondata;
        if ( !v84 )
          goto LABEL_71;
        TreasureDvcEntity__getRandomSeqIdEachLimit(v83, (int32_t)this, v84->fields.ActSetId, 0LL);
      }
    }
  }
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_71;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)this, v6->fields.actiondata, 0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_71;
  BattleSequenceManager__CacheRendererBaseAddColor((BattleSequenceManager_o *)this, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v85);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v86 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v90 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1BCAA2C(
                                                         AssetManager_ResourceUnloadEventHandler_TypeInfo,
                                                         v87,
                                                         v88,
                                                         v89);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v90,
      (Il2CppObject *)v6,
      Method_BattleActorControl__startNoblePhantasm_b__266_1__,
      0LL);
    if ( !v86 )
      goto LABEL_71;
    AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)v86, v90, 0LL);
  }
  else
  {
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = v6->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_71;
    v93 = (BattleSequenceManager_o *)this;
    v95 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v94 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, callback);
    *(_QWORD *)&v118.fields.currentCryptoKey = v95;
    *(_QWORD *)&v118.fields.fakeValue = v94;
    this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v118, 0LL);
    if ( !v6->fields.battleSvtData )
      goto LABEL_71;
    v96 = (int)this;
    this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice(v6->fields.battleSvtData, 0LL);
    if ( !this )
      goto LABEL_71;
    v97 = this;
    this = (BattleActorControl_o *)v6->fields.battleSvtData;
    if ( !this )
      goto LABEL_71;
    m_CachedPtr = v97->fields.m_CachedPtr;
    this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
    v99 = v6->fields.battleSvtData;
    if ( !v99 )
      goto LABEL_71;
    overwriteSvtVoiceId = v99->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v99->fields.treasuredvcLevel;
    v102 = (int)this;
    NpChargeStage = BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0LL);
    v107 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1BCAA2C(
                                                                 BattleSequenceManager_onGameObjectLoadComplete_TypeInfo,
                                                                 v104,
                                                                 v105,
                                                                 v106);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v107,
      (Il2CppObject *)v6,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v93 )
      goto LABEL_71;
    BattleSequenceManager__loadSequence(
      v93,
      v96,
      m_CachedPtr,
      v102,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v107,
      0LL);
  }
  v108 = (UnityEngine_Object_o *)v6->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v109 = v6->fields.performance;
    if ( !v109 )
      goto LABEL_71;
    data = (UnityEngine_Object_o *)v109->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && !v6->fields.isEnemy )
    {
      v111 = v6->fields.performance;
      if ( v111 )
      {
        v112 = v111->fields.data;
        if ( v112 )
        {
          ++v112->fields.playerNpCount;
          goto LABEL_69;
        }
      }
LABEL_71:
      sub_1BCAA3C(this, callback);
    }
  }
LABEL_69:
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_71;
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)this, 1, 1, 0LL);
}


void __fastcall BattleActorControl__startWaitDeadEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleActorControl_o *v3; // x19
  struct BattleServantData_o *v4; // x8
  const MethodInfo *v5; // x1
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v7; // x2

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_7;
  v3 = this;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this
    || (BattleBuffData__clearActiveBuff((BattleBuffData_o *)this, 0LL), (v4 = v3->fields.battleSvtData) == 0LL)
    || (this = (BattleActorControl_o *)v4->fields.buffData) == 0LL
    || (BattleBuffData__clearAuraBuff((BattleBuffData_o *)this, 0LL),
        BattleActorControl__updateBuffLoopEffect(v3, v5),
        (this = (BattleActorControl_o *)v3->fields.battleSvtData) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(this, method);
  }
  AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)this, 0LL);
  BattleActorControl__updateAura(v3, AuraIdList, v7);
}


void __fastcall BattleActorControl__stopAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.resumetimescale = this->fields.animetimescale;
  if ( !fbxcomponent )
    sub_1BCAA3C(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t uniqueID; // w19

  if ( (byte_4B19012 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, method, v2);
    byte_4B19012 = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v4);
    ServantAssetLoadManager__StopVoice(uniqueID, 0.0, 0LL);
  }
}


void __fastcall BattleActorControl__updateAura(
        BattleActorControl_o *this,
        System_Int32_array *auraEffectList,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct BattleServantData_o *battleSvtData; // x8
  __int64 v38; // x2
  __int64 v39; // x3
  struct BattleServantData_o *v40; // x8
  BattleBuffData_o *buffData; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  System_Collections_Generic_Dictionary_K__V__o *auraList; // x19
  BattleActorControl___c_c *v44; // x0
  System_Func_T__TResult__o *_9__332_0; // x20
  Il2CppObject *v46; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_List_int__o *v54; // x22
  __int64 v55; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x21
  unsigned __int64 v57; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v65; // x22
  unsigned __int64 v66; // x25
  int32_t v67; // w23
  __int64 v68; // x1
  Il2CppObject *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v71; // x2
  System_Collections_IEnumerator_o *v72; // x0
  __int64 v73; // x8
  unsigned __int64 v74; // x22
  const MethodInfo *v75; // x3
  int32_t v76; // w2
  System_Collections_IEnumerator_o *v77; // x0

  v3 = auraEffectList;
  v4 = this;
  if ( (byte_4B19023 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Remove_int__GameObject___, auraEffectList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AuraEffectMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Except_int___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v19, v20);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_BattleActorControl___c__updateAura_b__332_0__, v33, v34);
    this = (BattleActorControl_o *)sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v35, v36);
    byte_4B19023 = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_63;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_63;
  this = (BattleActorControl_o *)BattleBuffData__GetIgnoreAuraBuffIds((BattleBuffData_o *)this, 0LL);
  if ( !this )
    goto LABEL_16;
  v40 = v4->fields.battleSvtData;
  if ( !v40 )
    goto LABEL_63;
  buffData = v40->fields.buffData;
  if ( !buffData )
    goto LABEL_63;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v40->fields.buffData, 0LL);
  if ( !BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL) )
  {
LABEL_16:
    v54 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      auraEffectList,
                                                      v38,
                                                      v39);
    System_Collections_Generic_List_int____ctor(
      v54,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( v3 )
      {
        v55 = *(_QWORD *)&v3->max_length;
        v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        if ( (int)v55 >= 1 )
        {
          v57 = 0LL;
          while ( v57 < (unsigned int)v55 )
          {
            if ( !v56 )
              goto LABEL_63;
            this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v56,
                                             v3->m_Items[v57 + 1],
                                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v54 )
                goto LABEL_63;
              auraEffectList = (System_Int32_array *)*((unsigned int *)&this->fields.UnityEngine_Behaviour_Fields + 1);
              items = v54->fields._items;
              v59 = Method_System_Collections_Generic_List_int__Add__;
              ++v54->fields._version;
              if ( !items )
                goto LABEL_63;
              size = v54->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v54,
                  (int32_t)auraEffectList,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
              }
              else
              {
                v54->fields._size = size + 1;
                items->m_Items[size + 1] = (int)auraEffectList;
              }
            }
            LODWORD(v55) = v3->max_length;
            if ( (__int64)++v57 >= (int)v55 )
              goto LABEL_29;
          }
          goto LABEL_64;
        }
LABEL_29:
        this = (BattleActorControl_o *)v4->fields.auraList;
        if ( this )
        {
          Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)this,
                   (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
          v63 = System_Linq_Enumerable__Except_int_(
                  v62,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                  (const MethodInfo_2F31CA8 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v63,
                                           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
            v65 = this;
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v66 = 0LL;
              while ( v66 < (unsigned int)m_CancellationTokenSource )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                v67 = *((_DWORD *)&v65->fields.actorObject + v66);
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                         v67,
                         (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
                {
                  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v4,
                                                   0LL);
                  if ( !this )
                    goto LABEL_63;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_67;
                  if ( !Item )
                    goto LABEL_63;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)Item,
                                                   0LL);
                  if ( !this )
                    goto LABEL_63;
                  activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(
                                        (UnityEngine_GameObject_o *)this,
                                        0LL);
                  if ( activeInHierarchy )
                  {
                    v72 = BattleActorControl__DestroyAuraEffect(
                            (BattleActorControl_o *)activeInHierarchy,
                            (UnityEngine_GameObject_o *)Item,
                            v71);
                    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v4, v72, 0LL);
                  }
                  else
                  {
LABEL_67:
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, auraEffectList);
                    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                System_Collections_Generic_Dictionary_int__object___Remove(
                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                  v67,
                  (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                 (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v4->fields._currentPriority_k__BackingField = 0;
                LODWORD(m_CancellationTokenSource) = v65->fields.m_CancellationTokenSource;
                if ( (__int64)++v66 >= (int)m_CancellationTokenSource )
                  goto LABEL_52;
              }
              goto LABEL_64;
            }
LABEL_52:
            this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
            if ( this )
            {
              this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v73 = *(_QWORD *)&v3->max_length;
              if ( (int)v73 < 1 )
                return;
              v74 = 0LL;
              while ( v74 < (unsigned int)v73 )
              {
                if ( !v56 )
                  goto LABEL_63;
                this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v56,
                                                 v3->m_Items[v74 + 1],
                                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  v76 = (int32_t)this->fields.m_CancellationTokenSource;
                  if ( v4->fields._currentPriority_k__BackingField <= v76 )
                  {
                    v77 = BattleActorControl__coAddAura(
                            v4,
                            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
                            v76,
                            v75);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v77,
                                                     0LL);
                  }
                }
                LODWORD(v73) = v3->max_length;
                if ( (__int64)++v74 >= (int)v73 )
                  return;
              }
LABEL_64:
              sub_1BCAA44(this, auraEffectList);
            }
          }
        }
      }
    }
LABEL_63:
    sub_1BCAA3C(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v44 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo, auraEffectList);
    v44 = BattleActorControl___c_TypeInfo;
  }
  _9__332_0 = (System_Func_T__TResult__o *)v44->static_fields->__9__332_0;
  if ( !_9__332_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44, auraEffectList);
      v44 = BattleActorControl___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__332_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                               System_Func_KeyValuePair_int__GameObject___bool__TypeInfo,
                                               auraEffectList,
                                               v38,
                                               v39);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__332_0,
      v46,
      Method_BattleActorControl___c__updateAura_b__332_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__332_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__332_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__332_0,
      (int64_t)_9__332_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__332_0,
    (const MethodInfo_2F01EAC *)Method_BasicHelper_Remove_int__GameObject___);
}


void __fastcall BattleActorControl__updateBuffIcon(
        BattleActorControl_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActorControl_o *v3; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v5; // x20
  unsigned __int64 v6; // x21
  struct BattlePerformance_o *performance; // x8

  if ( !actionData )
    goto LABEL_12;
  v3 = this;
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, 0LL);
  if ( !this )
    goto LABEL_12;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCAA44(this, actionData);
      performance = v3->fields.performance;
      if ( !performance )
        break;
      this = (BattleActorControl_o *)performance->fields.data;
      if ( !this )
        break;
      this = (BattleActorControl_o *)BattleData__getServantData(
                                       (BattleData_o *)this,
                                       *((_DWORD *)&v5->fields.actorObject + v6),
                                       0LL);
      if ( this )
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      if ( (__int64)++v6 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_12:
    sub_1BCAA3C(this, actionData);
  }
}


void __fastcall BattleActorControl__updateBuffLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_object__o *EffectBuffList; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_int__o *v44; // x20
  int32_t v45; // w23
  BuffEntity_o *Entity; // x24
  const MethodInfo *v47; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v52; // x24
  unsigned int v53; // w28
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v55; // x0
  __int64 v56; // x1
  int32_t current; // w21
  const MethodInfo *v58; // x2
  System_Collections_IEnumerator_o *v59; // x1
  System_Collections_Generic_List_Enumerator_int__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v61; // [xsp+20h] [xbp-A0h] BYREF

  v3 = this;
  if ( (byte_4B19034 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76906200, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v34, v35);
    this = (BattleActorControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    byte_4B19034 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  battleSvtData = v3->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_37;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_37;
  EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
  v44 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v41,
                                                    v42,
                                                    v43);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EffectBuffList )
    goto LABEL_37;
  if ( EffectBuffList->fields._size >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___get_Item(
                                       EffectBuffList,
                                       v45,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !this )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 this->fields.m_CachedPtr,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v3, Entity, v47);
      if ( !Entity || !v44 )
        goto LABEL_37;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v44,
                                       Entity->fields.effectId,
                                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        method = (const MethodInfo *)(unsigned int)Entity->fields.effectId;
        items = v44->fields._items;
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++v44->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v44->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v44,
            (int32_t)method,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v44->fields._size = size + 1;
          items->m_Items[size + 1] = (int)method;
        }
        this = (BattleActorControl_o *)v3->fields.buffLoopEffectDict;
        if ( !this )
          goto LABEL_37;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               Entity->fields.effectId,
               (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
        {
          this = (BattleActorControl_o *)v3->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76906200);
          if ( !this )
            goto LABEL_37;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v52 = this;
          if ( m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_28:
      if ( ++v45 >= EffectBuffList->fields._size )
        goto LABEL_29;
    }
    v53 = 0;
    while ( 1 )
    {
      if ( v53 >= m_CancellationTokenSource )
        sub_1BCAA44(this, method);
      this = (BattleActorControl_o *)*((_QWORD *)&v52->fields.actorObject + (int)v53);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v45 * 0.01) + -1.0,
        0LL);
      m_CancellationTokenSource = (int)v52->fields.m_CancellationTokenSource;
      if ( (int)++v53 >= m_CancellationTokenSource )
        goto LABEL_28;
    }
LABEL_37:
    sub_1BCAA3C(this, method);
  }
LABEL_29:
  this = (BattleActorControl_o *)v3->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_37;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v61,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v55 )
      break;
    if ( !v44 )
      sub_1BCAA3C(v55, v56);
    current = v61.fields._current;
    if ( !System_Collections_Generic_List_int___Contains(
            v44,
            v61.fields._current,
            (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v59 = BattleActorControl__DestroyEffectOnParticleStop(v3, current, v58);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v3, v59, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v61,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActorControl__updateDeadEffect(BattleActorControl_o *this, float val, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  UnityEngine_Object_o *gameObject; // x19
  void *ComponentsInChildren_object__49689332; // x0
  __int64 v23; // x1
  int v24; // w8
  _DWORD *v25; // x20
  unsigned int v26; // w22
  char *v27; // x8
  UnityEngine_Renderer_o *v28; // x21
  BattleActorControl_c *v29; // x0
  float defaultHeight; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  int v34; // w8
  _DWORD *v35; // x19
  unsigned int v36; // w23
  char *v37; // x8
  UnityEngine_Component_o *v38; // x20
  __int64 v39; // x8
  _QWORD *v40; // x21
  unsigned __int64 v41; // x28
  UnityEngine_Material_o *v42; // x22
  System_String_o *v43; // x1
  UnityEngine_Material_o *v44; // x0
  float v45; // s0
  float y; // s10
  float v47; // s11
  float v48; // s12
  UnityEngine_Bounds_o v49; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18FE2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl_TypeInfo, method, v3);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_16342/*"_ClipSharpnessY"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24923/*"weapon"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17528/*"body"*/, v18, v19);
    byte_4B18FE2 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  ComponentsInChildren_object__49689332 = (void *)UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__49689332 & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_44;
    ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !ComponentsInChildren_object__49689332 )
      goto LABEL_44;
    v24 = *((_DWORD *)ComponentsInChildren_object__49689332 + 6);
    v25 = ComponentsInChildren_object__49689332;
    if ( v24 >= 1 )
    {
      v26 = 0;
      while ( v26 < v24 )
      {
        v27 = (char *)&v25[2 * v26];
        v28 = (UnityEngine_Renderer_o *)*((_QWORD *)v27 + 4);
        if ( !v28 )
          goto LABEL_44;
        ComponentsInChildren_object__49689332 = UnityEngine_Renderer__get_material(
                                                  *((UnityEngine_Renderer_o **)v27 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__49689332 )
          goto LABEL_44;
        ComponentsInChildren_object__49689332 = (void *)UnityEngine_Material__HasProperty_70020424(
                                                          (UnityEngine_Material_o *)ComponentsInChildren_object__49689332,
                                                          (System_String_o *)StringLiteral_16346/*"_Color"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49689332 & 1) != 0 )
        {
          v29 = BattleActorControl_TypeInfo;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v23);
            v29 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v29->static_fields->defaultHeight;
          ComponentsInChildren_object__49689332 = UnityEngine_Renderer__get_material(v28, 0LL);
          if ( !ComponentsInChildren_object__49689332 )
            goto LABEL_44;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)ComponentsInChildren_object__49689332, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          ComponentsInChildren_object__49689332 = UnityEngine_Renderer__get_material(v28, 0LL);
          if ( !ComponentsInChildren_object__49689332 )
            goto LABEL_44;
          v51.fields.a = 1.0 - (float)(val / defaultHeight);
          v51.fields.r = r;
          v51.fields.g = g;
          v51.fields.b = b;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)ComponentsInChildren_object__49689332, v51, 0LL);
        }
        v24 = v25[6];
        if ( (int)++v26 >= v24 )
          goto LABEL_20;
      }
LABEL_45:
      sub_1BCAA44(ComponentsInChildren_object__49689332, v23);
    }
LABEL_20:
    ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !ComponentsInChildren_object__49689332 )
LABEL_44:
      sub_1BCAA3C(ComponentsInChildren_object__49689332, v23);
    v34 = *((_DWORD *)ComponentsInChildren_object__49689332 + 6);
    v35 = ComponentsInChildren_object__49689332;
    if ( v34 >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( v36 >= v34 )
          goto LABEL_45;
        v37 = (char *)&v35[2 * v36];
        v38 = (UnityEngine_Component_o *)*((_QWORD *)v37 + 4);
        if ( !v38 )
          goto LABEL_44;
        ComponentsInChildren_object__49689332 = UnityEngine_Renderer__get_materials(
                                                  *((UnityEngine_Renderer_o **)v37 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__49689332 )
          goto LABEL_44;
        v39 = *((_QWORD *)ComponentsInChildren_object__49689332 + 3);
        v40 = ComponentsInChildren_object__49689332;
        if ( (int)v39 >= 1 )
          break;
LABEL_42:
        v34 = v35[6];
        if ( (int)++v36 >= v34 )
          return;
      }
      v41 = 0LL;
      while ( v41 < (unsigned int)v39 )
      {
        v42 = (UnityEngine_Material_o *)v40[v41 + 4];
        ComponentsInChildren_object__49689332 = UnityEngine_Component__get_gameObject(v38, 0LL);
        if ( !ComponentsInChildren_object__49689332 )
          goto LABEL_44;
        ComponentsInChildren_object__49689332 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__49689332,
                                                  0LL);
        if ( !ComponentsInChildren_object__49689332 )
          goto LABEL_44;
        ComponentsInChildren_object__49689332 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__49689332,
                                                          (System_String_o *)StringLiteral_17528/*"body"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49689332 & 1) != 0 )
          goto LABEL_35;
        ComponentsInChildren_object__49689332 = UnityEngine_Component__get_gameObject(v38, 0LL);
        if ( !ComponentsInChildren_object__49689332 )
          goto LABEL_44;
        ComponentsInChildren_object__49689332 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__49689332,
                                                  0LL);
        if ( !ComponentsInChildren_object__49689332 )
          goto LABEL_44;
        ComponentsInChildren_object__49689332 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__49689332,
                                                          (System_String_o *)StringLiteral_24923/*"weapon"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49689332 & 1) != 0 )
        {
LABEL_35:
          if ( !v42 )
            goto LABEL_44;
          v43 = (System_String_o *)StringLiteral_16342/*"_ClipSharpnessY"*/;
          v44 = v42;
          v45 = val;
        }
        else
        {
          UnityEngine_Renderer__get_localBounds(&v49, (UnityEngine_Renderer_o *)v38, 0LL);
          y = v49.fields.m_Center.fields.y;
          UnityEngine_Renderer__get_localBounds(&v49, (UnityEngine_Renderer_o *)v38, 0LL);
          v47 = v49.fields.m_Extents.fields.y;
          UnityEngine_Renderer__get_localBounds(&v49, (UnityEngine_Renderer_o *)v38, 0LL);
          ComponentsInChildren_object__49689332 = BattleActorControl_TypeInfo;
          v48 = v49.fields.m_Extents.fields.y;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo, v23);
          if ( !v42 )
            goto LABEL_44;
          v43 = (System_String_o *)StringLiteral_16342/*"_ClipSharpnessY"*/;
          v44 = v42;
          v45 = (float)(y - v47)
              + (float)((float)((float)((float)(v48 + v48) + 0.2)
                              / BattleActorControl_TypeInfo->static_fields->defaultHeight)
                      * val);
        }
        UnityEngine_Material__SetFloat(v44, v43, v45, 0LL);
        LODWORD(v39) = *((_DWORD *)v40 + 6);
        if ( (__int64)++v41 >= (int)v39 )
          goto LABEL_42;
      }
      goto LABEL_45;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__waitChangeApp(
        BattleActorControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1901C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl__waitChangeApp_d__324_TypeInfo, callback, method);
    byte_4B1901C = 1;
  }
  v6 = sub_1BCAA2C(BattleActorControl__waitChangeApp_d__324_TypeInfo, callback, method, v3);
  BattleActorControl__waitChangeApp_d__324___ctor((BattleActorControl__waitChangeApp_d__324_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_Queue_T__o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B1904F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, actor, method);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo, v10, v11);
    byte_4B1904F = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       actor,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._activeFsmNameList,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo,
                                                   v19,
                                                   v20,
                                                   v21);
  System_Collections_Generic_Queue_object____ctor(
    v22,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._callBackQueue, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleActor, (int64_t)actor, v29, v30, v31, v32, v33, v34);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *activeFsmNameList; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B19051 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, fsmName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v5, v6);
    byte_4B19051 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_object__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    goto LABEL_9;
  v7 = System_Collections_Generic_List_object___Contains(
         activeFsmNameList,
         (Il2CppObject *)fsmName,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
  if ( v7 )
    return;
  items = activeFsmNameList->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++activeFsmNameList->fields._version;
  if ( !items )
LABEL_9:
    sub_1BCAA3C(v7, v8);
  size = activeFsmNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      activeFsmNameList,
      (Il2CppObject *)fsmName,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    activeFsmNameList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)fsmName;
    sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)fsmName, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4B19053 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__, callBack, method);
    byte_4B19053 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1BCAA3C(0LL, v5);
  System_Collections_Generic_Queue_object___Enqueue(
    callBackQueue,
    (Il2CppObject *)callBack,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4B19054 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__, v4, v5);
    byte_4B19054 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v6);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1BCAA3C(0LL, v7);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_object___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_3714548 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
}


System_Collections_Generic_List_string__o *__fastcall BattleActorControl_ActorMotionActiveCheck__get_ActiveFsmNameList(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  return this->fields._activeFsmNameList;
}


System_Collections_Generic_Queue_BattleCallBackBase__o *__fastcall BattleActorControl_ActorMotionActiveCheck__get_CallBackQueue(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  return this->fields._callBackQueue;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_4B1904E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, method, v2);
    byte_4B1904E = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1BCAA3C(v4, v5);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x0

  if ( (byte_4B19052 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Remove__, fsmName, method);
    byte_4B19052 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1BCAA3C(0LL, v5);
  return System_Collections_Generic_List_object___Remove(
           (System_Collections_Generic_List_object__o *)activeFsmNameList,
           (Il2CppObject *)fsmName,
           (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_string__Remove__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B19050 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__, v4, v5);
    byte_4B19050 = 1;
  }
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_12;
  if ( this->fields.uniqueId == battleActor->fields.uniqueID )
  {
    wave = this->fields.wave;
    if ( wave == BattleActorControl__getWaveCount(battleActor, 0LL) )
      return;
    battleActor = this->fields.battleActor;
    if ( !battleActor )
      goto LABEL_12;
  }
  this->fields.uniqueId = battleActor->fields.uniqueID;
  battleActor = (BattleActorControl_o *)BattleActorControl__getWaveCount(battleActor, 0LL);
  activeFsmNameList = this->fields._activeFsmNameList;
  this->fields.wave = (int)battleActor;
  if ( !activeFsmNameList )
    goto LABEL_12;
  size = activeFsmNameList->fields._size;
  v10 = activeFsmNameList->fields._version + 1;
  activeFsmNameList->fields._size = 0;
  activeFsmNameList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)activeFsmNameList->fields._items, 0, size, 0LL);
  battleActor = (BattleActorControl_o *)this->fields._callBackQueue;
  if ( !battleActor )
LABEL_12:
    sub_1BCAA3C(battleActor, method);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)battleActor,
    (const MethodInfo_3714078 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl_EndCallEvent___ctor(
        BattleActorControl_EndCallEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A10320;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A1041C;
          else
            v13 = (Il2CppObject *)sub_1A103E0;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A1035C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A10330;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A10300;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A102B8;
}


System_IAsyncResult_o *__fastcall BattleActorControl_EndCallEvent__BeginInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = hash;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleActorControl_EndCallEvent__Invoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Hashtable_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    hash,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BattleActorControl_EventClass___ctor(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl_EventClass__Add(
        BattleActorControl_EventClass_o *this,
        System_String_o *key,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  void *klass; // x0
  PartyOrganizationUtility_o *p_table; // x21
  struct System_Collections_Hashtable_o *table; // t1
  System_Collections_Hashtable_o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1

  if ( (byte_4B1904D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, key, obj);
    byte_4B1904D = 1;
  }
  table = this->fields.table;
  p_table = (PartyOrganizationUtility_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, key, obj, method);
    System_Collections_Hashtable___ctor_62980980(v10, 0LL);
    p_table->klass = (PartyOrganizationUtility_c *)v10;
    sub_1BCA784(p_table, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_1BCAA3C(0LL, v17);
  }
  (*(void (__fastcall **)(void *, System_String_o *, Il2CppObject *, _QWORD))(*(_QWORD *)klass + 680LL))(
    klass,
    key,
    obj,
    *(_QWORD *)(*(_QWORD *)klass + 688LL));
}


void __fastcall BattleActorControl_EventClass__Proc(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  struct BattleActorControl_EndCallEvent_o *eventcall; // x8

  eventcall = this->fields.eventcall;
  if ( !eventcall )
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_Collections_Hashtable_o *, _QWORD))eventcall->fields.m_target)(
    eventcall->fields.original_method_info,
    this->fields.table,
    *(_QWORD *)&eventcall->fields.extra_arg);
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs___ctor(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4B1904C & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData, method);
    byte_4B1904C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1BCAA3C(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
  this->fields._dispLimitCount_k__BackingField = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  this->fields._overwriteSvtVoiceId_k__BackingField = svtData->fields.overwriteSvtVoiceId;
}


int32_t __fastcall BattleActorControl_ExtraLoadedVoiceArgs__get_dispLimitCount(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._dispLimitCount_k__BackingField;
}


int32_t __fastcall BattleActorControl_ExtraLoadedVoiceArgs__get_overwriteSvtVoiceId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._overwriteSvtVoiceId_k__BackingField;
}


int32_t __fastcall BattleActorControl_ExtraLoadedVoiceArgs__get_svtId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._svtId_k__BackingField;
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs__set_dispLimitCount(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._dispLimitCount_k__BackingField = value;
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs__set_overwriteSvtVoiceId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._overwriteSvtVoiceId_k__BackingField = value;
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs__set_svtId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._svtId_k__BackingField = value;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__333___ctor(
        BattleActorControl__DestroyAuraEffect_d__333_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__333__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__333_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__DestroyAuraEffect_d__333_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t _1__state; // w8
  __int64 v26; // x1
  Il2CppObject *Component_object; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  BattleActorControl__DestroyAuraEffect_d__333_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__333_o *v36; // x20
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  UnityEngine_ParticleSystem_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v57; // x8
  unsigned __int64 v58; // x22
  UnityEngine_Object_o *v59; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *effectObject; // x20
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__333_o *v64; // x20
  unsigned __int64 v65; // x24
  UnityEngine_Object_o *v66; // x21
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v68; // x8
  BattleActorControl__DestroyAuraEffect_d__333_o *v69; // x21
  unsigned __int64 v70; // x25
  UnityEngine_Object_o *v71; // x22
  UnityEngine_Object_o *v72; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v74; // 0:x0.8

  v8 = this;
  if ( (byte_4B1905F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_ParticleSystem___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76906208, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v21, v22);
    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    byte_4B1905F = 1;
  }
  m_ParticleSystem = 0LL;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)v8->fields.effectObject;
    v8->fields.__1__state = -1;
    if ( !this )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0LL,
                                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_90;
      if ( BYTE2(Component_object[2].monitor) )
      {
LABEL_60:
        effectObject = (UnityEngine_Object_o *)v8->fields.effectObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( !UnityEngine_Object__op_Equality(effectObject, 0LL, 0LL) )
        {
          this = (BattleActorControl__DestroyAuraEffect_d__333_o *)v8->fields.effectObject;
          if ( this )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__333_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       1,
                                                                       (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76906208);
            if ( this )
            {
              _2__current = this->fields.__2__current;
              v64 = this;
              if ( (int)_2__current >= 1 )
              {
                v65 = 0LL;
                while ( 1 )
                {
                  if ( v65 >= (unsigned int)_2__current )
                    goto LABEL_89;
                  v66 = (UnityEngine_Object_o *)*((_QWORD *)&v64->fields.effectObject + v65);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                  this = (BattleActorControl__DestroyAuraEffect_d__333_o *)UnityEngine_Object__op_Equality(
                                                                             v66,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v66 )
                      goto LABEL_90;
                    materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                      (UnityEngine_Renderer_o *)v66,
                                                                      0LL);
                    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__333_o *)UnityEngine_Renderer__get_materials(
                                                                                 (UnityEngine_Renderer_o *)v66,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_90;
                      v68 = this->fields.__2__current;
                      v69 = this;
                      if ( (int)v68 >= 1 )
                        break;
                    }
                  }
LABEL_84:
                  LODWORD(_2__current) = v64->fields.__2__current;
                  if ( (__int64)++v65 >= (int)_2__current )
                    goto LABEL_85;
                }
                v70 = 0LL;
                while ( v70 < (unsigned int)v68 )
                {
                  v71 = (UnityEngine_Object_o *)*((_QWORD *)&v69->fields.effectObject + v70);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                  this = (BattleActorControl__DestroyAuraEffect_d__333_o *)UnityEngine_Object__op_Equality(
                                                                             v71,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                    UnityEngine_Object__Destroy_70154244(v71, 0LL);
                  }
                  LODWORD(v68) = v69->fields.__2__current;
                  if ( (__int64)++v70 >= (int)v68 )
                    goto LABEL_84;
                }
LABEL_89:
                sub_1BCAA44(this, method);
              }
LABEL_85:
              v72 = (UnityEngine_Object_o *)v8->fields.effectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
              UnityEngine_Object__Destroy_70154244(v72, 0LL);
              return 0;
            }
          }
LABEL_90:
          sub_1BCAA3C(this, method);
        }
        return 0;
      }
    }
    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)v8->fields.effectObject;
    if ( !this )
      goto LABEL_90;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v8->fields._particleArray_5__2,
      (int64_t)ComponentsInChildren_object,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)v8->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_90;
    v8->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)BasicHelper__ExcludeNull_object_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    if ( !this )
      goto LABEL_90;
    klass = this->klass;
    v36 = this;
    v37 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_18;
      }
      v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_18:
      v39 = sub_1C1C7C0(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__333_o *, _QWORD))v39)(
            v36,
            *(_QWORD *)(v39 + 8));
    if ( !v41 )
      sub_1BCAA3C(0LL, v40);
    while ( 1 )
    {
      v42 = *(_QWORD *)v41;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_26;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_26:
        v45 = sub_1C1C7C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
        break;
      v46 = *(_QWORD *)v41;
      v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v48 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_33;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_33:
        v49 = sub_1C1C7C0(v41, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
      }
      v50 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
      if ( !v50 )
        sub_1BCAA3C(0LL, v51);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v50, 0LL).fields.m_ParticleSystem;
      v74.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v74, 0, 0LL);
    }
    v52 = *(_QWORD *)v41;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_41;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_41:
      v55 = sub_1C1C7C0(v41, System_IDisposable_TypeInfo, 0LL);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__333_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(
                                                               v41,
                                                               *(_QWORD *)(v55 + 8));
  }
  if ( v8->fields._aliveCount_5__3 <= 0 )
  {
    v8->fields._particleArray_5__2 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._particleArray_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_60;
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_90;
  v57 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v57 >= 1 )
  {
    v58 = 0LL;
    while ( v58 < (unsigned int)v57 )
    {
      v59 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v58];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleActorControl__DestroyAuraEffect_d__333_o *)UnityEngine_Object__op_Equality(v59, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v59 )
          goto LABEL_90;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v59, 0LL) )
          UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)v59, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__333_o *)UnityEngine_ParticleSystem__IsAlive_70434960(
                                                                   (UnityEngine_ParticleSystem_o *)v59,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v8->fields._aliveCount_5__3;
      }
      LODWORD(v57) = particleArray_5__2->max_length;
      if ( (__int64)++v58 >= (int)v57 )
        goto LABEL_58;
    }
    goto LABEL_89;
  }
LABEL_58:
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__333__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__333_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__333__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__333_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__DestroyAuraEffect_d__333_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__333__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__333_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__333__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__333_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__359___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__359_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__359__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__359_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__DestroyEffectOnParticleStop_d__359_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int aliveCount_5__3; // w8
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x22
  UnityEngine_Object_o *v29; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4B19060 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192, v11, v12);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)sub_1BCA7E0(
                                                                         &UnityEngine_Object_TypeInfo,
                                                                         v13,
                                                                         v14);
    byte_4B19060 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    aliveCount_5__3 = v8->fields._aliveCount_5__3;
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    p_particleArray_5__2 = &v8->fields._particleArray_5__2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v8->fields._particleArray_5__2,
      (int64_t)ComponentsInChildren_object,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( !v8->fields._particleArray_5__2 )
      goto LABEL_32;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !this )
      goto LABEL_35;
    if ( BYTE2(this->fields.key) )
    {
LABEL_32:
      BattleActorControl__DestroyLoopEffect(_4__this, v8->fields.key, 0LL);
      return 0;
    }
    if ( !*p_particleArray_5__2 )
      goto LABEL_35;
    aliveCount_5__3 = (*p_particleArray_5__2)->max_length;
    v8->fields._aliveCount_5__3 = aliveCount_5__3;
  }
  if ( aliveCount_5__3 <= 0 )
  {
    if ( _4__this )
      goto LABEL_32;
LABEL_35:
    sub_1BCAA3C(this, method);
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_35;
  v27 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)v27 )
        sub_1BCAA44(this, method);
      v29 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v28];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v29 )
          goto LABEL_35;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v29, 0LL) )
          UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)v29, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__359_o *)UnityEngine_ParticleSystem__IsAlive_70434960(
                                                                             (UnityEngine_ParticleSystem_o *)v29,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v8->fields._aliveCount_5__3;
      }
      LODWORD(v27) = particleArray_5__2->max_length;
      ++v28;
    }
    while ( (__int64)v28 < (int)v27 );
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__359__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__359_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__359__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__359_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleActorControl__DestroyEffectOnParticleStop_d__359_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__359__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__359_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__359__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__359_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v28; // x0
  struct BattlePerformance_o *v29; // x8
  __int64 v30; // x2
  BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *v31; // x20
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  BattleServantData_o *v34; // x20
  int v35; // w21
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *v37; // x20
  unsigned __int64 v38; // x26
  __int64 v39; // x1
  BattleActorControl_o *ServantActor; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  Il2CppObject *Instance; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_object__o *v47; // x21
  struct BattlePerformance_o *v48; // x8
  int i_5__2; // w8
  PartyOrganizationUtility_o *v50; // x20
  UnityEngine_WaitForEndOfFrame_o *v51; // x19
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int v59; // [xsp+Ch] [xbp-54h] BYREF

  v8 = this;
  if ( (byte_4B19061 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_USSequencer__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__, v9, v10);
    sub_1BCA7E0(&BattlePerformance_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_13437/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v19, v20);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v21, v22);
    byte_4B19061 = 1;
  }
  v59 = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleServantData__IsTDAppearance(
                                                                         (BattleServantData_o *)this,
                                                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          battleSvtData = _4__this->fields.battleSvtData;
          if ( !battleSvtData )
            goto LABEL_55;
          battleSvtData->fields.dressDispId = -1;
          battleSvtData->fields.isForceAppearance = 0;
        }
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              _4__this->fields.backupFov = performance->fields.currentFov;
              v28 = BattlePerformance_TypeInfo;
              if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, method);
                v28 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(performance, v28->static_fields->DefaultFov, 0LL);
              v29 = _4__this->fields.performance;
              if ( v29 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)v29->fields.actorcamera;
                if ( this )
                {
                  this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
                  v31 = this;
                  if ( !byte_4B109C1 )
                  {
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)sub_1BCA7E0(
                                                                                     &UnityEngine_Vector3_TypeInfo,
                                                                                     method,
                                                                                     v30);
                    byte_4B109C1 = 1;
                  }
                  if ( v31 )
                  {
                    UnityEngine_Transform__set_localEulerAngles(
                      (UnityEngine_Transform_o *)v31,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0LL);
                    v59 = 1;
                    v32 = System_Int32__ToString((int32_t)&v59, 0LL);
                    v33 = System_String__Concat_62401220((System_String_o *)StringLiteral_13437/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v32, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ConstantMaster__getValue(v33, 0LL);
                    v34 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_43:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v34 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v34->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v34,
                          this,
                          _4__this,
                          v34->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v47 = (System_Action_object__o *)sub_1BCAA2C(System_Action_USSequencer__TypeInfo, v44, v45, v46);
                        System_Action_object____ctor(
                          v47,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          0LL);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v47,
                            0LL);
                          v48 = _4__this->fields.performance;
                          if ( v48 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)v48->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleData__getStageEntity(
                                                                                               (BattleData_o *)this,
                                                                                               0LL);
                              if ( this )
                              {
                                if ( StageEntity__Is3_6BossBattle((StageEntity_o *)this, 0LL) )
                                {
                                  BattleActorControl__ChangeRotationEnemy(_4__this, 0, 0LL);
                                  BattleActorControl__ChangeAnimationCurveEnemy(_4__this, 0, 0LL);
                                }
                                return 0;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v35 = (int)this;
                      while ( 1 )
                      {
                        if ( !v34 )
                          goto LABEL_55;
                        if ( v35 == BattleServantData__getSvtId(v34, 0LL) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_55;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_55;
                          _2__current = this->fields.__2__current;
                          v37 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_42:
                        ++v59;
                        v41 = System_Int32__ToString((int32_t)&v59, 0LL);
                        v42 = System_String__Concat_62401220((System_String_o *)StringLiteral_13437/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v41, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ConstantMaster__getValue(
                                                                                         v42,
                                                                                         0LL);
                        v34 = _4__this->fields.battleSvtData;
                        v35 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_43;
                      }
                      v38 = 0LL;
                      while ( 1 )
                      {
                        if ( v38 >= (unsigned int)_2__current )
                          sub_1BCAA44(this, method);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v37->fields.__4__this + v38),
                                         0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[17].fields._i_5__2) )
                          {
                            LOWORD(this[17].fields._i_5__2) = 256;
                            BattleActorControl__playAnimation_44433272(
                              ServantActor,
                              (System_String_o *)StringLiteral_24854/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_44433272(
                              ServantActor,
                              (System_String_o *)StringLiteral_24854/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v37->fields.__2__current;
                        if ( (__int64)++v38 >= (int)_2__current )
                          goto LABEL_42;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_55:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v8->fields._i_5__2;
    v8->fields.__1__state = -1;
    v8->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 < 3 )
      goto LABEL_52;
    v51 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v51, 0LL);
    v8->fields.__2__current = (Il2CppObject *)v51;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(p__2__current, (int64_t)v51, v53, v54, v55, v56, v57, v58);
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
    return 1;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v8->fields._i_5__2 = 0;
LABEL_52:
      v8->fields.__2__current = 0LL;
      v50 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v50, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&v50[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleActorControl__WaitToNoblePhantasmPlay_d__269_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19055 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActorControl___c_TypeInfo, v1, v2);
    byte_4B19055 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleActorControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleActorControl___c_TypeInfo->static_fields->__9 = (struct BattleActorControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleActorControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleActorControl___c___EnumerateMaterials_b__294_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__138_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleActorAnimationEffect__get_TriggerKey(x, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__138_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B19057 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1BCA7E0(
                                         &System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo,
                                         x,
                                         method);
    byte_4B19057 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_string__BattleActorAnimationEffect__c **)p_offset - 1) != System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__138_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_4B19058 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, x, method);
    byte_4B19058 = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_object_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__194_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__372_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isSaveAnimation;
}


void __fastcall BattleActorControl___c___ResetAddColorOfMaterials_b__295_0(
        BattleActorControl___c_o *this,
        UnityEngine_Material_o *x,
        const MethodInfo *method)
{
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19059 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, x, method);
    byte_4B19059 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  v4.fields.r = 0.0;
  v4.fields.g = 0.0;
  v4.fields.b = 0.0;
  v4.fields.a = 0.0;
  UnityEngine_Material__SetColor(x, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v4, 0LL);
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__373_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__373_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__137_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  BattleActorControl___c_o *v6; // x20

  if ( (byte_4B19056 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, x, method);
    this = (BattleActorControl___c_o *)sub_1BCA7E0(&StringLiteral_17528/*"body"*/, v4, v5);
    byte_4B19056 = 1;
  }
  if ( !x )
    goto LABEL_14;
  this = (BattleActorControl___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !this )
    goto LABEL_14;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL)
    && UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x, 0LL) )
  {
    this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
    v6 = this;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, x);
    if ( !v6 )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)v6, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    {
      this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
      if ( this )
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17528/*"body"*/, 0LL);
LABEL_14:
      sub_1BCAA3C(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__332_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1
  __int64 v5; // x2

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4B1905A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__,
      *(_QWORD *)&x.fields.key,
      x.fields.value);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1905A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&x.fields.key);
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__290_object____cctor(const MethodInfo_30D646C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 klass; // x0
  __int64 v6; // x0
  Il2CppObject *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1C6BC();
  v6 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1C6BC();
  v7 = (Il2CppObject *)sub_1BCAA2C(v6, v1, v2, v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1C6BC();
  System_Object___ctor(v7, 0LL);
  v14 = (__int64)method->klass;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC();
  **(_QWORD **)(v15 + 184) = v7;
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC();
  sub_1BCA784(*(PartyOrganizationUtility_o **)(v17 + 184), (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BattleActorControl___c__290_object____ctor(
        BattleActorControl___c__290_T__o *this,
        const MethodInfo_30D6528 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__290_object____UpdateMaterialsOnRenderders_b__290_0(
        BattleActorControl___c__290_T__o *this,
        Il2CppObject *x,
        const MethodInfo_30D6530 *method)
{
  if ( (byte_4B1BCA1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1BCA1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__290_object____UpdateMaterialsOnRenderders_b__290_1(
        BattleActorControl___c__290_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_30D658C *method)
{
  if ( (byte_4B1BCA2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1BCA2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass137_0___ctor(
        BattleActorControl___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass137_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_1BCAA3C(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass138_0___ctor(
        BattleActorControl___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass138_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass138_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_1BCAA3C(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass166_0___ctor(
        BattleActorControl___c__DisplayClass166_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass166_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass166_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL8 v11; // x0
  __int64 v12; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  System_Object_array *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1905B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_FsmTransition___, fsm, method);
    sub_1BCA7E0(&System_Func_FsmTransition__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__1__, v9, v10);
    byte_4B1905B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, fsm);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v11 )
    return 0;
  if ( !fsm )
    sub_1BCAA3C(v11, v12);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v18 = (System_Object_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_1BCAA2C(
                                                           System_Func_FsmTransition__bool__TypeInfo,
                                                           v14,
                                                           v15,
                                                           v16);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v19, v20, v21, v22, v23, v24);
  }
  return BasicHelper__Any_object__49274176(
           v18,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass166_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass166_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass264_0___ctor(
        BattleActorControl___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass264_0___GetServantObjectVisibleControlActor_b__0(
        BattleActorControl___c__DisplayClass264_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass264_0_o *v4; // x19
  struct BattleActorControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *targets; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  BattleActorControl___c__DisplayClass264_0_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4B1905C & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass264_0_o *)sub_1BCA7E0(
                                                            &Method_System_Collections_Generic_List_GameObject__Add__,
                                                            *(_QWORD *)&x,
                                                            method);
    byte_4B1905C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattleActorControl___c__DisplayClass264_0_o *)_4__this->fields.performance) == 0LL
    || (targets = (System_Collections_Generic_List_object__o *)v4->fields.targets,
        this = (BattleActorControl___c__DisplayClass264_0_o *)BattlePerformance__getServantGameObject(
                                                                (BattlePerformance_o *)this,
                                                                x,
                                                                0LL),
        !targets)
    || (items = targets->fields._items,
        v14 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++targets->fields._version,
        !items) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&x);
  }
  size = targets->fields._size;
  v16 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      targets,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    targets->fields._size = size + 1;
    v17 = &items->obj.klass + size;
    v17[4] = (Il2CppClass *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)v16, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall BattleActorControl___c__DisplayClass277_0___ctor(
        BattleActorControl___c__DisplayClass277_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass277_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass277_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl___c__DisplayClass277_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v10; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v12; // x20
  int32_t shadowEffectId; // w22
  BattleActorControl___c__DisplayClass277_0_o *v14; // x21
  BattleActorControl___c__DisplayClass277_0_o *v15; // x23
  int32_t v16; // w24
  __int64 v17; // x1
  int32_t LimitCount; // w25
  UnityEngine_GameObject_o *EffectToNode_43453556; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattleActorControl_o *v26; // x8
  UnityEngine_Object_o *v27; // x20
  struct BattleActorControl_o *v28; // x8
  __int64 v29; // x2
  BattleActorControl___c__DisplayClass277_0_o *v30; // x20
  struct BattleActorControl_o *v31; // x8
  __int64 v32; // x2
  BattleActorControl___c__DisplayClass277_0_o *v33; // x20
  struct BattleActorControl_o *v34; // x8
  __int64 v35; // x2
  BattleActorControl___c__DisplayClass277_0_o *v36; // x20
  struct BattleActorControl_o *v37; // x8

  v3 = this;
  if ( (byte_4B1905D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, method, v2);
    this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1905D = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  shadowObj = (UnityEngine_Object_o *)_4__this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    this = (BattleActorControl___c__DisplayClass277_0_o *)v3->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v10 = v3->fields.__4__this;
      if ( !v10 )
        goto LABEL_46;
      if ( v10->fields.currentSpShadowEffectId == v3->fields.shadowEffectId )
      {
        specialShadowObj = (UnityEngine_Object_o *)v10->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v12 = v3->fields.__4__this;
          if ( !v12 )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass277_0_o *)v12->fields.shadowObj;
          if ( !this )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v3->fields.__4__this )
            goto LABEL_46;
          shadowEffectId = v3->fields.shadowEffectId;
          v14 = this;
          this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v3->fields.__4__this,
                                                                  0LL);
          if ( !v3->fields.__4__this )
            goto LABEL_46;
          v15 = this;
          this = (BattleActorControl___c__DisplayClass277_0_o *)BattleActorControl__getActorSvtId(
                                                                  v3->fields.__4__this,
                                                                  0LL);
          if ( !v3->fields.__4__this )
            goto LABEL_46;
          v16 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v3->fields.__4__this, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v17);
          EffectToNode_43453556 = BattleEffectUtility__loadEffectToNode_43453556(
                                    (UnityEngine_GameObject_o *)v14,
                                    shadowEffectId,
                                    (UnityEngine_GameObject_o *)v15,
                                    v16,
                                    LimitCount,
                                    0LL);
          v12->fields.specialShadowObj = EffectToNode_43453556;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v12->fields.specialShadowObj,
            (int64_t)EffectToNode_43453556,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v26 = v3->fields.__4__this;
          if ( !v26 )
            goto LABEL_46;
          v27 = (UnityEngine_Object_o *)v26->fields.specialShadowObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v28 = v3->fields.__4__this;
            if ( v28 )
            {
              this = (BattleActorControl___c__DisplayClass277_0_o *)v28->fields.specialShadowObj;
              if ( this )
              {
                this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
                v30 = this;
                if ( !byte_4B109C1 )
                {
                  this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1BCA7E0(
                                                                          &UnityEngine_Vector3_TypeInfo,
                                                                          method,
                                                                          v29);
                  byte_4B109C1 = 1;
                }
                if ( v30 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v30,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  v31 = v3->fields.__4__this;
                  if ( v31 )
                  {
                    this = (BattleActorControl___c__DisplayClass277_0_o *)v31->fields.specialShadowObj;
                    if ( this )
                    {
                      this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
                      v33 = this;
                      if ( !byte_4B109C7 )
                      {
                        this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1BCA7E0(
                                                                                &UnityEngine_Quaternion_TypeInfo,
                                                                                method,
                                                                                v32);
                        byte_4B109C7 = 1;
                      }
                      if ( v33 )
                      {
                        UnityEngine_Transform__set_localRotation(
                          (UnityEngine_Transform_o *)v33,
                          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                          0LL);
                        v34 = v3->fields.__4__this;
                        if ( v34 )
                        {
                          this = (BattleActorControl___c__DisplayClass277_0_o *)v34->fields.specialShadowObj;
                          if ( this )
                          {
                            this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                            v36 = this;
                            if ( !byte_4B109C6 )
                            {
                              this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1BCA7E0(
                                                                                      &UnityEngine_Vector3_TypeInfo,
                                                                                      method,
                                                                                      v35);
                              byte_4B109C6 = 1;
                            }
                            if ( v36 )
                            {
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)v36,
                                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                                0LL);
                              v37 = v3->fields.__4__this;
                              if ( v37 )
                              {
                                this = (BattleActorControl___c__DisplayClass277_0_o *)v37->fields.specialShadowObj;
                                if ( this )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_46:
            sub_1BCAA3C(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass289_0___ctor(
        BattleActorControl___c__DisplayClass289_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass289_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass289_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass289_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1905E & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass289_0_o *)sub_1BCA7E0(&StringLiteral_16709/*"_fade"*/, material, method);
    byte_4B1905E = 1;
  }
  if ( !material )
    sub_1BCAA3C(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16709/*"_fade"*/, v4->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass331_0___ctor(
        BattleActorControl___c__DisplayClass331_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass331_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass331_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass372_0___ctor(
        BattleActorControl___c__DisplayClass372_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass372_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass372_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass372_0_o *)this->fields.component) == 0LL )
    sub_1BCAA3C(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass375_0___ctor(
        BattleActorControl___c__DisplayClass375_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass375_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass375_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass375_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass375_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__331___ctor(
        BattleActorControl__coAddAura_d__331_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__331__MoveNext(
        BattleActorControl__coAddAura_d__331_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__coAddAura_d__331_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  __int64 v47; // x1
  Il2CppObject *Item; // x21
  Il2CppObject *Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  int64_t v58; // x2
  __int64 v59; // x3
  Il2CppObject *v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x2
  __int64 v68; // x3
  struct BattleActorControl___c__DisplayClass331_0_o *_8__1; // x22
  int32_t id; // w21
  System_Action_o *v71; // x23
  __int64 v72; // x1
  BattlePerformance_o *v73; // x22
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  PartyOrganizationUtility_o *v80; // x19
  bool result; // w0
  struct BattleActorControl___c__DisplayClass331_0_o *v82; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *v95; // x8
  int64_t Empty; // x1
  int v97; // w22
  int32_t WeaponGroup; // w0
  Il2CppObject *v99; // x22
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  BattleEffectUtility_BuffEffectLoadArgument_o *v108; // x21
  UnityEngine_GameObject_o *actorObject; // x22
  int32_t auraEffectId; // w23
  __int64 v111; // x1
  __int64 v112; // x2
  UnityEngine_GameObject_o *gameObject; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  __int64 v119; // x1
  int32_t LimitCount; // w26
  __int64 v121; // x1
  UnityEngine_Object_o *EffectToNode; // x21
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  __int64 v129; // x1
  UnityEngine_Object_o *Component_object; // x22
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattleActorControl_o *actorcamera; // x1
  Il2CppObject *v139; // x0
  int32_t v140; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t EffectFolder; // [xsp+8h] [xbp-68h] BYREF
  int32_t v142; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4B19062 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v21, v22);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_BillBoard___, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&string_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_BattleActorControl___c__DisplayClass331_0__coAddAura_b__0__, v37, v38);
    sub_1BCA7E0(&BattleActorControl___c__DisplayClass331_0_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_5979/*"Effect/weapon/{0}"*/, v41, v42);
    this = (BattleActorControl__coAddAura_d__331_o *)sub_1BCA7E0(&StringLiteral_5982/*"Effect/weapon/{0}/{1}"*/, v43, v44);
    byte_4B19062 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_65;
    this = (BattleActorControl__coAddAura_d__331_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v8->fields.auraEffectId,
           (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__331_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_65;
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               v8->fields.auraEffectId,
               (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__331_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_65;
    this = (BattleActorControl__coAddAura_d__331_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_65;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v8->fields.auraEffectId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    v8->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    p_effectEntity_5__2 = &v8->fields._effectEntity_5__2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v8->fields._effectEntity_5__2,
      (int64_t)Entity,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    if ( !v8->fields._effectEntity_5__2 )
    {
LABEL_41:
      v108 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1BCAA2C(
                                                               BattleEffectUtility_BuffEffectLoadArgument_TypeInfo,
                                                               v57,
                                                               v58,
                                                               v59);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v108, _4__this, 0LL);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = v8->fields.auraEffectId;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( !byte_4B109C1 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v111, v112);
          byte_4B109C1 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->zeroVector.fields.x;
        y = static_fields->zeroVector.fields.y;
        z = static_fields->zeroVector.fields.z;
        ActorSvtId = BattleActorControl__getActorSvtId(_4__this, 0LL);
        LimitCount = BattleActorControl__getLimitCount(_4__this, 0LL);
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v119);
        v143.fields.x = x;
        v143.fields.y = y;
        v143.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v143,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v108,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v121);
        this = (BattleActorControl__coAddAura_d__331_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_61;
        if ( v8->fields.priority > _4__this->fields._currentPriority_k__BackingField )
        {
          BattleActorControl__resetAura(_4__this, 0LL);
          _4__this->fields._currentPriority_k__BackingField = v8->fields.priority;
        }
        if ( EffectToNode )
        {
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)EffectToNode,
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v129);
          this = (BattleActorControl__coAddAura_d__331_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__331_o *)UnityEngine_GameObject__AddComponent_object_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_65;
            Component_object = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_65;
            actorcamera = (struct BattleActorControl_o *)performance->fields.actorcamera;
            this->fields.__4__this = actorcamera;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.__4__this,
              (int64_t)actorcamera,
              v131,
              v132,
              v133,
              v134,
              v135,
              v136);
          }
          else if ( !Component_object )
          {
            goto LABEL_65;
          }
          BillBoard__setFlip((BillBoard_o *)Component_object, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__331_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v8->fields.auraEffectId,
              (Il2CppObject *)EffectToNode,
              (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_61:
            v8->fields._effectEntity_5__2 = 0LL;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v8->fields._effectEntity_5__2,
              0LL,
              v123,
              v124,
              v125,
              v126,
              v127,
              v128);
            return 0;
          }
        }
      }
LABEL_65:
      sub_1BCAA3C(this, method);
    }
    v60 = (Il2CppObject *)sub_1BCAA2C(BattleActorControl___c__DisplayClass331_0_TypeInfo, v57, v58, v59);
    System_Object___ctor(v60, 0LL);
    v8->fields.__8__1 = (struct BattleActorControl___c__DisplayClass331_0_o *)v60;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v60, v61, v62, v63, v64, v65, v66);
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_65;
    _8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_65;
    id = (*p_effectEntity_5__2)->fields.id;
    v71 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v67, v68);
    System_Action___ctor(
      v71,
      (Il2CppObject *)_8__1,
      Method_BattleActorControl___c__DisplayClass331_0__coAddAura_b__0__,
      0LL);
    v73 = _4__this->fields.performance;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v72);
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v71, v73, 0LL);
  }
  this = (BattleActorControl__coAddAura_d__331_o *)&v8->fields.__8__1;
  v82 = v8->fields.__8__1;
  if ( !v82 )
    goto LABEL_65;
  if ( v82->fields.isLoading )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  v8->fields.__8__1 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
  effectEntity_5__2 = v8->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_41;
  v95 = string_TypeInfo->static_fields;
  Empty = (int64_t)v95->Empty;
  v8->fields._effectPath_5__3 = v95->Empty;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._effectPath_5__3, Empty, v58, v59, v90, v91, v92, v93);
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__331_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__331_o *)BattleServantData__getEffectFolder((BattleServantData_o *)this, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_65;
  v97 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v97 )
  {
    v142 = WeaponGroup;
    this = (BattleActorControl__coAddAura_d__331_o *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_65;
    v99 = (Il2CppObject *)this;
    EffectFolder = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EffectFolder);
    v101 = System_String__Format_62415592((System_String_o *)StringLiteral_5982/*"Effect/weapon/{0}/{1}"*/, v99, v100, 0LL);
  }
  else
  {
    v140 = WeaponGroup;
    v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140);
    v101 = System_String__Format((System_String_o *)StringLiteral_5979/*"Effect/weapon/{0}"*/, v139, 0LL);
  }
  v8->fields._effectPath_5__3 = v101;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v8->fields._effectPath_5__3,
    (int64_t)v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
LABEL_22:
  this = (BattleActorControl__coAddAura_d__331_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__331_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     v8->fields._effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8->fields.__2__current = 0LL;
    v80 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(v80, 0LL, v74, v75, v76, v77, v78, v79);
    *(_DWORD *)&v80[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__331_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.auraEffectId,
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v8->fields._effectPath_5__3 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._effectPath_5__3, 0LL, v84, v85, v86, v87, v88, v89);
    goto LABEL_41;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__331__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__331_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__331__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__331_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__coAddAura_d__331_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__331__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__331_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__331__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__331_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__338___ctor(
        BattleActorControl__colShiftServantChange_d__338_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServantChange_d__338__MoveNext(
        BattleActorControl__colShiftServantChange_d__338_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl__colShiftServantChange_d__338_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x0
  BattleActorControl__colShiftServantChange_d__338_o **p_fadeComp_5__2; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  DefCoroutine_c *v29; // x0
  int64_t milliSecTwo; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  PartyOrganizationUtility_o *v33; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // w8
  struct BattleActionData_ShiftServant_o *v41; // x8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct BattlePerformance_o *v66; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v68; // x8
  struct BattleData_o *data; // x8
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  UnityEngine_Object_o *actorObject; // x21
  __int64 v77; // x1
  Il2CppObject *v78; // x21
  System_Collections_Generic_List_int__o *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  __int64 v87; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B19063 & 1) == 0 )
  {
    sub_1BCA7E0(&DefCoroutine_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    this = (BattleActorControl__colShiftServantChange_d__338_o *)sub_1BCA7E0(
                                                                   &ServantAssetLoadManager_TypeInfo,
                                                                   v10,
                                                                   v11);
    byte_4B19063 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)v3->fields.shiftSvt;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__338_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                     this,
                                                                     _4__this->fields.battleSvtData,
                                                                     this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      shiftSvt = v3->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_78;
      if ( !shiftSvt->fields.isChange )
        goto LABEL_57;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)performance->fields.fadeObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v3->fields._fadeComp_5__2 = (struct NGUIFader_o *)Component_object;
      p_fadeComp_5__2 = (BattleActorControl__colShiftServantChange_d__338_o **)&v3->fields._fadeComp_5__2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v3->fields._fadeComp_5__2,
        (int64_t)Component_object,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      if ( !v3->fields.isShift )
        goto LABEL_13;
      this = *p_fadeComp_5__2;
      if ( !*p_fadeComp_5__2 )
        goto LABEL_78;
      v95.fields.r = 1.0;
      v95.fields.g = 1.0;
      v95.fields.b = 1.0;
      v95.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v95, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v29 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
        v29 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (int64_t)v29->static_fields->milliSecTwo;
      v3->fields.__2__current = (Il2CppObject *)milliSecTwo;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(p__2__current, milliSecTwo, v23, v24, v25, v26, v27, v28);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v3->fields.__2__current = 0LL;
      v33 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v33, 0LL, v34, v35, v36, v37, v38, v39);
      v40 = 2;
      goto LABEL_77;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      v41 = v3->fields.shiftSvt;
      if ( !v41 )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_42727244((BattlePerformance_o *)this, v41->fields.loadedAssetArgs, 0, 0LL);
      v3->fields.__2__current = 0LL;
      v33 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v33, 0LL, v42, v43, v44, v45, v46, v47);
      v40 = 3;
      goto LABEL_77;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_28:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      this = (BattleActorControl__colShiftServantChange_d__338_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        v33 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v33, 0LL, v48, v49, v50, v51, v52, v53);
        v40 = 4;
LABEL_77:
        *(_DWORD *)&v33[-1].fields._IsQuestStartMenuMode_k__BackingField = v40;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_78;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      v78 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.performance;
      if ( this )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v78, 0LL);
LABEL_71:
        v79 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        v3->fields._moveEffect_5__3 = v79;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v3->fields._moveEffect_5__3,
          (int64_t)v79,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
        BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
            sub_1BCAA44(this, method);
          this = (BattleActorControl__colShiftServantChange_d__338_o *)motionFSM->m_Items[0];
          if ( this )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87);
            UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
            v3->fields.__2__current = 0LL;
            v33 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
            sub_1BCA784(v33, 0LL, v89, v90, v91, v92, v93, v94);
            v40 = 5;
            goto LABEL_77;
          }
        }
      }
      goto LABEL_78;
    case 4:
      v3->fields.__1__state = -1;
      goto LABEL_28;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
LABEL_35:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      this = (BattleActorControl__colShiftServantChange_d__338_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        v33 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v33, 0LL, v54, v55, v56, v57, v58, v59);
        v40 = 6;
        goto LABEL_77;
      }
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !v3->fields.isShift )
        goto LABEL_45;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)v3->fields._fadeComp_5__2;
      if ( !this )
        goto LABEL_78;
      v96.fields.r = 1.0;
      v96.fields.g = 1.0;
      v96.fields.b = 1.0;
      v96.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v96, 0.2, 1, 0LL, 0, 0LL);
LABEL_45:
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_54;
      v66 = _4__this->fields.performance;
      if ( !v66 )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)v66->fields.data;
      if ( !this )
        goto LABEL_78;
      BattleData__replaceCommandCard(
        (BattleData_o *)this,
        battleSvtData->fields.uniqueId,
        battleSvtData->fields.uniqueId,
        0LL);
      v68 = _4__this->fields.performance;
      if ( !v68 )
        goto LABEL_78;
      data = v68->fields.data;
      if ( !data )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__338_o *)data->fields.logic;
      if ( !this )
        goto LABEL_78;
      BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
LABEL_54:
      if ( v3->fields._moveEffect_5__3 )
      {
        v3->fields.__2__current = 0LL;
        v33 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v33, 0LL, v60, v61, v62, v63, v64, v65);
        v40 = 7;
        goto LABEL_77;
      }
LABEL_56:
      v3->fields._fadeComp_5__2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._fadeComp_5__2, 0LL, v60, v61, v62, v63, v64, v65);
      v3->fields._moveEffect_5__3 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._moveEffect_5__3, 0LL, v70, v71, v72, v73, v74, v75);
LABEL_57:
      this = (BattleActorControl__colShiftServantChange_d__338_o *)_4__this->fields.performance;
      if ( !this
        || (this = (BattleActorControl__colShiftServantChange_d__338_o *)BattlePerformance__get_FieldEnvData(
                                                                           (BattlePerformance_o *)this,
                                                                           0LL)) == 0LL )
      {
LABEL_78:
        sub_1BCAA3C(this, method);
      }
      BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)this, 0LL);
      return 0;
    case 6:
      v3->fields.__1__state = -1;
      goto LABEL_35;
    case 7:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v3->fields._moveEffect_5__3, 0LL);
      goto LABEL_56;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__338__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__338_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__338__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__338_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__colShiftServantChange_d__338_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__338__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__338_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__338__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__338_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__337___ctor(
        BattleActorControl__colShiftServant_d__337_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__337__MoveNext(
        BattleActorControl__colShiftServant_d__337_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x0
  Il2CppObject *v5; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  Il2CppObject **v14; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Action_o *finishCallback; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    finishCallback = this->fields.finishCallback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(finishCallback, 0LL);
    return 0;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v5 = (Il2CppObject *)BattleActorControl__colShiftServantChange(
                               _4__this,
                               this->fields.shiftSvt,
                               this->fields.isShift,
                               0LL);
        this->fields.__2__current = v5;
        p__2__current = &this->fields.__2__current;
        sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v5, v7, v8, v9, v10, v11, v12);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_10:
      sub_1BCAA3C(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  this->fields.__2__current = 0LL;
  v14 = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)v14, 0LL, v15, v16, v17, v18, v19, v20);
  *((_DWORD *)v14 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__337__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__337_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__337__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__337_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__colShiftServant_d__337_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__337__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__337_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__337__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__337_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__326___ctor(
        BattleActorControl__collChangeAppearance_d__326_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__326__MoveNext(
        BattleActorControl__collChangeAppearance_d__326_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl__collChangeAppearance_d__326_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleActorControl_o *_4__this; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  __int64 v18; // x1
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  PartyOrganizationUtility_o *v27; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int v34; // w8
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct BattleServantData_o *v43; // x8
  ServantAssetArgs_o *v44; // x21
  _BOOL4 isForceAppearance; // w22
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  v3 = this;
  if ( (byte_4B19064 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    this = (BattleActorControl__collChangeAppearance_d__326_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v6, v7);
    byte_4B19064 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__326_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__326_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v3->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v10, v11, v12, v13, v14, v15);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__326_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_43;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__326_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_43;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_18:
      v20 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v3->fields._moveEffect_5__2 = v20;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v3->fields._moveEffect_5__2,
        (int64_t)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v3->fields.__2__current = 0LL;
      v27 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v27, 0LL, v28, v29, v30, v31, v32, v33);
      v34 = 2;
      goto LABEL_41;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_43;
      LoadedAssetArgs_k__BackingField = battleSvtData->fields._LoadedAssetArgs_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      ServantAssetLoadManager__unloadBattleActor(LoadedAssetArgs_k__BackingField, 0LL);
      v3->fields.__2__current = 0LL;
      v27 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v27, 0LL, v37, v38, v39, v40, v41, v42);
      v34 = 3;
      goto LABEL_41;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__326_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__326_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__326_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                    (BattleServantData_o *)this,
                                                                    0LL);
      v43 = _4__this->fields.battleSvtData;
      if ( !v43 )
        goto LABEL_43;
      v44 = (ServantAssetArgs_o *)this;
      isForceAppearance = v43->fields.isForceAppearance;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      ServantAssetLoadManager__preloadBattleActor(v44, isForceAppearance, 0LL);
LABEL_32:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      this = (BattleActorControl__collChangeAppearance_d__326_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        v27 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v27, 0LL, v46, v47, v48, v49, v50, v51);
        v34 = 4;
LABEL_41:
        *(_DWORD *)&v27[-1].fields._IsQuestStartMenuMode_k__BackingField = v34;
        return 1;
      }
      if ( !_4__this )
LABEL_43:
        sub_1BCAA3C(this, method);
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
      if ( v3->fields._moveEffect_5__2 )
      {
        v3->fields.__2__current = 0LL;
        v27 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v27, 0LL, v52, v53, v54, v55, v56, v57);
        v34 = 5;
        goto LABEL_41;
      }
      return 0;
    case 4:
      v3->fields.__1__state = -1;
      goto LABEL_32;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v3->fields._moveEffect_5__2, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__326__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__326_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__326__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__326_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__collChangeAppearance_d__326_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__326__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__326_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__326__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__326_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__321___ctor(
        BattleActorControl__colloadDressServant_d__321_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__321__MoveNext(
        BattleActorControl__colloadDressServant_d__321_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl__colloadDressServant_d__321_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  __int64 v27; // x1
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  PartyOrganizationUtility_o *v36; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int v43; // w8
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 flg; // w21
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int v53; // w8
  __int64 v54; // x1
  ServantAssetArgs_o *updated; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  ServantAssetArgs_o *v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7

  v3 = this;
  if ( (byte_4B19065 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v6, v7);
    this = (BattleActorControl__colloadDressServant_d__321_o *)sub_1BCA7E0(&StringLiteral_5552/*"END_LOAD"*/, v8, v9);
    byte_4B19065 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__321_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v3->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_53;
      this = (BattleActorControl__colloadDressServant_d__321_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__321_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v3->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v19, v20, v21, v22, v23, v24);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__321_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_61;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__321_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_61;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_20:
      v29 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v3->fields._moveEffect_5__3 = v29;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v3->fields._moveEffect_5__3,
        (int64_t)v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v3->fields.__2__current = 0LL;
      v36 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v36, 0LL, v37, v38, v39, v40, v41, v42);
      v43 = 2;
      break;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_61;
      flg = v3->fields.flg;
      LoadedAssetArgs_k__BackingField = battleSvtData->fields._LoadedAssetArgs_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
      v3->fields.__2__current = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__2__current, 0LL, v47, v48, v49, v50, v51, v52);
      if ( flg )
        v53 = 3;
      else
        v53 = 5;
      v3->fields.__1__state = v53;
      return 1;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__321_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[4].klass) = v3->fields._dressId_5__2;
      updated = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v54);
      ServantAssetLoadManager__preloadServant(updated, 0, 0LL);
LABEL_33:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      this = (BattleActorControl__colloadDressServant_d__321_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v3->fields.__2__current = 0LL;
      v36 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v36, 0LL, v56, v57, v58, v59, v60, v61);
      v43 = 4;
      break;
    case 4:
      v3->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__321_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[4].klass) = -1;
      v63 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v62);
      ServantAssetLoadManager__preloadServant(v63, 0, 0LL);
LABEL_43:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      this = (BattleActorControl__colloadDressServant_d__321_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        v36 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v36, 0LL, v64, v65, v66, v67, v68, v69);
        v43 = 6;
      }
      else
      {
LABEL_47:
        if ( !_4__this )
LABEL_61:
          sub_1BCAA3C(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( v3->fields._moveEffect_5__3 )
        {
          v3->fields.__2__current = 0LL;
          v36 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(v36, 0LL, v70, v71, v72, v73, v74, v75);
          v43 = 7;
        }
        else
        {
LABEL_52:
          v3->fields._moveEffect_5__3 = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._moveEffect_5__3, 0LL, v70, v71, v72, v73, v74, v75);
LABEL_53:
          v3->fields.__2__current = 0LL;
          v36 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(v36, 0LL, v12, v13, v14, v15, v16, v17);
          v43 = 8;
        }
      }
      break;
    case 6:
      v3->fields.__1__state = -1;
      goto LABEL_43;
    case 7:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v3->fields._moveEffect_5__3, 0LL);
      goto LABEL_52;
    case 8:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      BattleActorControl__sendEventFSM_44485868(_4__this, (System_String_o *)StringLiteral_5552/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  *(_DWORD *)&v36[-1].fields._IsQuestStartMenuMode_k__BackingField = v43;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__321__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__321_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__321__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__321_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__colloadDressServant_d__321_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__321__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__321_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__321__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__321_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__318___ctor(
        BattleActorControl__colloadTransformServant_d__318_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__318__MoveNext(
        BattleActorControl__colloadTransformServant_d__318_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleActorControl__colloadTransformServant_d__318_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct BattleActorControl_o *_4__this; // x20
  __int64 v30; // x1
  UnityEngine_Object_o *actorObject; // x21
  __int64 v32; // x1
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v42; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v52; // x21
  const MethodInfo *v53; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  int64_t v57; // x2
  __int64 v58; // x3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_List_object__o *v63; // x23
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 _2__current_low; // x10
  __int64 v73; // x8
  System_Collections_IEnumerator_o *v74; // x0
  PartyOrganizationUtility_o *v75; // x19
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int v82; // w8
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  BattleActionData_ShiftServant_o *ShiftServant; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct BattleActionData_ShiftServant_o *shiftSvtData_5__3; // x8
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  UnityEngine_WaitForEndOfFrame_o *v101; // x20
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct BattleActionData_ShiftServant_o *v108; // x8
  struct BattleServantSnapShot_o *AfterSvtCache_k__BackingField; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v111; // x1
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *v119; // x8
  struct BattlePerformance_o *v120; // x8

  v4 = this;
  if ( (byte_4B19066 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantSnapShotShiftServant_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_GC_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&OptionManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v25, v26);
    this = (BattleActorControl__colloadTransformServant_d__318_o *)sub_1BCA7E0(&StringLiteral_5552/*"END_LOAD"*/, v27, v28);
    byte_4B19066 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_16:
      v34 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v4->fields._moveEffect_5__2 = v34;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._moveEffect_5__2,
        (int64_t)v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_78;
      if ( !motionFSM->max_length )
        sub_1BCAA44(this, method);
      v42 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_70154244(v42, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v44, v45, v46, v47, v48, v49);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      v52 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_1BCAA2C(
                                                           BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo,
                                                           method,
                                                           v2,
                                                           v3);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v52, battleSvtData, v53);
      if ( !v52 )
        goto LABEL_78;
      svtId_k__BackingField = v52->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v52->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v52->fields._overwriteSvtVoiceId_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      ServantAssetLoadManager__preloadServantVoice(
        svtId_k__BackingField,
        dispLimitCount_k__BackingField,
        overwriteSvtVoiceId_k__BackingField,
        0LL);
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo,
                                                             method,
                                                             v57,
                                                             v58);
        System_Collections_Generic_List_object____ctor(
          v63,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v63;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.extraLoadedVoiceArgsList,
          (int64_t)v63,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
        this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_78;
      }
      v70 = *(_QWORD *)&this->fields.__1__state;
      v71 = Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v70 )
        goto LABEL_78;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v70 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v52,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = v70 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v73 + 32) = v52;
        sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)v52, v57, v58, v59, v60, v61, v62);
      }
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_78;
      ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)this, 0LL);
      v4->fields._shiftSvtData_5__3 = ShiftServant;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v4->fields._shiftSvtData_5__3,
        (int64_t)ShiftServant,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
      shiftSvtData_5__3 = v4->fields._shiftSvtData_5__3;
      if ( !shiftSvtData_5__3 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_42727244(
        (BattlePerformance_o *)this,
        shiftSvtData_5__3->fields.loadedAssetArgs,
        0,
        0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v97);
      this = (BattleActorControl__colloadTransformServant_d__318_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
        System_GC__Collect_63447616(0LL);
        v101 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v98, v99, v100);
        UnityEngine_WaitForEndOfFrame___ctor(v101, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v101;
        v75 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BCA784(v75, (int64_t)v101, v102, v103, v104, v105, v106, v107);
        v82 = 2;
        goto LABEL_77;
      }
LABEL_51:
      v108 = v4->fields._shiftSvtData_5__3;
      if ( !v108 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      AfterSvtCache_k__BackingField = v108->fields._AfterSvtCache_k__BackingField;
      if ( AfterSvtCache_k__BackingField
        && (methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(AfterSvtCache_k__BackingField->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v111 = (BattleServantSnapShotShiftServant_c *)AfterSvtCache_k__BackingField->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
             ? (BattleServantSnapShotShiftServant_o *)AfterSvtCache_k__BackingField
             : 0LL;
      }
      else
      {
        v111 = 0LL;
      }
      BattleServantData__ApplyCacheForTransformServant((BattleServantData_o *)this, v111, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_61:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
      this = (BattleActorControl__colloadTransformServant_d__318_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
          BattleActorControl__setDir(_4__this, 0LL);
          BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
          BattleActorControl__UpdateEachServantStatusUiByTransform(_4__this, 0LL);
          this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.battleSvtData;
          if ( this )
          {
            BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
            BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              v119 = _4__this->fields.battleSvtData;
              if ( v119 )
              {
                this = (BattleActorControl__colloadTransformServant_d__318_o *)performance->fields.data;
                if ( this )
                {
                  BattleData__replaceCommandCard(
                    (BattleData_o *)this,
                    v119->fields.uniqueId,
                    v119->fields.uniqueId,
                    0LL);
                  v120 = _4__this->fields.performance;
                  if ( v120 )
                  {
                    this = (BattleActorControl__colloadTransformServant_d__318_o *)v120->fields.commandPerf;
                    if ( this )
                    {
                      BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
                        (BattlePerformanceCommandCard_o *)this,
                        v120->fields.data,
                        _4__this->fields.battleSvtData,
                        0LL);
                      this = (BattleActorControl__colloadTransformServant_d__318_o *)_4__this->fields.performance;
                      if ( this )
                      {
                        this = (BattleActorControl__colloadTransformServant_d__318_o *)BattlePerformance__get_FieldEnvData(
                                                                                         (BattlePerformance_o *)this,
                                                                                         0LL);
                        if ( this )
                        {
                          BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
                            (BattleFieldEnvironmentData_o *)this,
                            0LL);
                          if ( v4->fields._moveEffect_5__2 )
                          {
                            v4->fields.__2__current = 0LL;
                            v75 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
                            sub_1BCA784(v75, 0LL, v83, v84, v85, v86, v87, v88);
                            v82 = 5;
                          }
                          else
                          {
LABEL_76:
                            v4->fields.__2__current = 0LL;
                            v75 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
                            sub_1BCA784(v75, 0LL, v83, v84, v85, v86, v87, v88);
                            v82 = 6;
                          }
                          goto LABEL_77;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_78:
        sub_1BCAA3C(this, method);
      }
      v4->fields.__2__current = 0LL;
      v75 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v75, 0LL, v112, v113, v114, v115, v116, v117);
      v82 = 4;
LABEL_77:
      *(_DWORD *)&v75[-1].fields._IsQuestStartMenuMode_k__BackingField = v82;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      this = (BattleActorControl__colloadTransformServant_d__318_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__318_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      v74 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v74;
      v75 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v75, (int64_t)v74, v76, v77, v78, v79, v80, v81);
      v82 = 3;
      goto LABEL_77;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      goto LABEL_51;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_61;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__2, 0LL);
      goto LABEL_76;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__sendEventFSM_44485868(_4__this, (System_String_o *)StringLiteral_5552/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__318__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__318_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__318__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__318_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleActorControl__colloadTransformServant_d__318_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__318__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__318_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__318__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__318_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__207___ctor(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__207__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  DefCoroutine_c *v14; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v16; // x1
  Il2CppObject **v17; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B19067 & 1) == 0 )
  {
    sub_1BCA7E0(&DefCoroutine_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v9, v10);
    byte_4B19067 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1BCAA3C(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
    return 0;
  }
  if ( _1__state )
    return 0;
  waitTime = this->fields.waitTime;
  this->fields.__1__state = -1;
  if ( waitTime >= 0.0 )
  {
    v19 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v19, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v19;
    p__2__current = &this->fields.__2__current;
    sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v19, v21, v22, v23, v24, v25, v26);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v14 = DefCoroutine_TypeInfo;
    if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
      v14 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v14->static_fields;
    v16 = *static_fields;
    this->fields.__2__current = *static_fields;
    v17 = &this->fields.__2__current;
    sub_1BCA784((PartyOrganizationUtility_o *)v17, (int64_t)v16, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)v17 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__207__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__207__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__coroutinePostCallBack_d__207_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__207__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__207__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__324___ctor(
        BattleActorControl__waitChangeApp_d__324_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__324__MoveNext(
        BattleActorControl__waitChangeApp_d__324_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x20
  System_Collections_IEnumerator_o *v5; // x0
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      goto LABEL_8;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v5 = BattleActorControl__collChangeAppearance(_4__this, 0LL);
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v5,
                                  0LL);
      this->fields.__2__current = started;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)started, v8, v9, v10, v11, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_8:
    sub_1BCAA3C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__324__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__324_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__324__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__324_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleActorControl__waitChangeApp_d__324_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__324__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__324_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__324__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__324_o *this,
        const MethodInfo *method)
{
  ;
}