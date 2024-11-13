void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4B18914 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSequenceManager_TypeInfo, v1, v2);
    byte_4B18914 = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
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
  System_Array_o *v42; // x0
  struct BattlePerformance_BattleUIPanel_array *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_object__o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Collections_Generic_List_object__o *v80; // x20
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v90; // x20
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  System_Collections_Generic_List_object__o *v100; // x20
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  System_Collections_Generic_List_object__o *v110; // x20
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  System_Collections_Generic_Dictionary_object__int__o *v120; // x20
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  System_Collections_Generic_HashSet_T__o *v130; // x20
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  System_RuntimeFieldHandle_o v137; // 0:w1.4

  if ( (byte_4B18913 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformance_BattleUIPanel___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_string__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Object___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Action___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_Object__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_Action__TypeInfo, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v36, v37);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v38,
      v39);
    sub_1BCA7E0(&StringLiteral_9473/*"N_{0}{1}"*/, v40, v41);
    byte_4B18913 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v42 = (System_Array_o *)sub_1BCA888(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v137.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  v43 = (struct BattlePerformance_BattleUIPanel_array *)v42;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v42, v137, 0LL);
  this->fields.FadeTargetPanelIndexs = v43;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FadeTargetPanelIndexs,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v50,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v53;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ReleaseSoundNames, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Action__TypeInfo,
                                                       v60,
                                                       v61,
                                                       v62);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v63;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.DelayInvokeMethodList,
    (int64_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v70 = StringLiteral_9473/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9473/*"N_{0}{1}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.PosNodeFormatNP, v70, v71, v72, v73, v74, v75, v76);
  v80 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Object__TypeInfo,
                                                       v77,
                                                       v78,
                                                       v79);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v80;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.npEndDeleteObjects,
    (int64_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v90 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo,
                                                                   v87,
                                                                   v88,
                                                                   v89);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v90,
    (const MethodInfo_3255A4C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v90;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rendererBaseAddColorsDict,
    (int64_t)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v100 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo,
                                                        v97,
                                                        v98,
                                                        v99);
  System_Collections_Generic_List_object____ctor(
    v100,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v100;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleTargetList,
    (int64_t)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  v110 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_GameObject__TypeInfo,
                                                        v107,
                                                        v108,
                                                        v109);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v110;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.createdObjects,
    (int64_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  v120 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                   v117,
                                                                   v118,
                                                                   v119);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v120,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v120;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int64_t)v120,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  v130 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_string__TypeInfo,
                                                      v127,
                                                      v128,
                                                      v129);
  System_Collections_Generic_HashSet_object____ctor(
    v130,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v130;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playedAudioGroupIdHash,
    (int64_t)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B188F4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, actor, method);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v5, v6);
    byte_4B188F4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v7 )
  {
    if ( !actor )
      sub_1BCAA3C(v7, v8);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_44433272(actor, (System_String_o *)StringLiteral_24854/*"wait"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      v9.fields.r = 0.0;
      v9.fields.g = 0.0;
      v9.fields.b = 0.0;
      v9.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v9, 0.3, 0LL);
    }
    v10.fields.r = 0.0;
    v10.fields.g = 0.0;
    v10.fields.b = 0.0;
    v10.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v10, 0.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__CacheRendererBaseAddColor(
        BattleSequenceManager_o *this,
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
  BattlePerformance_o *performance; // x0
  BattlePerformance_c *klass; // x8
  BattlePerformance_o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x19
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  BattleActorControl_o *v34; // x21
  BattleServantData_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  __int64 v38; // x1
  UnityEngine_SkinnedMeshRenderer_array *v39; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x29
  Il2CppObject *v42; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x23
  __int64 v44; // x0
  __int64 v45; // x1
  int v46; // s0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  System_Nullable_Color__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_Color__o v55; // [xsp+20h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B18912 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v12, v13);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_Value__, v14, v15);
    byte_4B18912 = 1;
  }
  entity = 0LL;
  memset(&v55, 0, sizeof(v55));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0LL)) == 0LL )
  {
    sub_1BCAA3C(performance, method);
  }
  klass = performance->klass;
  v18 = performance;
  v19 = *(unsigned __int16 *)(&performance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&performance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleActorControl__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_9;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v21 = sub_1C1C7C0(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( !v23 )
    sub_1BCAA3C(0LL, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_16:
      v27 = sub_1C1C7C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleActorControl__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_23;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_23:
      v31 = sub_1C1C7C0(v23, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v34 = (BattleActorControl_o *)v32;
    if ( !v32 )
      sub_1BCAA3C(0LL, v33);
    v35 = *(BattleServantData_o **)(v32 + 456);
    if ( !v35 )
      sub_1BCAA3C(0LL, v33);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v35, &entity, 0LL) )
    {
      if ( !entity )
        sub_1BCAA3C(0LL, v36);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v54, entity, 0LL);
      v55 = v54;
      if ( v54.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v34, 1, 0LL);
        v39 = RendererArray;
        if ( !RendererArray )
          sub_1BCAA3C(0LL, v38);
        v40 = *(_QWORD *)&RendererArray->max_length;
        if ( (int)v40 >= 1 )
        {
          v41 = 0LL;
          do
          {
            if ( v41 >= (unsigned int)v40 )
              sub_1BCAA44(RendererArray, v38);
            v42 = (Il2CppObject *)v39->m_Items[v41];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            *(UnityEngine_Color_o *)&v46 = System_Nullable_Color___get_Value(
                                             &v55,
                                             (const MethodInfo_36BBBFC *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1BCAA3C(v44, v45);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v42,
              *(UnityEngine_Color_o *)&v46,
              (const MethodInfo_3256408 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(v40) = v39->max_length;
            ++v41;
          }
          while ( (__int64)v41 < (int)v40 );
        }
      }
    }
  }
  v50 = *(_QWORD *)v23;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_41;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_41:
    v53 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v53)(v23, *(_QWORD *)(v53 + 8));
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4B1890A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_string___, bgmName, method);
    byte_4B1890A = 1;
  }
  if ( System_String__Equals_62410264(bgmName, this->fields.BackupBgmName, 0LL) )
  {
    return 0;
  }
  else
  {
    intactBgmList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.intactBgmList;
    return !intactBgmList
        || !intactBgmList[1].monitor
        || !System_Linq_Enumerable__Contains_object_(
              intactBgmList,
              (Il2CppObject *)this->fields.BackupBgmName,
              (const MethodInfo_2F2B270 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure(
        BattleSequenceManager_o *this,
        WellFired_USFGOPlayCutInBase_o *baseCutInEvent,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  if ( !baseCutInEvent )
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_43607072(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_43607072(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
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
  __int64 v15; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v17; // x1
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v37; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v49; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x24

  if ( (byte_4B188DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, onComplete);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass83_0__CreateCutInStandFigure_b__0__, v11, v12);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass83_0_TypeInfo, v13, v14);
    byte_4B188DC = 1;
  }
  v15 = sub_1BCAA2C(BattleSequenceManager___c__DisplayClass83_0_TypeInfo, obj, onComplete, method);
  BattleSequenceManager___c__DisplayClass83_0___ctor((BattleSequenceManager___c__DisplayClass83_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_16;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = obj;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)obj, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 32) = onComplete;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)onComplete, v30, v31, v32, v33, v34, v35);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v37 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v37 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v37, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.standFigure, (int64_t)MeshLocal, v40, v41, v42, v43, v44, v45);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)*p_standFigure;
    if ( *p_standFigure )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      Instance = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureMName(
                                              this->fields.loadStandFigureId,
                                              this->fields.loadStandFigureLimitCount,
                                              0LL);
      if ( gameObject )
      {
        UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
        Instance = (UnityEngine_Component_o *)*p_standFigure;
        if ( *p_standFigure )
        {
          UIStandFigureRender__SetDepth((UIStandFigureRender_o *)Instance, 0.0, 0LL);
          v49 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
          System_Action___ctor(
            v56,
            (Il2CppObject *)v15,
            Method_BattleSequenceManager___c__DisplayClass83_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v49 )
            return UIStandFigureM__SetCharacter_41758244(
                     v49,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v56,
                     1,
                     0LL);
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(Instance, v17);
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
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
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v44; // x21
  struct System_String_o **p_BackupBgmName; // x20
  const MethodInfo *v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  _BOOL4 v52; // w21
  struct System_String_o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  _BOOL4 v60; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_String_o *v69; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v71; // x3
  BgmPlayArgsGroup_o *v72; // x19
  _BOOL8 v73; // x0
  __int64 v74; // x1
  Il2CppObject *current; // x20
  float v76; // s0
  int v77; // w28
  System_Nullable_float__o v78; // x21
  const MethodInfo_36BF22C *v79; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_Object_array *v87; // x20
  __int64 v88; // x0
  int64_t v89; // x1
  struct BattlePerformance_o *v90; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v92; // x8
  struct BattlePerformance_o *v93; // x8
  __int64 v94; // x1
  System_String_o *v95; // x19
  __int64 v96; // x1
  BattleSequenceManager_c *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x21
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x21
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x21
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  __int64 v143; // x1
  System_Collections_Hashtable_o *v144; // x0
  __int64 v145; // x0
  int v146; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v147; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_float__o v151; // 0:x0.8
  System_Nullable_float__o v152; // 0:x1.8
  System_Nullable_float__o v153; // 0:x2.8
  System_Nullable_long__o v154; // 0:x0.16

  if ( (byte_4B188F5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSequenceManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v16, v17);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v18, v19);
    sub_1BCA7E0(&object___TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&float_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&SoundManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_9967/*"OnChangeBgmVolume"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v38, v39);
    sub_1BCA7E0(&iTween_TypeInfo, v40, v41);
    byte_4B188F5 = 1;
  }
  changeBgm = 0LL;
  memset(&v149, 0, sizeof(v149));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0LL);
  v44 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0LL) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v44, this->fields.BackupBgmName, 0LL) || this->fields.DemoMode )
  {
    v52 = 0;
  }
  else
  {
    *p_BackupBgmName = v44;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.BackupBgmName,
      (int64_t)v44,
      (int64_t)v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    v52 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v46) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v53 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v53;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.BackupBgmName, (int64_t)v53, v54, v55, v56, v57, v58, v59);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v60 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0LL);
    v52 = 1;
  }
  else
  {
    v60 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v62 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v62;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.BackupBgmName, (int64_t)v62, v63, v64, v65, v66, v67, v68);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v60 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v52 = 1;
  }
  v69 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1BCAA3C(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v60 | System_String__op_Inequality(v69, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1BCA888(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v87 = (System_Object_array *)performance;
    v88 = StringLiteral_19858/*"from"*/;
    if ( StringLiteral_19858/*"from"*/ )
    {
      v88 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v87->obj.klass->_1.element_class);
      if ( !v88 )
        goto LABEL_92;
      v89 = StringLiteral_19858/*"from"*/;
    }
    else
    {
      v89 = 0LL;
    }
    if ( !v87->max_length )
      goto LABEL_91;
    v87->m_Items[0] = (Il2CppObject *)v89;
    sub_1BCA784((PartyOrganizationUtility_o *)v87->m_Items, v89, v81, v82, v83, v84, v85, v86);
    v97 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, v96);
      v97 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v148.fields._list = v97->static_fields->NoblePhantasmBgmVolumeRate;
    v88 = j_il2cpp_value_box_0(float_TypeInfo, &v148);
    v104 = v88;
    if ( !v88 || (v88 = sub_1BCA91C(v88, v87->obj.klass->_1.element_class)) != 0 )
    {
      if ( v87->max_length <= 1 )
        goto LABEL_91;
      v87->m_Items[1] = (Il2CppObject *)v104;
      sub_1BCA784((PartyOrganizationUtility_o *)&v87->m_Items[1], v104, v98, v99, v100, v101, v102, v103);
      v88 = StringLiteral_24219/*"to"*/;
      if ( StringLiteral_24219/*"to"*/ )
      {
        v88 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v87->obj.klass->_1.element_class);
        if ( !v88 )
          goto LABEL_92;
        v89 = StringLiteral_24219/*"to"*/;
      }
      else
      {
        v89 = 0LL;
      }
      if ( v87->max_length <= 2 )
        goto LABEL_91;
      v87->m_Items[2] = (Il2CppObject *)v89;
      sub_1BCA784((PartyOrganizationUtility_o *)&v87->m_Items[2], v89, v105, v106, v107, v108, v109, v110);
      *(_DWORD *)&v147.fields.hasValue = 1;
      v88 = j_il2cpp_value_box_0(int_TypeInfo, &v147);
      v117 = v88;
      if ( !v88 || (v88 = sub_1BCA91C(v88, v87->obj.klass->_1.element_class)) != 0 )
      {
        if ( v87->max_length <= 3 )
          goto LABEL_91;
        v87->m_Items[3] = (Il2CppObject *)v117;
        sub_1BCA784((PartyOrganizationUtility_o *)&v87->m_Items[3], v117, v111, v112, v113, v114, v115, v116);
        v88 = StringLiteral_24178/*"time"*/;
        if ( StringLiteral_24178/*"time"*/ )
        {
          v88 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v87->obj.klass->_1.element_class);
          if ( !v88 )
            goto LABEL_92;
          v89 = StringLiteral_24178/*"time"*/;
        }
        else
        {
          v89 = 0LL;
        }
        if ( v87->max_length <= 4 )
          goto LABEL_91;
        v87->m_Items[4] = (Il2CppObject *)v89;
        sub_1BCA784((PartyOrganizationUtility_o *)&v87->m_Items[4], v89, v118, v119, v120, v121, v122, v123);
        v146 = 1056964608;
        v88 = j_il2cpp_value_box_0(float_TypeInfo, &v146);
        v130 = v88;
        if ( !v88 || (v88 = sub_1BCA91C(v88, v87->obj.klass->_1.element_class)) != 0 )
        {
          if ( v87->max_length <= 5 )
            goto LABEL_91;
          v87->m_Items[5] = (Il2CppObject *)v130;
          sub_1BCA784((PartyOrganizationUtility_o *)&v87->m_Items[5], v130, v124, v125, v126, v127, v128, v129);
          v88 = StringLiteral_22521/*"onupdate"*/;
          if ( StringLiteral_22521/*"onupdate"*/ )
          {
            v88 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v87->obj.klass->_1.element_class);
            if ( !v88 )
              goto LABEL_92;
            v89 = StringLiteral_22521/*"onupdate"*/;
          }
          else
          {
            v89 = 0LL;
          }
          if ( v87->max_length <= 6 )
            goto LABEL_91;
          v87->m_Items[6] = (Il2CppObject *)v89;
          sub_1BCA784((PartyOrganizationUtility_o *)&v87->m_Items[6], v89, v131, v132, v133, v134, v135, v136);
          v88 = StringLiteral_9967/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9967/*"OnChangeBgmVolume"*/ )
          {
            v89 = 0LL;
LABEL_84:
            if ( v87->max_length > 7 )
            {
              v87->m_Items[7] = (Il2CppObject *)v89;
              sub_1BCA784((PartyOrganizationUtility_o *)&v87->m_Items[7], v89, v137, v138, v139, v140, v141, v142);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v143);
              v144 = iTween__Hash(v87, 0LL);
              iTween__ValueTo(gameObject, v144, 0LL);
              return;
            }
LABEL_91:
            sub_1BCAA44(v88, v89);
          }
          v88 = sub_1BCA91C(StringLiteral_9967/*"OnChangeBgmVolume"*/, v87->obj.klass->_1.element_class);
          if ( v88 )
          {
            v89 = StringLiteral_9967/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v145 = sub_1BCAA60(v88);
    sub_1BCA908(v145, 0LL);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v52, this->fields.BackupBgmName, v71);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0LL);
      if ( performance )
      {
        v72 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v148,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v149 = v148;
          while ( 1 )
          {
            v73 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v149,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v73 )
              break;
            current = v149.fields._current;
            if ( !v149.fields._current )
              sub_1BCAA3C(v73, v74);
            v76 = (float)(__int64)v149.fields._current[2].klass + -800.0;
            if ( v76 == INFINITY )
              v77 = 0x80000000;
            else
              v77 = (int)v76;
            v147 = 0LL;
            v151 = (System_Nullable_float__o)&v147;
            System_Nullable_float____ctor(v151, 0.5, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
            v78 = v147;
            v154.fields.value = v77 & (unsigned int)~(v77 >> 31);
            *(_OWORD *)&v148.fields._list = 0uLL;
            *(_QWORD *)&v154.fields.hasValue = &v148;
            System_Nullable_long____ctor(v154, Method_System_Nullable_long___ctor__, v79);
            v152 = 0LL;
            v153 = v78;
            BgmPlayArgs__Update(
              (BgmPlayArgs_o *)current,
              v152,
              v153,
              *(System_Nullable_long__o *)&v148.fields._list,
              0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v149,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v94);
          BgmManager__PlayBgm_39024948(v72, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v52 )
  {
    v90 = this->fields.performance;
    if ( !v90 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v90->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v92 = this->fields.performance;
      if ( v92 )
      {
        performance = (__int64)v92->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v93 = this->fields.performance;
          if ( v93 )
          {
            performance = (__int64)v93->fields.logic;
            if ( performance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)performance, 0.5, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_90;
    }
  }
  v95 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playBgm(v95, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Func_object__bool__o *v27; // x20

  if ( (byte_4B1890C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm, checkBgmName);
    sub_1BCA7E0(&System_Func_BgmPlayArgs__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass147_0__ExistBackupBgmPlayGroup_b__0__, v9, v10);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass147_0_TypeInfo, v11, v12);
    byte_4B1890C = 1;
  }
  v13 = sub_1BCAA2C(BattleSequenceManager___c__DisplayClass147_0_TypeInfo, isCheckExistBgm, checkBgmName, method);
  BattleSequenceManager___c__DisplayClass147_0___ctor((BattleSequenceManager___c__DisplayClass147_0_o *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = checkBgmName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)checkBgmName, v16, v17, v18, v19, v20, v21);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v23 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v27 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BgmPlayArgs__bool__TypeInfo, v24, v25, v26);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_BattleSequenceManager___c__DisplayClass147_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49415960(
           (System_Collections_Generic_IEnumerable_TSource__o *)v23,
           (System_Func_TSource__bool__o *)v27,
           (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void __fastcall BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  __int64 v4; // x2
  BattleSequenceManager_o *v7; // x19
  struct BattlePerformance_BattleUIPanel_array *FadeTargetPanelIndexs; // x21
  __int64 v9; // x8
  unsigned __int64 v10; // x23
  __int64 v11; // x1
  UnityEngine_Object_o *Panel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *root_drop; // x20
  struct BattlePerformance_o *v16; // x8

  v7 = this;
  if ( (byte_4B188EC & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v4);
    byte_4B188EC = 1;
  }
  FadeTargetPanelIndexs = v7->fields.FadeTargetPanelIndexs;
  v7->fields.nowTargetAlpha = targetAlpha;
  if ( !FadeTargetPanelIndexs )
    goto LABEL_23;
  v9 = *(_QWORD *)&FadeTargetPanelIndexs->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
        sub_1BCAA44(this, method);
      this = (BattleSequenceManager_o *)v7->fields.performance;
      if ( !this )
        break;
      Panel = (UnityEngine_Object_o *)BattlePerformance__getPanel(
                                        (BattlePerformance_o *)this,
                                        FadeTargetPanelIndexs->m_Items[v10 + 1],
                                        0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(Panel, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Panel )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Panel, 0LL);
        this = (BattleSequenceManager_o *)TweenAlpha__Begin(gameObject, time, targetAlpha, 0LL);
      }
      LODWORD(v9) = FadeTargetPanelIndexs->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_14;
    }
LABEL_23:
    sub_1BCAA3C(this, method);
  }
LABEL_14:
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_23;
  root_drop = (UnityEngine_Object_o *)performance->fields.root_drop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(root_drop, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = v7->fields.performance;
    if ( !v16 )
      goto LABEL_23;
    this = (BattleSequenceManager_o *)v16->fields.root_drop;
    if ( !this )
      goto LABEL_23;
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, targetAlpha == 1.0, 0LL);
  }
}


UIStandFigureM_o *__fastcall BattleSequenceManager__FetchMeshPrefab(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  if ( this->fields.chrId == svtId
    && this->fields.actorLimitImgCount == limitImgCnt
    && this->fields.faceType == faceType
    || this->fields.loadStandFigureId == svtId
    && this->fields.loadStandFigureLimitCount == limitImgCnt
    && this->fields.faceType == faceType )
  {
    return this->fields.standFigure;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall BattleSequenceManager__FixSyncGroupRandomAudioPlayIndex(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *sequence,
        System_String_o *syncGroupName,
        const MethodInfo *method)
{
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
  __int64 v52; // x22
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__49689332; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_List_object__o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  BattleSequenceManager___c_c *v68; // x0
  System_Comparison_T__o *_9__80_0; // x23
  Il2CppObject *v70; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Func_object__bool__o *v81; // x23
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_object__o *v85; // x21
  System_Collections_Generic_IEnumerable_T__o *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  BattleSequenceManager___c_c *v90; // x0
  System_Comparison_T__o *_9__80_2; // x19
  Il2CppObject *v92; // x22
  struct BattleSequenceManager___c_StaticFields *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x1
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B188DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence, syncGroupName);
    sub_1BCA7E0(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v14, v15);
    sub_1BCA7E0(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v38, v39);
    sub_1BCA7E0(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__80_0__, v42, v43);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__80_2__, v44, v45);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass80_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v46, v47);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass80_0_TypeInfo, v48, v49);
    sub_1BCA7E0(&BattleSequenceManager___c_TypeInfo, v50, v51);
    byte_4B188DB = 1;
  }
  memset(&v101, 0, sizeof(v101));
  v52 = sub_1BCAA2C(BattleSequenceManager___c__DisplayClass80_0_TypeInfo, sequence, syncGroupName, method);
  BattleSequenceManager___c__DisplayClass80_0___ctor((BattleSequenceManager___c__DisplayClass80_0_o *)v52, 0LL);
  if ( !v52 )
    goto LABEL_27;
  *(_QWORD *)(v52 + 16) = syncGroupName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 16), (int64_t)syncGroupName, v55, v56, v57, v58, v59, v60);
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                                       v61,
                                                       v62,
                                                       v63);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__49689332 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                                           sequence,
                                                                                           (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v64 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v64,
    ComponentsInChildren_object__49689332,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v68 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v65);
    v68 = BattleSequenceManager___c_TypeInfo;
  }
  _9__80_0 = (System_Comparison_T__o *)v68->static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68, v65);
      v68 = BattleSequenceManager___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v68->static_fields->__9;
    _9__80_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                           System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                           v65,
                                           v66,
                                           v67);
    System_Comparison_object____ctor(
      _9__80_0,
      v70,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__80_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__80_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__80_0,
      (int64_t)_9__80_0,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v64,
    _9__80_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v81 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo,
                                         v78,
                                         v79,
                                         v80);
  System_Func_object__bool____ctor(
    v81,
    (Il2CppObject *)v52,
    Method_BattleSequenceManager___c__DisplayClass80_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v64,
          (System_Func_T__bool__o *)v81,
          (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo,
                                                         v82,
                                                         v83,
                                                         v84);
    System_Collections_Generic_List_object____ctor(
      v85,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__49689332 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                                             sequence,
                                                                                             (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v85 )
    {
      System_Collections_Generic_List_object___AddRange(
        v85,
        ComponentsInChildren_object__49689332,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v86 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                             sequence,
                                                             (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v85,
        v86,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v90 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v87);
        v90 = BattleSequenceManager___c_TypeInfo;
      }
      _9__80_2 = (System_Comparison_T__o *)v90->static_fields->__9__80_2;
      if ( !_9__80_2 )
      {
        if ( !v90->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v90, v87);
          v90 = BattleSequenceManager___c_TypeInfo;
        }
        v92 = (Il2CppObject *)v90->static_fields->__9;
        _9__80_2 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_USFGOPlayAudioEvent__TypeInfo, v87, v88, v89);
        System_Comparison_object____ctor(
          _9__80_2,
          v92,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__80_2__,
          0LL);
        v93 = BattleSequenceManager___c_TypeInfo->static_fields;
        v93->__9__80_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__80_2;
        sub_1BCA784((PartyOrganizationUtility_o *)&v93->__9__80_2, (int64_t)_9__80_2, v94, v95, v96, v97, v98, v99);
      }
      System_Collections_Generic_List_object___Sort_56244000(
        v85,
        _9__80_2,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v101,
        v85,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v101,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v101.fields._current )
          sub_1BCAA3C(0LL, v100);
      }
      while ( (((__int64 (*)(void))v101.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v101,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1BCAA3C(ComponentsInChildren_object__49689332, v54);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleSequenceManager__GetOverwritedCutInLimitCount(
        BattleSequenceManager_o *this,
        int32_t curLimCnt,
        int32_t svtId,
        int32_t defLimCnt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *actor; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  int32_t ServantId; // w0

  if ( (byte_4B188DF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BattleActorControl___,
      *(_QWORD *)&curLimCnt,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B188DF = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( Component_object )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0LL);
      if ( defLimCnt == -1 || ServantId == svtId )
        return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL);
      return curLimCnt;
    }
    goto LABEL_15;
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_object )
LABEL_15:
    sub_1BCAA3C(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleSequenceManager__GetRendererBaseAddColor(
        BattleSequenceManager_o *this,
        UnityEngine_SkinnedMeshRenderer_o *inputRenderer,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18911 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___, inputRenderer, method);
    byte_4B18911 = 1;
  }
  v9.fields.r = 0.0;
  v9.fields.g = 0.0;
  v9.fields.b = 0.0;
  v9.fields.a = 0.0;
  *(UnityEngine_Color_o *)&v5 = BasicHelper__GetValue_object__Color_(
                                  (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
                                  (Il2CppObject *)inputRenderer,
                                  v9,
                                  (const MethodInfo_2F01338 *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
  result.fields.a = v8;
  result.fields.b = v7;
  result.fields.g = v6;
  result.fields.r = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 *v14; // x8
  Il2CppObject *v15; // x22
  Il2CppObject *Instance; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B188FF & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&pos, format);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_6120/*"Enemy"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_10808/*"Player"*/, v12, v13);
    byte_4B188FF = 1;
  }
  if ( isEnemy )
    v14 = &StringLiteral_6120/*"Enemy"*/;
  else
    v14 = &StringLiteral_10808/*"Player"*/;
  v15 = (Il2CppObject *)*v14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v21 = pos;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v18 = System_String__Format_62415592(format, v15, v17, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v18, v19);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BattleSequenceManager___c__DisplayClass128_0_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v18; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4B18900 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__,
      *(_QWORD *)&posIndex,
      method);
    sub_1BCA7E0(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass128_0__GetTargetPosIndexTransform_b__0__, v8, v9);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass128_0_TypeInfo, v10, v11);
    byte_4B18900 = 1;
  }
  v12 = (BattleSequenceManager___c__DisplayClass128_0_o *)sub_1BCAA2C(
                                                            BattleSequenceManager___c__DisplayClass128_0_TypeInfo,
                                                            *(_QWORD *)&posIndex,
                                                            method,
                                                            v3);
  BattleSequenceManager___c__DisplayClass128_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_9;
  v12->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo,
                                        v14,
                                        v15,
                                        v16);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_BattleSequenceManager___c__DisplayClass128_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v18,
                                        (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v13 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v13 )
      return UnityEngine_GameObject__get_transform(v13, 0LL);
LABEL_9:
    sub_1BCAA3C(v13, v14);
  }
  return result;
}


bool __fastcall BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *fixedVoice; // x20

  *fxdVoice = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)fxdVoice, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1BCA784((PartyOrganizationUtility_o *)fxdVoice, (int64_t)fixedVoice, v10, v11, v12, v13, v14, v15);
  }
  return fixedVoice != 0LL;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *actor; // x21
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B1890B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, entity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1890B = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0LL) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(actor, 0LL, 0LL) )
    return 0;
  v11 = this->fields.actor;
  if ( !v11 )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v11,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_16:
    sub_1BCAA3C(v11, v10);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_object, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *klass; // x19
  __int64 v12; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B1890D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5, v6);
    byte_4B1890D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v9 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v9 )
    goto LABEL_18;
  klass = (UnityEngine_Object_o *)v9[4].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v9 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v9 )
    goto LABEL_18;
  v9 = (UnityEngine_GameObject_o *)v9[4].klass;
  if ( !v9 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1BCAA3C(v9, v10);
  return LOBYTE(Component_object[30].klass) == 0;
}


bool __fastcall BattleSequenceManager__IsReleaseSound(
        BattleSequenceManager_o *this,
        System_String_o *soundName,
        const MethodInfo *method)
{
  return !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, soundName, 0LL);
}


bool __fastcall BattleSequenceManager__IsSameBattleBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  return BasicHelper__EqualExceptNullOrEmpty(bgmName, this->fields.BackupBgmName, 0LL);
}


bool __fastcall BattleSequenceManager__IsTimeAccelerateNow(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4B1890F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1890F = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return !UnityEngine_Object__op_Equality(performance, 0LL, 0LL)
      && BattleSequenceManager__get_isAuthTDAccelerate(this, v5);
}


void __fastcall BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  __int64 v21; // x1

  if ( (byte_4B188DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, bgmName, callback);
    sub_1BCA7E0(&SoundManager_TypeInfo, v7, v8);
    byte_4B188DD = 1;
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(bgmName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( callback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return;
    }
LABEL_14:
    sub_1BCAA3C(IsNullOrEmpty, v10);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v18 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v20[4] = (Il2CppClass *)bgmName;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)bgmName, v11, v12, v13, v14, v15, v16);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v21);
  SoundManager__downloadAudioAssetStorage(bgmName, callback, 1, 0LL);
}


void __fastcall BattleSequenceManager__LoadEndStandFigure(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x22
  __int64 v8; // x1
  UIStandFigureRender_o *v9; // x0

  if ( (byte_4B188DE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, onComplete);
    byte_4B188DE = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1BCAA3C(0LL, v8);
    UIStandFigureRender__SetActive(v9, 0, 0LL);
  }
  if ( onComplete )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))onComplete->fields.m_target)(
      onComplete->fields.original_method_info,
      obj,
      *(_QWORD *)&onComplete->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__MultiTargetBossPositioning(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *CoreObj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *klass; // x0
  __int64 v14; // x1
  struct BattlePerformance_o *v15; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v17; // x8
  struct BattleData_o *v18; // x8
  __int64 v19; // x1
  UnityEngine_Object_o *Component_object; // x20
  __int64 v21; // x1
  UnityEngine_Object_o *SingleTarget; // x21
  __int64 v23; // x1
  Il2CppObject *v24; // x21
  __int64 *v25; // x8
  struct BattlePerformance_o *v26; // x9
  System_String_o *v27; // x19
  BattleData_o *v28; // x21
  __int64 v29; // x1
  UnityEngine_Component_o *TransformChild; // x19
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s8
  float v35; // s9
  float v36; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B188FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_19168/*"en_Parts_Up01"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19167/*"en_Parts_Under01"*/, v9, v10);
    byte_4B188FB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, CoreObj);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0LL, 0LL) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)klass & 1) == 0 )
    {
      v15 = this->fields.performance;
      if ( !v15 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v15->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v17 = this->fields.performance;
        if ( !v17 )
          goto LABEL_54;
        v18 = v17->fields.data;
        if ( !v18 )
          goto LABEL_54;
        if ( v18->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
          klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)klass & 1) == 0 )
          {
            if ( !Component_object )
              goto LABEL_54;
            klass = (UnityEngine_GameObject_o *)Component_object[19].klass;
            if ( !klass )
              goto LABEL_54;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)klass, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                klass = this->fields.SingleTarget;
                if ( !klass )
                  goto LABEL_54;
                v24 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v24,
                                                      0LL,
                                                      0LL);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v24 )
                    goto LABEL_54;
                  if ( LOBYTE(v24[30].klass) )
                  {
                    klass = (UnityEngine_GameObject_o *)v24[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0LL) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v24[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0LL) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v24[28].monitor;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0LL);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v25 = &StringLiteral_19168/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v24[28].monitor;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0LL);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v25 = &StringLiteral_19167/*"en_Parts_Under01"*/;
                      }
                      v26 = this->fields.performance;
                      if ( !v26 )
                        goto LABEL_54;
                      v27 = (System_String_o *)*v25;
                      v28 = v26->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0LL);
                      if ( !v28 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v28,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v27,
                                                                    0LL);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_object,
                                                              0LL);
                        if ( klass )
                        {
                          *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)klass,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v34 = v31;
                            v35 = v32;
                            v36 = v33;
                            klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                  TransformChild,
                                                                  0LL);
                            if ( klass )
                            {
                              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)klass, 0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Component_object,
                                                                    0LL);
                              if ( klass )
                              {
                                v42.fields.z = v36 - z;
                                v42.fields.y = v35 - y;
                                v42.fields.x = v34 - x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v42, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1BCAA3C(klass, v14);
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
  return 0;
}


void __fastcall BattleSequenceManager__OnBgChanged(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  BattleSequenceManager_o *v3; // x19
  struct System_Action_o *BgChangedCallback; // x8
  PartyOrganizationUtility_o *p_BgChangedCallback; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0LL) )
    sub_1BCAA3C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (PartyOrganizationUtility_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1BCA784(p_BgChangedCallback, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
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
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x19
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x20
  float v35; // s9
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B188F0 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v3);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    byte_4B188F0 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v15 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v15 )
      sub_1BCAA3C(0LL, v16);
    klass = v15->klass;
    v18 = v15;
    v19 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(v15, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v18,
            *(_QWORD *)(p_method + 8));
    if ( !v23 )
      sub_1BCAA3C(0LL, v22);
    while ( 1 )
    {
      v24 = *(_QWORD *)v23;
      v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
      {
        v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_16;
        }
        v27 = v24 + 16LL * *v26 + 312;
      }
      else
      {
LABEL_16:
        v27 = sub_1C1C7C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
        break;
      v28 = *(_QWORD *)v23;
      v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
      {
        v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_23;
        }
        v31 = v28 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_23:
        v31 = sub_1C1C7C0(v23, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
      if ( !v32 )
        sub_1BCAA3C(0LL, v33);
      v34 = *(System_String_o **)(v32 + 16);
      v35 = *(float *)(v32 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v33);
      BgmManager__ChangePlayerVolume(v34, v35 * newValue, 0LL);
    }
    v36 = *(_QWORD *)v23;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_33;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_33:
      v39 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  }
}


void __fastcall BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4B18910 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__, method, v2);
    byte_4B18910 = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_32565C8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
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
  const MethodInfo *v49; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  __int64 v57; // x1
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformance_o **p_performance; // x25
  __int64 v62; // x1
  Il2CppObject *current; // x20
  __int64 v64; // x1
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v67; // w9
  __int64 v68; // x1
  Il2CppObject *v69; // x20
  __int64 v70; // x1
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v72; // w2
  int v73; // w9
  UnityEngine_Object_o *seqObject; // x21
  struct UnityEngine_GameObject_o **p_seqObject; // x27
  UnityEngine_Object_o *v76; // x21
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  BattlePerformance_o *v84; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v88; // x20
  __int64 v89; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 v91; // x23
  UnityEngine_Object_o *v92; // x21
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct UnityEngine_GameObject_array *v99; // x8
  struct UnityEngine_GameObject_array *v100; // x9
  int64_t v101; // x1
  struct UnityEngine_GameObject_array *v102; // x27
  __int64 v103; // x8
  unsigned __int64 v104; // x21
  UnityEngine_Object_o *v105; // x23
  char v106; // w22
  __int64 v107; // x1
  Il2CppObject *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v110; // x20
  __int64 v111; // x23
  unsigned __int64 v112; // x9
  unsigned __int64 v113; // x27
  UnityEngine_Object_o *v114; // x22
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct UnityEngine_GameObject_array *v121; // x8
  struct UnityEngine_GameObject_array *v122; // x9
  int64_t v123; // x1
  struct UnityEngine_GameObject_array *v124; // x23
  __int64 v125; // x8
  unsigned __int64 v126; // x27
  int v127; // w28
  UnityEngine_Object_o *v128; // x22
  char v129; // w21
  __int64 v130; // x1
  Il2CppObject *v131; // x22
  UnityEngine_Object_o *data; // x21
  struct UnityEngine_GameObject_array *v133; // x20
  __int64 v134; // x8
  unsigned __int64 v135; // x22
  UnityEngine_Object_o *v136; // x21
  Il2CppObject *v137; // x0
  const MethodInfo *v138; // x2
  struct UnityEngine_GameObject_array *v139; // x20
  __int64 v140; // x8
  unsigned __int64 v141; // x22
  UnityEngine_Object_o *v142; // x21
  Il2CppObject *v143; // x0
  const MethodInfo *v144; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v147; // x2
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  UnityEngine_Camera_o *v154; // x21
  int32_t cullingMask; // w22
  char v156; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v158; // w22
  char v159; // w0
  __int64 v160; // x1
  UnityEngine_Object_o *v161; // x21
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x8
  BattlePerformance_o *v163; // x19
  int32_t v164; // w20
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v166; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v168; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B188F2 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonUI_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v24, v25);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Object__Clear__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__get_Count__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__get_Item__, v38, v39);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v40, v41);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v42, v43);
    sub_1BCA7E0(&StringLiteral_9634/*"NoblePhantasm/CutIns"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_3250/*"Battle2D"*/, v46, v47);
    byte_4B188F2 = 1;
  }
  entity = 0LL;
  memset(&v168, 0, sizeof(v168));
  memset(&v167, 0, sizeof(v167));
  this->fields.IsPlaying = 0;
  this->fields._SeqId_k__BackingField = 0;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, method);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v48);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v49);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  if ( UnityEngine_Object__op_Inequality(actorCamera, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.actorCamera;
    if ( !transform )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_106;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.originalCameraRoot, 0LL);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v52);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v54);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v55);
  BattleSequenceManager__restoreBattleActorTransform(this, v56);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v58) )
    BattleSequenceManager__CrossFadeBgm(this, v59);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v59);
  p_performance = &this->fields.performance;
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)performance->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__loadEffectStatus((BattleActionCamera_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v166,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v168 = v166;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v168,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v168.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v168,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_106;
  size = npEndDeleteObjects->fields._size;
  v67 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v67;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v166,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v167 = v166;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v167,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v69 = v167.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v69, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v167,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_106;
  v72 = createdObjects->fields._size;
  v73 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v73;
  if ( v72 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v72, 0LL);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v76 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
    UnityEngine_Object__Destroy_70154244(v76, 0LL);
    *p_seqObject = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seqObject, 0LL, v77, v78, v79, v80, v81, v82);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v84 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  p_actorlist = v84->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v84->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + p_actorlist->max_length )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v88 = 4LL;
      v89 = 32LL;
      while ( 1 )
      {
        max_length = saveWaitPlayer->max_length;
        v91 = v88 - 4;
        if ( v88 - 4 >= (int)max_length )
          break;
        if ( v91 >= max_length )
          goto LABEL_186;
        v92 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v88);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v92, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v99 = this->fields.saveWaitPlayer;
          if ( !v99 )
            goto LABEL_106;
          if ( v91 >= v99->max_length )
            goto LABEL_186;
          v100 = (*p_performance)->fields.p_actorlist;
          if ( !v100 )
            goto LABEL_106;
          if ( v91 >= v100->max_length )
            goto LABEL_186;
          v101 = *((_QWORD *)&v99->obj.klass + v88);
          *(Il2CppClass **)((char *)&v100->obj.klass + v89) = (Il2CppClass *)v101;
          sub_1BCA784((PartyOrganizationUtility_o *)((char *)v100 + v89), v101, v93, v94, v95, v96, v97, v98);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v88;
        v89 += 8LL;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v84 = *p_performance;
      if ( !*p_performance )
        goto LABEL_106;
    }
    v102 = v84->fields.p_actorlist;
    if ( !v102 )
      goto LABEL_106;
    v103 = *(_QWORD *)&v102->max_length;
    if ( (int)v103 >= 1 )
    {
      v104 = 0LL;
      while ( v104 < (unsigned int)v103 )
      {
        v105 = (UnityEngine_Object_o *)v102->m_Items[v104];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v105, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v104,
                                                   (const MethodInfo_3558928 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v105 )
            goto LABEL_106;
          v106 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v105, (unsigned __int8)transform & 1, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v105,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v107);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)Component_object[2].monitor;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v106 & 1, 0LL);
          }
        }
        LODWORD(v103) = v102->max_length;
        if ( (__int64)++v104 >= (int)v103 )
          goto LABEL_92;
      }
LABEL_186:
      sub_1BCAA44(transform, v51);
    }
    LODWORD(v104) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v110 = 4LL;
      v111 = 32LL;
      while ( 1 )
      {
        v112 = saveWaitEnemy->max_length;
        v113 = v110 - 4;
        if ( v110 - 4 >= (int)v112 )
          break;
        if ( v113 >= v112 )
          goto LABEL_186;
        v114 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v110);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v114, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v121 = this->fields.saveWaitEnemy;
          if ( !v121 )
            goto LABEL_106;
          if ( v113 >= v121->max_length )
            goto LABEL_186;
          v122 = (*p_performance)->fields.e_actorlist;
          if ( !v122 )
            goto LABEL_106;
          if ( v113 >= v122->max_length )
            goto LABEL_186;
          v123 = *((_QWORD *)&v121->obj.klass + v110);
          *(Il2CppClass **)((char *)&v122->obj.klass + v111) = (Il2CppClass *)v123;
          sub_1BCA784((PartyOrganizationUtility_o *)((char *)v122 + v111), v123, v115, v116, v117, v118, v119, v120);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v110;
        v111 += 8LL;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    if ( !*p_performance )
      goto LABEL_106;
    v124 = (*p_performance)->fields.e_actorlist;
    if ( !v124 )
      goto LABEL_106;
    v125 = *(_QWORD *)&v124->max_length;
    if ( (int)v125 >= 1 )
    {
      v126 = 0LL;
      v127 = v104;
      while ( v126 < (unsigned int)v125 )
      {
        v128 = (UnityEngine_Object_o *)v124->m_Items[v126];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v128, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v127 + v126,
                                                   (const MethodInfo_3558928 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v128 )
            goto LABEL_106;
          v129 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v128, (unsigned __int8)transform & 1, 0LL);
          v131 = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)v128,
                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v130);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v131,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v131 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v131[2].monitor;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v129 & 1, 0LL);
          }
        }
        LODWORD(v125) = v124->max_length;
        if ( (__int64)++v126 >= (int)v125 )
          goto LABEL_124;
      }
      goto LABEL_186;
    }
LABEL_124:
    v84 = *p_performance;
    p_seqObject = &this->fields.seqObject;
    if ( !*p_performance )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v84->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !*p_performance )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)(*p_performance)->fields.data;
    if ( !transform )
      goto LABEL_106;
    BattleData__PartsIntoTheBody((BattleData_o *)transform, 0LL);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitActorPosition((BattlePerformance_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__resetOriginalPos((BattlePerformance_o *)transform, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  v133 = (*p_performance)->fields.p_actorlist;
  if ( !v133 )
    goto LABEL_106;
  v134 = *(_QWORD *)&v133->max_length;
  if ( (int)v134 >= 1 )
  {
    v135 = 0LL;
    while ( v135 < (unsigned int)v134 )
    {
      v136 = (UnityEngine_Object_o *)v133->m_Items[v135];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v136, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v136 )
          goto LABEL_106;
        v137 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)v136,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v137, v138);
      }
      LODWORD(v134) = v133->max_length;
      if ( (__int64)++v135 >= (int)v134 )
        goto LABEL_144;
    }
    goto LABEL_186;
  }
LABEL_144:
  if ( !*p_performance )
    goto LABEL_106;
  v139 = (*p_performance)->fields.e_actorlist;
  if ( !v139 )
    goto LABEL_106;
  v140 = *(_QWORD *)&v139->max_length;
  if ( (int)v140 >= 1 )
  {
    v141 = 0LL;
    while ( v141 < (unsigned int)v140 )
    {
      v142 = (UnityEngine_Object_o *)v139->m_Items[v141];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v142, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v142 )
          goto LABEL_106;
        v143 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)v142,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v143, v144);
      }
      LODWORD(v140) = v139->max_length;
      if ( (__int64)++v141 >= (int)v140 )
        goto LABEL_155;
    }
    goto LABEL_186;
  }
LABEL_155:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_106;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0LL);
    *p_standFigure = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.standFigure, 0LL, v148, v149, v150, v151, v152, v153);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v147) )
    BattleSequenceManager__ReleaseCpk(this, v51);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v154 = this->fields.actorCamera;
  if ( !v154 )
    goto LABEL_106;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v156 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3250/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v154, (1 << v156) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v158 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v159 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3250/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v158 & ~(1 << v159), 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.bgPerf;
  if ( !transform )
    goto LABEL_106;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( !this->fields.OnCompleteActorCallback )
    goto LABEL_176;
  v161 = (UnityEngine_Object_o *)*p_seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v160);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v161, 0LL, 0LL);
  v51 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (UnityEngine_Component_o *)*p_seqObject;
    if ( !*p_seqObject )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)transform,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v51 = (const MethodInfo *)transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_106:
    sub_1BCAA3C(transform, v51);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, const MethodInfo *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v51,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_176:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v160);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9634/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  BYTE1(transform[5].fields.m_CachedPtr) = 0;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v163 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(*p_performance, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  v164 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(*p_performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v163, v164, CurrentGroundType, 0, 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__ResetCameraClippingRange((BattlePerformance_o *)transform, 1, 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__releaseChangeBgAssets((BattlePerformance_o *)transform, 0LL);
}


void __fastcall BattleSequenceManager__OverwriteStartTimeToSavedBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
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
  __int64 v22; // x1
  __int64 v23; // x2
  BgmPlayArgsGroup_o *v24; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v25; // x0
  System_Object_array *v26; // x0
  __int64 v27; // x1
  System_Object_array *v28; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v30; // x19
  __int64 v31; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v34; // x1
  __int64 v35; // x19
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  int64_t v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Func_object__bool__o *v58; // x23
  Il2CppObject *object; // x0
  const MethodInfo_36BF22C *v60; // x3
  BgmPlayArgs_o *v61; // x21
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  System_Nullable_long__o v68; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v69; // 0:x1.8
  System_Nullable_float__o v70; // 0:x2.8
  System_Nullable_long__o v71; // 0:x0.16

  if ( (byte_4B188F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_BgmPlayArgs___, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v6, v7);
    sub_1BCA7E0(&System_Func_BgmPlayArgs__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Nullable_long___ctor__, v18, v19);
    sub_1BCA7E0(
      &Method_BattleSequenceManager___c__DisplayClass118_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v20,
      v21);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass118_0_TypeInfo, v22, v23);
    byte_4B188F7 = 1;
  }
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v24 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v24 )
    {
      v25 = BgmPlayArgsGroup__AllArgsListNullExcluded(v24, 0LL);
      v26 = System_Linq_Enumerable__ToArray_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v25,
              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v28 = v26,
            (v26 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                            this->fields.backupBgmPlayArgsGroup,
                                            0LL)) == 0LL) )
      {
        sub_1BCAA3C(v26, v27);
      }
      klass = v26->obj.klass;
      v30 = v26;
      v31 = *(unsigned __int16 *)(&v26->obj.klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v26->obj.klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v31;
          p_offset += 4;
          if ( !v31 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1C1C7C0(v26, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v35 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v30, *(_QWORD *)(p_method + 8));
      if ( !v35 )
        sub_1BCAA3C(0LL, v34);
      while ( 1 )
      {
        v36 = *(_QWORD *)v35;
        v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
        {
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v37;
            v38 += 4;
            if ( !v37 )
              goto LABEL_20;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_20:
          v39 = sub_1C1C7C0(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
          break;
        v43 = sub_1BCAA2C(BattleSequenceManager___c__DisplayClass118_0_TypeInfo, v40, v41, v42);
        BattleSequenceManager___c__DisplayClass118_0___ctor((BattleSequenceManager___c__DisplayClass118_0_o *)v43, 0LL);
        v44 = *(_QWORD *)v35;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v46 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_27;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_27:
          v47 = sub_1C1C7C0(v35, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v35, *(_QWORD *)(v47 + 8));
        if ( !v43 )
          sub_1BCAA3C(v48, v48);
        *(_QWORD *)(v43 + 16) = v48;
        sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 16), v48, v49, v50, v51, v52, v53, v54);
        v58 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BgmPlayArgs__bool__TypeInfo, v55, v56, v57);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v43,
          Method_BattleSequenceManager___c__DisplayClass118_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v28,
                   (System_Func_T__bool__o *)v58,
                   (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v71.fields.value = (int64_t)object[2].klass;
        else
          v71.fields.value = 0LL;
        v61 = *(BgmPlayArgs_o **)(v43 + 16);
        *(_QWORD *)&v68.fields.hasValue = 0LL;
        v68.fields.value = 0LL;
        *(_QWORD *)&v71.fields.hasValue = &v68;
        System_Nullable_long____ctor(v71, Method_System_Nullable_long___ctor__, v60);
        if ( !v61 )
          sub_1BCAA3C(v62, v63);
        v69 = 0LL;
        v70 = 0LL;
        BgmPlayArgs__Update(v61, v69, v70, v68, 0LL);
      }
      v64 = *(_QWORD *)v35;
      v65 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
        {
          --v65;
          v66 += 4;
          if ( !v65 )
            goto LABEL_39;
        }
        v67 = v64 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_39:
        v67 = sub_1C1C7C0(v35, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v67)(v35, *(_QWORD *)(v67 + 8));
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B188F3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, actor, method);
    byte_4B188F3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1BCAA3C(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
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
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int64_t v29; // x1
  Il2CppClass **v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B188F8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleSequenceManager__ReleaseCpk_b__119_0__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Action__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_9637/*"NoblePhantasm_"*/, v12, v13);
    byte_4B188F8 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v46 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v19 = System_Int32__ToString((int32_t)&v46, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_62401220(
                                            (System_String_o *)StringLiteral_9637/*"NoblePhantasm_"*/,
                                            v19,
                                            0LL);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v27 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v29 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v29;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v29, v20, v21, v22, v23, v24, v25);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__119_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v42 = DelayInvokeMethodList->fields._items,
        v43 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v42) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v15);
  }
  v44 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v44 >= v42->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v35,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    DelayInvokeMethodList->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v35, v36, v37, v38, v39, v40, v41);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.fixedVoice = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fixedVoice, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.intactBgmList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.intactBgmList, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BgmPlayArgsGroup_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B188F6 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B188F6 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  v4 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.backupBgmPlayArgsGroup, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
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
  UnityEngine_GameObject_o *actor; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x22
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v21; // x20
  System_String_o **v22; // x8
  __int64 v23; // x9
  __int64 v24; // x25
  System_String_o *v25; // x21
  unsigned __int64 v26; // x26
  unsigned int v27; // w8
  UnityEngine_GameObject_o *v28; // x23
  UnityEngine_Object_o *v29; // x22
  __int64 v30; // x1
  UnityEngine_Transform_o *v31; // x22
  UnityEngine_Transform_o *v32; // x23
  int v33; // s0
  struct BattlePerformance_o *v36; // x8
  __int64 v37; // x1
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v41; // s9
  int v42; // s2
  unsigned int v43; // s0
  float v44; // s1
  struct BattlePerformance_o *v45; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B188FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_9471/*"N_Enemy2"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9472/*"N_Player2"*/, v10, v11);
    byte_4B188FC = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_object )
    goto LABEL_55;
  SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_object,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0LL) )
    return;
  v19 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_55;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v21 = actor;
  v22 = (System_String_o **)((LOBYTE(actor[20].klass) != 0) != (LOBYTE(Component_object[30].klass) != 0)
                           ? &StringLiteral_9471/*"N_Enemy2"*/
                           : &StringLiteral_9472/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v23 = 336LL;
  if ( LOBYTE(actor[20].klass) )
    v23 = 344LL;
  v24 = *(__int64 *)((char *)&performance->klass + v23);
  if ( !v24 )
LABEL_55:
    sub_1BCAA3C(actor, method);
  if ( (int)*(_QWORD *)(v24 + 24) >= 1 )
  {
    v25 = *v22;
    v26 = 0LL;
    v27 = *(_QWORD *)(v24 + 24);
    do
    {
      if ( v26 >= v27 )
        sub_1BCAA44(actor, method);
      v28 = *(UnityEngine_GameObject_o **)(v24 + 32 + 8 * v26);
      v29 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v28, v29, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v25,
                                              0LL);
        if ( !v28 )
          goto LABEL_55;
        v31 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
        if ( !v31 )
          goto LABEL_55;
        v32 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_position(v31, 0LL);
        if ( !v32 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
        v36 = this->fields.performance;
        if ( !v36 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v36->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE6(actor[29].monitor) && LOBYTE(v21[20].klass) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
          actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
          if ( ((unsigned __int8)actor & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_55;
            actor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)PartsActor,
                                                  0LL);
            if ( !actor )
              goto LABEL_55;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0LL);
            y = position.fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0LL);
            v41 = (unsigned int)UnityEngine_Transform__get_position(v31, 0LL);
            *(UnityEngine_Vector3_o *)(&v42 - 2) = UnityEngine_Transform__get_position(v31, 0LL);
            if ( !transform )
              goto LABEL_55;
            v43 = v41;
            v44 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v42 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v28, 0, 0LL);
          v45 = this->fields.performance;
          if ( !v45 )
            goto LABEL_55;
          data = v45->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v21[20].klass) )
            UnityEngine_GameObject__SetActive(v28, 1, 0LL);
        }
      }
      v27 = *(_DWORD *)(v24 + 24);
      ++v26;
    }
    while ( (__int64)v26 < (int)v27 );
  }
}


void __fastcall BattleSequenceManager__SetAfterChangeField(
        BattleSequenceManager_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_1BCAA3C(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.changeFieldAfter,
    (int64_t)actionData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *battleTargetList; // x0
  int32_t v10; // w21

  if ( (byte_4B18908 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7, v8);
    byte_4B18908 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_18;
  v10 = 0;
  while ( v10 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v10,
                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( battleTargetList )
    {
      battleTargetList = (void *)*((_QWORD *)battleTargetList + 3);
      if ( battleTargetList )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        else
          BattleActorControl__setAuraFlip(
            (BattleActorControl_o *)battleTargetList,
            *((_BYTE *)battleTargetList + 480),
            0LL);
        battleTargetList = this->fields.battleTargetList;
        ++v10;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( isReset )
  {
    battleTargetList = this->fields.actor;
    if ( battleTargetList )
    {
      battleTargetList = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)battleTargetList,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1BCAA3C(battleTargetList, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.fixedVoice = voiceId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.fixedVoice,
    (int64_t)voiceId,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct System_String_array *BgmNameListWithIds; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B18909 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B18909 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.intactBgmList,
    (int64_t)BgmNameListWithIds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall BattleSequenceManager__SetMultiTargetBattleEnemy(
        BattleSequenceManager_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *v7; // x8
  __int64 v8; // x1
  UnityEngine_Component_o *PartsActor; // x21
  struct BattlePerformance_o *v10; // x8
  UnityEngine_Transform_o *transform; // x20
  __int64 v12; // x2
  BattleSequenceManager_o *v13; // x19

  v4 = this;
  if ( (byte_4B188FA & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, targetActor, method);
    byte_4B188FA = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_26;
  data = performance->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
    return;
  if ( !targetActor )
    goto LABEL_26;
  if ( !targetActor->fields.isEnemy )
    return;
  this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
  if ( !this )
    goto LABEL_26;
  this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUp((BattleServantData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
    if ( !this )
      goto LABEL_26;
    this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUnder((BattleServantData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
  }
  v7 = v4->fields.performance;
  if ( !v7 || (this = (BattleSequenceManager_o *)v7->fields.data) == 0LL )
LABEL_26:
    sub_1BCAA3C(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
    v10 = v4->fields.performance;
    if ( v10 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v10->fields.root_field, 0LL);
        if ( PartsActor )
        {
          transform = UnityEngine_Component__get_transform(PartsActor, 0LL);
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)targetActor,
                                              0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
            this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(PartsActor, 0LL);
            v13 = this;
            if ( !byte_4B109C1 )
            {
              this = (BattleSequenceManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, targetActor, v12);
              byte_4B109C1 = 1;
            }
            if ( v13 )
            {
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)v13,
                UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
}


void __fastcall BattleSequenceManager__SetPreLoadStandFigureData(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  this->fields.loadStandFigureId = svtId;
  this->fields.loadStandFigureLimitCount = limitImgCnt;
  this->fields.faceType = faceType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w21
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4B188E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7, v8);
    byte_4B188E1 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v11),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(actor, isStart);
  }
  v12 = 0;
  while ( v12 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v12,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( actor )
    {
      klass = actor[1].klass;
      if ( klass )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          *(BattleFBXComponent_o **)&klass->_1.byval_arg.bits,
          isStart,
          v13);
        actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList;
        ++v12;
        if ( actor )
          continue;
      }
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetTempShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        BattleFBXComponent_o *fbx,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B188E2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, fbx, isStart);
    sub_1BCA7E0(&StringLiteral_16777/*"_y0"*/, v6, v7);
    byte_4B188E2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, fbx);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v8 )
  {
    if ( !fbx )
      sub_1BCAA3C(v8, v9);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16777/*"_y0"*/, 0LL);
      else
        BattleFBXComponent__RevertShaderFloatProperty(fbx, 0LL);
    }
  }
}


void __fastcall BattleSequenceManager__SetupDemoActor(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_array *playerList,
        UnityEngine_GameObject_array *enemyList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *seqObject; // x0
  Il2CppObject *Component_object; // x20
  unsigned __int64 v13; // x27
  unsigned __int64 v14; // x26
  System_String_o *v15; // x0
  BattleSequenceManager_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v22; // x0
  BattleSequenceManager_o *v23; // x0
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x21
  unsigned __int64 v27; // x8
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B188E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList, enemyList);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2257/*"Actors/Actor"*/, v9, v10);
    byte_4B188E0 = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1BCAA3C(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v13 = 0LL;
  do
  {
    v14 = v13 + 1;
    v28 = v13 + 1;
    v15 = System_Int32__ToString((int32_t)&v28, 0LL);
    v16 = (BattleSequenceManager_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_2257/*"Actors/Actor"*/, v15, 0LL);
    v19 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v16,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v16,
                                    v17);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_27;
      max_length = playerList->max_length;
      if ( (__int64)v13 < (int)max_length )
      {
        if ( v13 >= max_length )
LABEL_28:
          sub_1BCAA44(seqObject, playerList);
        seqObject = playerList->m_Items[v13];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v19 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v19,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v13;
  }
  while ( v14 != 3 );
  for ( i = 0LL; i != 3; ++i )
  {
    v28 = i + 4;
    v22 = System_Int32__ToString((int32_t)&v28, 0LL);
    v23 = (BattleSequenceManager_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_2257/*"Actors/Actor"*/, v22, 0LL);
    v26 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v23,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v23,
                                    v24);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v27 = enemyList->max_length;
      if ( (__int64)i < (int)v27 )
      {
        if ( i >= v27 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v26 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v26,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
  }
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
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
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  void *actor; // x0
  __int64 v44; // x1
  Il2CppObject *Component_object; // x23
  __int64 v46; // x2
  __int64 v47; // x3
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v49; // x25
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  PartyOrganizationUtility_o *v56; // x21
  int v57; // w8
  void *v58; // x25
  unsigned int v59; // w20
  __int64 v60; // x8
  int v61; // w8
  void *v62; // x25
  unsigned int v63; // w20
  __int64 v64; // x8
  __int64 v65; // x2
  __int64 v66; // x3
  int v67; // w8
  void *v68; // x25
  unsigned int v69; // w20
  __int64 v70; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v72; // x25
  int klass_low; // w28
  System_Collections_Generic_HashSet_int__o *v74; // x22
  int v75; // w29
  int i; // w24
  __int64 v77; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v81; // x1
  Il2CppObject *v82; // x0
  __int64 v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int32_t v90; // w21
  struct UnityEngine_GameObject_o *v91; // x21
  Il2CppObject *v92; // x23
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  const MethodInfo *v99; // x2
  __int64 v100; // x1
  BattlePerformance_o *v101; // x0
  int32_t v102; // w20
  __int64 v103; // x1
  UnityEngine_Object_o *v104; // x21
  _BOOL8 v105; // x0
  __int64 v106; // x1
  Il2CppObject *v107; // x22
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  BattleSequenceManager_BattleTarget_o *v111; // x21
  __int64 v112; // x1
  BattlePerformance_o *v113; // x0
  __int64 ServantPosIndex; // x0
  __int64 v115; // x1
  __int64 v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v125; // x9
  __int64 size; // x10
  Il2CppClass **v127; // x8
  int v128; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v129; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B188F9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, method, v2);
    sub_1BCA7E0(&BattleSequenceManager_BattleTarget_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass121_0__SetupTargetInfo_b__0__, v31, v32);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass121_0_TypeInfo, v33, v34);
    byte_4B188F9 = 1;
  }
  memset(&j, 0, sizeof(j));
  v35 = sub_1BCAA2C(BattleSequenceManager___c__DisplayClass121_0_TypeInfo, method, v2, v3);
  BattleSequenceManager___c__DisplayClass121_0___ctor((BattleSequenceManager___c__DisplayClass121_0_o *)v35, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SingleTarget, 0LL, v36, v37, v38, v39, v40, v41);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[26].monitor;
      v49 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v42,
                                                           v46,
                                                           v47);
      System_Collections_Generic_HashSet_int____ctor(
        v49,
        (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v35 )
      {
        *(_QWORD *)(v35 + 16) = v49;
        v56 = (PartyOrganizationUtility_o *)(v35 + 16);
        sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)v49, v50, v51, v52, v53, v54, v55);
        if ( monitor )
        {
          actor = BattleActionData__getDamageList(monitor, -1, 0LL);
          if ( actor )
          {
            v57 = *((_DWORD *)actor + 6);
            v58 = actor;
            if ( v57 >= 1 )
            {
              v59 = 0;
              while ( v59 < v57 )
              {
                v60 = *((_QWORD *)v58 + (int)v59 + 4);
                if ( !v60 )
                  goto LABEL_78;
                v42 = *(unsigned int *)(v60 + 28);
                if ( (_DWORD)v42 )
                {
                  actor = v56->klass;
                  if ( !v56->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v42,
                                    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v57 = *((_DWORD *)v58 + 6);
                if ( (int)++v59 >= v57 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1BCAA44(actor, v42);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(monitor, -1, 0LL);
            if ( actor )
            {
              v61 = *((_DWORD *)actor + 6);
              v62 = actor;
              if ( v61 >= 1 )
              {
                v63 = 0;
                while ( v63 < v61 )
                {
                  v64 = *((_QWORD *)v62 + (int)v63 + 4);
                  if ( !v64 )
                    goto LABEL_78;
                  v42 = *(unsigned int *)(v64 + 40);
                  if ( (_DWORD)v42 )
                  {
                    actor = v56->klass;
                    if ( !v56->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v42,
                                      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v61 = *((_DWORD *)v62 + 6);
                  if ( (int)++v63 >= v61 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(monitor, -1, 0LL);
              if ( actor )
              {
                v67 = *((_DWORD *)actor + 6);
                v68 = actor;
                if ( v67 >= 1 )
                {
                  v69 = 0;
                  while ( v69 < v67 )
                  {
                    v70 = *((_QWORD *)v68 + (int)v69 + 4);
                    if ( !v70 )
                      goto LABEL_78;
                    v42 = *(unsigned int *)(v70 + 28);
                    if ( (_DWORD)v42 )
                    {
                      actor = v56->klass;
                      if ( !v56->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v42,
                                        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v67 = *((_DWORD *)v68 + 6);
                    if ( (int)++v69 >= v67 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v72 = (System_Action_object__o *)sub_1BCAA2C(
                                                     System_Action_BattleActionData_MoveToSubMember__TypeInfo,
                                                     v42,
                                                     v65,
                                                     v66);
                  System_Action_object____ctor(
                    v72,
                    (Il2CppObject *)v35,
                    Method_BattleSequenceManager___c__DisplayClass121_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v72,
                    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[30].klass);
                v74 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_HashSet_int__TypeInfo,
                                                                     v42,
                                                                     v65,
                                                                     v66);
                System_Collections_Generic_HashSet_int____ctor(
                  v74,
                  (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v56->klass;
                if ( v56->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v129,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v128 = 0;
                  j = v129;
                  v75 = 0;
LABEL_41:
                  for ( i = v75; ; ++i )
                  {
                    v75 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1BCAA3C(0LL, v77);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1BCAA3C(0LL, v81);
                    v82 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v82 )
                      sub_1BCAA3C(0LL, v83);
                    if ( (klass_low != 0) == (LOBYTE(v82[30].klass) != 0) )
                    {
                      ++v128;
                      goto LABEL_41;
                    }
                    if ( !v74 )
                      sub_1BCAA3C(v82, v83);
                    System_Collections_Generic_HashSet_int___Add(
                      v74,
                      current,
                      (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v128 && i == 1 )
                  {
                    v56->klass = (PartyOrganizationUtility_c *)v74;
                    sub_1BCA784(v56, (int64_t)v74, v84, v85, v86, v87, v88, v89);
                  }
                  actor = v56->klass;
                  if ( v56->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v129,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v90 = -1;
                      for ( j = v129;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v90 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v90, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v91 = (struct UnityEngine_GameObject_o *)actor;
                      v92 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v91;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&this->fields.SingleTarget,
                        (int64_t)v91,
                        v93,
                        v94,
                        v95,
                        v96,
                        v97,
                        v98);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v92, v99);
                    }
                    if ( v74 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v129,
                        v74,
                        (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v129;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v101 = this->fields.performance;
                        if ( !v101 )
                          sub_1BCAA3C(0LL, v100);
                        v102 = (int32_t)j.fields._current;
                        v104 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                         v101,
                                                         (int32_t)j.fields._current,
                                                         0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
                        v105 = UnityEngine_Object__op_Equality(v104, 0LL, 0LL);
                        if ( !v105 )
                        {
                          if ( !v104 )
                            sub_1BCAA3C(v105, v106);
                          v107 = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v104,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v111 = (BattleSequenceManager_BattleTarget_o *)sub_1BCAA2C(
                                                                           BattleSequenceManager_BattleTarget_TypeInfo,
                                                                           v108,
                                                                           v109,
                                                                           v110);
                          BattleSequenceManager_BattleTarget___ctor(v111, 0LL);
                          v113 = this->fields.performance;
                          if ( !v113 )
                            sub_1BCAA3C(0LL, v112);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v113, v102, 0LL);
                          if ( !v111 )
                            sub_1BCAA3C(ServantPosIndex, v115);
                          BattleSequenceManager_BattleTarget__setup(
                            v111,
                            (BattleActorControl_o *)v107,
                            ServantPosIndex,
                            0LL);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1BCAA3C(0LL, v116);
                          items = battleTargetList->fields._items;
                          v125 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1BCAA3C(battleTargetList, v116);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v111,
                              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v127 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v127[4] = (Il2CppClass *)v111;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)(v127 + 4),
                              (int64_t)v111,
                              v117,
                              v118,
                              v119,
                              v120,
                              v121,
                              v122);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
LABEL_78:
    sub_1BCAA3C(actor, v42);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCAA3C(0LL, method);
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SwitchPopupFullScreen(
        BattleSequenceManager_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *infoComp; // x21
  struct BattlePerformance_o *v7; // x8

  v4 = this;
  if ( (byte_4B188EF & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isFullScreen, method);
    byte_4B188EF = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_11;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFullScreen);
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(infoComp, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.performance;
    if ( v7 )
    {
      this = (BattleSequenceManager_o *)v7->fields.infoComp;
      if ( this )
      {
        BattleInformationComponent__SwitchPopupFullScreen((BattleInformationComponent_o *)this, isFullScreen, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(this, isFullScreen);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v5; // x19
  BattleSequenceManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattlePerformance_o *performance; // x8
  __int64 v14; // x1
  Il2CppObject *Component_object; // x21
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  __int64 v20; // x1
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v22; // x4
  BaseMonoBehaviour_o *v23; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *m_CancellationTokenSource; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_object__o *npEndDeleteObjects; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v38; // x1
  Il2CppClass **v39; // x0
  int v40; // w22
  UnityEngine_Transform_o *v41; // x0
  BattleSyncTransformComponent_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v52; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4B188FE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___,
      tlcont,
      *(_QWORD *)&targetPosIndex);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Object__Add__, v9, v10);
    this = (BattleSequenceManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B188FE = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = v6->fields.performance;
    if ( !performance )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)performance->fields.data;
    if ( !this )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)BattleData__get_IsEnemyPosCountNormal((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    if ( !v5 )
      goto LABEL_43;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v5,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      Component_object = (Il2CppObject *)v6->fields.defaultSyncSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Component_object )
        goto LABEL_43;
      if ( BattleSyncTransformComponent__get_IsNotExecSync((BattleSyncTransformComponent_o *)Component_object, 0LL) )
        return;
      TargetPosIndexTransform = (UnityEngine_Object_o *)BattleSequenceManager__GetTargetPosIndexTransform(
                                                          v6,
                                                          targetPosIndex + 3,
                                                          v17);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0LL, 0LL) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v23 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v23 )
          goto LABEL_43;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        m_CancellationTokenSource = (UnityEngine_Transform_o *)v23[9].fields.m_CancellationTokenSource;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v22);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v23,
                                            dummyActorPrefab,
                                            m_CancellationTokenSource,
                                            TargetFieldPosNode,
                                            0LL);
        if ( !this )
          goto LABEL_43;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v5, transform, 0LL);
        npEndDeleteObjects = (System_Collections_Generic_List_object__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                            (WellFired_USTimelineContainer_o *)v5,
                                            0LL);
        if ( !this )
          goto LABEL_43;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !npEndDeleteObjects )
          goto LABEL_43;
        items = npEndDeleteObjects->fields._items;
        v36 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v38 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v38;
          sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v38, v29, v30, v31, v32, v33, v34);
        }
        v40 = 0;
      }
      else
      {
        v40 = 1;
      }
      v41 = WellFired_USTimelineContainer__get_AffectedObject((WellFired_USTimelineContainer_o *)v5, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_object_(
                                          v41,
                                          (const MethodInfo_2EFD8A8 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v42 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0LL);
      if ( v40 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v42;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v49 = *(_QWORD *)&this->fields.m_CachedPtr;
        v50 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v49 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v49 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = v49 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v52 + 32) = tlcont;
          sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 32), (int64_t)tlcont, v43, v44, v45, v46, v47, v48);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1BCAA3C(this, tlcont);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
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
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x21
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x0
  System_Collections_ICollection_o *Components_object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v26; // x1
  void *v27; // x8
  unsigned __int64 v28; // x26
  NoblePhantasmTargetOverwriteTransform_o *v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1890E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B1890E = 1;
  }
  memset(&v31, 0, sizeof(v31));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      battleTargetList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v16 )
        break;
      if ( !v31.fields._current )
        sub_1BCAA3C(v16, v17);
      monitor = (UnityEngine_Object_o *)v31.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v19 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v19 )
      {
        if ( !monitor )
          sub_1BCAA3C(v19, v20);
        v21 = (UnityEngine_Object_o *)monitor[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
        if ( !UnityEngine_Object__op_Equality(v21, 0LL, 0LL) )
        {
          v23 = (UnityEngine_GameObject_o *)monitor[1].monitor;
          if ( !v23 )
            sub_1BCAA3C(0LL, v22);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v23,
                                                                    (const MethodInfo_2F6302C *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1BCAA3C(IsNullOrEmpty, v26);
            v27 = Components_object[1].monitor;
            if ( (int)v27 >= 1 )
            {
              v28 = 0LL;
              do
              {
                if ( v28 >= (unsigned int)v27 )
                  sub_1BCAA44(IsNullOrEmpty, v26);
                v29 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v28);
                if ( isOverwrite )
                {
                  if ( !v29 )
                    sub_1BCAA3C(0LL, v26);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v29, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v29 )
                    sub_1BCAA3C(0LL, v26);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v29, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v27) = Components_object[1].monitor;
                ++v28;
              }
              while ( (__int64)v28 < (int)v27 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  }
}


void __fastcall BattleSequenceManager__TdDelayEnd(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleSequenceManager__CrossFadeBgm(this, method);
  BattleSequenceManager__ReleaseCpk(this, v3);
}


bool __fastcall BattleSequenceManager__TryGetAfterChangeBgm(
        BattleSequenceManager_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o **changeBgm,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *TdAfterChangeBgm_k__BackingField; // x19

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCAA3C(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)changeBgm,
    (int64_t)TdAfterChangeBgm_k__BackingField,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return TdAfterChangeBgm_k__BackingField != 0LL;
}


void __fastcall BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
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
  float delayInvokeTimer; // s8
  __int64 v13; // x1
  float v14; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B188D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Action__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v10, v11);
    byte_4B188D9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v14 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v14;
    if ( v14 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        DelayInvokeMethodList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v19.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v19.fields._current[1].monitor)(
            v19.fields._current[4].klass,
            v19.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v16 = this->fields.DelayInvokeMethodList;
      if ( !v16 )
LABEL_14:
        sub_1BCAA3C(DelayInvokeMethodList, v13);
      size = v16->fields._size;
      v18 = v16->fields._version + 1;
      v16->fields._size = 0;
      v16->fields._version = v18;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
    }
  }
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBG(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, int32_t, int32_t, Il2CppMethodPointer))changeFieldAfter->klass->vtable._4_SetTakeOverBG.method)(
      changeFieldAfter,
      id,
      type,
      changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.methodPtr);
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, System_String_o *, _QWORD, void *))changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.method)(
      changeFieldAfter,
      bgmName,
      0LL,
      changeFieldAfter->klass[1]._1.image);
}


System_Collections_IEnumerator_o *__fastcall BattleSequenceManager__WaitEndSequence(
        BattleSequenceManager_o *this,
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

  if ( (byte_4B188F1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSequenceManager__WaitEndSequence_d__112_TypeInfo, method, v2);
    byte_4B188F1 = 1;
  }
  v5 = sub_1BCAA2C(BattleSequenceManager__WaitEndSequence_d__112_TypeInfo, method, v2, v3);
  BattleSequenceManager__WaitEndSequence_d__112___ctor((BattleSequenceManager__WaitEndSequence_d__112_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__119_0(BattleSequenceManager_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_string__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18915 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v12, v13);
    byte_4B18915 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v22.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v17);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v18 = this->fields.ReleaseSoundNames;
  if ( !v18 )
LABEL_14:
    sub_1BCAA3C(ReleaseSoundNames, method);
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
}


void __fastcall BattleSequenceManager___setup_b__92_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1BCAA3C(this, comp);
  SwitchActiveBaseConditionComponent__SwitchActive(comp, performance->fields.data, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__addServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_4B188E4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, voiceMaster, *(_QWORD *)&chrId);
    byte_4B188E4 = 1;
  }
  FlagRequestNumber = System_String__Concat_62401220((System_String_o *)StringLiteral_16290/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__AddServantVoicePlayed_43253260((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BCAA3C(FlagRequestNumber, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__changeBg(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  __int64 v21; // x1
  __int64 v22; // x2
  BattlePerformance_o *performance; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x24
  __int64 v28; // x0
  __int64 v29; // x1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4B188ED & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&tp);
    sub_1BCA7E0(&Method_BattleSequenceManager_OnBgChanged__, v21, v22);
    byte_4B188ED = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.BgChangedCallback,
    (int64_t)callback,
    *(int64_t *)&tp,
    parentCamera,
    (System_String_o *)callback,
    (BattleSetupInfo_o *)method,
    v8,
    v9);
  performance = this->fields.performance;
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1BCAA3C(v28, v29);
  v30.fields.z = v15;
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  v30.fields.x = v17;
  v30.fields.y = v16;
  BattlePerformance__ForceChangeBg(performance, id, tp, v30, v31, 1, parentCamera, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__checkServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_4B188E6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, voiceMaster, *(_QWORD *)&chrId);
    byte_4B188E6 = 1;
  }
  FlagRequestNumber = System_String__Concat_62401220((System_String_o *)StringLiteral_16290/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( !(_DWORD)FlagRequestNumber )
    return (char)FlagRequestNumber;
  performance = this->fields.performance;
  if ( !performance
    || (v12 = (int)FlagRequestNumber, (FlagRequestNumber = (System_String_o *)performance->fields.data) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4B18903 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5, v6);
    byte_4B18903 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1BCAA3C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18905 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, method, v2);
    byte_4B18905 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *actor; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4B188D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B188D5 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v8 = this->fields.actor;
  if ( !v8 )
    sub_1BCAA3C(0LL, v7);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v8,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
}


bool __fastcall BattleSequenceManager__get_ExistChangeFieldAfter(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.changeFieldAfter != 0LL;
}


bool __fastcall BattleSequenceManager__get_FarClippingLock(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1

  if ( (byte_4B188D8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v7, v8);
    byte_4B188D8 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1C6BC(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = **(UnityEngine_Object_o ***)(v10 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v13);
  return BYTE1(Instance[8].monitor) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v10; // x8
  struct BattleData_o *v11; // x8

  if ( (byte_4B188D6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B188D6 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v5 )
    return 0;
  v7 = this->fields.performance;
  if ( !v7 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v7->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v5 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v5 )
    return 0;
  v10 = this->fields.performance;
  if ( !v10 || (v11 = v10->fields.data) == 0LL )
LABEL_14:
    sub_1BCAA3C(v5, v6);
  return v11->fields.systemflg_acceleration > 1;
}


bool __fastcall BattleSequenceManager__get_IsDemoMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.DemoMode;
}


float __fastcall BattleSequenceManager__get_NowTargetAlpha(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.nowTargetAlpha;
}


BattlePerformance_o *__fastcall BattleSequenceManager__get_Performance(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.performance;
}


int32_t __fastcall BattleSequenceManager__get_SeqId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields._SeqId_k__BackingField;
}


int32_t __fastcall BattleSequenceManager__get_TreasureDeviceId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceId;
}


bool __fastcall BattleSequenceManager__get_isAuthTDAccelerate(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  __int64 v8; // x1
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Object_o *data; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v13; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v15; // x20
  struct BattlePerformance_o *v17; // x8

  if ( (byte_4B188D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B188D7 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v9->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  Component_object = (void *)UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
    goto LABEL_22;
  Component_object = this->fields.actor;
  if ( !Component_object )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Component_object,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v13 = this->fields.performance;
  if ( !v13 )
    goto LABEL_27;
  nowAction = v13->fields.nowAction;
  v15 = (BattleServantData_o *)*((_QWORD *)Component_object + 57);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v15 )
LABEL_27:
    sub_1BCAA3C(Component_object, v8);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 57), 0LL) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v15, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v17 = this->fields.performance;
  if ( !v17 )
    goto LABEL_27;
  Component_object = v17->fields.data;
  if ( !Component_object )
    goto LABEL_27;
  if ( *((_BYTE *)Component_object + 643) )
    return 0;
  return BattleData__IsHighSpeedOption((BattleData_o *)Component_object, 0LL);
}


void __fastcall BattleSequenceManager__init(
        BattleSequenceManager_o *this,
        BattlePerformance_o *performance,
        UnityEngine_GameObject_o *actor,
        UnityEngine_GameObject_array *players,
        UnityEngine_GameObject_array *enemies,
        UnityEngine_Camera_o *camera,
        UnityEngine_GameObject_o *bg,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct UnityEngine_Transform_o *parent; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  const MethodInfo *v74; // x1
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Collections_Generic_Dictionary_object__int__o *v78; // x20
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  System_Collections_Generic_HashSet_T__o *v88; // x20
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7

  if ( (byte_4B188EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance, actor);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_string__TypeInfo, v19, v20);
    byte_4B188EB = 1;
  }
  this->fields.performance = performance;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.performance,
    (int64_t)performance,
    (int64_t)actor,
    (int32_t)players,
    (System_String_o *)enemies,
    (BattleSetupInfo_o *)camera,
    (FollowerInfo_o *)bg,
    (PartyListViewItem_o *)method);
  this->fields.actor = actor;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actor, (int64_t)actor, v21, v22, v23, v24, v25, v26);
  this->fields.playerActors = players;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playerActors, (int64_t)players, v27, v28, v29, v30, v31, v32);
  this->fields.enemyActors = enemies;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enemyActors, (int64_t)enemies, v33, v34, v35, v36, v37, v38);
  this->fields.actorCamera = camera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actorCamera, (int64_t)camera, v39, v40, v41, v42, v43, v44);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.effectCamera,
    (int64_t)middleCamera,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cutInCamera,
    (int64_t)cutIncamera,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1BCAA3C(actorCamera, v46);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.originalCameraRoot,
    (int64_t)parent,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.bgObject = bg;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgObject, (int64_t)bg, v68, v69, v70, v71, v72, v73);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v74);
  v78 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  v75,
                                                                  v76,
                                                                  v77);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v78,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v78;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int64_t)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v88 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_string__TypeInfo,
                                                     v85,
                                                     v86,
                                                     v87);
  System_Collections_Generic_HashSet_object____ctor(
    v88,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v88;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playedAudioGroupIdHash,
    (int64_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
}


bool __fastcall BattleSequenceManager__isFixedWithNoVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_String_o *fixedVoice; // x8

  fixedVoice = this->fields.fixedVoice;
  return fixedVoice && fixedVoice->fields._stringLength == 0;
}


bool __fastcall BattleSequenceManager__isNotPlaySoundLimitCount(
        BattleSequenceManager_o *this,
        System_Int32_array *limitCounts,
        const MethodInfo *method)
{
  if ( (byte_4B18906 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, limitCounts, method);
    byte_4B18906 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B188E8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2253/*"Actor"*/, name, method);
    sub_1BCA7E0(&StringLiteral_16942/*"animCamLoc"*/, v4, v5);
    byte_4B188E8 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2253/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16942/*"animCamLoc"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__loadSequence(
        BattleSequenceManager_o *this,
        int32_t chrId,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t treasureDeviceLv,
        int32_t npChargeStage,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
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
  __int64 v27; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *Component_object; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  AssetLoader_LoadEndDataHandler_o *v52; // x19
  __int64 v53; // x1

  if ( (byte_4B188DA & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&chrId, *(_QWORD *)&treasureDeviceId);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17, v18);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass79_0__loadSequence_b__0__, v21, v22);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_9634/*"NoblePhantasm/CutIns"*/, v25, v26);
    byte_4B188DA = 1;
  }
  v27 = sub_1BCAA2C(
          BattleSequenceManager___c__DisplayClass79_0_TypeInfo,
          *(_QWORD *)&chrId,
          *(_QWORD *)&treasureDeviceId,
          *(_QWORD *)&limitCount);
  BattleSequenceManager___c__DisplayClass79_0___ctor((BattleSequenceManager___c__DisplayClass79_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_10;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 64) = onComplete;
  *(_DWORD *)(v27 + 24) = chrId;
  *(_DWORD *)(v27 + 28) = limitCount;
  *(_DWORD *)(v27 + 32) = treasureDeviceId;
  *(_DWORD *)(v27 + 36) = treasureDeviceLv;
  *(_DWORD *)(v27 + 40) = npChargeStage;
  *(_DWORD *)(v27 + 56) = overwriteSvtVoiceId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 64), (int64_t)onComplete, v36, v37, v38, v39, v40, v41);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v27 + 24);
  this->fields.limitCount = *(_DWORD *)(v27 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v27 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v27 + 56);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v27 + 48) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 48), (int64_t)Component_object, v43, v44, v45, v46, v47, v48);
  actor = *(UnityEngine_GameObject_o **)(v27 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v27 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v27 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(actor, v29);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v52 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v49, v50, v51);
  AssetLoader_LoadEndDataHandler___ctor(
    v52,
    (Il2CppObject *)v27,
    Method_BattleSequenceManager___c__DisplayClass79_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v53);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9634/*"NoblePhantasm/CutIns"*/, v52, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__play(
        BattleSequenceManager_o *this,
        bool isOpponent,
        bool isDemoMode,
        System_Action_USSequencer__o *callback,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v7; // x19
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
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x8
  int64_t v56; // x0
  struct UnityEngine_GameObject_array **p_saveWaitPlayer; // x24
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct BattlePerformance_o *v64; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  int64_t v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x1
  UnityEngine_Object_o *seqObject; // x23
  __int64 v75; // x1
  int32_t chrId; // w23
  struct BattlePerformance_o *v77; // x8
  struct BattlePerformance_o *v78; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w25
  char v81; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v83; // w25
  char v84; // w0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  System_Collections_Generic_List_bool__o *v88; // x25
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct BattlePerformance_o *v96; // x8
  struct UnityEngine_GameObject_array *v97; // x29
  __int64 v98; // x8
  unsigned __int64 v99; // x20
  UnityEngine_Object_o *v100; // x25
  const MethodInfo *v101; // x2
  BattleServantData_o *v102; // x26
  System_Collections_Generic_List_bool__o *v103; // x27
  struct System_Boolean_array *items; // x8
  _QWORD *v105; // x9
  __int64 size; // x10
  __int64 v107; // x8
  _QWORD *v108; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct UnityEngine_GameObject_array *v116; // x8
  __int64 v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  struct BattlePerformance_o *v124; // x8
  struct UnityEngine_GameObject_array *v125; // x8
  __int64 v126; // x0
  struct BattlePerformance_o *v127; // x8
  struct UnityEngine_GameObject_array *v128; // x27
  __int64 v129; // x8
  unsigned __int64 v130; // x20
  UnityEngine_Object_o *v131; // x24
  const MethodInfo *v132; // x2
  BattleServantData_o *v133; // x25
  System_Collections_Generic_List_bool__o *v134; // x26
  struct System_Boolean_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct UnityEngine_GameObject_array *v147; // x8
  __int64 v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  struct BattlePerformance_o *v155; // x8
  struct UnityEngine_GameObject_array *v156; // x8
  __int64 v157; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  BattleSequenceManager_o *v165; // x22
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  BattleSequenceManager_o *v172; // x23
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  __int64 v179; // x1
  BattleSequenceManager_c *v180; // x0
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  BattleSequenceManager_o *v187; // x23
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  BattleSequenceManager_o *v200; // x23
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  __int64 v213; // x1
  System_Collections_Hashtable_o *v214; // x0
  System_String_o *BgmName; // x0
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  const MethodInfo *v222; // x2
  __int64 v223; // x2
  __int64 v224; // x3
  BattleSequenceManager_o *v225; // x21
  PartyOrganizationUtility_o *p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v228; // x24
  System_Delegate_o *v229; // x0
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  int64_t v236; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v237; // x1
  int64_t v238; // x2
  int32_t v239; // w3
  System_String_o *v240; // x4
  BattleSetupInfo_o *v241; // x5
  FollowerInfo_o *v242; // x6
  PartyListViewItem_o *v243; // x7
  __int64 v244; // x1
  const MethodInfo *v245; // x2
  __int64 v246; // x0
  System_Action_USSequencer__o *v247; // [xsp+8h] [xbp-88h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-78h]
  int v249; // [xsp+24h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-68h] BYREF
  int v251; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4B188EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent, isDemoMode);
    sub_1BCA7E0(&BattleSequenceManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&CommonUI_TypeInfo, v10, v11);
    sub_1BCA7E0(&FSUtility_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v16, v17);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_bool__TypeInfo, v26, v27);
    sub_1BCA7E0(&object___TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v32, v33);
    sub_1BCA7E0(&float_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&StringLiteral_12921/*"ShowNobleInfo"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_9967/*"OnChangeBgmVolume"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_3250/*"Battle2D"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v50, v51);
    this = (BattleSequenceManager_o *)sub_1BCA7E0(&iTween_TypeInfo, v52, v53);
    byte_4B188EE = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v56 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, p_actorlist->max_length);
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->fields.saveWaitPlayer, v56, v58, v59, v60, v61, v62, v63);
  v64 = v7->fields.performance;
  if ( !v64 )
    goto LABEL_142;
  e_actorlist = v64->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v66 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v66;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->fields.saveWaitEnemy, v66, v67, v68, v69, v70, v71, v72);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    chrId = v7->fields.chrId;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v75);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, isOpponent);
        this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      }
      if ( **(_BYTE **)&this->fields.overwriteSvtVoiceId )
      {
        if ( !CommonUI_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, isOpponent);
        CommonUI__SetForceObi_16_9(1, 0LL);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_12921/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v77 = v7->fields.performance;
    if ( !v77 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v77->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v78 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v78 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v78->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_142;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v81 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3250/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v81), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_142;
    v83 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v84 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3250/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v84) | v83, 0LL);
    v88 = (System_Collections_Generic_List_bool__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_bool__TypeInfo,
                                                       v85,
                                                       v86,
                                                       v87);
    System_Collections_Generic_List_bool____ctor(
      v88,
      (const MethodInfo_35583C4 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v88;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1BCA784((PartyOrganizationUtility_o *)&v7->fields.ActorActiveList, (int64_t)v88, v90, v91, v92, v93, v94, v95);
    v96 = v7->fields.performance;
    if ( !v96 )
      goto LABEL_142;
    v97 = v96->fields.p_actorlist;
    v247 = callback;
    if ( !v97 )
      goto LABEL_142;
    v98 = *(_QWORD *)&v97->max_length;
    if ( (int)v98 >= 1 )
    {
      v99 = 0LL;
      while ( v99 < (unsigned int)v98 )
      {
        v100 = (UnityEngine_Object_o *)v97->m_Items[v99];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOpponent);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v100, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v100 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v100,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v102 = *(BattleServantData_o **)&this[1].fields.servantId;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v101);
          v103 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                              (UnityEngine_GameObject_o *)v100,
                                              0LL);
          if ( !v103 )
            goto LABEL_142;
          items = v103->fields._items;
          v105 = Method_System_Collections_Generic_List_bool__Add__;
          ++v103->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v103->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v103,
              (unsigned __int8)this & 1,
              *(const MethodInfo_3558C28 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
          }
          else
          {
            v103->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          if ( !v102 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v102, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || v102->fields.isAnimPlayedWithdraw )
          {
            v116 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v99 >= v116->max_length )
              break;
            v117 = (__int64)v116 + 8 * v99;
            *(_QWORD *)(v117 + 32) = v100;
            sub_1BCA784((PartyOrganizationUtility_o *)(v117 + 32), (int64_t)v100, v110, v111, v112, v113, v114, v115);
            v124 = v7->fields.performance;
            if ( !v124 )
              goto LABEL_142;
            v125 = v124->fields.p_actorlist;
            if ( !v125 )
              goto LABEL_142;
            if ( v99 >= v125->max_length )
              break;
            v126 = (__int64)v125 + 8 * v99;
            *(_QWORD *)(v126 + 32) = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 32), 0LL, v118, v119, v120, v121, v122, v123);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v100, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v107 = *(_QWORD *)&this->fields.m_CachedPtr;
          v108 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v107 )
            goto LABEL_142;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v107 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_3558C28 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v107 + m_CancellationTokenSource_low + 32) = 0;
          }
        }
        LODWORD(v98) = v97->max_length;
        if ( (__int64)++v99 >= (int)v98 )
          goto LABEL_57;
      }
LABEL_143:
      sub_1BCAA44(this, isOpponent);
    }
LABEL_57:
    v127 = v7->fields.performance;
    if ( !v127 )
      goto LABEL_142;
    v128 = v127->fields.e_actorlist;
    p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
    if ( !v128 )
      goto LABEL_142;
    v129 = *(_QWORD *)&v128->max_length;
    if ( (int)v129 >= 1 )
    {
      v130 = 0LL;
      while ( v130 < (unsigned int)v129 )
      {
        v131 = (UnityEngine_Object_o *)v128->m_Items[v130];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOpponent);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v131, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v131 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v131,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v133 = *(BattleServantData_o **)&this[1].fields.servantId;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v132);
          v134 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                              (UnityEngine_GameObject_o *)v131,
                                              0LL);
          if ( !v134 )
            goto LABEL_142;
          v135 = v134->fields._items;
          v136 = Method_System_Collections_Generic_List_bool__Add__;
          ++v134->fields._version;
          if ( !v135 )
            goto LABEL_142;
          v137 = v134->fields._size;
          if ( (unsigned int)v137 >= v135->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v134,
              (unsigned __int8)this & 1,
              *(const MethodInfo_3558C28 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
          }
          else
          {
            v134->fields._size = v137 + 1;
            v135->m_Items[v137 + 4] = (unsigned __int8)this & 1;
          }
          if ( !v133 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v133, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || v133->fields.isAnimPlayedWithdraw )
          {
            v147 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_142;
            if ( v130 >= v147->max_length )
              goto LABEL_143;
            v148 = (__int64)v147 + 8 * v130;
            *(_QWORD *)(v148 + 32) = v131;
            sub_1BCA784((PartyOrganizationUtility_o *)(v148 + 32), (int64_t)v131, v141, v142, v143, v144, v145, v146);
            v155 = v7->fields.performance;
            if ( !v155 )
              goto LABEL_142;
            v156 = v155->fields.e_actorlist;
            if ( !v156 )
              goto LABEL_142;
            if ( v130 >= v156->max_length )
              goto LABEL_143;
            v157 = (__int64)v156 + 8 * v130;
            *(_QWORD *)(v157 + 32) = 0LL;
            sub_1BCA784((PartyOrganizationUtility_o *)(v157 + 32), 0LL, v149, v150, v151, v152, v153, v154);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v131, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v138 = *(_QWORD *)&this->fields.m_CachedPtr;
          v139 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v138 )
            goto LABEL_142;
          v140 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v140 >= *(_DWORD *)(v138 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_3558C28 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v140 + 1;
            *(_BYTE *)(v138 + v140 + 32) = 0;
          }
        }
        LODWORD(v129) = v128->max_length;
        if ( (__int64)++v130 >= (int)v129 )
          goto LABEL_87;
      }
      goto LABEL_143;
    }
LABEL_87:
    if ( !isDemoMode )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1BCA888(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_142;
    v165 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19858/*"from"*/;
    if ( StringLiteral_19858/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1BCA91C(StringLiteral_19858/*"from"*/, v165->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      *(_QWORD *)&isOpponent = StringLiteral_19858/*"from"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0LL;
    }
    if ( !LODWORD(v165->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v165->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v165->fields.sequenceManager,
      isOpponent,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164);
    v251 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v251);
    v172 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1BCA91C(this, v165->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v165->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v165->fields.servantId = v172;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v165->fields.servantId,
        (int64_t)v172,
        v166,
        v167,
        v168,
        v169,
        v170,
        v171);
      this = (BattleSequenceManager_o *)StringLiteral_24219/*"to"*/;
      if ( StringLiteral_24219/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1BCA91C(StringLiteral_24219/*"to"*/, v165->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        *(_QWORD *)&isOpponent = StringLiteral_24219/*"to"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0LL;
      }
      if ( LODWORD(v165->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v165->fields.testNpPer = isOpponent;
      sub_1BCA784((PartyOrganizationUtility_o *)&v165->fields.testNpPer, isOpponent, v173, v174, v175, v176, v177, v178);
      v180 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, v179);
        v180 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v180->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v187 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1BCA91C(this, v165->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v165->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v165->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v187;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v165->fields.FadeTargetPanelIndexs,
          (int64_t)v187,
          v181,
          v182,
          v183,
          v184,
          v185,
          v186);
        this = (BattleSequenceManager_o *)StringLiteral_24178/*"time"*/;
        if ( StringLiteral_24178/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v165->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          *(_QWORD *)&isOpponent = StringLiteral_24178/*"time"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0LL;
        }
        if ( LODWORD(v165->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        *(_QWORD *)&v165->fields.IsPlaying = isOpponent;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v165->fields.IsPlaying,
          isOpponent,
          v188,
          v189,
          v190,
          v191,
          v192,
          v193);
        v249 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v249);
        v200 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1BCA91C(this, v165->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v165->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v165->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v200;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v165->fields.ReleaseSoundNames,
            (int64_t)v200,
            v194,
            v195,
            v196,
            v197,
            v198,
            v199);
          this = (BattleSequenceManager_o *)StringLiteral_22521/*"onupdate"*/;
          if ( StringLiteral_22521/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v165->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            *(_QWORD *)&isOpponent = StringLiteral_22521/*"onupdate"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0LL;
          }
          if ( LODWORD(v165->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v165->fields.performance = (struct BattlePerformance_o *)isOpponent;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v165->fields.performance,
            isOpponent,
            v201,
            v202,
            v203,
            v204,
            v205,
            v206);
          this = (BattleSequenceManager_o *)StringLiteral_9967/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9967/*"OnChangeBgmVolume"*/ )
          {
            *(_QWORD *)&isOpponent = 0LL;
LABEL_125:
            if ( LODWORD(v165->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v165->fields.seqObject = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v165->fields.seqObject,
              isOpponent,
              v207,
              v208,
              v209,
              v210,
              v211,
              v212);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v213);
            v214 = iTween__Hash((System_Object_array *)v165, 0LL);
            iTween__ValueTo(gameObject, v214, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v7->fields.BackupBgmName,
                (int64_t)BgmName,
                v216,
                v217,
                v218,
                v219,
                v220,
                v221);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v222);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v225 = this;
                    p_playerActors = (PartyOrganizationUtility_o *)&this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v228 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1BCAA2C(
                                                                         WellFired_USSequencer_PlaybackDelegate_TypeInfo,
                                                                         isOpponent,
                                                                         v223,
                                                                         v224);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v228,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v229 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v228, 0LL);
                    v236 = (int64_t)v229;
                    if ( v229 )
                    {
                      v237 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v229->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_playerActors->klass = (PartyOrganizationUtility_c *)v229;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v229->klass == v237 )
                          goto LABEL_137;
                      }
                      sub_1BCACFC(v229);
                    }
                    p_playerActors->klass = (PartyOrganizationUtility_c *)v236;
LABEL_137:
                    sub_1BCA784(p_playerActors, v236, v230, v231, v232, v233, v234, v235);
                    v7->fields.OnCompleteActorCallback = v247;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v7->fields.OnCompleteActorCallback,
                      (int64_t)v247,
                      v238,
                      v239,
                      v240,
                      v241,
                      v242,
                      v243);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v225, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v244);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v245);
                    return;
                  }
                }
              }
            }
LABEL_142:
            sub_1BCAA3C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1BCA91C(StringLiteral_9967/*"OnChangeBgmVolume"*/, v165->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_9967/*"OnChangeBgmVolume"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v246 = sub_1BCAA60(this);
    sub_1BCA908(v246, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
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
  UnityEngine_GameObject_o *actor; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  _DWORD *monitor; // x8
  __int64 v16; // x1
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v18; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v20; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v22; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  VoiceMaster_o *v26; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v29; // x4
  __int64 v30; // x8
  unsigned __int64 v31; // x22

  if ( (byte_4B18907 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaster___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Voice_TypeInfo, v10, v11);
    byte_4B18907 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    if ( LOBYTE(Component_object[30].klass) )
      return;
    monitor = Component_object[28].monitor;
    if ( !monitor )
      goto LABEL_31;
    if ( !monitor[83] && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_object, 0LL) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v18 = this->fields.performance;
        if ( !v18 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v18->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v20);
          if ( PlayedSoundList )
          {
            v22 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v26 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v24);
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v26, chrId, FileName, v29);
                }
                v30 = *(_QWORD *)&v22->max_length;
                if ( (int)v30 >= 1 )
                {
                  v31 = 0LL;
                  do
                  {
                    if ( v31 >= (unsigned int)v30 )
                      sub_1BCAA44(MasterData_object, v24);
                    BattleSequenceManager__addServantVoicePlayed(this, v26, this->fields.chrId, v22->m_Items[v31], v25);
                    LODWORD(v30) = v22->max_length;
                    ++v31;
                  }
                  while ( (__int64)v31 < (int)v30 );
                }
                return;
              }
LABEL_31:
              sub_1BCAA3C(actor, method);
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__removeServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_4B188E5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, voiceMaster, *(_QWORD *)&chrId);
    byte_4B188E5 = 1;
  }
  FlagRequestNumber = System_String__Concat_62401220((System_String_o *)StringLiteral_16290/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__removeServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BCAA3C(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
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
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18902 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v10, v11);
    byte_4B18902 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    battleTargetList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1BCAA3C(0LL, v13);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v17.fields._current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v14 = this->fields.battleTargetList;
  if ( !v14 )
LABEL_13:
    sub_1BCAA3C(battleTargetList, method);
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleSequenceManager__searchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        BattleBuffData_o *buffData,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t limitCount; // w22
  __int64 v19; // x1
  UnityEngine_Object_o *Manager__loadNoblePhantasmEffect; // x20
  __int64 v21; // x1
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Object_o *v24; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x19
  __int64 v27; // x1

  if ( (byte_4B188E9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId, name);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_3241/*"Battle/Prefab/"*/, v16, v17);
    byte_4B188E9 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&tdId);
  Manager__loadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               seqIdFromMstTDSeqWeight,
                                                               0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(Manager__loadNoblePhantasmEffect, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    v22 = (Il2CppObject *)Manager__loadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v22,
                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v23 = System_String__Concat_62401220((System_String_o *)StringLiteral_3241/*"Battle/Prefab/"*/, name, 0LL);
  v24 = UnityEngine_Resources__Load(v23, 0LL);
  if ( v24 )
  {
    if ( (UnityEngine_GameObject_c *)v24->klass == UnityEngine_GameObject_TypeInfo )
      v26 = v24;
    else
      v26 = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    v22 = (Il2CppObject *)v26;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v22,
                                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return 0LL;
}


WellFired_USTimelineContainer_o *__fastcall BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  Il2CppObject *Component_object; // x0
  __int64 v30; // x1
  WellFired_USTimelineContainer_o *v31; // x21
  System_String_o *monitor; // x22
  System_String_o *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x19
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B188EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq, name);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v10, v11);
    this = (BattleSequenceManager_o *)sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v12, v13);
    byte_4B188EA = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1BCAA3C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_17;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
    }
    else
    {
LABEL_17:
      v23 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v24 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                       Enumerator,
                                       *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_1BCAA3C(0LL, v25);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v24);
LABEL_37:
      sub_1BCAA3C(Component_object, v30);
    }
    gameObject = UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v28);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v31 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v33 = System_String__Concat_62401220((System_String_o *)StringLiteral_1120/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v33, 0LL) )
      goto LABEL_27;
  }
  v31 = 0LL;
LABEL_27:
  v34 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v34 )
  {
    v35 = *(_QWORD *)v34;
    v36 = v34;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_32;
      }
      v39 = v35 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_32:
      v39 = sub_1C1C7C0(v34, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
  }
  return v31;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4B18904 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName, *(_QWORD *)&value);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__Add__, v9, v10);
    byte_4B18904 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1BCAA3C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_string__Add__);
}


void __fastcall BattleSequenceManager__set_NowTargetAlpha(
        BattleSequenceManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.nowTargetAlpha = value;
}


void __fastcall BattleSequenceManager__set_SeqId(
        BattleSequenceManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SeqId_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__setup(
        BattleSequenceManager_o *this,
        System_Action_o *callback,
        bool isDemoMode,
        BattleBuffData_o *buffData,
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
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x28
  const MethodInfo *v169; // x3
  __int64 v170; // x1
  UnityEngine_Object_o *v171; // x19
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__49324452; // x0
  __int64 v173; // x1
  __int64 v174; // x2
  __int64 v175; // x3
  BattleSequenceManager___c_c *v176; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v177; // x19
  System_Func_object__bool__o *_9__92_0; // x21
  Il2CppObject *v179; // x23
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  System_Collections_Generic_IEnumerable_T__o *v187; // x20
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  System_Action_object__o *v191; // x21
  BattleSequenceManager_o *v192; // x0
  const MethodInfo *v193; // x3
  WellFired_USTimelineContainer_o *v194; // x26
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  System_Collections_Generic_List_object__o *v198; // x21
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x3
  System_Collections_Generic_List_object__o *v202; // x29
  __int64 v203; // x1
  Il2CppObject *v204; // x20
  __int64 v205; // x2
  __int64 v206; // x3
  Il2CppObject *klass; // x23
  UnityEngine_Object_o *v208; // x23
  System_Collections_Generic_List_object__o *monitor; // x27
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  struct System_Object_array *items; // x8
  _QWORD *v217; // x9
  __int64 size; // x10
  int64_t v219; // x1
  Il2CppClass **v220; // x0
  int64_t v221; // x2
  int32_t v222; // w3
  System_String_o *v223; // x4
  BattleSetupInfo_o *v224; // x5
  FollowerInfo_o *v225; // x6
  PartyListViewItem_o *v226; // x7
  int64_t v227; // x1
  __int64 v228; // x27
  int64_t v229; // x1
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  int64_t v236; // x1
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  Il2CppClass *v249; // x8
  int64_t methodPtr; // x1
  __int64 v251; // x1
  __int64 v252; // x2
  Il2CppObject *v253; // x28
  struct UnityEngine_Vector3_StaticFields *v254; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v258; // x0
  PartyOrganizationUtility_o *v259; // x27
  int64_t v260; // x2
  int32_t v261; // w3
  System_String_o *v262; // x4
  BattleSetupInfo_o *v263; // x5
  FollowerInfo_o *v264; // x6
  PartyListViewItem_o *v265; // x7
  const MethodInfo *v266; // x1
  const MethodInfo *v267; // x2
  int v268; // w8
  __int64 v269; // x20
  int v270; // w24
  UnityEngine_Object_o *v271; // x27
  __int64 v272; // x8
  __int64 v273; // x26
  unsigned __int64 v274; // x25
  __int64 v275; // x28
  System_String_o *name; // x0
  __int64 v277; // x1
  __int64 v278; // x1
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  UnityEngine_Object_c *v285; // x8
  int32_t v286; // w27
  System_String_o *v287; // x0
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  __int64 v294; // x10
  System_String_o *v295; // x0
  int64_t v296; // x2
  int32_t v297; // w3
  System_String_o *v298; // x4
  BattleSetupInfo_o *v299; // x5
  FollowerInfo_o *v300; // x6
  PartyListViewItem_o *v301; // x7
  __int64 v302; // x9
  int64_t v303; // x1
  System_Action_o *parent; // x0
  PartyOrganizationUtility_o *v305; // x0
  int32_t klass_high; // w29
  int32_t monitor_high; // w23
  __int64 v308; // x1
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x23
  int64_t v310; // x2
  int32_t v311; // w3
  System_String_o *v312; // x4
  BattleSetupInfo_o *v313; // x5
  FollowerInfo_o *v314; // x6
  PartyListViewItem_o *v315; // x7
  System_Collections_Generic_List_object__o *v316; // x8
  struct System_Object_array *v317; // x9
  _QWORD *v318; // x10
  __int64 v319; // x11
  Il2CppClass **v320; // x0
  System_String_o *v321; // x0
  __int64 v322; // x9
  System_String_o **v323; // x29
  System_String_o *v324; // x0
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  System_String_o *v331; // x0
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  int64_t v338; // x1
  int64_t v339; // x2
  int32_t v340; // w3
  System_String_o *v341; // x4
  BattleSetupInfo_o *v342; // x5
  FollowerInfo_o *v343; // x6
  PartyListViewItem_o *v344; // x7
  struct System_Object_array *v345; // x8
  _QWORD *v346; // x9
  __int64 v347; // x10
  Il2CppClass **v348; // x0
  __int64 methodPtr_low; // x9
  int64_t v350; // x1
  __int64 v351; // x28
  int64_t v352; // x2
  int32_t v353; // w3
  System_String_o *v354; // x4
  BattleSetupInfo_o *v355; // x5
  FollowerInfo_o *v356; // x6
  PartyListViewItem_o *v357; // x7
  UnityEngine_Transform_o *v358; // x28
  int v359; // s0
  System_Collections_Generic_List_object__o *v362; // x25
  int64_t v363; // x2
  int32_t v364; // w3
  System_String_o *v365; // x4
  BattleSetupInfo_o *v366; // x5
  FollowerInfo_o *v367; // x6
  PartyListViewItem_o *v368; // x7
  struct System_Object_array *v369; // x8
  _QWORD *v370; // x9
  __int64 v371; // x10
  Il2CppClass **v372; // x0
  BattleSequenceManager_o *v373; // x0
  const MethodInfo *v374; // x3
  int64_t v375; // x2
  int32_t v376; // w3
  System_String_o *v377; // x4
  BattleSetupInfo_o *v378; // x5
  FollowerInfo_o *v379; // x6
  PartyListViewItem_o *v380; // x7
  struct System_Object_array *v381; // x8
  _QWORD *v382; // x9
  __int64 v383; // x10
  int64_t v384; // x1
  Il2CppClass **v385; // x0
  __int64 v386; // x1
  Il2CppObject *current; // x24
  _BOOL8 v388; // x0
  __int64 v389; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v391; // x1
  void *v392; // x24
  int v393; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v395; // x0
  _QWORD *v396; // x25
  __int64 v397; // x8
  unsigned __int64 v398; // x28
  int64_t v399; // x26
  System_String_o *v400; // x0
  __int64 v401; // x9
  _BOOL8 v402; // x0
  __int64 v403; // x1
  int64_t v404; // x2
  int32_t v405; // w3
  System_String_o *v406; // x4
  BattleSetupInfo_o *v407; // x5
  FollowerInfo_o *v408; // x6
  PartyListViewItem_o *v409; // x7
  UnityEngine_Component_o *v410; // x0
  UnityEngine_Transform_o *transform; // x0
  int64_t v412; // x2
  int32_t v413; // w3
  System_String_o *v414; // x4
  BattleSetupInfo_o *v415; // x5
  FollowerInfo_o *v416; // x6
  PartyListViewItem_o *v417; // x7
  struct System_Object_array *v418; // x8
  _QWORD *v419; // x9
  __int64 v420; // x10
  Il2CppClass **v421; // x0
  __int64 v422; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v424; // w19
  System_Collections_IEnumerator_c *v425; // x8
  __int64 v426; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v429; // x8
  __int64 v430; // x9
  System_Collections_IEnumerator_c **v431; // x10
  __int64 v432; // x0
  UnityEngine_Component_o *v433; // x0
  __int64 v434; // x1
  __int64 v435; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v437; // x1
  Il2CppObject *v438; // x0
  __int64 v439; // x1
  Il2CppObject *v440; // x25
  System_String_o *v441; // x0
  __int64 v442; // x1
  System_String_o *v443; // x0
  __int64 v444; // x1
  System_String_o *v445; // x0
  System_String_o *v446; // x0
  __int64 v447; // x0
  __int64 v448; // x8
  __int64 v449; // x24
  __int64 v450; // x9
  int *v451; // x10
  __int64 v452; // x0
  __int64 v453; // x1
  System_Collections_IEnumerator_c *v454; // x8
  __int64 v455; // x9
  int32_t *v456; // x10
  __int64 v457; // x0
  System_Collections_IEnumerator_c *v458; // x8
  __int64 v459; // x9
  System_Collections_IEnumerator_c **v460; // x10
  __int64 v461; // x0
  UnityEngine_Component_o *v462; // x0
  __int64 v463; // x1
  __int64 v464; // x9
  UnityEngine_GameObject_o *v465; // x0
  __int64 v466; // x1
  Il2CppObject *v467; // x0
  __int64 v468; // x1
  WellFired_USTimelineContainer_o *v469; // x24
  System_String_o *v470; // x0
  __int64 v471; // x1
  bool v472; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v474; // x27
  System_String_o *v475; // x0
  __int64 v476; // x1
  bool v477; // w28
  System_String_o *v478; // x0
  System_String_o *v479; // x0
  __int64 v480; // x1
  System_String_o *v481; // x0
  UnityEngine_Component_o *v482; // x0
  UnityEngine_Transform_o *v483; // x0
  System_String_o *v484; // x0
  __int64 v485; // x1
  UnityEngine_GameObject_o *v486; // x0
  __int64 v487; // x1
  UnityEngine_Transform_o *v488; // x25
  System_String_o *v489; // x0
  System_String_o *v490; // x0
  UnityEngine_Transform_o *v491; // x0
  __int64 v492; // x1
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v494; // x1
  System_String_o *v495; // x0
  bool v496; // w0
  __int64 v497; // x1
  __int64 *v498; // x8
  System_String_o *v499; // x0
  bool v500; // w0
  System_String_o *v501; // x28
  UnityEngine_GameObject_o *v502; // x0
  System_String_o *v503; // x27
  UnityEngine_Transform_o *v504; // x0
  __int64 v505; // x1
  __int64 v506; // x1
  UnityEngine_Object_o *v507; // x25
  _BOOL8 v508; // x0
  __int64 v509; // x1
  __int64 v510; // x1
  System_Collections_IEnumerator_o *v511; // x26
  System_Collections_IEnumerator_c *v512; // x8
  __int64 v513; // x9
  int32_t *v514; // x10
  __int64 v515; // x0
  System_Collections_IEnumerator_c *v516; // x8
  __int64 v517; // x9
  System_Collections_IEnumerator_c **v518; // x10
  __int64 v519; // x0
  UnityEngine_Component_o *v520; // x0
  __int64 v521; // x1
  UnityEngine_Object_o *v522; // x25
  __int64 v523; // x9
  UnityEngine_Object_o *v524; // x0
  __int64 v525; // x1
  System_String_o *v526; // x0
  __int64 v527; // x1
  System_String_o *v528; // x0
  _BOOL8 v529; // x0
  const MethodInfo *v530; // x2
  __int64 v531; // x1
  int32_t v532; // w25
  System_String_o *v533; // x26
  __int64 v534; // x0
  __int64 v535; // x25
  __int64 v536; // x8
  __int64 v537; // x9
  int *v538; // x10
  __int64 v539; // x0
  System_String_o *v540; // x25
  System_String_o *v541; // x0
  __int64 v542; // x1
  System_String_o *v543; // x0
  __int64 v544; // x1
  System_String_array *v545; // x0
  __int64 v546; // x1
  __int64 v547; // x1
  System_String_o *v548; // x26
  UnityEngine_GameObject_o *v549; // x0
  __int64 v550; // x1
  UnityEngine_Transform_o *v551; // x25
  System_String_o *v552; // x0
  System_String_o *v553; // x0
  __int64 v554; // x1
  System_String_o *v555; // x0
  UnityEngine_Transform_o *v556; // x0
  Il2CppObject *v557; // x25
  System_Collections_Generic_List_object__o *v558; // x0
  _BOOL8 v559; // x0
  __int64 v560; // x1
  System_String_o *v561; // x0
  __int64 v562; // x1
  System_String_o *v563; // x1
  __int64 v564; // x1
  _BOOL8 v565; // x0
  __int64 v566; // x1
  BattleBuffData_o *v567; // x3
  const MethodInfo *v568; // x5
  UnityEngine_Object_c *v569; // x8
  int32_t v570; // w4
  __int64 v571; // x1
  int64_t v572; // x2
  int32_t v573; // w3
  System_String_o *v574; // x4
  BattleSetupInfo_o *v575; // x5
  FollowerInfo_o *v576; // x6
  PartyListViewItem_o *v577; // x7
  System_Collections_Generic_List_object__o *v578; // x0
  struct System_Object_array *v579; // x8
  _QWORD *v580; // x9
  __int64 v581; // x10
  Il2CppClass **v582; // x8
  __int64 v583; // x0
  __int64 v584; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v586; // x1
  UnityEngine_Transform_o *v587; // x0
  UnityEngine_Transform_o *v588; // x0
  __int64 v589; // x1
  float v590; // s8
  float v591; // s9
  float v592; // s10
  __int64 v593; // x1
  UnityEngine_Transform_o *v594; // x26
  UnityEngine_GameObject_o *v595; // x0
  UnityEngine_Transform_o *v596; // x0
  UnityEngine_Transform_o *v597; // x0
  __int64 v598; // x1
  BattleSequenceManager_o *v599; // x0
  const MethodInfo *v600; // x4
  __int64 v601; // x1
  int32_t v602; // w26
  UnityEngine_Transform_o *v603; // x0
  __int64 v604; // x1
  UnityEngine_Transform_o *v605; // x0
  System_String_o *v606; // x0
  __int64 v607; // x1
  System_String_o *v608; // x0
  System_String_o *v609; // x0
  const MethodInfo *v610; // x3
  int32_t v611; // w2
  const MethodInfo *v612; // x3
  System_Object_array *EventCount; // x0
  __int64 v614; // x1
  System_Object_array *v615; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v618; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v620; // x0
  __int64 v621; // x1
  Il2CppObject *v622; // x27
  System_String_o *v623; // x0
  __int64 v624; // x9
  _BOOL8 v625; // x0
  __int64 v626; // x1
  int64_t v627; // x2
  int32_t v628; // w3
  System_String_o *v629; // x4
  BattleSetupInfo_o *v630; // x5
  FollowerInfo_o *v631; // x6
  PartyListViewItem_o *v632; // x7
  UnityEngine_Component_o *v633; // x0
  UnityEngine_Transform_o *v634; // x0
  int64_t v635; // x2
  int32_t v636; // w3
  System_String_o *v637; // x4
  BattleSetupInfo_o *v638; // x5
  FollowerInfo_o *v639; // x6
  PartyListViewItem_o *v640; // x7
  struct System_Object_array *v641; // x8
  _QWORD *v642; // x9
  __int64 v643; // x10
  Il2CppClass **v644; // x0
  int32_t layer; // w26
  __int64 v646; // x1
  __int64 v647; // x20
  __int64 v648; // x8
  __int64 v649; // x23
  __int64 v650; // x9
  int *v651; // x10
  __int64 v652; // x0
  __int64 v653; // x1
  __int64 v654; // x1
  UnityEngine_Object_c *v655; // x8
  UnityEngine_Object_o *v656; // x21
  Il2CppClass *v657; // x8
  UnityEngine_Object_o *v658; // x21
  __int64 v659; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t v661; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v663; // x4
  __int64 v664; // x1
  int32_t v665; // w22
  System_String_o *v666; // x0
  const MethodInfo *v667; // x4
  UnityEngine_Object_c *v668; // x8
  int v669; // w20
  BalanceConfig_c *v670; // x0
  int32_t v671; // w20
  System_String_o *v672; // x0
  const MethodInfo *v673; // x4
  __int64 v674; // x0
  __int64 v675; // x20
  __int64 v676; // x8
  __int64 v677; // x9
  int *v678; // x10
  __int64 v679; // x0
  int v680; // w1
  int v681; // w19
  void *v682; // x0
  void *v683; // x25
  __int64 v684; // x0
  __int64 v685; // x19
  __int64 v686; // x8
  __int64 v687; // x9
  int *v688; // x10
  __int64 v689; // x0
  System_String_o *v690; // [xsp+8h] [xbp-138h]
  System_String_o *v691; // [xsp+10h] [xbp-130h]
  Il2CppObject *item; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v693; // [xsp+20h] [xbp-120h]
  char v694; // [xsp+20h] [xbp-120h]
  UnityEngine_Object_o *v695; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *sourcea; // [xsp+30h] [xbp-110h]
  bool v698; // [xsp+38h] [xbp-108h]
  __int64 v699; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v700; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v702; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v705; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v706; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v708; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v710; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B188E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo, callback, isDemoMode);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___, v9, v10);
    sub_1BCA7E0(&Method_BattleSequenceManager__setup_b__92_1__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaster___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v39, v40);
    sub_1BCA7E0(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo, v41, v42);
    sub_1BCA7E0(&System_GC_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v45, v46);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v47, v48);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v49, v50);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v51, v52);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v67, v68);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v71, v72);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v73, v74);
    sub_1BCA7E0(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v75, v76);
    sub_1BCA7E0(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v77, v78);
    sub_1BCA7E0(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v79, v80);
    sub_1BCA7E0(&NGUITools_TypeInfo, v81, v82);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v83, v84);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924664, v85, v86);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v87, v88);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v89, v90);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v91, v92);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v93, v94);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__setup_b__92_0__, v95, v96);
    sub_1BCA7E0(&BattleSequenceManager___c_TypeInfo, v97, v98);
    sub_1BCA7E0(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v99, v100);
    sub_1BCA7E0(&WellFired_USFGOAttachToParentEvent_TypeInfo, v101, v102);
    sub_1BCA7E0(&WellFired_USFGOChangeBgEvent_TypeInfo, v103, v104);
    sub_1BCA7E0(&WellFired_USFGOPlayCutInEvent_TypeInfo, v105, v106);
    sub_1BCA7E0(&WellFired_USFGOSetCameraEvent_TypeInfo, v107, v108);
    sub_1BCA7E0(&Voice_TypeInfo, v109, v110);
    sub_1BCA7E0(&StringLiteral_1128/*"/Actor/chr/"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_3252/*"BattleBG"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_1138/*"/BattleActors/"*/, v115, v116);
    sub_1BCA7E0(&StringLiteral_3254/*"BattleCamera"*/, v117, v118);
    sub_1BCA7E0(&StringLiteral_3257/*"BattleCutIn"*/, v119, v120);
    sub_1BCA7E0(&StringLiteral_15022/*"USFGOSetCameraEvent"*/, v121, v122);
    sub_1BCA7E0(&StringLiteral_2253/*"Actor"*/, v123, v124);
    sub_1BCA7E0(&StringLiteral_17530/*"body_level_"*/, v125, v126);
    sub_1BCA7E0(&StringLiteral_1130/*"/Actor/chr/weapon_level_"*/, v127, v128);
    sub_1BCA7E0(&StringLiteral_1129/*"/Actor/chr/body_level_"*/, v129, v130);
    sub_1BCA7E0(&StringLiteral_6492/*"FGOSequenceManager"*/, v131, v132);
    sub_1BCA7E0(&StringLiteral_1132/*"/AllEffects/"*/, v133, v134);
    sub_1BCA7E0(&StringLiteral_18146/*"chr(Clone)"*/, v135, v136);
    sub_1BCA7E0(&StringLiteral_4054/*"Cameras/BattleCamera"*/, v137, v138);
    sub_1BCA7E0(&StringLiteral_15020/*"USFGOChangeBgEvent"*/, v139, v140);
    sub_1BCA7E0(&StringLiteral_1150/*"/BattleCamera"*/, v141, v142);
    sub_1BCA7E0(&StringLiteral_1153/*"/CutIns/"*/, v143, v144);
    sub_1BCA7E0(&StringLiteral_3250/*"Battle2D"*/, v145, v146);
    sub_1BCA7E0(&StringLiteral_1152/*"/Cameras/BattleCamera"*/, v147, v148);
    sub_1BCA7E0(&StringLiteral_16942/*"animCamLoc"*/, v149, v150);
    sub_1BCA7E0(&StringLiteral_24927/*"weapon_level_"*/, v151, v152);
    sub_1BCA7E0(&StringLiteral_726/*"(Clone)"*/, v153, v154);
    sub_1BCA7E0(&StringLiteral_15019/*"USFGOAttachToParentEvent"*/, v155, v156);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v157, v158);
    sub_1BCA7E0(&StringLiteral_1127/*"/Actor/chr"*/, v159, v160);
    sub_1BCA7E0(&StringLiteral_15018/*"USFGOAnimationCameraEvent"*/, v161, v162);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v163, v164);
    sub_1BCA7E0(&StringLiteral_15021/*"USFGOPlayCutInEvent"*/, v165, v166);
    byte_4B188E3 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v706, 0, sizeof(v706));
  memset(&v705, 0, sizeof(v705));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_432;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v171 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                   (BattleSequenceManager_o *)Component_object,
                                   (WellFired_USSequencer_o *)Component_object,
                                   (System_String_o *)StringLiteral_2253/*"Actor"*/,
                                   v169);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v170);
  seqObject = UnityEngine_Object__op_Inequality(v171, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[6].klass;
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v171 )
      goto LABEL_432;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v171,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  if ( !Component_object )
    goto LABEL_432;
  ComponentsInChildren_object__49324452 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v176 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v171;
  v698 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v177 = ComponentsInChildren_object__49324452;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v173);
    v176 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__49324452 = v177;
  }
  _9__92_0 = (System_Func_object__bool__o *)v176->static_fields->__9__92_0;
  v693 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__92_0 )
  {
    source = ComponentsInChildren_object__49324452;
    if ( !v176->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v176, v173);
      v176 = BattleSequenceManager___c_TypeInfo;
    }
    v179 = (Il2CppObject *)v176->static_fields->__9;
    _9__92_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo,
                                                v173,
                                                v174,
                                                v175);
    System_Func_object__bool____ctor(_9__92_0, v179, Method_BattleSequenceManager___c__setup_b__92_0__, 0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__92_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__92_0,
      (int64_t)_9__92_0,
      v181,
      v182,
      v183,
      v184,
      v185,
      v186);
    ComponentsInChildren_object__49324452 = source;
  }
  v187 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                          ComponentsInChildren_object__49324452,
                                                          (System_Func_TSource__bool__o *)_9__92_0,
                                                          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v191 = (System_Action_object__o *)sub_1BCAA2C(
                                      System_Action_SwitchActiveBaseConditionComponent__TypeInfo,
                                      v188,
                                      v189,
                                      v190);
  System_Action_object____ctor(v191, object, Method_BattleSequenceManager__setup_b__92_1__, 0LL);
  BasicHelper__ForEach_object_(
    v187,
    (System_Action_T__o *)v191,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v194 = BattleSequenceManager__searchTimeline(
           v192,
           (WellFired_USSequencer_o *)Component_object,
           (System_String_o *)StringLiteral_6492/*"FGOSequenceManager"*/,
           v193);
  v198 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo,
                                                        v195,
                                                        v196,
                                                        v197);
  System_Collections_Generic_List_object____ctor(
    v198,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v202 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo,
                                                        v199,
                                                        v200,
                                                        v201);
  System_Collections_Generic_List_object____ctor(
    v202,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[6].klass;
  if ( !seqObject )
LABEL_432:
    sub_1BCAA3C(seqObject, callback);
  v204 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v203);
  v695 = (UnityEngine_Object_o *)v204;
  sourcea = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v202;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v194, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    v208 = (UnityEngine_Object_o *)v204;
    if ( !v194 )
      goto LABEL_432;
    WellFired_USTimelineContainer__set_AffectedObject(v194, (UnityEngine_Transform_o *)seqObject, 0LL);
    monitor = (System_Collections_Generic_List_object__o *)object[21].monitor;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v194, 0LL);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !monitor )
      goto LABEL_432;
    items = monitor->fields._items;
    v217 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_432;
    size = monitor->fields._size;
    v219 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
    }
    else
    {
      v220 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v220[4] = (Il2CppClass *)v219;
      sub_1BCA784((PartyOrganizationUtility_o *)(v220 + 4), v219, v210, v211, v212, v213, v214, v215);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v194, 0LL);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_432;
    v227 = (int64_t)object[8].klass;
    v228 = seqObject;
    *(_QWORD *)(seqObject + 32) = v227;
    sub_1BCA784((PartyOrganizationUtility_o *)(seqObject + 32), v227, v221, v222, v223, v224, v225, v226);
    v229 = (int64_t)object[8].monitor;
    *(_QWORD *)(v228 + 40) = v229;
    sub_1BCA784((PartyOrganizationUtility_o *)(v228 + 40), v229, v230, v231, v232, v233, v234, v235);
    v236 = (int64_t)object[9].klass;
    *(_QWORD *)(v228 + 48) = v236;
    sub_1BCA784((PartyOrganizationUtility_o *)(v228 + 48), v236, v237, v238, v239, v240, v241, v242);
    v249 = object[5].klass;
    if ( !v249 )
      goto LABEL_432;
    methodPtr = (int64_t)v249->vtable[6].methodPtr;
    *(_QWORD *)(v228 + 96) = methodPtr;
    sub_1BCA784((PartyOrganizationUtility_o *)(v228 + 96), methodPtr, v243, v244, v245, v246, v247, v248);
    v253 = (Il2CppObject *)object[22].klass;
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v251, v252);
      byte_4B109C1 = 1;
    }
    v254 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v254->zeroVector.fields.x;
    y = v254->zeroVector.fields.y;
    z = v254->zeroVector.fields.z;
    if ( !byte_4B109C7 )
    {
      sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v251, v252);
      byte_4B109C7 = 1;
    }
    v708.fields.x = x;
    v708.fields.y = y;
    v708.fields.z = z;
    v258 = UnityEngine_Object__Instantiate_object__49904120(
             v253,
             v708,
             UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
             (const MethodInfo_2F979F8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924664);
    *(_QWORD *)(v228 + 72) = v258;
    v259 = (PartyOrganizationUtility_o *)(v228 + 72);
    sub_1BCA784(v259, (int64_t)v258, v260, v261, v262, v263, v264, v265);
    seqObject = (__int64)v259->klass;
    if ( !v259->klass )
      goto LABEL_432;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !v698 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v266);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v267);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v194,
                           1,
                           (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_432;
    v268 = *(_DWORD *)(seqObject + 24);
    v269 = seqObject;
    if ( v268 >= 1 )
    {
      v270 = 0;
      v271 = 0LL;
      v699 = seqObject;
      while ( 1 )
      {
        if ( v270 >= (unsigned int)v268 )
LABEL_436:
          sub_1BCAA44(seqObject, callback);
        seqObject = *(_QWORD *)(v269 + 8LL * v270 + 32);
        if ( !seqObject )
          goto LABEL_432;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_432;
        v272 = *(_QWORD *)(seqObject + 24);
        v273 = seqObject;
        if ( (int)v272 >= 1 )
          break;
LABEL_109:
        v269 = v699;
        ++v270;
        v268 = *(_DWORD *)(v699 + 24);
        if ( v270 >= v268 )
          goto LABEL_110;
      }
      v274 = 0LL;
      while ( 1 )
      {
        if ( v274 >= (unsigned int)v272 )
          goto LABEL_436;
        v275 = *(_QWORD *)(v273 + 32 + 8 * v274);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v275, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v275 )
            goto LABEL_432;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v275, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15018/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v277);
            if ( UnityEngine_Object__op_Equality(v271, 0LL, 0LL) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v278);
              seqObject = UnityEngine_Object__op_Inequality(v208, 0LL, 0LL);
              if ( (seqObject & 1) != 0 )
              {
                if ( !v208 )
                  goto LABEL_432;
                v285 = v208[19].klass;
                if ( !v285 )
                  goto LABEL_432;
                v286 = (int32_t)v285[2]._1.name;
              }
              else
              {
                v286 = 0;
              }
              klass_high = HIDWORD(object[11].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, callback);
              Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_16942/*"animCamLoc"*/,
                                                                   v286,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v308);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v316 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              v202 = (System_Collections_Generic_List_object__o *)sourcea;
              if ( !v316 )
                goto LABEL_432;
              v317 = v316->fields._items;
              v208 = v695;
              v318 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v316->fields._version;
              if ( !v317 )
                goto LABEL_432;
              v319 = v316->fields._size;
              v271 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v319 >= v317->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v316,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
              }
              else
              {
                v320 = &v317->obj.klass + v319;
                v316->fields._size = v319 + 1;
                v320[4] = (Il2CppClass *)v271;
                sub_1BCA784((PartyOrganizationUtility_o *)(v320 + 4), (int64_t)v271, v310, v311, v312, v313, v314, v315);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v275 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v275 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
              goto LABEL_437;
            }
            *(_QWORD *)(v275 + 56) = v271;
            sub_1BCA784((PartyOrganizationUtility_o *)(v275 + 56), (int64_t)v271, v279, v280, v281, v282, v283, v284);
            v350 = (int64_t)object[8].klass;
            *(_QWORD *)(v275 + 64) = v350;
            v351 = v275 + 64;
            sub_1BCA784((PartyOrganizationUtility_o *)v351, v350, v352, v353, v354, v355, v356, v357);
            *(_BYTE *)(v351 + 28) = 0;
            if ( !v271 )
              goto LABEL_432;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v271, 0LL);
            if ( !object[6].klass )
              goto LABEL_432;
            v358 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[6].klass, 0LL);
            if ( !seqObject )
              goto LABEL_432;
            *(UnityEngine_Vector3_o *)&v359 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v358 )
              goto LABEL_432;
            UnityEngine_Transform__set_position(v358, *(UnityEngine_Vector3_o *)&v359, 0LL);
          }
          else
          {
            v287 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v275, 0LL);
            seqObject = System_String__op_Equality(v287, (System_String_o *)StringLiteral_15021/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v202 )
                goto LABEL_432;
              v294 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v275 + 304LL) >= (unsigned int)v294 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v275 + 200LL) + 8 * v294 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v275
                         : 0LL;
              else
                callback = 0LL;
              v345 = v202->fields._items;
              v346 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v202->fields._version;
              if ( !v345 )
                goto LABEL_432;
              v347 = v202->fields._size;
              if ( (unsigned int)v347 >= v345->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v202,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v346[4] + 192LL) + 112LL));
                goto LABEL_108;
              }
              v348 = &v345->obj.klass + v347;
              v202->fields._size = v347 + 1;
              v348[4] = (Il2CppClass *)callback;
              v305 = (PartyOrganizationUtility_o *)(v348 + 4);
              goto LABEL_98;
            }
            v295 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v275, 0LL);
            if ( System_String__op_Equality(v295, (System_String_o *)StringLiteral_15022/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v302 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v275 + 304LL) < (unsigned int)v302
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v275 + 200LL) + 8 * v302 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_437;
              }
              v303 = (int64_t)object[8].klass;
              *(_QWORD *)(v275 + 56) = v303;
              sub_1BCA784((PartyOrganizationUtility_o *)(v275 + 56), v303, v296, v297, v298, v299, v300, v301);
              seqObject = (__int64)object[8].klass;
              if ( !seqObject )
                goto LABEL_432;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_432;
              parent = (System_Action_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v275 + 64) = parent;
              callback = parent;
              v305 = (PartyOrganizationUtility_o *)(v275 + 64);
LABEL_98:
              sub_1BCA784(v305, (int64_t)callback, v288, v289, v290, v291, v292, v293);
              goto LABEL_108;
            }
            v321 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v275, 0LL);
            seqObject = System_String__op_Equality(v321, (System_String_o *)StringLiteral_15020/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v322 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v275 + 304LL) < (unsigned int)v322
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v275 + 200LL) + 8 * v322 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
LABEL_437:
                sub_1BCACFC(v275);
LABEL_438:
                sub_1BCACFC(v433);
LABEL_439:
                sub_1BCAA3C(v620, v621);
              }
              v323 = (System_String_o **)(v275 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v275 + 64),
                     (System_String_o *)StringLiteral_1209/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v323, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_432;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v324 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v323 = v324;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v275 + 64),
                  (int64_t)v324,
                  v325,
                  v326,
                  v327,
                  v328,
                  v329,
                  v330);
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_432;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v331 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v275 + 72) = v331;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v275 + 72),
                  (int64_t)v331,
                  v332,
                  v333,
                  v334,
                  v335,
                  v336,
                  v337);
                v338 = (int64_t)object[25].monitor;
                *(_QWORD *)(v275 + 136) = v338;
                sub_1BCA784((PartyOrganizationUtility_o *)(v275 + 136), v338, v339, v340, v341, v342, v343, v344);
              }
              v202 = (System_Collections_Generic_List_object__o *)sourcea;
            }
          }
        }
LABEL_108:
        LODWORD(v272) = *(_DWORD *)(v273 + 24);
        if ( (__int64)++v274 >= (int)v272 )
          goto LABEL_109;
      }
    }
  }
LABEL_110:
  v362 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_USTimelineContainer__TypeInfo,
                                                        callback,
                                                        v205,
                                                        v206);
  System_Collections_Generic_List_object____ctor(
    v362,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v362 )
    goto LABEL_432;
  v369 = v362->fields._items;
  v370 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v362->fields._version;
  if ( !v369 )
    goto LABEL_432;
  v371 = v362->fields._size;
  if ( (unsigned int)v371 >= v369->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v362,
      item,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v370[4] + 192LL) + 112LL));
  }
  else
  {
    v372 = &v369->obj.klass + v371;
    v362->fields._size = v371 + 1;
    v372[4] = (Il2CppClass *)item;
    sub_1BCA784((PartyOrganizationUtility_o *)(v372 + 4), (int64_t)item, v363, v364, v365, v366, v367, v368);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v373,
                         (WellFired_USSequencer_o *)v693,
                         (System_String_o *)StringLiteral_4054/*"Cameras/BattleCamera"*/,
                         v374);
  v381 = v362->fields._items;
  v382 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v362->fields._version;
  if ( !v381 )
    goto LABEL_432;
  v383 = v362->fields._size;
  v384 = seqObject;
  if ( (unsigned int)v383 >= v381->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v362,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v382[4] + 192LL) + 112LL));
  }
  else
  {
    v385 = &v381->obj.klass + v383;
    v362->fields._size = v383 + 1;
    v385[4] = (Il2CppClass *)v384;
    sub_1BCA784((PartyOrganizationUtility_o *)(v385 + 4), v384, v375, v376, v377, v378, v379, v380);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v702,
    v362,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v706 = v702;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v706,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v706.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v386);
    v388 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v388 )
    {
      if ( !current )
        sub_1BCAA3C(v388, v389);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v392 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1BCAA3C(0LL, v391);
      v393 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v393 >= 1 )
      {
        for ( i = 0; i < v393; ++i )
        {
          if ( i >= (unsigned int)v393 )
            sub_1BCAA44(ComponentsInChildren_object, v391);
          v395 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v392 + i + 4);
          if ( !v395 )
            sub_1BCAA3C(0LL, v391);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v395, 0LL);
          v396 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1BCAA3C(0LL, v391);
          v397 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v397 >= 1 )
          {
            v398 = 0LL;
            do
            {
              if ( v398 >= (unsigned int)v397 )
                sub_1BCAA44(ComponentsInChildren_object, v391);
              v399 = v396[v398 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v391);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v399,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v399 )
                  sub_1BCAA3C(ComponentsInChildren_object, v391);
                v400 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v399, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v400,
                                                        (System_String_o *)StringLiteral_15019/*"USFGOAttachToParentEvent"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v401 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v399 + 304LL) < (unsigned int)v401
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v399 + 200LL) + 8 * v401 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1BCACFC(v399);
LABEL_429:
                    sub_1BCAA3C(v402, v403);
                  }
                  v402 = System_String__op_Equality(
                           *(System_String_o **)(v399 + 80),
                           (System_String_o *)StringLiteral_3254/*"BattleCamera"*/,
                           0LL);
                  if ( v402 )
                  {
                    v410 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v410 )
                      sub_1BCAA3C(0LL, v403);
                    transform = UnityEngine_Component__get_transform(v410, 0LL);
                    *(_QWORD *)(v399 + 64) = transform;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v399 + 64),
                      (int64_t)transform,
                      v412,
                      v413,
                      v414,
                      v415,
                      v416,
                      v417);
                  }
                  else
                  {
                    if ( !v198 )
                      goto LABEL_429;
                    v418 = v198->fields._items;
                    v419 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v198->fields._version;
                    if ( !v418 )
                      sub_1BCAA3C(v402, v403);
                    v420 = v198->fields._size;
                    if ( (unsigned int)v420 >= v418->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v198,
                        (Il2CppObject *)v399,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v419[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v421 = &v418->obj.klass + v420;
                      v198->fields._size = v420 + 1;
                      v421[4] = (Il2CppClass *)v399;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v421 + 4), v399, v404, v405, v406, v407, v408, v409);
                    }
                  }
                }
              }
              LODWORD(v397) = *((_DWORD *)v396 + 6);
              ++v398;
            }
            while ( (__int64)v398 < (int)v397 );
          }
          v393 = *((_DWORD *)v392 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v706,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v693, 0LL);
  if ( !seqObject )
    goto LABEL_432;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v422);
  v424 = 0;
  while ( 1 )
  {
    v425 = Enumerator->klass;
    v426 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v425->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v426;
        p_offset += 4;
        if ( !v426 )
          goto LABEL_159;
      }
      p_method = (__int64)&v425->vtable[*p_offset].method;
    }
    else
    {
LABEL_159:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v429 = Enumerator->klass;
    v430 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v431 = (System_Collections_IEnumerator_c **)&v429->_1.interfaceOffsets->offset;
      while ( *(v431 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v430;
        v431 += 2;
        if ( !v430 )
          goto LABEL_166;
      }
      v432 = (__int64)&v429->vtable[*(_DWORD *)v431 + 1].method;
    }
    else
    {
LABEL_166:
      v432 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v433 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v432)(
                                        Enumerator,
                                        *(_QWORD *)(v432 + 8));
    if ( !v433 )
      sub_1BCAA3C(0LL, v434);
    v435 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v433->klass->vtable._0_Equals.methodPtr) < (unsigned int)v435
      || (UnityEngine_Transform_c *)v433->klass->_2.typeHierarchy[v435 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_438;
    }
    gameObject = UnityEngine_Component__get_gameObject(v433, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v437);
    v438 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v440 = v438;
    if ( !v438 )
      goto LABEL_442;
    v441 = (System_String_o *)v438[2].monitor;
    if ( !v441 )
      sub_1BCAA3C(0LL, v439);
    if ( System_String__StartsWith(v441, (System_String_o *)StringLiteral_1138/*"/BattleActors/"*/, 0LL) && v440[2].monitor )
    {
      v443 = (System_String_o *)v440[2].monitor;
      if ( !v443 )
        sub_1BCAA3C(0LL, v442);
      if ( System_String__StartsWith(v443, (System_String_o *)StringLiteral_1138/*"/BattleActors/"*/, 0LL) )
      {
        v445 = (System_String_o *)v440[2].monitor;
        if ( !v445 )
          sub_1BCAA3C(0LL, v444);
        v446 = System_String__Substring_62420224(v445, v445->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v424 += System_Int32__TryParse(v446, result, 0LL);
      }
    }
  }
  v447 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v447 )
  {
    v448 = *(_QWORD *)v447;
    v449 = v447;
    v450 = *(unsigned __int16 *)(*(_QWORD *)v447 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v447 + 302LL) )
    {
      v451 = (int *)(*(_QWORD *)(v448 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v451 - 1) != System_IDisposable_TypeInfo )
      {
        --v450;
        v451 += 4;
        if ( !v450 )
          goto LABEL_185;
      }
      v452 = v448 + 16LL * *v451 + 312;
    }
    else
    {
LABEL_185:
      v452 = sub_1C1C7C0(v447, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v452)(v449, *(_QWORD *)(v452 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v693, 0LL);
  if ( !seqObject )
    goto LABEL_432;
  v700 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v700 )
    sub_1BCAA3C(0LL, v453);
  v694 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v454 = v700->klass;
          v455 = *(unsigned __int16 *)(&v700->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v700->klass->_2.bitflags2 + 3) )
          {
            v456 = &v454->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v456 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v455;
              v456 += 4;
              if ( !v455 )
                goto LABEL_195;
            }
            v457 = (__int64)&v454->vtable[*v456].method;
          }
          else
          {
LABEL_195:
            v457 = sub_1C1C7C0(v700, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v457)(
                  v700,
                  *(_QWORD *)(v457 + 8)) & 1) == 0 )
          {
            v647 = 0LL;
            goto LABEL_380;
          }
          v458 = v700->klass;
          v459 = *(unsigned __int16 *)(&v700->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v700->klass->_2.bitflags2 + 3) )
          {
            v460 = (System_Collections_IEnumerator_c **)&v458->_1.interfaceOffsets->offset;
            while ( *(v460 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v459;
              v460 += 2;
              if ( !v459 )
                goto LABEL_202;
            }
            v461 = (__int64)&v458->vtable[*(_DWORD *)v460 + 1].method;
          }
          else
          {
LABEL_202:
            v461 = sub_1C1C7C0(v700, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v462 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v461)(
                                              v700,
                                              *(_QWORD *)(v461 + 8));
          if ( !v462 )
            sub_1BCAA3C(0LL, v463);
          v464 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v462->klass->vtable._0_Equals.methodPtr) < (unsigned int)v464
            || (UnityEngine_Transform_c *)v462->klass->_2.typeHierarchy[v464 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_441:
            sub_1BCACFC(v462);
LABEL_442:
            sub_1BCAA3C(v438, v439);
          }
          v465 = UnityEngine_Component__get_gameObject(v462, 0LL);
          if ( !v465 )
            sub_1BCAA3C(0LL, v466);
          v467 = UnityEngine_GameObject__GetComponent_object_(
                   v465,
                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v469 = (WellFired_USTimelineContainer_o *)v467;
          if ( !v467 )
            sub_1BCAA3C(0LL, v468);
          v470 = (System_String_o *)v467[2].monitor;
          if ( !v470 )
            sub_1BCAA3C(0LL, v468);
          v472 = System_String__StartsWith(v470, (System_String_o *)StringLiteral_1132/*"/AllEffects/"*/, 0LL);
          if ( v472 )
          {
            affectedObjectPath = v469->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1BCAA3C(0LL, v471);
            v474 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v474 = 0LL;
          }
          v475 = v469->fields.affectedObjectPath;
          if ( !v475 )
            sub_1BCAA3C(0LL, v471);
          v477 = System_String__StartsWith(v475, (System_String_o *)StringLiteral_1153/*"/CutIns/"*/, 0LL);
          if ( v477 )
          {
            v478 = v469->fields.affectedObjectPath;
            if ( !v478 )
              sub_1BCAA3C(0LL, v476);
            v474 = System_String__Substring(v478, 8, 0LL);
          }
          v479 = v469->fields.affectedObjectPath;
          if ( !v479 )
            sub_1BCAA3C(0LL, v476);
          if ( !System_String__StartsWith(v479, (System_String_o *)StringLiteral_1150/*"/BattleCamera"*/, 0LL) )
          {
            v481 = v469->fields.affectedObjectPath;
            if ( !v481 )
              sub_1BCAA3C(0LL, v480);
            if ( !System_String__StartsWith(v481, (System_String_o *)StringLiteral_1152/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v482 = (UnityEngine_Component_o *)object[8].klass;
          if ( !v482 )
            sub_1BCAA3C(0LL, v480);
          v483 = UnityEngine_Component__get_transform(v482, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v469, v483, 0LL);
        }
        v484 = v469->fields.affectedObjectPath;
        if ( !v484 )
          sub_1BCAA3C(0LL, v480);
        if ( System_String__StartsWith(v484, (System_String_o *)StringLiteral_1127/*"/Actor/chr"*/, 0LL) )
          break;
        v528 = v469->fields.affectedObjectPath;
        if ( !v528 )
          sub_1BCAA3C(0LL, v485);
        v529 = System_String__StartsWith(v528, (System_String_o *)StringLiteral_1138/*"/BattleActors/"*/, 0LL);
        if ( v529 )
          v474 = v469->fields.affectedObjectPath;
        if ( v474 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v529, v474, v530) )
            goto LABEL_340;
          if ( v472 )
          {
            v532 = System_String__IndexOf(v474, 0x2Fu, 0LL);
            if ( (v532 & 0x80000000) == 0 )
            {
              v533 = System_String__Substring(v474, v532 + 1, 0LL);
              v474 = System_String__Substring_62420224(v474, 0, v532, 0LL);
              goto LABEL_294;
            }
            if ( (v694 & 1) != 0 )
            {
              v533 = 0LL;
LABEL_294:
              v558 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              if ( !v558 )
                sub_1BCAA3C(0LL, v531);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v702,
                v558,
                (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v691 = v533;
              v705 = v702;
              while ( 1 )
              {
                v559 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v705,
                         (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v559 )
                  break;
                v557 = v705.fields._current;
                if ( !v705.fields._current )
                  sub_1BCAA3C(v559, v560);
                v561 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v705.fields._current, 0LL);
                if ( !v561 )
                  sub_1BCAA3C(0LL, v562);
                v563 = System_String__Replace_62420848(
                         v561,
                         (System_String_o *)StringLiteral_726/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v474, v563, 0LL) )
                  goto LABEL_302;
              }
              v557 = 0LL;
LABEL_302:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v705,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v694 = 1;
              goto LABEL_304;
            }
            v533 = 0LL;
            v557 = 0LL;
            v694 = 0;
          }
          else
          {
            v533 = 0LL;
            v557 = 0LL;
          }
LABEL_304:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v531);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v557, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v564);
            v565 = UnityEngine_Object__op_Inequality(v695, 0LL, 0LL);
            if ( v565 )
            {
              if ( !v695 )
                sub_1BCAA3C(v565, v566);
              v569 = v695[19].klass;
              if ( !v569 )
                sub_1BCAA3C(v565, v566);
              v570 = (int32_t)v569[2]._1.name;
            }
            else
            {
              v570 = 0;
            }
            v557 = (Il2CppObject *)BattleSequenceManager__searchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[11].klass),
                                     v474,
                                     v567,
                                     v570,
                                     v568);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v571);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v557, 0LL, 0LL) )
            {
              v578 = (System_Collections_Generic_List_object__o *)object[21].monitor;
              if ( !v578 )
                sub_1BCAA3C(0LL, v564);
              v579 = v578->fields._items;
              v580 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v578->fields._version;
              if ( !v579 )
                sub_1BCAA3C(v578, v564);
              v581 = v578->fields._size;
              if ( (unsigned int)v581 >= v579->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v578,
                  v557,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v580[4] + 192LL) + 112LL));
              }
              else
              {
                v582 = &v579->obj.klass + v581;
                v578->fields._size = v581 + 1;
                v582[4] = (Il2CppClass *)v557;
                sub_1BCA784((PartyOrganizationUtility_o *)(v582 + 4), (int64_t)v557, v572, v573, v574, v575, v576, v577);
              }
              if ( !v557 )
                sub_1BCAA3C(v583, v584);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v557, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v564);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v557, 0LL, 0LL) )
            goto LABEL_340;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v533, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v557 )
              sub_1BCAA3C(IsNullOrEmpty, v586);
            v603 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v557, 0LL);
            if ( !v603 )
              sub_1BCAA3C(0LL, v604);
            v605 = UnityEngine_Transform__Find(v603, v533, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v469, v605, 0LL);
            goto LABEL_340;
          }
          if ( !v557 )
            sub_1BCAA3C(IsNullOrEmpty, v586);
          v587 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v557, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v469, v587, 0LL);
          if ( v477 )
          {
            v588 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v557, 0LL);
            if ( !v588 )
              sub_1BCAA3C(0LL, v589);
            localPosition = UnityEngine_Transform__get_localPosition(v588, 0LL);
            v590 = localPosition.fields.x;
            v591 = localPosition.fields.y;
            v592 = localPosition.fields.z;
            v594 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v557, 0LL);
            v595 = (UnityEngine_GameObject_o *)object[6].monitor;
            if ( !v595 )
              sub_1BCAA3C(0LL, v593);
            v596 = UnityEngine_GameObject__get_transform(v595, 0LL);
            if ( !v594 )
              sub_1BCAA3C(v596, v596);
            UnityEngine_Transform__set_parent(v594, v596, 0LL);
            v597 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v557, 0LL);
            if ( !v597 )
              sub_1BCAA3C(0LL, v598);
            v710.fields.x = v590;
            v710.fields.y = v591;
            v710.fields.z = v592;
            UnityEngine_Transform__set_localPosition(v597, v710, 0LL);
            BattleSequenceManager__updateCutInEvents(v599, sourcea, v474, (UnityEngine_GameObject_o *)v557, v600);
            v602 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3257/*"BattleCutIn"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v601);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v557, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3252/*"BattleBG"*/, 0LL) )
              goto LABEL_340;
            v602 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3250/*"Battle2D"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v646);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v557, v602, 0LL);
LABEL_340:
          v606 = v469->fields.affectedObjectPath;
          if ( !v606 )
            sub_1BCAA3C(0LL, v531);
          if ( System_String__StartsWith(v606, (System_String_o *)StringLiteral_1138/*"/BattleActors/"*/, 0LL) )
          {
            v608 = v469->fields.affectedObjectPath;
            if ( !v608 )
              sub_1BCAA3C(0LL, v607);
            v609 = System_String__Substring_62420224(v608, v608->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v609, &targetPosIndex, 0LL);
            v611 = --targetPosIndex;
            if ( v424 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v469, v611, v610);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v469,
                targetPosIndex,
                v612);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v469, v611, v610);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v469,
                         1,
                         (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v615 = EventCount;
          if ( !EventCount )
            sub_1BCAA3C(0LL, v614);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1BCAA44(EventCount, v614);
              v618 = (WellFired_USTimelineEvent_o *)v615->m_Items[j];
              if ( !v618 )
                sub_1BCAA3C(EventCount, v614);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v618, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v620 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v618, k, 0LL);
                v622 = (Il2CppObject *)v620;
                if ( !v620 )
                  goto LABEL_439;
                v623 = UnityEngine_Object__get_name(v620, 0LL);
                if ( System_String__op_Equality(v623, (System_String_o *)StringLiteral_15019/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v624 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v622->klass->vtable[0].methodPtr) < (unsigned int)v624
                    || (WellFired_USFGOAttachToParentEvent_c *)v622->klass->_2.typeHierarchy[v624 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1BCACFC(v622);
                    goto LABEL_441;
                  }
                  v625 = System_String__op_Equality(
                           (System_String_o *)v622[5].klass,
                           (System_String_o *)StringLiteral_3254/*"BattleCamera"*/,
                           0LL);
                  if ( v625 )
                  {
                    v633 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v633 )
                      sub_1BCAA3C(0LL, v626);
                    v634 = UnityEngine_Component__get_transform(v633, 0LL);
                    v622[4].klass = (Il2CppClass *)v634;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v622[4],
                      (int64_t)v634,
                      v635,
                      v636,
                      v637,
                      v638,
                      v639,
                      v640);
                  }
                  else
                  {
                    if ( !v198 )
                      sub_1BCAA3C(v625, v626);
                    v641 = v198->fields._items;
                    v642 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v198->fields._version;
                    if ( !v641 )
                      sub_1BCAA3C(v625, v626);
                    v643 = v198->fields._size;
                    if ( (unsigned int)v643 >= v641->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v198,
                        v622,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v642[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v644 = &v641->obj.klass + v643;
                      v198->fields._size = v643 + 1;
                      v644[4] = (Il2CppClass *)v622;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)(v644 + 4),
                        (int64_t)v622,
                        v627,
                        v628,
                        v629,
                        v630,
                        v631,
                        v632);
                    }
                  }
                }
              }
              max_length = v615->max_length;
            }
          }
        }
      }
      v486 = (UnityEngine_GameObject_o *)object[6].klass;
      if ( !v486 )
        sub_1BCAA3C(0LL, v485);
      v488 = UnityEngine_GameObject__get_transform(v486, 0LL);
      v489 = v469->fields.affectedObjectPath;
      if ( !v489 )
        sub_1BCAA3C(0LL, v487);
      v490 = System_String__Replace_62420848(
               v489,
               (System_String_o *)StringLiteral_1127/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_18146/*"chr(Clone)"*/,
               0LL);
      if ( !v488 )
        sub_1BCAA3C(v490, v490);
      v491 = UnityEngine_Transform__Find(v488, v490, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v469, v491, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v469, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v492);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v495 = v469->fields.affectedObjectPath;
        if ( !v495 )
          sub_1BCAA3C(0LL, v494);
        v496 = System_String__StartsWith(v495, (System_String_o *)StringLiteral_1129/*"/Actor/chr/body_level_"*/, 0LL);
        v498 = &StringLiteral_17530/*"body_level_"*/;
        if ( v496 )
          goto LABEL_236;
        v499 = v469->fields.affectedObjectPath;
        if ( !v499 )
          sub_1BCAA3C(0LL, v497);
        v500 = System_String__StartsWith(v499, (System_String_o *)StringLiteral_1130/*"/Actor/chr/weapon_level_"*/, 0LL);
        v498 = &StringLiteral_24927/*"weapon_level_"*/;
        if ( v500 )
        {
LABEL_236:
          v501 = (System_String_o *)*v498;
          if ( *v498 )
            break;
        }
      }
    }
    v502 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v502 )
      sub_1BCAA3C(0LL, v497);
    v503 = (System_String_o *)StringLiteral_1/*""*/;
    v504 = UnityEngine_GameObject__get_transform(v502, 0LL);
    if ( !v504 )
      sub_1BCAA3C(0LL, v505);
    v507 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v504, (System_String_o *)StringLiteral_18146/*"chr(Clone)"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v506);
    v508 = UnityEngine_Object__op_Inequality(v507, 0LL, 0LL);
    if ( v508 )
      break;
LABEL_281:
    v540 = v469->fields.affectedObjectPath;
    v541 = System_String__Concat_62401220((System_String_o *)StringLiteral_1128/*"/Actor/chr/"*/, v501, 0LL);
    if ( !v541 )
      sub_1BCAA3C(0LL, v542);
    if ( !v540 )
      sub_1BCAA3C(v541, v542);
    v543 = System_String__Substring(v540, v541->fields._stringLength, 0LL);
    if ( !v543 )
      sub_1BCAA3C(0LL, v544);
    v545 = System_String__Split(v543, 0x2Fu, 0, 0LL);
    if ( !v545 )
      sub_1BCAA3C(0LL, v546);
    if ( !v545->max_length )
      sub_1BCAA44(v545, v546);
    v548 = System_String__Concat_62401220(v501, v545->m_Items[0], 0LL);
    v549 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v549 )
      sub_1BCAA3C(0LL, v547);
    v551 = UnityEngine_GameObject__get_transform(v549, 0LL);
    v552 = v469->fields.affectedObjectPath;
    if ( !v552 )
      sub_1BCAA3C(0LL, v550);
    v553 = System_String__Replace_62420848(
             v552,
             (System_String_o *)StringLiteral_1127/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_18146/*"chr(Clone)"*/,
             0LL);
    if ( !v553 )
      sub_1BCAA3C(0LL, v554);
    v555 = System_String__Replace_62420848(v553, v548, v503, 0LL);
    if ( !v551 )
      sub_1BCAA3C(v555, v555);
    v556 = UnityEngine_Transform__Find(v551, v555, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v469, v556, 0LL);
  }
  if ( !v507 )
    sub_1BCAA3C(v508, v509);
  v511 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v507, 0LL);
  if ( !v511 )
    sub_1BCAA3C(0LL, v510);
  while ( 2 )
  {
    v512 = v511->klass;
    v513 = *(unsigned __int16 *)(&v511->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v511->klass->_2.bitflags2 + 3) )
    {
      v514 = &v512->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v514 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v513;
        v514 += 4;
        if ( !v513 )
          goto LABEL_248;
      }
      v515 = (__int64)&v512->vtable[*v514].method;
    }
    else
    {
LABEL_248:
      v515 = sub_1C1C7C0(v511, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v515)(v511, *(_QWORD *)(v515 + 8)) & 1) == 0 )
    {
      v690 = v503;
      v691 = 0LL;
      goto LABEL_273;
    }
    v516 = v511->klass;
    v517 = *(unsigned __int16 *)(&v511->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v511->klass->_2.bitflags2 + 3) )
    {
      v518 = (System_Collections_IEnumerator_c **)&v516->_1.interfaceOffsets->offset;
      while ( *(v518 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v517;
        v518 += 2;
        if ( !v517 )
          goto LABEL_255;
      }
      v519 = (__int64)&v516->vtable[*(_DWORD *)v518 + 1].method;
    }
    else
    {
LABEL_255:
      v519 = sub_1C1C7C0(v511, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v520 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v519)(
                                        v511,
                                        *(_QWORD *)(v519 + 8));
    v522 = (UnityEngine_Object_o *)v520;
    if ( !v520 )
      sub_1BCAA3C(0LL, v521);
    v523 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v520->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v523
      && (UnityEngine_Transform_c *)v520->klass->_2.typeHierarchy[v523 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v524 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v520, 0LL);
      if ( !v524 )
        sub_1BCAA3C(0LL, v525);
      v526 = UnityEngine_Object__get_name(v524, 0LL);
      if ( !v526 )
        sub_1BCAA3C(0LL, v527);
      if ( !System_String__StartsWith(v526, v501, 0LL) )
        continue;
      v690 = UnityEngine_Object__get_name(v522, 0LL);
      v691 = 0LL;
LABEL_273:
      v534 = sub_1BCA91C(v511, System_IDisposable_TypeInfo);
      v503 = v690;
      v535 = v534;
      if ( v534 )
      {
        v536 = *(_QWORD *)v534;
        v537 = *(unsigned __int16 *)(*(_QWORD *)v534 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v534 + 302LL) )
        {
          v538 = (int *)(*(_QWORD *)(v536 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v538 - 1) != System_IDisposable_TypeInfo )
          {
            --v537;
            v538 += 4;
            if ( !v537 )
              goto LABEL_278;
          }
          v539 = v536 + 16LL * *v538 + 312;
        }
        else
        {
LABEL_278:
          v539 = sub_1C1C7C0(v534, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v539)(v535, *(_QWORD *)(v539 + 8));
      }
      goto LABEL_281;
    }
    break;
  }
  sub_1BCACFC(v520);
  v681 = v680;
  v683 = v682;
  v674 = sub_1BCA91C(v511, System_IDisposable_TypeInfo);
  v675 = v674;
  if ( v674 )
  {
    v676 = *(_QWORD *)v674;
    v677 = *(unsigned __int16 *)(*(_QWORD *)v674 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v674 + 302LL) )
    {
      v678 = (int *)(*(_QWORD *)(v676 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v678 - 1) != System_IDisposable_TypeInfo )
      {
        --v677;
        v678 += 4;
        if ( !v677 )
          goto LABEL_473;
      }
      v679 = v676 + 16LL * *v678 + 312;
    }
    else
    {
LABEL_473:
      v679 = sub_1C1C7C0(v674, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v679)(v675, *(_QWORD *)(v679 + 8));
  }
  if ( v691 )
    sub_1BCAA34(v691);
  if ( v681 != 1 )
  {
    v684 = sub_1BCA91C(v700, System_IDisposable_TypeInfo);
    v685 = v684;
    if ( v684 )
    {
      v686 = *(_QWORD *)v684;
      v687 = *(unsigned __int16 *)(*(_QWORD *)v684 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v684 + 302LL) )
      {
        v688 = (int *)(*(_QWORD *)(v686 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v688 - 1) != System_IDisposable_TypeInfo )
        {
          --v687;
          v688 += 4;
          if ( !v687 )
            goto LABEL_522;
        }
        v689 = v686 + 16LL * *v688 + 312;
      }
      else
      {
LABEL_522:
        v689 = sub_1C1C7C0(v684, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v689)(v685, *(_QWORD *)(v689 + 8));
    }
    sub_1CB5270();
  }
  v647 = *(_QWORD *)__cxa_begin_catch(v683);
  __cxa_end_catch();
LABEL_380:
  seqObject = sub_1BCA91C(v700, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v648 = *(_QWORD *)seqObject;
    v649 = seqObject;
    v650 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v651 = (int *)(*(_QWORD *)(v648 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v651 - 1) != System_IDisposable_TypeInfo )
      {
        --v650;
        v651 += 4;
        if ( !v650 )
          goto LABEL_385;
      }
      v652 = v648 + 16LL * *v651 + 312;
    }
    else
    {
LABEL_385:
      v652 = sub_1C1C7C0(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v652)(v649, *(_QWORD *)(v652 + 8));
  }
  if ( v647 )
    sub_1BCAA34(v647);
  if ( !v198 )
    goto LABEL_432;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v702,
    v198,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v702;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[5].klass,
          (UnityEngine_GameObject_o *)object[6].klass,
          (System_Collections_Generic_List_GameObject__o *)object[21].monitor,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1BCAA3C(0LL, v653);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v654);
  seqObject = UnityEngine_Object__op_Inequality(v695, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v695 )
      goto LABEL_432;
    if ( LOBYTE(v695[20].klass) )
      goto LABEL_423;
    v655 = v695[19].klass;
    if ( !v655 )
      goto LABEL_432;
    if ( !HIDWORD(v655->vtable._1_Finalize.method) && !BattleActorControl__isNoVoice((BattleActorControl_o *)v695, 0LL) )
    {
      v656 = (UnityEngine_Object_o *)object[5].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
      seqObject = UnityEngine_Object__op_Inequality(v656, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v657 = object[5].klass;
        if ( !v657 )
          goto LABEL_432;
        v658 = *(UnityEngine_Object_o **)&v657->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
        if ( UnityEngine_Object__op_Inequality(v658, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[23].monitor) = 0;
            v661 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v659);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v661,
                   FileName,
                   v663) )
            {
              LOBYTE(object[23].monitor) = 1;
            }
            v665 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v664);
            v666 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v665,
              v666,
              v667);
            v668 = v695[19].klass;
            if ( v668 )
            {
              v669 = (int)v668[1].vtable._2_GetHashCode.methodPtr;
              v670 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, callback);
                v670 = BalanceConfig_TypeInfo;
              }
              if ( v669 == v670->static_fields->TreasureDeviceIdMashu3 )
              {
                v671 = (int32_t)object[11].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo, callback);
                v672 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v671,
                  v672,
                  v673);
              }
              goto LABEL_423;
            }
          }
          goto LABEL_432;
        }
      }
    }
  }
LABEL_423:
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, callback);
  System_GC__Collect_63447616(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  int size; // w8
  int v11; // w24
  int32_t v12; // w22

  if ( (byte_4B188FD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__,
      tlcont,
      *(_QWORD *)&targetIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7, v8);
    byte_4B188FD = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      v11 = size - 1;
      if ( size < 1 )
      {
LABEL_12:
        if ( tlcont )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)tlcont,
                                                                            0LL);
          if ( battleTargetList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleTargetList, 0, 0LL);
            return;
          }
        }
      }
      else
      {
        v12 = 0;
        while ( 1 )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v12,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !battleTargetList )
            goto LABEL_21;
          if ( HIDWORD(battleTargetList[1].fields._items) == targetIndex )
            break;
          if ( v11 == v12 )
            goto LABEL_12;
          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
          ++v12;
          if ( !battleTargetList )
            goto LABEL_21;
        }
        battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v12,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( battleTargetList )
          {
            battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                              (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                              0LL);
            if ( battleTargetList )
            {
              battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                                (UnityEngine_GameObject_o *)battleTargetList,
                                                                                0LL);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(
                  tlcont,
                  (UnityEngine_Transform_o *)battleTargetList,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(battleTargetList, tlcont);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_4B18901 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, tlcont, *(_QWORD *)&targetIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v9, v10);
    sub_1BCA7E0(&StringLiteral_14663/*"Tmp_Target"*/, v11, v12);
    byte_4B18901 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( !battleTargetList )
      goto LABEL_15;
    if ( battleTargetList->fields._size > targetIndex )
    {
      battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        battleTargetList,
                                                                        targetIndex,
                                                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
      if ( battleTargetList )
      {
        battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                          (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                          0LL);
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)battleTargetList,
                                                                            0LL);
          if ( tlcont )
          {
            WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_1BCAA3C(battleTargetList, tlcont);
    }
    v14 = (UnityEngine_GameObject_o *)sub_1BCAA2C(
                                        UnityEngine_GameObject_TypeInfo,
                                        tlcont,
                                        *(_QWORD *)&targetIndex,
                                        method);
    UnityEngine_GameObject___ctor(v14, (System_String_o *)StringLiteral_14663/*"Tmp_Target"*/, 0LL);
    if ( !v14 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v14, 0LL);
    if ( !tlcont )
      goto LABEL_15;
    WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0LL);
    AffectedObject = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)tlcont,
                                                                      0LL);
    if ( !AffectedObject )
      goto LABEL_15;
    UnityEngine_Transform__SetParent(AffectedObject, (UnityEngine_Transform_o *)battleTargetList, 0LL);
  }
}


bool __fastcall BattleSequenceManager__updateCutInEvents(
        BattleSequenceManager_o *this,
        System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs,
        System_String_o *cutInName,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  bool v16; // w21
  Il2CppObject *current; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B188E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs, cutInName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v10, v11);
    this = (BattleSequenceManager_o *)sub_1BCA7E0(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v12,
                                        v13);
    byte_4B188E7 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( !evs )
    sub_1BCAA3C(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v16 = v14;
    if ( !v14 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1BCAA3C(v14, v15);
    if ( System_String__op_Equality((System_String_o *)v26.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1BCA784((PartyOrganizationUtility_o *)&current[3].monitor, (int64_t)obj, v18, v19, v20, v21, v22, v23);
      v24 = 4;
      goto LABEL_10;
    }
  }
  v24 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v16 && v24 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, method, v2);
    byte_4B109C7 = 1;
  }
  this->fields.originalRotation = UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActorControl_o *__fastcall BattleSequenceManager_BattleTarget__getBattleActor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields.targetActor;
}


int32_t __fastcall BattleSequenceManager_BattleTarget__get_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields._positionIndex_k__BackingField;
}


void __fastcall BattleSequenceManager_BattleTarget__restoreTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Component_o *targetActor; // x0

  if ( this->fields.isSave )
  {
    targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
    if ( !targetActor
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL
      || (UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)targetActor,
            this->fields.originalRotation,
            0LL),
          (targetActor = (UnityEngine_Component_o *)this->fields.targetActor) == 0LL)
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL )
    {
      sub_1BCAA3C(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetActor, 0LL, v2, v3, v4, v5, v6, v7);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager_BattleTarget__saveTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *targetActor; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
  this->fields.isSave = 1;
  if ( !targetActor )
    goto LABEL_7;
  targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL);
  if ( !targetActor
    || (localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalRotation = localRotation,
        !targetActor)
    || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalScale = localScale,
        !targetActor) )
  {
LABEL_7:
    sub_1BCAA3C(targetActor, method);
  }
  return UnityEngine_Component__get_gameObject(targetActor, 0LL);
}


void __fastcall BattleSequenceManager_BattleTarget__set_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._positionIndex_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager_BattleTarget__setup(
        BattleSequenceManager_BattleTarget_o *this,
        BattleActorControl_o *bac,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleActorControl_o **p_targetActor; // x20

  this->fields.targetActor = bac;
  p_targetActor = &this->fields.targetActor;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetActor,
    (int64_t)bac,
    *(int64_t *)&index,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *((_DWORD *)p_targetActor + 9) = index;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__112___ctor(
        BattleSequenceManager__WaitEndSequence_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSequenceManager__WaitEndSequence_d__112__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__112_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleSequenceManager__WaitEndSequence_d__112_o *v8; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t wait_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4B18A30 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__112_o *)sub_1BCA7E0(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method,
                                                                v2);
    byte_4B18A30 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
    v8->fields._wait_5__2 = v11;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._wait_5__2, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (int64_t)v8->fields._wait_5__2;
    v8->fields.__2__current = (Il2CppObject *)wait_5__2;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(p__2__current, wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSequenceManager__WaitEndSequence_d__112__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__112_o *this,
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
  v8 = sub_1BCA7F4(&Method_BattleSequenceManager__WaitEndSequence_d__112_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__112__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__112__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__112_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSequenceManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B18A2A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSequenceManager___c_TypeInfo, v1, v2);
    byte_4B18A2A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleSequenceManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__80_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1BCAA3C(this, x1);
  return System_Single__CompareTo_63288996(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__80_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1BCAA3C(this, x1);
  return System_Single__CompareTo_63288996(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool __fastcall BattleSequenceManager___c___setup_b__92_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCAA3C(this, 0LL);
  return SwitchActiveBaseConditionComponent__IsTimingBeforeTreasureDevice(comp, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass118_0___ctor(
        BattleSequenceManager___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass118_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass118_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0LL )
    sub_1BCAA3C(this, x);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass121_0___ctor(
        BattleSequenceManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass121_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass121_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass121_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B18A2B & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass121_0_o *)sub_1BCA7E0(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x,
                                                               method);
    byte_4B18A2B = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass121_0_o *)v4->fields.targetList) == 0LL )
    sub_1BCAA3C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleSequenceManager___c__DisplayClass128_0___ctor(
        BattleSequenceManager___c__DisplayClass128_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass128_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass128_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void __fastcall BattleSequenceManager___c__DisplayClass147_0___ctor(
        BattleSequenceManager___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass147_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass147_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_0___ctor(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass79_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleSequenceManager_o *_4__this; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v25; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v4 = this;
  if ( (byte_4B18A2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass79_0__loadSequence_b__1__, v7, v8);
    sub_1BCA7E0(&StringLiteral_13098/*"StandardCutIn"*/, v9, v10);
    this = (BattleSequenceManager___c__DisplayClass79_0_o *)sub_1BCA7E0(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v11,
                                                              v12);
    byte_4B18A2C = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass79_0_o *)AssetData__GetObject_object__49237568(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13098/*"StandardCutIn"*/,
                                                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.CutInPrefab,
          (int64_t)this,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (this = (BattleSequenceManager___c__DisplayClass79_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v25 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1BCAA2C(
                                                                    ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v21,
                                                                    v22,
                                                                    v23);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass79_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v31, v32, v33, v34, v35, v36);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v21);
  ServantAssetLoadManager__LoadNoblePhantasm(
    v25,
    chrId,
    limitCount,
    treasureDeviceId,
    treasureDeviceLv,
    npChargeStage,
    _9__1,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__int__o *paramsFromMstTDSeqWeight,
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
  __int64 v25; // x20
  void *_4__this; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t *v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  struct BattleActorControl_o *battleActor; // x8
  int32x2_t *battleSvtData; // x8
  struct BattleSequenceManager_o *v50; // x8
  struct BattleSequenceManager_o *v51; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x22
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Action_o *v58; // x23
  struct BattleSequenceManager_o *v59; // x8
  struct BattleSequenceManager_o *v60; // x8
  _DWORD *v61; // x20
  int v62; // w8
  int v63; // w9
  __int64 v64; // x10
  struct BattleSequenceManager_o *v65; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18A2D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, paramsFromMstTDSeqWeight);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_System_Tuple_int__int__int__get_Item1__, v13, v14);
    sub_1BCA7E0(&Method_System_Tuple_int__int__int__get_Item2__, v15, v16);
    sub_1BCA7E0(&Method_System_Tuple_int__int__int__get_Item3__, v17, v18);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass79_1__loadSequence_b__2__, v19, v20);
    sub_1BCA7E0(&BattleSequenceManager___c__DisplayClass79_1_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_9637/*"NoblePhantasm_"*/, v23, v24);
    byte_4B18A2D = 1;
  }
  v25 = sub_1BCAA2C(BattleSequenceManager___c__DisplayClass79_1_TypeInfo, obj, paramsFromMstTDSeqWeight, method);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_30;
  *(_QWORD *)(v25 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 24), (int64_t)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 16) = obj;
  v34 = (int64_t *)(v25 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)obj, v35, v36, v37, v38, v39, v40);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  v47 = *v34;
  *((_QWORD *)_4__this + 11) = *v34;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)_4__this + 88), v47, v41, v42, v43, v44, v45, v46);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_30;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_30;
  battleSvtData = (int32x2_t *)battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  battleSvtData[94].n64_u64[0] = vmax_s32(*(int32x2_t *)&paramsFromMstTDSeqWeight->fields.m_Item1, 0LL).n64_u64[0];
  v50 = this->fields.__4__this;
  if ( !v50 )
    goto LABEL_30;
  v50->fields._SeqId_k__BackingField = paramsFromMstTDSeqWeight->fields.m_Item3;
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_30;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v51 = this->fields.__4__this;
    if ( !v51 )
      goto LABEL_30;
    overwriteSvtVoiceId = v51->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v53 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v54 = System_String__Concat_62401220((System_String_o *)StringLiteral_9637/*"NoblePhantasm_"*/, v53, 0LL);
  v58 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v55, v56, v57);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v25,
    Method_BattleSequenceManager___c__DisplayClass79_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_30;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v54, v58, 1, 0LL);
  v59 = this->fields.__4__this;
  if ( !v59 )
    goto LABEL_30;
  _4__this = v59->fields.seqObject;
  if ( !_4__this )
    goto LABEL_30;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v60 = this->fields.__4__this;
  if ( !v60 )
    goto LABEL_30;
  v61 = _4__this;
  v60->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v61 )
    goto LABEL_30;
  v62 = v61[6];
  if ( v62 < 1 )
    return;
  v63 = 0;
  while ( 1 )
  {
    if ( v62 == v63 )
      sub_1BCAA44(_4__this, v27);
    v64 = *(_QWORD *)&v61[2 * v63 + 8];
    if ( !v64 )
      goto LABEL_30;
    if ( !*(_DWORD *)(v64 + 64) && *(_BYTE *)(v64 + 69) )
      break;
    if ( v62 == ++v63 )
      return;
  }
  v65 = this->fields.__4__this;
  if ( !v65 )
LABEL_30:
    sub_1BCAA3C(_4__this, v27);
  v65->fields.isNoDamageMotionInDamageNoble = 1;
}


void __fastcall BattleSequenceManager___c__DisplayClass79_1___ctor(
        BattleSequenceManager___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleSequenceManager___c__DisplayClass79_1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleSequenceManager___c__DisplayClass79_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  int v15; // w8
  BattleSequenceManager___c__DisplayClass79_1_o *v16; // x21
  unsigned int v17; // w23
  int v18; // w24
  UnityEngine_Behaviour_o *v19; // x22
  struct BattleSequenceManager___c__DisplayClass79_0_o *v20; // x8
  BattleSequenceManager_o *v21; // x21
  System_Action_o *_9__3; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  v3 = this;
  if ( (byte_4B18A2E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v4, v5);
    sub_1BCA7E0(&Method_BattleSequenceManager___c__DisplayClass79_1__loadSequence_b__3__, v6, v7);
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B18A2E = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_20;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v15 = (int)this->fields.CS___8__locals1;
  v16 = this;
  if ( v15 >= 1 )
  {
    v17 = 0;
    v18 = 1;
    while ( 1 )
    {
      if ( v17 >= v15 )
        sub_1BCAA44(this, method);
      v19 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v16->fields.__9__4 + (int)v17);
      if ( !v19 )
        break;
      this = (BattleSequenceManager___c__DisplayClass79_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v19->klass[1]._2.typeHierarchy)(
                                                                v19,
                                                                v19->klass[1]._2.unity_user_data);
      if ( (v18 & (unsigned int)this & 1) != 0 )
      {
        v12 = *(System_String_o **)&v19[2].fields.m_CachedPtr;
        v18 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v19, 0, 0LL);
      }
      v15 = (int)v16->fields.CS___8__locals1;
      if ( (int)++v17 >= v15 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1BCAA3C(this, method);
  }
LABEL_15:
  v20 = v3->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_20;
  v21 = v20->fields.__4__this;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v13, v14);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_BattleSequenceManager___c__DisplayClass79_1__loadSequence_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__3, (int64_t)_9__3, v23, v24, v25, v26, v27, v28);
  }
  if ( !v21 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v21, v12, _9__3, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleSequenceManager___c__DisplayClass79_1_o *v3; // x19
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
  struct BattleSequenceManager___c__DisplayClass79_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass79_0_o *v18; // x8
  struct BattleSequenceManager_o *v19; // x8
  BattleSequenceManager___c__DisplayClass79_1_o *v20; // x20
  struct BattleSequenceManager___c__DisplayClass79_0_o *v21; // x8
  struct BattleSequenceManager_o *v22; // x8
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass79_0_o *v26; // x8
  struct BattleSequenceManager_o *v27; // x21
  struct BattleSequenceManager___c__DisplayClass79_0_o *v28; // x8
  struct BattleSequenceManager_o *v29; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v31; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct BattleSequenceManager___c__DisplayClass79_0_o *v39; // x8
  struct BattleSequenceManager_o *v40; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass79_0_o *v42; // x8
  struct BattleSequenceManager_o *v43; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass79_0_o *v48; // x8
  struct BattleSequenceManager_o *v49; // x10
  struct BattleSequenceManager___c__DisplayClass79_0_o *v50; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v53; // x1
  struct BattleSequenceManager___c__DisplayClass79_0_o *v54; // x8
  struct BattleSequenceManager___c__DisplayClass79_0_o *v55; // x8
  struct BattleSequenceManager_o *v56; // x20
  struct BattleSequenceManager_o *v57; // x8
  struct BattleSequenceManager___c__DisplayClass79_0_o *v58; // x8
  struct BattleSequenceManager_o *v59; // x8
  UnityEngine_Object_o *v60; // x20
  struct BattleSequenceManager___c__DisplayClass79_0_o *v61; // x8
  struct BattleSequenceManager_o *v62; // x8
  __int64 v63; // x2
  __int64 v64; // x3
  struct BattleSequenceManager___c__DisplayClass79_0_o *v65; // x8
  struct BattleSequenceManager_o *v66; // x8
  UIStandFigureM_o *v67; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct BattleSequenceManager___c__DisplayClass79_0_o *v78; // x8

  v3 = this;
  if ( (byte_4B18A2F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12, v13);
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)sub_1BCA7E0(
                                                              &Method_BattleSequenceManager___c__DisplayClass79_1__loadSequence_b__4__,
                                                              v14,
                                                              v15);
    byte_4B18A2F = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v18 = v3->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_73;
  v19 = v18->fields.__4__this;
  if ( !v19 )
    goto LABEL_73;
  v20 = this;
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)v19->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v21 = v3->fields.CS___8__locals1;
  if ( !v21 )
    goto LABEL_73;
  v22 = v21->fields.__4__this;
  if ( !v22 )
    goto LABEL_73;
  v23 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)v22->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v20,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v26 = v3->fields.CS___8__locals1;
    if ( !v26 )
      goto LABEL_73;
    if ( !v20 )
      goto LABEL_73;
    v27 = v26->fields.__4__this;
    if ( !v27 )
      goto LABEL_73;
    v27->fields.faceType = (int32_t)v20[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    v28 = v3->fields.CS___8__locals1;
    if ( !v28 )
      goto LABEL_73;
    v29 = v28->fields.__4__this;
    if ( !v29 )
      goto LABEL_73;
    performance = v29->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v31 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !v31 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v31, (UnityEngine_GameObject_o *)this, 0LL);
    v27->fields.standFigure = MeshLocal;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v27->fields.standFigure,
      (int64_t)MeshLocal,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = v3->fields.CS___8__locals1;
    if ( !v39 )
      goto LABEL_73;
    v40 = v39->fields.__4__this;
    if ( !v40 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v40->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v42 = v3->fields.CS___8__locals1;
    if ( !v42 )
      goto LABEL_73;
    v43 = v42->fields.__4__this;
    if ( !v43 )
      goto LABEL_73;
    monitor = (int32_t)v20[1].monitor;
    v43->fields.loadStandFigureId = monitor;
    battleActor = v42->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0LL);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v20[1].monitor), monitor_high == -1) )
    {
      v55 = v3->fields.CS___8__locals1;
      if ( !v55 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass79_1_o *)v55->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v56 = v55->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass79_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0LL);
      if ( !v56 )
        goto LABEL_73;
      v56->fields.loadStandFigureLimitCount = (int)this;
      v48 = v3->fields.CS___8__locals1;
      if ( !v48 )
        goto LABEL_73;
    }
    else
    {
      v48 = v3->fields.CS___8__locals1;
      if ( !v48 )
        goto LABEL_73;
      v49 = v48->fields.__4__this;
      if ( !v49 )
        goto LABEL_73;
      v49->fields.loadStandFigureLimitCount = monitor_high;
    }
    v57 = v48->fields.__4__this;
    if ( !v57 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)v57->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    v58 = v3->fields.CS___8__locals1;
    if ( !v58 )
      goto LABEL_73;
    v59 = v58->fields.__4__this;
    if ( !v59 )
      goto LABEL_73;
    v60 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v59->fields.loadStandFigureId,
                                                              v59->fields.loadStandFigureLimitCount,
                                                              0LL);
    if ( !v60 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v60, (System_String_o *)this, 0LL);
    v61 = v3->fields.CS___8__locals1;
    if ( !v61 )
      goto LABEL_73;
    v62 = v61->fields.__4__this;
    if ( !v62 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)v62->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
    v65 = v3->fields.CS___8__locals1;
    if ( !v65 )
      goto LABEL_73;
    v66 = v65->fields.__4__this;
    if ( !v66 )
      goto LABEL_73;
    v67 = v66->fields.standFigure;
    loadStandFigureId = v66->fields.loadStandFigureId;
    loadStandFigureLimitCount = v66->fields.loadStandFigureLimitCount;
    faceType = v66->fields.faceType;
    _9__4 = v3->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v63, v64);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v3,
        Method_BattleSequenceManager___c__DisplayClass79_1__loadSequence_b__4__,
        0LL);
      v3->fields.__9__4 = _9__4;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__4, (int64_t)_9__4, v72, v73, v74, v75, v76, v77);
    }
    if ( !v67 )
LABEL_73:
      sub_1BCAA3C(this, method);
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)UIStandFigureM__SetCharacter_41758244(
                                                              v67,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v78 = v3->fields.CS___8__locals1;
      if ( v78 )
      {
        this = (BattleSequenceManager___c__DisplayClass79_1_o *)v78->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v3->fields.obj,
            v78->fields.onComplete,
            0LL);
          return;
        }
      }
      goto LABEL_73;
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v50 = v3->fields.CS___8__locals1;
      if ( !v50 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass79_1_o *)v50->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v50->fields.onComplete;
      obj = v3->fields.obj;
      v53 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleSequenceManager___c__DisplayClass79_1_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v54 = v3->fields.CS___8__locals1;
      if ( !v54 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass79_1_o *)v54->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v54->fields.onComplete;
      obj = v3->fields.obj;
      v53 = (WellFired_USFGOPlayCutInBase_o *)v23;
    }
    this = (BattleSequenceManager___c__DisplayClass79_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v53,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
  }
}


void __fastcall BattleSequenceManager___c__DisplayClass79_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass79_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass79_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1BCAA3C(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass80_0___ctor(
        BattleSequenceManager___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass80_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass80_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass83_0___ctor(
        BattleSequenceManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass83_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  BattleSequenceManager__LoadEndStandFigure(_4__this, this->fields.obj, this->fields.onComplete, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager_onGameObjectLoadComplete___ctor(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

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
      v13 = (Il2CppObject *)sub_1A0F6E4;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A0F6C4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F67C;
}


System_IAsyncResult_o *__fastcall BattleSequenceManager_onGameObjectLoadComplete__BeginInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = obj;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__Invoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    obj,
    *(_QWORD *)&this->fields.extra_arg);
}